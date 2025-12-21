#pragma once

#include "types.h"
#include "stardust/Game/System/NerveExecutor.h"

class ActorStateBaseInterface : public NerveExecutor {
public:
    inline ActorStateBaseInterface(const char* pName) : NerveExecutor(pName) {

    }

    virtual void init();
    virtual void appear();
    virtual void kill();
    virtual bool update();
    virtual void control();

    bool mIsDead; // _10
};
static_assert(sizeof(ActorStateBaseInterface) == 0x18, "NerveExecutor Size");

template<typename T>
class ActorStateBase : public ActorStateBaseInterface {
public:
    inline ActorStateBase(const char* pName) : ActorStateBaseInterface(pName) {

    }

    //virtual ~ActorStateBase();
};
