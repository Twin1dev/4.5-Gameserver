#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass EulaTab.EulaTab_C
// (None)

class UClass* UEulaTab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EulaTab_C");

	return Clss;
}


// EulaTab_C EulaTab.Default__EulaTab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEulaTab_C* UEulaTab_C::GetDefaultObj()
{
	static class UEulaTab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEulaTab_C*>(UEulaTab_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EulaTab.EulaTab_C.Activate Scroll Box
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEulaTab_C::Activate_Scroll_Box(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EulaTab_C", "Activate Scroll Box");

	Params::UEulaTab_C_Activate_Scroll_Box_Params Parms{};

	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EulaTab.EulaTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UEulaTab_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EulaTab_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EulaTab.EulaTab_C.OnEulaDownloadComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccessful                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        EULAText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UEulaTab_C::OnEulaDownloadComplete(bool bSuccessful, class FText EULAText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EulaTab_C", "OnEulaDownloadComplete");

	Params::UEulaTab_C_OnEulaDownloadComplete_Params Parms{};

	Parms.bSuccessful = bSuccessful;
	Parms.EULAText = EULAText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EulaTab.EulaTab_C.ExecuteUbergraph_EulaTab
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bSuccessful                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_EULAText                                      (None)
// class FText                        K2Node_Select_Default                                            (None)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FText                        CallFunc_GetEULAText_ReturnValue                                 (None)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileApp_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasEULADownloaded_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEulaTab_C::ExecuteUbergraph_EulaTab(int32 EntryPoint, bool Temp_bool_Variable, bool K2Node_CustomEvent_bSuccessful, class FText K2Node_CustomEvent_EULAText, class FText K2Node_Select_Default, class UFortMcpContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetEULAText_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsMobileApp_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_HasEULADownloaded_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EulaTab_C", "ExecuteUbergraph_EulaTab");

	Params::UEulaTab_C_ExecuteUbergraph_EulaTab_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CustomEvent_bSuccessful = K2Node_CustomEvent_bSuccessful;
	Parms.K2Node_CustomEvent_EULAText = K2Node_CustomEvent_EULAText;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetEULAText_ReturnValue = CallFunc_GetEULAText_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_IsMobileApp_ReturnValue = CallFunc_IsMobileApp_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_HasEULADownloaded_ReturnValue = CallFunc_HasEULADownloaded_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


