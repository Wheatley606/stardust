#pragma once

#include "types.h"

class LiveActor;
class ActorParam;
class ActionBgmCtrl;
class ActionFlagCtrl;
class ActionScreenBlurCtrl;
class ActionFootPrintCtrl;
class ActorAnimKeeper;
class ActorPadAndCameraCtrl;
class ActorHitReactionCtrl;
class ActorItemGenerator;

class ActorActionKeeper {
public:
    ActorActionKeeper(LiveActor *pActor, ActorAnimKeeper *pAnimKeeper, ActionFlagCtrl *pFlagCtrl, ActorPadAndCameraCtrl *pPadAndCameraCtrl,
        ActorHitReactionCtrl *pHitReactionCtrl, ActorItemGenerator *pItemGenerator, ActorParam *pActorParam, ActionScreenBlurCtrl *pScreenBlurCtrl,
        ActionFootPrintCtrl *pFootPrintCtrl, ActionBgmCtrl *pBgmCtrl);

    static ActorActionKeeper* tryCreate(LiveActor *pActor, const char *);

    void startAction(const char *pName);
    void initFlagCtrl();
    void updateAnimKeeper(); // stubbed
    void update();

    LiveActor* mHost;                         // _0
    void* mAnimKeeper;             // _8
    void* mFlagCtrl;                // _10
    void* mPadAndCameraCtrl; // _18
    void* mHitReactionCtrl;   // _20
    void* mItemGenerator;       // _28
    void* mActorParam;                  // _30
    void* mScreenBlurCtrl;    // _38
    void* mFootPrintCtrl;      // _40
    void* mBgmCtrl;                  // _48
};
static_assert(sizeof(ActorActionKeeper) == 0x50, "HitSensorKeeper Size");