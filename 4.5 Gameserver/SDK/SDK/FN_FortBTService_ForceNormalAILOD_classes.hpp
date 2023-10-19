#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA0 - 0x98)
// BlueprintGeneratedClass FortBTService_ForceNormalAILOD.FortBTService_ForceNormalAILOD_C
class UFortBTService_ForceNormalAILOD_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UFortBTService_ForceNormalAILOD_C* GetDefaultObj();

	void ReceiveActivation(class AActor* OwnerActor);
	void ReceiveDeactivation(class AActor* OwnerActor);
	void ExecuteUbergraph_FortBTService_ForceNormalAILOD(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class AFortAIController* K2Node_DynamicCast_AsFort_AIController, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_OwnerActor1, class AFortAIController* K2Node_DynamicCast_AsFort_AIController1, bool K2Node_DynamicCast_bSuccess1);
};

}


