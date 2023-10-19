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

// 0x4 (0x4 - 0x0)
// Function B_Melee_Impact_Pickaxe_15_CandyCane_Parent.B_Melee_Impact_Pickaxe_15_CandyCane_Parent_C.TurnOnLights
struct AB_Melee_Impact_Pickaxe_15_CandyCane_Parent_C_TurnOnLights_Params
{
public:
	float                                        Kills;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function B_Melee_Impact_Pickaxe_15_CandyCane_Parent.B_Melee_Impact_Pickaxe_15_CandyCane_Parent_C.UserConstructionScript
struct AB_Melee_Impact_Pickaxe_15_CandyCane_Parent_C_UserConstructionScript_Params
{
public:
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function B_Melee_Impact_Pickaxe_15_CandyCane_Parent.B_Melee_Impact_Pickaxe_15_CandyCane_Parent_C.K2_OnProgressiveCosmeticWatchedStatChanged
struct AB_Melee_Impact_Pickaxe_15_CandyCane_Parent_C_K2_OnProgressiveCosmeticWatchedStatChanged_Params
{
public:
	class FName                                  StatName;                                          // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NewValue;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function B_Melee_Impact_Pickaxe_15_CandyCane_Parent.B_Melee_Impact_Pickaxe_15_CandyCane_Parent_C.ExecuteUbergraph_B_Melee_Impact_Pickaxe_15_CandyCane_Parent
struct AB_Melee_Impact_Pickaxe_15_CandyCane_Parent_C_ExecuteUbergraph_B_Melee_Impact_Pickaxe_15_CandyCane_Parent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_GetScalarParameterValue_ReturnValue;   // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue1;     // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_573B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Event_StatName;                             // 0x10(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_NewValue;                             // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


