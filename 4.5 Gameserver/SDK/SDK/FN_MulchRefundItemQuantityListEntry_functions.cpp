#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MulchRefundItemQuantityListEntry.MulchRefundItemQuantityListEntry_C
// (None)

class UClass* UMulchRefundItemQuantityListEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MulchRefundItemQuantityListEntry_C");

	return Clss;
}


// MulchRefundItemQuantityListEntry_C MulchRefundItemQuantityListEntry.Default__MulchRefundItemQuantityListEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMulchRefundItemQuantityListEntry_C* UMulchRefundItemQuantityListEntry_C::GetDefaultObj()
{
	static class UMulchRefundItemQuantityListEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMulchRefundItemQuantityListEntry_C*>(UMulchRefundItemQuantityListEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MulchRefundItemQuantityListEntry.MulchRefundItemQuantityListEntry_C.UpdateItemAndQuantity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DirectlySetQuantity                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemDefinition*         CallFunc_GetItemDefinition_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMulchRefundItemQuantityListEntry_C::UpdateItemAndQuantity(bool DirectlySetQuantity, class UFortItemDefinition* CallFunc_GetItemDefinition_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MulchRefundItemQuantityListEntry_C", "UpdateItemAndQuantity");

	Params::UMulchRefundItemQuantityListEntry_C_UpdateItemAndQuantity_Params Parms{};

	Parms.DirectlySetQuantity = DirectlySetQuantity;
	Parms.CallFunc_GetItemDefinition_ReturnValue = CallFunc_GetItemDefinition_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MulchRefundItemQuantityListEntry.MulchRefundItemQuantityListEntry_C.HandleDifferentItemOrQuantitySetBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               IsBeingReset                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMulchRefundItemQuantityListEntry_C::HandleDifferentItemOrQuantitySetBP(bool IsBeingReset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MulchRefundItemQuantityListEntry_C", "HandleDifferentItemOrQuantitySetBP");

	Params::UMulchRefundItemQuantityListEntry_C_HandleDifferentItemOrQuantitySetBP_Params Parms{};

	Parms.IsBeingReset = IsBeingReset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MulchRefundItemQuantityListEntry.MulchRefundItemQuantityListEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMulchRefundItemQuantityListEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MulchRefundItemQuantityListEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MulchRefundItemQuantityListEntry.MulchRefundItemQuantityListEntry_C.ExecuteUbergraph_MulchRefundItemQuantityListEntry
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsBeingReset                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMulchRefundItemQuantityListEntry_C::ExecuteUbergraph_MulchRefundItemQuantityListEntry(int32 EntryPoint, bool K2Node_Event_IsBeingReset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MulchRefundItemQuantityListEntry_C", "ExecuteUbergraph_MulchRefundItemQuantityListEntry");

	Params::UMulchRefundItemQuantityListEntry_C_ExecuteUbergraph_MulchRefundItemQuantityListEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsBeingReset = K2Node_Event_IsBeingReset;

	UObject::ProcessEvent(Func, &Parms);

}

}


