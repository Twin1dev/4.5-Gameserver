#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3D8 - 0x3D0)
// WidgetBlueprintGeneratedClass Button_Inventory.Button_Inventory_C
class UButton_Inventory_C : public UCommonBacchusButton_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UButton_Inventory_C* GetDefaultObj();

	void OnClicked();
	void ExecuteUbergraph_Button_Inventory(int32 EntryPoint, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue);
};

}


