#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF1 (0x481 - 0x390)
// WidgetBlueprintGeneratedClass ImportFriends.ImportFriends_C
class UImportFriends_C : public UFortSocialImportPanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Intro_V2;                                          // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      ArrowPulse;                                        // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      AddFriendsDescription;                             // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CT_AddFriendsDescription;                          // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CT_LimitedTimeHeader;                              // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CT_RewardHeader;                                   // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CT_TakenToLauncher;                                // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInfoWidget_C*                     ItemInfoWidget;                                    // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EFrontEndCamera                   DesiredFrontEndCamera;                             // 0x3F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16DE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemDefinition*                   PreviewItemDef;                                    // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HeartbeatDelayIntroAnimation;                      // 0x400(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        DebugSocialImportType;                             // 0x404(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasReward;                                        // 0x405(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16E0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  FacebookHeader;                                    // 0x408(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  VKHeader;                                          // 0x420(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  SteamHeader;                                       // 0x438(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  PlaystationHeader;                                 // 0x450(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  XboxHeader;                                        // 0x468(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class ESocialImportPanelPlatform        SocialPlatform;                                    // 0x480(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UImportFriends_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void OnPanelTypeSet(enum class ESocialImportPanelType NewType);
	void HandleHeaderText();
	void HandleDescriptionText();
	void BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnActivated();
	void OnIncentivizedSet(bool bIncentivized);
	void ExecuteUbergraph_ImportFriends(int32 EntryPoint, enum class EFrontEndCamera Temp_byte_Variable, enum class EFrontEndCamera Temp_byte_Variable1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, enum class ESocialImportPanelPlatform Temp_byte_Variable2, enum class ESocialImportPanelPlatform Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility Temp_byte_Variable6, enum class ESlateVisibility Temp_byte_Variable7, enum class ESlateVisibility Temp_byte_Variable8, bool K2Node_Event_IsDesignTime, enum class ESocialImportPanelType K2Node_Event_NewType, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool Temp_bool_Variable, class UCommonButton* K2Node_ComponentBoundEvent_Button, enum class EFrontEndCamera K2Node_Select_Default, enum class ESocialImportPanelPlatform CallFunc_GetSocialPlatform_OutPlatform, bool CallFunc_GetSocialPlatform_ReturnValue, bool K2Node_Event_bIncentivized, class FText K2Node_Select1_Default, enum class ESlateVisibility K2Node_Select2_Default, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1, class FText CallFunc_TextToUpper_ReturnValue1, float CallFunc_GetEndTime_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
};

}


