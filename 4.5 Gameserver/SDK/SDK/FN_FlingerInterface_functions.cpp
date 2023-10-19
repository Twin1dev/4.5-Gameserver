#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FlingerInterface.FlingerInterface_C
// (None)

class UClass* IFlingerInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FlingerInterface_C");

	return Clss;
}


// FlingerInterface_C FlingerInterface.Default__FlingerInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IFlingerInterface_C* IFlingerInterface_C::GetDefaultObj()
{
	static class IFlingerInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IFlingerInterface_C*>(IFlingerInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FlingerInterface.FlingerInterface_C.FlingerEnemyDied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       PawnThatDied                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IFlingerInterface_C::FlingerEnemyDied(class APawn* PawnThatDied)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlingerInterface_C", "FlingerEnemyDied");

	Params::IFlingerInterface_C_FlingerEnemyDied_Params Parms{};

	Parms.PawnThatDied = PawnThatDied;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FlingerInterface.FlingerInterface_C.AlertEnemySpawnedByFlinger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     PushMomentum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PushDuration                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       OwningFlinger                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IFlingerInterface_C::AlertEnemySpawnedByFlinger(const struct FVector& PushMomentum, float PushDuration, class APawn* OwningFlinger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlingerInterface_C", "AlertEnemySpawnedByFlinger");

	Params::IFlingerInterface_C_AlertEnemySpawnedByFlinger_Params Parms{};

	Parms.PushMomentum = PushMomentum;
	Parms.PushDuration = PushDuration;
	Parms.OwningFlinger = OwningFlinger;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FlingerInterface.FlingerInterface_C.FlingerEnemyFailedToSpawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*         FailedProjectile                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IFlingerInterface_C::FlingerEnemyFailedToSpawn(class AFortProjectileBase* FailedProjectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlingerInterface_C", "FlingerEnemyFailedToSpawn");

	Params::IFlingerInterface_C_FlingerEnemyFailedToSpawn_Params Parms{};

	Parms.FailedProjectile = FailedProjectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FlingerInterface.FlingerInterface_C.FlingerThrewAProjectileContainingAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*         Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IFlingerInterface_C::FlingerThrewAProjectileContainingAnEnemy(class AFortProjectileBase* Projectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlingerInterface_C", "FlingerThrewAProjectileContainingAnEnemy");

	Params::IFlingerInterface_C_FlingerThrewAProjectileContainingAnEnemy_Params Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FlingerInterface.FlingerInterface_C.FlingerCan'tSpawnAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IFlingerInterface_C::FlingerCan_tSpawnAnEnemy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlingerInterface_C", "FlingerCan'tSpawnAnEnemy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FlingerInterface.FlingerInterface_C.FlingerCanSpawnAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IFlingerInterface_C::FlingerCanSpawnAnEnemy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlingerInterface_C", "FlingerCanSpawnAnEnemy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FlingerInterface.FlingerInterface_C.CanFlingerSpawnAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorWhoAsked                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IFlingerInterface_C::CanFlingerSpawnAnEnemy(class AActor* ActorWhoAsked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlingerInterface_C", "CanFlingerSpawnAnEnemy");

	Params::IFlingerInterface_C_CanFlingerSpawnAnEnemy_Params Parms{};

	Parms.ActorWhoAsked = ActorWhoAsked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FlingerInterface.FlingerInterface_C.FlingerSpawnedAnEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortAIPawn*                 EnemySpawned                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortProjectileBase*         ProjectileThatSpawnedThisEnemy                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IFlingerInterface_C::FlingerSpawnedAnEnemy(class AFortAIPawn* EnemySpawned, class AFortProjectileBase* ProjectileThatSpawnedThisEnemy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlingerInterface_C", "FlingerSpawnedAnEnemy");

	Params::IFlingerInterface_C_FlingerSpawnedAnEnemy_Params Parms{};

	Parms.EnemySpawned = EnemySpawned;
	Parms.ProjectileThatSpawnedThisEnemy = ProjectileThatSpawnedThisEnemy;

	UObject::ProcessEvent(Func, &Parms);

}

}


