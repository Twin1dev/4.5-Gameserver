#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint.Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C
// (None)

class UClass* UPickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C");

	return Clss;
}


// Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint.Default__Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C* UPickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C::GetDefaultObj()
{
	static class UPickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C*>(UPickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint.Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UPickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint.Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C::ExecuteUbergraph_Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint");

	Params::UPickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue = CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


