#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass FlingerInterface.FlingerInterface_C
class IFlingerInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IFlingerInterface_C* GetDefaultObj();

	void FlingerEnemyDied(class APawn* PawnThatDied);
	void AlertEnemySpawnedByFlinger(const struct FVector& PushMomentum, float PushDuration, class APawn* OwningFlinger);
	void FlingerEnemyFailedToSpawn(class AFortProjectileBase* FailedProjectile);
	void FlingerThrewAProjectileContainingAnEnemy(class AFortProjectileBase* Projectile);
	void FlingerCan_tSpawnAnEnemy();
	void FlingerCanSpawnAnEnemy();
	void CanFlingerSpawnAnEnemy(class AActor* ActorWhoAsked);
	void FlingerSpawnedAnEnemy(class AFortAIPawn* EnemySpawned, class AFortProjectileBase* ProjectileThatSpawnedThisEnemy);
};

}


