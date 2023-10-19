#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MonolithicItemDetailsHostPanel.MonolithicItemDetailsHostPanel_C
// (None)

class UClass* UMonolithicItemDetailsHostPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MonolithicItemDetailsHostPanel_C");

	return Clss;
}


// MonolithicItemDetailsHostPanel_C MonolithicItemDetailsHostPanel.Default__MonolithicItemDetailsHostPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMonolithicItemDetailsHostPanel_C* UMonolithicItemDetailsHostPanel_C::GetDefaultObj()
{
	static class UMonolithicItemDetailsHostPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMonolithicItemDetailsHostPanel_C*>(UMonolithicItemDetailsHostPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MonolithicItemDetailsHostPanel.MonolithicItemDetailsHostPanel_C.HandleHasItemMarkedForMulchingChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMonolithicItemDetailsHostPanel_C::HandleHasItemMarkedForMulchingChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MonolithicItemDetailsHostPanel_C", "HandleHasItemMarkedForMulchingChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MonolithicItemDetailsHostPanel.MonolithicItemDetailsHostPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMonolithicItemDetailsHostPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MonolithicItemDetailsHostPanel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MonolithicItemDetailsHostPanel.MonolithicItemDetailsHostPanel_C.ExecuteUbergraph_MonolithicItemDetailsHostPanel
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMonolithicItemDetailsHostPanel_C::ExecuteUbergraph_MonolithicItemDetailsHostPanel(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MonolithicItemDetailsHostPanel_C", "ExecuteUbergraph_MonolithicItemDetailsHostPanel");

	Params::UMonolithicItemDetailsHostPanel_C_ExecuteUbergraph_MonolithicItemDetailsHostPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


