#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2D0 - 0x2B8)
// WidgetBlueprintGeneratedClass MissionTrackerEntry.MissionTrackerEntry_C
class UMissionTrackerEntry_C : public UFortMissionTrackerEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B8(0x8)(Transient, DuplicateTransient)
	UMulticastDelegateProperty_                  WidgetVisibilityChanged;                           // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UMissionTrackerEntry_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_MissionTrackerEntry(int32 EntryPoint);
	void WidgetVisibilityChanged__DelegateSignature();
};

}


