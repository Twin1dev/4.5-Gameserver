#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x989 - 0x980)
// WidgetBlueprintGeneratedClass FortReplayCameraOption.FortReplayCameraOption_C
class UFortReplayCameraOption_C : public UIconTextButton_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x980(0x8)(Transient, DuplicateTransient)
	enum class ESpectatorCameraType              CameraType;                                        // 0x988(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UFortReplayCameraOption_C* GetDefaultObj();

	void BP_OnClicked();
	void Construct();
	void ExecuteUbergraph_FortReplayCameraOption(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFortPlayerControllerSpectating* K2Node_DynamicCast_AsFort_Player_Controller_Spectating, bool K2Node_DynamicCast_bSuccess, class UFortReplayContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetCameraNameFromType_ReturnValue);
};

}


