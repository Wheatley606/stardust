#pragma once

#include "lib/socket/Socket.h"
#include "lib.hpp"
#include "stardust.h"

namespace inst = exl::armv8::inst;
namespace reg = exl::armv8::reg;

HOOK_DEFINE_TRAMPOLINE(GameDataFunction_isPlayerLuigi) {
    static bool Callback() {
        return true;
    }
};

HOOK_DEFINE_TRAMPOLINE(MR_isOnGameEventFlagNormalEnding) {
    static bool Callback() {
        return true;
    }
};

namespace mods::install
{
    inline void PlayAsLuigiPatch() 
    {
        exl::patch::CodePatcher cp(0xDEADCAFE); 

        logger::log(std::format("Installing Patch - Play as Luigi\n").c_str());

        GameDataFunction_isPlayerLuigi::InstallAtFuncPtr(&GameDataFunction::isLuigiPlayer);

        cp.SeekWithOffset(&GameScenePatch::init, 0x38);

        cp.WriteInst(inst::Nop());
        cp.WriteInst(inst::Nop());
        cp.BranchLinkInst(&MR::isStageFileSelect);

        MR_isOnGameEventFlagNormalEnding::InstallAtFuncPtr(&MR::isOnGameEventFlagNormalEnding);
    }
}

