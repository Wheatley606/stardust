#pragma once

#include "stardust/Game/NameObj/NameObj.h"

class ChipCounter;
class ChipGroup;

class ChipHolder : public NameObj {
public:
	ChipHolder(const char *pName, s32 chipType);

	virtual ~ChipHolder();
	virtual void init(const JMapInfoIter &rIter);

	ChipCounter* mChipCounter; // 14
	ChipGroup** mChipGroups; // 18
	s32 mNumChipGroups; // 1C
	s32 mType; // 20
};
static_assert(sizeof(ChipHolder) == 0x38, "ChipHolder Size");

namespace MR {
	ChipHolder* createChipHolder(s32 chipType);
	void registerChipGroup(s32 chipHolderIndex, ChipGroup *pChipGroup);
};