#pragma once

#include "stardust.h"

class MorphItemNeoIce : public MorphItemObjNeo {
public:
    MorphItemNeoIce(const char *pName);

    virtual u32 getPowerUp();
    virtual void emitAppearEffects();
};