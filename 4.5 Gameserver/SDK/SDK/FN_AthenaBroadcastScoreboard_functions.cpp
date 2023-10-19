#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C
// (None)

class UClass* UAthenaBroadcastScoreboard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaBroadcastScoreboard_C");

	return Clss;
}


// AthenaBroadcastScoreboard_C AthenaBroadcastScoreboard.Default__AthenaBroadcastScoreboard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaBroadcastScoreboard_C* UAthenaBroadcastScoreboard_C::GetDefaultObj()
{
	static class UAthenaBroadcastScoreboard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaBroadcastScoreboard_C*>(UAthenaBroadcastScoreboard_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.IsMapWidgetLocationVisible
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   MapWidgetLocation                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsWidgetLocationVisible_Visible                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAthenaBroadcastScoreboard_C::IsMapWidgetLocationVisible(struct FVector2D& MapWidgetLocation, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsWidgetLocationVisible_Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "IsMapWidgetLocationVisible");

	Params::UAthenaBroadcastScoreboard_C_IsMapWidgetLocationVisible_Params Parms{};

	Parms.MapWidgetLocation = MapWidgetLocation;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsWidgetLocationVisible_Visible = CallFunc_IsWidgetLocationVisible_Visible;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.ResetSortButtons
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTextButton_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaBroadcastScoreboard_C::ResetSortButtons(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UIconTextButton_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "ResetSortButtons");

	Params::UAthenaBroadcastScoreboard_C_ResetSortButtons_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.ResetSortArrows
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaBroadcastScoreboard_C::ResetSortArrows(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UImage* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "ResetSortArrows");

	Params::UAthenaBroadcastScoreboard_C_ResetSortArrows_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.UpdateListUI
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bResetFocus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaBroadcastScoreboard_C::UpdateListUI(bool bResetFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "UpdateListUI");

	Params::UAthenaBroadcastScoreboard_C_UpdateListUI_Params Parms{};

	Parms.bResetFocus = bResetFocus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.ResetFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaBroadcastScoreboard_C::ResetFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "ResetFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.BndEvt__SortByKillsButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaBroadcastScoreboard_C::BndEvt__SortByKillsButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "BndEvt__SortByKillsButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UAthenaBroadcastScoreboard_C_BndEvt__SortByKillsButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.BndEvt__SortByPlayerNameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaBroadcastScoreboard_C::BndEvt__SortByPlayerNameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "BndEvt__SortByPlayerNameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UAthenaBroadcastScoreboard_C_BndEvt__SortByPlayerNameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.BndEvt__SortByTeamButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaBroadcastScoreboard_C::BndEvt__SortByTeamButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "BndEvt__SortByTeamButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::UAthenaBroadcastScoreboard_C_BndEvt__SortByTeamButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.BndEvt__SortByStateButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaBroadcastScoreboard_C::BndEvt__SortByStateButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "BndEvt__SortByStateButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature");

	Params::UAthenaBroadcastScoreboard_C_BndEvt__SortByStateButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaBroadcastScoreboard_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C.ExecuteUbergraph_AthenaBroadcastScoreboard
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bResetFocus                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button3                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UImage*>              K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// TArray<class UIconTextButton_C*>   K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)

void UAthenaBroadcastScoreboard_C::ExecuteUbergraph_AthenaBroadcastScoreboard(int32 EntryPoint, bool K2Node_Event_bResetFocus, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, TArray<class UImage*>& K2Node_MakeArray_Array, TArray<class UIconTextButton_C*>& K2Node_MakeArray_Array1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaBroadcastScoreboard_C", "ExecuteUbergraph_AthenaBroadcastScoreboard");

	Params::UAthenaBroadcastScoreboard_C_ExecuteUbergraph_AthenaBroadcastScoreboard_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bResetFocus = K2Node_Event_bResetFocus;
	Parms.K2Node_ComponentBoundEvent_Button3 = K2Node_ComponentBoundEvent_Button3;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;

	UObject::ProcessEvent(Func, &Parms);

}

}


