#pragma once

#include "types.h"
#include "stardust/JSystem.h"

class HitSensor;
class HitSensorInfo;
class LiveActor;

class HitSensorKeeper {
public:
    HitSensorKeeper(int size);

    HitSensor* add(const char *pName, u32 sensorType, u16 numSensors, f32 radius, LiveActor *pHost, const TVec3f &rOffset);
    HitSensor* addCallback(const char *pName, u32 sensorType, u16 numSensors, f32 radius, LiveActor *pHost, const TVec3f &rOffset);
    HitSensor* getSensor(const char *pName) const;
    void update();
    void doObjCol();
    void clear();
    void validate();
    void invalidate();
    void validateBySystem();
    void invalidateBySystem();
    HitSensorInfo* getNthSensorInfo(int index) const;
    HitSensorInfo* getSensorInfo(const char *pName) const;

    s32 mNumSensors;          // _0
    s32 mMaxSensors;          // _4
    HitSensorInfo** mSensors; // _8
    HitSensor* mSensorTaking; // _10
    HitSensor* mSensorTaken;  // _18
};
static_assert(sizeof(HitSensorKeeper) == 0x20, "HitSensorKeeper Size");