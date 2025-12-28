#pragma once

#include "stardust/Game/Screen/LayoutActor.h"

class ChipCounter : public LayoutActor {
public:
	ChipCounter(const char *pName, s32 chipType);

	virtual ~ChipCounter();
	virtual void init(const JMapInfoIter &rIter);
	virtual void control();

	void* mCollectCounter; // 50
	s32 _58;               // 58
	s32 mType;             // 5C
	s32 _60;               // 60
	f32 _64;               // 64
};
static_assert(sizeof(ChipCounter) == 0x68, "ChipCounter Size");