#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HUDLayoutToolButtonLayer.HUDLayoutToolButtonLayer_C
// (None)

class UClass* UHUDLayoutToolButtonLayer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUDLayoutToolButtonLayer_C");

	return Clss;
}


// HUDLayoutToolButtonLayer_C HUDLayoutToolButtonLayer.Default__HUDLayoutToolButtonLayer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUDLayoutToolButtonLayer_C* UHUDLayoutToolButtonLayer_C::GetDefaultObj()
{
	static class UHUDLayoutToolButtonLayer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUDLayoutToolButtonLayer_C*>(UHUDLayoutToolButtonLayer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HUDLayoutToolButtonLayer.HUDLayoutToolButtonLayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHUDLayoutToolButtonLayer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolButtonLayer_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUDLayoutToolButtonLayer.HUDLayoutToolButtonLayer_C.OnBuildMode
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bBuildMode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUDLayoutToolButtonLayer_C::OnBuildMode(bool bBuildMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolButtonLayer_C", "OnBuildMode");

	Params::UHUDLayoutToolButtonLayer_C_OnBuildMode_Params Parms{};

	Parms.bBuildMode = bBuildMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolButtonLayer.HUDLayoutToolButtonLayer_C.Opened Tool
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHUDLayoutToolButtonLayer_C::Opened_Tool()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolButtonLayer_C", "Opened Tool");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUDLayoutToolButtonLayer.HUDLayoutToolButtonLayer_C.BndEvt__Extra Buttons_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UHUDLayoutToolButtonLayer_C::BndEvt__Extra_Buttons_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolButtonLayer_C", "BndEvt__Extra Buttons_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUDLayoutToolButtonLayer.HUDLayoutToolButtonLayer_C.ExecuteUbergraph_HUDLayoutToolButtonLayer
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable1                                              (None)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HasSavedLayout_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bBuildMode                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGameUserSettings*       CallFunc_GetFortGameUserSettings_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// bool                               CallFunc_GetHasSeenPanningTip_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGameUserSettings*       CallFunc_GetFortGameUserSettings_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutToolButtonLayer_C::ExecuteUbergraph_HUDLayoutToolButtonLayer(int32 EntryPoint, class FText Temp_text_Variable, class FText Temp_text_Variable1, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasSavedLayout_ReturnValue, bool K2Node_Event_bBuildMode, bool Temp_bool_Variable, class UFortGameUserSettings* CallFunc_GetFortGameUserSettings_ReturnValue, class FText K2Node_Select_Default, bool CallFunc_GetHasSeenPanningTip_ReturnValue, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue1, class UFortGameUserSettings* CallFunc_GetFortGameUserSettings_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolButtonLayer_C", "ExecuteUbergraph_HUDLayoutToolButtonLayer");

	Params::UHUDLayoutToolButtonLayer_C_ExecuteUbergraph_HUDLayoutToolButtonLayer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_HasSavedLayout_ReturnValue = CallFunc_HasSavedLayout_ReturnValue;
	Parms.K2Node_Event_bBuildMode = K2Node_Event_bBuildMode;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetFortGameUserSettings_ReturnValue = CallFunc_GetFortGameUserSettings_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetHasSeenPanningTip_ReturnValue = CallFunc_GetHasSeenPanningTip_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetFortGameUserSettings_ReturnValue1 = CallFunc_GetFortGameUserSettings_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}


