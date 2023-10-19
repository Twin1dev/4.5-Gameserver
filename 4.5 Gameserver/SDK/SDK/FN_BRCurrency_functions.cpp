#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BRCurrency.BRCurrency_C
// (None)

class UClass* UBRCurrency_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BRCurrency_C");

	return Clss;
}


// BRCurrency_C BRCurrency.Default__BRCurrency_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBRCurrency_C* UBRCurrency_C::GetDefaultObj()
{
	static class UBRCurrency_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBRCurrency_C*>(UBRCurrency_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BRCurrency.BRCurrency_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBRCurrency_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BRCurrency_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BRCurrency.BRCurrency_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBRCurrency_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BRCurrency_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BRCurrency.BRCurrency_C.ExecuteUbergraph_BRCurrency
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBRCurrency_C::ExecuteUbergraph_BRCurrency(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BRCurrency_C", "ExecuteUbergraph_BRCurrency");

	Params::UBRCurrency_C_ExecuteUbergraph_BRCurrency_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


