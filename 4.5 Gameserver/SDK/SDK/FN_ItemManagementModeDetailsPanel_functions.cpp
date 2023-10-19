#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemManagementModeDetailsPanel.ItemManagementModeDetailsPanel_C
// (None)

class UClass* UItemManagementModeDetailsPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemManagementModeDetailsPanel_C");

	return Clss;
}


// ItemManagementModeDetailsPanel_C ItemManagementModeDetailsPanel.Default__ItemManagementModeDetailsPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemManagementModeDetailsPanel_C* UItemManagementModeDetailsPanel_C::GetDefaultObj()
{
	static class UItemManagementModeDetailsPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemManagementModeDetailsPanel_C*>(UItemManagementModeDetailsPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemManagementModeDetailsPanel.ItemManagementModeDetailsPanel_C.HandleDifferentItemManagementModeSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemManagementModeDetailsPanel_C::HandleDifferentItemManagementModeSetBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemManagementModeDetailsPanel_C", "HandleDifferentItemManagementModeSetBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemManagementModeDetailsPanel.ItemManagementModeDetailsPanel_C.ExecuteUbergraph_ItemManagementModeDetailsPanel
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemManagementMode Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemManagementMode CallFunc_GetItemManagementMode_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementModeDetailsPanel_C::ExecuteUbergraph_ItemManagementModeDetailsPanel(int32 EntryPoint, enum class EFortItemManagementMode Temp_byte_Variable, enum class EFortItemManagementMode CallFunc_GetItemManagementMode_ReturnValue, class UWidget* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemManagementModeDetailsPanel_C", "ExecuteUbergraph_ItemManagementModeDetailsPanel");

	Params::UItemManagementModeDetailsPanel_C_ExecuteUbergraph_ItemManagementModeDetailsPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetItemManagementMode_ReturnValue = CallFunc_GetItemManagementMode_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


