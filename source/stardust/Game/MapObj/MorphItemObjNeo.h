#pragma once

#include "types.h"
#include "stardust/JSystem.h"
#include "stardust/Game/LiveActor/LiveActor.h"

#define MORPH_HOPPER 1
#define MORPH_BEE 2
#define MORPH_TERESA 3
#define MORPH_ICE 4
#define MORPH_FIRE 5
#define MORPH_FOO 6
#define MORPH_CLOUD 7
#define MORPH_ROCK 8

class MorphItemObjNeo : public LiveActor {
public:
	MorphItemObjNeo(const char *pName);

	virtual ~MorphItemObjNeo();
	virtual void init(JMapInfoIter const &);
	virtual void initAfterPlacement();
	virtual void appear();
	virtual void makeActorAppeared();
	virtual void kill();
	virtual void makeActorDead();
	virtual void control();
	virtual void calcAndSetBaseMtx();
	virtual bool receiveMsgPlayerAttack(u32, HitSensor *, HitSensor *);
	virtual bool receiveOtherMsg(u32, HitSensor *, HitSensor *);
	virtual bool isDemo() const;
	virtual u32 getPowerUp();
	virtual void emitAppearEffects();
	virtual void appearTransformation();
	virtual void killTransformation();

	u16 _D0;
	u16 _D2;
	u8 _D4;
	u8 _D5;
	u8 _D6;
	u8 mCameraTargetMode;          // _D7
	u8 _D8;
	u8 _D9;
	bool mIsMorphItemBubbleBroken; // _DA
	bool mIsRespawnRequestOn;      // _DB
	bool mIsBindOn;                // _DC
	u8 mShadowType;                // _DD
    u64 data;                      // _E0
	f32 _E8;
	f32 _EC;
	TVec3f mRespawnPos;            // _F0
    void* _100;
	void* mItemBubbleModel;        // _108
    void* mCameraTargetMtx;        // _110
    void* mRailMover;              // _118
    TVec3f* mClippingPos;          // _120
	void* _128;
	void* _130;
};
static_assert(sizeof(MorphItemObjNeo) == 0x138, "MorphItemObjNeo Size");