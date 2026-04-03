#pragma once

// TODO: Divide into multiple headers

typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#ifndef _MSC_VER
    #define __cdecl

    #if __cplusplus < 201103L
        #define nullptr 0
    #endif
#endif

struct actorInst_s;
struct actorMindScriptTableEntry_s;
struct assetId_s;
struct objFunc_s;
struct sceneLookAt_s;

struct gameIdComplete_s { /* Size=0x4 */
  /* 0x0000 */ public: uint16_t id;
  /* 0x0002 */ public: char key;
  /* 0x0003 */ public: unsigned char save;
};

enum actorMindGoalId_e {
  actorMindGoalId_Null = 0x0000,
  actorMindGoalId_AvatarCamAttachedToCentreOfActors = 0x0001,
  actorMindGoalId_AvatarCamAttachedToFocalActor = 0x0002,
  actorMindGoalId_AvatarCamAttachedToHead = 0x0003,
  actorMindGoalId_AvatarCamBoundedCam = 0x0004,
  actorMindGoalId_AvatarCamFight = 0x0005,
  actorMindGoalId_AvatarCamSpinningAroundFocalActor = 0x0006,
  actorMindGoalId_AvatarCamTotemCam = 0x0007,
  actorMindGoalId_BeginScript = 0x0008,
  actorMindGoalId_CalloutExec = 0x0009,
  actorMindGoalId_CameraShot = 0x000a,
  actorMindGoalId_Celebrate = 0x000b,
  actorMindGoalId_CelebrateIfFlag = 0x000c,
  actorMindGoalId_ClearGoals = 0x000d,
  actorMindGoalId_ClearGoalsIfExitStatus = 0x000e,
  actorMindGoalId_ClearGoalsIfFarFromTarget = 0x000f,
  actorMindGoalId_ClimbAround = 0x0010,
  actorMindGoalId_Evade = 0x0011,
  actorMindGoalId_EvadeFly = 0x0012,
  actorMindGoalId_FlyAround = 0x0013,
  actorMindGoalId_FlyToDestination = 0x0014,
  actorMindGoalId_FlyToDestinationWithLand = 0x0015,
  actorMindGoalId_FlyToPoint = 0x0016,
  actorMindGoalId_FlyToPointWithDirection = 0x0017,
  actorMindGoalId_FlyToTarget = 0x0018,
  actorMindGoalId_FollowFocalActor = 0x0019,
  actorMindGoalId_GenerateEvasionDestination = 0x001a,
  actorMindGoalId_GenerateLandTarget = 0x001b,
  actorMindGoalId_GenerateRandomDestination = 0x001c,
  actorMindGoalId_GenerateRandomDestinationInFront = 0x001d,
  actorMindGoalId_GetFlying = 0x001e,
  actorMindGoalId_GetStanding = 0x001f,
  actorMindGoalId_GetStandingQuick = 0x0020,
  actorMindGoalId_GetWalking = 0x0021,
  actorMindGoalId_GoToStateUsingButtons = 0x0022,
  actorMindGoalId_Interactive = 0x0023,
  actorMindGoalId_JumpToDestinationPosition = 0x0024,
  actorMindGoalId_JumpToPath = 0x0025,
  actorMindGoalId_JumpToPoint = 0x0026,
  actorMindGoalId_LandAnywhere = 0x0027,
  actorMindGoalId_LandAtPoint = 0x0028,
  actorMindGoalId_LandAtTarget = 0x0029,
  actorMindGoalId_LandImmediately = 0x002a,
  actorMindGoalId_MeanderToDestination = 0x002b,
  actorMindGoalId_MeanderWait = 0x002c,
  actorMindGoalId_ObserveTarget = 0x002d,
  actorMindGoalId_PopDestinationPosition = 0x002e,
  actorMindGoalId_ReformAtPosition = 0x002f,
  actorMindGoalId_ReturnToSetupPosition = 0x0030,
  actorMindGoalId_ScaleActor = 0x0031,
  actorMindGoalId_SetActorPadSticks = 0x0032,
  actorMindGoalId_SetAttackState = 0x0033,
  actorMindGoalId_SetBodyFlag = 0x0034,
  actorMindGoalId_SetDestinationToPoint = 0x0035,
  actorMindGoalId_SetGoalFlag = 0x0036,
  actorMindGoalId_SetHitsEnabled = 0x0037,
  actorMindGoalId_SetNoAttackTimer = 0x0038,
  actorMindGoalId_SetPath = 0x0039,
  actorMindGoalId_SetState = 0x003a,
  actorMindGoalId_SetStateIfAnimIsAtEnd = 0x003b,
  actorMindGoalId_SetStateIfFlag = 0x003c,
  actorMindGoalId_SetStateIfFlagRnd = 0x003d,
  actorMindGoalId_ShuffleToDestination = 0x003e,
  actorMindGoalId_SimulateButtonPress = 0x003f,
  actorMindGoalId_SimulateButtonPressWithAbort = 0x0040,
  actorMindGoalId_StandIdle = 0x0041,
  actorMindGoalId_StepInDirection = 0x0042,
  actorMindGoalId_TakeOff = 0x0043,
  actorMindGoalId_TraverseClimbPole = 0x0044,
  actorMindGoalId_TurnToFaceAvatar = 0x0045,
  actorMindGoalId_TurnToFaceDestination = 0x0046,
  actorMindGoalId_TurnToFacePoint = 0x0047,
  actorMindGoalId_TurnToFaceTarget = 0x0048,
  actorMindGoalId_Wait = 0x0049,
  actorMindGoalId_WaitForFlag = 0x004a,
  actorMindGoalId_WaitForPath = 0x004b,
  actorMindGoalId_WaitForPinataBodyFlag = 0x004c,
  actorMindGoalId_WaitUntilCanAttack = 0x004d,
  actorMindGoalId_WaitUntilInputEnabled = 0x004e,
  actorMindGoalId_WalkToDestination = 0x004f,
  actorMindGoalId_WalkToDestinationIgnoreObstructions = 0x0050,
  actorMindGoalId_WalkToDestinationSurfaceAware = 0x0051,
  actorMindGoalId_WalkToPoint = 0x0052,
  actorMindGoalId_WalkToTarget = 0x0053,
  actorMindGoalId_WalkToTargetAvatar = 0x0054,
  actorMindGoalId_Worried = 0x0055,
  actorMindGoalId_MAX = 0x0056
};

