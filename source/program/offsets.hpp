#pragma once

#include <common.hpp>
#include <tuple>

#include "version.hpp"

namespace exl::reloc {
    using VersionType = util::UserVersion;

    template<VersionType Version, impl::LookupEntry... Entries>
    using UserTableType = VersionedTable<Version, Entries...>;

    using UserTableSet = TableSet<VersionType, 
        UserTableType<VersionType::V1_3_0,
            { util::ModuleIndex::Main,          0x00086700,                 "_ZN16GameDataFunction34tryOnDimensionBigCastleGalaxyCometEv" },
            { util::ModuleIndex::Main,          0x00086C10,                 "_ZN16GameDataFunction13isLuigiPlayerEv" },

            { util::ModuleIndex::Main,          0x000A0160,                 "_ZN13NerveExecutorC1EPKc" },
            { util::ModuleIndex::Main,          0x000A0194,                 "_ZN13NerveExecutorD1Ev" },
            { util::ModuleIndex::Main,          0x000A01B8,                 "_ZN13NerveExecutor9initNerveEPK5Nervel" },
            { util::ModuleIndex::Main,          0x000A0204,                 "_ZN13NerveExecutor11updateNerveEv" },
            { util::ModuleIndex::Main,          0x000A0214,                 "_ZN13NerveExecutor8setNerveEPK5Nerve" },
            { util::ModuleIndex::Main,          0x000A021C,                 "_ZNK13NerveExecutor7isNerveEPK5Nerve" },
            { util::ModuleIndex::Main,          0x000A0248,                 "_ZNK13NerveExecutor12getNerveStepEv" },

            { util::ModuleIndex::Main,          0x000B58A0,                 "_ZN2MR13isEqualStringEPKcPKc" },
            { util::ModuleIndex::Main,          0x000B58C0,                 "_ZN2MR17isEqualStringCaseEPKcS1_" },

            { util::ModuleIndex::Main,          0x000B6ED0,                 "_ZN2MR17isStageFileSelectEv" },

            { util::ModuleIndex::Main,          0x000B8D50,                 "_ZN2MR39isGalaxyHorrorCometAppearInCurrentStageEv" },

            { util::ModuleIndex::Main,          0x000B9100,                 "_ZN2MR27explainFlyingMarioIfAtFirstEv" },

            { util::ModuleIndex::Main,          0x000B9140,                 "_ZN2MR35isOnGameEventFlagFlyingMarioAtFirstEv" },

            { util::ModuleIndex::Main,          0x000B9600,                 "_ZN2MR33onGameEventFlagFlyingMarioAtFirstEv" },

            { util::ModuleIndex::Main,          0x000B9940,                 "_ZN2MR29isOnGameEventFlagNormalEndingEv" },
            { util::ModuleIndex::Main,          0x000B9950,                 "_ZN2MR36isOnGameEventFlag120PowerStarsEndingEv" },

            { util::ModuleIndex::Main,          0x000B9ED0,                 "_ZN2MR37isGalaxyDarkCometAppearInCurrentStageEv" },
            { util::ModuleIndex::Main,          0x000B9EE0,                 "_ZN2MR38isGalaxyQuickCometAppearInCurrentStageEv" },
            { util::ModuleIndex::Main,          0x000B9EF0,                 "_ZN2MR39isGalaxyPurpleCometAppearInCurrentStageEv" },
            { util::ModuleIndex::Main,          0x000B9F00,                 "_ZN2MR40isGalaxyRainbowCometAppearInCurrentStageEv" },

            { util::ModuleIndex::Main,          0x000BAC40,                 "_ZN2MR20connectToSceneLayoutEP7NameObj" },

            { util::ModuleIndex::Main,          0x000BDF88,                 "_ZN7NameObj13startMovementEv" },
            { util::ModuleIndex::Main,          0x000BDF8C,                 "_ZN7NameObj11endMovementEv" },

            { util::ModuleIndex::Main,          0x000BDF90,                 "_ZN9LiveActor15updateHitSensorEP9HitSensor" },
            { util::ModuleIndex::Main,          0x000BDF94,                 "_ZN9LiveActor14receiveMsgPushEP9HitSensorS1_" },
            { util::ModuleIndex::Main,          0x000BDF9C,                 "_ZN9LiveActor21receiveMsgEnemyAttackEjP9HitSensorS1_" },

            { util::ModuleIndex::Main,          0x000BE148,                 "_ZN12JMapLinkInfoC1Ev" },
            { util::ModuleIndex::Main,          0x000BE15C,                 "_ZN12JMapLinkInfoC1ERK12JMapInfoIterb" },
            { util::ModuleIndex::Main,          0x000BE178,                 "_ZN12JMapLinkInfo13setLinkedInfoERK12JMapInfoIter" },
            { util::ModuleIndex::Main,          0x000BE264,                 "_ZN12JMapLinkInfo11setLinkInfoERK12JMapInfoIter" },
            { util::ModuleIndex::Main,          0x000BE3FC,                 "_ZNK12JMapLinkInfo7isValidEv" },

            { util::ModuleIndex::Main,          0x000BE424,                 "_ZN8JMapInfoC1Ev" },
            { util::ModuleIndex::Main,          0x000BE434,                 "_ZN8JMapInfoD1Ev" },
            { util::ModuleIndex::Main,          0x000BE438,                 "_ZN8JMapInfo6attachEPKv" },
            { util::ModuleIndex::Main,          0x000BE44C,                 "_ZN8JMapInfo7setNameEPKc" },
            { util::ModuleIndex::Main,          0x000BE454,                 "_ZNK8JMapInfo7getNameEv" },
            { util::ModuleIndex::Main,          0x000BE460,                 "_ZNK8JMapInfo14searchItemInfoEPKc" },
            { util::ModuleIndex::Main,          0x000BE4F0,                 "_ZNK8JMapInfo12getValueTypeEPKc" },
            { util::ModuleIndex::Main,          0x000BE57C,                 "_ZNK8JMapInfo12getValueFastEiiPPKc" },
            { util::ModuleIndex::Main,          0x000BE5CC,                 "_ZNK8JMapInfo12getValueFastEiiPm" },
            { util::ModuleIndex::Main,          0x000BE654,                 "_ZNK8JMapInfo12getValueFastEiiPl" },

            { util::ModuleIndex::Main,          0x000BE830,                 "_ZN2MR11getHashCodeEPKc" },

            { util::ModuleIndex::Main,          0x000D11E0,                 "_ZN2MR13getObjectNameEPPKcRK12JMapInfoIter" },
            { util::ModuleIndex::Main,          0x000D12B0,                 "_ZN2MR12isObjectNameERK12JMapInfoIterPKc" },

            { util::ModuleIndex::Main,          0x000D9880,                 "_ZN2MR17validateHitSensorEP9HitSensor" },
            { util::ModuleIndex::Main,          0x000D9890,                 "_ZN2MR19invalidateHitSensorEP9HitSensor" },

            { util::ModuleIndex::Main,          0x000D95B0,                 "_ZN2MR12isSensorTypeEPK9HitSensorm" },

            { util::ModuleIndex::Main,          0x0012D1D4,                 "_ZN23ActorStateBaseInterface4initEv" },
            { util::ModuleIndex::Main,          0x0012D4B8,                 "_ZN23ActorStateBaseInterface7controlEv" },

            { util::ModuleIndex::Main,          0x00138550,                 "_ZN13EventFunction17isStartCometEventEPKc" },

            { util::ModuleIndex::Main,          0x0015C708,                 "_ZN9LiveActorC1EPKc" },
            { util::ModuleIndex::Main,          0x0015C7AC,                 "_ZN9LiveActor4initERK12JMapInfoIter" },
            { util::ModuleIndex::Main,          0x0015C7B0,                 "_ZN9LiveActor6appearEv" },   
            { util::ModuleIndex::Main,          0x0015C7BC,                 "_ZN9LiveActor17makeActorAppearedEv" },    
            { util::ModuleIndex::Main,          0x0015C85C,                 "_ZN9LiveActor4killEv" },
            { util::ModuleIndex::Main,          0x0015C8B0,                 "_ZN9LiveActor13makeActorDeadEv" },
            { util::ModuleIndex::Main,          0x0015C928,                 "_ZN9LiveActor8movementEv" },
            { util::ModuleIndex::Main,          0x0015CA88,                 "_ZN9LiveActor8calcAnimEv" },
            { util::ModuleIndex::Main,          0x0015CAFC,                 "_ZN9LiveActor10calcAnmMtxEv" },
            { util::ModuleIndex::Main,          0x0015CB4C,                 "_ZN9LiveActor16calcViewAndEntryEv" },
            { util::ModuleIndex::Main,          0x0015CB64,                 "_ZN9LiveActor14receiveMessageEjP9HitSensorS1_" },   
            { util::ModuleIndex::Main,          0x0015CBB8,                 "_ZN9LiveActor17calcAndSetBaseMtxEv" },    
            { util::ModuleIndex::Main,          0x0015CC54,                 "_ZNK9LiveActor12getTakingMtxEv" },
            { util::ModuleIndex::Main,          0x0015CC60,                 "_ZN9LiveActor8setNerveEPK5Nerve" },
            { util::ModuleIndex::Main,          0x0015CC68,                 "_ZNK9LiveActor7isNerveEPK5Nerve" },
            { util::ModuleIndex::Main,          0x0015CC94,                 "_ZNK9LiveActor12getNerveStepEv" },
            { util::ModuleIndex::Main,          0x0015CCA0,                 "_ZNK9LiveActor9getSensorEPKc" },   
            { util::ModuleIndex::Main,          0x0015CCB0,                 "_ZNK9LiveActor10getBaseMtxEv" },    
            { util::ModuleIndex::Main,          0x0015CCE0,                 "_ZN9LiveActor12startClippedEv" },
            { util::ModuleIndex::Main,          0x0015CD40,                 "_ZN9LiveActor10endClippedEv" },
            { util::ModuleIndex::Main,          0x0015CDA4,                 "_ZN9LiveActor23initModelManagerWithAnmEPKcPKcPKcb" },
            { util::ModuleIndex::Main,          0x0015CE4C,                 "_ZN9LiveActor9initNerveEPK5Nervel" },
            { util::ModuleIndex::Main,          0x0015CE98,                 "_ZN9LiveActor13initHitSensorEl" },
            { util::ModuleIndex::Main,          0x0015CED8,                 "_ZN9LiveActor10initBinderEffm" },
            { util::ModuleIndex::Main,          0x0015CF78,                 "_ZN9LiveActor13initRailRiderERK12JMapInfoIter" },   
            { util::ModuleIndex::Main,          0x0015CFB8,                 "_ZN9LiveActor16initEffectKeeperElPKcb" },    
            { util::ModuleIndex::Main,          0x0015D060,                 "_ZN9LiveActor9initSoundElPKcNPK9JGeometry5TVec3IfEENRK9JGeometry5TVec3IfEE" },
            { util::ModuleIndex::Main,          0x0015D0C8,                 "_ZN9LiveActor24initShadowControllerListEm" },
            { util::ModuleIndex::Main,          0x0015D10C,                 "_ZN9LiveActor23initActorCollisionPartsEPKcP9HitSensorP14ResourceHolderPA4_fbb" },
            { util::ModuleIndex::Main,          0x0015D200,                 "_ZN9LiveActor15initStageSwitchERK12JMapInfoIter" },
            { util::ModuleIndex::Main,          0x0015D224,                 "_ZN9LiveActor26initActorStarPointerTargetEfNPK9JGeometry5TVec3IfEEPA4_fN9JGeometry5TVec3IfEE" },   
            { util::ModuleIndex::Main,          0x0015D29C,                 "_ZN9LiveActor18initActorLightCtrlEv" },    
            { util::ModuleIndex::Main,          0x0015D2D0,                 "_ZN9LiveActor12attackSensorEP9HitSensorS1_" },
            { util::ModuleIndex::Main,          0x0015D2D4,                 "_ZN9LiveActorD1Ev" },
            { util::ModuleIndex::Main,          0x0015D2F8,                 "_ZN9LiveActor7controlEv" },
            { util::ModuleIndex::Main,          0x0015D2FC,                 "_ZN9LiveActor22receiveMsgPlayerAttackEmP9HitSensorP9HitSensor" },
            { util::ModuleIndex::Main,          0x0015D304,                 "_ZN9LiveActor15receiveOtherMsgEmP9HitSensorP9HitSensor" },

