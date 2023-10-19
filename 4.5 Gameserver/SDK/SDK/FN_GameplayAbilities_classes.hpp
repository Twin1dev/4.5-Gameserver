#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.AbilitySystemBlueprintLibrary
class UAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAbilitySystemBlueprintLibrary* GetDefaultObj();

	bool TargetDataHasOrigin(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
	bool TargetDataHasHitResult(struct FGameplayAbilityTargetDataHandle& HitResult, int32 Index);
	bool TargetDataHasEndPoint(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
	bool TargetDataHasActor(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
	struct FGameplayEffectSpecHandle SetStackCountToMax(const struct FGameplayEffectSpecHandle& SpecHandle);
	struct FGameplayEffectSpecHandle SetStackCount(const struct FGameplayEffectSpecHandle& SpecHandle, int32 StackCount);
	struct FGameplayEffectSpecHandle SetDuration(const struct FGameplayEffectSpecHandle& SpecHandle, float Duration);
	void SendGameplayEventToActor(class AActor* Actor, const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload);
	bool NotEqual_GameplayAttributeGameplayAttribute(const struct FGameplayAttribute& AttributeA, const struct FGameplayAttribute& AttributeB);
	struct FGameplayEffectSpecHandle MakeSpecHandle(class UGameplayEffect* InGameplayEffect, class AActor* InInstigator, class AActor* InEffectCauser, float InLevel);
	struct FGameplayTargetDataFilterHandle MakeFilterHandle(const struct FGameplayTargetDataFilter& Filter, class AActor* FilterActor);
	bool IsValid(const struct FGameplayAttribute& Attribute);
	bool IsInstigatorLocallyControlledPlayer(const struct FGameplayCueParameters& Parameters);
	bool IsInstigatorLocallyControlled(const struct FGameplayCueParameters& Parameters);
	bool HasHitResult(const struct FGameplayCueParameters& Parameters);
	struct FTransform GetTargetDataOrigin(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
	struct FTransform GetTargetDataEndPointTransform(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
	struct FVector GetTargetDataEndPoint(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
	struct FVector GetOrigin(const struct FGameplayCueParameters& Parameters);
	float GetModifiedAttributeMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayAttribute& Attribute);
	struct FTransform GetInstigatorTransform(const struct FGameplayCueParameters& Parameters);
	class AActor* GetInstigatorActor(const struct FGameplayCueParameters& Parameters);
	struct FHitResult GetHitResultFromTargetData(struct FGameplayAbilityTargetDataHandle& HitResult, int32 Index);
	struct FHitResult GetHitResult(const struct FGameplayCueParameters& Parameters);
	bool GetGameplayCueEndLocationAndNormal(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Location, struct FVector* Normal);
	bool GetGameplayCueDirection(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Direction);
	float GetFloatAttributeFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	float GetFloatAttributeBaseFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	float GetFloatAttributeBase(class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	float GetFloatAttribute(class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	struct FGameplayEffectContextHandle GetEffectContext(const struct FGameplayEffectSpecHandle& SpecHandle);
	int32 GetDataCountFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData);
	TArray<struct FGameplayEffectSpecHandle> GetAllLinkedGameplayEffectSpecHandles(const struct FGameplayEffectSpecHandle& SpecHandle);
	TArray<class AActor*> GetActorsFromTargetData(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index);
	int32 GetActorCount(const struct FGameplayCueParameters& Parameters);
	class AActor* GetActorByIndex(const struct FGameplayCueParameters& Parameters, int32 Index);
	float GetActiveGameplayEffectTotalDuration(const struct FActiveGameplayEffectHandle& ActiveHandle);
	float GetActiveGameplayEffectStartTime(const struct FActiveGameplayEffectHandle& ActiveHandle);
	int32 GetActiveGameplayEffectStackLimitCount(const struct FActiveGameplayEffectHandle& ActiveHandle);
	int32 GetActiveGameplayEffectStackCount(const struct FActiveGameplayEffectHandle& ActiveHandle);
	float GetActiveGameplayEffectRemainingDuration(class UObject* WorldContextObject, const struct FActiveGameplayEffectHandle& ActiveHandle);
	float GetActiveGameplayEffectExpectedEndTime(const struct FActiveGameplayEffectHandle& ActiveHandle);
	class FString GetActiveGameplayEffectDebugString(const struct FActiveGameplayEffectHandle& ActiveHandle);
	class UAbilitySystemComponent* GetAbilitySystemComponent(class AActor* Actor);
	void ForwardGameplayCueToTarget(TScriptInterface<class IGameplayCueInterface> TargetCueInterface, enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	struct FGameplayAbilityTargetDataHandle FilterTargetData(struct FGameplayAbilityTargetDataHandle& TargetDataHandle, const struct FGameplayTargetDataFilterHandle& ActorFilterClass);
	float EvaluateAttributeValueWithTagsAndBase(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& TargetTags, float BaseValue, bool* bSuccess);
	float EvaluateAttributeValueWithTags(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& TargetTags, bool* bSuccess);
	bool EqualEqual_GameplayAttributeGameplayAttribute(const struct FGameplayAttribute& AttributeA, const struct FGameplayAttribute& AttributeB);
	void EffectContextSetOrigin(const struct FGameplayEffectContextHandle& EffectContext, const struct FVector& Origin);
	bool EffectContextIsValid(const struct FGameplayEffectContextHandle& EffectContext);
	bool EffectContextIsInstigatorLocallyControlled(const struct FGameplayEffectContextHandle& EffectContext);
	bool EffectContextHasHitResult(const struct FGameplayEffectContextHandle& EffectContext);
	class UObject* EffectContextGetSourceObject(const struct FGameplayEffectContextHandle& EffectContext);
	class AActor* EffectContextGetOriginalInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext);
	struct FVector EffectContextGetOrigin(const struct FGameplayEffectContextHandle& EffectContext);
	class AActor* EffectContextGetInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext);
	struct FHitResult EffectContextGetHitResult(const struct FGameplayEffectContextHandle& EffectContext);
	class AActor* EffectContextGetEffectCauser(const struct FGameplayEffectContextHandle& EffectContext);
	void EffectContextAddHitResult(const struct FGameplayEffectContextHandle& EffectContext, const struct FHitResult& HitResult, bool bReset);
	bool DoesTargetDataContainActor(struct FGameplayAbilityTargetDataHandle& TargetData, int32 Index, class AActor* Actor);
	bool DoesGameplayCueMeetTagRequirements(const struct FGameplayCueParameters& Parameters, struct FGameplayTagRequirements& SourceTagReqs, struct FGameplayTagRequirements& TargetTagReqs);
	struct FGameplayEffectSpecHandle CloneSpecHandle(class AActor* InNewInstigator, class AActor* InEffectCauser, const struct FGameplayEffectSpecHandle& GameplayEffectSpecHandle_Clone);
	struct FGameplayEffectSpecHandle AssignTagSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& DataTag, float Magnitude);
	struct FGameplayEffectSpecHandle AssignSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, class FName DataName, float Magnitude);
	struct FGameplayAbilityTargetDataHandle AppendTargetDataHandle(const struct FGameplayAbilityTargetDataHandle& TargetHandle, struct FGameplayAbilityTargetDataHandle& HandleToAdd);
	struct FGameplayEffectSpecHandle AddLinkedGameplayEffectSpec(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayEffectSpecHandle& LinkedGameplayEffectSpec);
	struct FGameplayEffectSpecHandle AddLinkedGameplayEffect(const struct FGameplayEffectSpecHandle& SpecHandle, TSubclassOf<class UGameplayEffect> LinkedGameplayEffect);
	struct FGameplayEffectSpecHandle AddGrantedTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags);
	struct FGameplayEffectSpecHandle AddGrantedTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag);
	struct FGameplayEffectSpecHandle AddAssetTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags);
	struct FGameplayEffectSpecHandle AddAssetTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag);
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromLocations(struct FGameplayAbilityTargetingLocationInfo& SourceLocation, struct FGameplayAbilityTargetingLocationInfo& TargetLocation);
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromHitResult(struct FHitResult& HitResult);
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActorArray(TArray<class AActor*>& ActorArray, bool OneTargetPerHandle);
	struct FGameplayAbilityTargetDataHandle AbilityTargetDataFromActor(class AActor* Actor);
};

