#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SK_Mist_Smasher_Skeleton_AnimBP_Dynamics.SK_Mist_Smasher_Skeleton_AnimBP_Dynamics_C
// (None)

class UClass* USK_Mist_Smasher_Skeleton_AnimBP_Dynamics_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_Mist_Smasher_Skeleton_AnimBP_Dynamics_C");

	return Clss;
}


// SK_Mist_Smasher_Skeleton_AnimBP_Dynamics_C SK_Mist_Smasher_Skeleton_AnimBP_Dynamics.Default__SK_Mist_Smasher_Skeleton_AnimBP_Dynamics_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_Mist_Smasher_Skeleton_AnimBP_Dynamics_C* USK_Mist_Smasher_Skeleton_AnimBP_Dynamics_C::GetDefaultObj()
{
	static class USK_Mist_Smasher_Skeleton_AnimBP_Dynamics_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_Mist_Smasher_Skeleton_AnimBP_Dynamics_C*>(USK_Mist_Smasher_Skeleton_AnimBP_Dynamics_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SK_Mist_Smasher_Skeleton_AnimBP_Dynamics.SK_Mist_Smasher_Skeleton_AnimBP_Dynamics_C.ExecuteUbergraph_SK_Mist_Smasher_Skeleton_AnimBP_Dynamics
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_Mist_Smasher_Skeleton_AnimBP_Dynamics_C::ExecuteUbergraph_SK_Mist_Smasher_Skeleton_AnimBP_Dynamics(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Mist_Smasher_Skeleton_AnimBP_Dynamics_C", "ExecuteUbergraph_SK_Mist_Smasher_Skeleton_AnimBP_Dynamics");

	Params::USK_Mist_Smasher_Skeleton_AnimBP_Dynamics_C_ExecuteUbergraph_SK_Mist_Smasher_Skeleton_AnimBP_Dynamics_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


