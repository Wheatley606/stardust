#pragma once

#include "lib/socket/Socket.h"
#include "lib.hpp"
#include "stardust.h"
#include "program/version.hpp"

#include "mods/MorphItemNeoFoo/MorphItemNeoFoo.h"
#include "mods/MorphItemNeoIce/MorphItemNeoIce.h"

#define NUM_ACTORS 2

// VTABLE PATCH
#define VIRTUAL_INSERTION_INDEX 14

bool FUN_000BEA10(LiveActor* self)
{
    return false;
}

int vtableSize(void** vtable)
{
    int size = 0;
    while (*vtable != (void*)0)
    {
        size++;
        vtable++;
    }

    return size;
}

void** patchVTable(void** oldVTable)
{
	int size = vtableSize(oldVTable);

    void** newVtable = new void*[size + 1];

    for (int i = 0; i < size + 1; i++)
    {
        if (i < VIRTUAL_INSERTION_INDEX)
        {
            newVtable[i] = oldVTable[i];
        }
        else if (i == VIRTUAL_INSERTION_INDEX)
        {
            newVtable[i] = (void*)&FUN_000BEA10;
        }
        else
        {
            newVtable[i] = oldVTable[i - 1];
        }
    }

    return newVtable;
}

template<class T>
NameObj* createObjExt(const char *pName) 
{ 
    T* inst = new T(pName);
    
    if (exl::util::impl::DetermineUserVersionInternal() >= 0xF140) 
    {
        *(void**)inst = patchVTable(*(void***)inst);
    }

    return inst;
}

const CreateActorEntry cCreateTable[NUM_ACTORS] = 
{
    { "MorphItemNeoFoo",    createObjExt<MorphItemNeoFoo> },
    { "MorphItemNeoIce",    createObjExt<MorphItemNeoIce> }
};

HOOK_DEFINE_TRAMPOLINE(ExtendedObjectFactoryFunc) 
{
    static void* Callback(const char* pName) 
    {
        void* creator = Orig(pName);

        if (!creator) {
            for (s32 i = 0; i < NUM_ACTORS; i++) 
            {
                const CreateActorEntry entry = cCreateTable[i];

                if (MR::isEqualStringCase(entry.pActorName, pName)) 
                {
                    creator = (void*)entry.mCreationFunc;

                    break;
                }
            }
        }

        return creator;
    }
};

namespace mods::install
{
    inline void ExtendedObjectFactory() 
    {
        logger::log(std::format("Installing Patch - Extended Actor Factory\n").c_str());

        ExtendedObjectFactoryFunc::InstallAtFuncPtr(&NameObjFactory::getCreator);
    }
}