// 0x1058 (0x11C8 - 0x170)
// Class GameplayAbilities.AbilitySystemComponent
class UAbilitySystemComponent : public UGameplayTasksComponent
{
public:
	uint8                                        Pad_B0A[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAttributeDefaults>            DefaultStartingData;                               // 0x180(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAttributeSet*>                 SpawnedAttributes;                                 // 0x190(0x10)(ExportObject, Net, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_B0B[0xC8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OutgoingDuration;                                  // 0x268(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IncomingDuration;                                  // 0x26C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B0C[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        ClientDebugStrings;                                // 0x298(0x10)(Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPublic)
	TArray<class FString>                        ServerDebugStrings;                                // 0x2A8(0x10)(Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPublic)
	struct FGameplayAbilitySpecContainer         ActivatableAbilities;                              // 0x2B8(0xC8)(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_B0D[0x50];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UGameplayAbility*>              AllReplicatedInstancedAbilities;                   // 0x3D0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_B0E[0x338];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AGameplayAbilityTargetActor*>   SpawnedTargetActors;                               // 0x718(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayAbilityRepAnimMontage        RepAnimMontageInfo;                                // 0x728(0x30)(Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_B0F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityLocalAnimMontage      LocalAnimMontageInfo;                              // 0x760(0x30)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_B10[0xB8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                OwnerActor;                                        // 0x848(0x8)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                AvatarActor;                                       // 0x850(0x8)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B11[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActiveGameplayEffectsContainer       ActiveGameplayEffects;                             // 0x870(0x428)(Net, Protected, NativeAccessSpecifierProtected)
	struct FActiveGameplayCueContainer           ActiveGameplayCues;                                // 0xC98(0xD0)(Net, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FActiveGameplayCueContainer           MinimalReplicationGameplayCues;                    // 0xD68(0xD0)(Net, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_B13[0x128];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                BlockedAbilityBindings;                            // 0xF60(0x10)(Net, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_B14[0x128];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMinimalReplicationTagCountMap        MinimalReplicationTags;                            // 0x1098(0x60)(Net, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_B15[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FReplicatedPredictionKeyMap           ReplicatedPredictionKeyMap;                        // 0x1108(0xC0)(Net, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAbilitySystemComponent* GetDefaultObj();

	bool TryActivateAbilityByClass(TSubclassOf<class UGameplayAbility> InAbilityToActivate, bool bAllowRemoteActivation);
	bool TryActivateAbilitiesByTag(struct FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation);
	void TargetConfirm();
	void TargetCancel();
	void SetUserAbilityActivationInhibited(bool NewInhibit);
	void SetActiveGameplayEffectLevelUsingQuery(const struct FGameplayEffectQuery& Query, int32 NewLevel);
	void SetActiveGameplayEffectLevel(const struct FActiveGameplayEffectHandle& ActiveHandle, int32 NewLevel);
	void ServerTryActivateAbilityWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData);
	void ServerTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey);
	void ServerSetReplicatedTargetDataCancelled(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey);
	void ServerSetReplicatedTargetData(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, struct FGameplayAbilityTargetDataHandle& ReplicatedTargetDataHandle, const struct FGameplayTag& ApplicationTag, const struct FPredictionKey& CurrentPredictionKey);
	void ServerSetReplicatedEventWithPayload(enum class EAbilityGenericReplicatedEvent EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey, const struct FVector_NetQuantize100& VectorPayload);
	void ServerSetReplicatedEvent(enum class EAbilityGenericReplicatedEvent EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey);
	void ServerSetInputReleased(const struct FGameplayAbilitySpecHandle& AbilityHandle);
	void ServerSetInputPressed(const struct FGameplayAbilitySpecHandle& AbilityHandle);
	void ServerPrintDebug_RequestWithStrings(TArray<class FString>& Strings);
	void ServerPrintDebug_Request();
	void ServerEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo, const struct FPredictionKey& PredictionKey);
	void ServerCurrentMontageSetPlayRate(class UAnimMontage* ClientAnimMontage, float InPlayRate);
	void ServerCurrentMontageSetNextSectionName(class UAnimMontage* ClientAnimMontage, float ClientPosition, class FName SectionName, class FName NextSectionName);
	void ServerCurrentMontageJumpToSectionName(class UAnimMontage* ClientAnimMontage, class FName SectionName);
	void ServerCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo);
	void ServerAbilityRPCBatch(const struct FServerAbilityRPCBatch& BatchInfo);
	void RemoveActiveGameplayEffectBySourceEffect(TSubclassOf<class UGameplayEffect> GameplayEffect, class UAbilitySystemComponent* InstigatorAbilitySystemComponent, int32 StacksToRemove);
	bool RemoveActiveGameplayEffect(const struct FActiveGameplayEffectHandle& Handle, int32 StacksToRemove);
	int32 RemoveActiveEffectsWithTags(const struct FGameplayTagContainer& Tags);
	int32 RemoveActiveEffectsWithSourceTags(const struct FGameplayTagContainer& Tags);
	int32 RemoveActiveEffectsWithGrantedTags(const struct FGameplayTagContainer& Tags);
	int32 RemoveActiveEffectsWithAppliedTags(const struct FGameplayTagContainer& Tags);
	void OnRep_ServerDebugString();
	void OnRep_ReplicatedAnimMontage();
	void OnRep_OwningActor();
	void OnRep_ClientDebugString();
	void OnRep_ActivateAbilities();
	void NetMulticast_InvokeGameplayCuesExecuted_WithParams(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
	void NetMulticast_InvokeGameplayCuesExecuted(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext);
	void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
	void NetMulticast_InvokeGameplayCueExecuted_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
	void NetMulticast_InvokeGameplayCueExecuted_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey);
	void NetMulticast_InvokeGameplayCueExecuted(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext);
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey);
	void NetMulticast_InvokeGameplayCueAdded_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& Parameters);
	void NetMulticast_InvokeGameplayCueAdded(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext);
	struct FGameplayEffectSpecHandle MakeOutgoingSpec(TSubclassOf<class UGameplayEffect> GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& Context);
	struct FGameplayEffectContextHandle MakeEffectContext();
	void K2_InitStats(TSubclassOf<class UAttributeSet> Attributes, class UDataTable* DataTable);
	bool IsGameplayCueActive(const struct FGameplayTag& GameplayCueTag);
	bool GetUserAbilityActivationInhibited();
	float GetGameplayEffectMagnitude(const struct FActiveGameplayEffectHandle& Handle, const struct FGameplayAttribute& Attribute);
	int32 GetGameplayEffectCount(TSubclassOf<class UGameplayEffect> SourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck);
	TArray<struct FActiveGameplayEffectHandle> GetActiveEffects(struct FGameplayEffectQuery& Query);
	void ClientTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate);
	void ClientSetReplicatedEvent(enum class EAbilityGenericReplicatedEvent EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey);
	void ClientPrintDebug_Response(TArray<class FString>& Strings, int32 GameFlags);
	void ClientEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo);
	void ClientCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo);
	void ClientActivateAbilitySucceedWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData);
	void ClientActivateAbilitySucceed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey);
	void ClientActivateAbilityFailed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, int16 PredictionKey);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(TSubclassOf<class UGameplayEffect> GameplayEffectClass, class UAbilitySystemComponent* Target, float Level, const struct FGameplayEffectContextHandle& Context);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(TSubclassOf<class UGameplayEffect> GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& EffectContext);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(struct FGameplayEffectSpecHandle& SpecHandle, class UAbilitySystemComponent* Target);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(struct FGameplayEffectSpecHandle& SpecHandle);
	void AbilityConfirmOrCancel__DelegateSignature();
	void AbilityAbilityKey__DelegateSignature(int32 InputID);
};

// 0x0 (0x418 - 0x418)
// Class GameplayAbilities.AbilitySystemDebugHUD
class AAbilitySystemDebugHUD : public AHUD
{
public:

	static class UClass* StaticClass();
	static class AAbilitySystemDebugHUD* GetDefaultObj();

};

