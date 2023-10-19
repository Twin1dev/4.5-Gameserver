#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA10 (0xE20 - 0x410)
// AnimBlueprintGeneratedClass Fortnite_Base_Head_Export_Skeleton_AnimBP.Fortnite_Base_Head_Export_Skeleton_AnimBP_C
class UFortnite_Base_Head_Export_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x410(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_PoseBlendNode               AnimGraphNode_PoseBlendNode_0E491F3A4C933A03AAE42DA602295362; // 0x418(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_C9D648834AA29F5B677902BB5A9DC15C; // 0x4E0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_94E41D364E86D3FFC2D042845913D0EE; // 0x528(0xB0)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_9AC0772D481A4B85CE045AA17CE0F79E; // 0x5D8(0xE8)(ContainsInstancedReference)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_B0BAEC37412A3BDE897683AA32FAE4E1; // 0x6C0(0xE0)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_3971854A46E6B529767EA2AB708A8D46; // 0x7A0(0x120)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_D687C7FB4A07645ECE24DBB182B71823; // 0x8C0(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_19E6568A48732F90AD2036B56ECA0D46; // 0x9A0(0x50)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_C898D19D46B0E9723DD75AA4710C2707; // 0x9F0(0x50)(None)
	struct FAnimNode_LiveLinkPose                AnimGraphNode_LiveLinkPose_67AFEC6E4E43108E1E699081080B9448; // 0xA40(0x58)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_E8FB05504628ECA52ADD038CBD818957; // 0xA98(0xE0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_91F05C994C7B4758BA35D2B1F94A7663; // 0xB78(0xE0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_53F166F14732C8ECBEC8C0A540192456; // 0xC58(0x50)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_BF175D4149F235AF8059B38CB3517406; // 0xCA8(0x120)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3D1C5A1541A1147D684D99B42EDBAB8C; // 0xDC8(0x50)(None)
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0xE18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UFortnite_Base_Head_Export_Skeleton_AnimBP_C* GetDefaultObj();

	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue);
};

}