            { util::ModuleIndex::Main,          0x0015D30C,                 "_ZN13LiveActorFlagC1Ev" },

            { util::ModuleIndex::Main,          0x0015E6E0,                 "_ZN11SensorGroupC1EiPKc" },
            { util::ModuleIndex::Main,          0x0015E744,                 "_ZN11SensorGroup3addEP9HitSensor" },
            { util::ModuleIndex::Main,          0x0015E770,                 "_ZN11SensorGroup6removeEP9HitSensor" },

            { util::ModuleIndex::Main,          0x0015E7C8,                 "_ZN16SensorHitCheckerC1EPKc" },
            { util::ModuleIndex::Main,          0x0015E8C4,                 "_ZN16SensorHitChecker4initERK12JMapInfoIter" },
            { util::ModuleIndex::Main,          0x0015E8D8,                 "_ZN16SensorHitChecker9initGroupEP9HitSensor" },   
            { util::ModuleIndex::Main,          0x0015EA00,                 "_ZN16SensorHitChecker8movementEv" },    
            { util::ModuleIndex::Main,          0x0015EBD0,                 "_ZNK16SensorHitChecker13doObjColGroupEP11SensorGroupP11SensorGroup" },
            { util::ModuleIndex::Main,          0x0015ED40,                 "_ZNK16SensorHitChecker19doObjColInSameGroupEP11SensorGroup" },
            { util::ModuleIndex::Main,          0x0015EE80,                 "_ZN2MR18initHitSensorGroupEP9HitSensor" },
            { util::ModuleIndex::Main,          0x0015EEAC,                 "_ZN16SensorHitCheckerD1Ev" },

            { util::ModuleIndex::Main,          0x0015EED0,                 "_ZN15HitSensorKeeperC1Ei" },
            { util::ModuleIndex::Main,          0x0015EF34,                 "_ZN15HitSensorKeeper3addEPKcmtfP9LiveActorNRK9JGeometry5TVec3IfEE" },
            { util::ModuleIndex::Main,          0x0015EFF8,                 "_ZN15HitSensorKeeper11addCallbackEPKcmtfP9LiveActor" },   
            { util::ModuleIndex::Main,          0x0015F0D0,                 "_ZNK15HitSensorKeeper9getSensorEPKc" },    
            { util::ModuleIndex::Main,          0x0015F190,                 "_ZN15HitSensorKeeper6updateEv" },
            { util::ModuleIndex::Main,          0x0015F1E0,                 "_ZN15HitSensorKeeper8doObjColEv" },
            { util::ModuleIndex::Main,          0x0015F230,                 "_ZN15HitSensorKeeper5clearEv" },
            { util::ModuleIndex::Main,          0x0015F270,                 "_ZN15HitSensorKeeper8validateEv" },
            { util::ModuleIndex::Main,          0x0015F2C0,                 "_ZN15HitSensorKeeper10invalidateEv" },
            { util::ModuleIndex::Main,          0x0015F310,                 "_ZN15HitSensorKeeper16validateBySystemEv" },
            { util::ModuleIndex::Main,          0x0015F360,                 "_ZN15HitSensorKeeper18invalidateBySystemEv" },   
            { util::ModuleIndex::Main,          0x0015F3AC,                 "_ZNK15HitSensorKeeper16getNthSensorInfoEi" },    
            { util::ModuleIndex::Main,          0x0015F3C0,                 "_ZNK15HitSensorKeeper13getSensorInfoEPKc" },

            { util::ModuleIndex::Main,          0x0015F480,                 "_ZN9HitSensorC1EmtfP9LiveActor" },
            { util::ModuleIndex::Main,          0x0015F508,                 "_ZN9HitSensor14receiveMessageEmP9HitSensor" },
            { util::ModuleIndex::Main,          0x0015F51C,                 "_ZN9HitSensor7setTypeEm" },  
            { util::ModuleIndex::Main,          0x0015F594,                 "_ZNK9HitSensor6isTypeEm" },       
            { util::ModuleIndex::Main,          0x0015F5A4,                 "_ZN9HitSensor8validateEv" },
            { util::ModuleIndex::Main,          0x0015F5D4,                 "_ZN9HitSensor10invalidateEv" },
            { util::ModuleIndex::Main,          0x0015F61C,                 "_ZN9HitSensor16validateBySystemEv" },
            { util::ModuleIndex::Main,          0x0015F668,                 "_ZN9HitSensor18invalidateBySystemEv" },
            { util::ModuleIndex::Main,          0x0015F6B0,                 "_ZN9HitSensor12addHitSensorEP9HitSensor" },

            { util::ModuleIndex::Main,          0x0015F6D8,                 "_ZN13HitSensorInfo12setFollowPosENPK9JGeometry5TVec3IfEE" },    
            { util::ModuleIndex::Main,          0x0015F6E0,                 "_ZN13HitSensorInfo12setFollowMtxEPA4_f" },
            { util::ModuleIndex::Main,          0x0015F6E8,                 "_ZN13HitSensorInfoC1EPKcP9HitSensorNPK9JGeometry5TVec3IfEEPA4_fNRK9JGeometry5TVec3IfEEb" },
            { util::ModuleIndex::Main,          0x0015F754,                 "_ZN13HitSensorInfo6updateEv" },
            { util::ModuleIndex::Main,          0x0015F8B0,                 "_ZN13HitSensorInfo8doObjColEv" },

            { util::ModuleIndex::Main,          0x00168F3C,                 "_ZN5SpineC1EPvPK5Nervel" },
            { util::ModuleIndex::Main,          0x00168F94,                 "_ZN5Spine6updateEv" },
            { util::ModuleIndex::Main,          0x00169030,                 "_ZN5Spine8setNerveEPK5Nerve" },
            { util::ModuleIndex::Main,          0x0016907C,                 "_ZNK5Spine15getCurrentNerveEv" },

            { util::ModuleIndex::Main,          0x00169090,                 "_ZN16ActorStateKeeperC1Ei" },
            { util::ModuleIndex::Main,          0x00169120,                 "_ZN16ActorStateKeeper8addStateEP23ActorStateBaseInterfacePK5NervePKc" },
            { util::ModuleIndex::Main,          0x00169148,                 "_ZN16ActorStateKeeper18updateCurrentStateEv" },
            { util::ModuleIndex::Main,          0x00169170,                 "_ZN16ActorStateKeeper10startStateEPK5Nerve" },
            { util::ModuleIndex::Main,          0x001691B4,                 "_ZNK16ActorStateKeeper6isDeadEv" },
            { util::ModuleIndex::Main,          0x001691D8,                 "_ZN16ActorStateKeeper8endStateEPK5Nerve" },

            { util::ModuleIndex::Main,          0x00170558,                 "_ZN23ActorStateBaseInterface6updateEv" },
            { util::ModuleIndex::Main,          0x001705AC,                 "_ZN23ActorStateBaseInterface6appearEv" },
            { util::ModuleIndex::Main,          0x001705B4,                 "_ZN23ActorStateBaseInterface4killEv" },

            { util::ModuleIndex::Main,          0x00175EB4,                 "_ZN7NameObjC1EPKc" },
            { util::ModuleIndex::Main,          0x00175F0C,                 "_ZN7NameObj7setNameEPKc" },
            { util::ModuleIndex::Main,          0x00175F28,                 "_ZN7NameObjD1Ev" },
            { util::ModuleIndex::Main,          0x00175F4C,                 "_ZN7NameObj4initERK12JMapInfoIter" },
            { util::ModuleIndex::Main,          0x00175F50,                 "_ZN7NameObj18initAfterPlacementEv" },
            { util::ModuleIndex::Main,          0x00175F54,                 "_ZN7NameObj8movementEv" },
            { util::ModuleIndex::Main,          0x00175F58,                 "_ZNK7NameObj4drawEv" },
            { util::ModuleIndex::Main,          0x00175F5C,                 "_ZN7NameObj8calcAnimEv" },
            { util::ModuleIndex::Main,          0x00175F60,                 "_ZN7NameObj16calcViewAndEntryEv" },
            { util::ModuleIndex::Main,          0x00175F64,                 "_ZN7NameObj15initWithoutIterEv" },          
            { util::ModuleIndex::Main,          0x00175F98,                 "_ZN7NameObj13setLinkedInfoERK12JMapInfoIter" },
            { util::ModuleIndex::Main,          0x00175FA0,                 "_ZN7NameObj15executeMovementEv" },
            { util::ModuleIndex::Main,          0x00175FB8,                 "_ZN7NameObj13syncWithFlagsEv" },

            { util::ModuleIndex::Main,          0x00175FF0,                 "_ZN15NameObjFunction17requestMovementOnEP7NameObj" },
            { util::ModuleIndex::Main,          0x00176020,                 "_ZN15NameObjFunction18requestMovementOffEP7NameObj" },

            { util::ModuleIndex::Main,          0x00177F20,                 "_ZN14NameObjFactory10getCreatorEPKc" },

            { util::ModuleIndex::Main,          0x0017C000,                 "_ZN14NameObjFactory13createNameObjI16BenefitItemOneUpEEP7NameObjPKc" },