enum objNetSyncOwnershipStatus_e {
  objNetSyncOwnershipStatus_Error = 0x0000,
  objNetSyncOwnershipStatus_Failed = 0x0001,
  objNetSyncOwnershipStatus_Pending = 0x0002,
  objNetSyncOwnershipStatus_Timeout = 0x0003,
  objNetSyncOwnershipStatus_Passed = 0x0004
};

struct objNetSyncOwnership_s { /* Size=0x18 */
  /* 0x0000 */ public: objNetSyncOwnershipStatus_e ownershipStatus;
  /* 0x0004 */ public: float ownershipTimeout;
  /* 0x0008 */ public: int32_t sendRequest;
  /* 0x000c */ public: gameIdComplete_s newGameId;
  /* 0x0010 */ public: int32_t hasNewGameId;
  /* 0x0014 */ public: int32_t blockOwnershipRequest;
};

struct dsLinkedListNode_s { /* Size=0x8 */
  /* 0x0000 */ public: dsLinkedListNode_s* _prevPtr;
  /* 0x0004 */ public: dsLinkedListNode_s* _nextPtr;
};

enum actorMindGoal_Status_e {
  actorMindGoal_Status_Pending = 0,
  actorMindGoal_Status_Processing = 1,
  actorMindGoal_Status_Achieved = 2,
  actorMindGoal_Status_AchievedAbort = 3,
  actorMindGoal_Status_ClearGoalList = 4,
  actorMindGoal_Status_Failed = 5,
  actorMindGoal_Status_FailedRestart = 6,
  actorMindGoal_Status_ProcessingRestart = 7,
  actorMindGoal_Status_MAX = 8
};

