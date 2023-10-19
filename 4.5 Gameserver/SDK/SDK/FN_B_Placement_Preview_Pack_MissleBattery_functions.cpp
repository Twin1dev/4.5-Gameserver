#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C
// (Actor)

class UClass* AB_Placement_Preview_Pack_MissleBattery_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Placement_Preview_Pack_MissleBattery_C");

	return Clss;
}


// B_Placement_Preview_Pack_MissleBattery_C B_Placement_Preview_Pack_MissleBattery.Default__B_Placement_Preview_Pack_MissleBattery_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Placement_Preview_Pack_MissleBattery_C* AB_Placement_Preview_Pack_MissleBattery_C::GetDefaultObj()
{
	static class AB_Placement_Preview_Pack_MissleBattery_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Placement_Preview_Pack_MissleBattery_C*>(AB_Placement_Preview_Pack_MissleBattery_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.GetPlayerController
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPlayerControllerZone*   Controller                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerControllerZone*   K2Node_DynamicCast_AsFort_Player_Controller_Zone                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Placement_Preview_Pack_MissleBattery_C::GetPlayerController(class AFortPlayerControllerZone** Controller, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Placement_Preview_Pack_MissleBattery_C", "GetPlayerController");

	Params::AB_Placement_Preview_Pack_MissleBattery_C_GetPlayerController_Params Parms{};

	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Zone = K2Node_DynamicCast_AsFort_Player_Controller_Zone;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Controller != nullptr)
		*Controller = Parms.Controller;

}


// Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.GetGadgetItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UFortItem*                   Gadget                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerZone*   CallFunc_GetPlayerController_Controller                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGuid                       CallFunc_GetInventoryGUID_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_K2_GetInventoryItemWithGuid_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Placement_Preview_Pack_MissleBattery_C::GetGadgetItem(class UFortItem** Gadget, class AFortPlayerControllerZone* CallFunc_GetPlayerController_Controller, bool CallFunc_IsValid_ReturnValue, const struct FGuid& CallFunc_GetInventoryGUID_ReturnValue, class UFortItem* CallFunc_K2_GetInventoryItemWithGuid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Placement_Preview_Pack_MissleBattery_C", "GetGadgetItem");

	Params::AB_Placement_Preview_Pack_MissleBattery_C_GetGadgetItem_Params Parms{};

	Parms.CallFunc_GetPlayerController_Controller = CallFunc_GetPlayerController_Controller;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetInventoryGUID_ReturnValue = CallFunc_GetInventoryGUID_ReturnValue;
	Parms.CallFunc_K2_GetInventoryItemWithGuid_ReturnValue = CallFunc_K2_GetInventoryItemWithGuid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Gadget != nullptr)
		*Gadget = Parms.Gadget;

}


// Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.CalcRocketSpeedFromPitch
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              AimPitch                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RocketSpeed                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_NormalizeAxis_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Placement_Preview_Pack_MissleBattery_C::CalcRocketSpeedFromPitch(float AimPitch, float* RocketSpeed, float CallFunc_NormalizeAxis_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Placement_Preview_Pack_MissleBattery_C", "CalcRocketSpeedFromPitch");

	Params::AB_Placement_Preview_Pack_MissleBattery_C_CalcRocketSpeedFromPitch_Params Parms{};

	Parms.AimPitch = AimPitch;
	Parms.CallFunc_NormalizeAxis_ReturnValue = CallFunc_NormalizeAxis_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue1 = CallFunc_Subtract_FloatFloat_ReturnValue1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RocketSpeed != nullptr)
		*RocketSpeed = Parms.RocketSpeed;

}


// Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.SpawnLocationAndRotation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     OutLoc                                                           (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    OutRot                                                           (Parm, OutParm, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetDefaultTargetingRotation_ReturnValue                 (IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RotateAngleAxis_ReturnValue                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)

void AB_Placement_Preview_Pack_MissleBattery_C::SpawnLocationAndRotation(struct FVector* OutLoc, struct FRotator* OutRot, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_GetDefaultTargetingRotation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BreakRotator_Roll1, float CallFunc_BreakRotator_Pitch1, float CallFunc_BreakRotator_Yaw1, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_FClamp_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Placement_Preview_Pack_MissleBattery_C", "SpawnLocationAndRotation");

	Params::AB_Placement_Preview_Pack_MissleBattery_C_SpawnLocationAndRotation_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetDefaultTargetingRotation_ReturnValue = CallFunc_GetDefaultTargetingRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_BreakRotator_Roll1 = CallFunc_BreakRotator_Roll1;
	Parms.CallFunc_BreakRotator_Pitch1 = CallFunc_BreakRotator_Pitch1;
	Parms.CallFunc_BreakRotator_Yaw1 = CallFunc_BreakRotator_Yaw1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_RotateAngleAxis_ReturnValue = CallFunc_RotateAngleAxis_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutLoc != nullptr)
		*OutLoc = std::move(Parms.OutLoc);

	if (OutRot != nullptr)
		*OutRot = std::move(Parms.OutRot);

}


// Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.UpdateTrajectorySpline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SpawnLocationAndRotation_OutLoc                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_SpawnLocationAndRotation_OutRot                         (IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalcRocketSpeedFromPitch_RocketSpeed                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             CallFunc_CalculateProjectileTrajectorySpline_OutSplinePoints     (ZeroConstructor, ReferenceParm)
// TArray<struct FVector>             CallFunc_CalculateProjectileTrajectorySpline_OutSplineTangents   (ZeroConstructor, ReferenceParm)

