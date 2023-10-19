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

// 0x48 (0x48 - 0x0)
// Function AbilityDecoTool_Athena_MissileBattery_Homing.AbilityDecoTool_Athena_MissileBattery_Homing_C.GetAimLocFromDeco
struct AAbilityDecoTool_Athena_MissileBattery_Homing_C_GetAimLocFromDeco_Params
{
public:
	struct FVector                               AimLocation;                                       // 0x0(0xC)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_562D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AB_PlacementPreview_MissleBattery_Homing_C* K2Node_DynamicCast_AsB_Placement_Preview_Missle_Battery_Homing; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_562E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetAimLocFromPlacementPreview_AimLocation; // 0x1C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_VectorToString_ReturnValue;          // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function AbilityDecoTool_Athena_MissileBattery_Homing.AbilityDecoTool_Athena_MissileBattery_Homing_C.HideMeshAndPlacement
struct AAbilityDecoTool_Athena_MissileBattery_Homing_C_HideMeshAndPlacement_Params
{
public:
	bool                                         bInHide;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_562F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function AbilityDecoTool_Athena_MissileBattery_Homing.AbilityDecoTool_Athena_MissileBattery_Homing_C.HideFor
struct AAbilityDecoTool_Athena_MissileBattery_Homing_C_HideFor_Params
{
public:
	float                                        InTime;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AbilityDecoTool_Athena_MissileBattery_Homing.AbilityDecoTool_Athena_MissileBattery_Homing_C.BPOnSetDecoObjectPreview
struct AAbilityDecoTool_Athena_MissileBattery_Homing_C_BPOnSetDecoObjectPreview_Params
{
public:
	class AFortDecoHelper*                       FortDecoHelper;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function AbilityDecoTool_Athena_MissileBattery_Homing.AbilityDecoTool_Athena_MissileBattery_Homing_C.ExecuteUbergraph_AbilityDecoTool_Athena_MissileBattery_Homing
struct AAbilityDecoTool_Athena_MissileBattery_Homing_C_ExecuteUbergraph_AbilityDecoTool_Athena_MissileBattery_Homing_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_InTime;                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortDecoHelper*                       K2Node_Event_FortDecoHelper;                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x20(0x8)(NoDestructor)
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn;                    // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5630[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AB_PlacementPreview_MissleBattery_Homing_C* K2Node_DynamicCast_AsB_Placement_Preview_Missle_Battery_Homing; // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


