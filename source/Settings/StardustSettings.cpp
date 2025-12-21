#include "Settings/StardustSettings.hpp"
#include "lib.hpp"
#include "nn.hpp"
#include "util/file_handle.hpp"

#define JSON_USE_GLOBAL_UDLS 0
#include "nlohmann/json.hpp"
using json = nlohmann::json;

static constexpr char s_ConfigPath[] = "sd:/atmosphere/contents/0100FD8022DAA000/exefs/stardust_config.json";

static json stardust_config;

static constexpr size_t s_MaxJsonSize = 2048;
static std::array<char, s_MaxJsonSize> s_JsonBuffer {};

static bool FileExists(const char* path) {
    nn::fs::DirectoryEntryType type;
    auto r = nn::fs::GetEntryType(&type, path);
    if(R_FAILED(r))
        return false;
    else
        return type == nn::fs::DirectoryEntryType_File;
}

void stardust::settings::LoadSettings()
{
    /* Mount the SD card, this must succeeed. */
    R_ABORT_UNLESS(nn::fs::MountSdCardForDebug("sd"));

    /* Do nothing if the token is missing. */
    if(!FileExists(s_ConfigPath)) {
        EXL_ABORT("STD: Can't find config, abort..");
        return;
    }

    util::FileHandle handle(s_ConfigPath, nn::fs::OpenMode_Read);
    auto fileSize = handle.GetSize();

    handle.Read(std::span {s_JsonBuffer.begin(), s_JsonBuffer.begin() + fileSize});
    stardust_config = json::parse(s_JsonBuffer.begin(), s_JsonBuffer.end());
    handle.Close();
}

bool stardust::settings::initDebugLogs()
{
    if (!stardust_config.contains("Debug") || !stardust_config["Debug"].contains("enable_logs")) return false;

    return stardust_config["Debug"]["enable_logs"].get<bool>();
}

std::string stardust::settings::getComputerIPAdress()
{
    if (!stardust_config.contains("Debug") || !stardust_config["Debug"].contains("PC_IP_ADDRESS")) return "";

    return stardust_config["Debug"]["PC_IP_ADDRESS"].get<std::string>();
}

bool stardust::settings::initMod(std::string mod)
{
    if (!stardust_config.contains("Mods") || !stardust_config["Mods"].contains(mod)) return false;

    return stardust_config["Mods"][mod].get<bool>();
}

bool stardust::settings::initModPlayAsLuigi()
{
    return initMod("Play as Luigi");
}

bool stardust::settings::initModDaredevilMode()
{
    return initMod("Daredevil Mode");
}

bool stardust::settings::initModRedStarPowerUp()
{
    return initMod("Red Star Power Up");
}

bool stardust::settings::initModExtendedObjectFactory()
{
    return initMod("Extended Actor Factory");
}