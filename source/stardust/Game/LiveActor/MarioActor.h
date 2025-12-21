#pragma once

#include "types.h"
#include "stardust/JSystem.h"

#include "stardust/Game/LiveActor/LiveActor.h"

class MarioActor : public LiveActor {
public:
	MarioActor(const char *pName);
    void incLife(u32 restore);
    void LifeRelatedFunction();
    void takenDamageBehaviour();
};

namespace MarioActorPatch
{
    void MarioActorConstructor();
    void incLife();
    void LifeRelatedFunction();
    void takenDamageBehaviour();
}