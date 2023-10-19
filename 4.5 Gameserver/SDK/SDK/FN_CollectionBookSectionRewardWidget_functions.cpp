#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CollectionBookSectionRewardWidget.CollectionBookSectionRewardWidget_C
// (None)

class UClass* UCollectionBookSectionRewardWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CollectionBookSectionRewardWidget_C");

	return Clss;
}


// CollectionBookSectionRewardWidget_C CollectionBookSectionRewardWidget.Default__CollectionBookSectionRewardWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCollectionBookSectionRewardWidget_C* UCollectionBookSectionRewardWidget_C::GetDefaultObj()
{
	static class UCollectionBookSectionRewardWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCollectionBookSectionRewardWidget_C*>(UCollectionBookSectionRewardWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CollectionBookSectionRewardWidget.CollectionBookSectionRewardWidget_C.OnRewardStatusChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECollectionBookRewardStatusNewStatus                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookSectionRewardWidget_C::OnRewardStatusChanged(enum class ECollectionBookRewardStatus NewStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBookSectionRewardWidget_C", "OnRewardStatusChanged");

	Params::UCollectionBookSectionRewardWidget_C_OnRewardStatusChanged_Params Parms{};

	Parms.NewStatus = NewStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookSectionRewardWidget.CollectionBookSectionRewardWidget_C.ExecuteUbergraph_CollectionBookSectionRewardWidget
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECollectionBookRewardStatusK2Node_Event_NewStatus                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECollectionBookRewardStatusTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookSectionRewardWidget_C::ExecuteUbergraph_CollectionBookSectionRewardWidget(int32 EntryPoint, enum class ECollectionBookRewardStatus K2Node_Event_NewStatus, enum class ECollectionBookRewardStatus Temp_byte_Variable, class UWidget* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBookSectionRewardWidget_C", "ExecuteUbergraph_CollectionBookSectionRewardWidget");

	Params::UCollectionBookSectionRewardWidget_C_ExecuteUbergraph_CollectionBookSectionRewardWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NewStatus = K2Node_Event_NewStatus;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


