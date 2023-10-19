#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FortReplayCameraOption.FortReplayCameraOption_C
// (None)

class UClass* UFortReplayCameraOption_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortReplayCameraOption_C");

	return Clss;
}


// FortReplayCameraOption_C FortReplayCameraOption.Default__FortReplayCameraOption_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFortReplayCameraOption_C* UFortReplayCameraOption_C::GetDefaultObj()
{
	static class UFortReplayCameraOption_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortReplayCameraOption_C*>(UFortReplayCameraOption_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FortReplayCameraOption.FortReplayCameraOption_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortReplayCameraOption_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortReplayCameraOption_C", "BP_OnClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FortReplayCameraOption.FortReplayCameraOption_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFortReplayCameraOption_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortReplayCameraOption_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FortReplayCameraOption.FortReplayCameraOption_C.ExecuteUbergraph_FortReplayCameraOption
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerSpectating*K2Node_DynamicCast_AsFort_Player_Controller_Spectating           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortReplayContext*          CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCameraNameFromType_ReturnValue                       (None)

void UFortReplayCameraOption_C::ExecuteUbergraph_FortReplayCameraOption(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFortPlayerControllerSpectating* K2Node_DynamicCast_AsFort_Player_Controller_Spectating, bool K2Node_DynamicCast_bSuccess, class UFortReplayContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetCameraNameFromType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortReplayCameraOption_C", "ExecuteUbergraph_FortReplayCameraOption");

	Params::UFortReplayCameraOption_C_ExecuteUbergraph_FortReplayCameraOption_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Spectating = K2Node_DynamicCast_AsFort_Player_Controller_Spectating;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCameraNameFromType_ReturnValue = CallFunc_GetCameraNameFromType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


