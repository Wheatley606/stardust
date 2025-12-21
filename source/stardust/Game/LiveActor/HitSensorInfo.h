#pragma once

#include "types.h"
#include "stardust/JSystem.h"

class HitSensor;

class HitSensorInfo {
public:
	HitSensorInfo(const char *pName, HitSensor *pSensor, const TVec3f *pFollowPos, MtxPtr pFollowMtx, const TVec3f &pOffset, bool pBool);

	void setFollowPos(const TVec3f *pFollowPos);
	void setFollowMtx(MtxPtr pFollowMtx);
	void update();
	void doObjCol();

	const char* mName;                  // _0
	s32 mHashCode;              	    // _8
	HitSensor* mSensor;        		    // _10
	TVec3f mOffset;             		// _18
	const TVec3f* mFollowPos;    		// _28
	MtxPtr mFollowMtx;           		// _30
	bool mUpdateSensorThroughLiveActor; // _38
};
static_assert(sizeof(HitSensorInfo) == 0x40, "HitSensorInfo Size");