enum objTag_e {
  objTag_Null = 0x0000,
  objTag_Actor = 0x0001,
  objTag_Actor_Cameron = 0x0002,
  objTag_Actor_zzz = 0x0003,
  objTag_Avatar = 0x0004,
  objTag_Avatar_Fx_AnimEmitter = 0x0005,
  objTag_Avatar_Fx_BurnUp = 0x0006,
  objTag_Avatar_Fx_Explode = 0x0007,
  objTag_Avatar_Fx_MotionBlur = 0x0008,
  objTag_Background = 0x0009,
  objTag_Body = 0x000a,
  objTag_Body_Camera = 0x000b,
  objTag_Body_Human = 0x000c,
  objTag_Body_Player = 0x000d,
  objTag_Camera = 0x000e,
  objTag_Collectable = 0x000f,
  objTag_Destructible = 0x0010,
  objTag_Frontend = 0x0011,
  objTag_FxCustom_DustUp = 0x0012,
  objTag_FxCustom_Electric = 0x0013,
  objTag_FxCustom_FadeOut = 0x0014,
  objTag_FxCustom_FadeToColour = 0x0015,
  objTag_FxCustom_FadeToGrey = 0x0016,
  objTag_FxCustom_Fire = 0x0017,
  objTag_FxCustom_MutateHalo = 0x0018,
  objTag_FxCustom_Outline = 0x0019,
  objTag_FxCustom_SolidFadeIn = 0x001a,
  objTag_Mind = 0x001b,
  objTag_Mind_Cameraman = 0x001c,
  objTag_Mind_Cinema = 0x001d,
  objTag_Mind_Human = 0x001e,
  objTag_Mind_Player = 0x001f,
  objTag_Misc_AnimDelete = 0x0020,
  objTag_Misc_AnimatedLight = 0x0021,
  objTag_Misc_Prop = 0x0022,
  objTag_Move = 0x0023,
  objTag_PadHardwareDXDevice = 0x0024,
  objTag_PadHardwareDXDevice_Generic = 0x0025,
  objTag_PadHardwareDXDevice_Keyboard = 0x0026,
  objTag_PadHardwareDXDevice_Mouse = 0x0027,
  objTag_Pinata_AAAAAA = 0x0028,
  objTag_Pinata_Actor_AAAAAA = 0x0029,
  objTag_Pinata_Actor_Animal = 0x002a,
  objTag_Pinata_Actor_Camera = 0x002b,
  objTag_Pinata_Actor_Helper = 0x002c,
  objTag_Pinata_Actor_ZZZZZZ = 0x002d,
  objTag_Pinata_Avatar_AAAAAA = 0x002e,
  objTag_Pinata_Avatar_Accessory = 0x002f,
  objTag_Pinata_Avatar_BifPlant = 0x0030,
  objTag_Pinata_Avatar_BifTree = 0x0031,
  objTag_Pinata_Avatar_Bud = 0x0032,
  objTag_Pinata_Avatar_CameraTarget = 0x0033,
  objTag_Pinata_Avatar_Contract = 0x0034,
  objTag_Pinata_Avatar_Crate = 0x0035,
  objTag_Pinata_Avatar_Cursor = 0x0036,
  objTag_Pinata_Avatar_Egg = 0x0037,
  objTag_Pinata_Avatar_Fence = 0x0038,
  objTag_Pinata_Avatar_Fertiliser = 0x0039,
  objTag_Pinata_Avatar_FertiliserPile = 0x003a,
  objTag_Pinata_Avatar_FlowerHead = 0x003b,
  objTag_Pinata_Avatar_Fruit = 0x003c,
  objTag_Pinata_Avatar_Home = 0x003d,
  objTag_Pinata_Avatar_HouseBlock = 0x003e,
  objTag_Pinata_Avatar_Journal = 0x003f,
  objTag_Pinata_Avatar_LifeSweet = 0x0040,
  objTag_Pinata_Avatar_Money = 0x0041,
  objTag_Pinata_Avatar_Packet = 0x0042,
  objTag_Pinata_Avatar_Paving = 0x0043,
  objTag_Pinata_Avatar_Produce = 0x0044,
  objTag_Pinata_Avatar_Projectile = 0x0045,
  objTag_Pinata_Avatar_Prop = 0x0046,
  objTag_Pinata_Avatar_Seed = 0x0047,
  objTag_Pinata_Avatar_SeedHole = 0x0048,
  objTag_Pinata_Avatar_ShopKeeper = 0x0049,
  objTag_Pinata_Avatar_SlotMachine = 0x004a,
  objTag_Pinata_Avatar_Spade = 0x004b,
  objTag_Pinata_Avatar_SpadePart = 0x004c,
  objTag_Pinata_Avatar_Surface = 0x004d,
  objTag_Pinata_Avatar_Sweet = 0x004e,
  objTag_Pinata_Avatar_Vegetable = 0x004f,
  objTag_Pinata_Avatar_WateringCan = 0x0050,
  objTag_Pinata_Avatar_ZZBag = 0x0051,
  objTag_Pinata_Avatar_ZZSignpost = 0x0052,
  objTag_Pinata_Avatar_ZZStore = 0x0053,
  objTag_Pinata_Avatar_ZZTrap = 0x0054,
  objTag_Pinata_Avatar_ZZTrickStick = 0x0055,
  objTag_Pinata_Avatar_ZZZZZZ = 0x0056,
  objTag_Pinata_Bif_AAAAAA = 0x0057,
  objTag_Pinata_Bif_Part = 0x0058,
  objTag_Pinata_Bif_Part_Group = 0x0059,
  objTag_Pinata_Bif_Part_Group_Branch = 0x005a,
  objTag_Pinata_Bif_Part_Group_Bud = 0x005b,
  objTag_Pinata_Bif_Part_Head = 0x005c,
  objTag_Pinata_Bif_Part_PerchPath = 0x005d,
  objTag_Pinata_Bif_Part_ProdPoint = 0x005e,
  objTag_Pinata_Bif_Part_VegBoost = 0x005f,
  objTag_Pinata_Bif_ZZZZZZ = 0x0060,
  objTag_Pinata_Body_Animal = 0x0061,
  objTag_Pinata_Body_Helper = 0x0062,
  objTag_Pinata_DigitalObjects_Crate = 0x0063,
  objTag_Pinata_Imap_CellFormat = 0x0064,
  objTag_Pinata_Imap_CombineCellFormat = 0x0065,
  objTag_Pinata_Imap_UpdatePolicy = 0x0066,
  objTag_Pinata_Imap_UpdatePolicyScratch = 0x0067,
  objTag_Pinata_Imap_UpdatePolicyScratchAStar = 0x0068,
  objTag_Pinata_Mind_Animal = 0x0069,
  objTag_Pinata_Mind_Animal_IMap_CellFormat = 0x006a,
  objTag_Pinata_Mind_Basic = 0x006b,
  objTag_Pinata_Racer_AAAAAA = 0x006c,
  objTag_Pinata_Racer_Avatar = 0x006d,
  objTag_Pinata_Racer_ZZZZZZ = 0x006e,
  objTag_Pinata_Scene_CellFormat = 0x006f,
  objTag_Pinata_Scene_Cursor = 0x0070,
  objTag_Pinata_Scene_CursorController = 0x0071,
  objTag_Pinata_Scene_DigitalObjects = 0x0072,
  objTag_Pinata_Scene_Weather = 0x0073,
  objTag_Powerup = 0x0074,
  objTag_Props = 0x0075,
  objTag_SceneControl = 0x0076,
  objTag_Spawn = 0x0077,
  objTag_State = 0x0078,
  objTag_Strategy = 0x0079,
  objTag_Strategy_Bot = 0x007a,
  objTag_Strategy_Director = 0x007b,
  objTag_Strategy_Human = 0x007c,
  objTag_Strategy_Player = 0x007d,
  objTag_Weapon = 0x007e,
  objTag_MAX = 0x007f
};

