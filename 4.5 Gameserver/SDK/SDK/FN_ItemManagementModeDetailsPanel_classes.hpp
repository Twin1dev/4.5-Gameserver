#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x248 - 0x240)
// WidgetBlueprintGeneratedClass ItemManagementModeDetailsPanel.ItemManagementModeDetailsPanel_C
class UItemManagementModeDetailsPanel_C : public UFortItemManagementModeDetailsPanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UItemManagementModeDetailsPanel_C* GetDefaultObj();

	void HandleDifferentItemManagementModeSetBP();
	void ExecuteUbergraph_ItemManagementModeDetailsPanel(int32 EntryPoint, enum class EFortItemManagementMode Temp_byte_Variable, enum class EFortItemManagementMode CallFunc_GetItemManagementMode_ReturnValue, class UWidget* K2Node_Select_Default);
};

}