            { util::ModuleIndex::Main,          0x001803DC,                 "_ZNK15MorphItemObjNeo6isDemoEv" },
            { util::ModuleIndex::Main,          0x001803FC,                 "_ZN15MorphItemObjNeo17emitAppearEffectsEv" },
            { util::ModuleIndex::Main,          0x00180400,                 "_ZN15MorphItemObjNeo20appearTransformationEv" },
            { util::ModuleIndex::Main,          0x00180404,                 "_ZN15MorphItemObjNeo18killTransformationEv" },

            { util::ModuleIndex::Main,          0x00180DD8,                 "_ZN14SceneObjHolderC1Ev" },
            { util::ModuleIndex::Main,          0x00180DE4,                 "_ZN14SceneObjHolder10newEachObjEi" },
            { util::ModuleIndex::Main,          0x001821EC,                 "_ZNK14SceneObjHolder6getObjEi" }, 
            { util::ModuleIndex::Main,          0x00182200,                 "_ZN14SceneObjHolder6createEi" },
            
            { util::ModuleIndex::Main,          0x00183658,                 "_ZN9GameSceneC1Ev" },
            { util::ModuleIndex::Main,          0x00183780,                 "_ZN9GameSceneD1Ev" },
            { util::ModuleIndex::Main,          0x001837B0,                 "_ZN9GameScene4initEv" },

            { util::ModuleIndex::Main,          0x001837B0,                 "_ZN14GameScenePatch4initEv" }, // Custom to patch virtual void GameScene::init(JMapInfoIter&);    

            { util::ModuleIndex::Main,          0x00184B74,                 "_ZN5SceneC1EPKc" },
            { util::ModuleIndex::Main,          0x00184BFC,                 "_ZN5SceneD1Ev" },
            { util::ModuleIndex::Main,          0x00184C20,                 "_ZN5Scene4initEv" },
            { util::ModuleIndex::Main,          0x00184C24,                 "_ZN5Scene5startEv" },
            { util::ModuleIndex::Main,          0x00184C28,                 "_ZN5Scene6updateEv" },
            { util::ModuleIndex::Main,          0x00184C2C,                 "_ZNK5Scene4drawEv" },
            { util::ModuleIndex::Main,          0x00184C30,                 "_ZN5Scene8calcAnimEv" },
            { util::ModuleIndex::Main,          0x00184C34,                 "_ZN5Scene23initNameObjListExecutorEv" },
            { util::ModuleIndex::Main,          0x00184C7C,                 "_ZN5Scene18initSceneObjHolderEv" },

            { util::ModuleIndex::Main,          0x001E9044,                 "_ZN10MarioActorC1EPKc" },
            { util::ModuleIndex::Main,          0x001E9044,                 "_ZN15MarioActorPatch21MarioActorConstructorEv" }, // Custom to patch MarioActor::MarioActor(const char*);  
            { util::ModuleIndex::Main,          0x001EDB30,                 "_ZN10MarioActor20takenDamageBehaviourEv" },
            { util::ModuleIndex::Main,          0x001EDB30,                 "_ZN15MarioActorPatch20takenDamageBehaviourEv" }, // Custom to patch void MarioActor::takenDamageBehaviour();
            { util::ModuleIndex::Main,          0x001EDC2C,                 "_ZN10MarioActor7incLifeEj" },
            { util::ModuleIndex::Main,          0x001EDC2C,                 "_ZN15MarioActorPatch7incLifeEv" }, // Custom to patch void MarioActor::incLife(u32);
            { util::ModuleIndex::Main,          0x001FB040,                 "_ZN10MarioActor19LifeRelatedFunctionEv" },
            { util::ModuleIndex::Main,          0x001FB040,                 "_ZN15MarioActorPatch19LifeRelatedFunctionEv" }, // Custom to patch void MarioActor::LiveRelatedFunction();

            { util::ModuleIndex::Main,          0x0025AFE0,                 "_ZN17StarPointerTargetC1EfNPK9JGeometry5TVec3IfEEPA4_fN9JGeometry5TVec3IfEE" },

            { util::ModuleIndex::Main,          0x0026B3C0,                 "_ZN28CounterLayoutControllerPatch4initEv" }, // Custom to patch void CounterLayoutControllerPatch::init(JMapInfoIter&);

            { util::ModuleIndex::Main,          0x0035EF50,                 "_ZN15MorphItemObjNeoC1EPKc" },
            { util::ModuleIndex::Main,          0x0035EF50,                 "_ZN15MorphItemObjNeoC2EPKc" },
            { util::ModuleIndex::Main,          0x0035EFAC,                 "_ZN15MorphItemObjNeo4initERK12JMapInfoIter" },
            { util::ModuleIndex::Main,          0x0035F520,                 "_ZN15MorphItemObjNeo18initAfterPlacementEv" },
            { util::ModuleIndex::Main,          0x0035F53C,                 "_ZN15MorphItemObjNeo17makeActorAppearedEv" },
            { util::ModuleIndex::Main,          0x0035F578,                 "_ZN15MorphItemObjNeo13makeActorDeadEv" },
            { util::ModuleIndex::Main,          0x0035F5AC,                 "_ZN15MorphItemObjNeo6appearEv" },
            { util::ModuleIndex::Main,          0x0035F68C,                 "_ZN15MorphItemObjNeo4killEv" },
            { util::ModuleIndex::Main,          0x0035F6BC,                 "_ZN15MorphItemObjNeo7controlEv" },
            { util::ModuleIndex::Main,          0x0035FA9C,                 "_ZN15MorphItemObjNeo17calcAndSetBaseMtxEv" },
            { util::ModuleIndex::Main,          0x0035FCF4,                 "_ZN15MorphItemObjNeo22receiveMsgPlayerAttackEjP9HitSensorS1_" },
            { util::ModuleIndex::Main,          0x0035FE14,                 "_ZN15MorphItemObjNeo15receiveOtherMsgEjP9HitSensorS1_" },

            { util::ModuleIndex::Main,          0x003755D0,                 "_ZN2MR19tryCreateDummyModelEP9LiveActorRK12JMapInfoIterli" },

            { util::ModuleIndex::Main,          0x003A1490,                 "_ZN19MorphItemCollectionC1EPKc" },
            { util::ModuleIndex::Main,          0x003A1490,                 "_ZN19MorphItemCollectionC2EPKc" },
            { util::ModuleIndex::Main,          0x003A14CC,                 "_ZN19MorphItemCollection4initERK12JMapInfoIter" },
            { util::ModuleIndex::Main,          0x003A14CC,                 "_ZN24MorphItemCollectionPatch4initEv" }, // custom to patch MorphItemCollectionPatch::init
            { util::ModuleIndex::Main,          0x003A1554,                 "_ZN19MorphItemCollection16initPowerUpModelERK12JMapInfoIter" },
            { util::ModuleIndex::Main,          0x003A1690,                 "_ZN19MorphItemCollection17calcAndSetBaseMtxEv" },
            { util::ModuleIndex::Main,          0x003A16F4,                 "_ZN19MorphItemCollectionD1Ev" },
            { util::ModuleIndex::Main,          0x003A1718,                 "_ZN19MorphItemCollection7exeWaitEv" },

            { util::ModuleIndex::Main,          0x009108F0,                 "_ZN19NameObjFactoryPatch19NameObjListAccessorEv" } // Custom symbol to access the NameObjList
        >,

        //***************************************************************************************//
        //                                                                                       //
        //***************************************************************************************//
    
        UserTableType<VersionType::V1_2_0,
            { util::ModuleIndex::Main,          0x00086F30,                 "_ZN16GameDataFunction34tryOnDimensionBigCastleGalaxyCometEv" },
            { util::ModuleIndex::Main,          0x00087440,                 "_ZN16GameDataFunction13isLuigiPlayerEv" },

            { util::ModuleIndex::Main,          0x000A0990,                 "_ZN13NerveExecutorC1EPKc" },
            { util::ModuleIndex::Main,          0x000A09C4,                 "_ZN13NerveExecutorD1Ev" },
            { util::ModuleIndex::Main,          0x000A09E8,                 "_ZN13NerveExecutor9initNerveEPK5Nervel" },
            { util::ModuleIndex::Main,          0x000A0A34,                 "_ZN13NerveExecutor11updateNerveEv" },
            { util::ModuleIndex::Main,          0x000A0A44,                 "_ZN13NerveExecutor8setNerveEPK5Nerve" },
            { util::ModuleIndex::Main,          0x000A0A4C,                 "_ZNK13NerveExecutor7isNerveEPK5Nerve" },
            { util::ModuleIndex::Main,          0x000A0A78,                 "_ZNK13NerveExecutor12getNerveStepEv" },

            { util::ModuleIndex::Main,          0x000B5F20,                 "_ZN2MR13isEqualStringEPKcPKc" },
            { util::ModuleIndex::Main,          0x000B5F40,                 "_ZN2MR17isEqualStringCaseEPKcS1_" },

            { util::ModuleIndex::Main,          0x000B7550,                 "_ZN2MR17isStageFileSelectEv" },

            { util::ModuleIndex::Main,          0x000B93B0,                 "_ZN2MR39isGalaxyHorrorCometAppearInCurrentStageEv" },

            { util::ModuleIndex::Main,          0x000B9760,                 "_ZN2MR27explainFlyingMarioIfAtFirstEv" },

            { util::ModuleIndex::Main,          0x000B97A0,                 "_ZN2MR35isOnGameEventFlagFlyingMarioAtFirstEv" },

            { util::ModuleIndex::Main,          0x000B9C60,                 "_ZN2MR33onGameEventFlagFlyingMarioAtFirstEv" },

            { util::ModuleIndex::Main,          0x000B9FA0,                 "_ZN2MR29isOnGameEventFlagNormalEndingEv" },
            { util::ModuleIndex::Main,          0x000B9FB0,                 "_ZN2MR36isOnGameEventFlag120PowerStarsEndingEv" },

            { util::ModuleIndex::Main,          0x000BA530,                 "_ZN2MR37isGalaxyDarkCometAppearInCurrentStageEv" },
            { util::ModuleIndex::Main,          0x000BA540,                 "_ZN2MR38isGalaxyQuickCometAppearInCurrentStageEv" },
            { util::ModuleIndex::Main,          0x000BA550,                 "_ZN2MR39isGalaxyPurpleCometAppearInCurrentStageEv" },
            { util::ModuleIndex::Main,          0x000BA560,                 "_ZN2MR40isGalaxyRainbowCometAppearInCurrentStageEv" },

            { util::ModuleIndex::Main,          0x000BB2A0,                 "_ZN2MR20connectToSceneLayoutEP7NameObj" },

            { util::ModuleIndex::Main,          0x000BE558,                 "_ZN7NameObj13startMovementEv" },
            { util::ModuleIndex::Main,          0x000BE55C,                 "_ZN7NameObj11endMovementEv" },

