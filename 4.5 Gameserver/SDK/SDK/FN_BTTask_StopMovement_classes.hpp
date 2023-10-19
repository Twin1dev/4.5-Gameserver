#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA8 - 0xA0)
// BlueprintGeneratedClass BTTask_StopMovement.BTTask_StopMovement_C
class UBTTask_StopMovement_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBTTask_StopMovement_C* GetDefaultObj();

	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_BTTask_StopMovement(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class AAIController* K2Node_DynamicCast_AsAIController, bool K2Node_DynamicCast_bSuccess);
};

}


