#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MulchConfirmationItem.MulchConfirmationItem_C
// (None)

class UClass* UMulchConfirmationItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MulchConfirmationItem_C");

	return Clss;
}


// MulchConfirmationItem_C MulchConfirmationItem.Default__MulchConfirmationItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMulchConfirmationItem_C* UMulchConfirmationItem_C::GetDefaultObj()
{
	static class UMulchConfirmationItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMulchConfirmationItem_C*>(UMulchConfirmationItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MulchConfirmationItem.MulchConfirmationItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMulchConfirmationItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MulchConfirmationItem_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MulchConfirmationItem.MulchConfirmationItem_C.ExecuteUbergraph_MulchConfirmationItem
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMulchConfirmationItem_C::ExecuteUbergraph_MulchConfirmationItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MulchConfirmationItem_C", "ExecuteUbergraph_MulchConfirmationItem");

	Params::UMulchConfirmationItem_C_ExecuteUbergraph_MulchConfirmationItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