            { util::ModuleIndex::Main,          0x000BE560,                 "_ZN9LiveActor15updateHitSensorEP9HitSensor" },
            { util::ModuleIndex::Main,          0x000BE564,                 "_ZN9LiveActor14receiveMsgPushEP9HitSensorS1_" },
            { util::ModuleIndex::Main,          0x000BE56C,                 "_ZN9LiveActor21receiveMsgEnemyAttackEjP9HitSensorS1_" },

            { util::ModuleIndex::Main,          0x000BE718,                 "_ZN12JMapLinkInfoC1Ev" },
            { util::ModuleIndex::Main,          0x000BE72C,                 "_ZN12JMapLinkInfoC1ERK12JMapInfoIterb" },
            { util::ModuleIndex::Main,          0x000BE748,                 "_ZN12JMapLinkInfo13setLinkedInfoERK12JMapInfoIter" },
            { util::ModuleIndex::Main,          0x000BE834,                 "_ZN12JMapLinkInfo11setLinkInfoERK12JMapInfoIter" },
            { util::ModuleIndex::Main,          0x000BE9CC,                 "_ZNK12JMapLinkInfo7isValidEv" },

            { util::ModuleIndex::Main,          0x000BE9F4,                 "_ZN8JMapInfoC1Ev" },
            { util::ModuleIndex::Main,          0x000BEA04,                 "_ZN8JMapInfoD1Ev" },
            { util::ModuleIndex::Main,          0x000BEA08,                 "_ZN8JMapInfo6attachEPKv" },
            { util::ModuleIndex::Main,          0x000BEA1C,                 "_ZN8JMapInfo7setNameEPKc" },
            { util::ModuleIndex::Main,          0x000BEA24,                 "_ZNK8JMapInfo7getNameEv" },
            { util::ModuleIndex::Main,          0x000BEA30,                 "_ZNK8JMapInfo14searchItemInfoEPKc" },
            { util::ModuleIndex::Main,          0x000BEAC0,                 "_ZNK8JMapInfo12getValueTypeEPKc" },
            { util::ModuleIndex::Main,          0x000BEB4C,                 "_ZNK8JMapInfo12getValueFastEiiPPKc" },
            { util::ModuleIndex::Main,          0x000BEB9C,                 "_ZNK8JMapInfo12getValueFastEiiPm" },
            { util::ModuleIndex::Main,          0x000BEC24,                 "_ZNK8JMapInfo12getValueFastEiiPl" },

            { util::ModuleIndex::Main,          0x000BEE00,                 "_ZN2MR11getHashCodeEPKc" },

            { util::ModuleIndex::Main,          0x000D17B0,                 "_ZN2MR13getObjectNameEPPKcRK12JMapInfoIter" },
            { util::ModuleIndex::Main,          0x000D1880,                 "_ZN2MR12isObjectNameERK12JMapInfoIterPKc" },

            { util::ModuleIndex::Main,          0x000D9B80,                 "_ZN2MR12isSensorTypeEPK9HitSensorm" },

            { util::ModuleIndex::Main,          0x000D9E50,                 "_ZN2MR17validateHitSensorEP9HitSensor" },
            { util::ModuleIndex::Main,          0x000D9E60,                 "_ZN2MR19invalidateHitSensorEP9HitSensor" },   

            { util::ModuleIndex::Main,          0x0012D774,                 "_ZN23ActorStateBaseInterface4initEv" },
            { util::ModuleIndex::Main,          0x0012DA58,                 "_ZN23ActorStateBaseInterface7controlEv" },

            { util::ModuleIndex::Main,          0x00138AF0,                 "_ZN13EventFunction17isStartCometEventEPKc" },

            { util::ModuleIndex::Main,          0x0015CCA8,                 "_ZN9LiveActorC1EPKc" },
            { util::ModuleIndex::Main,          0x0015CD4C,                 "_ZN9LiveActor4initERK12JMapInfoIter" },
            { util::ModuleIndex::Main,          0x0015CD50,                 "_ZN9LiveActor6appearEv" },   
            { util::ModuleIndex::Main,          0x0015CD5C,                 "_ZN9LiveActor17makeActorAppearedEv" },    
            { util::ModuleIndex::Main,          0x0015CDFC,                 "_ZN9LiveActor4killEv" },
            { util::ModuleIndex::Main,          0x0015CE50,                 "_ZN9LiveActor13makeActorDeadEv" },
            { util::ModuleIndex::Main,          0x0015CEC8,                 "_ZN9LiveActor8movementEv" },
            { util::ModuleIndex::Main,          0x0015D028,                 "_ZN9LiveActor8calcAnimEv" },
            { util::ModuleIndex::Main,          0x0015D09C,                 "_ZN9LiveActor10calcAnmMtxEv" },
            { util::ModuleIndex::Main,          0x0015D0EC,                 "_ZN9LiveActor16calcViewAndEntryEv" },
            { util::ModuleIndex::Main,          0x0015D104,                 "_ZN9LiveActor14receiveMessageEjP9HitSensorS1_" },   
            { util::ModuleIndex::Main,          0x0015D158,                 "_ZN9LiveActor17calcAndSetBaseMtxEv" },    
            { util::ModuleIndex::Main,          0x0015D1F4,                 "_ZNK9LiveActor12getTakingMtxEv" },
            { util::ModuleIndex::Main,          0x0015D200,                 "_ZN9LiveActor8setNerveEPK5Nerve" },
            { util::ModuleIndex::Main,          0x0015D208,                 "_ZNK9LiveActor7isNerveEPK5Nerve" },
            { util::ModuleIndex::Main,          0x0015D234,                 "_ZNK9LiveActor12getNerveStepEv" },
            { util::ModuleIndex::Main,          0x0015D240,                 "_ZNK9LiveActor9getSensorEPKc" },   
            { util::ModuleIndex::Main,          0x0015D250,                 "_ZNK9LiveActor10getBaseMtxEv" },    
            { util::ModuleIndex::Main,          0x0015D280,                 "_ZN9LiveActor12startClippedEv" },
            { util::ModuleIndex::Main,          0x0015D2E0,                 "_ZN9LiveActor10endClippedEv" },
            { util::ModuleIndex::Main,          0x0015D344,                 "_ZN9LiveActor23initModelManagerWithAnmEPKcPKcPKcb" },
            { util::ModuleIndex::Main,          0x0015D3EC,                 "_ZN9LiveActor9initNerveEPK5Nervel" },
            { util::ModuleIndex::Main,          0x0015D438,                 "_ZN9LiveActor13initHitSensorEl" },
            { util::ModuleIndex::Main,          0x0015D478,                 "_ZN9LiveActor10initBinderEffm" },
            { util::ModuleIndex::Main,          0x0015D518,                 "_ZN9LiveActor13initRailRiderERK12JMapInfoIter" },   
            { util::ModuleIndex::Main,          0x0015D558,                 "_ZN9LiveActor16initEffectKeeperElPKcb" },    
            { util::ModuleIndex::Main,          0x0015D600,                 "_ZN9LiveActor9initSoundElPKcNPK9JGeometry5TVec3IfEENRK9JGeometry5TVec3IfEE" },
            { util::ModuleIndex::Main,          0x0015D668,                 "_ZN9LiveActor24initShadowControllerListEm" },
            { util::ModuleIndex::Main,          0x0015D6AC,                 "_ZN9LiveActor23initActorCollisionPartsEPKcP9HitSensorP14ResourceHolderPA4_fbb" },
            { util::ModuleIndex::Main,          0x0015D7A0,                 "_ZN9LiveActor15initStageSwitchERK12JMapInfoIter" },
            { util::ModuleIndex::Main,          0x0015D7C4,                 "_ZN9LiveActor26initActorStarPointerTargetEfNPK9JGeometry5TVec3IfEEPA4_fN9JGeometry5TVec3IfEE" },   
            { util::ModuleIndex::Main,          0x0015D83C,                 "_ZN9LiveActor18initActorLightCtrlEv" },    
            { util::ModuleIndex::Main,          0x0015D870,                 "_ZN9LiveActor12attackSensorEP9HitSensorS1_" },
            { util::ModuleIndex::Main,          0x0015D874,                 "_ZN9LiveActorD1Ev" },
            { util::ModuleIndex::Main,          0x0015D898,                 "_ZN9LiveActor7controlEv" },
            { util::ModuleIndex::Main,          0x0015D89C,                 "_ZN9LiveActor22receiveMsgPlayerAttackEmP9HitSensorP9HitSensor" },
            { util::ModuleIndex::Main,          0x0015D8A4,                 "_ZN9LiveActor15receiveOtherMsgEmP9HitSensorP9HitSensor" },

            { util::ModuleIndex::Main,          0x0015D8AC,                 "_ZN13LiveActorFlagC1Ev" },

            { util::ModuleIndex::Main,          0x0015EC80,                 "_ZN11SensorGroupC1EiPKc" },
            { util::ModuleIndex::Main,          0x0015ECE4,                 "_ZN11SensorGroup3addEP9HitSensor" },
            { util::ModuleIndex::Main,          0x0015ED10,                 "_ZN11SensorGroup6removeEP9HitSensor" },

            { util::ModuleIndex::Main,          0x0015ED68,                 "_ZN16SensorHitCheckerC1EPKc" },
            { util::ModuleIndex::Main,          0x0015EE64,                 "_ZN16SensorHitChecker4initERK12JMapInfoIter" },
            { util::ModuleIndex::Main,          0x0015EE78,                 "_ZN16SensorHitChecker9initGroupEP9HitSensor" },   
            { util::ModuleIndex::Main,          0x0015EFA0,                 "_ZN16SensorHitChecker8movementEv" },    
            { util::ModuleIndex::Main,          0x0015F170,                 "_ZNK16SensorHitChecker13doObjColGroupEP11SensorGroupP11SensorGroup" },
            { util::ModuleIndex::Main,          0x0015F2E0,                 "_ZNK16SensorHitChecker19doObjColInSameGroupEP11SensorGroup" },
            { util::ModuleIndex::Main,          0x0015F420,                 "_ZN2MR18initHitSensorGroupEP9HitSensor" },
            { util::ModuleIndex::Main,          0x0015F44C,                 "_ZN16SensorHitCheckerD1Ev" },

