#pragma once

#include "stardust/Game/NameObj/NameObj.h"
#include "stardust/JSystem.h"

class ChipBase;

struct ChipStruct {
	ChipBase* mChip; // 0
	bool mIsCollected; // 4
};

class ChipGroup : public NameObj {
public:
	ChipGroup(const char* pName, s32 chipType);

	virtual ~ChipGroup();
	virtual void init(const JMapInfoIter& rIter);
	virtual void movement();

	ChipStruct mChips[5]; // 14
	void* mStageSwitchCtrl; // 3C
	TVec3f mTranslate; // 40
	s32 mCollectedChips; // 4C
	s32 mNumChips; // 50
	s32 mArg0; // 54
	s32 mType; // 58
	s32 mArg1; // 5C
	s32 _60;
	f32 _64;
	f32 mArg2; // 68
	bool _6C;
	s32 _70;
	bool mUseSwAppear; // 74
	bool mAppeared; // 75
};
static_assert(sizeof(ChipGroup) == 0xB0, "ChipGroup Size");