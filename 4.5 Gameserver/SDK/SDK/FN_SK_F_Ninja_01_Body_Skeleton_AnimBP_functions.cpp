#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SK_F_Ninja_01_Body_Skeleton_AnimBP.SK_F_Ninja_01_Body_Skeleton_AnimBP_C
// (None)

class UClass* USK_F_Ninja_01_Body_Skeleton_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_F_Ninja_01_Body_Skeleton_AnimBP_C");

	return Clss;
}


// SK_F_Ninja_01_Body_Skeleton_AnimBP_C SK_F_Ninja_01_Body_Skeleton_AnimBP.Default__SK_F_Ninja_01_Body_Skeleton_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_F_Ninja_01_Body_Skeleton_AnimBP_C* USK_F_Ninja_01_Body_Skeleton_AnimBP_C::GetDefaultObj()
{
	static class USK_F_Ninja_01_Body_Skeleton_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_F_Ninja_01_Body_Skeleton_AnimBP_C*>(USK_F_Ninja_01_Body_Skeleton_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SK_F_Ninja_01_Body_Skeleton_AnimBP.SK_F_Ninja_01_Body_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_Ninja_01_Body_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_1F1787404E7008182EF87F809FB4795C
// (BlueprintEvent)
// Parameters:

void USK_F_Ninja_01_Body_Skeleton_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_Ninja_01_Body_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_1F1787404E7008182EF87F809FB4795C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_F_Ninja_01_Body_Skeleton_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_Ninja_01_Body_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_1F1787404E7008182EF87F809FB4795C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_F_Ninja_01_Body_Skeleton_AnimBP.SK_F_Ninja_01_Body_Skeleton_AnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void USK_F_Ninja_01_Body_Skeleton_AnimBP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_F_Ninja_01_Body_Skeleton_AnimBP_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_F_Ninja_01_Body_Skeleton_AnimBP.SK_F_Ninja_01_Body_Skeleton_AnimBP_C.ExecuteUbergraph_SK_F_Ninja_01_Body_Skeleton_AnimBP
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_F_Ninja_01_Body_Skeleton_AnimBP_C::ExecuteUbergraph_SK_F_Ninja_01_Body_Skeleton_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_F_Ninja_01_Body_Skeleton_AnimBP_C", "ExecuteUbergraph_SK_F_Ninja_01_Body_Skeleton_AnimBP");

	Params::USK_F_Ninja_01_Body_Skeleton_AnimBP_C_ExecuteUbergraph_SK_F_Ninja_01_Body_Skeleton_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue = CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