            { util::ModuleIndex::Main,          0x0015F470,                 "_ZN15HitSensorKeeperC1Ei" },
            { util::ModuleIndex::Main,          0x0015F4D4,                 "_ZN15HitSensorKeeper3addEPKcmtfP9LiveActorNRK9JGeometry5TVec3IfEE" },
            { util::ModuleIndex::Main,          0x0015F598,                 "_ZN15HitSensorKeeper11addCallbackEPKcmtfP9LiveActor" },   
            { util::ModuleIndex::Main,          0x0015F670,                 "_ZNK15HitSensorKeeper9getSensorEPKc" },    
            { util::ModuleIndex::Main,          0x0015F730,                 "_ZN15HitSensorKeeper6updateEv" },
            { util::ModuleIndex::Main,          0x0015F780,                 "_ZN15HitSensorKeeper8doObjColEv" },
            { util::ModuleIndex::Main,          0x0015F7D0,                 "_ZN15HitSensorKeeper5clearEv" },
            { util::ModuleIndex::Main,          0x0015F810,                 "_ZN15HitSensorKeeper8validateEv" },
            { util::ModuleIndex::Main,          0x0015F860,                 "_ZN15HitSensorKeeper10invalidateEv" },
            { util::ModuleIndex::Main,          0x0015F8B0,                 "_ZN15HitSensorKeeper16validateBySystemEv" },
            { util::ModuleIndex::Main,          0x0015F900,                 "_ZN15HitSensorKeeper18invalidateBySystemEv" },   
            { util::ModuleIndex::Main,          0x0015F94C,                 "_ZNK15HitSensorKeeper16getNthSensorInfoEi" },    
            { util::ModuleIndex::Main,          0x0015F960,                 "_ZNK15HitSensorKeeper13getSensorInfoEPKc" },

            { util::ModuleIndex::Main,          0x0015FA20,                 "_ZN9HitSensorC1EmtfP9LiveActor" },
            { util::ModuleIndex::Main,          0x0015FAA8,                 "_ZN9HitSensor14receiveMessageEmP9HitSensor" },
            { util::ModuleIndex::Main,          0x0015FABC,                 "_ZN9HitSensor7setTypeEm" },  
            { util::ModuleIndex::Main,          0x0015FB34,                 "_ZNK9HitSensor6isTypeEm" },       
            { util::ModuleIndex::Main,          0x0015FB44,                 "_ZN9HitSensor8validateEv" },
            { util::ModuleIndex::Main,          0x0015FB74,                 "_ZN9HitSensor10invalidateEv" },
            { util::ModuleIndex::Main,          0x0015FBBC,                 "_ZN9HitSensor16validateBySystemEv" },
            { util::ModuleIndex::Main,          0x0015FC08,                 "_ZN9HitSensor18invalidateBySystemEv" },
            { util::ModuleIndex::Main,          0x0015FC50,                 "_ZN9HitSensor12addHitSensorEP9HitSensor" },

            { util::ModuleIndex::Main,          0x0015FC78,                 "_ZN13HitSensorInfo12setFollowPosENPK9JGeometry5TVec3IfEE" },    
            { util::ModuleIndex::Main,          0x0015FC80,                 "_ZN13HitSensorInfo12setFollowMtxEPA4_f" },
            { util::ModuleIndex::Main,          0x0015FC88,                 "_ZN13HitSensorInfoC1EPKcP9HitSensorNPK9JGeometry5TVec3IfEEPA4_fNRK9JGeometry5TVec3IfEEb" },
            { util::ModuleIndex::Main,          0x0015FCF4,                 "_ZN13HitSensorInfo6updateEv" },
            { util::ModuleIndex::Main,          0x0015FE50,                 "_ZN13HitSensorInfo8doObjColEv" },

            { util::ModuleIndex::Main,          0x001694DC,                 "_ZN5SpineC1EPvPK5Nervel" },
            { util::ModuleIndex::Main,          0x00169534,                 "_ZN5Spine6updateEv" },
            { util::ModuleIndex::Main,          0x001695D0,                 "_ZN5Spine8setNerveEPK5Nerve" },
            { util::ModuleIndex::Main,          0x0016961C,                 "_ZNK5Spine15getCurrentNerveEv" },

            { util::ModuleIndex::Main,          0x00169630,                 "_ZN16ActorStateKeeperC1Ei" },
            { util::ModuleIndex::Main,          0x001696C0,                 "_ZN16ActorStateKeeper8addStateEP23ActorStateBaseInterfacePK5NervePKc" },
            { util::ModuleIndex::Main,          0x001696E8,                 "_ZN16ActorStateKeeper18updateCurrentStateEv" },
            { util::ModuleIndex::Main,          0x00169710,                 "_ZN16ActorStateKeeper10startStateEPK5Nerve" },
            { util::ModuleIndex::Main,          0x00169754,                 "_ZNK16ActorStateKeeper6isDeadEv" },
            { util::ModuleIndex::Main,          0x00169778,                 "_ZN16ActorStateKeeper8endStateEPK5Nerve" },

            { util::ModuleIndex::Main,          0x00170AF8,                 "_ZN23ActorStateBaseInterface6updateEv" },
            { util::ModuleIndex::Main,          0x00170B4C,                 "_ZN23ActorStateBaseInterface6appearEv" },
            { util::ModuleIndex::Main,          0x00170B54,                 "_ZN23ActorStateBaseInterface4killEv" },

            { util::ModuleIndex::Main,          0x00176454,                 "_ZN7NameObjC1EPKc" },
            { util::ModuleIndex::Main,          0x001764AC,                 "_ZN7NameObj7setNameEPKc" },
            { util::ModuleIndex::Main,          0x001764C8,                 "_ZN7NameObjD1Ev" },
            { util::ModuleIndex::Main,          0x001764EC,                 "_ZN7NameObj4initERK12JMapInfoIter" },
            { util::ModuleIndex::Main,          0x001764F0,                 "_ZN7NameObj18initAfterPlacementEv" },
            { util::ModuleIndex::Main,          0x001764F4,                 "_ZN7NameObj8movementEv" },
            { util::ModuleIndex::Main,          0x001764F8,                 "_ZNK7NameObj4drawEv" },
            { util::ModuleIndex::Main,          0x001764FC,                 "_ZN7NameObj8calcAnimEv" },
            { util::ModuleIndex::Main,          0x00176500,                 "_ZN7NameObj16calcViewAndEntryEv" },
            { util::ModuleIndex::Main,          0x00176504,                 "_ZN7NameObj15initWithoutIterEv" },          
            { util::ModuleIndex::Main,          0x00176538,                 "_ZN7NameObj13setLinkedInfoERK12JMapInfoIter" },
            { util::ModuleIndex::Main,          0x00176540,                 "_ZN7NameObj15executeMovementEv" },
            { util::ModuleIndex::Main,          0x00176558,                 "_ZN7NameObj13syncWithFlagsEv" },

            { util::ModuleIndex::Main,          0x00176590,                 "_ZN15NameObjFunction17requestMovementOnEP7NameObj" },
            { util::ModuleIndex::Main,          0x001765C0,                 "_ZN15NameObjFunction18requestMovementOffEP7NameObj" },

            { util::ModuleIndex::Main,          0x001784C0,                 "_ZN14NameObjFactory10getCreatorEPKc" },

            { util::ModuleIndex::Main,          0x0017C5A0,                 "_ZN14NameObjFactory13createNameObjI16BenefitItemOneUpEEP7NameObjPKc" },

            { util::ModuleIndex::Main,          0x0018097C,                 "_ZNK15MorphItemObjNeo6isDemoEv" },
            { util::ModuleIndex::Main,          0x0018099C,                 "_ZN15MorphItemObjNeo17emitAppearEffectsEv" },
            { util::ModuleIndex::Main,          0x001809A0,                 "_ZN15MorphItemObjNeo20appearTransformationEv" },
            { util::ModuleIndex::Main,          0x001809A4,                 "_ZN15MorphItemObjNeo18killTransformationEv" },

            { util::ModuleIndex::Main,          0x00181378,                 "_ZN14SceneObjHolderC1Ev" },
            { util::ModuleIndex::Main,          0x00181384,                 "_ZN14SceneObjHolder10newEachObjEi" },
            { util::ModuleIndex::Main,          0x0018278C,                 "_ZNK14SceneObjHolder6getObjEi" }, 
            { util::ModuleIndex::Main,          0x001827A0,                 "_ZN14SceneObjHolder6createEi" },
            
            { util::ModuleIndex::Main,          0x00183BF8,                 "_ZN9GameSceneC1Ev" },
            { util::ModuleIndex::Main,          0x00183D20,                 "_ZN9GameSceneD1Ev" },
            { util::ModuleIndex::Main,          0x00183D50,                 "_ZN9GameScene4initEv" },

            { util::ModuleIndex::Main,          0x00183D50,                 "_ZN14GameScenePatch4initEv" }, // Custom to patch virtual void GameScene::init(JMapInfoIter&);    

            { util::ModuleIndex::Main,          0x00185114,                 "_ZN5SceneC1EPKc" },
            { util::ModuleIndex::Main,          0x0018519C,                 "_ZN5SceneD1Ev" },
            { util::ModuleIndex::Main,          0x001851C0,                 "_ZN5Scene4initEv" },
            { util::ModuleIndex::Main,          0x001851C4,                 "_ZN5Scene5startEv" },
            { util::ModuleIndex::Main,          0x001851C8,                 "_ZN5Scene6updateEv" },
            { util::ModuleIndex::Main,          0x001851CC,                 "_ZNK5Scene4drawEv" },
            { util::ModuleIndex::Main,          0x001851D0,                 "_ZN5Scene8calcAnimEv" },
            { util::ModuleIndex::Main,          0x001851D4,                 "_ZN5Scene23initNameObjListExecutorEv" },
            { util::ModuleIndex::Main,          0x0018521C,                 "_ZN5Scene18initSceneObjHolderEv" },

            { util::ModuleIndex::Main,          0x001E94F4,                 "_ZN10MarioActorC1EPKc" },
            { util::ModuleIndex::Main,          0x001E94F4,                 "_ZN15MarioActorPatch21MarioActorConstructorEv" }, // Custom to patch MarioActor::MarioActor(const char*);  
            { util::ModuleIndex::Main,          0x001EDFE0,                 "_ZN10MarioActor20takenDamageBehaviourEv" },
            { util::ModuleIndex::Main,          0x001EDFE0,                 "_ZN15MarioActorPatch20takenDamageBehaviourEv" }, // Custom to patch void MarioActor::takenDamageBehaviour();
            { util::ModuleIndex::Main,          0x001EE0DC,                 "_ZN10MarioActor7incLifeEj" },
            { util::ModuleIndex::Main,          0x001EE0DC,                 "_ZN15MarioActorPatch7incLifeEv" }, // Custom to patch void MarioActor::incLife(u32);
            { util::ModuleIndex::Main,          0x001FB4C0,                 "_ZN10MarioActor19LifeRelatedFunctionEv" },
            { util::ModuleIndex::Main,          0x001FB4C0,                 "_ZN15MarioActorPatch19LifeRelatedFunctionEv" }, // Custom to patch void MarioActor::LiveRelatedFunction();

            { util::ModuleIndex::Main,          0x0025B2C0,                 "_ZN17StarPointerTargetC1EfNPK9JGeometry5TVec3IfEEPA4_fN9JGeometry5TVec3IfEE" },

