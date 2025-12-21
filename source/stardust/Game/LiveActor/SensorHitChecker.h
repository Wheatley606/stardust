#pragma once

#include "types.h"
#include "stardust/Game/NameObj/NameObj.h"

class HitSensor;

class SensorGroup {
public:
    SensorGroup(int size, const char *pGroupName);

    void add(HitSensor *pSensor);
    void remove(HitSensor *pSensor);

    s32 mMaxSensors;      // _0
    s32 mNumSensors;      // _4
    HitSensor** mSensors; // _8
};
static_assert(sizeof(SensorGroup) == 0x10, "SensorGroup Size");

class SensorHitChecker : public NameObj {
public:
    SensorHitChecker(const char *pName);

    virtual ~SensorHitChecker();
    virtual void init(const JMapInfoIter &rIter);
    virtual void movement();

    void initGroup(HitSensor *pSensor);
    void doObjColGroup(SensorGroup *pGroupA, SensorGroup *pGroupB) const;
    void doObjColInSameGroup(SensorGroup *pGroup) const;

    SensorGroup* mPlayerGroup;    // _20
    SensorGroup* mRideGroup;      // _28
    SensorGroup* mEyeGroup;       // _30
    SensorGroup* mSimpleGroup;    // _38
    SensorGroup* mMapObjGroup;    // _40
    SensorGroup* mCharacterGroup; // _48
};
static_assert(sizeof(SensorHitChecker) == 0x50, "SensorHitChecker Size");

namespace MR {
    void initHitSensorGroup(HitSensor *pSensor);
};