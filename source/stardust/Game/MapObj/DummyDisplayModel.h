#pragma once

#include "types.h"

class DummyDisplayModel;
class LiveActor;
class JMapInfoIter;

namespace MR {
    DummyDisplayModel* tryCreateDummyModel(LiveActor *pHost, const JMapInfoIter &rIter, s32, int); 
}