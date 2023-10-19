#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x357C (0x398C - 0x410)
// AnimBlueprintGeneratedClass SK_F_LRG_Constructor_01_Skeleton_AnimBP.SK_F_LRG_Constructor_01_Skeleton_AnimBP_C
class USK_F_LRG_Constructor_01_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_BBB13A1043E829C1CC58D9A49D49F566; // 0x418(0x48)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_A0A7862C41D58A2D7BA59DB29DC489F6; // 0x460(0xE8)(ContainsInstancedReference)
	uint8                                        Pad_5465[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_A14060684EA36E6A38C64C9CC3B1D9AB; // 0x550(0x3B0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_DAA1FFE44162B99482DFA5B4159C7405; // 0x900(0x48)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_ECD817444DCDA9467A6F8BBBF6A2EFA0; // 0x948(0x48)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_CB3D6B164B59E44D18B490B3841357B8; // 0x990(0x3B0)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_F74199DA4EA69D7DDF67BCADDD574900; // 0xD40(0x3B0)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_DA9E260A4D1351ED0E17E58B79953B20; // 0x10F0(0x3B0)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_EAC240C941C5FF15BA213E8AAE7D17F3; // 0x14A0(0x3B0)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_CF18CD1F453F70B994906BAD08D8FE6B; // 0x1850(0x3B0)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_CD1FE29D46CD2DE2B656CC945C67F8FE; // 0x1C00(0x3B0)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_92E1B7D74567C03375E012B851D8CD81; // 0x1FB0(0x3B0)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_DBA4FC8449C310563A81A095EE9AC303; // 0x2360(0x3B0)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_4858A3D249AA3874A2388D912273B290; // 0x2710(0x3B0)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_42944FB54D814E3C274720A692DF63CA; // 0x2AC0(0x3B0)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_31F5F26747E828356CE78D849F177EEB; // 0x2E70(0x3B0)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_6057D72E42852A339E4F66840D894B6D; // 0x3220(0x3B0)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_B6385FE84A87BF3442422786D1AB2689; // 0x35D0(0x3B0)(None)
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0x3980(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HammerDynamicsOK;                                  // 0x3988(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USK_F_LRG_Constructor_01_Skeleton_AnimBP_C* GetDefaultObj();

	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_LRG_Constructor_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_A0A7862C41D58A2D7BA59DB29DC489F6();
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_LRG_Constructor_01_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_A14060684EA36E6A38C64C9CC3B1D9AB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_LRG_Constructor_01_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_B6385FE84A87BF3442422786D1AB2689();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_SK_F_LRG_Constructor_01_Skeleton_AnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue);
};

}


