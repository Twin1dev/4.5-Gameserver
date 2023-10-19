#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x428 - 0x420)
// BlueprintGeneratedClass GCL_Carmine_Jump_Trails.GCL_Carmine_Jump_Trails_C
class AGCL_Carmine_Jump_Trails_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AGCL_Carmine_Jump_Trails_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_GCL_Carmine_Jump_Trails(int32 EntryPoint, enum class EEndPlayReason K2Node_Event_EndPlayReason);
};

}


