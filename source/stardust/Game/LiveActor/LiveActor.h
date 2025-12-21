#pragma once

#include "types.h"
#include "stardust/JSystem.h"
#include "stardust/Game/NameObj/NameObj.h"

class ActorActionKeeper;
class ResourceHolder;
class Spine;
class HitSensorKeeper;
class HitSensor;
class StarPointerTarget;

class LiveActorFlag {
public:
    LiveActorFlag();

    bool mIsDead;                 // _0
    bool mIsNotReleasedAnimFrame; // _1
    bool mIsOnCalcAnim;           // _2
    bool mIsNoCalcView;           // _3
    bool mIsNoEntryDrawBuffer;    // _4
    bool mIsOnBind;               // _5
    bool mIsCalcGravity;          // _6
    bool mIsClipped;              // _7
    bool mIsClippingInvalid;      // _8
};
static_assert(sizeof(LiveActorFlag) == 0x9, "LiveActorFlag Size");

class LiveActor : public NameObj {
public:
    LiveActor(const char *pName);

    virtual ~LiveActor();
    virtual void init(const JMapInfoIter &rIter);
    virtual void movement();
    virtual void calcAnim();
    virtual void calcViewAndEntry();

    virtual void appear();
    virtual void makeActorAppeared();
    virtual void kill();
    virtual void makeActorDead();
    virtual bool receiveMessage(u32 msg, HitSensor *pSender, HitSensor *pReceiver);
    virtual MtxPtr getBaseMtx() const;
    virtual MtxPtr getTakingMtx() const;
    virtual void startClipped();
    virtual void endClipped();
    virtual void control();
    virtual void calcAndSetBaseMtx();
    virtual void updateHitSensor(HitSensor *pSensor);
    virtual void attackSensor(HitSensor *pSender, HitSensor *pReceiver);
    virtual bool receiveMsgPush(HitSensor *pSender, HitSensor *pReceiver);
    virtual bool receiveMsgPlayerAttack(u32 msg, HitSensor *pSender, HitSensor *pReceiver);
    virtual bool receiveMsgEnemyAttack(u32 msg, HitSensor *pSender, HitSensor *pReceiver);
    virtual bool receiveOtherMsg(u32 msg, HitSensor *pSender, HitSensor *pReceiver);

    void initModelManagerWithAnm(const char *, const char *, const char *, bool);
    void initNerve(const Nerve *pNerve, s32 stateKeeperSize);
    void initHitSensor(s32 sensorCount);
    void initBinder(f32, f32, u32);
    void initRailRider(const JMapInfoIter &rIter);
    void initEffectKeeper(s32 effectCount, const char *pGroupName, bool enableSort);
    void initSound(s32 soundCount, const char *pObjectName, const TVec3f *pSoundPos, const TVec3f &rSoundOffset);
    void initShadowControllerList(u32);
    void initActorCollisionParts(const char *, HitSensor *, ResourceHolder *, MtxPtr, bool, bool);
    void initStageSwitch(const JMapInfoIter &rIter);
    void initActorStarPointerTarget(f32, const TVec3f *, MtxPtr, TVec3f);
    void initActorLightCtrl();

    void setNerve(const Nerve *pNerve);
    bool isNerve(const Nerve *pNerve) const;
    s32 getNerveStep() const;

    HitSensor* getSensor(const char *pSensorName) const;

    void calcAnmMtx();

    TVec3f mTranslation;                     // _1C
    TVec3f mRotation;                        // _28
    TVec3f mScale;                           // _34
    TVec3f mVelocity;                        // _40
    TVec3f mGravity;                         // _4C
    ActorActionKeeper* mActionKeeper;        // _58
    void* mModelManager;                     // _60
    Spine* mSpine;                           // _68
    HitSensorKeeper* mSensorKeeper;          // _70
    void* mBinder;                           // _78
    void* mRailRider;                        // _80
    void* mEffectKeeper;                     // _88
    void* mSoundHolder;                      // _90
    LiveActorFlag mFlags;                    // _98
    void* mShadowController;                 // _A8
    void* mCollisionParts;                   // _B0
    void* mStageSwitchCtrl;                  // _B8
    StarPointerTarget* mPointerTarget;       // _C0
    void* mLightCtrl;                        // _C8  
};
static_assert(sizeof(LiveActor) == 0xD0, "LiveActor Size");