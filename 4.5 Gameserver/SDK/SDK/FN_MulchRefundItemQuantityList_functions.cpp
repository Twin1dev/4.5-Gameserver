#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MulchRefundItemQuantityList.MulchRefundItemQuantityList_C
// (None)

class UClass* UMulchRefundItemQuantityList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MulchRefundItemQuantityList_C");

	return Clss;
}


// MulchRefundItemQuantityList_C MulchRefundItemQuantityList.Default__MulchRefundItemQuantityList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMulchRefundItemQuantityList_C* UMulchRefundItemQuantityList_C::GetDefaultObj()
{
	static class UMulchRefundItemQuantityList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMulchRefundItemQuantityList_C*>(UMulchRefundItemQuantityList_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MulchRefundItemQuantityList.MulchRefundItemQuantityList_C.AddListEntry
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItemQuantityListEntryBase*ListEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMulchRefundItemQuantityList_C::AddListEntry(class UFortItemQuantityListEntryBase* ListEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MulchRefundItemQuantityList_C", "AddListEntry");

	Params::UMulchRefundItemQuantityList_C_AddListEntry_Params Parms{};

	Parms.ListEntry = ListEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MulchRefundItemQuantityList.MulchRefundItemQuantityList_C.ExecuteUbergraph_MulchRefundItemQuantityList
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (IsPlainOldData, NoDestructor)
// class UFortItemQuantityListEntryBase*K2Node_Event_ListEntry                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMulchRefundItemQuantityList_C::ExecuteUbergraph_MulchRefundItemQuantityList(int32 EntryPoint, const struct FMargin& K2Node_MakeStruct_Margin, class UFortItemQuantityListEntryBase* K2Node_Event_ListEntry, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MulchRefundItemQuantityList_C", "ExecuteUbergraph_MulchRefundItemQuantityList");

	Params::UMulchRefundItemQuantityList_C_ExecuteUbergraph_MulchRefundItemQuantityList_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_Event_ListEntry = K2Node_Event_ListEntry;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


