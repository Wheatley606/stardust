#pragma once

#include "types.h"
#include "stardust/Game/LiveActor/LiveActor.h"

class MorphItemCollection : public LiveActor {
public:
	MorphItemCollection(const char *pName);

	virtual ~MorphItemCollection();
	virtual void init(const JMapInfoIter &rIter);
	virtual void calcAndSetBaseMtx();

	void exeWait();
	void initPowerUpModel(const JMapInfoIter &rIter);

	s32 mPowerUpType; // _D0
	f32 mRotation; // _D4
	bool mIsDrill; // _D5
};
static_assert(sizeof(MorphItemCollection) == 0xE0, "MorphItemCollection Size");

namespace MorphItemCollectionPatch
{
	void init();
}