            { util::ModuleIndex::Main,          0x0026B6A0,                 "_ZN28CounterLayoutControllerPatch4initEv" }, // Custom to patch void CounterLayoutControllerPatch::init(JMapInfoIter&);

            { util::ModuleIndex::Main,          0x0035F170,                 "_ZN15MorphItemObjNeoC1EPKc" },
            { util::ModuleIndex::Main,          0x0035F170,                 "_ZN15MorphItemObjNeoC2EPKc" },
            { util::ModuleIndex::Main,          0x0035F1CC,                 "_ZN15MorphItemObjNeo4initERK12JMapInfoIter" },
            { util::ModuleIndex::Main,          0x0035F740,                 "_ZN15MorphItemObjNeo18initAfterPlacementEv" },
            { util::ModuleIndex::Main,          0x0035F75C,                 "_ZN15MorphItemObjNeo17makeActorAppearedEv" },
            { util::ModuleIndex::Main,          0x0035F798,                 "_ZN15MorphItemObjNeo13makeActorDeadEv" },
            { util::ModuleIndex::Main,          0x0035F7CC,                 "_ZN15MorphItemObjNeo6appearEv" },
            { util::ModuleIndex::Main,          0x0035F8AC,                 "_ZN15MorphItemObjNeo4killEv" },
            { util::ModuleIndex::Main,          0x0035F8DC,                 "_ZN15MorphItemObjNeo7controlEv" },
            { util::ModuleIndex::Main,          0x0035FCBC,                 "_ZN15MorphItemObjNeo17calcAndSetBaseMtxEv" },
            { util::ModuleIndex::Main,          0x0035FF14,                 "_ZN15MorphItemObjNeo22receiveMsgPlayerAttackEjP9HitSensorS1_" },
            { util::ModuleIndex::Main,          0x00360034,                 "_ZN15MorphItemObjNeo15receiveOtherMsgEjP9HitSensorS1_" },

            { util::ModuleIndex::Main,          0x003757E0,                 "_ZN2MR19tryCreateDummyModelEP9LiveActorRK12JMapInfoIterli" },

            { util::ModuleIndex::Main,          0x003A16A0,                 "_ZN19MorphItemCollectionC1EPKc" },
            { util::ModuleIndex::Main,          0x003A16A0,                 "_ZN19MorphItemCollectionC2EPKc" },
            { util::ModuleIndex::Main,          0x003A16DC,                 "_ZN19MorphItemCollection4initERK12JMapInfoIter" },
            { util::ModuleIndex::Main,          0x003A16DC,                 "_ZN24MorphItemCollectionPatch4initEv" }, // custom to patch MorphItemCollectionPatch::init
            { util::ModuleIndex::Main,          0x003A1764,                 "_ZN19MorphItemCollection16initPowerUpModelERK12JMapInfoIter" },
            { util::ModuleIndex::Main,          0x003A18A0,                 "_ZN19MorphItemCollection17calcAndSetBaseMtxEv" },
            { util::ModuleIndex::Main,          0x003A1904,                 "_ZN19MorphItemCollectionD1Ev" },
            { util::ModuleIndex::Main,          0x003A1928,                 "_ZN19MorphItemCollection7exeWaitEv" },

            { util::ModuleIndex::Main,          0x0090F8D0,                 "_ZN19NameObjFactoryPatch19NameObjListAccessorEv" } // Custom symbol to access the NameObjList
        >,

        //***************************************************************************************//
        //                                                                                       //
        //***************************************************************************************//

        UserTableType<VersionType::DEFAULT,
            { util::ModuleIndex::Main,          0x000872F0,                 "_ZN16GameDataFunction34tryOnDimensionBigCastleGalaxyCometEv" },
            { util::ModuleIndex::Main,          0x00087800,                 "_ZN16GameDataFunction13isLuigiPlayerEv" },
                                                                            
            { util::ModuleIndex::Main,          0x000A0BE0,                 "_ZN13NerveExecutorC1EPKc" },
            { util::ModuleIndex::Main,          0x000A0C14,                 "_ZN13NerveExecutorD1Ev" },
            { util::ModuleIndex::Main,          0x000A0C38,                 "_ZN13NerveExecutor9initNerveEPK5Nervel" },
            { util::ModuleIndex::Main,          0x000A0C84,                 "_ZN13NerveExecutor11updateNerveEv" },
            { util::ModuleIndex::Main,          0x000A0C94,                 "_ZN13NerveExecutor8setNerveEPK5Nerve" },
            { util::ModuleIndex::Main,          0x000A0C9C,                 "_ZNK13NerveExecutor7isNerveEPK5Nerve" },
            { util::ModuleIndex::Main,          0x000A0CC8,                 "_ZNK13NerveExecutor12getNerveStepEv" },
                                                                            
            { util::ModuleIndex::Main,          0x000B6170,                 "_ZN2MR13isEqualStringEPKcPKc" },
            { util::ModuleIndex::Main,          0x000B6190,                 "_ZN2MR17isEqualStringCaseEPKcS1_" },
                                                                            
            { util::ModuleIndex::Main,          0x000B77A0,                 "_ZN2MR17isStageFileSelectEv" },
                                                                            
            { util::ModuleIndex::Main,          0x000B95D0,                 "_ZN2MR39isGalaxyHorrorCometAppearInCurrentStageEv" },

            { util::ModuleIndex::Main,          0x000B9980,                 "_ZN2MR27explainFlyingMarioIfAtFirstEv" },

            { util::ModuleIndex::Main,          0x000B99C0,                 "_ZN2MR35isOnGameEventFlagFlyingMarioAtFirstEv" },

            { util::ModuleIndex::Main,          0x000B9E80,                 "_ZN2MR33onGameEventFlagFlyingMarioAtFirstEv" },
                                                                            
            { util::ModuleIndex::Main,          0x000BA1C0,                 "_ZN2MR29isOnGameEventFlagNormalEndingEv" },
            { util::ModuleIndex::Main,          0x000BA1D0,                 "_ZN2MR36isOnGameEventFlag120PowerStarsEndingEv" },
                                                                            
            { util::ModuleIndex::Main,          0x000BA720,                 "_ZN2MR37isGalaxyDarkCometAppearInCurrentStageEv" },
            { util::ModuleIndex::Main,          0x000BA730,                 "_ZN2MR38isGalaxyQuickCometAppearInCurrentStageEv" },
            { util::ModuleIndex::Main,          0x000BA740,                 "_ZN2MR39isGalaxyPurpleCometAppearInCurrentStageEv" },
            { util::ModuleIndex::Main,          0x000BA750,                 "_ZN2MR40isGalaxyRainbowCometAppearInCurrentStageEv" },
                                                                            
            { util::ModuleIndex::Main,          0x000BB490,                 "_ZN2MR20connectToSceneLayoutEP7NameObj" },
                                                                            
            { util::ModuleIndex::Main,          0x000BE5C8,                 "_ZN7NameObj13startMovementEv" },
            { util::ModuleIndex::Main,          0x000BE5CC,                 "_ZN7NameObj11endMovementEv" },

            { util::ModuleIndex::Main,          0x000BE5D0,                 "_ZN9LiveActor15updateHitSensorEP9HitSensor" },
            { util::ModuleIndex::Main,          0x000BE5D4,                 "_ZN9LiveActor14receiveMsgPushEP9HitSensorS1_" },
            { util::ModuleIndex::Main,          0x000BE5DC,                 "_ZN9LiveActor21receiveMsgEnemyAttackEjP9HitSensorS1_" },
                                                                            
            { util::ModuleIndex::Main,          0x000BE788,                 "_ZN12JMapLinkInfoC1Ev" },
            { util::ModuleIndex::Main,          0x000BE79C,                 "_ZN12JMapLinkInfoC1ERK12JMapInfoIterb" },
            { util::ModuleIndex::Main,          0x000BE7B8,                 "_ZN12JMapLinkInfo13setLinkedInfoERK12JMapInfoIter" },
            { util::ModuleIndex::Main,          0x000BE8A4,                 "_ZN12JMapLinkInfo11setLinkInfoERK12JMapInfoIter" },
            { util::ModuleIndex::Main,          0x000BEA3C,                 "_ZNK12JMapLinkInfo7isValidEv" },
                                                                            
            { util::ModuleIndex::Main,          0x000BEA64,                 "_ZN8JMapInfoC1Ev" },
            { util::ModuleIndex::Main,          0x000BEA74,                 "_ZN8JMapInfoD1Ev" },
            { util::ModuleIndex::Main,          0x000BEA78,                 "_ZN8JMapInfo6attachEPKv" },
            { util::ModuleIndex::Main,          0x000BEA8C,                 "_ZN8JMapInfo7setNameEPKc" },
            { util::ModuleIndex::Main,          0x000BEA94,                 "_ZNK8JMapInfo7getNameEv" },
            { util::ModuleIndex::Main,          0x000BEAA0,                 "_ZNK8JMapInfo14searchItemInfoEPKc" },
            { util::ModuleIndex::Main,          0x000BEB30,                 "_ZNK8JMapInfo12getValueTypeEPKc" },
            { util::ModuleIndex::Main,          0x000BEBBC,                 "_ZNK8JMapInfo12getValueFastEiiPPKc" },
            { util::ModuleIndex::Main,          0x000BEC0C,                 "_ZNK8JMapInfo12getValueFastEiiPm" },
            { util::ModuleIndex::Main,          0x000BEC94,                 "_ZNK8JMapInfo12getValueFastEiiPl" },
                                                                            
            { util::ModuleIndex::Main,          0x000BEE70,                 "_ZN2MR11getHashCodeEPKc" },

            { util::ModuleIndex::Main,          0x000D1820,                 "_ZN2MR13getObjectNameEPPKcRK12JMapInfoIter" },
            { util::ModuleIndex::Main,          0x000D18F0,                 "_ZN2MR12isObjectNameERK12JMapInfoIterPKc" },

            { util::ModuleIndex::Main,          0x000D9B50,                 "_ZN2MR12isSensorTypeEPK9HitSensorm" },
                                                                            
            { util::ModuleIndex::Main,          0x000D9E20,                 "_ZN2MR17validateHitSensorEP9HitSensor" },
            { util::ModuleIndex::Main,          0x000D9E30,                 "_ZN2MR19invalidateHitSensorEP9HitSensor" },      
                                                                            
            { util::ModuleIndex::Main,          0x0012D364,                 "_ZN23ActorStateBaseInterface4initEv" },
            { util::ModuleIndex::Main,          0x0012D648,                 "_ZN23ActorStateBaseInterface7controlEv" },
                                                                            
            { util::ModuleIndex::Main,          0x001386E0,                 "_ZN13EventFunction17isStartCometEventEPKc" },
                                                                            
