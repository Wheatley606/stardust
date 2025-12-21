#pragma once

#include "lib/socket/Socket.h"
#include "lib.hpp"
#include "stardust.h"

#include "mods/MorphItemNeoFoo/MorphItemNeoFoo.h"
#include "mods/MorphItemNeoIce/MorphItemNeoIce.h"

#define NUM_ACTORS 2

template<class T>
NameObj* createObjExt(const char *pName) { return new T(pName); }

const CreateActorEntry cCreateTable[NUM_ACTORS] = 
{
    { "MorphItemNeoFoo",    createObjExt<MorphItemNeoFoo> },
    { "MorphItemNeoIce",    createObjExt<MorphItemNeoIce> }
};

HOOK_DEFINE_TRAMPOLINE(ExtendedObjectFactoryFunc) {
    static void* Callback(const char* pName) 
    {
        void* creator = Orig(pName);

        if (!creator) {
            for (s32 i = 0; i < NUM_ACTORS; i++) {
                const CreateActorEntry entry = cCreateTable[i];

                if (MR::isEqualStringCase(entry.pActorName, pName)) {
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