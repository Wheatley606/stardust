#pragma once

#include "types.h"

class ActorStateBaseInterface;
class Nerve;
class Spine;

class ActorStateKeeper {
public:
    ActorStateKeeper(int initStateCount);

    void addState(ActorStateBaseInterface *pActorState, const Nerve *pNerve, const char *pName);
    bool updateCurrentState();
    void startState(const Nerve *pNerve);
    bool isDead() const;
    void endState(const Nerve *pNerve);

    s32 mStateSize;                   // _0
    s32 mStateCount;                  // _4
    ActorStateBaseInterface* mStates; // _8
    Spine* mCurrentState;             // _10
};
static_assert(sizeof(ActorStateKeeper) == 0x18, "NerveExecutor Size");