#pragma once

#include "types.h"
#include "stardust/Game/NameObj/NameObj.h"

class LayoutManager;
class Spine;
class EffectSystem;
class PaneEffectKeeper;
class StarPointerLayoutTargetKeeper;

class LayoutActorFlag {
public:
	bool mIsDead;          // _0
	bool mIsStopAnimFrame; // _1
	bool mIsHidden;        // _2
	bool mIsOnCalcAnim;    // _3
};
static_assert(sizeof(LayoutActorFlag) == 0x4, "LayoutActorFlag Size");

class LayoutActor : public NameObj {
public:
	LayoutActor(const char *, bool);

	virtual ~LayoutActor();
	virtual void movement();
	virtual void draw() const;
	virtual void calcAnim();
	virtual void appear();
	virtual void kill();
	virtual void control();

	void setNerve(const Nerve *) const;
	bool isNerve(const Nerve *) const;
	s32 getNerveStep() const;
	void updateSpine();

	// get trans
	void setTrans(const TVec2f &);
	// createPaneMtxRef
	// getPaneMtxRef

	LayoutManager* getLayoutManager() const;

	void initLayoutManager(const char *, u32);
	void initLayoutManagerNoConvertFilename(const char *, u32);
	void initLayoutManager(const char *, u32, u32);
	void initNerve(const Nerve *);
	void initEffectKeeper(int, const char *, const EffectSystem *);
	void initPointingTarget(int);

	LayoutManager* _mManager;                                // _20
	Spine* mSpine;                                           // _28
	PaneEffectKeeper* mPaneEffectKeeper;                     // _30
	StarPointerLayoutTargetKeeper* mStarPointerTargetKeeper; // _38
	LayoutActorFlag mLayoutActorFlag;                        // _40
	void* _48;                                               // _48
};
static_assert(sizeof(LayoutActor) == 0x50, "LayoutActor Size");