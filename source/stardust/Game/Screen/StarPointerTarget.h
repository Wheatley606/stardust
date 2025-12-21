#pragma once

#include "types.h"
#include "JSystem.h"

class StarPointerTarget {
public:
    StarPointerTarget(f32, const TVec3f *, Mtx *, TVec3f);

    float unk_float;      // _0
    TVec3f unk_pos;       // _4
    void* unk_Ptr;        // _10
    Mtx* unk_MtxPtr;      // _18
    TVec3f* unk_Vec3fPtr; // _20
};
static_assert(sizeof(StarPointerTarget) == 0x28, "StarPointerTarget Size");