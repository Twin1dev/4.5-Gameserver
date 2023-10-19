#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BacchusControlsHelp.BacchusControlsHelp_C
// (None)

class UClass* UBacchusControlsHelp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BacchusControlsHelp_C");

	return Clss;
}


// BacchusControlsHelp_C BacchusControlsHelp.Default__BacchusControlsHelp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBacchusControlsHelp_C* UBacchusControlsHelp_C::GetDefaultObj()
{
	static class UBacchusControlsHelp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBacchusControlsHelp_C*>(UBacchusControlsHelp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BacchusControlsHelp.BacchusControlsHelp_C.Handle Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBacchusControlsHelp_C::Handle_Close(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BacchusControlsHelp_C", "Handle Close");

	Params::UBacchusControlsHelp_C_Handle_Close_Params Parms{};

	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BacchusControlsHelp.BacchusControlsHelp_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBacchusControlsHelp_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BacchusControlsHelp_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BacchusControlsHelp.BacchusControlsHelp_C.BndEvt__ButtonCombat_K2Node_ComponentBoundEvent_113_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBacchusControlsHelp_C::BndEvt__ButtonCombat_K2Node_ComponentBoundEvent_113_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BacchusControlsHelp_C", "BndEvt__ButtonCombat_K2Node_ComponentBoundEvent_113_CommonButtonClicked__DelegateSignature");

	Params::UBacchusControlsHelp_C_BndEvt__ButtonCombat_K2Node_ComponentBoundEvent_113_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BacchusControlsHelp.BacchusControlsHelp_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent_29_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBacchusControlsHelp_C::BndEvt__PanelButton_K2Node_ComponentBoundEvent_29_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BacchusControlsHelp_C", "BndEvt__PanelButton_K2Node_ComponentBoundEvent_29_CommonButtonClicked__DelegateSignature");

	Params::UBacchusControlsHelp_C_BndEvt__PanelButton_K2Node_ComponentBoundEvent_29_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BacchusControlsHelp.BacchusControlsHelp_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBacchusControlsHelp_C::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BacchusControlsHelp_C", "Update");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BacchusControlsHelp.BacchusControlsHelp_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBacchusControlsHelp_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BacchusControlsHelp_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BacchusControlsHelp.BacchusControlsHelp_C.ExecuteUbergraph_BacchusControlsHelp
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UseTapToShoot_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue1                            (None)
// class FText                        K2Node_Select1_Default                                           (ConstParm)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBacchusControlsHelp_C::ExecuteUbergraph_BacchusControlsHelp(int32 EntryPoint, bool CallFunc_IsMobileGame_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_UseTapToShoot_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1, class FText K2Node_Select1_Default, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BacchusControlsHelp_C", "ExecuteUbergraph_BacchusControlsHelp");

	Params::UBacchusControlsHelp_C_ExecuteUbergraph_BacchusControlsHelp_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_UseTapToShoot_ReturnValue = CallFunc_UseTapToShoot_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue1 = CallFunc_MakeLiteralText_ReturnValue1;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}