            { util::ModuleIndex::Main,          0x0015C6C8,                 "_ZN9LiveActorC1EPKc" },
            { util::ModuleIndex::Main,          0x0015C76C,                 "_ZN9LiveActor4initERK12JMapInfoIter" },
            { util::ModuleIndex::Main,          0x0015C770,                 "_ZN9LiveActor6appearEv" },   
            { util::ModuleIndex::Main,          0x0015C77C,                 "_ZN9LiveActor17makeActorAppearedEv" },    
            { util::ModuleIndex::Main,          0x0015C81C,                 "_ZN9LiveActor4killEv" },
            { util::ModuleIndex::Main,          0x0015C870,                 "_ZN9LiveActor13makeActorDeadEv" },
            { util::ModuleIndex::Main,          0x0015C8E8,                 "_ZN9LiveActor8movementEv" },
            { util::ModuleIndex::Main,          0x0015CA48,                 "_ZN9LiveActor8calcAnimEv" },
            { util::ModuleIndex::Main,          0x0015CABC,                 "_ZN9LiveActor10calcAnmMtxEv" },
            { util::ModuleIndex::Main,          0x0015CB0C,                 "_ZN9LiveActor16calcViewAndEntryEv" },
            { util::ModuleIndex::Main,          0x0015CB24,                 "_ZN9LiveActor14receiveMessageEjP9HitSensorS1_" },   
            { util::ModuleIndex::Main,          0x0015CB78,                 "_ZN9LiveActor17calcAndSetBaseMtxEv" },    
            { util::ModuleIndex::Main,          0x0015CC14,                 "_ZNK9LiveActor12getTakingMtxEv" },
            { util::ModuleIndex::Main,          0x0015CC20,                 "_ZN9LiveActor8setNerveEPK5Nerve" },
            { util::ModuleIndex::Main,          0x0015CC28,                 "_ZNK9LiveActor7isNerveEPK5Nerve" },
            { util::ModuleIndex::Main,          0x0015CC54,                 "_ZNK9LiveActor12getNerveStepEv" },
            { util::ModuleIndex::Main,          0x0015CC60,                 "_ZNK9LiveActor9getSensorEPKc" },   
            { util::ModuleIndex::Main,          0x0015CC70,                 "_ZNK9LiveActor10getBaseMtxEv" },    
            { util::ModuleIndex::Main,          0x0015CCA0,                 "_ZN9LiveActor12startClippedEv" },
            { util::ModuleIndex::Main,          0x0015CD00,                 "_ZN9LiveActor10endClippedEv" },
            { util::ModuleIndex::Main,          0x0015CD64,                 "_ZN9LiveActor23initModelManagerWithAnmEPKcPKcPKcb" },
            { util::ModuleIndex::Main,          0x0015CE0C,                 "_ZN9LiveActor9initNerveEPK5Nervel" },
            { util::ModuleIndex::Main,          0x0015CE58,                 "_ZN9LiveActor13initHitSensorEl" },
            { util::ModuleIndex::Main,          0x0015CE98,                 "_ZN9LiveActor10initBinderEffm" },
            { util::ModuleIndex::Main,          0x0015CF38,                 "_ZN9LiveActor13initRailRiderERK12JMapInfoIter" },   
            { util::ModuleIndex::Main,          0x0015CF78,                 "_ZN9LiveActor16initEffectKeeperElPKcb" },    
            { util::ModuleIndex::Main,          0x0015D020,                 "_ZN9LiveActor9initSoundElPKcNPK9JGeometry5TVec3IfEENRK9JGeometry5TVec3IfEE" },
            { util::ModuleIndex::Main,          0x0015D088,                 "_ZN9LiveActor24initShadowControllerListEm" },
            { util::ModuleIndex::Main,          0x0015D0CC,                 "_ZN9LiveActor23initActorCollisionPartsEPKcP9HitSensorP14ResourceHolderPA4_fbb" },
            { util::ModuleIndex::Main,          0x0015D1C0,                 "_ZN9LiveActor15initStageSwitchERK12JMapInfoIter" },
            { util::ModuleIndex::Main,          0x0015D1E4,                 "_ZN9LiveActor26initActorStarPointerTargetEfNPK9JGeometry5TVec3IfEEPA4_fN9JGeometry5TVec3IfEE" },   
            { util::ModuleIndex::Main,          0x0015D25C,                 "_ZN9LiveActor18initActorLightCtrlEv" },    
            { util::ModuleIndex::Main,          0x0015D290,                 "_ZN9LiveActor12attackSensorEP9HitSensorS1_" },
            { util::ModuleIndex::Main,          0x0015D294,                 "_ZN9LiveActorD1Ev" },
            { util::ModuleIndex::Main,          0x0015D2B8,                 "_ZN9LiveActor7controlEv" },
            { util::ModuleIndex::Main,          0x0015D2BC,                 "_ZN9LiveActor22receiveMsgPlayerAttackEmP9HitSensorP9HitSensor" },
            { util::ModuleIndex::Main,          0x0015D2C4,                 "_ZN9LiveActor15receiveOtherMsgEmP9HitSensorP9HitSensor" },
                                                                            
            { util::ModuleIndex::Main,          0x0015D2CC,                 "_ZN13LiveActorFlagC1Ev" },
                                                                            
            { util::ModuleIndex::Main,          0x0015E6A0,                 "_ZN11SensorGroupC1EiPKc" },
            { util::ModuleIndex::Main,          0x0015E704,                 "_ZN11SensorGroup3addEP9HitSensor" },
            { util::ModuleIndex::Main,          0x0015E730,                 "_ZN11SensorGroup6removeEP9HitSensor" },
                                                                            
            { util::ModuleIndex::Main,          0x0015E788,                 "_ZN16SensorHitCheckerC1EPKc" },
            { util::ModuleIndex::Main,          0x0015E884,                 "_ZN16SensorHitChecker4initERK12JMapInfoIter" },
            { util::ModuleIndex::Main,          0x0015E898,                 "_ZN16SensorHitChecker9initGroupEP9HitSensor" },   
            { util::ModuleIndex::Main,          0x0015E9C0,                 "_ZN16SensorHitChecker8movementEv" },    
            { util::ModuleIndex::Main,          0x0015EB90,                 "_ZNK16SensorHitChecker13doObjColGroupEP11SensorGroupP11SensorGroup" },
            { util::ModuleIndex::Main,          0x0015ED00,                 "_ZNK16SensorHitChecker19doObjColInSameGroupEP11SensorGroup" },
            { util::ModuleIndex::Main,          0x0015EE40,                 "_ZN2MR18initHitSensorGroupEP9HitSensor" },
            { util::ModuleIndex::Main,          0x0015EE6C,                 "_ZN16SensorHitCheckerD1Ev" },
                                                                            
            { util::ModuleIndex::Main,          0x0015EE90,                 "_ZN15HitSensorKeeperC1Ei" },
            { util::ModuleIndex::Main,          0x0015EEF4,                 "_ZN15HitSensorKeeper3addEPKcmtfP9LiveActorNRK9JGeometry5TVec3IfEE" },
            { util::ModuleIndex::Main,          0x0015EFB8,                 "_ZN15HitSensorKeeper11addCallbackEPKcmtfP9LiveActor" },   
            { util::ModuleIndex::Main,          0x0015F090,                 "_ZNK15HitSensorKeeper9getSensorEPKc" },    
            { util::ModuleIndex::Main,          0x0015F150,                 "_ZN15HitSensorKeeper6updateEv" },
            { util::ModuleIndex::Main,          0x0015F1A0,                 "_ZN15HitSensorKeeper8doObjColEv" },
            { util::ModuleIndex::Main,          0x0015F1F0,                 "_ZN15HitSensorKeeper5clearEv" },
            { util::ModuleIndex::Main,          0x0015F230,                 "_ZN15HitSensorKeeper8validateEv" },
            { util::ModuleIndex::Main,          0x0015F280,                 "_ZN15HitSensorKeeper10invalidateEv" },
            { util::ModuleIndex::Main,          0x0015F2D0,                 "_ZN15HitSensorKeeper16validateBySystemEv" },
            { util::ModuleIndex::Main,          0x0015F320,                 "_ZN15HitSensorKeeper18invalidateBySystemEv" },   
            { util::ModuleIndex::Main,          0x0015F36C,                 "_ZNK15HitSensorKeeper16getNthSensorInfoEi" },    
            { util::ModuleIndex::Main,          0x0015F380,                 "_ZNK15HitSensorKeeper13getSensorInfoEPKc" },
                                                                            
            { util::ModuleIndex::Main,          0x0015F440,                 "_ZN9HitSensorC1EmtfP9LiveActor" },
            { util::ModuleIndex::Main,          0x0015F4C8,                 "_ZN9HitSensor14receiveMessageEmP9HitSensor" },
            { util::ModuleIndex::Main,          0x0015F4DC,                 "_ZN9HitSensor7setTypeEm" },  
            { util::ModuleIndex::Main,          0x0015F554,                 "_ZNK9HitSensor6isTypeEm" },       
            { util::ModuleIndex::Main,          0x0015F564,                 "_ZN9HitSensor8validateEv" },
            { util::ModuleIndex::Main,          0x0015F594,                 "_ZN9HitSensor10invalidateEv" },
            { util::ModuleIndex::Main,          0x0015F5DC,                 "_ZN9HitSensor16validateBySystemEv" },
            { util::ModuleIndex::Main,          0x0015F628,                 "_ZN9HitSensor18invalidateBySystemEv" },
            { util::ModuleIndex::Main,          0x0015F670,                 "_ZN9HitSensor12addHitSensorEP9HitSensor" },
                                                                            
            { util::ModuleIndex::Main,          0x0015F698,                 "_ZN13HitSensorInfo12setFollowPosENPK9JGeometry5TVec3IfEE" },    
            { util::ModuleIndex::Main,          0x0015F6A0,                 "_ZN13HitSensorInfo12setFollowMtxEPA4_f" },
            { util::ModuleIndex::Main,          0x0015F6A8,                 "_ZN13HitSensorInfoC1EPKcP9HitSensorNPK9JGeometry5TVec3IfEEPA4_fNRK9JGeometry5TVec3IfEEb" },
            { util::ModuleIndex::Main,          0x0015F714,                 "_ZN13HitSensorInfo6updateEv" },
            { util::ModuleIndex::Main,          0x0015F870,                 "_ZN13HitSensorInfo8doObjColEv" },
                                                                            
            { util::ModuleIndex::Main,          0x00168EEC,                 "_ZN5SpineC1EPvPK5Nervel" },
            { util::ModuleIndex::Main,          0x00168F44,                 "_ZN5Spine6updateEv" },
            { util::ModuleIndex::Main,          0x00168FE0,                 "_ZN5Spine8setNerveEPK5Nerve" },
            { util::ModuleIndex::Main,          0x0016902C,                 "_ZNK5Spine15getCurrentNerveEv" },
                                                                            
