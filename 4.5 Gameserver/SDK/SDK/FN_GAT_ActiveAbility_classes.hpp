#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x938 - 0x910)
// BlueprintGeneratedClass GAT_ActiveAbility.GAT_ActiveAbility_C
class UGAT_ActiveAbility_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x910(0x8)(Transient, DuplicateTransient)
	struct FGameplayTag                          TC_AbilitiesGenericActiveAbilityActivate;          // 0x918(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  N_SavedCollisionChannel;                           // 0x920(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_KnockBackImmunity;                              // 0x928(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           GEH_KnockBackImmunity;                             // 0x930(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGAT_ActiveAbility_C* GetDefaultObj();

	void SetKnockbackImmunity(bool ImmunityOn, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue);
	void SetPawnCollision(class AFortPawn* FortPawn, bool CollisionOn, bool CallFunc_NotEqual_NameName_ReturnValue, class FName CallFunc_GetCollisionProfileName_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAT_ActiveAbility(int32 EntryPoint);
};

}


