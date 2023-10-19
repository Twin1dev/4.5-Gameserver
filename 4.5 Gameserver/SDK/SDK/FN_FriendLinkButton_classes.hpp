#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x8A0 - 0x888)
// WidgetBlueprintGeneratedClass FriendLinkButton.FriendLinkButton_C
class UFriendLinkButton_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x888(0x8)(Transient, DuplicateTransient)
	class UImage*                                Image_0;                                           // 0x890(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            InviteCodeMessage;                                 // 0x898(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UFriendLinkButton_C* GetDefaultObj();

	void Construct();
	void BP_OnClicked();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_FriendLinkButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFriendLink_C* CallFunc_Create_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUIManager_C* K2Node_DynamicCast_AsUIManager, bool K2Node_DynamicCast_bSuccess, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_GetIsFriendLinkEnabled_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_TextToUpper_ReturnValue);
};

}


