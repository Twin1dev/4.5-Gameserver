#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SK_Pickaxe_CarbideBlue_AnimBP.SK_Pickaxe_CarbideBlue_AnimBP_C
// (None)

class UClass* USK_Pickaxe_CarbideBlue_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_Pickaxe_CarbideBlue_AnimBP_C");

	return Clss;
}


// SK_Pickaxe_CarbideBlue_AnimBP_C SK_Pickaxe_CarbideBlue_AnimBP.Default__SK_Pickaxe_CarbideBlue_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_Pickaxe_CarbideBlue_AnimBP_C* USK_Pickaxe_CarbideBlue_AnimBP_C::GetDefaultObj()
{
	static class USK_Pickaxe_CarbideBlue_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_Pickaxe_CarbideBlue_AnimBP_C*>(USK_Pickaxe_CarbideBlue_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SK_Pickaxe_CarbideBlue_AnimBP.SK_Pickaxe_CarbideBlue_AnimBP_C.ExecuteUbergraph_SK_Pickaxe_CarbideBlue_AnimBP
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_Pickaxe_CarbideBlue_AnimBP_C::ExecuteUbergraph_SK_Pickaxe_CarbideBlue_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_Pickaxe_CarbideBlue_AnimBP_C", "ExecuteUbergraph_SK_Pickaxe_CarbideBlue_AnimBP");

	Params::USK_Pickaxe_CarbideBlue_AnimBP_C_ExecuteUbergraph_SK_Pickaxe_CarbideBlue_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


