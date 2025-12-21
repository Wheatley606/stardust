#pragma once

#include "types.h"

class LiveActor;
class HitSensor;

namespace MR {
    bool isSensorType(const HitSensor *pSensor, u32 msg);

    void validateHitSensor(HitSensor *pSensor);
	void invalidateHitSensor(HitSensor *pSensor);
}