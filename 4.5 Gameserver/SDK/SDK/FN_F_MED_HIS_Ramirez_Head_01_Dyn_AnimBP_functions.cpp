#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP.F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C
// (None)

class UClass* UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C");

	return Clss;
}


// F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP.Default__F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C* UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C::GetDefaultObj()
{
	static class UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C*>(UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP.F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_AnimGraphNode_BlendListByBool_90E87AEB4216ABCCD1A7C288696B4405
// (BlueprintEvent)
// Parameters:

void UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_AnimGraphNode_BlendListByBool_90E87AEB4216ABCCD1A7C288696B4405()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_AnimGraphNode_BlendListByBool_90E87AEB4216ABCCD1A7C288696B4405");



	UObject::ProcessEvent(Func, nullptr);

}


// Function F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP.F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP.F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C.ExecuteUbergraph_F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C::ExecuteUbergraph_F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C", "ExecuteUbergraph_F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP");

	Params::UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C_ExecuteUbergraph_F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue = CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


