#pragma once

#include "types.h"
#include "stardust/JSystem.h"

namespace MR {
    void getObjectName(const char **pDest, const JMapInfoIter &rIter);
    bool isObjectName(const JMapInfoIter &rIter, const char *pName);    
}