// 0x220 (0x248 - 0x28)
// Class GameplayAbilities.AbilitySystemGlobals
class UAbilitySystemGlobals : public UObject
{
public:
	struct FSoftClassPath                        AbilitySystemGlobalsClassName;                     // 0x28(0x18)(Config, NativeAccessSpecifierPublic)
	uint8                                        Pad_B19[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          ActivateFailIsDeadTag;                             // 0x68(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActivateFailIsDeadName;                            // 0x70(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ActivateFailCooldownTag;                           // 0x78(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActivateFailCooldownName;                          // 0x80(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ActivateFailCostTag;                               // 0x88(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActivateFailCostName;                              // 0x90(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ActivateFailTagsBlockedTag;                        // 0x98(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActivateFailTagsBlockedName;                       // 0xA0(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ActivateFailTagsMissingTag;                        // 0xA8(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActivateFailTagsMissingName;                       // 0xB0(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ActivateFailNetworkingTag;                         // 0xB8(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActivateFailNetworkingName;                        // 0xC0(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinimalReplicationTagCountBits;                    // 0xC8(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowGameplayModEvaluationChannels;               // 0xCC(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EGameplayModEvaluationChannel     DefaultGameplayModEvaluationChannel;               // 0xCD(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B1A[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  GameplayModEvaluationChannelAliases[0xA];          // 0xD0(0x50)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSoftObjectPath                       GlobalCurveTableName;                              // 0x120(0x18)(Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSoftObjectPath                       GlobalAttributeMetaDataTableName;                  // 0x138(0x18)(Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSoftObjectPath                       GlobalAttributeSetDefaultsTableName;               // 0x150(0x18)(Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FSoftObjectPath>               GlobalAttributeSetDefaultsTableNames;              // 0x168(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	struct FSoftObjectPath                       GlobalGameplayCueManagerClass;                     // 0x178(0x18)(Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSoftObjectPath                       GlobalGameplayCueManagerName;                      // 0x190(0x18)(Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FString>                        GameplayCueNotifyPaths;                            // 0x1A8(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	struct FSoftObjectPath                       GameplayTagResponseTableName;                      // 0x1B8(0x18)(Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGameplayTagReponseTable*              GameplayTagResponseTable;                          // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         PredictTargetGameplayEffects;                      // 0x1D8(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B1B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveTable*                           GlobalCurveTable;                                  // 0x1E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCurveTable*>                   GlobalAttributeDefaultsTables;                     // 0x1E8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UDataTable*                            GlobalAttributeMetaDataTable;                      // 0x1F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGameplayCueManager*                   GlobalGameplayCueManager;                          // 0x200(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B1C[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilitySystemGlobals* GetDefaultObj();

	void ToggleIgnoreAbilitySystemCosts();
	void ToggleIgnoreAbilitySystemCooldowns();
};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.AbilitySystemInterface
class IAbilitySystemInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAbilitySystemInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.AbilitySystemReplicationProxyInterface
class IAbilitySystemReplicationProxyInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAbilitySystemReplicationProxyInterface* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class GameplayAbilities.AttributeSet
class UAttributeSet : public UObject
{
public:
	uint8                                        Pad_B1D[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAttributeSet* GetDefaultObj();

};

// 0x40 (0x70 - 0x30)
// Class GameplayAbilities.AbilitySystemTestAttributeSet
class UAbilitySystemTestAttributeSet : public UAttributeSet
{
public:
	float                                        MaxHealth;                                         // 0x30(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Health;                                            // 0x34(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Mana;                                              // 0x38(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxMana;                                           // 0x3C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpellDamage;                                       // 0x44(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PhysicalDamage;                                    // 0x48(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CritChance;                                        // 0x4C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CritMultiplier;                                    // 0x50(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArmorDamageReduction;                              // 0x54(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DodgeChance;                                       // 0x58(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LifeSteal;                                         // 0x5C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Strength;                                          // 0x60(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StackingAttribute1;                                // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StackingAttribute2;                                // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NoStackAttribute;                                  // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAbilitySystemTestAttributeSet* GetDefaultObj();

};

// 0x20 (0x3D0 - 0x3B0)
// Class GameplayAbilities.AbilitySystemTestPawn
class AAbilitySystemTestPawn : public ADefaultPawn
{
public:
	uint8                                        Pad_B1F[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               AbilitySystemComponent;                            // 0x3C8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AAbilitySystemTestPawn* GetDefaultObj();

};

// 0x18 (0x80 - 0x68)
// Class GameplayAbilities.AbilityTask
class UAbilityTask : public UGameplayTask
{
public:
	class UGameplayAbility*                      Ability;                                           // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*               AbilitySystemComponent;                            // 0x70(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B20[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask* GetDefaultObj();

};

// 0x38 (0xB8 - 0x80)
// Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base
class UAbilityTask_ApplyRootMotion_Base : public UAbilityTask
{
public:
	class FName                                  ForceName;                                         // 0x80(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ERootMotionFinishVelocityMode     FinishVelocityMode;                                // 0x88(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B21[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               FinishSetVelocity;                                 // 0x8C(0xC)(Net, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FinishClampVelocity;                               // 0x98(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B22[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCharacterMovementComponent*           MovementComponent;                                 // 0xA0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B23[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_ApplyRootMotion_Base* GetDefaultObj();

};

// 0x30 (0xE8 - 0xB8)
// Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
class UAbilityTask_ApplyRootMotionConstantForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	UMulticastDelegateProperty_                  OnFinish;                                          // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FVector                               WorldDirection;                                    // 0xC8(0xC)(Net, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Strength;                                          // 0xD4(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Duration;                                          // 0xD8(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsAdditive;                                       // 0xDC(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B27[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           StrengthOverTime;                                  // 0xE0(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAbilityTask_ApplyRootMotionConstantForce* GetDefaultObj();

	class UAbilityTask_ApplyRootMotionConstantForce* ApplyRootMotionConstantForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FVector& WorldDirection, float Strength, float Duration, bool bIsAdditive, class UCurveFloat* StrengthOverTime, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish);
};

// 0x58 (0x110 - 0xB8)
// Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
class UAbilityTask_ApplyRootMotionJumpForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	UMulticastDelegateProperty_                  OnFinish;                                          // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLanded;                                          // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0xD8(0xC)(Net, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        Distance;                                          // 0xE4(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Height;                                            // 0xE8(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Duration;                                          // 0xEC(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinimumLandedTriggerTime;                          // 0xF0(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bFinishOnLanded;                                   // 0xF4(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B2A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveVector*                          PathOffsetCurve;                                   // 0xF8(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           TimeMappingCurve;                                  // 0x100(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B2B[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_ApplyRootMotionJumpForce* GetDefaultObj();

	void OnLandedCallback(struct FHitResult& Hit);
	void Finish();
	class UAbilityTask_ApplyRootMotionJumpForce* ApplyRootMotionJumpForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FRotator& Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve);
};

// 0x78 (0x130 - 0xB8)
// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
class UAbilityTask_ApplyRootMotionMoveToActorForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	UMulticastDelegateProperty_                  OnFinished;                                        // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_B40[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               StartLocation;                                     // 0xD0(0xC)(Net, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               TargetLocation;                                    // 0xDC(0xC)(Net, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                TargetActor;                                       // 0xE8(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               TargetLocationOffset;                              // 0xF0(0xC)(Net, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment;                                   // 0xFC(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B41[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Duration;                                          // 0x100(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDisableDestinationReachedInterrupt;               // 0x104(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSetNewMovementMode;                               // 0x105(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EMovementMode                     NewMovementMode;                                   // 0x106(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRestrictSpeedToExpected;                          // 0x107(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveVector*                          PathOffsetCurve;                                   // 0x108(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           TimeMappingCurve;                                  // 0x110(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           TargetLerpSpeedHorizontalCurve;                    // 0x118(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           TargetLerpSpeedVerticalCurve;                      // 0x120(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B42[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_ApplyRootMotionMoveToActorForce* GetDefaultObj();

	void OnTargetActorSwapped(class AActor* OriginalTarget, class AActor* NewTarget);
	void OnRep_TargetLocation();
	class UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToTargetDataActorForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, int32 TargetDataIndex, int32 TargetActorIndex, const struct FVector& TargetLocationOffset, enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt);
	class UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToActorForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, class AActor* TargetActor, const struct FVector& TargetLocationOffset, enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt);
};

