#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x360 - 0x2F8)
// WidgetBlueprintGeneratedClass HordeTierResultsWidget.HordeTierResultsWidget_C
class UHordeTierResultsWidget_C : public UCommonActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F8(0x8)(Transient, DuplicateTransient)
	class UMovieWidget_C*                        Movie;                                             // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResults_NameplateWidget_C*            ResultsNameplate;                                  // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  OnTierResultsWidgetComplete;                       // 0x310(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	enum class EFortCompletionResult             CompletionResult;                                  // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3367[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMediaSource*                          DefaultDefeatMedia;                                // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMediaSource*                          DefaultVictoryMedia;                               // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            VictorySound;                                      // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            DefeatSound;                                       // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MovieTextDelay;                                    // 0x348(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3368[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                NameplateIntroFunctionName;                        // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UHordeTierResultsWidget_C* GetDefaultObj();

	void OnEndOfMovieReached(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UMediaPlayer* CallFunc_GetMediaPlayer_ReturnValue);
	void ChooseMediaToUse(class UMediaSource** MediaToUse, const class FString& StringTest, bool Temp_bool_Variable, enum class EFortCompletionResult Temp_byte_Variable, enum class EFortCompletionResult Temp_byte_Variable1, class UFortHUDContext* CallFunc_GetContext_ReturnValue, const struct FFortBasicMissionInfo& CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo, bool CallFunc_GetCurrentBasicMissionInfo_ReturnValue, class UMediaSource* K2Node_Select_Default, class UMediaSource* K2Node_Select1_Default, class UMediaSource* K2Node_Select2_Default);
	void Initialize(enum class EFortCompletionResult Result, enum class EFortCompletionResult Temp_byte_Variable, class USoundBase* K2Node_Select_Default, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
	void InitializeMovie(class UMediaSource* MediaToUse, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UMediaSource* CallFunc_ChooseMediaToUse_MediaToUse, class UMediaPlayer* CallFunc_GetMediaPlayer_ReturnValue);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_HordeTierResultsWidget(int32 EntryPoint, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue);
	void OnTierResultsWidgetComplete__DelegateSignature();
};

}


