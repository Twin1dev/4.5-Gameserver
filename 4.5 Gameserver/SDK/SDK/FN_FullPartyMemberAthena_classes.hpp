#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x9A8 - 0x998)
// WidgetBlueprintGeneratedClass FullPartyMemberAthena.FullPartyMemberAthena_C
class UFullPartyMemberAthena_C : public UAthenaPartyMemberBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x998(0x8)(Transient, DuplicateTransient)
	class UPlayerBanner_C*                       PlayerBanner;                                      // 0x9A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UFullPartyMemberAthena_C* GetDefaultObj();

	void SetBannerIconAndColor(const class FString& IconId, const class FString& ColorId);
	void OpenPartyFinder();
	void OnFriendshipStatusDetermined(enum class EFortFriendRequestStatus RequestStatus);
	void ExecuteUbergraph_FullPartyMemberAthena(int32 EntryPoint, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, class FText Temp_text_Variable3, enum class EFortFriendRequestStatus Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable1, bool Temp_bool_Variable2, bool Temp_bool_Variable3, const class FString& K2Node_Event_IconId, const class FString& K2Node_Event_ColorId, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue1, class UPartyFinder_C* CallFunc_Create_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, enum class EFortFriendRequestStatus Temp_byte_Variable1, class UUIManager_C* K2Node_DynamicCast_AsUIManager, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsTencentBuild_ReturnValue, enum class EFortFriendRequestStatus K2Node_Event_RequestStatus, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess1, class FText K2Node_Select_Default, bool K2Node_Select1_Default);
};

}


