#pragma once

#include "stardust.h"

class MorphItemNeoFoo : public MorphItemObjNeo {
public:
    MorphItemNeoFoo(const char *pName);

    virtual u32 getPowerUp();
    virtual void emitAppearEffects();
};