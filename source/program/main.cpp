#include "lib.hpp"
#include "mods/mods.hpp"
#include "lib/socket/Socket.h"
#include "Settings/StardustSettings.hpp"

HOOK_DEFINE_INLINE(FunctionLoadedAtRunTimeOncePerScene) {
    static void Callback(exl::hook::nx64::InlineCtx* ctx) 
    {
        NameObj* pActor = (NameObj*)ctx->X[0];
        MR::connectToSceneLayout(pActor);
    }
};

extern "C" void exl_main(void* x0, void* x1) {
    exl::hook::Initialize();

    stardust::settings::LoadSettings();

    if (stardust::settings::initDebugLogs())
    {
        std::string ip = stardust::settings::getComputerIPAdress();
        if (ip != "") logger::init(ip.c_str(), 7332);
    }
    
    logger::log("Connected to Super Mario Galaxy 2's logger!\n");

    if (stardust::settings::initModPlayAsLuigi()) mods::install::PlayAsLuigiPatch();

    if (stardust::settings::initModDaredevilMode()) mods::install::DareDevilMode();

    if (stardust::settings::initModRedStarPowerUp()) mods::install::MorphItemNeoFoo();

    if (stardust::settings::initModExtendedObjectFactory()) mods::install::ExtendedObjectFactory();     
}

extern "C" NORETURN void exl_exception_entry() {
    EXL_ABORT("Default exception handler called!");
}