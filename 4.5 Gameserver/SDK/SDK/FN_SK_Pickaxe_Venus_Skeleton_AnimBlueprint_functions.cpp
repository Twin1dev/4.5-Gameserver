#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SK_Pickaxe_Venus_Skeleton_AnimBlueprint.SK_Pickaxe_Venus_Skeleton_AnimBlueprint_C
// (None)

class UClass* USK_Pickaxe_Venus_Skeleton_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_Pickaxe_Venus_Skeleton_AnimBlueprint_C");

	return Clss;
}


// SK_Pickaxe_Venus_Skeleton_AnimBlueprint_C SK_Pickaxe_Venus_Skeleton_AnimBlueprint.Default__SK_Pickaxe_Venus_Skeleton_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_Pickaxe_Venus_Skeleton_AnimBlueprint_C* USK_Pickaxe_Venus_Skeleton_AnimBlueprint_C::GetDefaultObj()
{
	static class USK_Pickaxe_Venus_Skeleton_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_Pickaxe_Venus_Skeleton_AnimBlueprint_C*>(USK_Pickaxe_Venus_Skeleton_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SK_Pickaxe_Venus_Skeleton_AnimBlueprint.SK_Pickaxe_Venus_Skeleton_AnimBlueprint_C.ExecuteUbergraph_SK_Pickaxe_Venus_Skeleton_AnimBlueprint
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_Pickaxe_Venus_Skeleton_AnimBlueprint_C::ExecuteUbergraph_SK_Pickaxe_Venus_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Pickaxe_Venus_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_SK_Pickaxe_Venus_Skeleton_AnimBlueprint");

	Params::USK_Pickaxe_Venus_Skeleton_AnimBlueprint_C_ExecuteUbergraph_SK_Pickaxe_Venus_Skeleton_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


