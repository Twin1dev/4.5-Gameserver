#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x1D18 - 0x1D08)
// BlueprintGeneratedClass BP_SpectatorPC.BP_SpectatorPC_C
class ABP_SpectatorPC_C : public AFortPlayerControllerSpectating
{
public:
	uint8                                        Pad_342A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1D10(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_SpectatorPC_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SpectatorPC(int32 EntryPoint, bool CallFunc_IsLocalPlayerController_ReturnValue, const struct FTransform& Temp_struct_Variable, class UAmbientControllerComponent_Athena_C* CallFunc_AddComponent_ReturnValue);
};

}


