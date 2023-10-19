#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C
// (None)

class UClass* UHUDLayoutToolPropertyPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUDLayoutToolPropertyPanel_C");

	return Clss;
}


// HUDLayoutToolPropertyPanel_C HUDLayoutToolPropertyPanel.Default__HUDLayoutToolPropertyPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUDLayoutToolPropertyPanel_C* UHUDLayoutToolPropertyPanel_C::GetDefaultObj()
{
	static class UHUDLayoutToolPropertyPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUDLayoutToolPropertyPanel_C*>(UHUDLayoutToolPropertyPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.Create Button Group
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonGroup*          CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutToolPropertyPanel_C::Create_Button_Group(class UCommonButtonGroup* CallFunc_SpawnObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolPropertyPanel_C", "Create Button Group");

	Params::UHUDLayoutToolPropertyPanel_C_Create_Button_Group_Params Parms{};

	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.DialogResult_AF5C9445415C4E1B90396695176ABE9D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ResultName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutToolPropertyPanel_C::DialogResult_AF5C9445415C4E1B90396695176ABE9D(enum class EFortDialogResult Result, class FName ResultName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolPropertyPanel_C", "DialogResult_AF5C9445415C4E1B90396695176ABE9D");

	Params::UHUDLayoutToolPropertyPanel_C_DialogResult_AF5C9445415C4E1B90396695176ABE9D_Params Parms{};

	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.DialogResult_F2CDB04A4E10D4703C778A8755E63C4E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ResultName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutToolPropertyPanel_C::DialogResult_F2CDB04A4E10D4703C778A8755E63C4E(enum class EFortDialogResult Result, class FName ResultName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolPropertyPanel_C", "DialogResult_F2CDB04A4E10D4703C778A8755E63C4E");

	Params::UHUDLayoutToolPropertyPanel_C_DialogResult_F2CDB04A4E10D4703C778A8755E63C4E_Params Parms{};

	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHUDLayoutToolPropertyPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolPropertyPanel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.BndEvt__ToggleCombatMode_K2Node_ComponentBoundEvent_84_CommonSelectedStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUDLayoutToolPropertyPanel_C::BndEvt__ToggleCombatMode_K2Node_ComponentBoundEvent_84_CommonSelectedStateChanged__DelegateSignature(class UCommonButton* Button, bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolPropertyPanel_C", "BndEvt__ToggleCombatMode_K2Node_ComponentBoundEvent_84_CommonSelectedStateChanged__DelegateSignature");

	Params::UHUDLayoutToolPropertyPanel_C_BndEvt__ToggleCombatMode_K2Node_ComponentBoundEvent_84_CommonSelectedStateChanged__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.BndEvt__ToggleBuildMode_K2Node_ComponentBoundEvent_97_CommonSelectedStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUDLayoutToolPropertyPanel_C::BndEvt__ToggleBuildMode_K2Node_ComponentBoundEvent_97_CommonSelectedStateChanged__DelegateSignature(class UCommonButton* Button, bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolPropertyPanel_C", "BndEvt__ToggleBuildMode_K2Node_ComponentBoundEvent_97_CommonSelectedStateChanged__DelegateSignature");

	Params::UHUDLayoutToolPropertyPanel_C_BndEvt__ToggleBuildMode_K2Node_ComponentBoundEvent_97_CommonSelectedStateChanged__DelegateSignature_Params Parms{};

	Parms.Button = Button;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_281_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutToolPropertyPanel_C::BndEvt__Button_Exit_K2Node_ComponentBoundEvent_281_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolPropertyPanel_C", "BndEvt__Button_Exit_K2Node_ComponentBoundEvent_281_CommonButtonClicked__DelegateSignature");

	Params::UHUDLayoutToolPropertyPanel_C_BndEvt__Button_Exit_K2Node_ComponentBoundEvent_281_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.BndEvt__Button_ResetAll_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutToolPropertyPanel_C::BndEvt__Button_ResetAll_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolPropertyPanel_C", "BndEvt__Button_ResetAll_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature");

	Params::UHUDLayoutToolPropertyPanel_C_BndEvt__Button_ResetAll_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.BndEvt__ToggleCombatMode_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutToolPropertyPanel_C::BndEvt__ToggleCombatMode_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolPropertyPanel_C", "BndEvt__ToggleCombatMode_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UHUDLayoutToolPropertyPanel_C_BndEvt__ToggleCombatMode_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.BndEvt__ToggleBuildMode_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutToolPropertyPanel_C::BndEvt__ToggleBuildMode_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolPropertyPanel_C", "BndEvt__ToggleBuildMode_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UHUDLayoutToolPropertyPanel_C_BndEvt__ToggleBuildMode_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.BndEvt__Button_FireMode_K2Node_ComponentBoundEvent_64_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutToolPropertyPanel_C::BndEvt__Button_FireMode_K2Node_ComponentBoundEvent_64_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolPropertyPanel_C", "BndEvt__Button_FireMode_K2Node_ComponentBoundEvent_64_CommonButtonClicked__DelegateSignature");

	Params::UHUDLayoutToolPropertyPanel_C_BndEvt__Button_FireMode_K2Node_ComponentBoundEvent_64_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.On Open
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHUDLayoutToolPropertyPanel_C::On_Open()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolPropertyPanel_C", "On Open");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.OnWidgetSelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UHUDLayoutToolPlacementWidget*NewlySelectedWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutToolPropertyPanel_C::OnWidgetSelected(class UHUDLayoutToolPlacementWidget* NewlySelectedWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolPropertyPanel_C", "OnWidgetSelected");

	Params::UHUDLayoutToolPropertyPanel_C_OnWidgetSelected_Params Parms{};

	Parms.NewlySelectedWidget = NewlySelectedWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDLayoutToolPropertyPanel.HUDLayoutToolPropertyPanel_C.ExecuteUbergraph_HUDLayoutToolPropertyPanel
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLayoutDirty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable1                                              (None)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasSelectedWidget_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// bool                               CallFunc_ShouldShowSelectedWidgetProperties_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ResultName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button6                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Selected1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button5                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Selected                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button4                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button3                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       K2Node_CustomEvent_Result1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ResultName1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasSavedLayout_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UHUDLayoutToolPlacementWidget*K2Node_Event_NewlySelectedWidget                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select2_Default                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue11                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPropertyMenuState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasSelectedWidget_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue13                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutToolPropertyPanel_C::ExecuteUbergraph_HUDLayoutToolPropertyPanel(int32 EntryPoint, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsLayoutDirty_ReturnValue, class FText Temp_text_Variable, class FText Temp_text_Variable1, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_HasSelectedWidget_ReturnValue, bool Temp_bool_Variable1, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue2, class FText K2Node_Select_Default, bool CallFunc_ShouldShowSelectedWidgetProperties_ReturnValue, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue3, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue4, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable2, class UCommonButton* K2Node_ComponentBoundEvent_Button6, bool K2Node_ComponentBoundEvent_Selected1, class UCommonButton* K2Node_ComponentBoundEvent_Button5, bool K2Node_ComponentBoundEvent_Selected, class UCommonButton* K2Node_ComponentBoundEvent_Button4, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue1, enum class EFortDialogResult Temp_byte_Variable3, bool K2Node_SwitchEnum1_CmpSuccess, bool CallFunc_IsValid_ReturnValue1, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, class FName Temp_name_Variable1, enum class EFortDialogResult K2Node_CustomEvent_Result1, class FName K2Node_CustomEvent_ResultName1, enum class ESlateVisibility Temp_byte_Variable4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue5, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue6, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue7, bool CallFunc_HasSavedLayout_ReturnValue, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue8, enum class ESlateVisibility Temp_byte_Variable5, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue9, bool Temp_bool_Variable3, enum class ESlateVisibility K2Node_Select1_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UHUDLayoutToolPlacementWidget* K2Node_Event_NewlySelectedWidget, class UWidget* K2Node_Select2_Default, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue10, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue11, bool CallFunc_GetPropertyMenuState_ReturnValue, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue12, bool CallFunc_HasSelectedWidget_ReturnValue1, enum class ESlateVisibility Temp_byte_Variable6, enum class ESlateVisibility Temp_byte_Variable7, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue13, bool Temp_bool_Variable4, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, enum class ESlateVisibility K2Node_Select3_Default, enum class ESlateVisibility K2Node_Select4_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDLayoutToolPropertyPanel_C", "ExecuteUbergraph_HUDLayoutToolPropertyPanel");

	Params::UHUDLayoutToolPropertyPanel_C_ExecuteUbergraph_HUDLayoutToolPropertyPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsLayoutDirty_ReturnValue = CallFunc_IsLayoutDirty_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_HasSelectedWidget_ReturnValue = CallFunc_HasSelectedWidget_ReturnValue;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_ShouldShowSelectedWidgetProperties_ReturnValue = CallFunc_ShouldShowSelectedWidgetProperties_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_ResultName = K2Node_CustomEvent_ResultName;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue = CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_ComponentBoundEvent_Button6 = K2Node_ComponentBoundEvent_Button6;
	Parms.K2Node_ComponentBoundEvent_Selected1 = K2Node_ComponentBoundEvent_Selected1;
	Parms.K2Node_ComponentBoundEvent_Button5 = K2Node_ComponentBoundEvent_Button5;
	Parms.K2Node_ComponentBoundEvent_Selected = K2Node_ComponentBoundEvent_Selected;
	Parms.K2Node_ComponentBoundEvent_Button4 = K2Node_ComponentBoundEvent_Button4;
	Parms.K2Node_ComponentBoundEvent_Button3 = K2Node_ComponentBoundEvent_Button3;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue1 = CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue1;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.Temp_name_Variable1 = Temp_name_Variable1;
	Parms.K2Node_CustomEvent_Result1 = K2Node_CustomEvent_Result1;
	Parms.K2Node_CustomEvent_ResultName1 = K2Node_CustomEvent_ResultName1;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetContext_ReturnValue5 = CallFunc_GetContext_ReturnValue5;
	Parms.CallFunc_GetContext_ReturnValue6 = CallFunc_GetContext_ReturnValue6;
	Parms.CallFunc_GetContext_ReturnValue7 = CallFunc_GetContext_ReturnValue7;
	Parms.CallFunc_HasSavedLayout_ReturnValue = CallFunc_HasSavedLayout_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue8 = CallFunc_GetContext_ReturnValue8;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.CallFunc_GetContext_ReturnValue9 = CallFunc_GetContext_ReturnValue9;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_Event_NewlySelectedWidget = K2Node_Event_NewlySelectedWidget;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_GetContext_ReturnValue10 = CallFunc_GetContext_ReturnValue10;
	Parms.CallFunc_GetContext_ReturnValue11 = CallFunc_GetContext_ReturnValue11;
	Parms.CallFunc_GetPropertyMenuState_ReturnValue = CallFunc_GetPropertyMenuState_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.CallFunc_HasSelectedWidget_ReturnValue1 = CallFunc_HasSelectedWidget_ReturnValue1;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.Temp_byte_Variable7 = Temp_byte_Variable7;
	Parms.CallFunc_GetContext_ReturnValue13 = CallFunc_GetContext_ReturnValue13;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