// 0x50 (0x108 - 0xB8)
// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
class UAbilityTask_ApplyRootMotionMoveToForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	UMulticastDelegateProperty_                  OnTimedOut;                                        // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTimedOutAndDestinationReached;                   // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FVector                               StartLocation;                                     // 0xD8(0xC)(Net, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               TargetLocation;                                    // 0xE4(0xC)(Net, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Duration;                                          // 0xF0(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSetNewMovementMode;                               // 0xF4(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EMovementMode                     NewMovementMode;                                   // 0xF5(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRestrictSpeedToExpected;                          // 0xF6(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B47[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveVector*                          PathOffsetCurve;                                   // 0xF8(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B48[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_ApplyRootMotionMoveToForce* GetDefaultObj();

	class UAbilityTask_ApplyRootMotionMoveToForce* ApplyRootMotionMoveToForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FVector& TargetLocation, float Duration, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish);
};

// 0x58 (0x110 - 0xB8)
// Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
class UAbilityTask_ApplyRootMotionRadialForce : public UAbilityTask_ApplyRootMotion_Base
{
public:
	UMulticastDelegateProperty_                  OnFinish;                                          // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0xC8(0xC)(Net, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B56[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                LocationActor;                                     // 0xD8(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Strength;                                          // 0xE0(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Duration;                                          // 0xE4(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Radius;                                            // 0xE8(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsPush;                                           // 0xEC(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsAdditive;                                       // 0xED(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bNoZForce;                                         // 0xEE(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B59[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           StrengthDistanceFalloff;                           // 0xF0(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           StrengthOverTime;                                  // 0xF8(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseFixedWorldDirection;                           // 0x100(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B5B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              FixedWorldDirection;                               // 0x104(0xC)(Net, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAbilityTask_ApplyRootMotionRadialForce* GetDefaultObj();

	class UAbilityTask_ApplyRootMotionRadialForce* ApplyRootMotionRadialForce(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FVector& Location, class AActor* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, class UCurveFloat* StrengthDistanceFalloff, class UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, const struct FRotator& FixedWorldDirection, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish);
};

// 0x48 (0xC8 - 0x80)
// Class GameplayAbilities.AbilityTask_MoveToLocation
class UAbilityTask_MoveToLocation : public UAbilityTask
{
public:
	UMulticastDelegateProperty_                  OnTargetLocationReached;                           // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_B64[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               StartLocation;                                     // 0x94(0xC)(Net, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               TargetLocation;                                    // 0xA0(0xC)(Net, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DurationOfMovement;                                // 0xAC(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B65[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           LerpCurve;                                         // 0xB8(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveVector*                          LerpCurveVector;                                   // 0xC0(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAbilityTask_MoveToLocation* GetDefaultObj();

	class UAbilityTask_MoveToLocation* MoveToLocation(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, const struct FVector& Location, float Duration, class UCurveFloat* OptionalInterpolationCurve, class UCurveVector* OptionalVectorInterpolationCurve);
};

// 0x18 (0x98 - 0x80)
// Class GameplayAbilities.AbilityTask_NetworkSyncPoint
class UAbilityTask_NetworkSyncPoint : public UAbilityTask
{
public:
	UMulticastDelegateProperty_                  OnSync;                                            // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_B69[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_NetworkSyncPoint* GetDefaultObj();

	class UAbilityTask_NetworkSyncPoint* WaitNetSync(class UGameplayAbility* OwningAbility, enum class EAbilityTaskNetSyncType SyncType);
	void OnSignalCallback();
};

// 0x88 (0x108 - 0x80)
// Class GameplayAbilities.AbilityTask_PlayMontageAndWait
class UAbilityTask_PlayMontageAndWait : public UAbilityTask
{
public:
	UMulticastDelegateProperty_                  OnCompleted;                                       // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnBlendOut;                                        // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnInterrupted;                                     // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCancelled;                                       // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_B75[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_PlayMontageAndWait* GetDefaultObj();

	void OnMontageInterrupted();
	void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
	class UAbilityTask_PlayMontageAndWait* CreatePlayMontageAndWaitProxy(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, class FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale);
};

// 0x38 (0xB8 - 0x80)
// Class GameplayAbilities.AbilityTask_Repeat
class UAbilityTask_Repeat : public UAbilityTask
{
public:
	UMulticastDelegateProperty_                  OnPerformAction;                                   // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFinished;                                        // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_B78[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_Repeat* GetDefaultObj();

	class UAbilityTask_Repeat* RepeatAction(class UGameplayAbility* OwningAbility, float TimeBetweenActions, int32 TotalActionCount);
};

// 0x40 (0xC0 - 0x80)
// Class GameplayAbilities.AbilityTask_SpawnActor
class UAbilityTask_SpawnActor : public UAbilityTask
{
public:
	UMulticastDelegateProperty_                  Success;                                           // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  DidNotSpawn;                                       // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_B7B[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_SpawnActor* GetDefaultObj();

	class UAbilityTask_SpawnActor* SpawnActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, TSubclassOf<class AActor> Class);
	void FinishSpawningActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, class AActor* SpawnedActor);
	bool BeginSpawningActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, TSubclassOf<class AActor> Class, class AActor** SpawnedActor);
};

// 0x38 (0xB8 - 0x80)
// Class GameplayAbilities.AbilityTask_StartAbilityState
class UAbilityTask_StartAbilityState : public UAbilityTask
{
public:
	UMulticastDelegateProperty_                  OnStateEnded;                                      // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnStateInterrupted;                                // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_B7D[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_StartAbilityState* GetDefaultObj();

	class UAbilityTask_StartAbilityState* StartAbilityState(class UGameplayAbility* OwningAbility, class FName StateName, bool bEndCurrentState);
};

// 0x28 (0xA8 - 0x80)
// Class GameplayAbilities.AbilityTask_VisualizeTargeting
class UAbilityTask_VisualizeTargeting : public UAbilityTask
{
public:
	UMulticastDelegateProperty_                  TimeElapsed;                                       // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_B86[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_VisualizeTargeting* GetDefaultObj();

	class UAbilityTask_VisualizeTargeting* VisualizeTargetingUsingActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* TargetActor, class FName TaskInstanceName, float Duration);
	class UAbilityTask_VisualizeTargeting* VisualizeTargeting(class UGameplayAbility* OwningAbility, TSubclassOf<class AGameplayAbilityTargetActor> Class, class FName TaskInstanceName, float Duration);
	void FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor);
	bool BeginSpawningActor(class UGameplayAbility* OwningAbility, TSubclassOf<class AGameplayAbilityTargetActor> Class, class AGameplayAbilityTargetActor** SpawnedActor);
};

// 0xB8 (0x138 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitAbilityActivate
class UAbilityTask_WaitAbilityActivate : public UAbilityTask
{
public:
	UMulticastDelegateProperty_                  OnActivate;                                        // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA2[0xA8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_WaitAbilityActivate* GetDefaultObj();

	class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivateWithTagRequirements(class UGameplayAbility* OwningAbility, const struct FGameplayTagRequirements& TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce);
	class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTagQuery& Query, bool IncludeTriggeredAbilities, bool TriggerOnce);
	class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate(class UGameplayAbility* OwningAbility, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce);
	void OnAbilityActivate(class UGameplayAbility* ActivatedAbility);
};

// 0x78 (0xF8 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitAbilityCommit
class UAbilityTask_WaitAbilityCommit : public UAbilityTask
{
public:
	UMulticastDelegateProperty_                  OnCommit;                                          // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_BAF[0x68];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_WaitAbilityCommit* GetDefaultObj();

	class UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTagQuery& Query, bool TriggerOnce);
	class UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit(class UGameplayAbility* OwningAbility, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTage, bool TriggerOnce);
	void OnAbilityCommit(class UGameplayAbility* ActivatedAbility);
};

// 0x60 (0xE0 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitAttributeChange
class UAbilityTask_WaitAttributeChange : public UAbilityTask
{
public:
	UMulticastDelegateProperty_                  OnChange;                                          // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC0[0x48];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               ExternalOwner;                                     // 0xD8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAbilityTask_WaitAttributeChange* GetDefaultObj();

