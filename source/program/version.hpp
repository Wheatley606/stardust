#pragma once

#include <common.hpp>
#include "oe/oe_displayversion.hpp"
#include "string.h"

namespace exl::util {
    enum class UserVersion {
        DEFAULT,
        V1_2_0 = 0xF120
    };

    namespace impl {
        ALWAYS_INLINE UserVersion DetermineUserVersion() {
            nn::oe::DisplayVersion displayVersion;
            nn::oe::GetDisplayVersion(&displayVersion);

            if (strncmp(displayVersion.name, "1.2.0", 6) == 0) 
            {
                return UserVersion::V1_2_0;
            } else 
            {
                return UserVersion::DEFAULT;
            }
        }

        ALWAYS_INLINE int DetermineUserVersionInternal() {
            nn::oe::DisplayVersion displayVersion;
            nn::oe::GetDisplayVersion(&displayVersion);

            if (strncmp(displayVersion.name, "1.2.0", 6) == 0) 
            {
                return 0xF120;
            } else 
            {
                return 0xF100;
            }
        }
    }
}