#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SK_F_Outlander_02_Skeleton_Anim_Blueprint.SK_F_Outlander_02_Skeleton_Anim_Blueprint_C
// (None)

class UClass* USK_F_Outlander_02_Skeleton_Anim_Blueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_F_Outlander_02_Skeleton_Anim_Blueprint_C");

	return Clss;
}


// SK_F_Outlander_02_Skeleton_Anim_Blueprint_C SK_F_Outlander_02_Skeleton_Anim_Blueprint.Default__SK_F_Outlander_02_Skeleton_Anim_Blueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_F_Outlander_02_Skeleton_Anim_Blueprint_C* USK_F_Outlander_02_Skeleton_Anim_Blueprint_C::GetDefaultObj()
{
	static class USK_F_Outlander_02_Skeleton_Anim_Blueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_F_Outlander_02_Skeleton_Anim_Blueprint_C*>(USK_F_Outlander_02_Skeleton_Anim_Blueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SK_F_Outlander_02_Skeleton_Anim_Blueprint.SK_F_Outlander_02_Skeleton_Anim_Blueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_Outlander_02_Skeleton_Anim_Blueprint_AnimGraphNode_AnimDynamics_EC6023534626A7FAFE689C8E45E86E07
// (BlueprintEvent)
// Parameters:

void USK_F_Outlander_02_Skeleton_Anim_Blueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_Outlander_02_Skeleton_Anim_Blueprint_AnimGraphNode_AnimDynamics_EC6023534626A7FAFE689C8E45E86E07()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_F_Outlander_02_Skeleton_Anim_Blueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_Outlander_02_Skeleton_Anim_Blueprint_AnimGraphNode_AnimDynamics_EC6023534626A7FAFE689C8E45E86E07");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_F_Outlander_02_Skeleton_Anim_Blueprint.SK_F_Outlander_02_Skeleton_Anim_Blueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_Outlander_02_Skeleton_Anim_Blueprint_AnimGraphNode_CopyPoseFromMesh_A1F2F506414045AFAEBE3AAA3AEA4BA7
// (BlueprintEvent)
// Parameters:

void USK_F_Outlander_02_Skeleton_Anim_Blueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_Outlander_02_Skeleton_Anim_Blueprint_AnimGraphNode_CopyPoseFromMesh_A1F2F506414045AFAEBE3AAA3AEA4BA7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_F_Outlander_02_Skeleton_Anim_Blueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_Outlander_02_Skeleton_Anim_Blueprint_AnimGraphNode_CopyPoseFromMesh_A1F2F506414045AFAEBE3AAA3AEA4BA7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_F_Outlander_02_Skeleton_Anim_Blueprint.SK_F_Outlander_02_Skeleton_Anim_Blueprint_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void USK_F_Outlander_02_Skeleton_Anim_Blueprint_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_F_Outlander_02_Skeleton_Anim_Blueprint_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_F_Outlander_02_Skeleton_Anim_Blueprint.SK_F_Outlander_02_Skeleton_Anim_Blueprint_C.ExecuteUbergraph_SK_F_Outlander_02_Skeleton_Anim_Blueprint
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_F_Outlander_02_Skeleton_Anim_Blueprint_C::ExecuteUbergraph_SK_F_Outlander_02_Skeleton_Anim_Blueprint(int32 EntryPoint, float CallFunc_MapRangeClamped_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_F_Outlander_02_Skeleton_Anim_Blueprint_C", "ExecuteUbergraph_SK_F_Outlander_02_Skeleton_Anim_Blueprint");

	Params::USK_F_Outlander_02_Skeleton_Anim_Blueprint_C_ExecuteUbergraph_SK_F_Outlander_02_Skeleton_Anim_Blueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue = CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


