#pragma once

#include "lib/socket/Socket.h"
#include "lib.hpp"
#include "stardust.h"

namespace inst = exl::armv8::inst;
namespace reg = exl::armv8::reg;

HOOK_DEFINE_INLINE(MorphItemCollection_initPowerUpModel) {
    static void Callback(exl::hook::nx64::InlineCtx* ctx) 
    {
        MorphItemCollection* pActor = (MorphItemCollection*)ctx->X[0];
        JMapInfoIter& rIter = *(JMapInfoIter*)ctx->X[1];

		if (MR::isObjectName(rIter, "MorphItemCollectionIce")) {
			pActor->mPowerUpType = MORPH_ICE;
		}
		else if (MR::isObjectName(rIter, "MorphItemCollectionFoo")) {
			pActor->mPowerUpType = MORPH_FOO;
		}
		else {
			pActor->initPowerUpModel(rIter);
		}
    }
};

HOOK_DEFINE_TRAMPOLINE(MR_isOnGameEventFlagFlyingMarioAtFirst) {
    static bool Callback() {
        return true;
    }
};

HOOK_DEFINE_TRAMPOLINE(MR_onGameEventFlagFlyingMarioAtFirst) {
    static void Callback() {
        return;
    }
};

HOOK_DEFINE_TRAMPOLINE(MR_explainFlyingMarioIfAtFirst) {
    static void Callback() {
        return;
    }
};

namespace mods::install
{
    inline void MorphItemNeoFoo() 
    {
        logger::log(std::format("Installing Patch - MorphItemNeoFoo\n").c_str());

        exl::patch::CodePatcher cp(0xDEADCAFE);

        // Makes so the game thinks we collected the item at least once :)
        MR_isOnGameEventFlagFlyingMarioAtFirst::InstallAtFuncPtr(&MR::isOnGameEventFlagFlyingMarioAtFirst);

        // skip collection functions
        MR_onGameEventFlagFlyingMarioAtFirst::InstallAtFuncPtr(&MR::onGameEventFlagFlyingMarioAtFirst);
        MR_explainFlyingMarioIfAtFirst::InstallAtFuncPtr(&MR::explainFlyingMarioIfAtFirst);

        // Init Power Up Collection Model
        MorphItemCollection_initPowerUpModel::InstallAtFuncPtr(&MorphItemCollectionPatch::init, 0x14);
    }
}