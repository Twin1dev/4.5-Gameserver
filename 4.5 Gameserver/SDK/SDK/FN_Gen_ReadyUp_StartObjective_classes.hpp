#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5C (0x84 - 0x28)
// BlueprintGeneratedClass Gen_ReadyUp_StartObjective.Gen_ReadyUp_StartObjective_C
class UGen_ReadyUp_StartObjective_C : public UFortMissionEventParams
{
public:
	float                                        ReadyUpTimerLength;                                // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36BA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  InteractText;                                      // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_36BB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InteractSpawnLocation;                             // 0x50(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                        BluGloMissionActivationQty;                        // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGen_ReadyUp_StartObjective_C* GetDefaultObj();

	void SetParams(float ReadyUpTimerLength, const struct FTransform& InteractSpawnLocation, class FText InteractText, int32 BluGloMissionActivationQty, class UGen_ReadyUp_StartObjective_C** ThisObject);
	void BreakParams(float* ReadyUpTimerLength, struct FTransform* InteractSpawnLocation, class FText* InteractText, int32* BluGloMissionActivationQty);
};

}