enum objDefId_e {
  objDefId_null = 0x0000,
  objDefId_obj = 0x0001,
  objDefId_avatar = 0x0002,
  objDefId_sceneControlObj = 0x0003,
  objDefId_background = 0x0004,
  objDefId_actor = 0x0005,
  objDefId_actorBody = 0x0006,
  objDefId_actorMind = 0x0007,
  objDefId_actorStrategy = 0x0008,
  objDefId_actorState = 0x0009,
  objDefId_actorMove = 0x000a,
  objDefId_uiObj = 0x000b,
  objDefId_entityAvatarFxExplodeParts = 0x000c,
  objDefId_entityAvatarMiscAnimDelete = 0x000d,
  objDefId_entityMoveXZGravity = 0x000e,
  objDefId_entityMoveXYZnoG = 0x000f,
  objDefId_entitySceneControlBootSec = 0x0010,
  objDefId_entitySceneControlFx = 0x0011,
  objDefId_entitySceneControlUI = 0x0012,
  objDefId_pinataactor = 0x0013,
  objDefId_pinataactorBody = 0x0014,
  objDefId_pinataactorStrategy = 0x0015,
  objDefId_pinataavatar = 0x0016,
  objDefId_pinatabg = 0x0017,
  objDefId_entityAvatarPinataBag = 0x0018,
  objDefId_entityAvatarPinataBud = 0x0019,
  objDefId_entityAvatarPinataCameraTarget = 0x001a,
  objDefId_entityAvatarPinataCursor = 0x001b,
  objDefId_entityAvatarPinataFruit = 0x001c,
  objDefId_entityAvatarPinataEgg = 0x001d,
  objDefId_entityAvatarPinataHome = 0x001e,
  objDefId_entityAvatarPinataProduce = 0x001f,
  objDefId_entityAvatarPinataProp = 0x0020,
  objDefId_entityAvatarPinataSweet = 0x0021,
  objDefId_entityAvatarPinataFence = 0x0022,
  objDefId_entityAvatarPinataFertiliser = 0x0023,
  objDefId_entityAvatarPinataFertiliserPile = 0x0024,
  objDefId_entityAvatarPinataBifTree = 0x0025,
  objDefId_entityAvatarPinataBifPlant = 0x0026,
  objDefId_entityAvatarPinataProjectile = 0x0027,
  objDefId_entityAvatarPinataSeed = 0x0028,
  objDefId_entityAvatarPinataSeedHole = 0x0029,
  objDefId_entityAvatarPinataSpade = 0x002a,
  objDefId_entityAvatarPinataSpadePart = 0x002b,
  objDefId_entityAvatarPinataPacket = 0x002c,
  objDefId_entityAvatarPinataCrate = 0x002d,
  objDefId_entityAvatarPinataMoney = 0x002e,
  objDefId_entityAvatarPinataWateringCan = 0x002f,
  objDefId_entityAvatarPinataPaving = 0x0030,
  objDefId_entityAvatarPinataHouseBlock = 0x0031,
  objDefId_entityAvatarPinataFlowerHead = 0x0032,
  objDefId_entityAvatarPinataSlotMachine = 0x0033,
  objDefId_entityAvatarPinataTrap = 0x0034,
  objDefId_entityAvatarPinataVegetable = 0x0035,
  objDefId_entityAvatarPinataLifeSweet = 0x0036,
  objDefId_entityAvatarPinataShopKeeper = 0x0037,
  objDefId_entityAvatarPinataContract = 0x0038,
  objDefId_entityAvatarPinataSignpost = 0x0039,
  objDefId_entityAvatarPinataJournal = 0x003a,
  objDefId_entityAvatarPinataSurface = 0x003b,
  objDefId_entityAvatarPinataTrickStick = 0x003c,
  objDefId_entityAvatarPinataStore = 0x003d,
  objDefId_entityAvatarPinataRacer = 0x003e,
  objDefId_entityBodyPinata = 0x003f,
  objDefId_entityBodyPinataAnimal = 0x0040,
  objDefId_entityBodyPincam = 0x0041,
  objDefId_entityMovePinata = 0x0042,
  objDefId_entityMindPinataAnimal = 0x0043,
  objDefId_entityMindPinataAnimalIMapCellFormat = 0x0044,
  objDefId_entityMindPinataBasic = 0x0045,
  objDefId_entityMindPincam = 0x0046,
  objDefId_entityMindPadControl = 0x0047,
  objDefId_entityStatePinataAnim2Stand = 0x0048,
  objDefId_entityStatePinataCutscene2Stand = 0x0049,
  objDefId_entityStatePinataClimb = 0x004a,
  objDefId_entityStatePinataConcentrate = 0x004b,
  objDefId_entityStatePinataEat = 0x004c,
  objDefId_entityStatePinataDrink = 0x004d,
  objDefId_entityStatePinataExplode = 0x004e,
  objDefId_entityStatePinataFight = 0x004f,
  objDefId_entityStatePinataFly = 0x0050,
  objDefId_entityStatePinataFlyInto = 0x0051,
  objDefId_entityStatePinataFlyPath = 0x0052,
  objDefId_entityStatePinataGiveDrugs = 0x0053,
  objDefId_entityStatePinataHelp = 0x0054,
  objDefId_entityStatePinataHumanRocket = 0x0055,
  objDefId_entityStatePinataImpact = 0x0056,
  objDefId_entityStatePinataKnockBack = 0x0057,
  objDefId_entityStatePinataPath = 0x0058,
  objDefId_entityStatePinataPerch = 0x0059,
  objDefId_entityStatePinataRest = 0x005a,
  objDefId_entityStatePinataSick = 0x005b,
  objDefId_entityStatePinataSleep = 0x005c,
  objDefId_entityStatePinataStand = 0x005d,
  objDefId_entityStatePinataStrafe = 0x005e,
  objDefId_entityStatePinataTurn = 0x005f,
  objDefId_entityStatePinataWalk = 0x0060,
  objDefId_entityStatePinataWalkPath = 0x0061,
  objDefId_entityStatePinataDizzy = 0x0062,
  objDefId_entityStatePinataTiptoe = 0x0063,
  objDefId_entityStatePinataGroom = 0x0064,
  objDefId_entityStatePinataSpecialOnTarget = 0x0065,
  objDefId_entityStatePinataSquash = 0x0066,
  objDefId_entityStatePinataCocoon = 0x0067,
  objDefId_entityStatePinataHidden = 0x0068,
  objDefId_entityStatePinataTestAnim = 0x0069,
  objDefId_entityStatePinataProduceReady = 0x006a,
  objDefId_entityStatePinataTimeBomb = 0x006b,
  objDefId_entityStatePinataParalysed = 0x006c,
  objDefId_entityStatePinataPerformTrick = 0x006d,
  objDefId_entityStrategyPinataAnimal = 0x006e,
  objDefId_entityStrategyPincam = 0x006f,
  objDefId_cursor = 0x0070,
  objDefId_entitySceneControlPinataAmbientTune = 0x0071,
  objDefId_entitySceneControlPinataAttack = 0x0072,
  objDefId_entitySceneControlPinataBeggarTrader = 0x0073,
  objDefId_entitySceneControlPinataCameraSystem = 0x0074,
  objDefId_entitySceneControlPinataDastardos = 0x0075,
  objDefId_entitySceneControlPinataDedos = 0x0076,
  objDefId_entitySceneControlPinataDoctor = 0x0077,
  objDefId_entitySceneControlPinataBuilder = 0x0078,
  objDefId_entitySceneControlPinataGarden = 0x0079,
  objDefId_entitySceneControlPinataSubGarden = 0x007a,
  objDefId_entitySceneControlPinataGenerator2 = 0x007b,
  objDefId_entitySceneControlPinataHeadCamera = 0x007c,
  objDefId_entitySceneControlPinataHelpers = 0x007d,
  objDefId_entitySceneControlPinataHouseInteriorBedroom = 0x007e,
  objDefId_entitySceneControlPinataHouseInteriorMateRoom = 0x007f,
  objDefId_entitySceneControlPinataHunt = 0x0080,
  objDefId_entitySceneControlPinataHunter = 0x0081,
  objDefId_entitySceneControlPinataLive = 0x0082,
  objDefId_entitySceneControlPinataMeet = 0x0083,
  objDefId_entitySceneControlPinataFight2 = 0x0084,
  objDefId_entitySceneControlPinataFactory = 0x0085,
  objDefId_entitySceneControlPinataFightAudience = 0x0086,
  objDefId_entitySceneControlPinataWind = 0x0087,
  objDefId_entitySceneControlPinataMate = 0x0088,
  objDefId_entitySceneControlPinataRuffians = 0x0089,
  objDefId_entitySceneControlPinataSeedos = 0x008a,
  objDefId_entitySceneControlPinataStork = 0x008b,
  objDefId_entitySceneControlPinataScript = 0x008c,
  objDefId_entitySceneControlPinataTinker = 0x008d,
  objDefId_entitySceneControlPinataWeatherController = 0x008e,
  objDefId_entitySceneControlPinataPlay = 0x008f,
  objDefId_entitySceneControlPinataCursorControl = 0x0090,
  objDefId_entitySceneControlPinataDigitalObjects = 0x0091,
  objDefId_entitySceneControlPinataStatusBar = 0x0092,
  objDefId_entitySceneControlPinataMateMiniGame = 0x0093,
  objDefId_entitySceneControlPinataHouseInteriorGym = 0x0094,
  objDefId_entitySceneControlPinataSlotMachine = 0x0095,
  objDefId_entitySceneControlPinataChallenges = 0x0096,
  objDefId_entitySceneControlPinataAchievements = 0x0097,
  objDefId_entitySceneControlPinataCompetitionLobby2 = 0x0098,
  objDefId_entitySceneControlPinataCompetitionManager = 0x0099,
  objDefId_entitySceneControlPinataCompetitionRace2 = 0x009a,
  objDefId_entitySceneControlPinataCompetitionShow = 0x009b,
  objDefId_entitySceneControlPinataCredits = 0x009c,
  objDefId_entitySceneControlPinataPestStartFights = 0x009d,
  objDefId_entitySceneControlPinataJournal = 0x009e,
  objDefId_entitySceneControlPinataFrontend = 0x009f,
  objDefId_entitySceneControlPinataLeaderboardsWrite = 0x00a0,
  objDefId_entitySceneControlPinataLeaderboardsRead = 0x00a1,
  objDefId_entitySceneControlPinataIntroVideo = 0x00a2,
  objDefId_entitySceneControlPinataTitleGarden = 0x00a3,
  objDefId_entitySceneControlPinataStoryUnlock = 0x00a4,
  objDefId_entitySceneControlPinataStore = 0x00a5,
  objDefId_entitySceneControlPinataGardenFeature = 0x00a6,
  objDefId_entitySceneControlPinataNetCorrect = 0x00a7,
  objDefId_bifPart = 0x00a8,
  objDefId_bifPartGroup = 0x00a9,
  objDefId_bifPartGroupBranch = 0x00aa,
  objDefId_bifPartGroupBud = 0x00ab,
  objDefId_bifPartPerchPath = 0x00ac,
  objDefId_bifPartProdPoint = 0x00ad,
  objDefId_bifPartHead = 0x00ae,
  objDefId_bifPartVegBoost = 0x00af,
  objDefId_imapCellFormat = 0x00b0,
  objDefId_imapCombineCellFormat = 0x00b1,
  objDefId_imapUpdatePolicy = 0x00b2,
  objDefId_imapUpdatePolicyScratch = 0x00b3,
  objDefId_imapUpdatePolicyScratchAStar = 0x00b4,
  objDefId_scenePinataIMapCellFormat = 0x00b5,
  objDefId_entitySceneControlPinataDummyPlayer = 0x00b6,
  objDefId_entitySceneControlTestPinataActorPadControl = 0x00b7,
  objDefId_MaxClassId = 0x00b8
};

