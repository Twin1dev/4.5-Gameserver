#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x3E0 - 0x3D0)
// WidgetBlueprintGeneratedClass Button_Edit.Button_Edit_C
class UButton_Edit_C : public UCommonBacchusButton_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(Transient, DuplicateTransient)
	class UPaperSprite*                          Confirm_Icon;                                      // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UButton_Edit_C* GetDefaultObj();

	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue);
	void OnHUDStateUpdate(struct FFortHUDState& NewState);
	void ExecuteUbergraph_Button_Edit(int32 EntryPoint, const struct FFortHUDState& K2Node_Event_NewState);
};

}


