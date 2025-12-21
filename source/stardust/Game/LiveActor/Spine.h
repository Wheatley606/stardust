#pragma once

#include "types.h"

class ActorStateKeeper;
class Nerve;

class Spine {
public:
    Spine(void *pExecutor, const Nerve *pNerve, int stateKeeperSize);

    void update();
    void setNerve(const Nerve *pNextNerve);
    const Nerve* getCurrentNerve() const;

    void* mExecutor;                // _0
    const Nerve* mCurNerve;         // _8
    const Nerve* mNextNerve;        // _10
    u32 mStep;                      // _18
    ActorStateKeeper* mStateKeeper; // _20
};
static_assert(sizeof(Spine) == 0x28, "Spine Size");