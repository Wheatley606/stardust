#pragma once

#include "lib/socket/Socket.h"
#include "lib.hpp"
#include "stardust.h"
#include "mods/Utils/NameObjFactoryListPatcher.hpp"

namespace inst = exl::armv8::inst;
namespace reg = exl::armv8::reg;
namespace module = exl::util::modules;

HOOK_DEFINE_TRAMPOLINE(MR_isGalaxyDarkCometAppearInCurrentStage) {
    static bool Callback() {
        return false;
    }
};

namespace mods::install
{
    inline void DareDevilMode() 
    {
        logger::log(std::format("Installing Patch - Daredevil Mode\n").c_str());

        exl::patch::CodePatcher cp(0xDEADCAFE); 

        MR_isGalaxyDarkCometAppearInCurrentStage::InstallAtFuncPtr(&MR::isGalaxyDarkCometAppearInCurrentStage);
        
        cp.SeekWithOffset(&MarioActorPatch::MarioActorConstructor, 0x6C);
        cp.WriteInst(inst::Branch(0x24));

        cp.SeekWithOffset(&MarioActorPatch::incLife, 0x80);
        cp.WriteInst(inst::Branch(0x48));

        cp.SeekWithOffset(&MarioActorPatch::LifeRelatedFunction, 0xAC);
        cp.WriteInst(inst::Branch(0x60));

        cp.SeekWithOffset(&MarioActorPatch::takenDamageBehaviour, 0x9C);
        cp.Write(0x52800008);  
        
        cp.SeekWithOffset(&GameDataFunction::tryOnDimensionBigCastleGalaxyComet, 0x9C);
        cp.Write(inst::Branch(0x24));

        // Remove Rosalina Ghost
        stardust::utils::PatchEntry(DREAMER_DEAD_COUNT_AREA_LIST_OFFSET, 0x0, 0x0);
        stardust::utils::PatchEntry(DREAMER_LIST_OFFSET, 0x0, 0x0);
        stardust::utils::PatchEntry(SUPER_DREAMER_LIST_OFFSET, 0x0, 0x0);

        // Remove Shop Lumas
        stardust::utils::PatchEntry(TICO_SHOP_LIST_OFFSET, 0x0, 0x0);

        // Turn Life Mushrooms into One Up Mushrooms
        stardust::utils::PatchEntryCreateFunction(BENEFIT_ITEM_LIFE_UP_LIST_OFFSET, reinterpret_cast<uintptr_t>(&NameObjFactory::createNameObj<BenefitItemOneUp>));

        // Remove checkpoints
        stardust::utils::PatchEntry(RESTART_OBJ_LIST_OFFSET, 0x0, 0x0);

        /*
        // Does not work... should patch something in void MR::tryCreateDummyModel();

        cp.SeekWithOffset(&MRPatch::tryCreateDummyModel, 0x64);
        cp.Write(0x14000005);

        cp.SeekWithOffset(&MRPatch::tryCreateDummyModel, 0x78);
        cp.Write(0x71003ADF);
        cp.Write(0x54000081);
        cp.Write(0x52801601);
        cp.Write(0x14000003);
        */
    }
}