struct mlVec { /* Size=0xc */
  /* 0x0000 */ public: float x;
  /* 0x0004 */ public: float y;
  /* 0x0008 */ public: float z;
};

struct mlV4 { /* Size=0x10 */
  /* 0x0000 */ public: float x;
  /* 0x0004 */ public: float y;
  /* 0x0008 */ public: float z;
  /* 0x000c */ public: float w;
};

struct gameIdInst_s { /* Size=0x10 */
  /* 0x0000 */ public: dsLinkedListNode_s node;
  /* 0x0008 */ public: gameIdComplete_s complete;
  /* 0x000c */ public: void* owner;
};

struct objNetSyncInst_s { /* Size=0x54 */
  /* 0x0000 */ public: float lifeTimer;
  /* 0x0004 */ public: float updateDelayTimer;
  /* 0x0008 */ public: float updateForcedTimer;
  /* 0x000c */ public: float timeSinceLastSentUpdate;
  /* 0x0010 */ public: float timeSinceLastSentUpdatePrev;
  /* 0x0014 */ public: float timeSinceLastReceivedUpdate;
  /* 0x0018 */ public: float timeSinceLastReceivedUpdatePrev;
  /* 0x001c */ public: float updateDelayTimerDefault;
  /* 0x0020 */ public: float updateForcedTimerDefault;
  /* 0x0024 */ public: int32_t canUpdate;
  /* 0x0028 */ public: int32_t requiresForcedUpdate;
  /* 0x002c */ public: uint32_t properties;
  /* 0x0030 */ public: uint32_t doProperties;
  /* 0x0034 */ public: uint32_t updateOnDirtyFlags;
  /* 0x0038 */ public: uint32_t actualDirtyFlags;
  /* 0x003c */ public: objNetSyncOwnership_s ownership;
};

