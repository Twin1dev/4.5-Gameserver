#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0xD0 - 0x0)
// Function B_AirStrike_Bomb_Spawner.B_AirStrike_Bomb_Spawner_C.InitBombSpawn
struct AB_AirStrike_Bomb_Spawner_C_InitBombSpawn_Params
{
public:
	class AFortPlayerPawn*                       InFortPlayerPawn;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       InSpawnLocations;                                  // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FFortGameplayEffectContainerSpec      InEffectOnExplode;                                 // 0x18(0x80)(BlueprintVisible, BlueprintReadOnly, Parm)
	uint8                                        Pad_1B46[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InBombInitTransform;                               // 0xA0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};

// 0x130 (0x130 - 0x0)
// Function B_AirStrike_Bomb_Spawner.B_AirStrike_Bomb_Spawner_C.ExecuteUbergraph_B_AirStrike_Bomb_Spawner
struct AB_AirStrike_Bomb_Spawner_C_ExecuteUbergraph_B_AirStrike_Bomb_Spawner_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Array_Get_Item;                           // 0x4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_CustomEvent_InFortPlayerPawn;               // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       K2Node_CustomEvent_InSpawnLocations;               // 0x18(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	struct FFortGameplayEffectContainerSpec      K2Node_CustomEvent_InEffectOnExplode;              // 0x28(0x80)(None)
	uint8                                        Pad_1B56[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            K2Node_CustomEvent_InBombInitTransform;            // 0xB0(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_TransformLocation_ReturnValue;            // 0xE0(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0xEC(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0xF8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortProjectileBase*                   CallFunc_SpawnProjectile_ReturnValue;              // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x114(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1B57[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x118(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x128(0x8)(NoDestructor)
};

}
}


