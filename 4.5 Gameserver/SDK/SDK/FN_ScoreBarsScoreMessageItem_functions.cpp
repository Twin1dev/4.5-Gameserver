#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C
// (None)

class UClass* UScoreBarsScoreMessageItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScoreBarsScoreMessageItem_C");

	return Clss;
}


// ScoreBarsScoreMessageItem_C ScoreBarsScoreMessageItem.Default__ScoreBarsScoreMessageItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScoreBarsScoreMessageItem_C* UScoreBarsScoreMessageItem_C::GetDefaultObj()
{
	static class UScoreBarsScoreMessageItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScoreBarsScoreMessageItem_C*>(UScoreBarsScoreMessageItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.OnAppearAnimationFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UScoreBarsScoreMessageItem_C::OnAppearAnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScoreBarsScoreMessageItem_C", "OnAppearAnimationFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.ClearScoreValueWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UScoreBarsScoreMessageItem_C::ClearScoreValueWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScoreBarsScoreMessageItem_C", "ClearScoreValueWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.GetScoreValueWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScoreBarsScoreMessageItem_C::GetScoreValueWidget(class UWidget** Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScoreBarsScoreMessageItem_C", "GetScoreValueWidget");

	Params::UScoreBarsScoreMessageItem_C_GetScoreValueWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Base_Delta                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Name_Text                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UScoreMessageNumber_C*       In_Score_Widget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UScoreBarsScoreMessageItem_C::Setup(int32 Base_Delta, class FText Name_Text, class UScoreMessageNumber_C* In_Score_Widget, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScoreBarsScoreMessageItem_C", "Setup");

	Params::UScoreBarsScoreMessageItem_C_Setup_Params Parms{};

	Parms.Base_Delta = Base_Delta;
	Parms.Name_Text = Name_Text;
	Parms.In_Score_Widget = In_Score_Widget;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.UpdateValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScoreBarsScoreMessageItem_C::UpdateValues(int32 CallFunc_Multiply_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScoreBarsScoreMessageItem_C", "UpdateValues");

	Params::UScoreBarsScoreMessageItem_C_UpdateValues_Params Parms{};

	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.OnStackSizeChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OldStackSize                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScoreBarsScoreMessageItem_C::OnStackSizeChanged(int32 OldStackSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScoreBarsScoreMessageItem_C", "OnStackSizeChanged");

	Params::UScoreBarsScoreMessageItem_C_OnStackSizeChanged_Params Parms{};

	Parms.OldStackSize = OldStackSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.OnBeginRemove
// (Event, Protected, BlueprintEvent)
// Parameters:

void UScoreBarsScoreMessageItem_C::OnBeginRemove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScoreBarsScoreMessageItem_C", "OnBeginRemove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C.ExecuteUbergraph_ScoreBarsScoreMessageItem
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_OldStackSize                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScoreBarsScoreMessageItem_C::ExecuteUbergraph_ScoreBarsScoreMessageItem(int32 EntryPoint, int32 K2Node_Event_OldStackSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScoreBarsScoreMessageItem_C", "ExecuteUbergraph_ScoreBarsScoreMessageItem");

	Params::UScoreBarsScoreMessageItem_C_ExecuteUbergraph_ScoreBarsScoreMessageItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OldStackSize = K2Node_Event_OldStackSize;

	UObject::ProcessEvent(Func, &Parms);

}

}


