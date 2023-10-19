#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x3F8 - 0x3D0)
// WidgetBlueprintGeneratedClass Button_Jump.Button_Jump_C
class UButton_Jump_C : public UCommonBacchusButton_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      JumpOutOfPlane;                                    // 0x3D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPaperSprite*                          GliderIcon;                                        // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPaperSprite*                          SkydiveIcon;                                       // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPaperSprite*                          JumpIcon;                                          // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UButton_Jump_C* GetDefaultObj();

	struct FEventReply OnTouchEnded(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue);
	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, int32 CallFunc_PointerEvent_GetPointerIndex_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue);
	void OnHUDStateUpdate(struct FFortHUDState& NewState);
	void ExecuteUbergraph_Button_Jump(int32 EntryPoint, const struct FFortHUDState& K2Node_Event_NewState, class UFortAbilitySystemContext* CallFunc_GetContext_ReturnValue, bool CallFunc_HasMatchingGameplayTag_ReturnValue);
};

}


