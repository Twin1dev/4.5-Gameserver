#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x22C - 0x210)
// WidgetBlueprintGeneratedClass StreamingInstallProgressBar.StreamingInstallProgressBar_C
class UStreamingInstallProgressBar_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UProgressBar*                          StreamingInstallProgressBar;                       // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                          RefreshTimer;                                      // 0x220(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        RefreshTime;                                       // 0x228(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UStreamingInstallProgressBar_C* GetDefaultObj();

	void RefreshTick(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, float CallFunc_ContentInstallationProgress_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void ToggleTimer(bool Enable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_StreamingInstallProgressBar(int32 EntryPoint);
};

}


