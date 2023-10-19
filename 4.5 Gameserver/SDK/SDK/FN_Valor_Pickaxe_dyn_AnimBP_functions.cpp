#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Valor_Pickaxe_dyn_AnimBP.Valor_Pickaxe_dyn_AnimBP_C
// (None)

class UClass* UValor_Pickaxe_dyn_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Valor_Pickaxe_dyn_AnimBP_C");

	return Clss;
}


// Valor_Pickaxe_dyn_AnimBP_C Valor_Pickaxe_dyn_AnimBP.Default__Valor_Pickaxe_dyn_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UValor_Pickaxe_dyn_AnimBP_C* UValor_Pickaxe_dyn_AnimBP_C::GetDefaultObj()
{
	static class UValor_Pickaxe_dyn_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UValor_Pickaxe_dyn_AnimBP_C*>(UValor_Pickaxe_dyn_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Valor_Pickaxe_dyn_AnimBP.Valor_Pickaxe_dyn_AnimBP_C.ExecuteUbergraph_Valor_Pickaxe_dyn_AnimBP
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UValor_Pickaxe_dyn_AnimBP_C::ExecuteUbergraph_Valor_Pickaxe_dyn_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Valor_Pickaxe_dyn_AnimBP_C", "ExecuteUbergraph_Valor_Pickaxe_dyn_AnimBP");

	Params::UValor_Pickaxe_dyn_AnimBP_C_ExecuteUbergraph_Valor_Pickaxe_dyn_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


