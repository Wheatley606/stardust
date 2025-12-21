#pragma once

#include "types.h"

struct JMapItem {
    u32 mHash;       // _0
    u32 mMask;       // _4
    u16 mOffsetData; // _8
    u8 mShift;       // _A
    u8 mType;        // _B
};
static_assert(sizeof(JMapItem) == 0xC, "JMapItem Size");

struct JMapData {
    s32 mNumEntries;   // _0
    s32 mNumData;      // _4
    s32 mDataOffset;   // _8
    u32 mEntrySize;    // _C
    const JMapItem** mItems;  // _10
};
static_assert(sizeof(JMapData) == 0x18, "JMapData Size");

class JMapInfoIter;

class JMapInfo {
public:
    JMapInfo();
    ~JMapInfo();

    inline JMapInfo& operator=(const JMapInfo &rInfo) {
        mData = rInfo.mData;
        mName = rInfo.mName;
        return *this;
    }

    inline bool operator==(const JMapInfo &rInfo) const {
        return mData == rInfo.mData;
    }

    inline bool dataExists() const {
        return !!mData;
    }

    inline int getNumEntries() const {
        return dataExists() ? mData->mNumEntries : 0;
    }

    inline int getNumFields() const {
        return dataExists() ? mData->mNumData : 0;
    }

    bool attach(const void *pData);

    void setName(const char *pName);
    const char* getName() const;

    s32 searchItemInfo(const char *) const;
    s32 getValueType(const char *pField) const;

    s32 getValueFast(int entryIndex, int itemIndex, const char **pDest) const;
    s32 getValueFast(int entryIndex, int itemIndex, u32 *pDest) const;
    s32 getValueFast(int entryIndex, int itemIndex, s32 *pDest) const;

    const JMapData* mData; // _0
    const char* mName;     // _8
};
static_assert(sizeof(JMapInfo) == 0x10, "JMapInfo Size");

class JMapInfoIter {
public:
    inline JMapInfoIter() { }

    inline JMapInfoIter(const JMapInfo* pInfo, s32 index) {
        mInfo = pInfo;
        mIndex = index;
    }

    inline JMapInfoIter& operator=(const JMapInfoIter &rIter) {
        mInfo = rIter.mInfo;
        mIndex = rIter.mIndex;
        return *this;
    }

    bool operator==(const JMapInfoIter &rIter) const {
        return mIndex == rIter.mIndex && mInfo && rIter.mInfo && *mInfo == *rIter.mInfo;
    }
    
    bool operator!=(const JMapInfoIter &rIter) const {
        return !(*this == rIter);
    }

    bool isValid() const {
        return mInfo && mIndex >= 0 && mIndex < mInfo->getNumEntries();
    }

    template<typename T>
    bool getValue(const char* pKey, T* pValueOut) const {
        const JMapInfo* info = mInfo;
        s32 entryIndex = mIndex;
        
        s32 itemIndex = info->searchItemInfo(pKey);
        if (itemIndex < 0) {
            return false;
        }
        return info->getValueFast(entryIndex, itemIndex, pValueOut);
    }

    const JMapInfo* mInfo; // 0x0
    s32 mIndex; // 0x8
};
static_assert(sizeof(JMapInfoIter) == 0x10, "JMapInfoIter Size");