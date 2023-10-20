#pragma once
// https://docs.unrealengine.com/4.27/en-US/API/Plugins/GameplayAbilities/UAbilitySystemComponent/GiveAbility/
static inline FGameplayAbilitySpecHandle* (*GiveAbility)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle*, FGameplayAbilitySpec inSpec) = decltype(GiveAbility)(BaseAddress() + 0x57fe50);
// https://docs.unrealengine.com/5.0/en-US/API/Plugins/GameplayAbilities/UAbilitySystemComponent/InternalTryActivateAbility/
static inline bool (*InternalTryActivateAbility)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle Handle, const FPredictionKey* InPredictionKey, UGameplayAbility** OutInstancedAbility, void* OnGameplayAbilityEndedDelegate, const FGameplayEventData* TriggerEventData) = decltype(InternalTryActivateAbility)(BaseAddress() + 0x581590);

static void GrantAbility(UAbilitySystemComponent* ASC, UGameplayAbility* Ability)
{
	FGameplayAbilitySpecHandle Handle;
	Handle.GenerateNewHandle();

	FGameplayAbilitySpec Spec{ -1,-1,-1 };

	Spec.Handle = Handle;
	Spec.Ability = Ability;
	Spec.Level = 1;
	Spec.InputID = 1;

	GiveAbility(ASC, &Handle, Spec);
}

// Decent, Used for giving the player Abilities, which is stuff as sprinting, jumping, and pretty much anything you could think of.
static void GiveAbilitySetToASC(UAbilitySystemComponent* ASC)
{
	static auto AbilitySet = StaticFindObject<UFortAbilitySet>("/Game/Abilities/Player/Generic/Traits/DefaultPlayer/GAS_DefaultPlayer.GAS_DefaultPlayer");

	for (int i = 0; i < AbilitySet->GameplayAbilities.Num(); i++)
	{
		UGameplayAbility* AbilityToUse = (UGameplayAbility*)AbilitySet->GameplayAbilities[i].Get()->DefaultObject;

		GrantAbility(ASC, AbilityToUse);
	}
	UGameplayAbility* CommitExecute = (UGameplayAbility*)StaticFindObject<UClass>("/Game/Abilities/Weapons/Ranged/GA_Ranged_GenericDamage.GA_Ranged_GenericDamage_C")->DefaultObject;
	GrantAbility(ASC, CommitExecute);
}

// https://docs.unrealengine.com/4.26/en-US/API/Plugins/GameplayAbilities/UAbilitySystemComponent/InternalServerTr-/
void InternalServerTryActivateAbilityHook(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilitySpecHandle Handle, bool InputPressed, const FPredictionKey* PredictionKey, const FGameplayEventData* TriggerEventData)
{
	FGameplayAbilitySpec* Spec = nullptr;

	for (int i = 0; i < AbilitySystemComponent->ActivatableAbilities.Items.Num(); i++)
	{
		auto& CurrentHandle = AbilitySystemComponent->ActivatableAbilities.Items[i].Handle;

		if (CurrentHandle.Handle == Handle.Handle)
		{
			Spec = &AbilitySystemComponent->ActivatableAbilities.Items[i];
			std::cout << "Found Spec\n";
		}
	}

	if (!Spec->Ability)
	{
		std::cout << "FailedToActivate\n";
		AbilitySystemComponent->ClientActivateAbilityFailed(Handle, PredictionKey->Current);
		return;
	}

	Spec->InputPressed = true;

	UGameplayAbility* InstancedAbility = nullptr;

	if (InternalTryActivateAbility(AbilitySystemComponent, Handle, PredictionKey, &InstancedAbility, nullptr, TriggerEventData))
	{
		std::cout << "Activatd\n";
	} else
	{
		AbilitySystemComponent->ClientActivateAbilityFailed(Handle, PredictionKey->Current);

		std::cout << "FailedToActivate\n";
		Spec->InputPressed = false;

		
	}

}