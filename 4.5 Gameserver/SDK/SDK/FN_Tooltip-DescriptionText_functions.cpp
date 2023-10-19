#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Tooltip-DescriptionText.Tooltip-DescriptionText_C
// (None)

class UClass* UTooltipMinusDescriptionText_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tooltip-DescriptionText_C");

	return Clss;
}


// Tooltip-DescriptionText_C Tooltip-DescriptionText.Default__Tooltip-DescriptionText_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTooltipMinusDescriptionText_C* UTooltipMinusDescriptionText_C::GetDefaultObj()
{
	static class UTooltipMinusDescriptionText_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTooltipMinusDescriptionText_C*>(UTooltipMinusDescriptionText_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Tooltip-DescriptionText.Tooltip-DescriptionText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTooltipMinusDescriptionText_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tooltip-DescriptionText_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Tooltip-DescriptionText.Tooltip-DescriptionText_C.ExecuteUbergraph_Tooltip-DescriptionText
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTooltipMinusDescriptionText_C::ExecuteUbergraph_TooltipMinusDescriptionText(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Tooltip-DescriptionText_C", "ExecuteUbergraph_Tooltip-DescriptionText");

	Params::UTooltipMinusDescriptionText_C_ExecuteUbergraph_TooltipMinusDescriptionText_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


