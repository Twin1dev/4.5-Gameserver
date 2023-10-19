#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP.SK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP_C
// (None)

class UClass* USK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP_C");

	return Clss;
}


// SK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP_C SK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP.Default__SK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP_C* USK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP_C::GetDefaultObj()
{
	static class USK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP_C*>(USK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP.SK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_F76CB98F41D92EB829E2918E0A8075D7
// (BlueprintEvent)
// Parameters:

void USK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_F76CB98F41D92EB829E2918E0A8075D7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_F76CB98F41D92EB829E2918E0A8075D7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP.SK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void USK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP.SK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP_C.ExecuteUbergraph_SK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP_C::ExecuteUbergraph_SK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP_C", "ExecuteUbergraph_SK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP");

	Params::USK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP_C_ExecuteUbergraph_SK_Pickaxe_WWIIPilot_Export_Skeleton_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue = CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


