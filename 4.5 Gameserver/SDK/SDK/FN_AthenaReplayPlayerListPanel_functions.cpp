#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaReplayPlayerListPanel.AthenaReplayPlayerListPanel_C
// (None)

class UClass* UAthenaReplayPlayerListPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaReplayPlayerListPanel_C");

	return Clss;
}


// AthenaReplayPlayerListPanel_C AthenaReplayPlayerListPanel.Default__AthenaReplayPlayerListPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaReplayPlayerListPanel_C* UAthenaReplayPlayerListPanel_C::GetDefaultObj()
{
	static class UAthenaReplayPlayerListPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaReplayPlayerListPanel_C*>(UAthenaReplayPlayerListPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaReplayPlayerListPanel.AthenaReplayPlayerListPanel_C.OnShowPlayerProfileInput
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerSpectating*K2Node_DynamicCast_AsFort_Player_Controller_Spectating           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaReplayPlayerListPanel_C::OnShowPlayerProfileInput(bool* bPassThrough, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerSpectating* K2Node_DynamicCast_AsFort_Player_Controller_Spectating, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaReplayPlayerListPanel_C", "OnShowPlayerProfileInput");

	Params::UAthenaReplayPlayerListPanel_C_OnShowPlayerProfileInput_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Spectating = K2Node_DynamicCast_AsFort_Player_Controller_Spectating;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function AthenaReplayPlayerListPanel.AthenaReplayPlayerListPanel_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaReplayPlayerListPanel_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaReplayPlayerListPanel_C", "BndEvt__CloseButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature");

	Params::UAthenaReplayPlayerListPanel_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayPlayerListPanel.AthenaReplayPlayerListPanel_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaReplayPlayerListPanel_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaReplayPlayerListPanel_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaReplayPlayerListPanel.AthenaReplayPlayerListPanel_C.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaReplayPlayerListPanel_C::OnInputModeChanged(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaReplayPlayerListPanel_C", "OnInputModeChanged");

	Params::UAthenaReplayPlayerListPanel_C_OnInputModeChanged_Params Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayPlayerListPanel.AthenaReplayPlayerListPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaReplayPlayerListPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaReplayPlayerListPanel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaReplayPlayerListPanel.AthenaReplayPlayerListPanel_C.ExecuteUbergraph_AthenaReplayPlayerListPanel
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortReplayContext*          CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bUsingGamepad                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaReplayPlayerListPanel_C::ExecuteUbergraph_AthenaReplayPlayerListPanel(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButton* K2Node_ComponentBoundEvent_Button, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UFortReplayContext* CallFunc_GetContext_ReturnValue, bool K2Node_Event_bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaReplayPlayerListPanel_C", "ExecuteUbergraph_AthenaReplayPlayerListPanel");

	Params::UAthenaReplayPlayerListPanel_C_ExecuteUbergraph_AthenaReplayPlayerListPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_Event_bUsingGamepad = K2Node_Event_bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}

}


