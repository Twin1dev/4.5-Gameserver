#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HUDLayoutToolFireModeButton.HUDLayoutToolFireModeButton_C
// (None)

class UClass* UHUDLayoutToolFireModeButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUDLayoutToolFireModeButton_C");

	return Clss;
}


// HUDLayoutToolFireModeButton_C HUDLayoutToolFireModeButton.Default__HUDLayoutToolFireModeButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUDLayoutToolFireModeButton_C* UHUDLayoutToolFireModeButton_C::GetDefaultObj()
{
	static class UHUDLayoutToolFireModeButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUDLayoutToolFireModeButton_C*>(UHUDLayoutToolFireModeButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HUDLayoutToolFireModeButton.HUDLayoutToolFireModeButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUDLayoutToolFireModeButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolFireModeButton_C", "PreConstruct");

	Params::UHUDLayoutToolFireModeButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolFireModeButton.HUDLayoutToolFireModeButton_C.BndEvt__BigAssButton_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UHUDLayoutToolFireModeButton_C::BndEvt__BigAssButton_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolFireModeButton_C", "BndEvt__BigAssButton_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUDLayoutToolFireModeButton.HUDLayoutToolFireModeButton_C.ExecuteUbergraph_HUDLayoutToolFireModeButton
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUDLayoutToolFireModeButton_C::ExecuteUbergraph_HUDLayoutToolFireModeButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolFireModeButton_C", "ExecuteUbergraph_HUDLayoutToolFireModeButton");

	Params::UHUDLayoutToolFireModeButton_C_ExecuteUbergraph_HUDLayoutToolFireModeButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


