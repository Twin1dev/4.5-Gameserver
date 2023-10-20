#pragma once
// https://docs.unrealengine.com/4.27/en-US/API/Plugins/GameplayAbilities/UAbilitySystemComponent/GiveAbility/
static inline FGameplayAbilitySpecHandle* (*GiveAbility)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle*, FGameplayAbilitySpec inSpec) = decltype(GiveAbility)(BaseAddress() + 0x57fe50);

// Decent, Used for giving the player Abilities, which is stuff as sprinting, jumping, and pretty much anything you could think of.
static void GiveAbilitySetToASC(UAbilitySystemComponent* ASC)
{
	static auto AbilitySet = StaticLoadObject<UFortAbilitySet>("/Game/Abilities/Player/Generic/Traits/DefaultPlayer/GAS_DefaultPlayer.GAS_DefaultPlayer");

	for (int i = 0; i < AbilitySet->GameplayAbilities.Num(); i++)
	{
		UGameplayAbility* AbilityToUse = (UGameplayAbility*)AbilitySet->GameplayAbilities[i].Get()->DefaultObject;

		FGameplayAbilitySpecHandle Handle;
		Handle.GenerateNewHandle();

		FGameplayAbilitySpec Spec{ -1,-1,-1 };

		Spec.Handle = Handle;
		Spec.Ability = AbilityToUse;
		Spec.Level = 1;
		Spec.InputID = 1;

		GiveAbility(ASC, &Handle, Spec);
	}
}