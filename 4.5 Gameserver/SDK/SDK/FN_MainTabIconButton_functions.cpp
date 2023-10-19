#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MainTabIconButton.MainTabIconButton_C
// (None)

class UClass* UMainTabIconButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainTabIconButton_C");

	return Clss;
}


// MainTabIconButton_C MainTabIconButton.Default__MainTabIconButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMainTabIconButton_C* UMainTabIconButton_C::GetDefaultObj()
{
	static class UMainTabIconButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMainTabIconButton_C*>(UMainTabIconButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MainTabIconButton.MainTabIconButton_C.StopTabCallout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      CallFunc_GetCurrentTextStyleClass_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetCurrentTextStyleClass_ReturnValue1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainTabIconButton_C::StopTabCallout(class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue, class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabIconButton_C", "StopTabCallout");

	Params::UMainTabIconButton_C_StopTabCallout_Params Parms{};

	Parms.CallFunc_GetCurrentTextStyleClass_ReturnValue = CallFunc_GetCurrentTextStyleClass_ReturnValue;
	Parms.CallFunc_GetCurrentTextStyleClass_ReturnValue1 = CallFunc_GetCurrentTextStyleClass_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabIconButton.MainTabIconButton_C.TabAdded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainTabIconButton_C::TabAdded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabIconButton_C", "TabAdded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainTabIconButton.MainTabIconButton_C.TabDialogClosed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainTabIconButton_C::TabDialogClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabIconButton_C", "TabDialogClosed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainTabIconButton.MainTabIconButton_C.TabAnimateInFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainTabIconButton_C::TabAnimateInFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabIconButton_C", "TabAnimateInFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainTabIconButton.MainTabIconButton_C.SetTutorialNameID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        InTutorialNameID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainTabIconButton_C::SetTutorialNameID(class FName InTutorialNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabIconButton_C", "SetTutorialNameID");

	Params::UMainTabIconButton_C_SetTutorialNameID_Params Parms{};

	Parms.InTutorialNameID = InTutorialNameID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabIconButton.MainTabIconButton_C.Update Bang State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bBangEnabled                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortUIFeature          UIFeature                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        UIFeatureRevealText                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainTabIconButton_C::Update_Bang_State(bool bBangEnabled, enum class EFortUIFeature UIFeature, class FText UIFeatureRevealText, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabIconButton_C", "Update Bang State");

	Params::UMainTabIconButton_C_Update_Bang_State_Params Parms{};

	Parms.bBangEnabled = bBangEnabled;
	Parms.UIFeature = UIFeature;
	Parms.UIFeatureRevealText = UIFeatureRevealText;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabIconButton.MainTabIconButton_C.SetTutorialBorderStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      BorderStyle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainTabIconButton_C::SetTutorialBorderStyle(class UClass* BorderStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabIconButton_C", "SetTutorialBorderStyle");

	Params::UMainTabIconButton_C_SetTutorialBorderStyle_Params Parms{};

	Parms.BorderStyle = BorderStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabIconButton.MainTabIconButton_C.ShowText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainTabIconButton_C::ShowText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabIconButton_C", "ShowText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainTabIconButton.MainTabIconButton_C.Set Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 IconBrush                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UMainTabIconButton_C::Set_Icon(const struct FSlateBrush& IconBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabIconButton_C", "Set Icon");

	Params::UMainTabIconButton_C_Set_Icon_Params Parms{};

	Parms.IconBrush = IconBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabIconButton.MainTabIconButton_C.Set Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ButtonText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_Create_Basic_Tooltip_Output                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainTabIconButton_C::Set_Text(class FText ButtonText, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabIconButton_C", "Set Text");

	Params::UMainTabIconButton_C_Set_Text_Params Parms{};

	Parms.ButtonText = ButtonText;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Create_Basic_Tooltip_Output = CallFunc_Create_Basic_Tooltip_Output;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabIconButton.MainTabIconButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainTabIconButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabIconButton_C", "PreConstruct");

	Params::UMainTabIconButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabIconButton.MainTabIconButton_C.SetTabLabelInfo
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortTabButtonLabelInfo     TabLabelInfo                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMainTabIconButton_C::SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabIconButton_C", "SetTabLabelInfo");

	Params::UMainTabIconButton_C_SetTabLabelInfo_Params Parms{};

	Parms.TabLabelInfo = TabLabelInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainTabIconButton.MainTabIconButton_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMainTabIconButton_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabIconButton_C", "BP_OnSelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainTabIconButton.MainTabIconButton_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMainTabIconButton_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabIconButton_C", "BP_OnDeselected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainTabIconButton.MainTabIconButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMainTabIconButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabIconButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainTabIconButton.MainTabIconButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMainTabIconButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabIconButton_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainTabIconButton.MainTabIconButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMainTabIconButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabIconButton_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainTabIconButton.MainTabIconButton_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMainTabIconButton_C::OnCurrentTextStyleChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabIconButton_C", "OnCurrentTextStyleChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainTabIconButton.MainTabIconButton_C.HandleTabAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainTabIconButton_C::HandleTabAdded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabIconButton_C", "HandleTabAdded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainTabIconButton.MainTabIconButton_C.HandleTabAnimateInFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainTabIconButton_C::HandleTabAnimateInFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabIconButton_C", "HandleTabAnimateInFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainTabIconButton.MainTabIconButton_C.HandleTabDialogCLosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainTabIconButton_C::HandleTabDialogCLosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabIconButton_C", "HandleTabDialogCLosed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainTabIconButton.MainTabIconButton_C.Handle StopTabCallout
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainTabIconButton_C::Handle_StopTabCallout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabIconButton_C", "Handle StopTabCallout");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainTabIconButton.MainTabIconButton_C.ExecuteUbergraph_MainTabIconButton
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class UClass*                      CallFunc_GetCurrentTextStyleClass_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UClass*                      CallFunc_GetCurrentTextStyleClass_ReturnValue1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortTabButtonLabelInfo     K2Node_Event_TabLabelInfo                                        (ConstParm)
// bool                               CallFunc_GetSelected_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSelected_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainTabIconButton_C::ExecuteUbergraph_MainTabIconButton(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue1, bool K2Node_Event_IsDesignTime, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FFortTabButtonLabelInfo& K2Node_Event_TabLabelInfo, bool CallFunc_GetSelected_ReturnValue, bool CallFunc_GetSelected_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainTabIconButton_C", "ExecuteUbergraph_MainTabIconButton");

	Params::UMainTabIconButton_C_ExecuteUbergraph_MainTabIconButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetCurrentTextStyleClass_ReturnValue = CallFunc_GetCurrentTextStyleClass_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetCurrentTextStyleClass_ReturnValue1 = CallFunc_GetCurrentTextStyleClass_ReturnValue1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Event_TabLabelInfo = K2Node_Event_TabLabelInfo;
	Parms.CallFunc_GetSelected_ReturnValue = CallFunc_GetSelected_ReturnValue;
	Parms.CallFunc_GetSelected_ReturnValue1 = CallFunc_GetSelected_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}


