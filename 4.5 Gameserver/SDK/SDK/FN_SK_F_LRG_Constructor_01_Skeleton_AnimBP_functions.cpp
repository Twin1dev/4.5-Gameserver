#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SK_F_LRG_Constructor_01_Skeleton_AnimBP.SK_F_LRG_Constructor_01_Skeleton_AnimBP_C
// (None)

class UClass* USK_F_LRG_Constructor_01_Skeleton_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_F_LRG_Constructor_01_Skeleton_AnimBP_C");

	return Clss;
}


// SK_F_LRG_Constructor_01_Skeleton_AnimBP_C SK_F_LRG_Constructor_01_Skeleton_AnimBP.Default__SK_F_LRG_Constructor_01_Skeleton_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_F_LRG_Constructor_01_Skeleton_AnimBP_C* USK_F_LRG_Constructor_01_Skeleton_AnimBP_C::GetDefaultObj()
{
	static class USK_F_LRG_Constructor_01_Skeleton_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_F_LRG_Constructor_01_Skeleton_AnimBP_C*>(USK_F_LRG_Constructor_01_Skeleton_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SK_F_LRG_Constructor_01_Skeleton_AnimBP.SK_F_LRG_Constructor_01_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_LRG_Constructor_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_A0A7862C41D58A2D7BA59DB29DC489F6
// (BlueprintEvent)
// Parameters:

void USK_F_LRG_Constructor_01_Skeleton_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_LRG_Constructor_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_A0A7862C41D58A2D7BA59DB29DC489F6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_F_LRG_Constructor_01_Skeleton_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_LRG_Constructor_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_A0A7862C41D58A2D7BA59DB29DC489F6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_F_LRG_Constructor_01_Skeleton_AnimBP.SK_F_LRG_Constructor_01_Skeleton_AnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void USK_F_LRG_Constructor_01_Skeleton_AnimBP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_F_LRG_Constructor_01_Skeleton_AnimBP_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_F_LRG_Constructor_01_Skeleton_AnimBP.SK_F_LRG_Constructor_01_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_LRG_Constructor_01_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_A14060684EA36E6A38C64C9CC3B1D9AB
// (BlueprintEvent)
// Parameters:

void USK_F_LRG_Constructor_01_Skeleton_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_LRG_Constructor_01_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_A14060684EA36E6A38C64C9CC3B1D9AB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_F_LRG_Constructor_01_Skeleton_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_LRG_Constructor_01_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_A14060684EA36E6A38C64C9CC3B1D9AB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_F_LRG_Constructor_01_Skeleton_AnimBP.SK_F_LRG_Constructor_01_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_LRG_Constructor_01_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_B6385FE84A87BF3442422786D1AB2689
// (BlueprintEvent)
// Parameters:

void USK_F_LRG_Constructor_01_Skeleton_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_LRG_Constructor_01_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_B6385FE84A87BF3442422786D1AB2689()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_F_LRG_Constructor_01_Skeleton_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_LRG_Constructor_01_Skeleton_AnimBP_AnimGraphNode_AnimDynamics_B6385FE84A87BF3442422786D1AB2689");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SK_F_LRG_Constructor_01_Skeleton_AnimBP.SK_F_LRG_Constructor_01_Skeleton_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_F_LRG_Constructor_01_Skeleton_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_F_LRG_Constructor_01_Skeleton_AnimBP_C", "BlueprintUpdateAnimation");

	Params::USK_F_LRG_Constructor_01_Skeleton_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SK_F_LRG_Constructor_01_Skeleton_AnimBP.SK_F_LRG_Constructor_01_Skeleton_AnimBP_C.ExecuteUbergraph_SK_F_LRG_Constructor_01_Skeleton_AnimBP
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_F_LRG_Constructor_01_Skeleton_AnimBP_C::ExecuteUbergraph_SK_F_LRG_Constructor_01_Skeleton_AnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_F_LRG_Constructor_01_Skeleton_AnimBP_C", "ExecuteUbergraph_SK_F_LRG_Constructor_01_Skeleton_AnimBP");

	Params::USK_F_LRG_Constructor_01_Skeleton_AnimBP_C_ExecuteUbergraph_SK_F_LRG_Constructor_01_Skeleton_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue = CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


