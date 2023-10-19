#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IMeleeWhileMoving.IMeleeWhileMoving_C
// (None)

class UClass* IIMeleeWhileMoving_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IMeleeWhileMoving_C");

	return Clss;
}


// IMeleeWhileMoving_C IMeleeWhileMoving.Default__IMeleeWhileMoving_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IIMeleeWhileMoving_C* IIMeleeWhileMoving_C::GetDefaultObj()
{
	static class IIMeleeWhileMoving_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IIMeleeWhileMoving_C*>(IIMeleeWhileMoving_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IMeleeWhileMoving.IMeleeWhileMoving_C.GetCollisionPredictionComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UShapeComponent*             Collision_Prediction_Shape_Component                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIMeleeWhileMoving_C::GetCollisionPredictionComponent(class UShapeComponent** Collision_Prediction_Shape_Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IMeleeWhileMoving_C", "GetCollisionPredictionComponent");

	Params::IIMeleeWhileMoving_C_GetCollisionPredictionComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Collision_Prediction_Shape_Component != nullptr)
		*Collision_Prediction_Shape_Component = Parms.Collision_Prediction_Shape_Component;

}

}


