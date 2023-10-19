#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaSpectatorScoreboard.AthenaSpectatorScoreboard_C
// (None)

class UClass* UAthenaSpectatorScoreboard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaSpectatorScoreboard_C");

	return Clss;
}


// AthenaSpectatorScoreboard_C AthenaSpectatorScoreboard.Default__AthenaSpectatorScoreboard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaSpectatorScoreboard_C* UAthenaSpectatorScoreboard_C::GetDefaultObj()
{
	static class UAthenaSpectatorScoreboard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaSpectatorScoreboard_C*>(UAthenaSpectatorScoreboard_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaSpectatorScoreboard.AthenaSpectatorScoreboard_C.SetConsoleInputImages
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 Temp_struct_Variable                                             (None)
// struct FSlateBrush                 Temp_struct_Variable1                                            (None)
// enum class ECommonGamepadType      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 Temp_struct_Variable2                                            (None)
// struct FSlateBrush                 Temp_struct_Variable3                                            (None)
// class UCommonInputContext*         CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonGamepadType      CallFunc_GetCurrentGamepadType_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonGamepadType      Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush1                                    (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush2                                    (None)
// struct FSlateBrush                 K2Node_Select_Default                                            (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush3                                    (None)
// struct FSlateBrush                 K2Node_Select1_Default                                           (None)

void UAthenaSpectatorScoreboard_C::SetConsoleInputImages(const struct FSlateBrush& Temp_struct_Variable, const struct FSlateBrush& Temp_struct_Variable1, enum class ECommonGamepadType Temp_byte_Variable, const struct FSlateBrush& Temp_struct_Variable2, const struct FSlateBrush& Temp_struct_Variable3, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonGamepadType CallFunc_GetCurrentGamepadType_ReturnValue, enum class ECommonGamepadType Temp_byte_Variable1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush2, const struct FSlateBrush& K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush3, const struct FSlateBrush& K2Node_Select1_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSpectatorScoreboard_C", "SetConsoleInputImages");

	Params::UAthenaSpectatorScoreboard_C_SetConsoleInputImages_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.Temp_struct_Variable3 = Temp_struct_Variable3;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentGamepadType_ReturnValue = CallFunc_GetCurrentGamepadType_ReturnValue;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_SlateBrush1 = K2Node_MakeStruct_SlateBrush1;
	Parms.K2Node_MakeStruct_SlateBrush2 = K2Node_MakeStruct_SlateBrush2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateBrush3 = K2Node_MakeStruct_SlateBrush3;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorScoreboard.AthenaSpectatorScoreboard_C.UpdateListUI
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bResetFocus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSpectatorScoreboard_C::UpdateListUI(bool bResetFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSpectatorScoreboard_C", "UpdateListUI");

	Params::UAthenaSpectatorScoreboard_C_UpdateListUI_Params Parms{};

	Parms.bResetFocus = bResetFocus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorScoreboard.AthenaSpectatorScoreboard_C.ResetFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaSpectatorScoreboard_C::ResetFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSpectatorScoreboard_C", "ResetFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaSpectatorScoreboard.AthenaSpectatorScoreboard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaSpectatorScoreboard_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSpectatorScoreboard_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaSpectatorScoreboard.AthenaSpectatorScoreboard_C.ExecuteUbergraph_AthenaSpectatorScoreboard
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetDisplayedEntryWidgets_ReturnValue                    (ConstParm, ZeroConstructor, ReferenceParm)
// class UObject*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaSpectatorScoreboardRowWidget_C*K2Node_DynamicCast_AsAthena_Spectator_Scoreboard_Row_Widget      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bResetFocus                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSpectatorScoreboard_C::ExecuteUbergraph_AthenaSpectatorScoreboard(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue, class UObject* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UAthenaSpectatorScoreboardRowWidget_C* K2Node_DynamicCast_AsAthena_Spectator_Scoreboard_Row_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_Event_bResetFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSpectatorScoreboard_C", "ExecuteUbergraph_AthenaSpectatorScoreboard");

	Params::UAthenaSpectatorScoreboard_C_ExecuteUbergraph_AthenaSpectatorScoreboard_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDisplayedEntryWidgets_ReturnValue = CallFunc_GetDisplayedEntryWidgets_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Spectator_Scoreboard_Row_Widget = K2Node_DynamicCast_AsAthena_Spectator_Scoreboard_Row_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Event_bResetFocus = K2Node_Event_bResetFocus;

	UObject::ProcessEvent(Func, &Parms);

}

}


