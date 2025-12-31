#pragma once

#include "lib.hpp"
#include "stardust.h"

namespace module = exl::util::modules;

namespace stardust::utils
{
    inline void PatchEntryString(u64 EntryOffset, u64 StringAddress)
    {
        u64 ObjFactoryListOffset = reinterpret_cast<uintptr_t>((void*)(((char*)&NameObjFactoryPatch::NameObjListAccessor) + EntryOffset));
        *(u64*)(ObjFactoryListOffset) = EntryOffset;
    }

    inline void PatchEntryCreateFunction(u64 EntryOffset, u64 CreateFunctionAddress)
    {
        u64 ObjFactoryListOffset = reinterpret_cast<uintptr_t>((void*)(((char*)&NameObjFactoryPatch::NameObjListAccessor) + EntryOffset));
        *(u64*)(ObjFactoryListOffset + 8) = CreateFunctionAddress;
    }

    inline void PatchEntry(u64 EntryOffset, u64 StringAddress, u64 CreateFunctionAddress)
    {
        u64 ObjFactoryListOffset = reinterpret_cast<uintptr_t>((void*)(((char*)&NameObjFactoryPatch::NameObjListAccessor) + EntryOffset));
        *(u64*)(ObjFactoryListOffset) = StringAddress;
        *(u64*)(ObjFactoryListOffset + 8) = CreateFunctionAddress;
    }
}