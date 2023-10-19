#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CollectionBookPageCompletionRewardWidget.CollectionBookPageCompletionRewardWidget_C
// (None)

class UClass* UCollectionBookPageCompletionRewardWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CollectionBookPageCompletionRewardWidget_C");

	return Clss;
}


// CollectionBookPageCompletionRewardWidget_C CollectionBookPageCompletionRewardWidget.Default__CollectionBookPageCompletionRewardWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCollectionBookPageCompletionRewardWidget_C* UCollectionBookPageCompletionRewardWidget_C::GetDefaultObj()
{
	static class UCollectionBookPageCompletionRewardWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCollectionBookPageCompletionRewardWidget_C*>(UCollectionBookPageCompletionRewardWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CollectionBookPageCompletionRewardWidget.CollectionBookPageCompletionRewardWidget_C.OnRewardStatusChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECollectionBookRewardStatusNewStatus                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookPageCompletionRewardWidget_C::OnRewardStatusChanged(enum class ECollectionBookRewardStatus NewStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBookPageCompletionRewardWidget_C", "OnRewardStatusChanged");

	Params::UCollectionBookPageCompletionRewardWidget_C_OnRewardStatusChanged_Params Parms{};

	Parms.NewStatus = NewStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookPageCompletionRewardWidget.CollectionBookPageCompletionRewardWidget_C.ExecuteUbergraph_CollectionBookPageCompletionRewardWidget
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECollectionBookRewardStatusTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECollectionBookRewardStatusK2Node_Event_NewStatus                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookPageCompletionRewardWidget_C::ExecuteUbergraph_CollectionBookPageCompletionRewardWidget(int32 EntryPoint, enum class ECollectionBookRewardStatus Temp_byte_Variable, enum class ECollectionBookRewardStatus K2Node_Event_NewStatus, class UWidget* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBookPageCompletionRewardWidget_C", "ExecuteUbergraph_CollectionBookPageCompletionRewardWidget");

	Params::UCollectionBookPageCompletionRewardWidget_C_ExecuteUbergraph_CollectionBookPageCompletionRewardWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Event_NewStatus = K2Node_Event_NewStatus;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


