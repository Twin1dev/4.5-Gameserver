#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass IconTabButtonReplay.IconTabButtonReplay_C
// (None)

class UClass* UIconTabButtonReplay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IconTabButtonReplay_C");

	return Clss;
}


// IconTabButtonReplay_C IconTabButtonReplay.Default__IconTabButtonReplay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIconTabButtonReplay_C* UIconTabButtonReplay_C::GetDefaultObj()
{
	static class UIconTabButtonReplay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIconTabButtonReplay_C*>(UIconTabButtonReplay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IconTabButtonReplay.IconTabButtonReplay_C.SetChangeIconColorWhenSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ChangeColorWhenSelected                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 SelectedColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateColor                 UnselectedColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSelected_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_Select_Default                                            (None)

void UIconTabButtonReplay_C::SetChangeIconColorWhenSelected(bool ChangeColorWhenSelected, const struct FSlateColor& SelectedColor, const struct FSlateColor& UnselectedColor, bool Temp_bool_Variable, bool CallFunc_GetSelected_ReturnValue, const struct FSlateColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IconTabButtonReplay_C", "SetChangeIconColorWhenSelected");

	Params::UIconTabButtonReplay_C_SetChangeIconColorWhenSelected_Params Parms{};

	Parms.ChangeColorWhenSelected = ChangeColorWhenSelected;
	Parms.SelectedColor = SelectedColor;
	Parms.UnselectedColor = UnselectedColor;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetSelected_ReturnValue = CallFunc_GetSelected_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IconTabButtonReplay.IconTabButtonReplay_C.Update Bang State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bBangEnabled                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UIconTabButtonReplay_C::Update_Bang_State(bool bBangEnabled, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IconTabButtonReplay_C", "Update Bang State");

	Params::UIconTabButtonReplay_C_Update_Bang_State_Params Parms{};

	Parms.bBangEnabled = bBangEnabled;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IconTabButtonReplay.IconTabButtonReplay_C.SetTutorialBorderStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      BorderStyle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIconTabButtonReplay_C::SetTutorialBorderStyle(class UClass* BorderStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IconTabButtonReplay_C", "SetTutorialBorderStyle");

	Params::UIconTabButtonReplay_C_SetTutorialBorderStyle_Params Parms{};

	Parms.BorderStyle = BorderStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IconTabButtonReplay.IconTabButtonReplay_C.ShowText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UIconTabButtonReplay_C::ShowText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IconTabButtonReplay_C", "ShowText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IconTabButtonReplay.IconTabButtonReplay_C.Set Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 IconBrush                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UIconTabButtonReplay_C::Set_Icon(const struct FSlateBrush& IconBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IconTabButtonReplay_C", "Set Icon");

	Params::UIconTabButtonReplay_C_Set_Icon_Params Parms{};

	Parms.IconBrush = IconBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IconTabButtonReplay.IconTabButtonReplay_C.Set Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ButtonText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_Create_Basic_Tooltip_Output                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIconTabButtonReplay_C::Set_Text(class FText ButtonText, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IconTabButtonReplay_C", "Set Text");

	Params::UIconTabButtonReplay_C_Set_Text_Params Parms{};

	Parms.ButtonText = ButtonText;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Create_Basic_Tooltip_Output = CallFunc_Create_Basic_Tooltip_Output;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IconTabButtonReplay.IconTabButtonReplay_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIconTabButtonReplay_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IconTabButtonReplay_C", "PreConstruct");

	Params::UIconTabButtonReplay_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IconTabButtonReplay.IconTabButtonReplay_C.SetTabLabelInfo
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortTabButtonLabelInfo     TabLabelInfo                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UIconTabButtonReplay_C::SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IconTabButtonReplay_C", "SetTabLabelInfo");

	Params::UIconTabButtonReplay_C_SetTabLabelInfo_Params Parms{};

	Parms.TabLabelInfo = TabLabelInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IconTabButtonReplay.IconTabButtonReplay_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UIconTabButtonReplay_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IconTabButtonReplay_C", "BP_OnSelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IconTabButtonReplay.IconTabButtonReplay_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UIconTabButtonReplay_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IconTabButtonReplay_C", "BP_OnDeselected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IconTabButtonReplay.IconTabButtonReplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UIconTabButtonReplay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IconTabButtonReplay_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IconTabButtonReplay.IconTabButtonReplay_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UIconTabButtonReplay_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IconTabButtonReplay_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IconTabButtonReplay.IconTabButtonReplay_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UIconTabButtonReplay_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IconTabButtonReplay_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IconTabButtonReplay.IconTabButtonReplay_C.BP_OnEnabled
// (Event, Protected, BlueprintEvent)
// Parameters:

void UIconTabButtonReplay_C::BP_OnEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IconTabButtonReplay_C", "BP_OnEnabled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IconTabButtonReplay.IconTabButtonReplay_C.BP_OnDisabled
// (Event, Protected, BlueprintEvent)
// Parameters:

void UIconTabButtonReplay_C::BP_OnDisabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IconTabButtonReplay_C", "BP_OnDisabled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IconTabButtonReplay.IconTabButtonReplay_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UIconTabButtonReplay_C::OnCurrentTextStyleChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IconTabButtonReplay_C", "OnCurrentTextStyleChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IconTabButtonReplay.IconTabButtonReplay_C.ExecuteUbergraph_IconTabButtonReplay
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetCurrentTextStyleClass_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetCurrentTextStyleClass_ReturnValue1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTabButtonLabelInfo     K2Node_Event_TabLabelInfo                                        (ConstParm)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSelected_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSelected_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush1                                    (None)
// bool                               CallFunc_GetSelected_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonInputContext*         CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UIconTabButtonReplay_C::ExecuteUbergraph_IconTabButtonReplay(int32 EntryPoint, bool CallFunc_IsMobileGame_ReturnValue, class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue, bool K2Node_Event_IsDesignTime, class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue1, const struct FFortTabButtonLabelInfo& K2Node_Event_TabLabelInfo, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_GetSelected_ReturnValue, bool CallFunc_GetSelected_ReturnValue1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush1, bool CallFunc_GetSelected_ReturnValue2, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IconTabButtonReplay_C", "ExecuteUbergraph_IconTabButtonReplay");

	Params::UIconTabButtonReplay_C_ExecuteUbergraph_IconTabButtonReplay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_GetCurrentTextStyleClass_ReturnValue = CallFunc_GetCurrentTextStyleClass_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetCurrentTextStyleClass_ReturnValue1 = CallFunc_GetCurrentTextStyleClass_ReturnValue1;
	Parms.K2Node_Event_TabLabelInfo = K2Node_Event_TabLabelInfo;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetSelected_ReturnValue = CallFunc_GetSelected_ReturnValue;
	Parms.CallFunc_GetSelected_ReturnValue1 = CallFunc_GetSelected_ReturnValue1;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_SlateBrush1 = K2Node_MakeStruct_SlateBrush1;
	Parms.CallFunc_GetSelected_ReturnValue2 = CallFunc_GetSelected_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


