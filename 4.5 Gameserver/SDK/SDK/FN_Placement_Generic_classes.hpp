#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x398 - 0x390)
// WidgetBlueprintGeneratedClass Placement_Generic.Placement_Generic_C
class UPlacement_Generic_C : public UHUDLayoutToolPlacementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UPlacement_Generic_C* GetDefaultObj();

	void OnInsideGridStateChange(bool bInsideGrid);
	void ExecuteUbergraph_Placement_Generic(int32 EntryPoint, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable1, bool K2Node_Event_bInsideGrid, const struct FLinearColor& K2Node_Select_Default);
};

}