	class UAbilityTask_WaitAttributeChange* WaitForAttributeChangeWithComparison(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& InAttribute, const struct FGameplayTag& InWithTag, const struct FGameplayTag& InWithoutTag, enum class EWaitAttributeChangeComparison InComparisonType, float InComparisonValue, bool TriggerOnce, class AActor* OptionalExternalOwner);
	class UAbilityTask_WaitAttributeChange* WaitForAttributeChange(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& Attribute, const struct FGameplayTag& WithSrcTag, const struct FGameplayTag& WithoutSrcTag, bool TriggerOnce, class AActor* OptionalExternalOwner);
};

// 0x90 (0x110 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
class UAbilityTask_WaitAttributeChangeRatioThreshold : public UAbilityTask
{
public:
	UMulticastDelegateProperty_                  OnChange;                                          // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_BD5[0x78];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               ExternalOwner;                                     // 0x108(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAbilityTask_WaitAttributeChangeRatioThreshold* GetDefaultObj();

	class UAbilityTask_WaitAttributeChangeRatioThreshold* WaitForAttributeChangeRatioThreshold(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& AttributeNumerator, const struct FGameplayAttribute& AttributeDenominator, enum class EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce, class AActor* OptionalExternalOwner);
};

// 0x58 (0xD8 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
class UAbilityTask_WaitAttributeChangeThreshold : public UAbilityTask
{
public:
	UMulticastDelegateProperty_                  OnChange;                                          // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_BDE[0x40];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               ExternalOwner;                                     // 0xD0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAbilityTask_WaitAttributeChangeThreshold* GetDefaultObj();

	class UAbilityTask_WaitAttributeChangeThreshold* WaitForAttributeChangeThreshold(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& Attribute, enum class EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce, class AActor* OptionalExternalOwner);
};

// 0x18 (0x98 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitCancel
class UAbilityTask_WaitCancel : public UAbilityTask
{
public:
	UMulticastDelegateProperty_                  OnCancel;                                          // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_BE2[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_WaitCancel* GetDefaultObj();

	class UAbilityTask_WaitCancel* WaitCancel(class UGameplayAbility* OwningAbility);
	void OnLocalCancelCallback();
	void OnCancelCallback();
};

// 0x20 (0xA0 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitConfirm
class UAbilityTask_WaitConfirm : public UAbilityTask
{
public:
	UMulticastDelegateProperty_                  OnConfirm;                                         // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_BE9[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_WaitConfirm* GetDefaultObj();

	class UAbilityTask_WaitConfirm* WaitConfirm(class UGameplayAbility* OwningAbility);
	void OnConfirmCallback(class UGameplayAbility* InAbility);
};

// 0x28 (0xA8 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitConfirmCancel
class UAbilityTask_WaitConfirmCancel : public UAbilityTask
{
public:
	UMulticastDelegateProperty_                  OnConfirm;                                         // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCancel;                                          // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_BEF[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_WaitConfirmCancel* GetDefaultObj();

	class UAbilityTask_WaitConfirmCancel* WaitConfirmCancel(class UGameplayAbility* OwningAbility);
	void OnLocalConfirmCallback();
	void OnLocalCancelCallback();
	void OnConfirmCallback();
	void OnCancelCallback();
};

// 0x18 (0x98 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitDelay
class UAbilityTask_WaitDelay : public UAbilityTask
{
public:
	UMulticastDelegateProperty_                  OnFinish;                                          // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF4[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_WaitDelay* GetDefaultObj();

	class UAbilityTask_WaitDelay* WaitDelay(class UGameplayAbility* OwningAbility, float Time);
};

// 0x138 (0x1B8 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
class UAbilityTask_WaitGameplayEffectApplied : public UAbilityTask
{
public:
	uint8                                        Pad_BF7[0x128];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               ExternalOwner;                                     // 0x1A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BF8[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayEffectApplied* GetDefaultObj();

	void OnApplyGameplayEffectCallback(class UAbilitySystemComponent* Target, struct FGameplayEffectSpec& SpecApplied, const struct FActiveGameplayEffectHandle& ActiveHandle);
};

// 0x20 (0x1D8 - 0x1B8)
// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
class UAbilityTask_WaitGameplayEffectApplied_Self : public UAbilityTask_WaitGameplayEffectApplied
{
public:
	UMulticastDelegateProperty_                  OnApplied;                                         // 0x1B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_C01[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayEffectApplied_Self* GetDefaultObj();

	class UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagQuery& SourceTagQuery, const struct FGameplayTagQuery& TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
	class UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
};

// 0x20 (0x1D8 - 0x1B8)
// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
class UAbilityTask_WaitGameplayEffectApplied_Target : public UAbilityTask_WaitGameplayEffectApplied
{
public:
	UMulticastDelegateProperty_                  OnApplied;                                         // 0x1B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_C0C[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayEffectApplied_Target* GetDefaultObj();

	class UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagQuery& SourceTagQuery, const struct FGameplayTagQuery& TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
	class UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& TargetFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffects);
};

// 0xA8 (0x128 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
class UAbilityTask_WaitGameplayEffectBlockedImmunity : public UAbilityTask
{
public:
	UMulticastDelegateProperty_                  bLocked;                                           // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_C12[0x88];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               ExternalOwner;                                     // 0x118(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C13[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayEffectBlockedImmunity* GetDefaultObj();

	class UAbilityTask_WaitGameplayEffectBlockedImmunity* WaitGameplayEffectBlockedByImmunity(class UGameplayAbility* OwningAbility, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce);
};

// 0x40 (0xC0 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
class UAbilityTask_WaitGameplayEffectRemoved : public UAbilityTask
{
public:
	UMulticastDelegateProperty_                  OnRemoved;                                         // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  InvalidHandle;                                     // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_C17[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayEffectRemoved* GetDefaultObj();

	class UAbilityTask_WaitGameplayEffectRemoved* WaitForGameplayEffectRemoved(class UGameplayAbility* OwningAbility, const struct FActiveGameplayEffectHandle& Handle);
	void OnGameplayEffectRemoved(struct FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo);
};

// 0x38 (0xB8 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
class UAbilityTask_WaitGameplayEffectStackChange : public UAbilityTask
{
public:
	UMulticastDelegateProperty_                  OnChange;                                          // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  InvalidHandle;                                     // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_C1B[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayEffectStackChange* GetDefaultObj();

	class UAbilityTask_WaitGameplayEffectStackChange* WaitForGameplayEffectStackChange(class UGameplayAbility* OwningAbility, const struct FActiveGameplayEffectHandle& Handle);
	void OnGameplayEffectStackChange(const struct FActiveGameplayEffectHandle& Handle, int32 NewCount, int32 OldCount);
};

// 0x30 (0xB0 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitGameplayEvent
class UAbilityTask_WaitGameplayEvent : public UAbilityTask
{
public:
	UMulticastDelegateProperty_                  EventReceived;                                     // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_C1E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               OptionalExternalTarget;                            // 0x98(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C1F[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayEvent* GetDefaultObj();

	class UAbilityTask_WaitGameplayEvent* WaitGameplayEvent(class UGameplayAbility* OwningAbility, const struct FGameplayTag& EventTag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce);
};

// 0x28 (0xA8 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitGameplayTag
class UAbilityTask_WaitGameplayTag : public UAbilityTask
{
public:
	uint8                                        Pad_C22[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               OptionalExternalTarget;                            // 0x90(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C23[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayTag* GetDefaultObj();

	void GameplayTagCallback(const struct FGameplayTag& Tag, int32 NewCount);
};

// 0x10 (0xB8 - 0xA8)
// Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
class UAbilityTask_WaitGameplayTagAdded : public UAbilityTask_WaitGameplayTag
{
public:
	UMulticastDelegateProperty_                  Added;                                             // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayTagAdded* GetDefaultObj();

	class UAbilityTask_WaitGameplayTagAdded* WaitGameplayTagAdd(class UGameplayAbility* OwningAbility, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);
};

// 0x10 (0xB8 - 0xA8)
// Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
class UAbilityTask_WaitGameplayTagRemoved : public UAbilityTask_WaitGameplayTag
{
public:
	UMulticastDelegateProperty_                  Removed;                                           // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAbilityTask_WaitGameplayTagRemoved* GetDefaultObj();

