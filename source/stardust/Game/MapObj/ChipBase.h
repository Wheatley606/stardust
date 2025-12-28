#pragma once

#include "stardust/Game/LiveActor/LiveActor.h"

#define CHIP_BLUE 0
#define CHIP_YELLOW 1

class PartsModel;

class ChipBase : public LiveActor {
public:
	ChipBase(const char *, s32, const char *);

	virtual ~ChipBase();
	virtual void init(const JMapInfoIter &);
	virtual void initAfterPlacement();
	virtual void makeActorAppeared();
	virtual void makeActorDead();
	virtual void control();
	virtual bool receiveOtherMsg(u32, HitSensor *, HitSensor *);

    void initJMapParam(const JMapInfoIter &);
	void initModel(const JMapInfoIter &);
	void initShadow(const JMapInfoIter &);
	
	void deactive();
	void setGroupID(s32);
	void setHost(LiveActor *);
	void appearWait();
	void appearFlashing();
	void requestGet(HitSensor *, HitSensor *);

	bool isGettable() const;

	void* mFlashingCtrl; // D0
	void* mRailMover; // D8
	void* mBubble; // E0
	const char* mModelName; // E8
	LiveActor* mHost; // F0
	TVec3f mClippingRange; // F8
	s32 mGroup; // 104
	s32 mType; // 108
	s32 _10C; // 10C
	u8 _110; // 110
	bool mArg2; // 111
};
static_assert(sizeof(ChipBase) == 0x118, "ChipBase Size");