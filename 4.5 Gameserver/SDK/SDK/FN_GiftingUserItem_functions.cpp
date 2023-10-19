#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass GiftingUserItem.GiftingUserItem_C
// (None)

class UClass* UGiftingUserItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GiftingUserItem_C");

	return Clss;
}


// GiftingUserItem_C GiftingUserItem.Default__GiftingUserItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGiftingUserItem_C* UGiftingUserItem_C::GetDefaultObj()
{
	static class UGiftingUserItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGiftingUserItem_C*>(UGiftingUserItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GiftingUserItem.GiftingUserItem_C.SetSelectionState
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class ESelectionState         NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bAnimateOnSelect                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGiftingUserItem_C::SetSelectionState(enum class ESelectionState NewState, bool bAnimateOnSelect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GiftingUserItem_C", "SetSelectionState");

	Params::UGiftingUserItem_C_SetSelectionState_Params Parms{};

	Parms.NewState = NewState;
	Parms.bAnimateOnSelect = bAnimateOnSelect;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GiftingUserItem.GiftingUserItem_C.ExecuteUbergraph_GiftingUserItem
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESelectionState         K2Node_Event_NewState                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bAnimateOnSelect                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGiftingUserItem_C::ExecuteUbergraph_GiftingUserItem(int32 EntryPoint, enum class ESelectionState K2Node_Event_NewState, bool K2Node_Event_bAnimateOnSelect, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GiftingUserItem_C", "ExecuteUbergraph_GiftingUserItem");

	Params::UGiftingUserItem_C_ExecuteUbergraph_GiftingUserItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NewState = K2Node_Event_NewState;
	Parms.K2Node_Event_bAnimateOnSelect = K2Node_Event_bAnimateOnSelect;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