	class UAbilityTask_WaitGameplayTagRemoved* WaitGameplayTagRemove(class UGameplayAbility* OwningAbility, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);
};

// 0x20 (0xA0 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitInputPress
class UAbilityTask_WaitInputPress : public UAbilityTask
{
public:
	UMulticastDelegateProperty_                  OnPress;                                           // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_C2F[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_WaitInputPress* GetDefaultObj();

	class UAbilityTask_WaitInputPress* WaitInputPress(class UGameplayAbility* OwningAbility, bool bTestAlreadyPressed);
	void OnPressCallback();
};

// 0x20 (0xA0 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitInputRelease
class UAbilityTask_WaitInputRelease : public UAbilityTask
{
public:
	UMulticastDelegateProperty_                  OnRelease;                                         // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_C37[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_WaitInputRelease* GetDefaultObj();

	class UAbilityTask_WaitInputRelease* WaitInputRelease(class UGameplayAbility* OwningAbility, bool bTestAlreadyReleased);
	void OnReleaseCallback();
};

// 0x20 (0xA0 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitMovementModeChange
class UAbilityTask_WaitMovementModeChange : public UAbilityTask
{
public:
	UMulticastDelegateProperty_                  OnChange;                                          // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_C43[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_WaitMovementModeChange* GetDefaultObj();

	void OnMovementModeChange(class ACharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	class UAbilityTask_WaitMovementModeChange* CreateWaitMovementModeChange(class UGameplayAbility* OwningAbility, enum class EMovementMode NewMode);
};

// 0x10 (0x90 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitOverlap
class UAbilityTask_WaitOverlap : public UAbilityTask
{
public:
	UMulticastDelegateProperty_                  OnOverlap;                                         // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAbilityTask_WaitOverlap* GetDefaultObj();

	class UAbilityTask_WaitOverlap* WaitForOverlap(class UGameplayAbility* OwningAbility);
	void OnHitCallback(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
};

// 0x40 (0xC0 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitTargetData
class UAbilityTask_WaitTargetData : public UAbilityTask
{
public:
	UMulticastDelegateProperty_                  ValidData;                                         // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  Cancelled;                                         // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_C5B[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayAbilityTargetActor*           TargetActor;                                       // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C5C[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_WaitTargetData* GetDefaultObj();

	class UAbilityTask_WaitTargetData* WaitTargetDataUsingActor(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, enum class EGameplayTargetingConfirmation ConfirmationType, class AGameplayAbilityTargetActor* TargetActor);
	class UAbilityTask_WaitTargetData* WaitTargetData(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, enum class EGameplayTargetingConfirmation ConfirmationType, TSubclassOf<class AGameplayAbilityTargetActor> Class);
	void OnTargetDataReplicatedCancelledCallback();
	void OnTargetDataReplicatedCallback(struct FGameplayAbilityTargetDataHandle& Data, const struct FGameplayTag& ActivationTag);
	void OnTargetDataReadyCallback(struct FGameplayAbilityTargetDataHandle& Data);
	void OnTargetDataCancelledCallback(struct FGameplayAbilityTargetDataHandle& Data);
	void FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor);
	bool BeginSpawningActor(class UGameplayAbility* OwningAbility, TSubclassOf<class AGameplayAbilityTargetActor> Class, class AGameplayAbilityTargetActor** SpawnedActor);
};

// 0x28 (0xA8 - 0x80)
// Class GameplayAbilities.AbilityTask_WaitVelocityChange
class UAbilityTask_WaitVelocityChange : public UAbilityTask
{
public:
	UMulticastDelegateProperty_                  OnVelocityChage;                                   // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UMovementComponent*                    CachedMovementComponent;                           // 0x90(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C61[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_WaitVelocityChange* GetDefaultObj();

	class UAbilityTask_WaitVelocityChange* CreateWaitVelocityChange(class UGameplayAbility* OwningAbility, const struct FVector& Direction, float MinimumMagnitude);
};

// 0x418 (0x440 - 0x28)
// Class GameplayAbilities.GameplayAbility
class UGameplayAbility : public UObject
{
public:
	uint8                                        Pad_CEC[0x68];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 AbilityTags;                                       // 0x90(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                        Pad_CED[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bReplicateInputDirectly;                           // 0xC8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CEF[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EGameplayAbilityReplicationPolicy ReplicationPolicy;                                 // 0xF1(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EGameplayAbilityInstancingPolicy  InstancingPolicy;                                  // 0xF2(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bServerRespectsRemoteAbilityCancellation;          // 0xF3(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRetriggerInstancedAbility;                        // 0xF4(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_CF4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityActivationInfo        CurrentActivationInfo;                             // 0xF8(0x20)(BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGameplayEventData                    CurrentEventData;                                  // 0x118(0xA8)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	enum class EGameplayAbilityNetExecutionPolicy NetExecutionPolicy;                                // 0x1C0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_CF5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UGameplayEffect>           CostGameplayEffectClass;                           // 0x1C8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FAbilityTriggerData>           AbilityTriggers;                                   // 0x1D0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UGameplayEffect>           CooldownGameplayEffectClass;                       // 0x1E0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagQuery                     CancelAbilitiesMatchingTagQuery;                   // 0x1E8(0x48)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagQuery                     ConstTagQuery;                                     // 0x230(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 CancelAbilitiesWithTag;                            // 0x278(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 BlockAbilitiesWithTag;                             // 0x298(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 ActivationOwnedTags;                               // 0x2B8(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 ActivationRequiredTags;                            // 0x2D8(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 ActivationBlockedTags;                             // 0x2F8(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 SourceRequiredTags;                                // 0x318(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 SourceBlockedTags;                                 // 0x338(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 TargetRequiredTags;                                // 0x358(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 TargetBlockedTags;                                 // 0x378(0x20)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<class UGameplayTask*>                 ActiveTasks;                                       // 0x398(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_CF9[0x70];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          CurrentMontage;                                    // 0x418(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsActive;                                         // 0x420(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsCancelable;                                     // 0x421(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_CFA[0x16];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsBlockingOtherAbilities;                         // 0x438(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bMarkPendingKillOnAbilityEnd;                      // 0x439(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_CFC[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameplayAbility* GetDefaultObj();

	void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities);
	void SetCanBeCanceled(bool bCanBeCanceled);
	void SendGameplayEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload);
	void RemoveGrantedByEffect();
	void MontageStop(float OverrideBlendOutTime);
	void MontageSetNextSectionName(class FName FromSectionName, class FName ToSectionName);
	void MontageJumpToSection(class FName SectionName);
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(class FName SocketName);
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor();
	struct FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(TSubclassOf<class UGameplayEffect> GameplayEffectClass, float Level);
	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload);
	void K2_RemoveGameplayCue(const struct FGameplayTag& GameplayCueTag);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ExecuteGameplayCueWithParams(const struct FGameplayTag& GameplayCueTag, struct FGameplayCueParameters& GameplayCueParameters);
	void K2_ExecuteGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context);
	void K2_EndAbility();
	void K2_CommitExecute();
	bool K2_CommitAbilityCost(bool BroadcastCommitEvent);
	bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown);
	bool K2_CommitAbility();
	bool K2_CheckAbilityCost();
	bool K2_CheckAbilityCooldown();
	void K2_CancelAbility();
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags);
	TArray<struct FActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(const struct FGameplayEffectSpecHandle& EffectSpecHandle, const struct FGameplayAbilityTargetDataHandle& TargetData);
	struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(const struct FGameplayEffectSpecHandle& EffectSpecHandle);
	void K2_AddGameplayCueWithParams(const struct FGameplayTag& GameplayCueTag, struct FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd);
	void K2_AddGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context, bool bRemoveOnAbilityEnd);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void K2_ActivateAbility();
	void InvalidateClientPredictionKey();
	class USkeletalMeshComponent* GetOwningComponentFromActorInfo();
	class AActor* GetOwningActorFromActorInfo();
	struct FGameplayEffectContextHandle GetGrantedByEffectContext();
	class UObject* GetCurrentSourceObject();
	class UAnimMontage* GetCurrentMontage();
	float GetCooldownTimeRemaining();
	struct FGameplayEffectContextHandle GetContextFromOwner(const struct FGameplayAbilityTargetDataHandle& OptionalTargetData);
	class AActor* GetAvatarActorFromActorInfo();
	struct FGameplayAbilityActorInfo GetActorInfo();
	int32 GetAbilityLevel();
	void EndTaskByInstanceName(class FName InstanceName);
	void EndAbilityState(class FName OptionalStateNameToEnd);
	void ConfirmTaskByInstanceName(class FName InstanceName, bool bEndTask);
	void CancelTaskByInstanceName(class FName InstanceName);
	void BP_RemoveGameplayEffectFromOwnerWithHandle(const struct FActiveGameplayEffectHandle& Handle, int32 StacksToRemove);
	void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(const struct FGameplayTagContainer& WithGrantedTags, int32 StacksToRemove);
	void BP_RemoveGameplayEffectFromOwnerWithAssetTags(const struct FGameplayTagContainer& WithAssetTags, int32 StacksToRemove);
	TArray<struct FActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(const struct FGameplayAbilityTargetDataHandle& TargetData, TSubclassOf<class UGameplayEffect> GameplayEffectClass, int32 GameplayEffectLevel, int32 Stacks);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(TSubclassOf<class UGameplayEffect> GameplayEffectClass, int32 GameplayEffectLevel, int32 Stacks);
};

