#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HUDLayoutToolPropertyWidget.HUDLayoutToolPropertyWidget_C
// (None)

class UClass* UHUDLayoutToolPropertyWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUDLayoutToolPropertyWidget_C");

	return Clss;
}


// HUDLayoutToolPropertyWidget_C HUDLayoutToolPropertyWidget.Default__HUDLayoutToolPropertyWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUDLayoutToolPropertyWidget_C* UHUDLayoutToolPropertyWidget_C::GetDefaultObj()
{
	static class UHUDLayoutToolPropertyWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUDLayoutToolPropertyWidget_C*>(UHUDLayoutToolPropertyWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HUDLayoutToolPropertyWidget.HUDLayoutToolPropertyWidget_C.SetPropertyType
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ELayoutPropertyType     NewPropertyType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutToolPropertyWidget_C::SetPropertyType(enum class ELayoutPropertyType NewPropertyType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolPropertyWidget_C", "SetPropertyType");

	Params::UHUDLayoutToolPropertyWidget_C_SetPropertyType_Params Parms{};

	Parms.NewPropertyType = NewPropertyType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolPropertyWidget.HUDLayoutToolPropertyWidget_C.SetBoolValue
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bNewValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUDLayoutToolPropertyWidget_C::SetBoolValue(bool bNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolPropertyWidget_C", "SetBoolValue");

	Params::UHUDLayoutToolPropertyWidget_C_SetBoolValue_Params Parms{};

	Parms.bNewValue = bNewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolPropertyWidget.HUDLayoutToolPropertyWidget_C.BndEvt__Button_BoolToggle_K2Node_ComponentBoundEvent_139_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UHUDLayoutToolPropertyWidget_C::BndEvt__Button_BoolToggle_K2Node_ComponentBoundEvent_139_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolPropertyWidget_C", "BndEvt__Button_BoolToggle_K2Node_ComponentBoundEvent_139_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUDLayoutToolPropertyWidget.HUDLayoutToolPropertyWidget_C.ExecuteUbergraph_HUDLayoutToolPropertyWidget
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentValueAsBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ELayoutPropertyType     Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ELayoutPropertyType     K2Node_Event_NewPropertyType                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bNewValue                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select1_Default                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutToolPropertyWidget_C::ExecuteUbergraph_HUDLayoutToolPropertyWidget(int32 EntryPoint, bool CallFunc_GetCurrentValueAsBool_ReturnValue, enum class ELayoutPropertyType Temp_byte_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable, enum class ELayoutPropertyType K2Node_Event_NewPropertyType, bool K2Node_Event_bNewValue, class UWidget* K2Node_Select_Default, class UWidget* K2Node_Select1_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolPropertyWidget_C", "ExecuteUbergraph_HUDLayoutToolPropertyWidget");

	Params::UHUDLayoutToolPropertyWidget_C_ExecuteUbergraph_HUDLayoutToolPropertyWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCurrentValueAsBool_ReturnValue = CallFunc_GetCurrentValueAsBool_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_NewPropertyType = K2Node_Event_NewPropertyType;
	Parms.K2Node_Event_bNewValue = K2Node_Event_bNewValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