struct actorMindScriptTable_s { /* Size=0x8 */
  /* 0x0000 */ public: int32_t numEntries;
  /* 0x0004 */ public: const actorMindScriptTableEntry_s* entries;
};

struct objInst_s { /* Size=0x74 */
  /* 0x0000 */ public: const objFunc_s* func;
  /* 0x0004 */ public: objDefId_e defId;
  /* 0x0008 */ public: objTag_e tag;
  /* 0x000c */ public: gameIdInst_s _id;
  /* 0x001c */ public: objNetSyncInst_s _netsync;
  /* 0x0070 */ public: assetId_s* objParamsAid;
};

struct actorMindMood_s { /* Size=0x8 */
  /* 0x0000 */ public: int32_t id;
  /* 0x0004 */ public: float rageTimer;
};

struct actorMindLookAt_s { /* Size=0x1c */
  /* 0x0000 */ public: sceneLookAt_s* lookat;
  /* 0x0004 */ public: float time;
  /* 0x0008 */ public: float expiryTime;
  /* 0x000c */ public: int32_t useForcedPosition;
  /* 0x0010 */ public: mlVec posForced;
};

struct _unnamed_0x10974 { /* Size=0x10 */
  /* 0x0000 */ public: dsLinkedListNode_s listSentinel;
  /* 0x0008 */ public: actorMindGoal_Status_e lastExitStatus;
  /* 0x000c */ public: dsLinkedListNode_s* lastGoal;
};