void AB_Placement_Preview_Pack_MissleBattery_C::UpdateTrajectorySpline(float CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_SpawnLocationAndRotation_OutLoc, const struct FRotator& CallFunc_SpawnLocationAndRotation_OutRot, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, float CallFunc_CalcRocketSpeedFromPitch_RocketSpeed, float CallFunc_FMax_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectorySpline_OutSplinePoints, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectorySpline_OutSplineTangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Placement_Preview_Pack_MissleBattery_C", "UpdateTrajectorySpline");

	Params::AB_Placement_Preview_Pack_MissleBattery_C_UpdateTrajectorySpline_Params Parms{};

	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SpawnLocationAndRotation_OutLoc = CallFunc_SpawnLocationAndRotation_OutLoc;
	Parms.CallFunc_SpawnLocationAndRotation_OutRot = CallFunc_SpawnLocationAndRotation_OutRot;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_CalcRocketSpeedFromPitch_RocketSpeed = CallFunc_CalcRocketSpeedFromPitch_RocketSpeed;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_CalculateProjectileTrajectorySpline_OutSplinePoints = CallFunc_CalculateProjectileTrajectorySpline_OutSplinePoints;
	Parms.CallFunc_CalculateProjectileTrajectorySpline_OutSplineTangents = CallFunc_CalculateProjectileTrajectorySpline_OutSplineTangents;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.SetupDummyProjectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                   PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScaledCapsuleSize_OutRadius                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScaledCapsuleSize_OutHalfHeight                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortProjectileBase*         CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGravityZ_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ProjectileTrajectory_C*  K2Node_DynamicCast_AsBP_Projectile_Trajectory                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Placement_Preview_Pack_MissleBattery_C::SetupDummyProjectile(class AFortPawn* PlayerPawn, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, float CallFunc_GetScaledCapsuleSize_OutRadius, float CallFunc_GetScaledCapsuleSize_OutHalfHeight, class AFortProjectileBase* CallFunc_FinishSpawningActor_ReturnValue, float CallFunc_FMax_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1, float CallFunc_GetGravityZ_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, class ABP_ProjectileTrajectory_C* K2Node_DynamicCast_AsBP_Projectile_Trajectory, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Placement_Preview_Pack_MissleBattery_C", "SetupDummyProjectile");

	Params::AB_Placement_Preview_Pack_MissleBattery_C_SetupDummyProjectile_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_GetScaledCapsuleSize_OutRadius = CallFunc_GetScaledCapsuleSize_OutRadius;
	Parms.CallFunc_GetScaledCapsuleSize_OutHalfHeight = CallFunc_GetScaledCapsuleSize_OutHalfHeight;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1;
	Parms.CallFunc_GetGravityZ_ReturnValue = CallFunc_GetGravityZ_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue1 = CallFunc_FinishSpawningActor_ReturnValue1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Projectile_Trajectory = K2Node_DynamicCast_AsBP_Projectile_Trajectory;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Placement_Preview_Pack_MissleBattery_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Placement_Preview_Pack_MissleBattery_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.OnUpdateVisuals
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSafeToPlace                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Placement_Preview_Pack_MissleBattery_C::OnUpdateVisuals(float DeltaSeconds, bool bSafeToPlace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Placement_Preview_Pack_MissleBattery_C", "OnUpdateVisuals");

	Params::AB_Placement_Preview_Pack_MissleBattery_C_OnUpdateVisuals_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;
	Parms.bSafeToPlace = bSafeToPlace;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.PawnSetHere
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                   FortPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Placement_Preview_Pack_MissleBattery_C::PawnSetHere(class AFortPawn* FortPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Placement_Preview_Pack_MissleBattery_C", "PawnSetHere");

	Params::AB_Placement_Preview_Pack_MissleBattery_C_PawnSetHere_Params Parms{};

	Parms.FortPawn = FortPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Placement_Preview_Pack_MissleBattery_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Placement_Preview_Pack_MissleBattery_C", "ReceiveEndPlay");

	Params::AB_Placement_Preview_Pack_MissleBattery_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Placement_Preview_Pack_MissleBattery.B_Placement_Preview_Pack_MissleBattery_C.ExecuteUbergraph_B_Placement_Preview_Pack_MissleBattery
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSafeToPlace                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   K2Node_CustomEvent_FortPawn                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Placement_Preview_Pack_MissleBattery_C::ExecuteUbergraph_B_Placement_Preview_Pack_MissleBattery(int32 EntryPoint, bool CallFunc_IsLocallyControlled_ReturnValue, float K2Node_Event_DeltaSeconds, bool K2Node_Event_bSafeToPlace, class AFortPawn* K2Node_CustomEvent_FortPawn, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Placement_Preview_Pack_MissleBattery_C", "ExecuteUbergraph_B_Placement_Preview_Pack_MissleBattery");

	Params::AB_Placement_Preview_Pack_MissleBattery_C_ExecuteUbergraph_B_Placement_Preview_Pack_MissleBattery_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_bSafeToPlace = K2Node_Event_bSafeToPlace;
	Parms.K2Node_CustomEvent_FortPawn = K2Node_CustomEvent_FortPawn;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}

}


