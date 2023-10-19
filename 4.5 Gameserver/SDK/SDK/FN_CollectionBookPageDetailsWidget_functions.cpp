#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CollectionBookPageDetailsWidget.CollectionBookPageDetailsWidget_C
// (None)

class UClass* UCollectionBookPageDetailsWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CollectionBookPageDetailsWidget_C");

	return Clss;
}


// CollectionBookPageDetailsWidget_C CollectionBookPageDetailsWidget.Default__CollectionBookPageDetailsWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCollectionBookPageDetailsWidget_C* UCollectionBookPageDetailsWidget_C::GetDefaultObj()
{
	static class UCollectionBookPageDetailsWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCollectionBookPageDetailsWidget_C*>(UCollectionBookPageDetailsWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CollectionBookPageDetailsWidget.CollectionBookPageDetailsWidget_C.OnPageProgressionUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              TotalFilledSlots                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TotalSlots                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortCollectionBookStateState                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookPageDetailsWidget_C::OnPageProgressionUpdated(int32 TotalFilledSlots, int32 TotalSlots, enum class EFortCollectionBookState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBookPageDetailsWidget_C", "OnPageProgressionUpdated");

	Params::UCollectionBookPageDetailsWidget_C_OnPageProgressionUpdated_Params Parms{};

	Parms.TotalFilledSlots = TotalFilledSlots;
	Parms.TotalSlots = TotalSlots;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookPageDetailsWidget.CollectionBookPageDetailsWidget_C.ExecuteUbergraph_CollectionBookPageDetailsWidget
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_TotalFilledSlots                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_TotalSlots                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortCollectionBookStateK2Node_Event_State                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookPageDetailsWidget_C::ExecuteUbergraph_CollectionBookPageDetailsWidget(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, int32 K2Node_Event_TotalFilledSlots, int32 K2Node_Event_TotalSlots, enum class EFortCollectionBookState K2Node_Event_State, bool Temp_bool_Variable, bool CallFunc_NotEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBookPageDetailsWidget_C", "ExecuteUbergraph_CollectionBookPageDetailsWidget");

	Params::UCollectionBookPageDetailsWidget_C_ExecuteUbergraph_CollectionBookPageDetailsWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Event_TotalFilledSlots = K2Node_Event_TotalFilledSlots;
	Parms.K2Node_Event_TotalSlots = K2Node_Event_TotalSlots;
	Parms.K2Node_Event_State = K2Node_Event_State;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


