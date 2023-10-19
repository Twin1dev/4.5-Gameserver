#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x278 - 0x250)
// WidgetBlueprintGeneratedClass HUDLayoutToolFireModeButton.HUDLayoutToolFireModeButton_C
class UHUDLayoutToolFireModeButton_C : public UHUDLayoutToolFireModeButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(Transient, DuplicateTransient)
	class UButton*                               BigAssButton;                                      // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_FireModeIcon;                                // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_FireModeDescription;                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_FireModeName;                                 // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UHUDLayoutToolFireModeButton_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void BndEvt__BigAssButton_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature();
	void ExecuteUbergraph_HUDLayoutToolFireModeButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


