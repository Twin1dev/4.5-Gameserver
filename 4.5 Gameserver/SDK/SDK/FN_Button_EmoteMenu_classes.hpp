#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x3F8 - 0x3D0)
// WidgetBlueprintGeneratedClass Button_EmoteMenu.Button_EmoteMenu_C
class UButton_EmoteMenu_C : public UCommonBacchusButton_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(Transient, DuplicateTransient)
	struct FGameplayTagContainer                 Dancer;                                            // 0x3D8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UButton_EmoteMenu_C* GetDefaultObj();

	void OnClicked();
	void ExecuteUbergraph_Button_EmoteMenu(int32 EntryPoint, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue);
};

}