// 0x0 (0x440 - 0x440)
// Class GameplayAbilities.GameplayAbility_CharacterJump
class UGameplayAbility_CharacterJump : public UGameplayAbility
{
public:

	static class UClass* StaticClass();
	static class UGameplayAbility_CharacterJump* GetDefaultObj();

};

// 0x38 (0x478 - 0x440)
// Class GameplayAbilities.GameplayAbility_Montage
class UGameplayAbility_Montage : public UGameplayAbility
{
public:
	class UAnimMontage*                          MontageToPlay;                                     // 0x440(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x448(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D0E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SectionName;                                       // 0x450(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>   GameplayEffectClassesWhileAnimating;               // 0x458(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UGameplayEffect*>               GameplayEffectsWhileAnimating;                     // 0x468(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGameplayAbility_Montage* GetDefaultObj();

};

// 0x0 (0xE0 - 0xE0)
// Class GameplayAbilities.GameplayAbilityBlueprint
class UGameplayAbilityBlueprint : public UBlueprint
{
public:

	static class UClass* StaticClass();
	static class UGameplayAbilityBlueprint* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class GameplayAbilities.GameplayAbilitySet
class UGameplayAbilitySet : public UDataAsset
{
public:
	TArray<struct FGameplayAbilityBindInfo>      Abilities;                                         // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGameplayAbilitySet* GetDefaultObj();

};

// 0x110 (0x438 - 0x328)
// Class GameplayAbilities.GameplayAbilityTargetActor
class AGameplayAbilityTargetActor : public AActor
{
public:
	bool                                         ShouldProduceTargetDataOnServer;                   // 0x328(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D1E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetingLocationInfo StartLocation;                                     // 0x330(0x70)(BlueprintVisible, BlueprintReadOnly, Net, ContainsInstancedReference, ExposeOnSpawn, NativeAccessSpecifierPublic)
	uint8                                        Pad_D20[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     MasterPC;                                          // 0x3D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayAbility*                      OwningAbility;                                     // 0x3D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDestroyOnConfirmation;                            // 0x3E0(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D22[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                SourceActor;                                       // 0x3E8(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWorldReticleParameters               ReticleParams;                                     // 0x3F0(0xC)(BlueprintVisible, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	uint8                                        Pad_D24[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AGameplayAbilityWorldReticle> ReticleClass;                                      // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTargetDataFilterHandle       Filter;                                            // 0x408(0x10)(BlueprintVisible, Net, ExposeOnSpawn, NativeAccessSpecifierPublic)
	bool                                         bDebug;                                            // 0x418(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D27[0x17];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               GenericDelegateBoundASC;                           // 0x430(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AGameplayAbilityTargetActor* GetDefaultObj();

	void ConfirmTargeting();
	void CancelTargeting();
};

// 0x20 (0x458 - 0x438)
// Class GameplayAbilities.GameplayAbilityTargetActor_Trace
class AGameplayAbilityTargetActor_Trace : public AGameplayAbilityTargetActor
{
public:
	float                                        MaxRange;                                          // 0x438(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D29[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCollisionProfileName                 TraceProfile;                                      // 0x440(0x8)(Edit, BlueprintVisible, Config, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	bool                                         bTraceAffectsAimPitch;                             // 0x448(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D2A[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGameplayAbilityTargetActor_Trace* GetDefaultObj();

};

// 0x20 (0x478 - 0x458)
// Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
class AGameplayAbilityTargetActor_GroundTrace : public AGameplayAbilityTargetActor_Trace
{
public:
	float                                        CollisionRadius;                                   // 0x458(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionHeight;                                   // 0x45C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D2C[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGameplayAbilityTargetActor_GroundTrace* GetDefaultObj();

};

// 0x18 (0x490 - 0x478)
// Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
class AGameplayAbilityTargetActor_ActorPlacement : public AGameplayAbilityTargetActor_GroundTrace
{
public:
	class UClass*                                PlacedActorClass;                                  // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    PlacedActorMaterial;                               // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D2D[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGameplayAbilityTargetActor_ActorPlacement* GetDefaultObj();

};

// 0x8 (0x440 - 0x438)
// Class GameplayAbilities.GameplayAbilityTargetActor_Radius
class AGameplayAbilityTargetActor_Radius : public AGameplayAbilityTargetActor
{
public:
	float                                        Radius;                                            // 0x438(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D31[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGameplayAbilityTargetActor_Radius* GetDefaultObj();

};

// 0x8 (0x460 - 0x458)
// Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
class AGameplayAbilityTargetActor_SingleLineTrace : public AGameplayAbilityTargetActor_Trace
{
public:
	uint8                                        Pad_D34[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGameplayAbilityTargetActor_SingleLineTrace* GetDefaultObj();

};

// 0x20 (0x348 - 0x328)
// Class GameplayAbilities.GameplayAbilityWorldReticle
class AGameplayAbilityWorldReticle : public AActor
{
public:
	struct FWorldReticleParameters               Parameters;                                        // 0x328(0xC)(Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	bool                                         bFaceOwnerFlat;                                    // 0x334(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapToTargetedActor;                              // 0x335(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTargetValid;                                    // 0x336(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsTargetAnActor;                                  // 0x337(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class APlayerController*                     MasterPC;                                          // 0x338(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                TargetingActor;                                    // 0x340(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AGameplayAbilityWorldReticle* GetDefaultObj();

	void SetReticleMaterialParamVector(class FName ParamName, const struct FVector& Value);
	void SetReticleMaterialParamFloat(class FName ParamName, float Value);
	void OnValidTargetChanged(bool bNewValue);
	void OnTargetingAnActor(bool bNewValue);
	void OnParametersInitialized();
	void FaceTowardSource(bool bFaceIn2D);
};

// 0x18 (0x360 - 0x348)
// Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
class AGameplayAbilityWorldReticle_ActorVisualization : public AGameplayAbilityWorldReticle
{
public:
	class UCapsuleComponent*                     CollisionComponent;                                // 0x348(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UActorComponent*>               VisualizationComponents;                           // 0x350(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AGameplayAbilityWorldReticle_ActorVisualization* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.GameplayCueInterface
class IGameplayCueInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGameplayCueInterface* GetDefaultObj();

