#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xD60 - 0xD58)
// BlueprintGeneratedClass Trap_Athena_WallSpikes.Trap_Athena_WallSpikes_C
class ATrap_Athena_WallSpikes_C : public ATrap_Athena_Spikes_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD58(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ATrap_Athena_WallSpikes_C* GetDefaultObj();

	void UserConstructionScript();
	void SetSpikePosition(float NewSpikePosition);
	void ExecuteUbergraph_Trap_Athena_WallSpikes(int32 EntryPoint, float K2Node_Event_NewSpikePosition, const struct FVector& CallFunc_MakeVector_ReturnValue);
};

}