struct _unnamed_0x10977 { /* Size=0x8 */
  /* 0x0000 */ public: actorMindScriptTable_s table;
};

struct actorMindInst_s { /* Size=0x114 */
  /* 0x0000 */ public: objInst_s __objInstance;
  /* 0x0074 */ public: actorInst_s* actor;
  /* 0x0078 */ public: actorInst_s* focalActor;
  /* 0x007c */ public: unsigned char inputTranslationMode;
  /* 0x007d */ public: unsigned char PAD[2];
  /* 0x0080 */ public: dsLinkedListNode_s memoryListSentinel;
  /* 0x0088 */ public: float reactionTime;
  /* 0x008c */ public: actorMindLookAt_s _lookat;
  /* 0x00a8 */ public: actorMindMood_s _mood;
  /* 0x00b0 */ public: _unnamed_0x10974 _goal;
  /* 0x00c0 */ public: _unnamed_0x10977 _script;
  /* 0x00c8 */ public: int32_t destinationPositionIndex;
  /* 0x00cc */ public: mlVec destinationPositionStack[6];
};

struct actorMindGoal_s { /* Size=0x14 */
  /* 0x0000 */ public: dsLinkedListNode_s link;
  /* 0x0008 */ public: actorMindGoalId_e id;
  /* 0x000c */ public: unsigned char initialised;
  /* 0x000d */ public: unsigned char PAD;
  /* 0x0010 */ public: float time;
};

struct actorMindGoal_Wait_Extra_s { /* Size=0x8 */
  /* 0x0000 */ public: float timeMin;
  /* 0x0004 */ public: float timeMax;
};

struct actorMindGoal_Wait_Runtime_s { /* Size=0x4 */
  /* 0x0000 */ public: float time;
};

// struct actorMindGoal_Wait_s { /* Size=0x20 */
struct actorMindGoal_Wait_s : public actorMindGoal_s { /* Size=0x20 */
//   /* 0x0000 */ public: actorMindGoal_s _goal;
  /* 0x0014 */ public: actorMindGoal_Wait_Extra_s extra;
  /* 0x001c */ public: actorMindGoal_Wait_Runtime_s runtime;
};

struct dbTexture_s;
struct dbVolume_s;
struct sgGraph;
struct dbShadowGeometry_s;
struct dbScenegraph_s;
struct dbTriHit_s;
struct dbMoldGeometry_s;
struct dbModelSwitch_s;
struct dbLocator_s;
struct dbModelJoint_s;
struct dbModelClimbPole_s;
struct dbMirror_s;
struct dbLight_s;
struct dbExtent_s;

enum dbModelUnitId_e {
  dbModelUnitId_Scenegraph = 0x0000,
  dbModelUnitId_UNUSED_1 = 0x0001,
  dbModelUnitId_Locator = 0x0002,
  dbModelUnitId_Light = 0x0003,
  dbModelUnitId_Volumes = 0x0004,
  dbModelUnitId_Extents = 0x0005,
  dbModelUnitId_TriHits = 0x0006,
  dbModelUnitId_Textures = 0x0007,
  dbModelUnitId_Joints = 0x0008,
  dbModelUnitId_AStar = 0x0009,
  dbModelUnitId_GardenSetup = 0x000a,
  dbModelUnitId_Mirrors = 0x000b,
  dbModelUnitId_HeatHaze = 0x000c,
  dbModelUnitId_AStarLayer2 = 0x000d,
  dbModelUnitId_AStarBreakConnectionLayer1 = 0x000e,
  dbModelUnitId_AStarBreakConnectionLayer2 = 0x000f,
  dbModelUnitId_ShadowGeometry = 0x0010,
  dbModelUnitId_LightVolumes = 0x0011,
  dbModelUnitId_ClimbPoles = 0x0012,
  dbModelUnitId_MoldGeometry = 0x0013,
  dbModelUnitId_HavokData = 0x0014,
  dbModelUnitId_VertexPath = 0x0015,
  dbModelUnitId_HavokMopp = 0x0016,
  dbModelUnitId_HavokMesh = 0x0017,
  dbModelUnitId_SwitchMaskNew = 0x0018,
  dbModelUnitId_VehicleSkinGeometry = 0x0019,
  dbModelUnitId_MAX = 0x001a
};

struct dbModelUnit_s { /* Size=0x8 */
  /* 0x0000 */ public: dbModelUnitId_e id;
  /* 0x0004 */ public: void* data;
};

struct vec3d { /* Size=0xc */
  /* 0x0000 */ public: float x;
  /* 0x0004 */ public: float y;
  /* 0x0008 */ public: float z;
};

struct vec4d { /* Size=0x10 */
  /* 0x0000 */ public: float x;
  /* 0x0004 */ public: float y;
  /* 0x0008 */ public: float z;
  /* 0x000c */ public: float w;
};

