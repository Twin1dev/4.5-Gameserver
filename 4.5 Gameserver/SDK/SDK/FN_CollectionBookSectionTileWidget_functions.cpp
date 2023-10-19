#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CollectionBookSectionTileWidget.CollectionBookSectionTileWidget_C
// (None)

class UClass* UCollectionBookSectionTileWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CollectionBookSectionTileWidget_C");

	return Clss;
}


// CollectionBookSectionTileWidget_C CollectionBookSectionTileWidget.Default__CollectionBookSectionTileWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCollectionBookSectionTileWidget_C* UCollectionBookSectionTileWidget_C::GetDefaultObj()
{
	static class UCollectionBookSectionTileWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCollectionBookSectionTileWidget_C*>(UCollectionBookSectionTileWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CollectionBookSectionTileWidget.CollectionBookSectionTileWidget_C.OnSectionSlotUpdate
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NumFilledSlots                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumSlots                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortCollectionBookStateSectionState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookSectionTileWidget_C::OnSectionSlotUpdate(int32 NumFilledSlots, int32 NumSlots, enum class EFortCollectionBookState SectionState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBookSectionTileWidget_C", "OnSectionSlotUpdate");

	Params::UCollectionBookSectionTileWidget_C_OnSectionSlotUpdate_Params Parms{};

	Parms.NumFilledSlots = NumFilledSlots;
	Parms.NumSlots = NumSlots;
	Parms.SectionState = SectionState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookSectionTileWidget.CollectionBookSectionTileWidget_C.ExecuteUbergraph_CollectionBookSectionTileWidget
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortCollectionBookStateTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_NumFilledSlots                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_NumSlots                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortCollectionBookStateK2Node_Event_SectionState                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCollectionBookSectionTileRewardWidget_C*K2Node_DynamicCast_AsCollection_Book_Section_Tile_Reward_Widget  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookSectionTileWidget_C::ExecuteUbergraph_CollectionBookSectionTileWidget(int32 EntryPoint, enum class EFortCollectionBookState Temp_byte_Variable, int32 K2Node_Event_NumFilledSlots, int32 K2Node_Event_NumSlots, enum class EFortCollectionBookState K2Node_Event_SectionState, class UCollectionBookSectionTileRewardWidget_C* K2Node_DynamicCast_AsCollection_Book_Section_Tile_Reward_Widget, bool K2Node_DynamicCast_bSuccess, class UClass* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBookSectionTileWidget_C", "ExecuteUbergraph_CollectionBookSectionTileWidget");

	Params::UCollectionBookSectionTileWidget_C_ExecuteUbergraph_CollectionBookSectionTileWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Event_NumFilledSlots = K2Node_Event_NumFilledSlots;
	Parms.K2Node_Event_NumSlots = K2Node_Event_NumSlots;
	Parms.K2Node_Event_SectionState = K2Node_Event_SectionState;
	Parms.K2Node_DynamicCast_AsCollection_Book_Section_Tile_Reward_Widget = K2Node_DynamicCast_AsCollection_Book_Section_Tile_Reward_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


