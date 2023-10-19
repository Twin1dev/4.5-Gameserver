#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ImportFriends.ImportFriends_C
// (None)

class UClass* UImportFriends_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ImportFriends_C");

	return Clss;
}


// ImportFriends_C ImportFriends.Default__ImportFriends_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UImportFriends_C* UImportFriends_C::GetDefaultObj()
{
	static class UImportFriends_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UImportFriends_C*>(UImportFriends_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ImportFriends.ImportFriends_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UImportFriends_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImportFriends_C", "PreConstruct");

	Params::UImportFriends_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ImportFriends.ImportFriends_C.OnPanelTypeSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ESocialImportPanelType  NewType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImportFriends_C::OnPanelTypeSet(enum class ESocialImportPanelType NewType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImportFriends_C", "OnPanelTypeSet");

	Params::UImportFriends_C_OnPanelTypeSet_Params Parms{};

	Parms.NewType = NewType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ImportFriends.ImportFriends_C.HandleHeaderText
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UImportFriends_C::HandleHeaderText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImportFriends_C", "HandleHeaderText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ImportFriends.ImportFriends_C.HandleDescriptionText
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UImportFriends_C::HandleDescriptionText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImportFriends_C", "HandleDescriptionText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ImportFriends.ImportFriends_C.BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImportFriends_C::BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImportFriends_C", "BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature");

	Params::UImportFriends_C_BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ImportFriends.ImportFriends_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UImportFriends_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImportFriends_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ImportFriends.ImportFriends_C.OnIncentivizedSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIncentivized                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UImportFriends_C::OnIncentivizedSet(bool bIncentivized)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImportFriends_C", "OnIncentivizedSet");

	Params::UImportFriends_C_OnIncentivizedSet_Params Parms{};

	Parms.bIncentivized = bIncentivized;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ImportFriends.ImportFriends_C.ExecuteUbergraph_ImportFriends
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFrontEndCamera         Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFrontEndCamera         Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESocialImportPanelPlatformTemp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESocialImportPanelPlatformTemp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESocialImportPanelType  K2Node_Event_NewType                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFrontEndCamera         K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESocialImportPanelPlatformCallFunc_GetSocialPlatform_OutPlatform                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSocialPlatform_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIncentivized                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select1_Default                                           (None)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue1                            (None)
// class FText                        CallFunc_TextToUpper_ReturnValue1                                (None)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UImportFriends_C::ExecuteUbergraph_ImportFriends(int32 EntryPoint, enum class EFrontEndCamera Temp_byte_Variable, enum class EFrontEndCamera Temp_byte_Variable1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, enum class ESocialImportPanelPlatform Temp_byte_Variable2, enum class ESocialImportPanelPlatform Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility Temp_byte_Variable6, enum class ESlateVisibility Temp_byte_Variable7, enum class ESlateVisibility Temp_byte_Variable8, bool K2Node_Event_IsDesignTime, enum class ESocialImportPanelType K2Node_Event_NewType, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool Temp_bool_Variable, class UCommonButton* K2Node_ComponentBoundEvent_Button, enum class EFrontEndCamera K2Node_Select_Default, enum class ESocialImportPanelPlatform CallFunc_GetSocialPlatform_OutPlatform, bool CallFunc_GetSocialPlatform_ReturnValue, bool K2Node_Event_bIncentivized, class FText K2Node_Select1_Default, enum class ESlateVisibility K2Node_Select2_Default, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1, class FText CallFunc_TextToUpper_ReturnValue1, float CallFunc_GetEndTime_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImportFriends_C", "ExecuteUbergraph_ImportFriends");

	Params::UImportFriends_C_ExecuteUbergraph_ImportFriends_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.Temp_byte_Variable7 = Temp_byte_Variable7;
	Parms.Temp_byte_Variable8 = Temp_byte_Variable8;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_NewType = K2Node_Event_NewType;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetSocialPlatform_OutPlatform = CallFunc_GetSocialPlatform_OutPlatform;
	Parms.CallFunc_GetSocialPlatform_ReturnValue = CallFunc_GetSocialPlatform_ReturnValue;
	Parms.K2Node_Event_bIncentivized = K2Node_Event_bIncentivized;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue1 = CallFunc_MakeLiteralText_ReturnValue1;
	Parms.CallFunc_TextToUpper_ReturnValue1 = CallFunc_TextToUpper_ReturnValue1;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


