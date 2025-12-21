#pragma once

#include "types.h"

class JMapInfoIter;

class JMapLinkInfo {
public:
	JMapLinkInfo();
	JMapLinkInfo(const JMapInfoIter &rIter, bool isLinked);

	void setLinkInfo(const JMapInfoIter &rIter);
	void setLinkedInfo(const JMapInfoIter &rIter);

	bool isValid() const;

	s16 mLinkId;  // _0
	s16 mZoneId;  // _2
	s16 mContext; // _4
};
static_assert(sizeof(JMapLinkInfo) == 0x6, "JMapLinkInfo Size");