	void ForwardGameplayCueToParent();
	void BlueprintCustomHandler(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
};

// 0x2E0 (0x310 - 0x30)
// Class GameplayAbilities.GameplayCueManager
class UGameplayCueManager : public UDataAsset
{
public:
	uint8                                        Pad_D4B[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayCueObjectLibrary             RuntimeGameplayCueObjectLibrary;                   // 0x48(0x58)(Transient, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueObjectLibrary             EditorGameplayCueObjectLibrary;                    // 0xA0(0x58)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_D4C[0x1B8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        LoadedGameplayCueNotifyClasses;                    // 0x2B0(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class AGameplayCueNotify_Actor>> GameplayCueClassesForPreallocation;                // 0x2C0(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<struct FGameplayCuePendingExecute>    PendingExecuteCues;                                // 0x2D0(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	int32                                        GameplayCueSendContextCount;                       // 0x2E0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D4D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPreallocationInfo>            PreallocationInfoList_Internal;                    // 0x2E8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_D4E[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameplayCueManager* GetDefaultObj();

};

// 0x70 (0x398 - 0x328)
// Class GameplayAbilities.GameplayCueNotify_Actor
class AGameplayCueNotify_Actor : public AActor
{
public:
	bool                                         bAutoDestroyOnRemove;                              // 0x328(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D62[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AutoDestroyDelay;                                  // 0x32C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         WarnIfTimelineIsStillRunning;                      // 0x330(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         WarnIfLatentActionIsStillRunning;                  // 0x331(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D63[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          GameplayCueTag;                                    // 0x338(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagReferenceHelper           ReferenceHelper;                                   // 0x340(0x10)(Edit, NativeAccessSpecifierPublic)
	class FName                                  GameplayCueName;                                   // 0x350(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoAttachToOwner;                                // 0x358(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsOverride;                                        // 0x359(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUniqueInstancePerInstigator;                      // 0x35A(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUniqueInstancePerSourceObject;                    // 0x35B(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowMultipleOnActiveEvents;                      // 0x35C(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowMultipleWhileActiveEvents;                   // 0x35D(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D68[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumPreallocatedInstances;                          // 0x360(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D69[0x34];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AGameplayCueNotify_Actor* GetDefaultObj();

	bool WhileActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	void OnOwnerDestroyed(class AActor* DestroyedActor);
	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	void K2_HandleGameplayCue(class AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters);
	void K2_EndGameplayCue();
};

// 0x28 (0x50 - 0x28)
// Class GameplayAbilities.GameplayCueNotify_Static
class UGameplayCueNotify_Static : public UObject
{
public:
	struct FGameplayTag                          GameplayCueTag;                                    // 0x28(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagReferenceHelper           ReferenceHelper;                                   // 0x30(0x10)(Edit, NativeAccessSpecifierPublic)
	class FName                                  GameplayCueName;                                   // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsOverride;                                        // 0x48(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D7D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameplayCueNotify_Static* GetDefaultObj();

	bool WhileActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	void K2_HandleGameplayCue(class AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters);
};

// 0x10 (0x60 - 0x50)
// Class GameplayAbilities.GameplayCueNotify_HitImpact
class UGameplayCueNotify_HitImpact : public UGameplayCueNotify_Static
{
public:
	class USoundBase*                            Sound;                                             // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       ParticleSystem;                                    // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGameplayCueNotify_HitImpact* GetDefaultObj();

};

// 0x60 (0x90 - 0x30)
// Class GameplayAbilities.GameplayCueSet
class UGameplayCueSet : public UDataAsset
{
public:
	TArray<struct FGameplayCueNotifyData>        GameplayCueData;                                   // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_D7F[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameplayCueSet* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.GameplayCueTranslator
class UGameplayCueTranslator : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGameplayCueTranslator* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.GameplayCueTranslator_Test
class UGameplayCueTranslator_Test : public UGameplayCueTranslator
{
public:

	static class UClass* StaticClass();
	static class UGameplayCueTranslator_Test* GetDefaultObj();

};

// 0x610 (0x638 - 0x28)
// Class GameplayAbilities.GameplayEffect
class UGameplayEffect : public UObject
{
public:
	uint8                                        Pad_D81[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EGameplayEffectDurationType       DurationPolicy;                                    // 0x30(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D82[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEffectModifierMagnitude      DurationMagnitude;                                 // 0x38(0x1C8)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        Period;                                            // 0x200(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bExecutePeriodicEffectOnApplication;               // 0x228(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D83[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayModifierInfo>         Modifiers;                                         // 0x230(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FGameplayEffectExecutionDefinition> Executions;                                        // 0x240(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        ChanceToApplyToTarget;                             // 0x250(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffectCustomApplicationRequirement>> ApplicationRequirements;                           // 0x278(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>   TargetEffectClasses;                               // 0x288(0x10)(ZeroConstructor, Deprecated, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FConditionalGameplayEffect>    ConditionalGameplayEffects;                        // 0x298(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>   OverflowEffects;                                   // 0x2A8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bDenyOverflowApplication;                          // 0x2B8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClearStackOnOverflow;                             // 0x2B9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D85[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class UGameplayEffect>>   PrematureExpirationEffectClasses;                  // 0x2C0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>   RoutineExpirationEffectClasses;                    // 0x2D0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bRequireModifierSuccessToTriggerCues;              // 0x2E0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuppressStackingCues;                             // 0x2E1(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D88[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayEffectCue>            GameplayCues;                                      // 0x2E8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UGameplayEffectUIData*                 UIData;                                            // 0x2F8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInheritedTagContainer                InheritableGameplayEffectTags;                     // 0x300(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FInheritedTagContainer                InheritableOwnedTagsContainer;                     // 0x360(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              OngoingTagRequirements;                            // 0x3C0(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              ApplicationTagRequirements;                        // 0x400(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FInheritedTagContainer                RemoveGameplayEffectsWithTags;                     // 0x440(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              GrantedApplicationImmunityTags;                    // 0x4A0(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayEffectQuery                  GrantedApplicationImmunityQuery;                   // 0x4E0(0x138)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_D8A[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EGameplayEffectStackingType       StackingType;                                      // 0x619(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D8B[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StackLimitCount;                                   // 0x61C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayEffectStackingDurationPolicy StackDurationRefreshPolicy;                        // 0x620(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayEffectStackingPeriodPolicy StackPeriodResetPolicy;                            // 0x621(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayEffectStackingExpirationPolicy StackExpirationPolicy;                             // 0x622(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D8D[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayAbilitySpecDef>       GrantedAbilities;                                  // 0x628(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGameplayEffect* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GameplayAbilities.GameplayEffectCalculation
class UGameplayEffectCalculation : public UObject
{
public:
	TArray<struct FGameplayEffectAttributeCaptureDefinition> RelevantAttributesToCapture;                       // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGameplayEffectCalculation* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.GameplayEffectCustomApplicationRequirement
class UGameplayEffectCustomApplicationRequirement : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGameplayEffectCustomApplicationRequirement* GetDefaultObj();

	bool CanApplyGameplayEffect(class UGameplayEffect* GameplayEffect, struct FGameplayEffectSpec& Spec, class UAbilitySystemComponent* ASC);
};

// 0x8 (0x40 - 0x38)
// Class GameplayAbilities.GameplayEffectExecutionCalculation
class UGameplayEffectExecutionCalculation : public UGameplayEffectCalculation
{
public:
	bool                                         bRequiresPassedInTags;                             // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D94[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameplayEffectExecutionCalculation* GetDefaultObj();

	void Execute(struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput);
};

// 0x0 (0x638 - 0x638)
// Class GameplayAbilities.GameplayEffectTemplate
class UGameplayEffectTemplate : public UGameplayEffect
{
public:

	static class UClass* StaticClass();
	static class UGameplayEffectTemplate* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.GameplayEffectUIData
class UGameplayEffectUIData : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGameplayEffectUIData* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class GameplayAbilities.GameplayEffectUIData_TextOnly
class UGameplayEffectUIData_TextOnly : public UGameplayEffectUIData
{
public:
	class FText                                  Description;                                       // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGameplayEffectUIData_TextOnly* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class GameplayAbilities.GameplayModMagnitudeCalculation
class UGameplayModMagnitudeCalculation : public UGameplayEffectCalculation
{
public:
	bool                                         bAllowNonNetAuthorityDependencyRegistration;       // 0x38(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D9A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameplayModMagnitudeCalculation* GetDefaultObj();

	float CalculateBaseMagnitude(struct FGameplayEffectSpec& Spec);
};

// 0x1A0 (0x1D0 - 0x30)
// Class GameplayAbilities.GameplayTagReponseTable
class UGameplayTagReponseTable : public UDataAsset
{
public:
	TArray<struct FGameplayTagResponseTableEntry> Entries;                                           // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_DAB[0x190];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGameplayTagReponseTable* GetDefaultObj();

	void TagResponseEvent(const struct FGameplayTag& Tag, int32 NewCount, class UAbilitySystemComponent* ASC, int32 Idx);
};

// 0x0 (0x28 - 0x28)
// Class GameplayAbilities.TickableAttributeSetInterface
class ITickableAttributeSetInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITickableAttributeSetInterface* GetDefaultObj();

};

}


