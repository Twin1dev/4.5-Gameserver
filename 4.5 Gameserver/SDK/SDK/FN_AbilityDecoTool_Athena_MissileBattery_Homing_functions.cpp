#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AbilityDecoTool_Athena_MissileBattery_Homing.AbilityDecoTool_Athena_MissileBattery_Homing_C
// (Actor)

class UClass* AAbilityDecoTool_Athena_MissileBattery_Homing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityDecoTool_Athena_MissileBattery_Homing_C");

	return Clss;
}


// AbilityDecoTool_Athena_MissileBattery_Homing_C AbilityDecoTool_Athena_MissileBattery_Homing.Default__AbilityDecoTool_Athena_MissileBattery_Homing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAbilityDecoTool_Athena_MissileBattery_Homing_C* AAbilityDecoTool_Athena_MissileBattery_Homing_C::GetDefaultObj()
{
	static class AAbilityDecoTool_Athena_MissileBattery_Homing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAbilityDecoTool_Athena_MissileBattery_Homing_C*>(AAbilityDecoTool_Athena_MissileBattery_Homing_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AbilityDecoTool_Athena_MissileBattery_Homing.AbilityDecoTool_Athena_MissileBattery_Homing_C.GetAimLocFromDeco
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     AimLocation                                                      (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_PlacementPreview_MissleBattery_Homing_C*K2Node_DynamicCast_AsB_Placement_Preview_Missle_Battery_Homing   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetAimLocFromPlacementPreview_AimLocation               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_VectorToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void AAbilityDecoTool_Athena_MissileBattery_Homing_C::GetAimLocFromDeco(struct FVector* AimLocation, class AB_PlacementPreview_MissleBattery_Homing_C* K2Node_DynamicCast_AsB_Placement_Preview_Missle_Battery_Homing, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetAimLocFromPlacementPreview_AimLocation, const class FString& CallFunc_Conv_VectorToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityDecoTool_Athena_MissileBattery_Homing_C", "GetAimLocFromDeco");

	Params::AAbilityDecoTool_Athena_MissileBattery_Homing_C_GetAimLocFromDeco_Params Parms{};

	Parms.K2Node_DynamicCast_AsB_Placement_Preview_Missle_Battery_Homing = K2Node_DynamicCast_AsB_Placement_Preview_Missle_Battery_Homing;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAimLocFromPlacementPreview_AimLocation = CallFunc_GetAimLocFromPlacementPreview_AimLocation;
	Parms.CallFunc_Conv_VectorToString_ReturnValue = CallFunc_Conv_VectorToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AimLocation != nullptr)
		*AimLocation = std::move(Parms.AimLocation);

}


// Function AbilityDecoTool_Athena_MissileBattery_Homing.AbilityDecoTool_Athena_MissileBattery_Homing_C.HideMeshAndPlacement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInHide                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbilityDecoTool_Athena_MissileBattery_Homing_C::HideMeshAndPlacement(bool bInHide, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityDecoTool_Athena_MissileBattery_Homing_C", "HideMeshAndPlacement");

	Params::AAbilityDecoTool_Athena_MissileBattery_Homing_C_HideMeshAndPlacement_Params Parms{};

	Parms.bInHide = bInHide;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AbilityDecoTool_Athena_MissileBattery_Homing.AbilityDecoTool_Athena_MissileBattery_Homing_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbilityDecoTool_Athena_MissileBattery_Homing_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityDecoTool_Athena_MissileBattery_Homing_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AbilityDecoTool_Athena_MissileBattery_Homing.AbilityDecoTool_Athena_MissileBattery_Homing_C.HideFor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InTime                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbilityDecoTool_Athena_MissileBattery_Homing_C::HideFor(float InTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityDecoTool_Athena_MissileBattery_Homing_C", "HideFor");

	Params::AAbilityDecoTool_Athena_MissileBattery_Homing_C_HideFor_Params Parms{};

	Parms.InTime = InTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AbilityDecoTool_Athena_MissileBattery_Homing.AbilityDecoTool_Athena_MissileBattery_Homing_C.BPOnSetDecoObjectPreview
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper*             FortDecoHelper                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbilityDecoTool_Athena_MissileBattery_Homing_C::BPOnSetDecoObjectPreview(class AFortDecoHelper* FortDecoHelper)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityDecoTool_Athena_MissileBattery_Homing_C", "BPOnSetDecoObjectPreview");

	Params::AAbilityDecoTool_Athena_MissileBattery_Homing_C_BPOnSetDecoObjectPreview_Params Parms{};

	Parms.FortDecoHelper = FortDecoHelper;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AbilityDecoTool_Athena_MissileBattery_Homing.AbilityDecoTool_Athena_MissileBattery_Homing_C.Show
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbilityDecoTool_Athena_MissileBattery_Homing_C::Show()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityDecoTool_Athena_MissileBattery_Homing_C", "Show");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AbilityDecoTool_Athena_MissileBattery_Homing.AbilityDecoTool_Athena_MissileBattery_Homing_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAbilityDecoTool_Athena_MissileBattery_Homing_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityDecoTool_Athena_MissileBattery_Homing_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AbilityDecoTool_Athena_MissileBattery_Homing.AbilityDecoTool_Athena_MissileBattery_Homing_C.ExecuteUbergraph_AbilityDecoTool_Athena_MissileBattery_Homing
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_InTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortDecoHelper*             K2Node_Event_FortDecoHelper                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AB_PlacementPreview_MissleBattery_Homing_C*K2Node_DynamicCast_AsB_Placement_Preview_Missle_Battery_Homing   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAbilityDecoTool_Athena_MissileBattery_Homing_C::ExecuteUbergraph_AbilityDecoTool_Athena_MissileBattery_Homing(int32 EntryPoint, float K2Node_CustomEvent_InTime, class AFortDecoHelper* K2Node_Event_FortDecoHelper, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AB_PlacementPreview_MissleBattery_Homing_C* K2Node_DynamicCast_AsB_Placement_Preview_Missle_Battery_Homing, bool K2Node_DynamicCast_bSuccess1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityDecoTool_Athena_MissileBattery_Homing_C", "ExecuteUbergraph_AbilityDecoTool_Athena_MissileBattery_Homing");

	Params::AAbilityDecoTool_Athena_MissileBattery_Homing_C_ExecuteUbergraph_AbilityDecoTool_Athena_MissileBattery_Homing_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_InTime = K2Node_CustomEvent_InTime;
	Parms.K2Node_Event_FortDecoHelper = K2Node_Event_FortDecoHelper;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsB_Placement_Preview_Missle_Battery_Homing = K2Node_DynamicCast_AsB_Placement_Preview_Missle_Battery_Homing;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;

	UObject::ProcessEvent(Func, &Parms);

}

}


