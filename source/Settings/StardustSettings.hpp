#pragma once
#include <string>

namespace stardust::settings
{
    void LoadSettings();

    bool initDebugLogs();
    std::string getComputerIPAdress();

    bool initMod(std::string mod);

    bool initModPlayAsLuigi();
    bool initModDaredevilMode();
    bool initModRedStarPowerUp();
    bool initModRedStarPowerUp();
    bool initModExtendedObjectFactory();
}