#pragma once

#include "types.h"
#include "stardust/Game/Util/JMapInfo.h"
#include "stardust/Game/Util/JMapLinkInfo.h"

#define NAMEOBJ_FLAG_MOVEMENT 1
#define NAMEOBJ_FLAG_RESUME 2
#define NAMEOBJ_FLAG_SUSPEND 4

class NameObj {
public:
    NameObj(const char *pName);

    virtual ~NameObj();
    virtual void init(const JMapInfoIter &rIter);
    virtual void initAfterPlacement();
    virtual void movement();
    virtual void draw() const;
    virtual void calcAnim();
    virtual void calcViewAndEntry();
    virtual void startMovement();
    virtual void endMovement();

    void initWithoutIter();
    void setName(const char *pName);
    void setLinkedInfo(const JMapInfoIter &rIter);

    void executeMovement();
    void syncWithFlags();

    const char* mName;        // _8
    vu16 mFlags;              // _10
    s16 mExecuteIdx;          // _12
    JMapLinkInfo mLinkedInfo; // _14
};
static_assert(sizeof(NameObj) == 0x20, "NameObj Size");

class NameObjFunction {
public:
    static void requestMovementOn(NameObj *pActor);
    static void requestMovementOff(NameObj *pActor);
};