            { util::ModuleIndex::Main,          0x00169040,                 "_ZN16ActorStateKeeperC1Ei" },
            { util::ModuleIndex::Main,          0x001690D0,                 "_ZN16ActorStateKeeper8addStateEP23ActorStateBaseInterfacePK5NervePKc" },
            { util::ModuleIndex::Main,          0x001690F8,                 "_ZN16ActorStateKeeper18updateCurrentStateEv" },
            { util::ModuleIndex::Main,          0x00169120,                 "_ZN16ActorStateKeeper10startStateEPK5Nerve" },
            { util::ModuleIndex::Main,          0x00169164,                 "_ZNK16ActorStateKeeper6isDeadEv" },
            { util::ModuleIndex::Main,          0x00169188,                 "_ZN16ActorStateKeeper8endStateEPK5Nerve" },
                                                                            
            { util::ModuleIndex::Main,          0x00170508,                 "_ZN23ActorStateBaseInterface6updateEv" },
            { util::ModuleIndex::Main,          0x0017055C,                 "_ZN23ActorStateBaseInterface6appearEv" },
            { util::ModuleIndex::Main,          0x00170564,                 "_ZN23ActorStateBaseInterface4killEv" },
                                                                            
            { util::ModuleIndex::Main,          0x00175E64,                 "_ZN7NameObjC1EPKc" },
            { util::ModuleIndex::Main,          0x00175EBC,                 "_ZN7NameObj7setNameEPKc" },
            { util::ModuleIndex::Main,          0x00175ED8,                 "_ZN7NameObjD1Ev" },
            { util::ModuleIndex::Main,          0x00175EFC,                 "_ZN7NameObj4initERK12JMapInfoIter" },
            { util::ModuleIndex::Main,          0x00175F00,                 "_ZN7NameObj18initAfterPlacementEv" },
            { util::ModuleIndex::Main,          0x00175F04,                 "_ZN7NameObj8movementEv" },
            { util::ModuleIndex::Main,          0x00175F08,                 "_ZNK7NameObj4drawEv" },
            { util::ModuleIndex::Main,          0x00175F0C,                 "_ZN7NameObj8calcAnimEv" },
            { util::ModuleIndex::Main,          0x00175F10,                 "_ZN7NameObj16calcViewAndEntryEv" },
            { util::ModuleIndex::Main,          0x00175F14,                 "_ZN7NameObj15initWithoutIterEv" },          
            { util::ModuleIndex::Main,          0x00175F48,                 "_ZN7NameObj13setLinkedInfoERK12JMapInfoIter" },
            { util::ModuleIndex::Main,          0x00175F50,                 "_ZN7NameObj15executeMovementEv" },
            { util::ModuleIndex::Main,          0x00175F68,                 "_ZN7NameObj13syncWithFlagsEv" },
                                                                            
            { util::ModuleIndex::Main,          0x00175FA0,                 "_ZN15NameObjFunction17requestMovementOnEP7NameObj" },
            { util::ModuleIndex::Main,          0x00175FD0,                 "_ZN15NameObjFunction18requestMovementOffEP7NameObj" },

            { util::ModuleIndex::Main,          0x00177ED0,                 "_ZN14NameObjFactory10getCreatorEPKc" },
                                                                            
            { util::ModuleIndex::Main,          0x0017BF70,                 "_ZN14NameObjFactory13createNameObjI16BenefitItemOneUpEEP7NameObjPKc" },
                                                                            
            { util::ModuleIndex::Main,          0x0018034C,                 "_ZNK15MorphItemObjNeo6isDemoEv" },
            { util::ModuleIndex::Main,          0x0018036C,                 "_ZN15MorphItemObjNeo17emitAppearEffectsEv" },
            { util::ModuleIndex::Main,          0x00180370,                 "_ZN15MorphItemObjNeo20appearTransformationEv" },
            { util::ModuleIndex::Main,          0x00180374,                 "_ZN15MorphItemObjNeo18killTransformationEv" },

            { util::ModuleIndex::Main,          0x00180D48,                 "_ZN14SceneObjHolderC1Ev" },
            { util::ModuleIndex::Main,          0x00180D54,                 "_ZN14SceneObjHolder10newEachObjEi" },
            { util::ModuleIndex::Main,          0x0018215C,                 "_ZNK14SceneObjHolder6getObjEi" }, 
            { util::ModuleIndex::Main,          0x00182170,                 "_ZN14SceneObjHolder6createEi" },
                                                                            
            { util::ModuleIndex::Main,          0x00183568,                 "_ZN9GameSceneC1Ev" },
            { util::ModuleIndex::Main,          0x00183690,                 "_ZN9GameSceneD1Ev" },
            { util::ModuleIndex::Main,          0x001836C0,                 "_ZN9GameScene4initEv" },
            { util::ModuleIndex::Main,          0x001836C0,                 "_ZN14GameScenePatch4initEv" }, // Custom to patch virtual void GameScene::init();    
                                                                            
            { util::ModuleIndex::Main,          0x00184A54,                 "_ZN5SceneC1EPKc" },
            { util::ModuleIndex::Main,          0x00184ADC,                 "_ZN5SceneD1Ev" },
            { util::ModuleIndex::Main,          0x00184B00,                 "_ZN5Scene4initEv" },
            { util::ModuleIndex::Main,          0x00184B04,                 "_ZN5Scene5startEv" },
            { util::ModuleIndex::Main,          0x00184B08,                 "_ZN5Scene6updateEv" },
            { util::ModuleIndex::Main,          0x00184B0C,                 "_ZNK5Scene4drawEv" },
            { util::ModuleIndex::Main,          0x00184B10,                 "_ZN5Scene8calcAnimEv" },
            { util::ModuleIndex::Main,          0x00184B14,                 "_ZN5Scene23initNameObjListExecutorEv" },
            { util::ModuleIndex::Main,          0x00184B5C,                 "_ZN5Scene18initSceneObjHolderEv" },
                                                                            
            { util::ModuleIndex::Main,          0x001E8834,                 "_ZN10MarioActorC1EPKc" },
            { util::ModuleIndex::Main,          0x001E8834,                 "_ZN15MarioActorPatch21MarioActorConstructorEv" }, // Custom to patch MarioActor::MarioActor(const char*);  
            { util::ModuleIndex::Main,          0x001ED330,                 "_ZN10MarioActor20takenDamageBehaviourEv" },
            { util::ModuleIndex::Main,          0x001ED330,                 "_ZN15MarioActorPatch20takenDamageBehaviourEv" }, // Custom to patch void MarioActor::takenDamageBehaviour();
            { util::ModuleIndex::Main,          0x001ED42C,                 "_ZN10MarioActor7incLifeEm" },
            { util::ModuleIndex::Main,          0x001ED42C,                 "_ZN15MarioActorPatch7incLifeEv" }, // Custom to patch void MarioActor::incLife(u32);
            { util::ModuleIndex::Main,          0x001FA7F0,                 "_ZN10MarioActor19LifeRelatedFunctionEv" },
            { util::ModuleIndex::Main,          0x001FA7F0,                 "_ZN15MarioActorPatch19LifeRelatedFunctionEv" }, // Custom to patch void MarioActor::LiveRelatedFunction();

            { util::ModuleIndex::Main,          0x0025A510,                 "_ZN17StarPointerTargetC1EfNPK9JGeometry5TVec3IfEEPA4_fN9JGeometry5TVec3IfEE" },

            { util::ModuleIndex::Main,          0x0026A7D0,                 "_ZN28CounterLayoutControllerPatch4initEv" }, // Custom to patch void CounterLayoutControllerPatch::init(JMapInfoIter&);
                   
            { util::ModuleIndex::Main,          0x0035CB80,                 "_ZN15MorphItemObjNeoC1EPKc" },
            { util::ModuleIndex::Main,          0x0035CB80,                 "_ZN15MorphItemObjNeoC2EPKc" },
            { util::ModuleIndex::Main,          0x0035CBDC,                 "_ZN15MorphItemObjNeo4initERK12JMapInfoIter" },
            { util::ModuleIndex::Main,          0x0035D150,                 "_ZN15MorphItemObjNeo18initAfterPlacementEv" },
            { util::ModuleIndex::Main,          0x0035D16C,                 "_ZN15MorphItemObjNeo17makeActorAppearedEv" },
            { util::ModuleIndex::Main,          0x0035D1A8,                 "_ZN15MorphItemObjNeo13makeActorDeadEv" },
            { util::ModuleIndex::Main,          0x0035D1DC,                 "_ZN15MorphItemObjNeo6appearEv" },
            { util::ModuleIndex::Main,          0x0035D2BC,                 "_ZN15MorphItemObjNeo4killEv" },
            { util::ModuleIndex::Main,          0x0035D2EC,                 "_ZN15MorphItemObjNeo7controlEv" },
            { util::ModuleIndex::Main,          0x0035D6CC,                 "_ZN15MorphItemObjNeo17calcAndSetBaseMtxEv" },
            { util::ModuleIndex::Main,          0x0035D924,                 "_ZN15MorphItemObjNeo22receiveMsgPlayerAttackEjP9HitSensorS1_" },
            { util::ModuleIndex::Main,          0x0035DA44,                 "_ZN15MorphItemObjNeo15receiveOtherMsgEjP9HitSensorS1_" },

            { util::ModuleIndex::Main,          0x00373200,                 "_ZN2MR19tryCreateDummyModelEP9LiveActorRK12JMapInfoIterli" },

            { util::ModuleIndex::Main,          0x0039F050,                 "_ZN19MorphItemCollectionC1EPKc" },
            { util::ModuleIndex::Main,          0x0039F050,                 "_ZN19MorphItemCollectionC2EPKc" },
            { util::ModuleIndex::Main,          0x0039F08C,                 "_ZN19MorphItemCollection4initERK12JMapInfoIter" },
            { util::ModuleIndex::Main,          0x0039F08C,                 "_ZN24MorphItemCollectionPatch4initEv" }, // custom to patch MorphItemCollectionPatch::init
            { util::ModuleIndex::Main,          0x0039F114,                 "_ZN19MorphItemCollection16initPowerUpModelERK12JMapInfoIter" },
            { util::ModuleIndex::Main,          0x0039F250,                 "_ZN19MorphItemCollection17calcAndSetBaseMtxEv" },
            { util::ModuleIndex::Main,          0x0039F2B4,                 "_ZN19MorphItemCollectionD1Ev" },
            { util::ModuleIndex::Main,          0x0039F2D8,                 "_ZN19MorphItemCollection7exeWaitEv" },
                                                                            
            { util::ModuleIndex::Main,          0x009088D0,                 "_ZN19NameObjFactoryPatch19NameObjListAccessorEv" } // Custom symbol to access the NameObjList
        >
    >;
}