struct dbLightVolumeUnit_s { /* Size=0x64 */
  /* 0x0000 */ public: int32_t type;
  /* 0x0004 */ public: vec3d position;
  /* 0x0010 */ public: float radius;
  /* 0x0014 */ public: vec4d colour;
  /* 0x0024 */ public: int32_t jointIndex;
  /* 0x0028 */ public: vec3d direction;
  /* 0x0034 */ public: vec3d up;
  /* 0x0040 */ public: float fov;
  /* 0x0044 */ public: float lightShaftAttenuationRadius;
  /* 0x0048 */ public: int32_t isMainLight;
  /* 0x004c */ public: int32_t colourTextureIndex;
  /* 0x0050 */ public: int32_t noiseTextureIndex;
  /* 0x0054 */ public: float* keyframedIntensity;
  /* 0x0058 */ public: int32_t keyframedIntensitySize;
  /* 0x005c */ public: float animationDurationSecs;
  /* 0x0060 */ public: float animationTimestepSecs;
};

struct dbModelTextureUnit_s { /* Size=0xc */
  /* 0x0000 */ public: uint32_t numTextures;
  /* 0x0004 */ public: dbTexture_s** textureHeaders;
  /* 0x0008 */ public: assetId_s** textureAssetId;
};

struct dbLightVolume_s { /* Size=0x14 */
  /* 0x0000 */ public: dbLightVolumeUnit_s* lightVolumeList;
  /* 0x0004 */ public: int32_t lightVolumeListSize;
  /* 0x0008 */ public: dbModelTextureUnit_s lightTextureList;
};

struct dbModelRuntime_s { /* Size=0x3c */
  /* 0x0000 */ public: dbTriHit_s* trihits;
  /* 0x0004 */ public: dbMirror_s* mirror;
  /* 0x0008 */ public: sgGraph* sg;
  /* 0x000c */ public: dbModelTextureUnit_s* texpalette;
  /* 0x0010 */ public: dbShadowGeometry_s* shadowGeometry;
  /* 0x0014 */ public: dbMoldGeometry_s* moldGeometry;
  /* 0x0018 */ public: const dbModelClimbPole_s* climbPoles;
  /* 0x001c */ public: const dbExtent_s* extent;
  /* 0x0020 */ public: const dbModelJoint_s* joint;
  /* 0x0024 */ public: const dbLight_s* light;
  /* 0x0028 */ public: const dbLightVolume_s* lightVolume;
  /* 0x002c */ public: const dbLocator_s* locator;
  /* 0x0030 */ public: const dbScenegraph_s* sceneGraph;
  /* 0x0034 */ public: const dbVolume_s* volume;
  /* 0x0038 */ public: const dbModelSwitch_s* switchMask;
};

struct dbModel_s { /* Size=0x14 */
  /* 0x0000 */ public: dbModelUnit_s* units;
  /* 0x0004 */ public: uint32_t numUnits;
  /* 0x0008 */ public: uint32_t flags;
  /* 0x000c */ public: uint32_t headerSize;
  /* 0x0010 */ public: dbModelRuntime_s* runtime;
};

void dbModelTextureUnitInit(dbModelTextureUnit_s* textureUnit, dbModel_s* model);
void dbModelTextureUnitRelease(dbModelTextureUnit_s* textureUnit);

actorInst_s* actorMindInstGetActor(const actorMindInst_s* mind);
actorMindGoal_Status_e _actorMindInitialiseGoal(actorMindInst_s* mind,
                                                actorMindGoal_s* goal);
actorMindGoalId_e actorMindGoalGetId(const actorMindGoal_s* goal);
uint32_t* mlRndGetGlobalPtr();
float mlRndInstFloatRange(unsigned int* pIj, float min, float max);

void dbLightVolumeInit(dbLightVolume_s* lightVolume, dbModel_s* model);
void dbLightVolumeRelease(dbLightVolume_s* lightVolume);
int dbLightVolumeGetNumLights(const dbLightVolume_s* lightVolume);
int dbLightVolumeGetType(const dbLightVolume_s* lightVolume, int index);
dbTexture_s* dbLightVolumeGetColourTexture(const dbLightVolume_s* lightVolume,
                                           int index);
dbTexture_s* dbLightVolumeGetNoiseTexture(const dbLightVolume_s* lightVolume, int index);
float dbLightVolumeGetFOV(const dbLightVolume_s* lightVolume, int index);
const mlVec* dbLightVolumeGetPosition(const dbLightVolume_s* lightVolume, int index);
const mlVec* dbLightVolumeGetDirection(const dbLightVolume_s* lightVolume, int index);
const mlVec* dbLightVolumeGetUpVector(const dbLightVolume_s* lightVolume, int index);
const mlV4* dbLightVolumeGetColour(const dbLightVolume_s* lightVolume, int index);
float dbLightVolumeGetRadius(const dbLightVolume_s* lightVolume, int index);
float dbLightVolumeGetAttenuationDistance(const dbLightVolume_s* lightVolume, int index);
int dbLightVolumeGetJointIndex(const dbLightVolume_s* lightVolume, int index);
int dbLightVolumeGetIsMainLight(const dbLightVolume_s* lightVolume, int index);
float dbLightVolumeGetAnimationDurationSecs(const dbLightVolume_s* lightVolume,
                                            int index);
float dbLightVolumeGetAnimationTimestepSecs(const dbLightVolume_s* lightVolume,
                                            int index);
const float* dbLightVolumeGetKeyframedIntensityPtr(const dbLightVolume_s* lightVolume,
                                                   int index);
