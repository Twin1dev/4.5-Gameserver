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

// 0x8 (0x8 - 0x0)
// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.GetProjectileTrajectoryActor
struct UGA_Athena_ProjWithTrajectory_C_GetProjectileTrajectoryActor_Params
{
public:
	TSubclassOf<class AFortProjectileTrajectory> ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.GetProjectileTrajectoryPoints
struct UGA_Athena_ProjWithTrajectory_C_GetProjectileTrajectoryPoints_Params
{
public:
	TArray<struct FVector>                       OutSplinePoints;                                   // 0x0(0x10)(Parm, OutParm, ZeroConstructor)
	TArray<struct FVector>                       OutSplineTangents;                                 // 0x10(0x10)(Parm, OutParm, ZeroConstructor)
	class AFortPlayerPawn*                       CallFunc_GetOwningPlayer_Player_Pawn;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SelectFloat_ReturnValue;                  // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_SpawnLocationAndRotation_OutLoc;          // 0x2C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_SpawnLocationAndRotation_OutRot;          // 0x38(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x44(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed;   // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x60(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMax_ReturnValue;                         // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       CallFunc_CalculateProjectileTrajectorySpline_OutSplinePoints; // 0x70(0x10)(ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                       CallFunc_CalculateProjectileTrajectorySpline_OutSplineTangents; // 0x80(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x59 (0x59 - 0x0)
// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.GetOwningPlayer
struct UGA_Athena_ProjWithTrajectory_C_GetOwningPlayer_Params
{
public:
	class AFortPlayerPawn*                       Player_Pawn;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_47F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityActorInfo             CallFunc_GetActorInfo_ReturnValue;                 // 0x10(0x40)(ContainsInstancedReference)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.CalcGrenadeSpeedFromPitch
struct UGA_Athena_ProjWithTrajectory_C_CalcGrenadeSpeedFromPitch_Params
{
public:
	float                                        AimPitch;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GrenadeSpeed;                                      // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_NormalizeAxis_ReturnValue;                // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue;                       // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue1;         // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue;                         // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.UpdateTrajectorySpline
struct UGA_Athena_ProjWithTrajectory_C_UpdateTrajectorySpline_Params
{
public:
	TArray<struct FVector>                       CallFunc_GetProjectileTrajectoryPoints_OutSplinePoints; // 0x0(0x10)(ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                       CallFunc_GetProjectileTrajectoryPoints_OutSplineTangents; // 0x10(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x59 (0x59 - 0x0)
// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.SetupDummyProjectile
struct UGA_Athena_ProjWithTrajectory_C_SetupDummyProjectile_Params
{
public:
	class AFortPlayerPawn*                       CallFunc_GetOwningPlayer_Player_Pawn;              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_47F4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x10(0x30)(IsPlainOldData, NoDestructor)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortProjectileTrajectory*             CallFunc_FinishSpawningActor_ReturnValue;          // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ProjectileTrajectory_C*            K2Node_DynamicCast_AsBP_Projectile_Trajectory;     // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x88 (0x88 - 0x0)
// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.SpawnLocationAndRotation
struct UGA_Athena_ProjWithTrajectory_C_SpawnLocationAndRotation_Params
{
public:
	struct FVector                               OutLoc;                                            // 0x0(0xC)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              OutRot;                                            // 0xC(0xC)(Parm, OutParm, IsPlainOldData, NoDestructor)
	class AFortPlayerPawn*                       CallFunc_GetOwningPlayer_Player_Pawn;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetDefaultTargetingRotation_ReturnValue;  // 0x20(0xC)(IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0x2C(0xC)(IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Roll1;                       // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch1;                      // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw1;                        // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x50(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_RotateAngleAxis_ReturnValue;              // 0x5C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x6C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMin_ReturnValue;                         // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x7C(0xC)(IsPlainOldData, NoDestructor)
};

// 0x120 (0x120 - 0x0)
// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.SetupGrenade
struct UGA_Athena_ProjWithTrajectory_C_SetupGrenade_Params
{
public:
	float                                        AimPitch;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_47F5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Base_Grenade;                                      // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Projectile_Speed;                                  // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_47F6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortGameplayEffectContainerSpec      Explosion_Gameplay_Spec;                           // 0x18(0x80)(Parm, OutParm)
	float                                        Projectile_Gravity_Scale;                          // 0x98(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed;   // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayEffectContainerSpec      CallFunc_MakeGameplayEffectContainerSpec_ReturnValue; // 0xA0(0x80)(None)
};

// 0x28 (0x28 - 0x0)
// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Destroyed_B9FD7A0A43AF00E4A8E57AAAC98E2A8D
struct UGA_Athena_ProjWithTrajectory_C_Destroyed_B9FD7A0A43AF00E4A8E57AAAC98E2A8D_Params
{
public:
	struct FProjectileEventData                  ProjectileData;                                    // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Exploded_B9FD7A0A43AF00E4A8E57AAAC98E2A8D
struct UGA_Athena_ProjWithTrajectory_C_Exploded_B9FD7A0A43AF00E4A8E57AAAC98E2A8D_Params
{
public:
	struct FProjectileEventData                  ProjectileData;                                    // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Stopped_B9FD7A0A43AF00E4A8E57AAAC98E2A8D
struct UGA_Athena_ProjWithTrajectory_C_Stopped_B9FD7A0A43AF00E4A8E57AAAC98E2A8D_Params
{
public:
	struct FProjectileEventData                  ProjectileData;                                    // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Bounced_B9FD7A0A43AF00E4A8E57AAAC98E2A8D
struct UGA_Athena_ProjWithTrajectory_C_Bounced_B9FD7A0A43AF00E4A8E57AAAC98E2A8D_Params
{
public:
	struct FProjectileEventData                  ProjectileData;                                    // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Touched_B9FD7A0A43AF00E4A8E57AAAC98E2A8D
struct UGA_Athena_ProjWithTrajectory_C_Touched_B9FD7A0A43AF00E4A8E57AAAC98E2A8D_Params
{
public:
	struct FProjectileEventData                  ProjectileData;                                    // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Created_B9FD7A0A43AF00E4A8E57AAAC98E2A8D
struct UGA_Athena_ProjWithTrajectory_C_Created_B9FD7A0A43AF00E4A8E57AAAC98E2A8D_Params
{
public:
	struct FProjectileEventData                  ProjectileData;                                    // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Completed_1EDA62904AD9995FD9ABFE99B3E783C8
struct UGA_Athena_ProjWithTrajectory_C_Completed_1EDA62904AD9995FD9ABFE99B3E783C8_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Cancelled_1EDA62904AD9995FD9ABFE99B3E783C8
struct UGA_Athena_ProjWithTrajectory_C_Cancelled_1EDA62904AD9995FD9ABFE99B3E783C8_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Triggered_1EDA62904AD9995FD9ABFE99B3E783C8
struct UGA_Athena_ProjWithTrajectory_C_Triggered_1EDA62904AD9995FD9ABFE99B3E783C8_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Server_SpawnProjectile
struct UGA_Athena_ProjWithTrajectory_C_Server_SpawnProjectile_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Direction;                                         // 0xC(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.K2_OnEndAbility
struct UGA_Athena_ProjWithTrajectory_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.AthenaGrenadeSpawned
struct UGA_Athena_ProjWithTrajectory_C_AthenaGrenadeSpawned_Params
{
public:
	class AFortProjectileBase*                   GrenadeReference;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5FA (0x5FA - 0x0)
// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.ExecuteUbergraph_GA_Athena_ProjWithTrajectory
struct UGA_Athena_ProjWithTrajectory_C_ExecuteUbergraph_GA_Athena_ProjWithTrajectory_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_47F7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProjectileEventData                  K2Node_CustomEvent_ProjectileData2;                // 0x8(0x28)(ConstParm, ContainsInstancedReference)
	struct FProjectileEventData                  K2Node_CustomEvent_ProjectileData1;                // 0x30(0x28)(ConstParm, ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x58(0x10)(ZeroConstructor, NoDestructor)
	struct FProjectileEventData                  K2Node_CustomEvent_ProjectileData;                 // 0x68(0x28)(ConstParm, ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x90(0x10)(ZeroConstructor, NoDestructor)
	struct FProjectileEventData                  Temp_struct_Variable;                              // 0xA0(0x28)(ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0xC8(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData2;                    // 0xD8(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag2;                // 0xF8(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData1;                    // 0x100(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag1;                // 0x120(0x8)(NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x128(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData;                     // 0x138(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag;                 // 0x158(0x8)(NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x160(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                          Temp_struct_Variable1;                             // 0x170(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      Temp_struct_Variable2;                             // 0x178(0x20)(None)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate5;             // 0x198(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate6;             // 0x1A8(0x10)(ZeroConstructor, NoDestructor)
	class UAbilityTask_WaitDelay*                CallFunc_WaitDelay_ReturnValue;                    // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate7;             // 0x1C0(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_47F8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate8;             // 0x1D8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate9;             // 0x1E8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate10;            // 0x1F8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate11;            // 0x208(0x10)(ZeroConstructor, NoDestructor)
	class UAbilityTask_WaitDelay*                CallFunc_WaitDelay_ReturnValue1;                   // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate12;            // 0x220(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_47F9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetScaledCapsuleSize_OutRadius;           // 0x234(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetScaledCapsuleSize_OutHalfHeight;       // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FMax_ReturnValue;                         // 0x23C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetGravityZ_ReturnValue;                  // 0x240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x244(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate13;            // 0x248(0x10)(ZeroConstructor, NoDestructor)
	struct FProjectileEventData                  K2Node_CustomEvent_ProjectileData5;                // 0x258(0x28)(ConstParm, ContainsInstancedReference)
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue; // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_47FA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               K2Node_CustomEvent_Location;                       // 0x28C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              K2Node_CustomEvent_Direction;                      // 0x298(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_SpawnLocationAndRotation_OutLoc;          // 0x2A4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_SpawnLocationAndRotation_OutRot;          // 0x2B0(0xC)(IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x2BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x2C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x2C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_SetupGrenade_Base_Grenade;                // 0x2C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetupGrenade_Projectile_Speed;            // 0x2D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_47FB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortGameplayEffectContainerSpec      CallFunc_SetupGrenade_Explosion_Gameplay_Spec;     // 0x2D8(0x80)(None)
	float                                        CallFunc_SetupGrenade_Projectile_Gravity_Scale;    // 0x358(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Roll1;                       // 0x35C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch1;                      // 0x360(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw1;                        // 0x364(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed;   // 0x368(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_47FC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProjectileEventData                  K2Node_CustomEvent_ProjectileData3;                // 0x370(0x28)(ConstParm, ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate14;            // 0x398(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsStandalone_ReturnValue;                 // 0x3A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue;             // 0x3A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_47FD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x3B0(0x8)(NoDestructor)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x3B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_47FE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityActorInfo             CallFunc_GetActorInfo_ReturnValue;                 // 0x3C0(0x40)(ContainsInstancedReference)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x400(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x408(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_47FF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0x410(0xA8)(None)
	struct FGameplayAbilityTargetDataHandle      CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x4B8(0x20)(None)
	TArray<struct FActiveGameplayEffectHandle>   CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x4D8(0x10)(ZeroConstructor, ReferenceParm)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate15;            // 0x4E8(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x4F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue1;            // 0x4FA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4800[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilityTask_PlayMontageAndWait*       CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x500(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FProjectileEventData                  K2Node_CustomEvent_ProjectileData4;                // 0x508(0x28)(ConstParm, ContainsInstancedReference)
	bool                                         CallFunc_IsValid_ReturnValue3;                     // 0x530(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4801[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate16;            // 0x538(0x10)(ZeroConstructor, NoDestructor)
	class UAbilityTask_WaitDelay*                CallFunc_WaitDelay_ReturnValue2;                   // 0x548(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitDelay*                CallFunc_WaitDelay_ReturnValue3;                   // 0x550(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue4;                     // 0x558(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue5;                     // 0x559(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4802[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortProjectileBase*                   K2Node_CustomEvent_GrenadeReference;               // 0x560(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x568(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4803[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       CallFunc_GetOwningPlayer_Player_Pawn;              // 0x570(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       CallFunc_GetOwningPlayer_Player_Pawn1;             // 0x578(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x580(0x30)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x5B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4804[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x5B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x5C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x5C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4805[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortProjectileBase*                   CallFunc_FinishSpawningActor_ReturnValue;          // 0x5C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       CallFunc_GetOwningPlayer_Player_Pawn2;             // 0x5D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       CallFunc_GetOwningPlayer_Player_Pawn3;             // 0x5D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAbilityTask_SpawnProjectileAndWait* CallFunc_SpawnProjectileAndWait_ReturnValue;       // 0x5E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       CallFunc_GetOwningPlayer_Player_Pawn4;             // 0x5E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortProjectileBase*                   CallFunc_BeginSpawningActor_SpawnedActor;          // 0x5F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BeginSpawningActor_ReturnValue;           // 0x5F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue6;                     // 0x5F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


