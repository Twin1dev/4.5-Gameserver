#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Placement_Generic.Placement_Generic_C
// (None)

class UClass* UPlacement_Generic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Placement_Generic_C");

	return Clss;
}


// Placement_Generic_C Placement_Generic.Default__Placement_Generic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlacement_Generic_C* UPlacement_Generic_C::GetDefaultObj()
{
	static class UPlacement_Generic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlacement_Generic_C*>(UPlacement_Generic_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Placement_Generic.Placement_Generic_C.OnInsideGridStateChange
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bInsideGrid                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlacement_Generic_C::OnInsideGridStateChange(bool bInsideGrid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Placement_Generic_C", "OnInsideGridStateChange");

	Params::UPlacement_Generic_C_OnInsideGridStateChange_Params Parms{};

	Parms.bInsideGrid = bInsideGrid;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Placement_Generic.Placement_Generic_C.ExecuteUbergraph_Placement_Generic
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable1                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bInsideGrid                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlacement_Generic_C::ExecuteUbergraph_Placement_Generic(int32 EntryPoint, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable1, bool K2Node_Event_bInsideGrid, const struct FLinearColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Placement_Generic_C", "ExecuteUbergraph_Placement_Generic");

	Params::UPlacement_Generic_C_ExecuteUbergraph_Placement_Generic_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.K2Node_Event_bInsideGrid = K2Node_Event_bInsideGrid;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


