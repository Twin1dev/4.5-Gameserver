#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class FortniteUI.AthenaAccountContext
class UAthenaAccountContext : public UBlueprintContextBase
{
public:

	static class UClass* StaticClass();
	static class UAthenaAccountContext* GetDefaultObj();

	void SimulateBattleBookPurchase(int32 NumLevelsToPurchase, int32* BonusLevelsGranted, bool* bOverLimit);
	bool ShouldReplaceBattleStarsWithAlternateReward();
	bool IsAtMaxBattlePassTier();
	int32 GetCurrentSeasonNumber();
	class FText GetCurrentSeasonName();
	class UAthenaSeasonItemDefinition* GetCurrentSeasonDefinition();
	void GetBattleBookPurchaseLimit(int32* MaxNumLevelsPossibleToPurchase, int32* BonusLevelsGranted);
};

// 0x8 (0x210 - 0x208)
// Class FortniteUI.AthenaAwardAlertBase
class UAthenaAwardAlertBase : public UUserWidget
{
public:
	class UAthenaPlayerViewModel*                PlayerVM;                                          // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAthenaAwardAlertBase* GetDefaultObj();

	void SetDataSource(class UAthenaPlayerViewModel* PlayerViewModel);
	void OnAwardGranted(class UFortAwardItemDefinition* AwardDefinition);
};

// 0x30 (0x58 - 0x28)
// Class FortniteUI.FortChallengeBundleCategoryInfo
class UFortChallengeBundleCategoryInfo : public UObject
{
public:
	class UFortChallengeBundleScheduleItem*      BundleSchedule;                                    // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UFortChallengeBundleScheduleDefinition*> BundleScheduleDefinitions;                         // 0x30(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class UFortChallengeBundleInfo*>      BundleInfos;                                       // 0x40(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	class AFortPlayerController*                 FortPC;                                            // 0x50(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortChallengeBundleCategoryInfo* GetDefaultObj();

	int32 GetNumberOfBundles();
	class UFortChallengeBundleScheduleDefinition* GetFirstScheduleDefinition();
	TArray<class UFortChallengeBundleInfo*> GetChallengeBundleInfos();
};

// 0x30 (0x58 - 0x28)
// Class FortniteUI.FortChallengeBundleInfo
class UFortChallengeBundleInfo : public UObject
{
public:
	class UFortChallengeBundleItem*              BundleItem;                                        // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortChallengeBundleItemDefinition*    BundleDefinition;                                  // 0x30(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortChallengeBundleCategoryInfo*      BundleCategoryInfo;                                // 0x38(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortChallengeBundleScheduleDefinition* BundleScheduleDefinition;                          // 0x40(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EChallengeScheduleUnlockType      BundleUnlockType;                                  // 0x48(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_114C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BundleUnlockValue;                                 // 0x4C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AFortPlayerController*                 FortPC;                                            // 0x50(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortChallengeBundleInfo* GetDefaultObj();

	bool IsUnlocked(class FText* LockedReason);
	bool IsRewardThresholdAchieved();
	bool IsCompleted();
	bool HasQuestReward(class UFortItemDefinition* ItemDef, int32* OutRecievedCount, int32* OutTotalCount);
	class UFortItem* GetRewardItem();
	void GetQuests(class UFortQuestManager* QuestManager, TArray<class UFortQuestItem*>* OwnedQuests, TArray<class UFortQuestItemDefinition*>* UnownedQuests);
	class UFortChallengeBundleCategoryInfo* GetOwningBundleCategoryInfo();
	class UFortChallengeBundleItemDefinition* GetBundleDefinition();
	void GetAchievedCount(int32* OutTotalAchievedCount, int32* OutTotalRequiredCount, float* OutAchievedPercent, float* OutThresholdPercent);
};

// 0x10 (0x898 - 0x888)
// Class FortniteUI.FortChallengeBundleTreeItemWidget
class UFortChallengeBundleTreeItemWidget : public UCommonButton
{
public:
	uint8                                        Pad_1159[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UObject>                ScheduleOrBundle;                                  // 0x890(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortChallengeBundleTreeItemWidget* GetDefaultObj();

	void SetupAsChallengeBundleSchedule(class UFortChallengeBundleCategoryInfo* Schedule);
	void SetupAsChallengeBundle(class UFortChallengeBundleInfo* Bundle);
	void OnBundleUpdated();
	void HandleBundleUpdated();
	class UFortChallengeBundleInfo* GetChallengeBundleInfo();
};

// 0x8 (0x300 - 0x2F8)
// Class FortniteUI.FortChallengeBundleWidget
class UFortChallengeBundleWidget : public UCommonActivatablePanel
{
public:
	class UFortChallengeBundleInfo*              ChallengeBundleInfo;                               // 0x2F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortChallengeBundleWidget* GetDefaultObj();

	void Setup(class UFortChallengeBundleInfo* Info);
	void OnSetup();
	void OnBundleUpdated();
	void MoveToPrevBundle();
	void MoveToNextBundle();
	bool HasSiblingBundles();
	void HandleBundleUpdated();
	class UFortChallengeBundleInfo* GetChallengeBundleInfo();
};

// 0x30 (0x328 - 0x2F8)
// Class FortniteUI.FortActivatablePanel
class UFortActivatablePanel : public UCommonActivatablePanel
{
public:
	bool                                         bIsPushedOnToContentPanelStack;                    // 0x2F8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAlreadyOnContentPanelStack;                     // 0x2F9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputPriority                    InputPriority;                                     // 0x2FA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_116B[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonPopupMenu>          MoreInfoPopupMenuClass;                            // 0x300(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_116C[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortActivatablePanel* GetDefaultObj();

	void RestoreScrollWidget(class UWidget* FallbackWidget);
	void RestoreCenterWidget(class UWidget* FallbackWidget);
};

// 0x68 (0x390 - 0x328)
// Class FortniteUI.AthenaChallengeBundleScheduleScreenBase
class UAthenaChallengeBundleScheduleScreenBase : public UFortActivatablePanel
{
public:
	uint8                                        Pad_1170[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, class UFortChallengeBundleCategoryInfo*> ScheduleCategoryCache;                             // 0x338(0x50)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1172[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaChallengeBundleScheduleScreenBase* GetDefaultObj();

	void OnChallengesChanged();
	void GetChallengeCategoryInfos(TArray<class UFortChallengeBundleCategoryInfo*>* OutCategoryInfos);
};

// 0x28 (0x238 - 0x210)
// Class FortniteUI.FortHUDElementWidget
class UFortHUDElementWidget : public UCommonUserWidget
{
public:
	struct FGameplayTagContainer                 HUDElementTag;                                     // 0x210(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_117A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortHUDElementWidget* GetDefaultObj();

	void OnVisibilitySetEvent(enum class ESlateVisibility InVisibility);
	void HandleOnHUDResetToDefaults();
	void HandleOnHUDElementVisibilityChanged(struct FGameplayTagContainer& HiddenHUDElementTags);
};

// 0x1B0 (0x3E8 - 0x238)
// Class FortniteUI.AthenaCompassBase
class UAthenaCompassBase : public UFortHUDElementWidget
{
public:
	class UMaterialInstanceDynamic*              CompassMaterial;                                   // 0x238(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FSlateBrush>                   MarkerBrushes;                                     // 0x240(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FSlateBrush                           HeadingIndicatorBrush;                             // 0x250(0x88)(Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FSlateBrush                           StormIndicatorBrush;                               // 0x2D8(0x88)(Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	float                                        MarkerVerticalOffset;                              // 0x360(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_117E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaPlayerViewModel*                VM;                                                // 0x368(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSlateFontInfo                        HeadingFont;                                       // 0x370(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_117F[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaCompassBase* GetDefaultObj();

	void BindToModel(class UAthenaPlayerViewModel* ViewModel);
};

// 0x0 (0x238 - 0x238)
// Class FortniteUI.AthenaCountdownWidgetBase
class UAthenaCountdownWidgetBase : public UFortHUDElementWidget
{
public:

	static class UClass* StaticClass();
	static class UAthenaCountdownWidgetBase* GetDefaultObj();

	void OnDisplayWarningMessage(class FText& FirstLineText, class FText& SecondLineText);
	void OnCountdownUpdate(int32 TimeRemaining, class FText& CountdownUpdateText);
	void OnCountdownStarted(int32 TimeRemaining, class FText& CountdownIntroText);
	void OnCountdownFinished();
	void HandleGamePhaseStepChanged(enum class EAthenaGamePhaseStep Step);
	void HandleCountdownUpdate(int32 TimeRemaining);
	void HandleCountdownStarted(int32 TimeRemaining);
	void HandleCountdownFinished();
};

// 0x98 (0x2A8 - 0x210)
// Class FortniteUI.FortItemPickerBase
class UFortItemPickerBase : public UCommonUserWidget
{
public:
	UMulticastDelegateProperty_                  OnSelectionChangedEvent;                           // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnSelectionCommittedEvent;                         // 0x220(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnItemHoveredEvent;                                // 0x230(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnItemUnhovered;                                   // 0x240(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UFortItemTileView*                     PickerTileView;                                    // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bConfirmSelectionIfAlreadySelectedAfterOneClick;   // 0x258(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               NewlySelectedItem;                                 // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TScriptInterface<class IFortItemViewContextInterface> ItemViewContext;                                   // 0x268(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11A2[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemPickerBase* GetDefaultObj();

	bool TryCommitSelectedItem();
	void SetSelectedItem(class UFortItem* ItemToSelect);
	bool SetSelectedIndex(int32 Index);
	void OnItemSelectionEvent__DelegateSignature(class UFortItem* SelectedItem);
	class UFortItem* GetSelectedItem();
	int32 GetIndexForItem(class UFortItem* Item);
	void ClearSelection();
	void CenterSelectedItemTileWidget();
	bool CanItemBeComitted(class UFortItem* ItemToCommit);
};

// 0x48 (0x2F0 - 0x2A8)
// Class FortniteUI.AthenaCustomizationPicker
class UAthenaCustomizationPicker : public UFortItemPickerBase
{
public:
	UMulticastDelegateProperty_                  OnCosmeticSelectionSaving;                         // 0x2A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCosmeticSelectionSaved;                          // 0x2B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	enum class EAthenaCustomizationCategory      CustomizeCategory;                                 // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11A8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SubslotIndex;                                      // 0x2CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCommitingSelection;                               // 0x2D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAllowCommits;                                     // 0x2D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11AA[0x1E];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaCustomizationPicker* GetDefaultObj();

	void OnCosmeticChangeSaveEvent__DelegateSignature();
	void HandleSelectedItemHasChanged(bool ItemChanged, bool AmmoChanged, bool IngredientsChanged);
	void EndCustomizationCategory();
	void BeginCustomizationCategory(enum class EAthenaCustomizationCategory Category, int32 SubslotToEdit);
};

// 0x30 (0x8B8 - 0x888)
// Class FortniteUI.FortItemTileButton
class UFortItemTileButton : public UCommonButton
{
public:
	uint8                                        Pad_11AB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMultiSizeItemCard*                ItemWidget;                                        // 0x890(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItem>              Item;                                              // 0x898(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortItemCardSize                 ItemCardSize;                                      // 0x8A0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsRewardCard;                                      // 0x8A1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11AC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IFortItemViewContextInterface> ItemViewContext;                                   // 0x8A8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortItemTileButton* GetDefaultObj();

};

// 0x0 (0x8B8 - 0x8B8)
// Class FortniteUI.FortItemPickerButton
class UFortItemPickerButton : public UFortItemTileButton
{
public:

	static class UClass* StaticClass();
	static class UFortItemPickerButton* GetDefaultObj();

};

// 0x8 (0x8C0 - 0x8B8)
// Class FortniteUI.AthenaCustomizationPickerTileButton
class UAthenaCustomizationPickerTileButton : public UFortItemPickerButton
{
public:
	uint8                                        Pad_11AD[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaCustomizationPickerTileButton* GetDefaultObj();

};

// 0x98 (0x3C0 - 0x328)
// Class FortniteUI.FortActivatablePanelWithItemPreview
class UFortActivatablePanelWithItemPreview : public UFortActivatablePanel
{
public:
	uint8                                        Pad_11B2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemView*                         ItemViewObject;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   ItemViewUnifiedZoomInputAction;                    // 0x338(0x10)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   ItemViewZoomOutInputAction;                        // 0x348(0x10)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   ItemViewZoomInInputAction;                         // 0x358(0x10)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   ItemViewRotateInputAction;                         // 0x368(0x10)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<class FName>                          ActiveCosmeticPreviewActions;                      // 0x378(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_11B4[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         AllowItemRotation;                                 // 0x3B0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         AllowItemZooming;                                  // 0x3B1(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11B5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            ActionDataTable;                                   // 0x3B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortActivatablePanelWithItemPreview* GetDefaultObj();

	void OnVaultItemsViewed(TArray<class UFortItem*>& Items);
	void OnItemPreviewChanged(class AActor* NewPrefab, class UFortItem* NewItem);
	void OnCosmeticSpecialActionPressed(bool* bPassThrough);
	class UWidget* GetWidgetForFramingViewedItem();
};

// 0x20 (0x3E0 - 0x3C0)
// Class FortniteUI.AthenaCustomizationScreenBase
class UAthenaCustomizationScreenBase : public UFortActivatablePanelWithItemPreview
{
public:
	class UAthenaCustomizationPicker*            SelectionPicker;                                   // 0x3C0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11BA[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        LastProfileRev;                                    // 0x3D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAthenaCustomizationScreenBase* GetDefaultObj();

	void ShiftItemsVariantOption(class UAthenaCosmeticAccountItem* Item, int32 VariantChannelIndex);
	void ProcessLoadoutChanged();
	void HandleLoadoutChanged();
	void HandleInventoryUpdated(TSet<class FString>& ItemChangeFlags, int64 ProfileRevision);
	class UFortItem* GetFavoriteItemForCategory(enum class EAthenaCustomizationCategory CustomizationType, int32 SubslotIndex);
};

// 0x20 (0x8A8 - 0x888)
// Class FortniteUI.AthenaCustomizationSlotSelectorButton
class UAthenaCustomizationSlotSelectorButton : public UCommonButton
{
public:
	enum class EAthenaCustomizationCategory      CustomizationType;                                 // 0x888(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SubslotIndex;                                      // 0x88C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortMultiSizeItemCard*                ItemWidget;                                        // 0x890(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11BE[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaCustomizationSlotSelectorButton* GetDefaultObj();

	void SetCustomizationType(enum class EAthenaCustomizationCategory NewType, int32 InSubslotIndex);
};

// 0x0 (0x208 - 0x208)
// Class FortniteUI.AthenaEliminationOverlayBase
class UAthenaEliminationOverlayBase : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class UAthenaEliminationOverlayBase* GetDefaultObj();

};

// 0x118 (0x350 - 0x238)
// Class FortniteUI.BacchusHUDElement
class UBacchusHUDElement : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_11C0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsInLayoutMode;                                   // 0x240(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11C1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          VisualType;                                        // 0x248(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  WidgetName;                                        // 0x250(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                         bAlwaysShow;                                       // 0x268(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBacchusHUDStateType              OnInBuildMode;                                     // 0x269(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBacchusHUDStateType              OnInCombatMode;                                    // 0x26A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBacchusHUDStateType              OnInEditMode;                                      // 0x26B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBacchusHUDStateType              IsFreeFalling;                                     // 0x26C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBacchusHUDStateType              IsGliding;                                         // 0x26D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBacchusHUDStateType              CanOpenChute;                                      // 0x26E(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBacchusHUDStateType              InLockedBus;                                       // 0x26F(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBacchusHUDStateType              InUnlockedBus;                                     // 0x270(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBacchusHUDStateType              OnTargeting;                                       // 0x271(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBacchusHUDStateType              OnUsingScopeTargeting;                             // 0x272(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBacchusHUDStateType              OnCanTarget;                                       // 0x273(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBacchusHUDStateType              OnCanUseScopeTargeting;                            // 0x274(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBacchusHUDStateType              OnCrouching;                                       // 0x275(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBacchusHUDStateType              OnCanUseSecondaryAbility;                          // 0x276(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBacchusHUDStateType              OnDBNO;                                            // 0x277(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBacchusHUDStateType              OnControllingRCPawn;                               // 0x278(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBacchusHUDStateType              OnInVehicle;                                       // 0x279(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBacchusHUDStateType              OnDrivingVehicle;                                  // 0x27A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11C2[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHUDLayoutDataEntry                   DefaultEntry;                                      // 0x280(0xD0)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UBacchusHUDElement* GetDefaultObj();

	void OnHUDStateUpdate(struct FFortHUDState& NewState);
	struct FGameplayTag BP_GetMobileVisualType();
};

// 0x18 (0x368 - 0x350)
// Class FortniteUI.AthenaEquippedItemBase
class UAthenaEquippedItemBase : public UBacchusHUDElement
{
public:
	enum class EEquippedWeaponDisplay            CurrentMode;                                       // 0x350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaPlayerViewModel*                VM;                                                // 0x358(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11D2[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaEquippedItemBase* GetDefaultObj();

	void WeaponTypeChanged(enum class EEquippedWeaponDisplay Mode);
	void UtilityItemTypeChanged(class AFortWeapon* Weapon, class UFortWeaponItemDefinition* Item);
	void UtilityItemCountChanged(int32 Remaining);
	void SetViewModel(class UAthenaPlayerViewModel* ViewModel);
	void ResourceTypeChanged(class UFortResourceItemDefinition* Item, int32 ResourceCount);
	void ResourceCountChanged(int32 ResourceCount);
	void OnWorldItemsChanged();
	void OnWeaponChanged(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void OnViewTargetChanged();
	void OnLocalAmmoChanged(int32 LocalCount, int32 LocalRemaining);
	void OnBuildingMaterialChanged();
	void HasAmmoChanged(bool bHasAmmo);
	void AmmoTypeChanged(class AFortWeaponRanged* RangedWeapon, class UFortWorldItemDefinition* Item);
	void AmmoChanged(int32 MagazineAmmoCount, int32 BackupAmmoCount, int32 TotalRemaining);
};

// 0x0 (0x328 - 0x328)
// Class FortniteUI.AthenaEventGamesBase
class UAthenaEventGamesBase : public UFortActivatablePanel
{
public:

	static class UClass* StaticClass();
	static class UAthenaEventGamesBase* GetDefaultObj();

};

// 0x18 (0x228 - 0x210)
// Class FortniteUI.AthenaGadgetFuelWidget
class UAthenaGadgetFuelWidget : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UAthenaGadgetItemDefinition> AthenaGadgetItemDefinition;                        // 0x210(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                FuelGaugeProgressImage;                            // 0x218(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11D5[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaGadgetFuelWidget* GetDefaultObj();

	void SetItem(class UFortWorldItem* Item);
};

// 0x8 (0x330 - 0x328)
// Class FortniteUI.AthenaGameOverScreenBase
class UAthenaGameOverScreenBase : public UFortActivatablePanel
{
public:
	uint8                                        Pad_11DA[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaGameOverScreenBase* GetDefaultObj();

	void RequestRefreshInput();
	void GoToBoss();
	bool CanShowGoToBoss();
};

// 0x20 (0x258 - 0x238)
// Class FortniteUI.AthenaGamePhaseWidgetBase
class UAthenaGamePhaseWidgetBase : public UFortHUDElementWidget
{
public:
	class UMaterialInterface*                    StormComingFontMaterial;                           // 0x238(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StormComingWarningTime;                            // 0x240(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11E1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextBlock*                            TimeText;                                          // 0x248(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11E2[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaGamePhaseWidgetBase* GetDefaultObj();

	void OnGamePhaseStepChanged(enum class EAthenaGamePhaseStep GamePhaseStep);
	void HandleGamePhaseStepChanged(enum class EAthenaGamePhaseStep GamePhaseStep);
	void HandleCountdownUpdate(int32 TimeRemaining);
};

// 0x18 (0x310 - 0x2F8)
// Class FortniteUI.FortUIStateWidget_NUI
class UFortUIStateWidget_NUI : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_11F1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FContentPushState>             StackStates;                                       // 0x300(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortUIStateWidget_NUI* GetDefaultObj();

	void SetFrontEndVisibility(bool bHideHeader, bool bHideFooter, bool bHideChatWidget);
	void RequestOpenSocialMenu();
	void PushContentWidgetInternal(class UWidget* Widget, const struct FContentPushState& State);
	void PushContentWidgetAdvanced(class UWidget* Widget, bool bHideHeader, bool bHideFooter, bool bHideChatWidget);
	void PushContentWidget(class UWidget* Widget);
	class UWidget* PopContentWidgetInternal(const struct FContentPushState& State);
	class UWidget* PopContentWidget();
	void PopAllContentWidgets();
	void OnHUDScaleChanged(float HUDScale);
	void OnFrontEndVisibilityUpdated(bool bHideHeader, bool bHideFooter, bool bHideChatWidget);
	void OnExitState(enum class EFortUIState NextUIState);
	void OnEnterState(enum class EFortUIState PreviousUIState);
};

// 0x18 (0x328 - 0x310)
// Class FortniteUI.AthenaHUDBase
class UAthenaHUDBase : public UFortUIStateWidget_NUI
{
public:
	class UAthenaPlayerViewModel*                PlayerViewModel;                                   // 0x310(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11F8[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaHUDBase* GetDefaultObj();

	void ViewModelChanged(class UAthenaPlayerViewModel* ViewModel);
	void SetFullScreenMapVisibility(bool bIsVisible);
	void OnPlaylistExtensionWidgetCreated(enum class EPlaylistUIExtensionSlot ExtensionSlot, class UUserWidget* Widget);
};

// 0x1A0 (0x1C8 - 0x28)
// Class FortniteUI.AthenaHUDContext
class UAthenaHUDContext : public UBlueprintContextBase
{
public:
	uint8                                        Pad_1231[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnLocalPlayerWon;                                  // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalTeamWon;                                    // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerLost;                                 // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerKilledPlayer;                         // 0x60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerDBNOStateChanged;                     // 0x70(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnUIGameplayCue;                                   // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerBeginSkydiving;                       // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnSquadMembersChanged;                             // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnSquadMemberKillsChanged;                         // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAthenaAutoFireChanged;                           // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnClientSettingsShowViewersChanged;                // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAthenaGamePhaseChanged;                          // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPlayerFiredWeapon;                               // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLowPerformanceMode;                              // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPTTStateChange;                                  // 0x110(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCanPTTChange;                                    // 0x120(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  ShowMobilePickerDelegate;                          // 0x130(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPlaylistUIExtensionChanged;                      // 0x140(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPlayerNameChangeDelegate;                        // 0x150(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnInventoryItemSelected;                           // 0x160(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnInventorySwapStarted;                            // 0x170(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnInventorySwapComplete;                           // 0x180(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UWidget>                MoveButtonWidgetPtr;                               // 0x190(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bMoveButtonMode;                                   // 0x198(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bPendingAttachToHUD;                               // 0x199(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1233[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGameUIExtenderAthena*             PlaylistUIExtender;                                // 0x1A0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UFortItem>              LastSelectedInventoryItem;                         // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1234[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaHUDContext* GetDefaultObj();

	bool UseTapToShoot();
	void UseOrRleoadFromHUDStop();
	void UseOrRleoadFromHUDStart();
	void UpdateSelectedWidgetMoveOffsetVector(struct FVector2D& VectorOffset, float FMoveScale);
	void TakeMovementInputFromHUD(const struct FVector& MoveVector, bool bTrySprint);
	void TakeLookInputFromHUD(const struct FRotator& LookRotator);
	void TakeItemSelectionInputFromHUD(int32 SlotIdx, bool bReloadOrUseIfAlreadySelected);
	void StopTargettingFromHUD();
	void StartOrFinishSwap(int32 SlotIndex);
	void ShowMobilePicker();
	bool ShouldDisplayScoreUI();
	void SetTargetingToggleable(bool bNewValue);
	void SetSelectWidgetToMoveMode(bool bSet);
	void SetSelectedInventoryItem(class UFortItem* Item);
	void SetResourceMaterial(enum class EFortResourceType NewMaterial);
	void SetPTTState(enum class EPTTState NewPushToTalkState);
	void SetLockOnStickCoords(struct FVector2D& LockOnCoords);
	bool SetAutoFireFromReticleMode(bool bAutoFireOn);
	void SelectWidgetToMove(class UWidget* Widget);
	void ReloadFromHUD();
	void PrintToMessageFeed(class FText& MESSAGE);
	void OnClientSettingUpdatedShowViewers();
	void JumpFromHudStart(int32 TouchIndex);
	void JumpFromHudEnd();
	bool IsUsingScope();
	bool IsUsingAutoFire();
	bool IsTargeting();
	bool IsSwapping();
	bool IsShowViewerCountEnabled();
	bool IsMovingSelectedWidget();
	bool IsInSelectWidgetToMoveMode();
	bool IsInBuildMode();
	bool IsCurrentWeaponFiring();
	bool IsCrouching();
	bool IsAutoRunEnabled();
	bool IsAutoFireFromReticleModeEnabled();
	bool HasWifi();
	bool HasLockOnTarget();
	bool HasAutofireTarget();
	void HandleUIGameplayCue(class FName CueName, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters);
	void HandleLocalPlayerDBNOStateChanged(bool bIsDBNO);
	void HandleLocalPlayerBeginSkydiving();
	void HandleGamePhaseChange(enum class EAthenaGamePhaseStep NewGamePhase);
	class UFortItem* GetSelectedInventoryItem();
	enum class EPTTState GetPTTState();
	class UFortGameUIExtenderAthena* GetPlaylistUIExtender();
	class FString GetPlayerName();
	void GetLocalTime(int32* Hours, int32* Minutes);
	int32 GetJumpPressedTouchIndex();
	bool GetInLowPerformanceMode();
	bool GetCanPTT();
	float GetBatteryLevel();
	void FireFromHUDStop();
	void FireFromHUDStart();
	void ExecuteActionNameFromHUDWithEventType(class FName ActionName, enum class EInputEvent KeyEvent);
	void ExecuteActionNameFromHUD(class FName ActionName);
	void EndUseFromHUD();
	void EnableAutoRunFromHUD(bool bEnable);
	void CycleQuickbar();
	bool CanDisplayMessageFeedNotification(class AFortPlayerController* Instigator, const struct FVector& MessageLocation, enum class EMessageFeedRelationshipRequirement RelationshipFilter);
	bool CanCurrentWeaponAutoFireFromReticle();
	void CancelSwap();
	bool CanAutoRun();
	void BeginUseFromHUD();
};

// 0x8 (0x240 - 0x238)
// Class FortniteUI.AthenaHUDGamePhaseChangingBase
class UAthenaHUDGamePhaseChangingBase : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_1239[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaHUDGamePhaseChangingBase* GetDefaultObj();

	void UpdateMessaging(enum class EAthenaGamePhaseStep Step, class FText& MESSAGE, class FText& TimeText);
	void HandleGamePhaseStepChanged(enum class EAthenaGamePhaseStep Step);
	void GamePhaseStepChanged(enum class EAthenaGamePhaseStep Step);
};

// 0x0 (0x210 - 0x210)
// Class FortniteUI.AthenaHUDInputWidget
class UAthenaHUDInputWidget : public UCommonUserWidget
{
public:

	static class UClass* StaticClass();
	static class UAthenaHUDInputWidget* GetDefaultObj();

};

// 0x20 (0x258 - 0x238)
// Class FortniteUI.AthenaHUDPlayerActionAlertBase
class UAthenaHUDPlayerActionAlertBase : public UFortHUDElementWidget
{
public:
	class AFortPlayerPawnAthena*                 LastPlayerPawn;                                    // 0x238(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bReadyForNextAlert;                                // 0x240(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1241[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaHUDPlayerActionAlertBase* GetDefaultObj();

	void RequestNextAlert();
	void AlertPlayer(enum class EAthenaPlayerActionAlert Alert, class FText& DetailText);
};

// 0x20 (0x258 - 0x238)
// Class FortniteUI.AthenaIndicatorLayerBase
class UAthenaIndicatorLayerBase : public UFortHUDElementWidget
{
public:
	class UAthenaPlayerViewModel*                PlayerVM;                                          // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USlateVectorArtData*                   TeamIndicatorMesh;                                 // 0x240(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_124B[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaIndicatorLayerBase* GetDefaultObj();

	void SquadIndicatorsChanged(TArray<class AFortPlayerStateAthena*>& PlayerStates);
	void SetDataSource(class UAthenaPlayerViewModel* PlayerViewModel);
	TArray<class AFortPlayerStateAthena*> GetSquadMembers();
	class UAthenaPlayerViewModel* GetPlayerViewModel();
};

// 0x18 (0x8A0 - 0x888)
// Class FortniteUI.AthenaInventoryEquipButtonBase
class UAthenaInventoryEquipButtonBase : public UCommonButton
{
public:
	class UFortMultiSizeItemCard*                ItemWidget;                                        // 0x888(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               EmptyImage;                                        // 0x890(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SlotIndex;                                         // 0x898(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_124D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaInventoryEquipButtonBase* GetDefaultObj();

};

// 0x0 (0x8B8 - 0x8B8)
// Class FortniteUI.AthenaInventoryFortItemTileButtonBase
class UAthenaInventoryFortItemTileButtonBase : public UFortItemTileButton
{
public:

	static class UClass* StaticClass();
	static class UAthenaInventoryFortItemTileButtonBase* GetDefaultObj();

};

// 0x50 (0x378 - 0x328)
// Class FortniteUI.AthenaInventoryPanelBase
class UAthenaInventoryPanelBase : public UFortActivatablePanel
{
public:
	class UFortItemTileView*                     ResourceView;                                      // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemTileView*                     AmmoView;                                          // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonGroup*                    EquipButtonGroup;                                  // 0x338(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1257[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaInventoryPanelBase* GetDefaultObj();

	void RequestEquip(class UFortItem* Item);
	void HandleQuickBarChangedBP(enum class EFortQuickBars QuickBarType);
	void HandleInventoryItemSelected(class UFortItem* Item);
	void HandleCursorModeChangedBP(bool bCursorModeEnabled, class FName ActionName, class UUserWidget* CursorModeContentWidget);
	void HandleCursorModeChanged(bool bCursorModeEnabled, class FName ActionName, class UUserWidget* CursorModeContentWidget);
	class UFortItemTileView* GetTileViewForItem(class UFortItem* Item);
	void FocusTileView(class UFortItemTileView* TileView);
	void AttemptToUpdateFocus();
	void AdvanceSelection(class UFortItemTileView* TileView);
};

// 0x1F0 (0x5B0 - 0x3C0)
// Class FortniteUI.AthenaItemSelectorScreenBase
class UAthenaItemSelectorScreenBase : public UFortActivatablePanelWithItemPreview
{
public:
	TSubclassOf<class UCommonButton>             TabButtonType;                                     // 0x3C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FFortTabButtonLabelInfo               DefaultButtonItemLabel;                            // 0x3C8(0xA0)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	TMap<enum class EAthenaCustomizationCategory, struct FFortTabButtonLabelInfo> ItemCatagoryButtonLabelInfo;                       // 0x468(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FFortTabButtonLabelInfo               VariantButtonLabelInfo;                            // 0x4B8(0xA0)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class UFortItem*                             CurrentPreviewItem;                                // 0x558(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAthenaCosmeticItemDefinition*         CurrentPreviewItemDef;                             // 0x560(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FMcpVariantChannelInfo>        CurrentPreviewVariantChannels;                     // 0x568(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UFortTabListWidgetBase*                TabList_EditSelector;                              // 0x578(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonWidgetSwitcher*                 WidgetSwitcher_ItemEditor;                         // 0x580(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaCustomizationPicker*            Picker_ItemSelector;                               // 0x588(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_ConfirmSelection;                           // 0x590(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortItemBaseWidget*                   Item_HeaderInfo;                                   // 0x598(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortVariantPicker*                    Picker_VariantSelector;                            // 0x5A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_125D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaItemSelectorScreenBase* GetDefaultObj();

	void StartItemCustomization(enum class EAthenaCustomizationCategory Catagory, int32 SubslotIndex);
	void SaveAndExit();
	void OnVariantSelectionChanged(const struct FGameplayTag& VariantChannel, const struct FGameplayTag& NewActiveVariant);
	void OnItemSelectedChanged(class UFortItem* SelectedItem);
	void OnFinsihedItemSetup();
	void HandleSelectedTabChanged(class FName SelectedTabID);
	class UFortItem* GetCurrentItem();
};

// 0x100 (0x428 - 0x328)
// Class FortniteUI.AthenaLeaderboardScreenBase
class UAthenaLeaderboardScreenBase : public UFortActivatablePanel
{
public:
	class UFortTabListWidgetBase*                LeaderboardTabList;                                // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonRotator*                        MatchRotator;                                      // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonRotator*                        LeaderboardTypeRotator;                            // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      ResetTimeText;                                     // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      RefreshTimeText;                                   // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonBorder*                         BorderLocalUserFocus;                              // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                            LeaderboardDisplayData;                            // 0x358(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FName, class UCommonButton*>      ActiveTabButtons;                                  // 0x360(0x50)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UFortLeaderboardRowProxyInstance*> RowProxies;                                        // 0x3B0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UFortLeaderboardRowProxyInstance*> RowProxiesFreeList;                                // 0x3C0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class UFortLeaderboardRowProxyInstance*      LocalUserRowProxy;                                 // 0x3D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLeaderboardFilter                    CurrentLeaderboardFilter;                          // 0x3D8(0x18)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1262[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaLeaderboardScreenBase* GetDefaultObj();

	void OnUpdateTabButtonText(class UCommonButton* Button, struct FAthenaPlaylistLeaderboardData& PlaylistTabData);
	void OnUpdateListHeader(struct FAthenaPlaylistLeaderboardData& PlaylistTabData);
	void OnUpdateLeaderboardListUI(bool bWasSuccessful, class UFortLeaderboardRowProxyInstance* LocalUserRow, class FText& QueryErrorStr);
	void OnQueryStarted();
	void OnQueryFinished();
	void OnMatchTypeChanged(int32 MatchTypeIndex);
	void OnFriendsFilterChanged(int32 FriendsFilterIndex);
	void OnActiveLeaderboardTabChanged(int32 ActiveWidgetIndex);
	bool CanShowFriendsOnlyLeaderboard();
};

// 0x38 (0x270 - 0x238)
// Class FortniteUI.FortActorIndicatorWidget
class UFortActorIndicatorWidget : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_1264[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                IndicatedActor;                                    // 0x240(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPrimitiveComponent*                   IndicatedActorComponent;                           // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               RelativeLocation;                                  // 0x250(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxDistance;                                       // 0x25C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bClampOnScreen;                                    // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShowClampToScreenArrow;                           // 0x261(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseScreenSpacePosition;                           // 0x262(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1265[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ScreenSpaceRelativeOffset;                         // 0x264(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1266[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortActorIndicatorWidget* GetDefaultObj();

};

// 0x0 (0x270 - 0x270)
// Class FortniteUI.AthenaLevelBarBase
class UAthenaLevelBarBase : public UFortActorIndicatorWidget
{
public:

	static class UClass* StaticClass();
	static class UAthenaLevelBarBase* GetDefaultObj();

};

// 0x40 (0x368 - 0x328)
// Class FortniteUI.AthenaLobbyBase
class UAthenaLobbyBase : public UFortActivatablePanel
{
public:
	uint8                                        Pad_1267[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UOverlay*                              OverlayMain;                                       // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1268[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UFriendCodeShareButtonBase*            FriendCodeFrontEndShareButton;                     // 0x360(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAthenaLobbyBase* GetDefaultObj();

	void ShowHighlightSummary();
	void ShowDailyNews();
	void ShowAthenaStoreToast();
	void ShouldShowHeadlessReminder(bool bShouldShow);
	void OnUpdateSocialImportButtonText(class FText& NewText);
	void OnPlayerClicked(int32 PlayerIndex);
	void OnNavigationUp();
	void OnNavigationRight();
	void OnNavigationLeft();
	void OnEndCursorOverPlayer(int32 PlayerIndex);
	void OnBeginCursorOverPlayer(int32 PlayerIndex);
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortViewModel
class UFortViewModel : public UObject
{
public:

	static class UClass* StaticClass();
	static class UFortViewModel* GetDefaultObj();

};

// 0xB0 (0xD8 - 0x28)
// Class FortniteUI.FortPlayerViewModel
class UFortPlayerViewModel : public UFortViewModel
{
public:
	uint8                                        Pad_1269[0xB0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortPlayerViewModel* GetDefaultObj();

};

// 0x50 (0x128 - 0xD8)
// Class FortniteUI.AthenaPlayerViewModel
class UAthenaPlayerViewModel : public UFortPlayerViewModel
{
public:
	uint8                                        Pad_126A[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaPlayerViewModel* GetDefaultObj();

};

// 0x8 (0x130 - 0x128)
// Class FortniteUI.AthenaLocalPlayerViewModel
class UAthenaLocalPlayerViewModel : public UAthenaPlayerViewModel
{
public:
	class AFortPlayerControllerAthena*           PlayerController;                                  // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAthenaLocalPlayerViewModel* GetDefaultObj();

};

// 0x0 (0x328 - 0x328)
// Class FortniteUI.AthenaLootStoreScreenBase
class UAthenaLootStoreScreenBase : public UFortActivatablePanel
{
public:

	static class UClass* StaticClass();
	static class UAthenaLootStoreScreenBase* GetDefaultObj();

};

// 0x18 (0x118 - 0x100)
// Class FortniteUI.AthenaMapLayer
class UAthenaMapLayer : public UWidget
{
public:
	uint8                                        Pad_126B[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class ULocalPlayer*                          LocalPlayer;                                       // 0x110(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAthenaMapLayer* GetDefaultObj();

	void SetLocalPlayer(class ULocalPlayer* LocalPlayer);
	void FlashPlayerIcon();
	void ClearTouches();
};

// 0x18 (0x220 - 0x208)
// Class FortniteUI.AthenaMatchReadyDesktopPopup
class UAthenaMatchReadyDesktopPopup : public UUserWidget
{
public:
	uint8                                        Pad_126E[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaMatchReadyDesktopPopup* GetDefaultObj();

	void UserDismissedDialog(bool bBringToFront);
};

// 0x18 (0x228 - 0x210)
// Class FortniteUI.AthenaPartyBar
class UAthenaPartyBar : public UCommonUserWidget
{
public:
	UMulticastDelegateProperty_                  OnHelperTextChanged;                               // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UDynamicEntryBox*                      EntryBox_PartyMembers;                             // 0x220(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAthenaPartyBar* GetDefaultObj();

};

// 0x110 (0x998 - 0x888)
// Class FortniteUI.AthenaPartyMemberBase
class UAthenaPartyMemberBase : public UCommonButton
{
public:
	uint8                                        Pad_1276[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            MutedBrush;                                        // 0x890(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            TalkingBrush;                                      // 0x898(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            NotTalkingBrush;                                   // 0x8A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AFortPlayerStateAthena*                AthenaPS;                                          // 0x8A8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1278[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      MemberUniqueId;                                    // 0x8B8(0x28)(Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FUniqueNetIdRepl                      ConsoleUniqueId;                                   // 0x8E0(0x28)(Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                Platform;                                          // 0x908(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1279[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UImage*                                Image_LeaderIcon;                                  // 0x938(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_Speaker;                                     // 0x940(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_PlayerName;                                   // 0x948(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_KillCount;                                    // 0x950(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UVerticalBox*                          VBox_PartyManagement;                              // 0x958(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_PromoteToLeader;                            // 0x960(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_RemoveFromParty;                            // 0x968(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_AddFriend;                                  // 0x970(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USizeBox*                              Box_ButtonsContainer;                              // 0x978(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                        HBox_KillCount;                                    // 0x980(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidgetSwitcher*                       Switcher_MemberState;                              // 0x988(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_Platform;                                    // 0x990(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAthenaPartyMemberBase* GetDefaultObj();

	void SetBannerIconAndColor(const class FString& IconId, const class FString& ColorId);
	void OpenPartyFinder();
	void OnFriendshipStatusDetermined(enum class EFortFriendRequestStatus RequestStatus);
	void OnFriendRequestSent();
	void OnFriendRequestAccepted();
};

// 0x0 (0x210 - 0x210)
// Class FortniteUI.AthenaPickingLayer
class UAthenaPickingLayer : public UCommonUserWidget
{
public:

	static class UClass* StaticClass();
	static class UAthenaPickingLayer* GetDefaultObj();

};

// 0x20 (0x228 - 0x208)
// Class FortniteUI.AthenaPlayerHitPointBarBase
class UAthenaPlayerHitPointBarBase : public UUserWidget
{
public:
	class UAthenaPlayerViewModel*                PlayerVM;                                          // 0x208(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EHealthBarType                    BarType;                                           // 0x210(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_128A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ValueCurrent;                                      // 0x214(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ValueLast;                                         // 0x218(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ValueMax;                                          // 0x21C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LastToCurrentUpdateRate;                           // 0x220(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_128B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaPlayerHitPointBarBase* GetDefaultObj();

	void SetDataSource(class UAthenaPlayerViewModel* PlayerViewModel);
	void OnValueChangedWithReason(float Value, enum class EFortHitPointModificationReason Reason);
	void OnMaxValueChanged(float Value);
	void OnDeltaChanged();
	void OnDBNOStateChanged(bool IsDBNO);
	float GetLastValuePercentage();
	float GetCurrentValuePercentage();
};

// 0x8 (0x278 - 0x270)
// Class FortniteUI.AthenaPlayerIndicatorBase
class UAthenaPlayerIndicatorBase : public UFortActorIndicatorWidget
{
public:
	class AFortPlayerStateAthena*                PlayerState;                                       // 0x270(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAthenaPlayerIndicatorBase* GetDefaultObj();

	void TalkingStateChanged(bool bTalking);
	void ShowCallout(enum class ETeamMemberState Callout);
	void RefreshCurrentPawn();
	void PlayerNameChanged(const class FString& PlayerName);
	void MapIndicatorPositionChanged();
	void DBNOStateChanged(bool bDBNO);
	void BeingRevivedStateChanged(bool bReviving);
};

// 0x10 (0x248 - 0x238)
// Class FortniteUI.AthenaPlayerInfoBase
class UAthenaPlayerInfoBase : public UFortHUDElementWidget
{
public:
	class AFortPlayerStateAthena*                PlayerState;                                       // 0x238(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SquadMemberIndex;                                  // 0x240(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1291[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaPlayerInfoBase* GetDefaultObj();

	void TalkingStateChanged(bool bTalking);
	void SetPlayerState(class AFortPlayerStateAthena* InPlayerState);
	void PlayerPlatformChanged(const class FString& CurrentPlatform);
	void PlayerNameChanged(const class FString& PlayerName);
	void MutedStateChanged(bool Muted);
	void MapIndicatorPositionChanged();
	bool IsPlayerOnPC();
	void HitPointsChanged(float HealthPercent, float ShieldPercent);
	void DisconnectedStateChanged(bool Disconnected);
	void DeadStateChanged(bool DeadStateChanged);
	void DBNOStateChanged(bool bDBNO);
	void BeingRevivedStateChanged(bool bReviving);
};

// 0x18 (0x250 - 0x238)
// Class FortniteUI.AthenaPlayerKillsBase
class UAthenaPlayerKillsBase : public UFortHUDElementWidget
{
public:
	class UTextBlock*                            KillsText;                                         // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObject*                               KillsSource;                                       // 0x240(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCustomKillSource;                                 // 0x248(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1294[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaPlayerKillsBase* GetDefaultObj();

	void SetKillsSourcePlayerState(class AFortPlayerStateAthena* InPlayerState);
	void SetKillsSourcePlayerController(class AFortPlayerControllerAthena* InPlayerController);
};

// 0x18 (0x250 - 0x238)
// Class FortniteUI.AthenaPlayersLeftBase
class UAthenaPlayersLeftBase : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_1297[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaPlayersLeftBase* GetDefaultObj();

	void SetPlayersLeftText(class FText& PlayersText);
};

// 0x8 (0x210 - 0x208)
// Class FortniteUI.AthenaPlayerVitalityBarBase
class UAthenaPlayerVitalityBarBase : public UUserWidget
{
public:
	class UAthenaPlayerViewModel*                PlayerVM;                                          // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAthenaPlayerVitalityBarBase* GetDefaultObj();

	void SetDataSource(class UAthenaPlayerViewModel* PlayerViewModel);
};

// 0x0 (0x270 - 0x270)
// Class FortniteUI.AthenaPostMatchScreenBase
class UAthenaPostMatchScreenBase : public UFortActorIndicatorWidget
{
public:

	static class UClass* StaticClass();
	static class UAthenaPostMatchScreenBase* GetDefaultObj();

};

// 0x28 (0x170 - 0x148)
// Class FortniteUI.AthenaProfileStatBox
class UAthenaProfileStatBox : public USizeBox
{
public:
	UMulticastDelegateProperty_                  OnStatViewChanged;                                 // 0x148(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bRespectParentStatView;                            // 0x158(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaBaseStatView*                   StatView;                                          // 0x160(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_12A3[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaProfileStatBox* GetDefaultObj();

	void SetStatView(class UAthenaBaseStatView* InStatView, bool RespectParentStatView);
	void OnStatViewChanged__DelegateSignature(class UAthenaBaseStatView* StatView);
	struct FFortUIStatStyle GetStatStyle(struct FGameplayTag& InStat);
	class UAthenaBaseStatView* GetBaseStatView();
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.AthenaBaseStatView
class UAthenaBaseStatView : public UObject
{
public:

	static class UClass* StaticClass();
	static class UAthenaBaseStatView* GetDefaultObj();

	float GetStat(struct FGameplayTag& InStat);
};

// 0x10 (0x38 - 0x28)
// Class FortniteUI.AthenaWeaponStatView
class UAthenaWeaponStatView : public UAthenaBaseStatView
{
public:
	uint8                                        Pad_12A9[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaWeaponStatView* GetDefaultObj();

	class UFortWeaponItemDefinition* GetWeaponDefinition();
};

// 0xB0 (0xD8 - 0x28)
// Class FortniteUI.AthenaMatchStatView
class UAthenaMatchStatView : public UAthenaBaseStatView
{
public:
	uint8                                        Pad_12AD[0xA0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAthenaWeaponStatView*>         WeaponStatViews;                                   // 0xC8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAthenaMatchStatView* GetDefaultObj();

	TArray<class UAthenaWeaponStatView*> GetWeaponViews();
	class UAthenaWeaponStatView* GetWeaponViewHighestStat(struct FGameplayTag& InStat);
	TArray<class UAthenaWeaponStatView*> GetSortedWeaponViews(struct FGameplayTag& InStat);
	class FString GetMatchID();
	struct FDateTime GetMatchEndTime();
};

// 0x20 (0xF8 - 0xD8)
// Class FortniteUI.AthenaMatchSetStatView
class UAthenaMatchSetStatView : public UAthenaMatchStatView
{
public:
	class UAthenaSeasonStats*                    OwningSeason;                                      // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  PlaylistId;                                        // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UAthenaMatchStatView*>          BestMatches;                                       // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAthenaMatchSetStatView* GetDefaultObj();

	class UAthenaSeasonStats* GetOwningSeason();
	TArray<class UAthenaMatchStatView*> GetBestMatchViews();
};

// 0x18 (0x40 - 0x28)
// Class FortniteUI.AthenaProfileStatContext
class UAthenaProfileStatContext : public UBlueprintContextBase
{
public:
	UMulticastDelegateProperty_                  OnStatsProfileLoaded;                              // 0x28(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_12B7[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaProfileStatContext* GetDefaultObj();

	void OnAthenaStatsProfileLoaded__DelegateSignature(class UFortMcpProfileAthenaStats* StatProfile);
	TArray<class UAthenaMatchStatView*> CreateMatchViews(TArray<struct FAthenaMatchStats>& InRecentMatches);
	class UAthenaMatchSetStatView* CreateMatchStatView(class UAthenaSeasonStats* StatSet, class FName Bucket);
	class UAthenaMatchStatView* CreateCurrentMatchStatView();
};

// 0x10 (0x898 - 0x888)
// Class FortniteUI.AthenaProfileStatListWidgetBase
class UAthenaProfileStatListWidgetBase : public UCommonButton
{
public:
	uint8                                        Pad_12BA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaProfileStatBox*                 ProfileStatBox;                                    // 0x890(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAthenaProfileStatListWidgetBase* GetDefaultObj();

	void OnStatChanged();
	void HandleStatViewChanged(class UAthenaBaseStatView* StatView);
};

// 0x58 (0x350 - 0x2F8)
// Class FortniteUI.AthenaProfileStatsBase
class UAthenaProfileStatsBase : public UCommonActivatablePanel
{
public:
	class UAthenaProfileStatBox*                 ProfileStatBox;                                    // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UAthenaSeasonStats*>            StatSets;                                          // 0x300(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	class UAthenaSeasonStats*                    CurrentViewedStatSet;                              // 0x310(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaMatchStatView*                  CurrentStatView;                                   // 0x318(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  CurrentPlaylist;                                   // 0x320(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_12C0[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaProfileStatsBase* GetDefaultObj();

	void Setup(struct FUniqueNetIdRepl& InUniqueId);
	void PrevStatSet();
	void OnStatSetChanged();
	void OnStartFetchingData();
	void OnProfileLoaded(class UFortMcpProfileAthenaStats* ProfileAthenaStats);
	void OnNoData();
	void OnDataRecieved();
	int32 NumStatSets();
	void NextStatSet();
	void NextPlaylist();
	struct FUniqueNetIdRepl GetUniqueID();
	class UAthenaSeasonStats* GetCurrentStatSet();
	class FText GetCurrentPlaylistName();
};

// 0x38 (0x330 - 0x2F8)
// Class FortniteUI.AthenaProfileStatsRecentMatchesBase
class UAthenaProfileStatsRecentMatchesBase : public UCommonActivatablePanel
{
public:
	TArray<class UAthenaMatchStatView*>          RecentMatches;                                     // 0x2F8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_12CC[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaProfileStatsRecentMatchesBase* GetDefaultObj();

	void Setup(struct FUniqueNetIdRepl& InUniqueId);
	void OnStartFetchingData();
	void OnRecentMatcheChanged();
	void OnProfileLoaded(class UFortMcpProfileAthenaStats* ProfileAthenaStats);
	void OnNoData();
	void OnDataRecieved();
	struct FUniqueNetIdRepl GetUniqueID();
	TArray<class UAthenaMatchStatView*> GetRecentMatches();
};

// 0x10 (0x220 - 0x210)
// Class FortniteUI.AthenaProfileStatWidgetBase
class UAthenaProfileStatWidgetBase : public UCommonUserWidget
{
public:
	struct FGameplayTag                          Stat;                                              // 0x210(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAthenaProfileStatBox*                 ProfileStatBox;                                    // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAthenaProfileStatWidgetBase* GetDefaultObj();

	void SetStatView(class UAthenaBaseStatView* InStatView, bool RespectParentStatView);
	void SetAsStat(struct FGameplayTag& InStat);
	void OnStatChanged();
	void HandleStatViewChanged(class UAthenaBaseStatView* StatView);
	TArray<struct FStatGroupData> CreateWeaponGroupData(int32 MaxToReturn, bool bIncludeOtherCategory, bool bPercentages);
};

// 0x8 (0x130 - 0x128)
// Class FortniteUI.AthenaRemotePlayerViewModel
class UAthenaRemotePlayerViewModel : public UAthenaPlayerViewModel
{
public:
	class AFortPlayerControllerSpectating*       PlayerController;                                  // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAthenaRemotePlayerViewModel* GetDefaultObj();

};

// 0x10 (0x898 - 0x888)
// Class FortniteUI.AthenaReplayBrowserEntryWidget
class UAthenaReplayBrowserEntryWidget : public UCommonButton
{
public:
	uint8                                        Pad_12E2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               ReplayBrowserEntryObject;                          // 0x890(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAthenaReplayBrowserEntryWidget* GetDefaultObj();

	void OnReplayBrowserEntryDataSet();
	class FText GetDateTimeText(const struct FDateTime& DateTime);
};

// 0x90 (0xB8 - 0x28)
// Class FortniteUI.AthenaReplayBrowserRowProxyInstance
class UAthenaReplayBrowserRowProxyInstance : public UObject
{
public:
	struct FAthenaReplayBrowserRowData           RowData;                                           // 0x28(0x90)(BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAthenaReplayBrowserRowProxyInstance* GetDefaultObj();

};

// 0x28 (0x350 - 0x328)
// Class FortniteUI.AthenaReplayBrowserScreenBase
class UAthenaReplayBrowserScreenBase : public UFortActivatablePanel
{
public:
	TArray<class UAthenaReplayBrowserRowProxyInstance*> RowProxies;                                        // 0x328(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_12F5[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaReplayBrowserScreenBase* GetDefaultObj();

	void ShowDeleteInvalidDialog(class FText& Title, class FText& MESSAGE);
	void SaveAndRenameReplay(class UAthenaReplayBrowserRowProxyInstance* RowProxy, const class FString& NewReplayName);
	void RenameReplay(class UAthenaReplayBrowserRowProxyInstance* RowProxy, const class FString& NewReplayName);
	void PlayReplay(class UAthenaReplayBrowserRowProxyInstance* RowProxy);
	void OnSaveFailed(class FText& Reason);
	void OnRowsUpdated();
	void OnRenameFailed(class FText& Reason);
	void OnPlayFailed(class FText& Reason);
	void OnDeleteFailed(class FText& Reason);
	void OnActionStarted();
	void OnActionFinished();
	bool IsHandlingAction();
	bool DoesReplayFolderExist();
	void DeleteReplay(class UAthenaReplayBrowserRowProxyInstance* RowProxy);
	void DeleteInvalidReplays();
	void BrowseToReplayFolder();
	bool AreExternalActionsOutstanding();
	bool AreAnyActionsOutstanding();
};

// 0x0 (0x238 - 0x238)
// Class FortniteUI.AthenaResourcesBase
class UAthenaResourcesBase : public UFortHUDElementWidget
{
public:

	static class UClass* StaticClass();
	static class UAthenaResourcesBase* GetDefaultObj();

};

// 0x0 (0x238 - 0x238)
// Class FortniteUI.AthenaScorePopWidgetBase
class UAthenaScorePopWidgetBase : public UFortHUDElementWidget
{
public:

	static class UClass* StaticClass();
	static class UAthenaScorePopWidgetBase* GetDefaultObj();

	void OnNewScoreEarned(int32 NewScoreValue, class FText& NewScoreTypeText, int32 BigScoreThreshold);
	void HandleNewScoreEarned(int32 NewPoints, enum class EAthenaScoringEvent ScoreType);
};

// 0x0 (0x210 - 0x210)
// Class FortniteUI.AthenaSeasonStatusWidget
class UAthenaSeasonStatusWidget : public UCommonUserWidget
{
public:

	static class UClass* StaticClass();
	static class UAthenaSeasonStatusWidget* GetDefaultObj();

};

// 0x20 (0x230 - 0x210)
// Class FortniteUI.AthenaSpectatorHitPointBarBase
class UAthenaSpectatorHitPointBarBase : public UCommonUserWidget
{
public:
	enum class ESpectatorHealthBarType           BarType;                                           // 0x210(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_130D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ValueCurrent;                                      // 0x214(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ValueLast;                                         // 0x218(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LastToCurrentUpdateRate;                           // 0x21C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsDBNO;                                           // 0x220(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_130F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerStateAthena*                PlayerState;                                       // 0x228(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAthenaSpectatorHitPointBarBase* GetDefaultObj();

	void SetPlayerState(class AFortPlayerStateAthena* InPlayerState);
	void OnValueLastChanged();
	void OnValueCurrentChanged();
	void OnDBNOChanged();
};

// 0x10 (0x898 - 0x888)
// Class FortniteUI.AthenaSpectatorPlayerListEntryWidget
class UAthenaSpectatorPlayerListEntryWidget : public UCommonButton
{
public:
	uint8                                        Pad_1312[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaSpectatorPlayerListRowData*     PlayerListRowData;                                 // 0x890(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAthenaSpectatorPlayerListEntryWidget* GetDefaultObj();

	void OnEntryDataSet();
};

// 0x10 (0x220 - 0x210)
// Class FortniteUI.AthenaSpectatorPlayerListScreenBase
class UAthenaSpectatorPlayerListScreenBase : public UCommonUserWidget
{
public:
	TArray<class UAthenaSpectatorPlayerListRowData*> RowDataArray;                                      // 0x210(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAthenaSpectatorPlayerListScreenBase* GetDefaultObj();

	void UpdateListUI();
	void OnPlayerDied(class AFortPlayerState* NewlyDeadPlayer);
	void OnPlayerBecameRelevant(class AFortPlayerState* NewlyRelevantPlayer);
	void OnPlayerBecameIrrelevant(class AFortPlayerState* NewlyIrrelevantPlayer);
	void OnFollowedPlayerChanged(class AFortPlayerControllerSpectating* SpectatorPC, class AFortPlayerState* NewFollowedPlayer);
	void ClearPlayers();
};

// 0x10 (0x898 - 0x888)
// Class FortniteUI.AthenaSpectatorScoreboardEntryWidget
class UAthenaSpectatorScoreboardEntryWidget : public UCommonButton
{
public:
	uint8                                        Pad_131A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaSpectatorScoreboardRowData*     ScoreboardRowData;                                 // 0x890(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAthenaSpectatorScoreboardEntryWidget* GetDefaultObj();

	void OnEntryDataSet();
};

// 0x78 (0x288 - 0x210)
// Class FortniteUI.AthenaSpectatorScoreboardScreenBase
class UAthenaSpectatorScoreboardScreenBase : public UCommonUserWidget
{
public:
	TArray<class UAthenaSpectatorScoreboardRowData*> RowDataArray;                                      // 0x210(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	bool                                         bUseBroadcastScoreboard;                           // 0x220(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1320[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeBetweenTicks;                                  // 0x224(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1321[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaSpectatorScoreboardScreenBase* GetDefaultObj();

	void UpdateRows();
	void UpdateRowFromPlayerState(class AFortPlayerState* PlayerState);
	void UpdateListUI(bool bResetFocus);
	void SetSortBy(enum class EScoreboardSortBy InSortBy);
	bool IsMapWidgetLocationVisible(struct FVector2D& MapWidgetLocation);
};

// 0xA0 (0x3C8 - 0x328)
// Class FortniteUI.AthenaStatsScreenBase
class UAthenaStatsScreenBase : public UFortActivatablePanel
{
public:
	class UCommonTabListWidget*                  StatsTabList;                                      // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CurrentPlaylistId;                                 // 0x330(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bWasLastQuerySuccessful;                           // 0x334(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_132A[0x93];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaStatsScreenBase* GetDefaultObj();

	void OnTabSelected(class FName TabName);
	void OnQueryStarted();
	void OnQueryFinished(bool bWasSuccessful);
	class FString GetWinsTag();
	class FString GetThirdTierPlaceTag();
	int32 GetStatValue(const class FString& BaseGameplayTag);
	class FString GetStatGameplayTag(const class FString& BaseStatName);
	class FString GetSecondTierPlaceTag();
	class FText GetLastUpdateTime();
	class FText FormatStatValueAsElapsedTime(struct FTimespan& ValueAsTimespan);
};

// 0x18 (0x250 - 0x238)
// Class FortniteUI.AthenaTeamAliveCountBase
class UAthenaTeamAliveCountBase : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_132C[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaTeamAliveCountBase* GetDefaultObj();

	void SetTeamSlotData(int32 TeamIdx, struct FAthenaTeamCountSlotData& TeamSlotData);
};

// 0x10 (0x248 - 0x238)
// Class FortniteUI.AthenaTeamScoreWidgetBase
class UAthenaTeamScoreWidgetBase : public UFortHUDElementWidget
{
public:
	class AFortPlayerStateAthena*                CurrPlayerState;                                   // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        GoalScore;                                         // 0x240(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        PreviousScore;                                     // 0x244(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAthenaTeamScoreWidgetBase* GetDefaultObj();

	void OnScoreChanged(int32 Score);
	void OnPlacementChanged(int32 Placement);
	void HandleSpectatingChanged(class AFortPlayerStateAthena* SpectatingTarget);
	void HandleScoreChanged(int32 Score);
	void HandlePlacementChanged(int32 Placement);
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.AthenaTravelLogFormatting
class UAthenaTravelLogFormatting : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAthenaTravelLogFormatting* GetDefaultObj();

	bool ShouldDisplayText(struct FAthenaTravelLogEntry& Entry);
	bool IsTravelLogTextDisplayEnabled();
	class FText FormatTravelLogEntry(class UObject* WorldContextObject, struct FAthenaTravelLogEntry& Entry);
};

// 0x8 (0x240 - 0x238)
// Class FortniteUI.AthenaTrickFeedBase
class UAthenaTrickFeedBase : public UFortHUDElementWidget
{
public:
	class UAthenaPlayerViewModel*                VM;                                                // 0x238(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAthenaTrickFeedBase* GetDefaultObj();

	void BindToModel(class UAthenaPlayerViewModel* ViewModel);
};

// 0x20 (0x258 - 0x238)
// Class FortniteUI.AthenaWinConditionMsgBase
class UAthenaWinConditionMsgBase : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_134E[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAthenaWinConditionMsgBase* GetDefaultObj();

	void OnWinConditionMsgEvent(class FText& MESSAGE, enum class EAthenaWinConditionMsgType MsgType);
	void HandleWinConditionMsgDisplay(enum class EAthenaWinConditionMsgType MsgType);
};

// 0x50 (0x3A0 - 0x350)
// Class FortniteUI.BacchusButton
class UBacchusButton : public UBacchusHUDElement
{
public:
	enum class EButtonClickMethod                ClickMethod;                                       // 0x350(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EButtonTouchMethod                TouchMethod;                                       // 0x351(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1358[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ButtonSize;                                        // 0x354(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ButtonDisplayScale;                                // 0x358(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1359[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ButtonSizeName;                                    // 0x360(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  ButtonDisplayScaleName;                            // 0x378(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class UButton*                               InternalButton;                                    // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_135A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBacchusButton* GetDefaultObj();

	void SetButtonSprite(class UPaperSprite* NewSprite);
	void SetButtonSize(float NewButtonSize);
	void SetButtonDisplayScale(float NewDisplayScale);
	void OnClicked();
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.BacchusDPICustomScalingRule
class UBacchusDPICustomScalingRule : public UDPICustomScalingRule
{
public:

	static class UClass* StaticClass();
	static class UBacchusDPICustomScalingRule* GetDefaultObj();

};

// 0x88 (0x380 - 0x2F8)
// Class FortniteUI.BacchusHUDLayoutToolPanel
class UBacchusHUDLayoutToolPanel : public UCommonActivatablePanel
{
public:
	class UHUDLayoutToolButtonLayer*             ButtonLayer;                                       // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHUDLayoutToolPanZoomWidget*           ZoomWidget;                                        // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                Background;                                        // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FBackgroundColors                     CombatColors;                                      // 0x310(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FBackgroundColors                     BuildColors;                                       // 0x340(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FVector2D                             OpenPanelOffset;                                   // 0x370(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              BackgroundMID;                                     // 0x378(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UBacchusHUDLayoutToolPanel* GetDefaultObj();

	void OnBuildMode(bool bNewlyInBuildMode);
};

// 0x0 (0x350 - 0x350)
// Class FortniteUI.BacchusQuickbar
class UBacchusQuickbar : public UBacchusHUDElement
{
public:

	static class UClass* StaticClass();
	static class UBacchusQuickbar* GetDefaultObj();

};

// 0x30 (0x238 - 0x208)
// Class FortniteUI.CarmineHUDBase
class UCarmineHUDBase : public UUserWidget
{
public:
	uint8                                        Pad_1363[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCarmineHUDBase* GetDefaultObj();

	void OnBossHealthBarChanged(struct FAthenaBossHealthData& BossData);
};

// 0x8 (0x38 - 0x30)
// Class FortniteUI.CarmineUIExtenderBase
class UCarmineUIExtenderBase : public UFortGameUIExtenderAthena
{
public:
	bool                                         bShowGoToBossCommand;                              // 0x30(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1364[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCarmineUIExtenderBase* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class FortniteUI.CMSContext
class UCMSContext : public UBlueprintContextBase
{
public:
	uint8                                        Pad_1368[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCMSContext* GetDefaultObj();

	void MarkNewsAsViewed();
	bool IsNewNewsAvailable();
	struct FAthenaNews GetLatestNews();
	struct FAthenaNewsEntry GetLatestEmergencyNotice();
};

// 0x48 (0x160 - 0x118)
// Class FortniteUI.CommonTagVisibilityWidget
class UCommonTagVisibilityWidget : public UContentWidget
{
public:
	struct FGameplayTagContainer                 HUDElementTag;                                     // 0x118(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_136E[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonTagVisibilityWidget* GetDefaultObj();

	void OnVisibilitySetEvent(enum class ESlateVisibility InVisibility);
	void Initialize(class ULocalPlayer* OwningLocalPlayer, class APlayerController* OwningPlayerController);
	void HandleOnHUDResetToDefaults();
	void HandleOnHUDElementVisibilityChanged(struct FGameplayTagContainer& HiddenHUDElementTags);
};

// 0x0 (0x210 - 0x210)
// Class FortniteUI.EmergencyNoticeBase
class UEmergencyNoticeBase : public UCommonUserWidget
{
public:

	static class UClass* StaticClass();
	static class UEmergencyNoticeBase* GetDefaultObj();

	void ShowNotice(class FText& Title, class FText& Body);
	void HideNotice();
};

// 0x38 (0x60 - 0x28)
// Class FortniteUI.ReportablePlayerInfo
class UReportablePlayerInfo : public UObject
{
public:
	uint8                                        Pad_136F[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UReportablePlayerInfo* GetDefaultObj();

};

// 0x38 (0x8C0 - 0x888)
// Class FortniteUI.FeedbackReportablePlayerBase
class UFeedbackReportablePlayerBase : public UCommonButton
{
public:
	uint8                                        Pad_1371[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DebugName;                                         // 0x890(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UReportablePlayerInfo*                 PlayerInfo;                                        // 0x8A0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      TextBlock_Header;                                  // 0x8A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      TextBlock_SecondaryInfoText;                       // 0x8B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                        HorizontalBox_SecondayInfoArea;                    // 0x8B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFeedbackReportablePlayerBase* GetDefaultObj();

	void SetSelectionState(bool bIsSelected, bool bAnimateOnSelect);
};

// 0x80 (0x3A8 - 0x328)
// Class FortniteUI.FeedbackReportPlayerBase
class UFeedbackReportPlayerBase : public UFortActivatablePanel
{
public:
	TArray<class UReportablePlayerInfo*>         ReportablePlayers;                                 // 0x328(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UPlayerReportReasonInfo*>       ReportReasons;                                     // 0x338(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class UReportablePlayerInfo*                 SelectedPlayer;                                    // 0x348(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayerReportReasonInfo*               SelectedReportReason;                              // 0x350(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        OptionalReportReasonLength;                        // 0x358(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumPlayerEntries;                                  // 0x35C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButton*                         Button_Cancel;                                     // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButton*                         Button_Send;                                       // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonGroup*                    TabButtonGroup;                                    // 0x370(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_137D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonListView*                       ListView_ReportablePlayers;                        // 0x380(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonListView*                       ListView_ReportReasons;                            // 0x388(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UEditableText*                         EditableText_ReasonField;                          // 0x390(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMultiLineEditableText*                MultiLineEditableText_ReasonField;                 // 0x398(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_CharCount;                                    // 0x3A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFeedbackReportPlayerBase* GetDefaultObj();

	void OnPopulateView(enum class EPlayerReportingStep CurrentStep);
	void OnListViewSelectionMade(enum class EPlayerReportingStep ReportingStep, class FText& SelectedText);
	void OnFeedbackSentCallback(bool Succeeded);
	void HandleTabClicked(enum class EPlayerReportingStep ClickedStep);
	void HandleMessageChanged(class FText& Text);
	void HandleBackAction();
	void DynamicHandleReportReasonSelected(class UObject* SelectedItem);
	void DynamicHandlePlayerSelected(class UObject* SelectedItem);
	void CloseDialog();
};

// 0x20 (0x48 - 0x28)
// Class FortniteUI.PlayerReportReasonInfo
class UPlayerReportReasonInfo : public UObject
{
public:
	uint8                                        Pad_137F[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPlayerReportReasonInfo* GetDefaultObj();

};

// 0x18 (0x8A0 - 0x888)
// Class FortniteUI.FeedbackReportPlayerReasonBase
class UFeedbackReportPlayerReasonBase : public UCommonButton
{
public:
	uint8                                        Pad_1381[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayerReportReasonInfo*               ReportReason;                                      // 0x890(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      TextBlock_Header;                                  // 0x898(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFeedbackReportPlayerReasonBase* GetDefaultObj();

	void SetSelectionState(bool bIsSelected, bool bAnimateOnSelect);
};

// 0x50 (0x78 - 0x28)
// Class FortniteUI.FortAbilitySystemContext
class UFortAbilitySystemContext : public UBlueprintContextBase
{
public:
	uint8                                        Pad_138B[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortAbilitySystemContext* GetDefaultObj();

	void RemoveDelegatesFromWidget(class UWidget* Widget);
	void RegisterForAttributeChanged(class UWidget* Widget, class UAbilitySystemComponent* ASC, const struct FGameplayAttribute& Attribute, UDelegateProperty_ Callback);
	bool HasMatchingGameplayTag(const struct FGameplayTag& TagToCheck);
};

// 0xC8 (0x3F0 - 0x328)
// Class FortniteUI.FortAccountLinkingWindow
class UFortAccountLinkingWindow : public UFortActivatablePanel
{
public:
	uint8                                        Pad_1393[0x70];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonWidgetSwitcher*                 Switcher_Main;                                     // 0x398(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBackgroundBlur*                       HaveEpicAccountBlur;                               // 0x3A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBackgroundBlur*                       SkipSignInBlur;                                    // 0x3A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonWidgetSwitcher*                 Switcher_NoThanks;                                 // 0x3B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCircularThrobber*                     Throbber_LoginDelay;                               // 0x3B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Signup;                                     // 0x3C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Login;                                      // 0x3C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_NoThanks;                                   // 0x3D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_SkipSignInSignup;                           // 0x3D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_SkipSignInLogin;                            // 0x3E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_SkipSignInNoThanks;                         // 0x3E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAccountLinkingWindow* GetDefaultObj();

	void HandleSkipSignUpClicked();
	void HandleSkipNoThanksClicked();
	void HandleSkipLoginClicked();
	void HandleSignupClicked();
	void HandleNoThanksClicked();
	void HandleLoginClicked();
	void FortNewPlatformReceipt__DelegateSignature();
};

// 0x28 (0x238 - 0x210)
// Class FortniteUI.FortAccountNotFound
class UFortAccountNotFound : public UCommonUserWidget
{
public:
	uint8                                        Pad_139A[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class URichTextBlock*                        Text_Desc;                                         // 0x220(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Back;                                       // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Web;                                        // 0x230(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAccountNotFound* GetDefaultObj();

};

// 0x10 (0x220 - 0x210)
// Class FortniteUI.FortOptionsTab
class UFortOptionsTab : public UCommonUserWidget
{
public:
	UMulticastDelegateProperty_                  OnTabSettingChanged;                               // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortOptionsTab* GetDefaultObj();

	void UpdateOptionsTab();
	bool IsXboxPlatform();
	bool IsSwitchPlatform();
	bool IsPS4Platform();
	bool IsAthena();
	void CenterOnTab();
};

// 0x0 (0x220 - 0x220)
// Class FortniteUI.FortAccountOptions
class UFortAccountOptions : public UFortOptionsTab
{
public:

	static class UClass* StaticClass();
	static class UFortAccountOptions* GetDefaultObj();

	void SetRefundRequestText(int32 RefundsRemaining, int32 TotalRefunds, int32 DaysToRefund);
	void SetCanReceiveGifts(bool bCanReceiveGifts);
	bool CanLocalPlayerReceiveGifts();
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortAccountStatsContext
class UFortAccountStatsContext : public UBlueprintContextBase
{
public:

	static class UClass* StaticClass();
	static class UFortAccountStatsContext* GetDefaultObj();

	bool CanShowAccountStats();
};

// 0x38 (0x248 - 0x210)
// Class FortniteUI.FortAccountWidgetBase
class UFortAccountWidgetBase : public UCommonUserWidget
{
public:
	uint8                                        Pad_13B9[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortAccountWidgetBase* GetDefaultObj();

	void OnAccountInfoChanged(struct FFortPublicAccountInfo& Result);
	void HandleCurrentlyViewedAccountInfoChanged(const struct FFortPublicAccountInfo& NewInfo);
	struct FAthenaSeasonBannerLevel GetSeasonBannerInfo(int32 Level);
	bool GetNextSeasonReward(struct FFortItemQuantityPair* Reward, int32* RewardLevel);
	bool GetNextSeasonChaseReward(struct FFortItemQuantityPair* Reward, int32* RewardLevel, int32 StartingLevel);
};

// 0x10 (0x218 - 0x208)
// Class FortniteUI.FortUserWidget
class UFortUserWidget : public UUserWidget
{
public:
	uint8                                        Pad_13BA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bConsumePointerInput;                              // 0x210(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13BB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortUserWidget* GetDefaultObj();

	void AddStoreCheatMenu();
	void AddGrantCheatMenu(const class FString& TemplateId, const class FString& InstanceId);
};

// 0x28 (0x240 - 0x218)
// Class FortniteUI.FortActionHandlerPanel
class UFortActionHandlerPanel : public UFortUserWidget
{
public:
	bool                                         bAutoActivate;                                     // 0x218(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortPlayerControllerProcessing   PlayerControllerProcessing;                        // 0x219(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsActive;                                         // 0x21A(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13C3[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           OnPanelActivated;                                  // 0x220(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPrivate)
	UDelegateProperty_                           OnPanelDeactivated;                                // 0x230(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortActionHandlerPanel* GetDefaultObj();

	void SetOnPanelDeactivated(UDelegateProperty_& OnDeactivatedHandler);
	void SetOnPanelActivated(UDelegateProperty_& OnActivatedHandler);
	void RemoveOnPanelDeactivated(class UObject* BoundObject);
	void OnHandleAction(struct FEventReply* Result, bool* bPassThrough);
	void DeactivateActionHandler();
	void ActivateActionHandler();
};

// 0x50 (0x168 - 0x118)
// Class FortniteUI.FortActorCanvas
class UFortActorCanvas : public UPanelWidget
{
public:
	struct FGameplayTagContainer                 DefaultHUDElementTags;                             // 0x118(0x20)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_13C8[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortActorCanvas* GetDefaultObj();

	void OnHUDElementVisibilityChanged(struct FGameplayTagContainer& HiddenHUDElementTags);
	class UFortActorCanvasSlot* AddActorIndicator(class UFortActorIndicatorWidget* Indicator);
};

// 0x10 (0x48 - 0x38)
// Class FortniteUI.FortActorCanvasSlot
class UFortActorCanvasSlot : public UPanelSlot
{
public:
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x39(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanAutoRemove;                                    // 0x3A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13CF[0xD];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortActorCanvasSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
	void SetCanAutoRemove(bool bAllowAutoRemove);
};

// 0x8 (0x890 - 0x888)
// Class FortniteUI.FortAlterationButtonWidget
class UFortAlterationButtonWidget : public UCommonButton
{
public:
	class UFortAlterationInfo*                   AlterationInfo;                                    // 0x888(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAlterationButtonWidget* GetDefaultObj();

	void Setup(class UFortAlterationInfo* InAlterationInfo);
	void OnSetup();
	class UFortAlterationInfo* GetAlterationInfo();
};

// 0x18 (0x310 - 0x2F8)
// Class FortniteUI.FortAlterationModOptinScreenBase
class UFortAlterationModOptinScreenBase : public UCommonActivatablePanel
{
public:
	class UFortItem*                             ItemToOptin;                                       // 0x2F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13D8[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortAlterationModOptinScreenBase* GetDefaultObj();

	void SetupItem(class UFortItem* Item);
	void RequestClose(bool bCancelled);
	void OnSetupItem();
	void OnItemConversionComplete();
	void ConvertItemAlterations();
};

// 0x58 (0x380 - 0x328)
// Class FortniteUI.FortAlterationModScreenBase
class UFortAlterationModScreenBase : public UFortActivatablePanel
{
public:
	class UFortAlterationsWidget*                AlterationsToEdit;                                 // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAlterationOptionsBase*            AlterationSlotOptions;                             // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemDetailsHostPanel*             ItemInspectionMainItemDetailsHostPanel;            // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemDetailsHostPanel*             AlerationsExtraDetailsPanel;                       // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortAlterationModOptinScreenBase> AlterationModOptinScreenClass;                     // 0x348(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   BackInputAction;                                   // 0x350(0x10)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortAlterableItem>     AlterableItem;                                     // 0x360(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13DE[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortAlterationModScreenBase* GetDefaultObj();

	void SetItemForAlterationsModding(class UFortAlterableItem* InAlterableItem);
	void RefreshItemAndAlterationsBP();
	void OnAlterationModificationSucess(int32 ModifiedSlotIndex);
	void OnAlterationModificationStarted();
	void OnAlterationModificationCompleted();
	void HandleBackAction(bool* bPassThrough);
};

// 0x40 (0x8C8 - 0x888)
// Class FortniteUI.FortAlterationOption
class UFortAlterationOption : public UCommonButton
{
public:
	struct FAlterationOption                     AlterationOption;                                  // 0x888(0x38)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_13E8[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortAlterationOption* GetDefaultObj();

	void Setup(struct FAlterationOption* InAlterationOption, enum class EFortAlterationOptionType InAlterationOptionType);
	void OnSetup();
	TArray<struct FFortItemQuantityPair> GetRequiredIngredients();
	float GetNextPipCount(float MaxPipCount);
	float GetCurrentPipCount(float MaxPipCount);
	enum class EFortAlterationOptionType GetAlterationOptionType();
	class UFortAlterationItemDefinition* GetAlterationDefinition();
};

// 0x98 (0x2A8 - 0x210)
// Class FortniteUI.FortAlterationOptionsBase
class UFortAlterationOptionsBase : public UCommonUserWidget
{
public:
	TSubclassOf<class UFortAlterationOption>     AlterationOptionClass;                             // 0x210(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonGroup*                    AlterationOptionButtons;                           // 0x218(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1402[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAlterableItem*                    Item;                                              // 0x240(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        SlotIndex;                                         // 0x248(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUpgradeOptionExists;                              // 0x24C(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1405[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAlterationOption                     UpgradeOption;                                     // 0x250(0x38)(Transient, NativeAccessSpecifierPrivate)
	TArray<struct FAlterationOption>             RespecOptions;                                     // 0x288(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1407[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortAlterationOptionsBase* GetDefaultObj();

	void SetItem(class UFortAlterableItem* InItem, int32 InSlotIndex, bool bSelectionRequired);
	void ProcessAlterationOptions();
	void OnShouldGiveFocus(int32 Index, bool bGiveFocus);
	void OnItemChanged();
	void OnIngredientsChanged(TArray<struct FFortItemQuantityPair>& RequiredIngredients);
	void OnGenerateOption(enum class EFortAlterationOptionType OptionType, class UFortAlterationOption* OptionWidget);
	bool IsValidAlterationSlot();
	bool IsGameplayAlterationSlot();
	void HandleAlterationsOptionSelected(class UCommonButton* AlterationOptionButton, int32 GroupIndex);
	void HandleAlterationsOptionHovered(class UCommonButton* AlterationOptionButton, int32 GroupIndex);
	void HandleAlterationOptionConfirmed(class UCommonButton* AlterationOptionButton, int32 GroupIndex);
	bool DoAlterationOptionsExist(enum class EFortAlterationOptionType OptionType);
	void ConfirmSelection();
	void ConfirmationComplete();
	void CancelSelection();
	bool AreIngredientRequirementsMent(TArray<struct FFortItemQuantityPair>& RequiredIngredients);
};

// 0x28 (0x50 - 0x28)
// Class FortniteUI.FortAlterationInfo
class UFortAlterationInfo : public UObject
{
public:
	class UFortItem*                             CorrespondingItem;                                 // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        SlotIndex;                                         // 0x30(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1419[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAlterationItemDefinition*         AlterationDef;                                     // 0x38(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        RequiredMinLevel;                                  // 0x40(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsUpgrade;                                        // 0x44(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_141B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentItemLevel;                                  // 0x48(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bFreeAlterationSlot;                               // 0x4C(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUnlockedByEvolution;                              // 0x4D(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_141D[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortAlterationInfo* GetDefaultObj();

	bool IsFreeAlterationChoice();
	bool IsAlterationUnlocked();
	bool IsAlterationHighlighted();
	int32 GetSlotIndex();
	int32 GetRequiredLevel();
	enum class EFortRarity GetRarity();
	float GetCurrentPipCount(float MaxPips);
	class UFortItem* GetCorrespondingItem();
	class UFortAlterationItemDefinition* GetAlterationDefintion();
};

// 0x78 (0x288 - 0x210)
// Class FortniteUI.FortAlterationsWidget
class UFortAlterationsWidget : public UCommonUserWidget
{
public:
	class UFortItem*                             Item;                                              // 0x210(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortAlterationWidgetState        State;                                             // 0x218(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_142A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             ItemToCompareWith;                                 // 0x220(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseButtons;                                       // 0x228(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_142B[0x37];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      EmptyText;                                         // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonGroup*                    ButtonGroup;                                       // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_142C[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortAlterationsWidget* GetDefaultObj();

	void SetupInteractionEvents(class UFortAlterationButtonWidget* Buttion);
	void SetState(enum class EFortAlterationWidgetState InState);
	void SetItemToCompareWith(class UFortItem* InItem);
	void SetItem(class UFortItem* InItem, bool bInPreviewNewAlterations, bool bIntroAlterations);
	void ProcessAlterations();
	void OnStateChanged();
	void OnItemToCompareWithChanged();
	void OnItemChanged(bool bIntroAlterations);
	void OnGenerateAlteration(class UFortAlterationInfo* AlterationInfo);
	void OnFocusFirstItem();
	void OnAlterationSlotIndexModifiedBP(int32 ModifiedIndex);
	void HandleAlterationsSlotSelected(class UCommonButton* InAlterationButton, int32 SelectedIndex);
	void HandleAlterationsSlotHovered(class UCommonButton* InAlterationButton, int32 SelectedIndex);
};

// 0x10 (0x220 - 0x210)
// Class FortniteUI.FortAlterationWidget
class UFortAlterationWidget : public UCommonUserWidget
{
public:
	float                                        MaxPipCount;                                       // 0x210(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_142E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAlterationInfo*                   AlterationInfo;                                    // 0x218(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAlterationWidget* GetDefaultObj();

	void Setup(class UFortAlterationInfo* InAlterationInfo);
	void OnSetup();
	class UFortAlterationInfo* GetAlterationInfo();
};

// 0x8 (0x218 - 0x210)
// Class FortniteUI.FortAnnouncementWidget
class UFortAnnouncementWidget : public UCommonUserWidget
{
public:
	class AFortClientAnnouncement*               BoundAnnouncement;                                 // 0x210(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAnnouncementWidget* GetDefaultObj();

	void UpdateWidgetData(class AFortClientAnnouncement* Announcement);
	void BindUpdateEvents(class AFortClientAnnouncement* Announcement);
	void AnnouncementStopped(class AFortClientAnnouncement* Announcement);
};

// 0x0 (0x2F8 - 0x2F8)
// Class FortniteUI.FortArmoryScreen
class UFortArmoryScreen : public UCommonActivatablePanel
{
public:

	static class UClass* StaticClass();
	static class UFortArmoryScreen* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class FortniteUI.FortAsyncAction_LoadCurrentSubgameProfiles
class UFortAsyncAction_LoadCurrentSubgameProfiles : public UBlueprintAsyncActionBase
{
public:
	UMulticastDelegateProperty_                  OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFailure;                                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class AFortPlayerController*                 PlayerController;                                  // 0x48(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAsyncAction_LoadCurrentSubgameProfiles* GetDefaultObj();

	class UFortAsyncAction_LoadCurrentSubgameProfiles* LoadCurrentSubgameProfiles(class AFortPlayerController* PlayerController);
};

// 0x20 (0x48 - 0x28)
// Class FortniteUI.FortAsyncAction_SetUIState
class UFortAsyncAction_SetUIState : public UBlueprintAsyncActionBase
{
public:
	UMulticastDelegateProperty_                  OnStateEntered;                                    // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x38(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1433[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortAsyncAction_SetUIState* GetDefaultObj();

	class UFortAsyncAction_SetUIState* SetUIState(class UObject* InWorldContextObject, enum class EFortUIState DesiredState);
};

// 0x130 (0x158 - 0x28)
// Class FortniteUI.FortAsyncAction_ShowAdvancedLatentConfirmation_NUI
class UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI : public UBlueprintAsyncActionBase
{
public:
	UMulticastDelegateProperty_                  DialogResult;                                      // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x38(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFortDialogDescription_NUI            Description;                                       // 0x40(0x118)(ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI* GetDefaultObj();

	class UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI* ShowAdvancedLatentActionConfirmation(class UObject* InWorldContextObject, const struct FSlateBrush& Icon, class FText Title, class FText MESSAGE, TArray<struct FConfirmationDialogAction>& ConfirmButtonInputActions, class FName& DeclineButtonInputAction, class UWidget* AdditionalContent, class UWidget* LeftAdditionalContent);
};

// 0x168 (0x190 - 0x28)
// Class FortniteUI.FortAsyncAction_ShowConfirmation
class UFortAsyncAction_ShowConfirmation : public UBlueprintAsyncActionBase
{
public:
	UMulticastDelegateProperty_                  OnConfirmed;                                       // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnDeclined;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTimedOut;                                        // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x58(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFortDialogDescription                Description;                                       // 0x60(0x130)(ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAsyncAction_ShowConfirmation* GetDefaultObj();

	class UFortAsyncAction_ShowConfirmation* ShowConfirmationDialog(class UObject* InWorldContextObject, class FText Title, class FText MESSAGE, class FText ConfirmButtonText, class FText DeclineButtonText, class UFortUserWidget* InAdditionalContent, float InDisplayTime);
};

// 0x138 (0x160 - 0x28)
// Class FortniteUI.FortAsyncAction_ShowConfirmation_NUI
class UFortAsyncAction_ShowConfirmation_NUI : public UBlueprintAsyncActionBase
{
public:
	UMulticastDelegateProperty_                  DialogResult;                                      // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x38(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFortDialogDescription_NUI            Description;                                       // 0x40(0x118)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1446[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortAsyncAction_ShowConfirmation_NUI* GetDefaultObj();

	class UFortAsyncAction_ShowConfirmation_NUI* ShowSimpleConfirmationDialog_NUI(class UObject* InWorldContextObject, const struct FSlateBrush& Icon, class FText Title, class FText MESSAGE, bool bShowConfirm, bool bShowDecline, class UWidget* AdditionalContent, class UWidget* LeftAdditionalContent);
	class UFortAsyncAction_ShowConfirmation_NUI* ShowSimpleConfirmationDialog_CustomInput(class UObject* InWorldContextObject, const struct FSlateBrush& Icon, class FText Title, class FText MESSAGE, class FName ConfirmAction, class FName DeclineAction, class UWidget* AdditionalContent, class UWidget* LeftAdditionalContent);
	class UFortAsyncAction_ShowConfirmation_NUI* ShowConfirmationDialog_NUI(class UObject* InWorldContextObject, const struct FSlateBrush& Icon, class FText Title, class FText MESSAGE, TArray<struct FConfirmationDialogAction>& ConfirmButtonInputActions, class FName& DeclineButtonInputAction, class UWidget* AdditionalContent, class UWidget* LeftAdditionalContent);
};

// 0x320 (0x348 - 0x28)
// Class FortniteUI.FortAsyncAction_ShowPartyDialog
class UFortAsyncAction_ShowPartyDialog : public UBlueprintAsyncActionBase
{
public:
	class UObject*                               WorldContextObject;                                // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFortDialogDescription_NUI            Description;                                       // 0x30(0x118)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FFortTeamMemberInfo                   TeamMemberInfo;                                    // 0x148(0x1F8)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ULocalPlayer*                          LocalPlayer;                                       // 0x340(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAsyncAction_ShowPartyDialog* GetDefaultObj();

	class UFortAsyncAction_ShowPartyDialog* ShowPartyMemberManageDialog(class UObject* InWorldContextObject, struct FFortTeamMemberInfo& TeamMemberInfo, class ULocalPlayer* LocalPlayer, class UUserWidget* LeftAdditionalContent);
	class UFortAsyncAction_ShowPartyDialog* ShowPartyLeaderManageDialog(class UObject* InWorldContextObject, struct FFortTeamMemberInfo& TeamMemberInfo, class ULocalPlayer* LocalPlayer, class UUserWidget* LeftAdditionalContent);
};

// 0x40 (0x368 - 0x328)
// Class FortniteUI.FortAthenaMatchmakingOptions
class UFortAthenaMatchmakingOptions : public UFortActivatablePanel
{
public:
	TSubclassOf<class UFortAthenaMatchmakingTile> TileItemClass;                                     // 0x328(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScrollBox*                            StandardGameModeBox;                               // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UScrollBox*                            LTMGameModeBox;                                    // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButton*                         TeamFillButton;                                    // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButton*                         RankedButton;                                      // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonGroup*                    MatchmakingTileGroup;                              // 0x350(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_145D[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortAthenaMatchmakingOptions* GetDefaultObj();

	void UpdateMatchmakingButtonsBP(bool IsPartyLeader, bool IsMatchmaking, bool PlaylistSupportsPartySize, bool PlaylistIsDisabled, bool CanShowFill);
	void SetSquadFillText(bool InCurrentSquadFill);
	void SetRepresentedPlaylist(class UFortPlaylistAthena* PlaylistToRepresent);
	void RepresentedPlaylistChanged(class UFortPlaylistAthena* NewRepresentedPlaylist);
	void OnTileDoubleClicked(class UCommonButton* ButtonClicked);
	void HandlePlaylistNameChanged(class FName NewPlaylistName);
	void HandleInputTypeChanged(enum class ECommonInputType CurrentInputType);
	void HandleButtonGroupSelectionChanged(class UCommonButton* Button, int32 Index);
	void CloseMatchmakingOptions();
	void CanceledPlaylist();
	void AcceptedPlaylist();
};

// 0x10 (0x898 - 0x888)
// Class FortniteUI.FortAthenaMatchmakingTile
class UFortAthenaMatchmakingTile : public UCommonButton
{
public:
	class UEpicCMSImage*                         GameModeImage;                                     // 0x888(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_145F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortAthenaMatchmakingTile* GetDefaultObj();

	void UpdateTileAvailability(bool Available);
	void TilePlaylistSetAsMatchmakingPlaylist();
	void SetTileSize(bool UseLargeSize);
	void SetDefaultImage();
	void PlaylistChanged(class UFortPlaylistAthena* PlaylistToRepresent);
};

// 0xC0 (0x2D0 - 0x210)
// Class FortniteUI.FortAthenaMatchmakingWidget
class UFortAthenaMatchmakingWidget : public UCommonUserWidget
{
public:
	TSubclassOf<class UFortMissionGenerator>     DefaultMissionGen;                                 // 0x210(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CurrentPlaylistName;                               // 0x218(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPlaylistAthena*                   CurrentPlaylistObj;                                // 0x220(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCurrentSquadFill;                                 // 0x228(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1464[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               SpinnerAndTextContainer;                           // 0x230(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButton*                         PlayButton;                                        // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButton*                         CancelButton;                                      // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButton*                         StartMatchButton;                                  // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      MatchmakingHeaderText;                             // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      MatchmakingMessageText;                            // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonBorder*                         NewModeBorder;                                     // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1465[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortAthenaMatchmakingWidget* GetDefaultObj();

	void SetSquadFillText(bool InCurrentSquadFill);
	void PlaylistChanged(class UFortPlaylistAthena* NewPlaylist);
	void OnSetPlayButtonText(class FText& PlayButtonText);
	void OnSetCancelButtonText(class FText& CancelButtonText);
	void OnPlayButtonUpdated(bool bShowPlayButton);
	void OnPlayButtonPressed();
	void OnCancelButtonPressed();
	void OnAvailablePlaylistsUpdated();
	void GetDefaultPlaylists(TArray<class UFortPlaylistAthena*>* DefaultPlaylists);
	int32 GetCurrentPartySize();
	TArray<class UFortPlaylistAthena*> GetActivePlaylists();
};

// 0x48 (0x258 - 0x210)
// Class FortniteUI.FortAthenaNewsWidget
class UFortAthenaNewsWidget : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                      Title1;                                            // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Body1;                                             // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEpicCMSImage*                         Image1;                                            // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Title2;                                            // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Body2;                                             // 0x230(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEpicCMSImage*                         Image2;                                            // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Title3;                                            // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Body3;                                             // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEpicCMSImage*                         Image3;                                            // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortAthenaNewsWidget* GetDefaultObj();

};

// 0x60 (0x388 - 0x328)
// Class FortniteUI.FortAthenaTabsScreenBase
class UFortAthenaTabsScreenBase : public UFortActivatablePanel
{
public:
	TMap<enum class EFortUIFeature, class FName> FeaturesTabsMap;                                   // 0x328(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UFortTabListWidgetBase*                TopTabList;                                        // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_146B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortAthenaTabsScreenBase* GetDefaultObj();

	void ShowReplayBrowser();
	void HandleFeatureStateChanged(enum class EFortUIFeature ChangedFeature, enum class EFortUIFeatureState NewState, enum class EFortUIFeatureStateReason Reason);
	void HandleFeatureNavigateRequest(enum class EFortUIFeature Feature);
	bool CanShowSeasonShopTab();
	bool CanShowPrototypeTab(class FName TabNameID);
};

// 0x18 (0x230 - 0x218)
// Class FortniteUI.FortAttributeList
class UFortAttributeList : public UFortUserWidget
{
public:
	TSubclassOf<class UFortAttributeListItem>    AttributeItemClass;                                // 0x218(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHoverEnabledOnElements;                           // 0x220(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_146F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBox*                          AttributeContainer;                                // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortAttributeList* GetDefaultObj();

	void SetPreviewData(TArray<struct FFortDisplayAttribute>& Data);
	TArray<struct FFortDisplayAttribute> SetData(TArray<struct FFortDisplayAttribute>& Data);
	void ClearPreviewData();
	void Clear();
};

// 0x30 (0x240 - 0x210)
// Class FortniteUI.FortAttributeList_NUI
class UFortAttributeList_NUI : public UCommonUserWidget
{
public:
	TSubclassOf<class UFortAttributeListItem_NUI> AttributeItemClass;                                // 0x210(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHoverEnabledOnElements;                           // 0x218(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1475[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortAttributeListItem_NUI*>    ShownAttributeWidgets;                             // 0x220(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1476[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortAttributeList_NUI* GetDefaultObj();

	void SetPreviewData(TArray<struct FFortDisplayAttribute>& Data);
	void SetData(TArray<struct FFortDisplayAttribute>& Data);
	void OnRemoveShownAttributeListItem(class UFortAttributeListItem_NUI* AttributeListItemWidget, int32 AtIndex);
	void OnClearShownAttributes();
	void OnAddShownAttributeListItem(class UFortAttributeListItem_NUI* AttributeListItemWidget);
	void ClearPreviewData();
};

// 0xE8 (0x2F0 - 0x208)
// Class FortniteUI.FortAttributeListItem
class UFortAttributeListItem : public UUserWidget
{
public:
	bool                                         bHoverEnabled;                                     // 0x208(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1478[0xE7];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortAttributeListItem* GetDefaultObj();

	void ValueChanged(float Delta);
	void SetPreviewAttribute(struct FFortDisplayAttribute& InPreviewAttribute);
	bool SetDisplayAttribute(struct FFortDisplayAttribute& InDisplayAttribute, struct FFortDisplayAttribute* DeltaAttribute);
	void PreviewStarted();
	void PreviewEnded();
	void GetDisplayPreviewCopy(struct FFortDisplayAttribute* OutPreviewAttribute);
	void GetDisplayAttributeCopy(struct FFortDisplayAttribute* OutDisplayAttribute);
	void GetCurrentAttributeCopy(struct FFortDisplayAttribute* OutDisplayAttribute);
	void DisplayAttributeChanged();
	void ClearPreview();
};

// 0xF8 (0x308 - 0x210)
// Class FortniteUI.FortAttributeListItem_NUI
class UFortAttributeListItem_NUI : public UCommonUserWidget
{
public:
	uint8                                        Pad_148B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bHoverEnabled;                                     // 0x218(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_148D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          StatTag;                                           // 0x220(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_148E[0xE0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortAttributeListItem_NUI* GetDefaultObj();

	void ValueChanged(float Delta);
	void SetPreviewAttribute(struct FFortDisplayAttribute& InPreviewAttribute);
	void SetDisplayAttribute(struct FFortDisplayAttribute& InDisplayAttribute);
	void PreviewStarted();
	void PreviewEnded();
	bool HasPreviewAttribute();
	void GetDisplayPreviewCopy(struct FFortDisplayAttribute* OutPreviewAttribute);
	void GetDisplayAttributeCopy(struct FFortDisplayAttribute* OutDisplayAttribute);
	void GetCurrentAttributeCopy(struct FFortDisplayAttribute* OutDisplayAttribute);
	void DisplayAttributeChanged();
	void ClearPreview();
};

// 0x0 (0x220 - 0x220)
// Class FortniteUI.FortAudioOptions
class UFortAudioOptions : public UFortOptionsTab
{
public:

	static class UClass* StaticClass();
	static class UFortAudioOptions* GetDefaultObj();

	void SoundFXVolumeChanged(float NewValue);
	bool ShowQuality();
	bool ShowAllowGameVolumeWhenMinimized();
	void SetVoiceChatPTTEnabled(bool bNewValue);
	void SetVoiceChatOutputDevice(const class FString& NewDevice);
	void SetVoiceChatInputDevice(const class FString& NewDevice);
	void SetVoiceChatEnabled(bool bNewValue);
	void SetVoiceChat3DEnabled(bool bNewValue);
	void SetSubtitlesEnabled(bool bNewValue);
	void SetQuality(int32 NewQuality);
	void SetAllowGameVolumeWhenMinimized(bool bNewValue);
	void MusicVolumeChanged(float NewValue);
	bool IsUsingCustomVoiceChatOutputDevice();
	bool IsUsingCustomVoiceChatInputDevice();
	bool GetVoiceChatPTTEnabled();
	class FString GetVoiceChatOutputDevice();
	class FString GetVoiceChatInputDevice();
	bool GetVoiceChatEnabled();
	bool GetVoiceChat3DEnabled();
	bool GetSubtitlesEnabled();
	float GetSoundFXVolumeValue();
	int32 GetQuality();
	float GetMusicVolumeValue();
	float GetDialogVolumeValue();
	float GetCinematicsVolume();
	float GetChatVolumeValue();
	TArray<class FString> GetAvailableVoiceChatOutputDevices();
	TArray<class FString> GetAvailableVoiceChatInputDevices();
	bool GetAllowGameVolumeWhenMinimized();
	void DialogVolumeChanged(float NewValue);
	void CinematicsVolumeChanged(float NewValue);
	void ChatVolumeChanged(float NewValue);
};

// 0x8 (0x358 - 0x350)
// Class FortniteUI.FortAutorunLockZone
class UFortAutorunLockZone : public UBacchusHUDElement
{
public:
	bool                                         bIsInZone;                                         // 0x350(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsAutorunLockEnabled;                             // 0x351(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_14D3[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortAutorunLockZone* GetDefaultObj();

	void OnInZoneChanged(bool bNewIsInZone);
};

// 0x40 (0x158 - 0x118)
// Class FortniteUI.FortBangWrapper
class UFortBangWrapper : public UContentWidget
{
public:
	uint8                                        Pad_14D7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EFortBangSize                     Size;                                              // 0x120(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14D8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Offset;                                            // 0x124(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBangType                     BangType;                                          // 0x12C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14DA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TutorialNameID;                                    // 0x130(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortTutorialGlowType             TutorialGlowType;                                  // 0x138(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14DB[0x1F];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortBangWrapper* GetDefaultObj();

	void SetBangVisibility(bool InVisible);
};

// 0x18 (0x228 - 0x210)
// Class FortniteUI.FortBangWrapper_NUI
class UFortBangWrapper_NUI : public UCommonUserWidget
{
public:
	uint8                                        Pad_14E6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EFortBangType                     BangType;                                          // 0x218(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14E8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TutorialNameID;                                    // 0x220(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortBangWrapper_NUI* GetDefaultObj();

	void UnregisterTutorialNameID();
	void SetTutorialNameID(class FName InTutorialNameID);
	void SetBangType(enum class EFortBangType NewBangType);
	void SetBangStateBP(bool bEnabled, int32 Count);
	void OnStopCallout();
	void OnStartCallout();
	void OnBangStateChanged(bool bEnabled, int32 Count);
};

// 0x68 (0x360 - 0x2F8)
// Class FortniteUI.FortBannerSelectorBase
class UFortBannerSelectorBase : public UCommonActivatablePanel
{
public:
	class UEditableText*                         BannerName;                                        // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        BannerNameMaxLength;                               // 0x300(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_150D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBorder*                               ErrorBorder;                                       // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      ErrorText;                                         // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_150E[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortBannerSelectorBase* GetDefaultObj();

	void UpdateErrorText(class FText& ErrorMessageText);
	void OnHomebaseNameCommitSucceeded();
	void OnHomebaseNameCommitFailed();
	void IsPlayerNameValid(class FText& PlayerName, bool* OutIsValid, class FText* OutErrorText);
	bool HasIllegalChars(const class FString& NewBannerName);
	void HandleBannerNameChanged(class FText& Text);
	void CompleteHomebaseName();
	void CompleteHomebaseBannerSelection();
};

// 0x1A30 (0x1A58 - 0x28)
// Class FortniteUI.FortButtonStyle
class UFortButtonStyle : public UObject
{
public:
	struct FFortStateStyle                       NormalBase;                                        // 0x28(0x350)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortStateStyle                       NormalHovered;                                     // 0x378(0x350)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortStateStyle                       NormalPressed;                                     // 0x6C8(0x350)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortStateStyle                       SelectedBase;                                      // 0xA18(0x350)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortStateStyle                       SelectedHovered;                                   // 0xD68(0x350)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortStateStyle                       SelectedPressed;                                   // 0x10B8(0x350)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortStateStyle                       Disabled;                                          // 0x1408(0x350)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortMultiSizeMargin                  ButtonPadding;                                     // 0x1758(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortMultiSizeFont                    Font;                                              // 0x17B8(0x210)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortMultiSizeMargin                  CustomPadding;                                     // 0x19C8(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           PressedSlateSound;                                 // 0x1A28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           HoveredSlateSound;                                 // 0x1A40(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortButtonStyle* GetDefaultObj();

	struct FMargin GetMarginBySizeFromMultiSizeMargin(struct FFortMultiSizeMargin& MultiSizeMargin, enum class EFortBrushSize Size);
	struct FSlateFontInfo GetFontBySizeFromMultiSizeFont(struct FFortMultiSizeFont& MultiSizeFont, enum class EFortBrushSize Size);
	struct FSlateFontInfo GetFontBySize(enum class EFortBrushSize Size);
	struct FMargin GetCustomPaddingBySize(enum class EFortBrushSize Size);
	struct FMargin GetButtonPaddingBySize(enum class EFortBrushSize Size);
	struct FSlateBrush GetBrushBySizeFromMultiSizeBrush(struct FFortMultiSizeBrush& MultiSizeBrush, enum class EFortBrushSize Size);
};

// 0x5C8 (0x7E0 - 0x218)
// Class FortniteUI.FortBaseButton
class UFortBaseButton : public UFortUserWidget
{
public:
	uint8                                        Pad_1535[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  EnabledChanged;                                    // 0x220(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  SelectedChanged;                                   // 0x230(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  ButtonClicked;                                     // 0x240(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	enum class EFortBangSize                     BangSize;                                          // 0x250(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1536[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             BangOffset;                                        // 0x254(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortBangType                     BangType;                                          // 0x25C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1537[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TutorialNameID;                                    // 0x260(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortTutorialGlowType             TutorialGlowType;                                  // 0x268(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1538[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UFortButtonStyle>          Style;                                             // 0x270(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortBrushSize                    BrushSize;                                         // 0x278(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1539[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateSound                           PressedSlateSoundOverride;                         // 0x280(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateSound                           HoveredSlateSoundOverride;                         // 0x298(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bSelectable;                                       // 0x2B0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_153A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SelectionGroup;                                    // 0x2B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bToggleable;                                       // 0x2C0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bClickable;                                        // 0x2C1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EButtonClickMethod                ClickMethod;                                       // 0x2C2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_153C[0x51D];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortBaseButton* GetDefaultObj();

	void SetStyle(TSubclassOf<class UFortButtonStyle> InStyle);
	void SetSelectionGroup(class FName InSelectionGroup);
	void SetSelected(bool InSelected);
	void SetHovered(bool InHovered);
	void SetClickMethod(enum class EButtonClickMethod InClickMethod);
	void SetClickable(bool InClickable);
	void SetBrushSize(enum class EFortBrushSize InSize);
	void SetBangVisibility(bool bVisible);
	void OnButtonClicked();
	class UFortButtonStyle* GetStyle();
	int32 GetSelectionGroupIndex();
	bool GetSelected();
	struct FFortStateStyle GetCurrentStateStyle();
	struct FSlateFontInfo GetCurrentFont();
	struct FMargin GetCurrentCustomPadding();
	struct FMargin GetCurrentButtonPadding();
	void ForceClick();
};

// 0x8 (0x220 - 0x218)
// Class FortniteUI.FortBluGloCounter
class UFortBluGloCounter : public UFortUserWidget
{
public:
	uint8                                        Pad_153F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortBluGloCounter* GetDefaultObj();

	void OnBluGloQuantityChanged(int32 Quantity);
};

// 0x8 (0x218 - 0x210)
// Class FortniteUI.FortBorderStyleList
class UFortBorderStyleList : public UCommonUserWidget
{
public:
	class FName                                  BordersPath;                                       // 0x210(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortBorderStyleList* GetDefaultObj();

	TArray<TSoftClassPtr<class UCommonBorderStyle>> GetBorderStyles();
};

// 0x0 (0x270 - 0x270)
// Class FortniteUI.FortBuildingInfoIndicatorWidget
class UFortBuildingInfoIndicatorWidget : public UFortActorIndicatorWidget
{
public:

	static class UClass* StaticClass();
	static class UFortBuildingInfoIndicatorWidget* GetDefaultObj();

	void SetKeyBindWidgetBoundAction(class UFortKeybindWidget* FortKeybindWidget, class FName ActionName, enum class EFortBuildingInteraction InteractionType);
};

// 0x18 (0x438 - 0x420)
// Class FortniteUI.FortButtonInternalWidget
class UFortButtonInternalWidget : public UButton
{
public:
	bool                                         IsClickable;                                       // 0x420(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1546[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortButtonInternalWidget* GetDefaultObj();

};

// 0x70 (0x280 - 0x210)
// Class FortniteUI.FortCampaignMap
class UFortCampaignMap : public UCommonUserWidget
{
public:
	struct FFortSwipeDetector                    SwipeDetector;                                     // 0x210(0x70)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortCampaignMap* GetDefaultObj();

	void OnSwipeRight();
	void OnSwipeLeft();
	void OnShowPreviousPage();
	void OnShowNextPage();
};

// 0x10 (0x228 - 0x218)
// Class FortniteUI.FortCapturePointWidget
class UFortCapturePointWidget : public UFortUserWidget
{
public:
	uint8                                        Pad_1553[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortCapturePointWidget* GetDefaultObj();

	void OnCapturePointDataChanged(bool bActivated, bool bLocked, float CapturePercentage, enum class ECaptureState CaptureState, enum class EFortTeam ControllingTeam);
};

// 0x18 (0x230 - 0x218)
// Class FortniteUI.FortChatContainer
class UFortChatContainer : public UFortUserWidget
{
public:
	bool                                         MinimizeEnabled;                                   // 0x218(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoReleaseFocus;                                  // 0x219(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowEmotes;                                       // 0x21A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1556[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ListFadeTime;                                      // 0x21C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinimizedChatMessageNum;                           // 0x220(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1557[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortChatContainer* GetDefaultObj();

	void SetNativeWidgetHost(class UNativeWidgetHost* InNativeWidgetHost);
	void AttachChatWindowToNativeWidget();
};

// 0x48 (0x158 - 0x110)
// Class FortniteUI.FortChatWidget
class UFortChatWidget : public UNativeWidgetHost
{
public:
	bool                                         MinimizeEnabled;                                   // 0x110(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoReleaseFocus;                                  // 0x111(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowEmotes;                                       // 0x112(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_155B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ListFadeTime;                                      // 0x114(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinimizedChatMessageNum;                           // 0x118(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ThrottleChat;                                      // 0x11C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_155C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ThrottleTicketTime;                                // 0x120(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ThrottleTicketCount;                               // 0x124(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnChatEnteredEvent;                                // 0x128(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnUserListChanged;                                 // 0x138(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_155D[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortChatWidget* GetDefaultObj();

	void SetControllerActionBrush(const struct FSlateBrush& SlateBrush);
	void FocusChatEntry();
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortCheatMenuFactory
class UFortCheatMenuFactory : public UObject
{
public:

	static class UClass* StaticClass();
	static class UFortCheatMenuFactory* GetDefaultObj();

	void AddStoreCheatMenu(class UCommonUserWidget* Widget);
	void AddGrantCheatMenu(class UCommonUserWidget* Widget, const class FString& TemplateId, const class FString& InstanceId);
};

// 0x18 (0x228 - 0x210)
// Class FortniteUI.FortCollectionBookGenericRewardWidget
class UFortCollectionBookGenericRewardWidget : public UCommonUserWidget
{
public:
	uint8                                        bUpdateVisibilityBasedOnRewardExistence : 1;       // Mask: 0x1, PropSize: 0x10x210(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_11B : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_156D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ESlateVisibility                  VisibilityWhenNoRewardSpecified;                   // 0x214(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESlateVisibility                  VisibilityWhenRewardSpecified;                     // 0x215(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_156E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortCollectionBookRewardCardWidget*   RewardCardWidget;                                  // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECollectionBookRewardStatus       RewardStatus;                                      // 0x220(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_156F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortCollectionBookGenericRewardWidget* GetDefaultObj();

	void SetRewardStatus(enum class ECollectionBookRewardStatus Status);
	void SetRewards(struct FFortRewardInfo& Rewards);
	void SetCurrentItemToDisplay(class UFortItem* ItemToDisplay);
	void OnRewardStatusChanged(enum class ECollectionBookRewardStatus NewStatus);
	bool HasRewards();
	enum class ECollectionBookRewardStatus GetRewardStatus();
	void ClearRewards();
};

// 0x48 (0x258 - 0x210)
// Class FortniteUI.FortCollectionBookOverviewWidget
class UFortCollectionBookOverviewWidget : public UCommonUserWidget
{
public:
	UMulticastDelegateProperty_                  OnCollectionBookPageSelected;                      // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCollectionBookPageClicked;                       // 0x220(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UFortCollectionBookPage*               LastSelectedPage;                                  // 0x230(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortCollectionBookCategory*           LastSelectedCategory;                              // 0x238(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UFortCollectionBookCategory*>   CategoryObjectPool;                                // 0x240(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	class UCommonTreeView*                       PageTreeViewWidget;                                // 0x250(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortCollectionBookOverviewWidget* GetDefaultObj();

	void OnDeactivated();
	void OnActivated();
};

// 0x0 (0x228 - 0x228)
// Class FortniteUI.FortCollectionBookPageCompletionRewardWidget
class UFortCollectionBookPageCompletionRewardWidget : public UFortCollectionBookGenericRewardWidget
{
public:

	static class UClass* StaticClass();
	static class UFortCollectionBookPageCompletionRewardWidget* GetDefaultObj();

};

// 0x70 (0x280 - 0x210)
// Class FortniteUI.FortCollectionBookPageDetailsWidget
class UFortCollectionBookPageDetailsWidget : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                      PageCompletionText;                                // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortMaterialProgressBar*              ProgressBar;                                       // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookPageCompletionRewardWidget* PageRewardWidget;                                  // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButton*                         RewardDetailsButton;                               // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookPage*               DetailsPage;                                       // 0x230(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UFortCollectionBookRewardModalWidget> RewardDetailsModalWidgetClass;                     // 0x238(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  ModalTitle;                                        // 0x260(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class UFortCollectionBookRewardModalWidget*  RewardDetailsModalWidget;                          // 0x278(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortCollectionBookPageDetailsWidget* GetDefaultObj();

	void OnSlotItemComplete(class UFortAccountItem* SlottedItem, class FName SlotId);
	void OnPageProgressionUpdated(int32 TotalFilledSlots, int32 TotalSlots, enum class EFortCollectionBookState State);
	void OnDetailsPageChanged(class UFortCollectionBookPage* InNewDetailsPage);
	void HandleRewardDetailsModalWidgetDeactivated(class UCommonActivatablePanel* DeactivatedPanel);
};

// 0x30 (0x8B8 - 0x888)
// Class FortniteUI.FortCollectionBookPageListWidget
class UFortCollectionBookPageListWidget : public UCommonButton
{
public:
	uint8                                        Pad_1579[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      PageNameWidget;                                    // 0x890(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonNumericTextBlock*               AvailableSlotsWidget;                              // 0x898(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      PageCompletionWidget;                              // 0x8A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UObject>                AssociatedPageOrCategory;                          // 0x8A8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsExpanded;                                       // 0x8B0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_157A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortCollectionBookPageListWidget* GetDefaultObj();

	void SetupAsPage(class UFortCollectionBookPage* Page);
	void SetupAsCategory(class UFortCollectionBookCategory* Category);
	void OnSlotItemComplete(class UFortAccountItem* SlottedItem, class FName SlotId);
	void OnPageDetailsUpdated(int32 AvailableSlots, int32 FilledSlots, int32 TotalSlots, enum class EFortCollectionBookState State);
	void OnCategoryDetailsUpdated(int32 AvailableSlots, int32 FilledSlots, int32 TotalSlots);
};

// 0x20 (0x2C8 - 0x2A8)
// Class FortniteUI.FortCollectionBookPicker
class UFortCollectionBookPicker : public UFortItemPickerBase
{
public:
	UMulticastDelegateProperty_                  OnSlotItemConfirmationCompleteEvent;               // 0x2A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1583[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAccountItem*                      CurrentSlottedItem;                                // 0x2C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortCollectionBookPicker* GetDefaultObj();

	void SlotItemConfirmationComplete(class UFortItem* CommittedItem, const struct FFortDialogExternalLatentActionHandle& LatentActionHandle);
	void OnSlotItemConfirmed__DelegateSignature(class UFortItem* ItemToSlot, class FName SlotId, const struct FFortDialogExternalLatentActionHandle& LatentActionHandle);
	class UFortAccountItem* GetCurrentSlottedItem();
};

// 0xC0 (0x3B8 - 0x2F8)
// Class FortniteUI.FortCollectionBookPrimaryPanel
class UFortCollectionBookPrimaryPanel : public UCommonActivatablePanel
{
public:
	UMulticastDelegateProperty_                  OnCollectionBookPageSelectedDelegate;              // 0x2F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCollectionBookPageClickedDelegate;               // 0x308(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCollectionBookSectionClickedDelegate;            // 0x318(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   BackActionRowHandle;                               // 0x328(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   SummonInfoPanelActionRowHandle;                    // 0x338(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UFortCollectionBookOverviewWidget*     OverviewWidget;                                    // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTileView*                       SectionTileViewWidget;                             // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECollectionBookPrimaryNavTarget   CurrentNavTarget;                                  // 0x358(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_158F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortCollectionBookSection*            LastClickedSection;                                // 0x360(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1590[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortCollectionBookPrimaryPanel* GetDefaultObj();

	void OnSummonInfoPanelExecuted(bool* bPassThrough);
	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType);
	void OnCollectionBookSectionClicked(class UFortCollectionBookSection* ClickedSection);
	void OnCollectionBookPageSelected(class UFortCollectionBookPage* SelectedPage);
	void OnCollectionBookPageClicked(class UFortCollectionBookPage* ClickedPage);
	void OnBackActionExecuted(bool* bPassThrough);
};

// 0x18 (0x228 - 0x210)
// Class FortniteUI.FortCollectionBookProgressionRewardDetailInspectWidget
class UFortCollectionBookProgressionRewardDetailInspectWidget : public UCommonUserWidget
{
public:
	class UCommonNumericTextBlock*               LevelTextWidget;                                   // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortRewardInfoWidget*                 RewardWidget;                                      // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1597[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortCollectionBookProgressionRewardDetailInspectWidget* GetDefaultObj();

	void SetAssociatedLevel(int32 Level);
	void OnXPRequiredChanged(int32 NewXPRequired);
	int32 GetXPRequired();
};

// 0x68 (0x390 - 0x328)
// Class FortniteUI.FortCollectionBookProgressionRewardsModalWidget
class UFortCollectionBookProgressionRewardsModalWidget : public UFortActivatablePanel
{
public:
	TSoftClassPtr<class UFortCollectionBookProgressionRewardDetailInspectWidget> RewardWidgetClass;                                 // 0x328(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMargin                               RewardWidgetPadding;                               // 0x350(0x10)(Edit, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	int32                                        NumRewardsToShow;                                  // 0x360(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_159D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBox*                          RewardBoxWidget;                                   // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                          MajorRewardBoxWidget;                              // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      XPTextWidget;                                      // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonNumericTextBlock*               LevelTextWidget;                                   // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonGroup*                    ButtonGroup;                                       // 0x388(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortCollectionBookProgressionRewardsModalWidget* GetDefaultObj();

	void OnSelectedButtonChanged(class UCommonButton* SelectedButton, int32 ButtonIndex);
	void OnLevelProgressionSet(int32 CurrentLevel, float NextLvlPct);
	void OnInputMethodChanged(bool bUsingGamepad);
	void InspectItemBP(class UFortItem* Item);
};

// 0x10 (0x220 - 0x210)
// Class FortniteUI.FortCollectionBookProgressionRewardsPreviewWidget
class UFortCollectionBookProgressionRewardsPreviewWidget : public UCommonUserWidget
{
public:
	class UFortCollectionBookProgressionRewardWidget* NextRewardWidget;                                  // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookProgressionRewardWidget* NextMajorRewardWidget;                             // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortCollectionBookProgressionRewardsPreviewWidget* GetDefaultObj();

};

// 0x10 (0x238 - 0x228)
// Class FortniteUI.FortCollectionBookProgressionRewardWidget
class UFortCollectionBookProgressionRewardWidget : public UFortCollectionBookGenericRewardWidget
{
public:
	class UCommonNumericTextBlock*               LevelTextWidget;                                   // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      DisplayNameWidget;                                 // 0x230(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortCollectionBookProgressionRewardWidget* GetDefaultObj();

	void SetAssociatedLevel(int32 Level);
};

// 0x60 (0x270 - 0x210)
// Class FortniteUI.FortCollectionBookProgressWidget
class UFortCollectionBookProgressWidget : public UCommonUserWidget
{
public:
	int32                                        CachedXPLevel;                                     // 0x210(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CachedXPCompletionPct;                             // 0x214(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UFortCollectionBookProgressionRewardsModalWidget> RewardDetailsModalWidgetClass;                     // 0x218(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookProgressionRewardsPreviewWidget* ProgressionRewardsPreviewWidget;                   // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      XPTextWidget;                                      // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonNumericTextBlock*               LevelTextWidget;                                   // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButton*                         DetailsButtonWidget;                               // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookPageDetailsWidget*  PageDetailsWidget;                                 // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookProgressionRewardsModalWidget* DetailsModalWidget;                                // 0x268(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortCollectionBookProgressWidget* GetDefaultObj();

	void OnSlottedItemOperationComplete(class UFortAccountItem* ItemSlotted, class FName SlotId);
	void OnCollectionBookPreviewXPChange(float PreviewCompletionPct);
	void OnCollectionBookPageSelected(class UFortCollectionBookPage* SelectedPage);
	void OnCollectionBookLevelProgressionChanged(float NewCompletionPct);
	void OnCollectionBookLevelChanged(int32 NewLevel);
	void HandleDetailsModalWidgetDeactivated(class UCommonActivatablePanel* DeactivatedPanel);
};

// 0x18 (0x228 - 0x210)
// Class FortniteUI.FortCollectionBookRecycleSlotResultsWidget
class UFortCollectionBookRecycleSlotResultsWidget : public UCommonUserWidget
{
public:
	class UPanelWidget*                          RecycleResultsWidget;                              // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortItemCardSize                 ItemCardSize;                                      // 0x218(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_15AA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAccountItem*                      ItemToRecycle;                                     // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortCollectionBookRecycleSlotResultsWidget* GetDefaultObj();

	void SetCurrentItemToRecycle(class UFortAccountItem* InItemToRecycle);
};

// 0x80 (0x290 - 0x210)
// Class FortniteUI.FortCollectionBookRewardCardWidget
class UFortCollectionBookRewardCardWidget : public UCommonUserWidget
{
public:
	UMulticastDelegateProperty_                  OnDisplayedItemChangedEvent;                       // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UFortMultiSizeItemCard*                ItemCardWidget;                                    // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               MultiItemRewardOverlay;                            // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               ChoiceRewardOverlay;                               // 0x230(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        UpdateCardInterval;                                // 0x238(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortItemCardSize                 ItemCardSize;                                      // 0x23C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDisplayAsRewardCard;                              // 0x23D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_15AC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortRewardInfo                       RepresentedRewards;                                // 0x240(0x30)(Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UFortItem*>                     DummyItems;                                        // 0x270(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	struct FTimerHandle                          UpdateCardTimer;                                   // 0x280(0x8)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_15AD[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortCollectionBookRewardCardWidget* GetDefaultObj();

	void SetRewards(struct FFortRewardInfo& Rewards);
	void OnDisplayedItemChangedEvent__DelegateSignature(class UFortItem* DisplayedItem);
	bool HasRewards();
	void ClearRewards();
};

// 0x50 (0x348 - 0x2F8)
// Class FortniteUI.FortCollectionBookRewardModalWidget
class UFortCollectionBookRewardModalWidget : public UCommonActivatablePanel
{
public:
	class UCommonTextBlock*                      TitleWidget;                                       // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortRewardInfoWidget*                 RewardWidget;                                      // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortMaterialProgressBar*              ProgressBar;                                       // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      ProgressTextWidget;                                // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_15B3[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortCollectionBookRewardModalWidget* GetDefaultObj();

};

// 0x58 (0x280 - 0x228)
// Class FortniteUI.FortCollectionBookSectionCompletionRewardWidget
class UFortCollectionBookSectionCompletionRewardWidget : public UFortCollectionBookGenericRewardWidget
{
public:
	class UCommonButton*                         RewardDetailsButton;                               // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UFortCollectionBookRewardModalWidget> RewardDetailsModalWidgetClass;                     // 0x230(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  ModalTitle;                                        // 0x258(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class UFortCollectionBookRewardModalWidget*  RewardDetailsModalWidget;                          // 0x270(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortCollectionBookSection*            Section;                                           // 0x278(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortCollectionBookSectionCompletionRewardWidget* GetDefaultObj();

	void HandleRewardDetailsModalWidgetDeactivated(class UCommonActivatablePanel* DeactivatedPanel);
};

// 0x1B8 (0x4B0 - 0x2F8)
// Class FortniteUI.FortCollectionBookSectionPanel
class UFortCollectionBookSectionPanel : public UCommonActivatablePanel
{
public:
	UMulticastDelegateProperty_                  OnSectionCloseRequest;                             // 0x2F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPreviewXPChangeEvent;                            // 0x308(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UCommonTextBlock*                      SectionNameTextWidget;                             // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookSlotView*           SlotViewWidget;                                    // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookPicker*             SlotItemPicker;                                    // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               ContextOverlayWidget;                              // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            ContextTextWidget;                                 // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookSectionCompletionRewardWidget* SectionRewardWidget;                               // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               ItemAcquisitionSourceContainerWidget;              // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      ItemAcquisitionSourceDescWidget;                   // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      ItemAcquisitionSourceDesc2Widget;                  // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               ResearchRecruitUnslotContainerWidget;              // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      PersonRecruitUnavailableMessageWidget;             // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      ItemResearchUnavailableMessageWidget;              // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      UnslotUnavailableMessageWidget;                    // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   BackActionRowHandle;                               // 0x380(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   CloseActionRowHandle;                              // 0x390(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   SlotItemActionRowHandle;                           // 0x3A0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   InspectItemActionRowHandle;                        // 0x3B0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   InspectCollectionBookItemActionRowHandle;          // 0x3C0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   InspectPreviewItemActionRowHandle;                 // 0x3D0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   OpenPickerActionRowHandle;                         // 0x3E0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   LogAllowedItemsActionRowHandle;                    // 0x3F0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   ResearchItemActionRowHandle;                       // 0x400(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   RecruitActionRowHandle;                            // 0x410(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   UnslotItemActionRowHandle;                         // 0x420(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class ECollectionBookSectionNavTarget   CurrentNavTarget;                                  // 0x430(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_15E9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortCollectionBookSection*            AssociatedSection;                                 // 0x438(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasSummonedInspectPanel;                          // 0x440(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_15EA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortDialogExternalLatentActionHandle SlotConfirmationDialogLatentHandle;                // 0x444(0x4)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnShowItemDetailEvent;                             // 0x448(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnSlotItemConfirmEvent;                            // 0x458(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnResearchItemConfirmEvent;                        // 0x468(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnUnslotItemConfirmEvent;                          // 0x478(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnInspectItemEvent;                                // 0x488(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_15EC[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortCollectionBookSectionPanel* GetDefaultObj();

	void OnUnslotItemOperationComplete(class UFortAccountItem* UnslottedItem, class UFortAccountItem* OldSlottedItem, class FName SlotId);
	void OnUnslotItemActionExecuted(bool* bPassThrough);
	void OnSlottedItemOperationComplete(class UFortAccountItem* SlottedItem, class FName SlotId);
	void OnSlotPickerItemSelected(class UFortItem* SelectedItem);
	void OnSlotPickerItemHovered(class UFortItem* HoveredItem);
	void OnSlotItemConfirmationCompleted(class UFortItem* SelectedItem, class FName SlotId, const struct FFortDialogExternalLatentActionHandle& LatentActionHandle);
	void OnSlotItemComplete(class UFortAccountItem* SlottedItem, class FName SlotId);
	void OnSlotItemActionExecuted(bool* bPassThrough);
	void OnSlotButtonSelected(class UFortCollectionBookSlotButton* SlotButton);
	void OnSlotButtonCommitted(class UFortCollectionBookSlotButton* SlotButton);
	void OnSectionChanged(class UFortCollectionBookSection* Section);
	void OnResearchItemOperationComplete(class UFortAccountItem* NewItem, const class FString& TemplateId);
	void OnResearchItemAction__DelegateSignature(class UFortItem* SelectedItem, const struct FFortCollectionBookSlotData& SlotData);
	void OnPurchaseItemActionExecuted(bool* bPassThrough);
	void OnOpenPickerActionExecuted(bool* bPassThrough);
	void OnLogAllowedItemsActionExecuted(bool* bPassThrough);
	void OnItemInspectAction__DelegateSignature(class UFortItem* SelectedItem, bool EnableItemActions, bool IsPlaceholderItem);
	void OnItemAction__DelegateSignature(class UFortItem* SelectedItem);
	void OnInspectActionExecuted(bool* bPassThrough);
	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType);
	void OnBackActionExecuted(bool* bPassThrough);
};

// 0x78 (0x900 - 0x888)
// Class FortniteUI.FortCollectionBookSectionTileWidget
class UFortCollectionBookSectionTileWidget : public UCommonButton
{
public:
	uint8                                        Pad_15FF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UFortCollectionBookSlotWidget> SlotWidgetClass;                                   // 0x890(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMargin                               SlotWidgetPadding;                                 // 0x8B8(0x10)(Edit, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EHorizontalAlignment              SlotWidgetHorizontalAlignment;                     // 0x8C8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EVerticalAlignment                SlotWidgetVerticalAlignment;                       // 0x8C9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1600[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxNumSlotsSupported;                              // 0x8CC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        SlotBoxWidget;                                     // 0x8D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      SectionNameWidget;                                 // 0x8D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookGenericRewardWidget* SectionRewardWidget;                               // 0x8E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookSection*            AssociatedSection;                                 // 0x8E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UFortCollectionBookSlotWidget*> SlotWidgets;                                       // 0x8F0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortCollectionBookSectionTileWidget* GetDefaultObj();

	void OnSectionSlotUpdate(int32 NumFilledSlots, int32 NumSlots, enum class EFortCollectionBookState SectionState);
	void OnItemUnslotted(class UFortAccountItem* ItemUnslotted, class UFortAccountItem* OldSlottedItem, class FName SlotId);
	void OnItemSlotted(class UFortAccountItem* ItemSlotted, class FName SlotId);
};

// 0x8 (0x890 - 0x888)
// Class FortniteUI.FortCollectionBookSlotButton
class UFortCollectionBookSlotButton : public UCommonButton
{
public:
	class UFortCollectionBookSlotWidget*         CollectionBookSlotWidget;                          // 0x888(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortCollectionBookSlotButton* GetDefaultObj();

	void OnSlottedItemUpdated();
};

// 0x0 (0x210 - 0x210)
// Class FortniteUI.FortCollectionBookSlotDetailsWidget
class UFortCollectionBookSlotDetailsWidget : public UCommonUserWidget
{
public:

	static class UClass* StaticClass();
	static class UFortCollectionBookSlotDetailsWidget* GetDefaultObj();

};

// 0x98 (0x2A8 - 0x210)
// Class FortniteUI.FortCollectionBookSlotView
class UFortCollectionBookSlotView : public UCommonUserWidget
{
public:
	TSoftClassPtr<class UFortCollectionBookSlotButton> CollectionBookButtonClass;                         // 0x210(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        CollectionBookButtonBox;                           // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCommittableButtonGroup*           CollectionBookSlotButtonGroup;                     // 0x240(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UFortCollectionBookSlotButton*> CollectionBookSlotButtons;                         // 0x248(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UFortCollectionBookSection*            AssociatedSection;                                 // 0x258(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSendOnSlotCommittedEventOnMouseClick;             // 0x260(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_161A[0x37];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bCommitSelectedItemsOnClick;                       // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_161B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PreviousSelectedButtonIdx;                         // 0x29C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        CurrentSelectedButtonIdx;                          // 0x2A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_161C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortCollectionBookSlotView* GetDefaultObj();

	void OnSlotButtonCommitted(class UCommonButton* CommittedButton, int32 ButtonIdx);
	void OnSlotButtonClicked(class UCommonButton* ClickedButton, int32 ButtonIdx);
	void OnSelectedSlotButtonChanged(class UCommonButton* SelectedButton, int32 ButtonIdx);
};

// 0x128 (0x338 - 0x210)
// Class FortniteUI.FortCollectionBookSlotWidget
class UFortCollectionBookSlotWidget : public UCommonUserWidget
{
public:
	uint8                                        Pad_1624[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EFortItemCardSize                 ItemCardSize;                                      // 0x220(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsRewardCard;                                     // 0x221(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1625[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMultiSizeItemCard*                ItemCardWidget;                                    // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               UnslottedOverlayWidget;                            // 0x230(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               ReadyToSlotOverlayWidget;                          // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               UnslottedButReadyOverlayWidget;                    // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  SlotRowName;                                       // 0x248(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  ItemAvailableToSlotText;                           // 0x250(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  NoItemsAvailableToSlotText;                        // 0x268(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  HigherQualityItemsAvailableToSlotAndUpgradeAvailableText; // 0x280(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  HigherQualityItemsAvailableToSlotAndEvolveAvailableText; // 0x298(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  HigherQualityItemsAvailableToSlotText;             // 0x2B0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  ItemInSlotFullyUpgradedText;                       // 0x2C8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  ItemInSlotCanBeUpgradedText;                       // 0x2E0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  ItemInSlotCanBeEvolvedText;                        // 0x2F8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class UFortItem*                             SlottedItemRepresentation;                         // 0x310(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1626[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortCollectionBookSlotWidget* GetDefaultObj();

	void OnSlottedItemOperationComplete(class UFortAccountItem* ItemSlotted, class FName SlotId);
	void OnItemDestroyed();
	void OnItemCardUpdated();
	bool IsItemSlotted();
	bool HasItemsToSlot();
	class FName GetSlotRowName();
	int32 GetNumItemsToSlot();
	void FortCollectionBookSlottedItemUpdatedDelegate__DelegateSignature();
};

// 0x30 (0x358 - 0x328)
// Class FortniteUI.FortCollectionBookWidget
class UFortCollectionBookWidget : public UFortActivatablePanel
{
public:
	class UFortCollectionBookProgressWidget*     ProgressWidget;                                    // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonWidgetSwitcher*                 MainWidgetSwitcher;                                // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookPrimaryPanel*       PrimaryPanelWidget;                                // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortCollectionBookSectionPanel*       SectionPanelWidget;                                // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        PrimaryPanelIdx;                                   // 0x348(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SectionPanelIdx;                                   // 0x34C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_162F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortCollectionBookWidget* GetDefaultObj();

	void OnPreviewXPChangeRequest(int32 XPChange);
	void OnCollectionBookSectionCloseRequest();
	void OnCollectionBookSectionClicked(class UFortCollectionBookSection* ClickedSection);
	void OnCollectionBookPageSelected(class UFortCollectionBookPage* SelectedPage);
	void OnCollectionBookPageClicked(class UFortCollectionBookPage* ClickedPage);
};

// 0x10 (0xA8 - 0x98)
// Class FortniteUI.FortCommittableButtonGroup
class UFortCommittableButtonGroup : public UCommonButtonGroup
{
public:
	UMulticastDelegateProperty_                  OnButtonCommitted;                                 // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortCommittableButtonGroup* GetDefaultObj();

};

// 0x358 (0x458 - 0x100)
// Class FortniteUI.FortMultiSizeImage
class UFortMultiSizeImage : public UWidget
{
public:
	struct FFortMultiSizeBrush                   MultiSizeBrush;                                    // 0x100(0x330)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    BrushSize;                                         // 0x430(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1632[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ColorAndOpacity;                                   // 0x434(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1633[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortMultiSizeImage* GetDefaultObj();

	void SetMultiSizeBrush(struct FFortMultiSizeBrush& MultiSizeBrush);
	void SetColorAndOpacity(struct FLinearColor& Color);
	void SetBrushSize(enum class EFortBrushSize BrushSize);
};

// 0x8 (0x460 - 0x458)
// Class FortniteUI.FortComparisonResultIndicator
class UFortComparisonResultIndicator : public UFortMultiSizeImage
{
public:
	bool                                         bShouldCollapseWhenNotShown;                       // 0x458(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBuffState                    ComparisonResult;                                  // 0x459(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1637[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortComparisonResultIndicator* GetDefaultObj();

	void SetComparisonResult(enum class EFortBuffState ComparisonResult);
};

// 0x28 (0x260 - 0x238)
// Class FortniteUI.FortCraftingBarWidget
class UFortCraftingBarWidget : public UFortHUDElementWidget
{
public:
	class UCommonTextBlock*                      CraftingText;                                      // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                          CraftingProgressBar;                               // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CompletedRemainVisibleTime;                        // 0x248(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1640[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortCraftingBarWidget* GetDefaultObj();

	void SetHideCraftingBar(bool bInHideCraftBar);
	void OnCompletedSetHidden();
	void HandlePlayerStoppedCrafting(bool bSuccess, enum class EFortCraftFailCause CraftFailureCause);
	void HandlePlayerStartedCrafting();
};

// 0x8 (0x330 - 0x328)
// Class FortniteUI.FortDailyRewards
class UFortDailyRewards : public UFortActivatablePanel
{
public:
	uint8                                        Pad_1647[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortDailyRewards* GetDefaultObj();

	bool TryGetDailyRewardsData(struct FFortDailyRewardsData* OutDailyRewardsData, int32 ItemCardsPerSchedule, int32 MinEpicRewards);
	void SetupDailyRewards();
	void FinishedClaiming();
	void ClaimResultReceived(TArray<struct FFortItemInstanceQuantityPair>& Loot);
};

// 0x10 (0x220 - 0x210)
// Class FortniteUI.FortDailyRewardsItem
class UFortDailyRewardsItem : public UCommonUserWidget
{
public:
	struct FFortDailyRewardsItemData             ItemData;                                          // 0x210(0x10)(BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortDailyRewardsItem* GetDefaultObj();

};

// 0x98 (0x2A8 - 0x210)
// Class FortniteUI.FortDailyRewardsSchedule
class UFortDailyRewardsSchedule : public UCommonUserWidget
{
public:
	struct FFortDailyRewardsScheduleData         ScheduleData;                                      // 0x210(0x98)(BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortDailyRewardsSchedule* GetDefaultObj();

};

// 0x28 (0x320 - 0x2F8)
// Class FortniteUI.FortDefenderConfigPanel
class UFortDefenderConfigPanel : public UCommonActivatablePanel
{
public:
	TWeakObjectPtr<class UFortItem>              SelectedDefenderItem;                              // 0x2F8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItem>              SelectedWeaponItem;                                // 0x300(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItem>              SelectedAmmoItem;                                  // 0x308(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SelectedAmmoQuantity;                              // 0x310(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class ABuildingTrapDefender>  DefenderTrap;                                      // 0x314(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1658[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortDefenderConfigPanel* GetDefaultObj();

	bool UnsummonDefender();
	bool SpawnDefender();
	bool IsWeaponSelectionValid();
	bool HasWeaponForSelectedDefender();
	bool HasAnyDefenders();
	class UFortSchematicItemDefinition* GetSourceSchematic(class UFortWorldItemDefinition* ItemDefUsedForCrafting);
	class UFortWorldItem* GetDefenderPawnWeaponItem(class AFortAIPawn* DefenderPawn);
	class UFortWorldItemDefinition* GetCompatibleAmmoDef();
	class UFortWorldItem* GetCompatibleAmmo();
	int32 GetAmmoCountFromPlayer(class UFortWorldItemDefinition* AmmoItemDef);
	int32 GetAmmoCountFromDefender(class UFortWorldItemDefinition* AmmoItemDef);
};

// 0x0 (0x8B8 - 0x8B8)
// Class FortniteUI.FortDefenderItemTileButton
class UFortDefenderItemTileButton : public UFortItemPickerButton
{
public:

	static class UClass* StaticClass();
	static class UFortDefenderItemTileButton* GetDefaultObj();

	void HandleEquipSlotChanged(int32 EquipSlot);
};

// 0x120 (0x468 - 0x348)
// Class FortniteUI.FortItemTileView
class UFortItemTileView : public UCommonTileView
{
public:
	uint8                                        Pad_1662[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortItemFilterDefinition             Filter;                                            // 0x350(0x60)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FFortItemSorterDefinition             Sorter;                                            // 0x3B0(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bShouldShowNullItemTile;                           // 0x400(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutomaticallyLoadItemDetails;                     // 0x401(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EItemTileViewDisplayType          DisplayType;                                       // 0x402(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1663[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnInventoryUpdatedEvent;                           // 0x408(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1664[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TWeakObjectPtr<class UFortItem>>      ItemsForTileView;                                  // 0x430(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TScriptInterface<class IFortItemViewContextInterface> ItemViewContext;                                   // 0x440(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1665[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemTileView* GetDefaultObj();

	void ShowNullItemTile();
	void SetSorter(struct FFortItemSorterDefinition& Sorter);
	void SetItemViewContext(TScriptInterface<class IFortItemViewContextInterface> ItemViewContext);
	void SetFilterAndSorter(struct FFortItemFilterDefinition& Filter, struct FFortItemSorterDefinition& Sorter);
	void SetFilter(struct FFortItemFilterDefinition& Filter);
	void RefreshSort();
	void RefreshFilterAndSort();
	void OnInventoryUpdated__DelegateSignature();
	void HideNullItemTile();
	bool ContainsItem(class UFortItem* Item);
	void CenterSelectedItemTileWidget();
};

// 0x8 (0x470 - 0x468)
// Class FortniteUI.FortDefenderItemTileView
class UFortDefenderItemTileView : public UFortItemTileView
{
public:
	TWeakObjectPtr<class UFortDefenderConfigPanel> DefenderConfigPanel;                               // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortDefenderItemTileView* GetDefaultObj();

};

// 0x0 (0x888 - 0x888)
// Class FortniteUI.FortDefenderSlotButton
class UFortDefenderSlotButton : public UCommonButton
{
public:

	static class UClass* StaticClass();
	static class UFortDefenderSlotButton* GetDefaultObj();

};

// 0x8 (0x2B0 - 0x2A8)
// Class FortniteUI.FortDefenderSlotItemPicker
class UFortDefenderSlotItemPicker : public UFortItemPickerBase
{
public:
	enum class EFortDefenderSlotType             DefenderSlotType;                                  // 0x2A8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_166C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortDefenderSlotItemPicker* GetDefaultObj();

	void PopulateDefenderSlotItems(class UFortDefenderItem* DefenderItem);
};

// 0x0 (0x210 - 0x210)
// Class FortniteUI.FortDefenderSlotView
class UFortDefenderSlotView : public UCommonUserWidget
{
public:

	static class UClass* StaticClass();
	static class UFortDefenderSlotView* GetDefaultObj();

};

// 0x0 (0x210 - 0x210)
// Class FortniteUI.FortDefenderSlotWidget
class UFortDefenderSlotWidget : public UCommonUserWidget
{
public:

	static class UClass* StaticClass();
	static class UFortDefenderSlotWidget* GetDefaultObj();

};

// 0x20 (0x8A8 - 0x888)
// Class FortniteUI.FortSquadSelectorButton
class UFortSquadSelectorButton : public UCommonButton
{
public:
	uint8                                        Pad_1674[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UFortSquadManagementScreenBase> SquadManagementScreenType;                         // 0x898(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1675[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSquadSelectorButton* GetDefaultObj();

	bool TryGetStaticSquadDataBP(struct FHomebaseSquad* OutSquadData);
	void SetIdOfSquadToManageBP(class FName& SquadId);
	void HandleSquadChangedBP();
	void HandleDifferentSquadSetBP();
	class FName GetIdOfSquadToManageBP();
};

// 0x0 (0x8A8 - 0x8A8)
// Class FortniteUI.FortDefenderSquadSelectorButton
class UFortDefenderSquadSelectorButton : public UFortSquadSelectorButton
{
public:

	static class UClass* StaticClass();
	static class UFortDefenderSquadSelectorButton* GetDefaultObj();

	bool TryGetTheaterUniqueId(class FString* OutTheaterUniqueId, bool* OutIsUnlocked);
	bool TryGetPowerLevel(int32* OutPowerLevel);
};

// 0x28 (0x50 - 0x28)
// Class FortniteUI.FortDirectAcquisitionOfferInfo
class UFortDirectAcquisitionOfferInfo : public UObject
{
public:
	uint8                                        Pad_16C9[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMtxOfferData*                     OfferDisplayAsset;                                 // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_16CA[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortDirectAcquisitionOfferInfo* GetDefaultObj();

	bool OfferHasDenyRequirements();
	bool IsValidOffer();
	bool IsUnique();
	bool IsRefundable();
	bool IsPriceInRealMoney(int32 PriceIndex);
	bool IsPriceInMTX(int32 PriceIndex);
	bool IsLockedByRequirement();
	bool IsGiftable();
	bool IsExclusive();
	bool HasRequirement(class FText* RequirementText);
	bool HasDisplayAsset();
	bool HasCatalogOfferName(class FText* CatalogOfferName);
	int32 GetTotalQuantity();
	struct FSlateBrush GetTileImage();
	class FName GetStorefrontName();
	int32 GetSortPriority();
	class FText GetShortName();
	class FText GetShortDescription();
	enum class ECatalogSaleType GetSaleType(int32 PriceIndex);
	class FText GetSaleText(int32 PriceIndex, int32 ItemQuantity);
	bool GetSalePrice(int32 PriceIndex, class FText* SalePrice, int32 ItemQuantity);
	enum class ECatalogRequirementType GetRequirementTypeAtIndex(int32 RequirementIndex);
	int32 GetRequirementMinQuantityAtIndex(int32 RequirementIndex);
	class FString GetRequirementIdAtIndex(int32 RequirementIndex);
	int32 GetQuantityRemaining();
	class UFortAccountItemDefinition* GetPriceItem(int32 PriceIndex, int32* RequiredItemCount);
	class FString GetOfferId();
	class UFortMtxOfferData* GetOfferDisplayAsset();
	struct FCatalogOffer GetOffer();
	int32 GetNumRequirements();
	int32 GetNumGrantedItems();
	class FText GetNormalPrice(int32 PriceIndex, int32 ItemQuantity);
	class FText GetName();
	bool GetMetaAsBool(const class FString& MetaTag);
	class FText GetItemTypeText();
	int32 GetItemQuantity(const class FString& TemplateId);
	int32 GetItemOfferCount(const class FString& TemplateId);
	void GetGrantedItemDefinitions(TArray<class UFortAccountItemDefinition*>* GrantedItems);
	struct FFortMtxGradient GetGradient();
	enum class EFortMtxStoreOfferType GetFortStoreOfferType();
	class FString GetFortStoreOfferCategory();
	int32 GetFirstGrantQuantity();
	class UFortAccountItemDefinition* GetFirstGrantItemDefinition();
	struct FSlateBrush GetDetailsImage();
	TArray<struct FFortMtxDetailsAttribute> GetDetailsAttributes();
	class FText GetDescription();
	class UFortAccountItemDefinition* GetCurrencyItemDefinition();
	class FText GetCategoryText();
	int32 GetBonusQuantity();
	int32 GetBaseQuantity();
	class FString GetBannerOverrideTag();
	struct FLinearColor GetBackground();
	class UFortAccountItem* CreatePreviewItem();
};

// 0x18 (0x8A0 - 0x888)
// Class FortniteUI.FortDirectAcquisitionOfferWidgetBase
class UFortDirectAcquisitionOfferWidgetBase : public UCommonButton
{
public:
	TArray<class UFortDirectAcquisitionOfferInfo*> GroupedOffers;                                     // 0x888(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UFortDirectAcquisitionOfferInfo*       OfferData;                                         // 0x898(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortDirectAcquisitionOfferWidgetBase* GetDefaultObj();

	void SetupOffer(class UFortDirectAcquisitionOfferInfo* InOfferData);
	void RemoveAllOffers();
	void OnUpdateStatus();
	void OnOfferSet();
	void OnOfferAdded();
	void HandleCurrentlyViewedAccountInfoChanged(const struct FFortPublicAccountInfo& NewInfo);
	class UFortDirectAcquisitionOfferInfo* GetOfferInfo();
	void AddOffer(class UFortDirectAcquisitionOfferInfo* InOfferData);
};

// 0x48 (0x408 - 0x3C0)
// Class FortniteUI.FortDirectAcquisitionOfferDetailsWidgetBase
class UFortDirectAcquisitionOfferDetailsWidgetBase : public UFortActivatablePanelWithItemPreview
{
public:
	uint8                                        Pad_16EE[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   EnterViewModeInputActionRowHandle;                 // 0x3D0(0x10)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         IsInItemViewMode;                                  // 0x3E0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_16EF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortDirectAcquisitionOfferInfo*> PagedItems;                                        // 0x3E8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UFortDirectAcquisitionOfferInfo*       OfferData;                                         // 0x3F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortVariantPicker*                    Picker_VariantSelector;                            // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortDirectAcquisitionOfferDetailsWidgetBase* GetDefaultObj();

	void UpdateItemViewModeBP();
	bool ShouldHavePurchaseConfirmation();
	void SetupOffer(class UFortDirectAcquisitionOfferInfo* InOfferData);
	void SetPagedItems(TArray<class UFortDirectAcquisitionOfferInfo*>& InPagedItems);
	void SetIsInItemViewMode(bool Value);
	void SendShopInteractionAnalytic(const class FString& Interaction);
	void PurchaseAmountRight();
	void PurchaseAmountLeft();
	void OnUpdateStatus();
	void OnOfferSet();
	void OnEnterViewModeActionCommitted(bool* Passthrough);
	void HandleCurrentlyViewedAccountInfoChanged(const struct FFortPublicAccountInfo& NewInfo);
	class UFortDirectAcquisitionOfferInfo* GetOfferInfo();
	void AutoEquip();
};

// 0x60 (0x388 - 0x328)
// Class FortniteUI.FortDirectAcquisitionWidgetBase
class UFortDirectAcquisitionWidgetBase : public UFortActivatablePanel
{
public:
	TArray<class FString>                        StorefrontNames;                                   // 0x328(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bShowIneligible;                                   // 0x338(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_16F6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortDirectAcquisitionOfferInfo*> AcquisitionOfferData;                              // 0x340(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_16F7[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortDirectAcquisitionWidgetBase* GetDefaultObj();

	void TriggerRefresh();
	void SetStorefrontNames(TArray<class FString>& InStorefrontNames);
	void OnUpdateOtherPlatformMTXMessage(bool HasOtherPlatformCurrency, class FText& CurrencyMessageLocText);
	void OnStartReadingOffers();
	void OnOffersGenerated();
	void NoOffersAvailable();
	struct FDateTime GetWeeklyStoreEndDate();
	struct FDateTime GetSeasonStoreEndDate();
	struct FDateTime GetDailyStoreEndDate();
	void GenerateOfferWidget(class UFortDirectAcquisitionOfferInfo* OfferData);
	void ClearOfferWidgets();
};

// 0x88 (0x380 - 0x2F8)
// Class FortniteUI.FortDisplayNameWidget
class UFortDisplayNameWidget : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_16FD[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ButtonDisableReason;                               // 0x308(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  NameTakenText;                                     // 0x320(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  NameInvalidFormatText;                             // 0x338(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  NameTooShortText;                                  // 0x350(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class UCommonButton*                         Button_Enter;                                      // 0x368(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Error;                                        // 0x370(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UEditableText*                         EditText_DisplayName;                              // 0x378(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortDisplayNameWidget* GetDefaultObj();

	void HandleTextChanged(class FText& Text);
};

// 0x18 (0x340 - 0x328)
// Class FortniteUI.FortErrorWindow
class UFortErrorWindow : public UFortActivatablePanel
{
public:
	TSubclassOf<class UCommonUserWidget>         ErrorEntryClass;                                   // 0x328(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCommonUserWidget*>             ErrorEntriesPool;                                  // 0x330(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortErrorWindow* GetDefaultObj();

	void PutErrorEntries(TArray<class UCommonUserWidget*>& ErrorEntries);
	class UCommonUserWidget* GetErrorEntry();
	void DismissErrors(const TArray<struct FFortErrorInfo>& ErrorInfos);
};

// 0x38 (0x330 - 0x2F8)
// Class FortniteUI.FortEulaWidget
class UFortEulaWidget : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_1702[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortRichTextBlock*                    Text_Description;                                  // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UScrollBox*                            ScrollBox_License;                                 // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Confirm;                                    // 0x320(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Decline;                                    // 0x328(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortEulaWidget* GetDefaultObj();

};

// 0x8 (0x460 - 0x458)
// Class FortniteUI.FortSimpleItemConditionIconIndicator
class UFortSimpleItemConditionIconIndicator : public UFortMultiSizeImage
{
public:
	bool                                         bShouldCollapseWhenConditionIsFalse;               // 0x458(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_170B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSimpleItemConditionIconIndicator* GetDefaultObj();

	void ShouldCollapseWhenConditionIsFalse(bool Value);
	void SetItemToRepresent(class UFortItem* ItemToRepresent);
	class UFortItem* GetItemToRepresent();
};

// 0x0 (0x460 - 0x460)
// Class FortniteUI.FortEvolveIndicator
class UFortEvolveIndicator : public UFortSimpleItemConditionIconIndicator
{
public:

	static class UClass* StaticClass();
	static class UFortEvolveIndicator* GetDefaultObj();

};

// 0x60 (0x358 - 0x2F8)
// Class FortniteUI.FortExpeditionBuildSquadWidget
class UFortExpeditionBuildSquadWidget : public UCommonActivatablePanel
{
public:
	TWeakObjectPtr<class UFortExpeditionItem>    Item;                                              // 0x2F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  CurrentSquadId;                                    // 0x300(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortSquadSlotsView*                   ExpeditionSquadSlotsView;                          // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortSquadSlotDetailsPanel*            ExpeditionSquadSlotDetails;                        // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortSquadSlotItemPicker*              ExpeditionSquadSlotPicker;                         // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemViewContext_ExpeditionSquadSlotsView* ItemViewContext_ExpeditionSlotsView;               // 0x320(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortItemViewContext_ExpeditionSquadSlotItemPicker* ItemViewContext_ExpeditionSlotItemPicker;          // 0x328(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_171C[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortExpeditionBuildSquadWidget* GetDefaultObj();

	bool StartExpedition();
	void SetData(class UFortExpeditionItem* InItem);
	void SetCurrentSquadId(class FName SquadId);
	void OnStartExpeditionCompleted();
	void OnRequestClosePicker();
	void OnRefreshBuildSquadWidget();
	bool IsSquadSlotLocked(int32 SlotIndex);
	bool IsExpeditionValidToStart();
	void HandleStartExpeditionCompleted(class UFortExpeditionItem* Expedition, bool bSucceeded);
	void HandleDifferentSquadSlotSelected(int32 SquadSlotIndex);
	void ClearTemporaryExpeditionSquadState(bool bPreviewOnly);
};

// 0x40 (0x250 - 0x210)
// Class FortniteUI.FortExpeditionDetailsWidget
class UFortExpeditionDetailsWidget : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortExpeditionItem>    Item;                                              // 0x210(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortSquadSlotsView*                   ExpeditionSquadSlotsView;                          // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  CurrentSquadId;                                    // 0x220(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemViewContext_ExpeditionSquadSlotsView* ItemViewContext_ExpeditionSlotsView;               // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1720[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortExpeditionDetailsWidget* GetDefaultObj();

	void SetData(class UFortExpeditionItem* InItem);
	void SetCurrentSquadId(class FName SquadId);
	void OnAbandonExpeditionCompleted();
	void HandleAbandonExpeditionCompleted(class UFortExpeditionItem* Expedition, bool bSuccess);
	void AbandonExpedition();
};

// 0x10 (0x220 - 0x210)
// Class FortniteUI.FortExpeditionExpiresWidget
class UFortExpeditionExpiresWidget : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortExpeditionItem>    Item;                                              // 0x210(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1721[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortExpeditionExpiresWidget* GetDefaultObj();

	void SetData(class UFortExpeditionItem* InItem);
	void OnExpeditionExpirationUpdated();
};

// 0x18 (0x8A0 - 0x888)
// Class FortniteUI.FortExpeditionListItemWidget
class UFortExpeditionListItemWidget : public UCommonButton
{
public:
	uint8                                        Pad_1722[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UFortExpeditionItem>    Item;                                              // 0x890(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1723[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortExpeditionListItemWidget* GetDefaultObj();

	void OnItemChanged();
};

// 0x38 (0x248 - 0x210)
// Class FortniteUI.FortExpeditionListViewWidget
class UFortExpeditionListViewWidget : public UCommonUserWidget
{
public:
	UMulticastDelegateProperty_                  OnExpeditionSelected;                              // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnExpeditionListViewRefreshed;                     // 0x220(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UCommonListView*                       ExpeditionListView;                                // 0x230(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  CurrentTabNameId;                                  // 0x238(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortExpeditionListSort           SortType;                                          // 0x240(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1726[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortExpeditionListViewWidget* GetDefaultObj();

	void SetExpeditionListSortType(enum class EFortExpeditionListSort InSortType);
	class FText GetExpeditionListSortName();
};

// 0x20 (0x318 - 0x2F8)
// Class FortniteUI.FortExpeditionMasterWidget
class UFortExpeditionMasterWidget : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_1728[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortExpeditionMasterWidget* GetDefaultObj();

};

// 0x28 (0x238 - 0x210)
// Class FortniteUI.FortExpeditionOverviewWidget
class UFortExpeditionOverviewWidget : public UCommonUserWidget
{
public:
	TSubclassOf<class UCommonButton>             TabButtonType;                                     // 0x210(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FExpeditionTabInfo>            TabListRegistrationInfo;                           // 0x218(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UFortTabListWidgetBase*                ExpeditionTabList;                                 // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortExpeditionListViewWidget*         ExpeditionListView;                                // 0x230(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortExpeditionOverviewWidget* GetDefaultObj();

	void UpdateExpeditionTabs();
	void OnExpeditionTabSelected(class FName& TabNameID);
	void OnExpeditionOverviewRefresh();
	void HandleExpeditionTabSelected(class FName TabNameID);
	void HandleExpeditionTabButtonCreated(class FName TabNameID, class UCommonButton* TabButton);
};

// 0x8 (0x300 - 0x2F8)
// Class FortniteUI.FortExpeditionPickVehicleWidget
class UFortExpeditionPickVehicleWidget : public UCommonActivatablePanel
{
public:
	TWeakObjectPtr<class UFortExpeditionItem>    Item;                                              // 0x2F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortExpeditionPickVehicleWidget* GetDefaultObj();

	void SetData(class UFortExpeditionItem* InItem);
};

// 0x10 (0x220 - 0x210)
// Class FortniteUI.FortExpeditionReturnsWidget
class UFortExpeditionReturnsWidget : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortExpeditionItem>    Item;                                              // 0x210(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1731[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortExpeditionReturnsWidget* GetDefaultObj();

	void SetData(class UFortExpeditionItem* InItem);
	void OnExpeditionInProgressUpdated();
};

// 0x28 (0x238 - 0x210)
// Class FortniteUI.FortExpeditionRewardsWidget
class UFortExpeditionRewardsWidget : public UCommonUserWidget
{
public:
	UMulticastDelegateProperty_                  OnAllExpeditionsCollected;                         // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UCommonTileView*                       RewardsTileView;                                   // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPendingCollection;                                // 0x228(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1736[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortExpeditionRewardsWidget* GetDefaultObj();

	void RefreshRewardsUI(class UFortExpeditionItem* Expedition, bool bExpeditionSucceeded, TArray<struct FFortItemInstanceQuantityPair>& Rewards);
	void ProcessNextReward();
	void HandleCollectionExpeditionCompleted(bool bMcpSuccess, class UFortExpeditionItem* Expedition, bool bExpeditionSuccess, TArray<struct FFortItemInstanceQuantityPair>& Rewards);
};

// 0x58 (0x268 - 0x210)
// Class FortniteUI.FortExpeditionSummaryWidget
class UFortExpeditionSummaryWidget : public UCommonUserWidget
{
public:
	int32                                        AvailableExpeditions;                              // 0x210(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CompletedExpeditions;                              // 0x214(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LandVehiclesTotal;                                 // 0x218(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LandVehiclesAvailable;                             // 0x21C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        AirVehiclesTotal;                                  // 0x220(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        AirVehiclesAvailable;                              // 0x224(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SeaVehiclesTotal;                                  // 0x228(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SeaVehiclesAvailable;                              // 0x22C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LandExpeditionsTotal;                              // 0x230(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LandExpeditionsAvailable;                          // 0x234(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        AirExpeditionsTotal;                               // 0x238(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        AirExpeditionsAvailable;                           // 0x23C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SeaExpeditionsTotal;                               // 0x240(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SeaExpeditionsAvailable;                           // 0x244(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UFortExpeditionItem*>           InProgressExpeditions;                             // 0x248(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1738[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortExpeditionSummaryWidget* GetDefaultObj();

	void UnbindInventoryDelegates();
	void OnRefreshSummaryWidget();
	void BindInventoryDelegates();
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortExpeditionUtilities
class UFortExpeditionUtilities : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UFortExpeditionUtilities* GetDefaultObj();

	int32 TotalUnseenExpeditionsForTab(class UWidget* Widget, class FName& TabNameID);
	bool IsSquadOnExpedition(class UWidget* Widget, class FName& SquadId);
	struct FGameplayTag GetVehicleTagRequiredForExpedition(class UFortExpeditionItem* Expedition);
	bool GetVehicleTagFromSquadId(class FName& SquadId, struct FGameplayTag* OutFoundVehicleTag);
	void GetTotalExpeditionVehiclesAvailable(class UWidget* Widget, class AFortPlayerController* FortPC, int32* OutLandVehicles, int32* OutLandVehiclesAvailable, int32* OutSeaVehicles, int32* OutSeaVehiclesAvailable, int32* OutAirVehicles, int32* OutAirVehiclesAvailable);
	void GetMatchedCriteriaTags(class UFortExpeditionItem* Expedition, TArray<class UFortItem*>& SlottedItems, TArray<struct FGameplayTag>* OutMatchedCriteria);
	bool GetExpeditionSquadsThatMatchRequirements(struct FGameplayTagContainer& RequirementTags, class AFortPlayerController* FortPC, TArray<class FName>* OutExpeditionSquadIds);
	float GetExpeditionSquadPower(class AFortPlayerController* FortPC, class FName& SquadId);
	void GetAllExpeditionSquadIds(TArray<class FName>* OutExpeditionSquadIds);
	float CalculateTotalPower(class AFortPlayerController* FortPC, class UFortExpeditionItem* Expedition, class FName& SquadId, TArray<class UFortItem*>& SlottedItems);
	void CalculateGlobalAndItemRatingModValuesBP(class UFortExpeditionItem* Expedition, TArray<class UFortItem*>& SlottedItems, float* GlobalPowerMod, TArray<float>* SlottedItemMods);
	float CalculateExpeditionPercentageChanceForSuccess(class UFortExpeditionItem* Expedition, float TotalPower);
	bool AreExpeditionsUnlocked(class UObject* WorldContextObject, struct FUniqueNetIdRepl& UniqueId);
	bool AreAnyExpeditionsComplete(class UWidget* Widget);
};

// 0x10 (0x898 - 0x888)
// Class FortniteUI.FortExpeditionVehicleTileItemWidget
class UFortExpeditionVehicleTileItemWidget : public UCommonButton
{
public:
	uint8                                        Pad_1768[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UObject>                SquadId;                                           // 0x890(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortExpeditionVehicleTileItemWidget* GetDefaultObj();

};

// 0x0 (0x460 - 0x460)
// Class FortniteUI.FortFavoriteIndicator
class UFortFavoriteIndicator : public UFortSimpleItemConditionIconIndicator
{
public:

	static class UClass* StaticClass();
	static class UFortFavoriteIndicator* GetDefaultObj();

};

// 0x30 (0x8B8 - 0x888)
// Class FortniteUI.FortMobileShareButton
class UFortMobileShareButton : public UCommonButton
{
public:
	uint8                                        Pad_1771[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortMobileShareButton* GetDefaultObj();

	void SetShareParams(const class FString& URL, class FText& Description);
	void OnOSImageEnumSet(enum class EFortFortMobileShareButtonOS OSType);
};

// 0x70 (0x928 - 0x8B8)
// Class FortniteUI.FortFriendCodeEntryBase
class UFortFriendCodeEntryBase : public UFortMobileShareButton
{
public:
	struct FFriendCode                           FriendCode;                                        // 0x8B8(0x20)(NativeAccessSpecifierPublic)
	class UCommonTextBlock*                      LinkDataTextBox;                                   // 0x8D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DebugName;                                         // 0x8E0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LengthOfCode;                                      // 0x8F0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1777[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  SharedMessage;                                     // 0x8F8(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  SharedMessageNoInvite;                             // 0x910(0x18)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortFriendCodeEntryBase* GetDefaultObj();

};

// 0x28 (0x350 - 0x328)
// Class FortniteUI.FortFriendCodeListBase
class UFortFriendCodeListBase : public UFortActivatablePanel
{
public:
	TArray<struct FFriendCode>                   BacchusFriendCodes;                                // 0x328(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortFriendCodeEntryBase>  FriendCodeEntryClass;                              // 0x338(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDynamicEntryBox*                      EntryBox_FriendCodes;                              // 0x340(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class URichTextBlock*                        WarningText;                                       // 0x348(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortFriendCodeListBase* GetDefaultObj();

	void JustDesc();
	void DescAndURL();
	void CloseAndPopDialog();
};

// 0x8 (0x330 - 0x328)
// Class FortniteUI.FortFriendLinkPanel
class UFortFriendLinkPanel : public UFortActivatablePanel
{
public:
	class UCommonButton*                         Button_ShareButton;                                // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortFriendLinkPanel* GetDefaultObj();

	void OnShareButtonTypeSet(enum class EShareButtonType Type);
	void OnCopiedToClipboard();
};

// 0x2E8 (0x310 - 0x28)
// Class FortniteUI.FortFrontEndContext
class UFortFrontEndContext : public UBlueprintContextBase
{
public:
	uint8                                        Pad_183D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnFrontEndCameraChanged;                           // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnLobbyBackgroundChanged;                          // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAthenaPlaylistsChanged;                          // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLobbyEmptyPlayerClicked;                         // 0x60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLobbyPlayerGadgetsClicked;                       // 0x70(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLobbyPlayerPadHovered;                           // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLobbyPlayerPadUnhovered;                         // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLobbyPlayerHovered;                              // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLobbyPlayerUnhovered;                            // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLobbyPlayerSelected;                             // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLobbyPlayerUnselected;                           // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPartySuggestionAccepted;                         // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLobbyPlayerTalkingChanged;                       // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLobbyPlayerMutingChanged;                        // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLobbyPlayersStoppedTalking;                      // 0x110(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTheaterPinClicked;                               // 0x120(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnSetPreviewedSceneTheater;                        // 0x130(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTheaterSelected;                                 // 0x140(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTheaterDataChanged;                              // 0x150(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTheaterTileClicked;                              // 0x160(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTheaterTileUnselected;                           // 0x170(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTheaterTileDoubleClicked;                        // 0x180(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTheaterTileFocused;                              // 0x190(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTheaterTileUnfocused;                            // 0x1A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnVaultItemViewed;                                 // 0x1B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnVaultItemsViewed;                                // 0x1C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPlayerLoggedIn;                                  // 0x1D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPlayerLoggedOut;                                 // 0x1E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMainTabSelected;                                 // 0x1F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnSocialImportClosed;                              // 0x200(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1841[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortFrontEndFeatureStruct            Features[0x9];                                     // 0x218(0xD8)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FFortSavedModeLoadout                 CachedModeLoadout;                                 // 0x2F0(0x20)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortFrontEndContext* GetDefaultObj();

	void ViewVaultItemsFromOffer(struct FCatalogOffer& CatalogOffer, bool bIgnoreCurrentlyEquppedFavorites);
	void ViewVaultItems(TArray<class UFortItem*>& ItemsToView, bool bIgnoreCurrentlyEquppedFavorites);
	void ViewVaultItemFromDefinition(class UFortItemDefinition* ItemToViewDefinition, bool bIgnoreCurrentlyEquppedFavorites);
	void ViewVaultItem(class UFortItem* ItemToView, bool bIgnoreCurrentlyEquppedFavorites);
	void UpdateNewAccountItemBangCounts(class UFortInventoryContext* InventoryContext);
	bool TryGetAttributeInfo(struct FGameplayAttribute& GameplayAttribute, struct FFortAttributeInfo* OutAttribute);
	void SkipInitialBenchmark();
	class UFortSocialImportPanel* ShowSocialImport(TSubclassOf<class UFortSocialImportPanel> PanelClass);
	void ShowAthenaStoreNewItemBang();
	bool ShouldShowSocialImport();
	bool ShouldShowLoginMessage();
	bool ShouldRunInitialBenchmark();
	void SetSelectedTheater(const class FString& TheaterId);
	void SetSeenLoginMessage();
	void SetPersonalHeroChoice(class UFortHero* Hero, const struct FDisplayManagerVariantData& VariantData);
	void SetLocalVariantPreview(class UAthenaCosmeticItemDefinition* CosmeticItem, const struct FGameplayTag& VariantChannelTag, const struct FGameplayTag& VariantTag);
	void SetHeroChoice(int32 PartyMemberIndex, class UFortHero* Hero, const struct FDisplayManagerVariantData& VariantData);
	void SetFrontEndVisibility(bool bHideHeader, bool bHideFooter, bool bHideChatWidget);
	void SetFrontEndCamera(enum class EFrontEndCamera NewState);
	void SetDefaultLocalVariantPreview(class UAthenaCosmeticItemDefinition* CosmeticItem);
	void SendPlayQuestAnalytic(class UFortQuestItem* QuestItem);
	void SendFrontendEnteredEvent();
	bool SelectTileForQuest(class UFortQuestItem* QuestItem, float* OutCriticalMissionDifficultyOverrideMin, float* OutCriticalMissionDifficultyOverrideMax);
	void SelectGadgetForSlot(int32 Slot, class UFortItemDefinition* GadgetDefinition);
	void SelectDefaultTheaterTile();
	void SelectDefaultTheater();
	void RunBenchmarkAndApplyBestSettings();
	void PushContentWidget_Adv(class UWidget* Widget, bool bHideHeader, bool bHideFooter, bool bHideChatWidget);
	void PlayLevelUpEffect();
	void PlayEvolutionEffect();
	bool IsActiveTileMissionValid();
	bool Is4PlayerTile(class AFortTheaterMapTile* Tile);
	void HideAthenaStoreNewItemBang();
	void HandleDynamicSocialImportClosed();
	struct FDisplayManagerVariantData GetVariantDataForMemberIndex(int32 MemberIndex);
	class UClass* GetUITestingClass();
	bool GetTileMissionDetails(class AFortTheaterMapTile* Tile, struct FFortMissionDetails* MissionDetails);
	enum class EFortTheaterType GetTheaterType(const class FString& TheaterId);
	int32 GetTheaterRegionCount(const class FString& TheaterId);
	class FText GetTheaterName(const class FString& TheaterId);
	bool GetTheaterData(const class FString& TheaterId, struct FFortTheaterMapData* OutTheaterData);
	class FString GetSelectedTheaterId();
	bool GetSelectedTheaterData(struct FFortTheaterMapData* OutTheaterData);
	void GetSelectableGadgets(TArray<class UFortWorldItem*>* SelectableGadgets, TArray<class UFortWorldItem*>* LastSelectedGadgets);
	enum class EFortReturnToFrontendBehavior GetReturnToFrontendBehavior();
	class FText GetRequirementText(struct FFortRequirementsInfo& InRequirements);
	TArray<struct FGameDifficultyInfo> GetRecommendedTeamDifficulties();
	TArray<int32> GetRecommendedDifficultyIndexesInAvailableDifficulties(bool bIncludeMissionAlertTiles);
	class AActor* GetPrefabActorForCurrentDisplayedItem();
	void GetOutpostStructureUpgradeCost(int32 TheaterSlot, int32 UpgradeLevel, class UFortOutpostItemDefinition* OutpostStructure, TArray<struct FFortItemQuantityPair>* OutWorldItems, TArray<struct FFortItemQuantityPair>* OutAccountItems);
	int32 GetOutpostStructureMaxLevel(int32 TheaterSlot, class UFortOutpostItemDefinition* OutpostStructure);
	bool GetOutpostCoreLevelByTheaterId(const class FString& TheaterId, int32* OutCoreLevel);
	bool GetOutpostCoreLevelByItemDefinition(class UFortOutpostItemDefinition* OutpostCoreItemDef, int32* OutCoreLevel);
	class UMeshComponent* GetMeshForCurrentDisplayedItem();
	class FText GetMCPRegion();
	struct FGameDifficultyInfo GetMaxAvailableDifficulty(bool bIncludeMissionAlertTiles);
	class FName GetLobbyBackgroundLevelName();
	class UFortItemDefinition* GetItemFromItemQuantityPair(struct FFortItemQuantityPair& InPair);
	class AFortPlayerPawn* GetHeroPlayerPawnForCurrentDisplayedItem();
	class AFortPlayerPawn* GetHeroPlayerPawnByIndex(int32 PartyMemberIndex);
	class UFortWorldItemDefinition* GetHarvestingToolForLevel(int32 TheaterSlot, int32 InHarvestingOptimizerLevel);
	enum class EFrontEndCamera GetFrontEndCamera();
	class AFortTheaterMapTile* GetFocusedTile();
	bool GetFocusedOrActiveTileMissionDetails(struct FFortMissionDetails* MissionDetails);
	class AFortTheaterMapTile* GetFocusedOrActiveTile();
	class FText GetFeatureStateReasonText(enum class EFortFrontEndFeatureStateReason Reason);
	void GetFeatureState(enum class EFortFrontEndFeature Feature, enum class EFortFrontEndFeatureState* OutFeatureState, enum class EFortFrontEndFeatureStateReason* OutReason);
	int32 GetFabricatorStoredGooAmount(int32 TheaterSlot);
	int32 GetFabricatorIncomingGooAmount(int32 TheaterSlot);
	int32 GetFabricatorDisintegrationSecondsRemaining(int32 TheaterSlot);
	enum class EFrontEndCamera GetDesiredPlayButtonCamera();
	class FName GetDefenderSquadIDByTheaterID(const class FString& TheaterId);
	class FText GetCurrentTheaterName();
	TArray<struct FGameDifficultyInfo> GetAvailableDifficulties(bool bIncludeMissionAlertTiles);
	struct FFortMultiSizeBrush GetAttributeIcon(struct FFortAttributeInfo& InAttribute, const struct FGameplayTagContainer& InRequiredTags);
	class FText GetAttributeDisplayName(struct FFortAttributeInfo& InAttribute, const struct FGameplayTagContainer& InRequiredTags);
	class FText GetAttributeDescription(struct FFortAttributeInfo& InAttribute, const struct FGameplayTagContainer& InRequiredTags);
	bool GetAllTheaterData(TArray<struct FFortTheaterMapData>* OutAllTheaterData);
	bool GetActiveTileMissionDetails(struct FFortMissionDetails* MissionDetails);
	class AFortTheaterMapTile* GetActiveTile();
	void GetAccountLevelUpRewards(TArray<struct FFortItemQuantityPair>* Rewards, int32 AccountLevel);
	void ForceSetFeatureState(enum class EFortFrontEndFeature Feature, enum class EFortFrontEndFeatureState State, enum class EFortFrontEndFeatureStateReason Reason);
	void ClearSelectedTheater();
	void ClearLocalPreview(bool StopUsingLocalPreview);
	bool CanShowLockerSlotType(enum class EAthenaCustomizationCategory SlotType);
	bool CanFindTileForQuest(class UFortQuestItem* QuestItem);
	bool CanCompleteQuestInFocusedOrActiveTileMission(class UFortQuestItem* QuestItem);
	bool CanCompleteQuestInActiveTileMission(class UFortQuestItem* QuestItem);
	void BroadcastMainTabSelected(class FName TabName);
	void BindToFeatureStateAndInitialize(enum class EFortFrontEndFeature Feature, UDelegateProperty_ Delegate);
	bool AreProfilesAvailableToWIFE();
};

// 0xA0 (0x3C8 - 0x328)
// Class FortniteUI.FortGameFeedbackBase
class UFortGameFeedbackBase : public UFortActivatablePanel
{
public:
	class UEditableText*                         SubjectEditable;                                   // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMultiLineEditableText*                BodyEditable;                                      // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEditableText*                         BodyEditable_SingleLine;                           // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonGroup*                    ButtonGroup;                                       // 0x340(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_186C[0x80];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortGameFeedbackBase* GetDefaultObj();

	void SubmitFeedback();
	void OnSelectionButtonChanged(class UCommonButton* SelectedButton, int32 ButtonIndex);
	void OnInitiateDebugInfoForFeedbackComplete();
	void InitiateDebugInfoForFeedback();
	void CancelFeedback();
	void AddButtonWithFeedbackType(class UCommonButton* Button, enum class EFortUIGameFeedbackType GameFeedbackType);
};

// 0x38 (0x258 - 0x220)
// Class FortniteUI.FortGameOptions
class UFortGameOptions : public UFortOptionsTab
{
public:
	float                                        MinGammaValue;                                     // 0x220(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxGammaValue;                                     // 0x224(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortSettingInfo*>              TabSettingsData;                                   // 0x228(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UFortHUDVisibilityData*>        HUDData;                                           // 0x238(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UCommonListView*                       OptionsListView;                                   // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonListView*                       HUDCommonListView;                                 // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortGameOptions* GetDefaultObj();

	void UpdatePossibleLanguages();
	void UpdateHUDSettings(const struct FGameplayTag& HUDMapping, bool NewVisibility);
	void UpdateGammaSettings(float GammaValue);
	void SetIgnoreGamepadInput(bool bIgnore);
	void SetHearingImpairedMode(bool bHearingImpaired);
	void SetControllerPlatform(const class FString& InControllerPlatform);
	void SetColorBlindStrength(float InColorBlindStrength);
	void SetColorBlindMode(enum class EColorBlindMode InMode);
	bool IsHearingImpairedFeatureAvailable();
	bool Initialize();
	void HandleGamePadToggleMode();
	class UWidget* GetOptionsListWidget(class UObject* Item);
	bool GetIgnoreGamepadInput();
	bool GetHUDSettings(const struct FGameplayTag& HUDMapping);
	class UWidget* GetHUDListWidget(class UObject* Item);
	bool GetHearingImpairedMode();
	float GetGammaSettings();
	float GetDefaultGammaSettings();
	class FString GetControllerPlatform();
	float GetColorBlindStrength();
	enum class EColorBlindMode GetColorBlindMode();
	void ConstructSettingList();
	void ConstructHUDTagList();
	bool CanIgnoreGamepadInput();
};

// 0x28 (0x248 - 0x220)
// Class FortniteUI.FortInputOptions
class UFortInputOptions : public UFortOptionsTab
{
public:
	TArray<class UFortOptionsMenuInputData*>     InputData;                                         // 0x220(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UCommonListView*                       InputCommonListView;                               // 0x230(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      TooltipDisplay;                                    // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1888[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortInputOptions* GetDefaultObj();

	void HandleUsingGamepadChanged(enum class ECommonInputType bNewInputType);
	class UWidget* GetListWidget(class UObject* Item);
	class FText GetBindedKeyNameBP(int32 KeyBind, bool IsPrimary);
	void ConstructKeyBindList();
	void ChangeBinding(bool IsPrimarySlot, int32 Input, const struct FKey& NewKey);
};

// 0x0 (0x248 - 0x248)
// Class FortniteUI.FortGamepadInputOptions
class UFortGamepadInputOptions : public UFortInputOptions
{
public:

	static class UClass* StaticClass();
	static class UFortGamepadInputOptions* GetDefaultObj();

	void SetControllerPlatform(const class FString& InControllerPlatform);
	void ResetCustomGamepadToDefault();
	bool IsCustomGamepadConfig(const class FString& ConfigName);
	bool HasCustomGamepadBindingChanges();
	void HandleGamePadToggleMode();
	class FString GetControllerPlatform();
	void EnableAnalogCursor();
	void DisableAnalogCursor();
	void ConstructKeyBindList();
	void ChangeBinding(bool IsPrimarySlot, int32 Input, const struct FKey& NewKey);
};

// 0x18 (0x8A0 - 0x888)
// Class FortniteUI.FortGiftBoxButton
class UFortGiftBoxButton : public UCommonButton
{
public:
	uint8                                        Pad_1897[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGiftBoxItemDefinition*            GiftBoxDefinition;                                 // 0x890(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonLazyImage*                      Image_Gift;                                        // 0x898(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortGiftBoxButton* GetDefaultObj();

	void PlayGiftSelectedAnimation(bool bIsSelected);
};

// 0x178 (0x388 - 0x210)
// Class FortniteUI.FortGiftingOptionsPanel
class UFortGiftingOptionsPanel : public UCommonUserWidget
{
public:
	uint8                                        Pad_189B[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftObjectPtr<class UFortGiftBoxItemDefinition>> GiftBoxes;                                         // 0x220(0x10)(Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UFortGiftBoxItemDefinition*>    GiftBoxItemDefs;                                   // 0x230(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_189C[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGiftBoxButton*                    GiftBoxButton;                                     // 0x258(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FGiftingErrorText>             GiftingErrorMessages;                              // 0x260(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FGiftingErrorText                     GiftingErrorMessageDefault;                        // 0x270(0x38)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  DefaultGiftMessage;                                // 0x2A8(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	int32                                        PersonalizedMessageLength;                         // 0x2C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_189D[0x34];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortUserDetails*>              UserDetailArray;                                   // 0x2F8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class UFortUserDetails*                      LocalPlayerDetails;                                // 0x308(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonListView*                       ListView_Friends;                                  // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTileView*                       TileView_GiftBoxes;                                // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_FriendCount;                                  // 0x320(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Price;                                        // 0x328(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_FinalPrice;                                   // 0x330(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_GiftCount;                                    // 0x338(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Cancel;                                     // 0x340(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Continue;                                   // 0x348(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_BackToFriends;                              // 0x350(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UEditableText*                         EditableText_Message;                              // 0x358(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_CharCount;                                    // 0x360(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonListView*                       ListView_FinalRecipients;                          // 0x368(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_RecipientCurrency;                           // 0x370(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_GiftCurrency;                                // 0x378(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Send;                                       // 0x380(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortGiftingOptionsPanel* GetDefaultObj();

	void ShowFriendSelection();
	void SetOffer(class UFortDirectAcquisitionOfferInfo* OfferInfo);
	void HandleMessageChanged(class FText& Text);
	void DynamicHandleGiftSent(bool bSuccess, TArray<class FString>& IneligableAccounts);
	void AllowGiftWrapSelection(bool bIsAllowed);
};

// 0x40 (0x338 - 0x2F8)
// Class FortniteUI.FortGiftingScreen
class UFortGiftingScreen : public UCommonActivatablePanel
{
public:
	class UFortDirectAcquisitionOfferInfo*       OfferInfo;                                         // 0x2F8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UFortUserDetails*>              UserDetailArray;                                   // 0x300(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class UFortUserDetails*                      LocalPlayerDetails;                                // 0x310(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButton*                         Tab_Recipients;                                    // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Tab_GiftWrap;                                      // 0x320(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_ItemName;                                     // 0x328(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonListView*                       ListView_Friends;                                  // 0x330(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortGiftingScreen* GetDefaultObj();

	void SetOffer(class UFortDirectAcquisitionOfferInfo* NewOfferInfo);
	void OnOfferSet(class UFortDirectAcquisitionOfferInfo* NewOfferInfo);
};

// 0x40 (0x68 - 0x28)
// Class FortniteUI.FortUserDetails
class UFortUserDetails : public UObject
{
public:
	uint8                                        Pad_18AA[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortUserDetails* GetDefaultObj();

};

// 0x20 (0x8A8 - 0x888)
// Class FortniteUI.FortGiftingUserItem
class UFortGiftingUserItem : public UCommonButton
{
public:
	uint8                                        Pad_18AB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUserDetails*                      ItemData;                                          // 0x890(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_DisplayName;                                  // 0x898(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Alias;                                        // 0x8A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortGiftingUserItem* GetDefaultObj();

	void SetSelectionState(enum class ESelectionState NewState, bool bAnimateOnSelect);
};

// 0x370 (0x398 - 0x28)
// Class FortniteUI.FortGlobalUIContext
class UFortGlobalUIContext : public UBlueprintContextBase
{
public:
	uint8                                        Pad_193F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  SubGameChanged;                                    // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1940[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnKeybindsChanged;                                 // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnInputActionHoldStarted;                          // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnInputActionHoldStopped;                          // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnEnterVehicleDriver;                              // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnEnterVehiclePassenger;                           // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnExitVehicle;                                     // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTeamPowerChanged;                                // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  DragAndDropStartedDelegate;                        // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  DragAndDropEndedDelegate;                          // 0xD8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnScoreReportChanged;                              // 0xE8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnContextHelpChanged;                              // 0xF8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnItemReceivedNotificationShown;                   // 0x108(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnGraphNodeDrillDown;                              // 0x118(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnGraphNodeSelected;                               // 0x128(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnQueryFortBackendVersionComplete;                 // 0x138(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLoadingScreenVisibilityChanged;                  // 0x148(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerControllerConnectionChanged;          // 0x158(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1941[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, class UFortUIMessageManager*> MessageManagersByName;                             // 0x180(0x50)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TMap<enum class EFortUIFeature, struct FFortUIFeatureStruct> Features;                                          // 0x1D0(0x50)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1943[0xF0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaMatchReadyDesktopPopup*         AthenaMatchReadyNotificationWidget;                // 0x310(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1944[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHelpItem*                         ActiveContextSpecificHelpItem;                     // 0x328(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsUIVisible;                                      // 0x330(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bShowRateWidget;                                   // 0x331(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1945[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  FeedbackTitle;                                     // 0x338(0x18)(Transient, NativeAccessSpecifierPrivate)
	struct FDateTime                             FirstLoginTime;                                    // 0x350(0x8)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTimerHandle                          AddictionMsgTimer;                                 // 0x358(0x8)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
	struct FUniqueNetIdRepl                      CurrentLocalPlayerUniqueNetId;                     // 0x360(0x28)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1946[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortGlobalUIContext* GetDefaultObj();

	void UnregisterToReceiveNotifications(enum class EFortNotificationQueueType NotificationQueueType);
	void UnregisterScriptedAction(TSubclassOf<class AFortScriptedAction> ScriptedAction);
	void UnbindToFeatureState(enum class EFortUIFeature Feature, UDelegateProperty_ Delegate);
	void TriggerUIFeedbackEvent(class FName EventName);
	void TriggerNewQuestStickies();
	void TriggerCompletedQuestStickies();
	bool ShowWebURL(const class FString& URL, enum class EFortUrlType URLType);
	void ShowConsoleAccountPicker(int32 ControllerIndex, UDelegateProperty_& CompletionDelegate);
	void ShowBang(enum class EFortBangType Type);
	void ShowAthenaMatchReadyExternalNotificationWindow();
	bool ShouldShowRateWidget();
	bool ShouldCloseMenuOnEscape();
	void SetSubGame(enum class ESubGame SubGame);
	void SetRatingWidgetFeedbackTitle(class FText& Title);
	void SetInputMode(enum class EFortInputMode InMode);
	void SetHidePerkRecombobulatorHelp(bool bInHideHelp);
	void SetCurrentInputPresetName(const class FString& InputPresetName);
	void SetCurrentCustomInputTemplatePresetName(const class FString& InputPresetName);
	void SetContextHelpItem(class UFortHelpItem* ContextSpecificHelpItem);
	void SetBangFromCount(enum class EFortBangType Type, int32 Count);
	void SendUINavigationAnalytic(const class FString& Destination, bool bUserInitiated);
	void SendLeaveZoneAnalytic();
	void SendExperienceRatingAnalytic(const class FString& RatingType, const class FString& FeedbackSentBy, class FText& RatingQuestion, int32& StarCount, const class FString& GameSessionId, const class FString& Comment);
	void RunLauncherWithOptions(const class FString& Options);
	void ReturnToSubGameSelect();
	void RemoveNotification(enum class EFortNotificationQueueType NotificationQueueType, struct FFortDialogDescription& NotificationDescription);
	void RegisterToReceiveNotifications(enum class EFortNotificationQueueType NotificationQueueType, UDelegateProperty_ InOnNotificationAvailable);
	void RegisterScriptedActions(const TArray<TSubclassOf<class AFortScriptedAction>>& ScriptedActions);
	void RegisterScriptedAction(TSubclassOf<class AFortScriptedAction> ScriptedAction);
	void QuitGame();
	void QueryGameBackendVersion();
	void ProcessNotificationResult(enum class EFortDialogResult InResult, struct FFortDialogDescription& NotificationDescription);
	void ProcessConfirmationResult(enum class EFortDialogResult InResult, class FName InResultName, struct FFortDialogDescription_NUI& ConfirmationDescription, bool bWaitingForLatentAction, struct FFortDialogExternalLatentActionHandle* WaitingDialogHandle);
	void OnQueryFortBackendVersionDelegate__DelegateSignature(const struct FFortBackendVersion& FortBackendVersion);
	void OnLocalPlayerControllerConnectionChangedDelegate__DelegateSignature(bool bConnected);
	void OnLoadingScreenVisibilityChangedDelegate__DelegateSignature(bool IsVisible);
	void Logout();
	bool IsUsingGamepad();
	bool IsUIVisible();
	bool IsPlaylistEnabled(class FName PlaylistName);
	bool IsPendingLogout();
	bool IsMobileApp();
	bool IsInZone();
	bool IsInOutpostZone();
	bool IsHUDVisible();
	bool IsGamepadAttached();
	bool IsDesktopPlatform();
	bool IsCustomGamepadConfig(int32 ConfigIndex);
	bool IsCurrentlyShowingLoadingScreen();
	bool IsBluGloEnabled();
	bool IsBattleRoyaleMatchmakingEnabled();
	bool IsAllContentInstalled();
	void InputActionHoldStopped(class FName InputActionName, bool bCompletedSuccessfully);
	void InputActionHoldStarted(class FName InputActionName, float HoldDuration);
	void HideBang(enum class EFortBangType Type);
	bool HasCompletedOnboardingObjective(struct FDataTableRowHandle& Objective);
	bool HasAccesstoMultipleSubGames();
	class FString GetWatermark();
	class FName GetUseActionName();
	class FName GetTrapPickerActionName();
	class FName GetTrapConfirmActionName();
	void GetTopLevelHelpItems(TArray<class UFortHelpItem*>* ActiveHelpEntries);
	class FName GetSwitchQuickBarActionName();
	enum class ESubGame GetSubGame();
	class FString GetSessionId();
	class UFortSeasonalEventManager* GetSeasonalEventManager();
	class UFortUIScoreReport* GetScoreReport();
	class FName GetRotatePrimitiveClockwiseActionName();
	class UFortQuestManager* GetQuestManager(enum class ESubGame SubGame);
	class FText GetPlatformDisplayName();
	class FName GetPickerConfirmActionName(enum class EFortPickerMode PickerMode);
	class FName GetPickerCancelActionName(enum class EFortPickerMode PickerMode);
	class FName GetPerformBuildingImprovementInteractionActionName();
	class FName GetPerformBuildingEditInteractionActionName();
	bool GetNextNotification(enum class EFortNotificationQueueType NotificationQueueType, struct FFortDialogDescription* NotificationDescription);
	class UFortUIMessageManager* GetMessageManager(class FName ManagerName, bool* bCreatedNew);
	class UFortUIRewardReport* GetLastMissionRewardReport();
	void GetLastMissionInfo(struct FFortLastMissionInfo* LastMissionInfo);
	struct FGameSummaryInfo GetLastGameSummaryInfo();
	class FText GetKeyTextForAction(class FName Action, class FText* ButtonActionType, bool bUseAbbreviatedText);
	struct FKey GetKeyForAction(class FName Action, bool bForceGamepadKey);
	class FName GetJumpActionName();
	int32 GetInputPriority(enum class EInputPriority Priority);
	bool GetInputDetailsForAction(class FName Action, struct FFortInputActionDetails* InputActionDetails);
	bool GetHidePerkRecombobulatorHelp();
	class FName GetGadget2ActionName();
	class FName GetGadget1ActionName();
	class FName GetFireActionName();
	class FText GetFeedbackTitle();
	class FText GetFeatureStateReasonText(enum class EFortUIFeatureStateReason Reason);
	void GetFeatureState(enum class EFortUIFeature Feature, enum class EFortUIFeatureState* OutFeatureState, enum class EFortUIFeatureStateReason* OutReason);
	class FString GetCurrentInputPresetName();
	class FString GetCurrentCustomInputTemplatePresetName();
	class FName GetCrouchActionName();
	class FText GetConningXpModifierMessage(int32 TotalSkillPoints, int32 ContentDifficulty);
	float GetConningDifficultyXpModifier(int32 TotalSkillPoints, int32 ContentDifficulty);
	class UFortCollectionBookManager* GetCollectionBookManager();
	class FName GetChangeMaterialActionName();
	class FName GetBuildConfirmActionName();
	bool GetBrushForKeyWithCustomInput(const struct FKey& Key, struct FSlateBrush* Brush, enum class ECommonInputType InputType, enum class ECommonGamepadType GamepadType);
	bool GetBrushForKey(const struct FKey& Key, struct FSlateBrush* Brush);
	class FString GetBackendName();
	class FString GetAthenaCodeOfConductURL();
	void GetAllPlayerInputPresetNamesForSubGame(enum class ESubGame SubGame, TArray<class FString>* InputPresetNames, TArray<class FText>* InputPresetFriendlyNames);
	void GetAllPlayerInputPresetNames(TArray<class FString>* InputPresetNames, TArray<class FText>* InputPresetFriendlyNames);
	class FText GetAccountGameplayRestrictionText();
	enum class ESubGameAccessReason GetAccessReason(enum class ESubGame SubGame);
	class FName GetAbility3ActionName();
	class FName GetAbility2ActionName();
	class FName GetAbility1ActionName();
	void ForceSetFeatureState(enum class EFortUIFeature Feature, enum class EFortUIFeatureState ForcedState, enum class EFortUIFeatureStateReason Reason);
	void ExitVehicle();
	void EnterVehiclePassenger();
	void EnterVehicleDriver();
	void DisplayStateContent(bool bDisplay);
	void CopyToClipboard(const class FString& ClipboardText);
	float ContentInstallationProgress();
	void CloseExternalNotificationWindowIfOpen();
	void ClearSelectionGroup(class FName SelectionGroup);
	void ClearRatingWidgetInfo();
	void ClearLastMissionReports();
	void ClearLastGameSummaryInfo();
	void ClearForceSetFeatureState(enum class EFortUIFeature Feature);
	void CheckFlag(const class FString& FlagName, enum class EFlagStatus* OutStatus);
	bool CanPlay(enum class ESubGame SubGame, class FText* DenialReason);
	bool CanMatchmake(enum class ESubGame SubGame, class FText* DenialReason);
	void BroadcastItemReceivedNotificationShown(bool IsActive);
	void BindToFeatureStateAndInitialize(enum class EFortUIFeature Feature, UDelegateProperty_ Delegate);
	bool AutoSelectSubGame();
	bool AllowQuit();
	bool AllowLogout();
};

// 0x148 (0x260 - 0x118)
// Class FortniteUI.FortGridWidgetBase
class UFortGridWidgetBase : public UContentWidget
{
public:
	TSubclassOf<class UFortGridPickerTile>       ClearWidgetType;                                   // 0x118(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TileWidth;                                         // 0x120(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TileHeight;                                        // 0x124(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        TilesAcross;                                       // 0x128(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        TilesDown;                                         // 0x12C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShrinkToFit;                                      // 0x130(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1957[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PeekOverflowTilePercentage;                        // 0x134(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMargin                               TilePadding;                                       // 0x138(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateBrush                           GridBackground;                                    // 0x148(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FMargin                               GridBackgroundPadding;                             // 0x1D0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UObject*>                       DataProvider;                                      // 0x1E0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnTileGenerated;                                   // 0x1F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTileClicked;                                     // 0x200(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMouseEnterTile;                                  // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMouseLeaveTile;                                  // 0x220(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortGridPickerTile>       TileWidgetType;                                    // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGridSortKind                     SortKind;                                          // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReversed;                                         // 0x239(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1959[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           GetSortKeyFor;                                     // 0x240(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_195A[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortGridWidgetBase* GetDefaultObj();

	void SetTileWidth(float Width);
	void SetTilesDown(int32 Down);
	void SetTilesAcross(int32 Across);
	void SetTilePadding(const struct FMargin& Padding);
	void SetTileHeight(float Height);
	void SetPeekOverflowTilePercentage(float Percent);
	void SetDataProvider(TArray<class UObject*>& Data);
	void SetClearWidgetType(TSubclassOf<class UFortGridPickerTile> InClearWidgetType);
	TArray<class UFortGridPickerTile*> GetTiles();
	class UFortGridPickerTile* GetTileForObject(class UObject* Object);
};

// 0x48 (0x2A8 - 0x260)
// Class FortniteUI.FortGridPickerButton
class UFortGridPickerButton : public UFortGridWidgetBase
{
public:
	enum class EMenuPlacement                    GridPlacement;                                     // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_195C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGridPickerGrid*                   GridWidget;                                        // 0x268(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCloseOnTileClicked;                               // 0x270(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_195D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           GridWidgetDelegate;                                // 0x278(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnGridPickerOpenChanged;                           // 0x288(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_195E[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortGridPickerButton* GetDefaultObj();

	void SetIsOpen(bool ShouldBeOpen);
	void OnIsGridPickerOpenChanged__DelegateSignature(bool IsOpen);
	void OnButtonClicked();
	class UFortGridPickerGrid* CreateGridWidget__DelegateSignature();
};

// 0x0 (0x218 - 0x218)
// Class FortniteUI.FortGridPickerGrid
class UFortGridPickerGrid : public UFortUserWidget
{
public:

	static class UClass* StaticClass();
	static class UFortGridPickerGrid* GetDefaultObj();

};

// 0x10 (0x228 - 0x218)
// Class FortniteUI.FortGridPickerTile
class UFortGridPickerTile : public UFortUserWidget
{
public:
	class UObject*                               Data;                                              // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortGridWidgetBase*                   Owner;                                             // 0x220(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortGridPickerTile* GetDefaultObj();

	void SetData(class UObject* InData);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnClicked();
	void ForwardClicked();
};

// 0x10 (0x270 - 0x260)
// Class FortniteUI.FortGridWidget
class UFortGridWidget : public UFortGridWidgetBase
{
public:
	uint8                                        Pad_1961[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortGridWidget* GetDefaultObj();

};

// 0x20 (0x318 - 0x2F8)
// Class FortniteUI.FortHaveInviteSelect
class UFortHaveInviteSelect : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_1962[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         Button_Yes;                                        // 0x308(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_No;                                         // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortHaveInviteSelect* GetDefaultObj();

};

// 0x30 (0x328 - 0x2F8)
// Class FortniteUI.FortHealthWarningBase
class UFortHealthWarningBase : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_1963[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ShowTimeLength;                                    // 0x310(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1964[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      Text_HealthWarning;                                // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                        HBox_RatingsIcons;                                 // 0x320(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortHealthWarningBase* GetDefaultObj();

};

// 0x10 (0x898 - 0x888)
// Class FortniteUI.FortHelpTreeItemBase
class UFortHelpTreeItemBase : public UCommonButton
{
public:
	uint8                                        Pad_1966[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHelpItem*                         HelpItem;                                          // 0x890(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortHelpTreeItemBase* GetDefaultObj();

};

// 0xB0 (0xD8 - 0x28)
// Class FortniteUI.FortHeroManagementContext
class UFortHeroManagementContext : public UBlueprintContextBase
{
public:
	UMulticastDelegateProperty_                  OnPlayerDataUpdated;                               // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMcpHeroDeleteResponse;                           // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMcpHeroCreateResponse;                           // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCurrentHeroChanged;                              // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMcpAbilityChangeRequestResponse;                 // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMcpAbilityChangeRequestSent;                     // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAbilitySelectionRolledBack;                      // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAvailableAbilityPointsChanged;                   // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnHeroStatsChanged;                                // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UFortHero*                             CurrentHero;                                       // 0xB8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_19BE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHero*                             HeroBeingDeleted;                                  // 0xC8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_19BF[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortHeroManagementContext* GetDefaultObj();

	bool SetHeroName(const class FString& NewName);
	bool SetCurrentHero(const class FString& HeroId);
	bool RequestSetTraitDepthFromID(const class FString& HeroId, int32 TraitIdx, int32 Depth);
	bool RequestSetTraitDepth(int32 TraitIdx, int32 Depth);
	bool RequestCreateHero(class UFortHeroType* HeroType, const class FString& Name, enum class EFortCustomGender Gender);
	bool RedeemPrevAbilityFromID(const class FString& HeroId, int32 TraitIdx);
	bool RedeemPrevAbility(int32 TraitIdx);
	void RedeemAllAbilitiesFromID(const class FString& HeroId);
	bool RedeemAllAbilities();
	bool PurchaseNextAbilityFromID(const class FString& HeroId, int32 TraitIdx);
	bool PurchaseNextAbility(int32 TraitIdx);
	void MarkHeroAsSeen(const class FString& HeroId);
	bool IsSkillTreeUnlocked();
	bool IsShowingStatsScreen();
	bool IsCreateHeroEnabled();
	int32 GetTraitDepthFromID(const class FString& HeroId, int32 TraitIdx);
	bool GetTraitDepth(int32 TraitIdx, int32* Depth);
	int32 GetNumUnspentAbilityPointsFromID(const class FString& HeroId);
	bool GetNumUnspentAbilityPoints(int32* NumAbilityPoints);
	int32 GetNumHeroTraits();
	int32 GetNextAbilityCostFromID(const class FString& HeroId, int32 TraitIdx);
	int32 GetNextAbilityCost(int32 TraitIdx);
	int32 GetMaxNameLength();
	struct FHeroUIData GetHeroDataFromID(const class FString& HeroId);
	bool GetHeroData(struct FHeroUIData* HeroData);
	void GetDisplayStats(TArray<struct FFortGameplayEffectModifierDescription>* Stats);
	bool GetCurrentHeroID(class FString* HeroId);
	TArray<class UFortAbilityKit*> GetCoreAbilities();
	bool GetAttributeValuesArrayFromID(const class FString& HeroId, const TArray<struct FGameplayAttribute>& Attributes, TArray<float>* Values, bool bUseProxy);
	bool GetAttributeValuesArray(const TArray<struct FGameplayAttribute>& Attributes, TArray<float>* Values, bool bUseProxy);
	float GetAttributeValueFromID(const class FString& HeroId, struct FGameplayAttribute& Attribute, bool bUseProxy);
	float GetAttributeValue(struct FGameplayAttribute& Attribute, bool bUseProxy);
	TArray<class FString> GetAllHeroIDs();
	class UFortAbilitySystemComponent* GetAbilitySystemComponent();
	int32 GetAbilityCostFromID(const class FString& HeroId, int32 TraitIdx, int32 TraitDepth);
	int32 GetAbilityCost(int32 TraitIdx, int32 TraitDepth);
	void GenerateRandomHeroName(class UDataTable* NameTable, class FString* Name);
	void FocusOnHero(const class FString& HeroId);
	enum class ENameStatus CheckHeroNameValidity(const class FString& Name);
	bool CanRedeemAllAbilities();
	bool CanModifyTraitDepthFromID(const class FString& HeroId, int32 TraitIdx);
	bool CanModifyTraitDepth(int32 TraitIdx);
	bool CanAffordNextAbilityFromID(const class FString& HeroId, int32 TraitIdx);
	bool CanAffordNextAbility(int32 TraitIdx);
	bool CanAffordAbilityFromID(const class FString& HeroId, int32 TraitIdx, int32 TraitDepth);
	bool CanAffordAbility(int32 TraitIdx, int32 TraitDepth);
};

// 0x30 (0x240 - 0x210)
// Class FortniteUI.FortSquadStatDetailsWidget
class UFortSquadStatDetailsWidget : public UCommonUserWidget
{
public:
	uint8                                        Pad_19C5[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSquadStatDetailsWidget* GetDefaultObj();

};

// 0x10 (0x250 - 0x240)
// Class FortniteUI.FortHeroSquadBonusPerksWidgetBase
class UFortHeroSquadBonusPerksWidgetBase : public UFortSquadStatDetailsWidget
{
public:
	class UFortPerkWidget_NUI*                   SupportBonusPerkWidget;                            // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortPerkWidget_NUI*                   TacticalBonusPerkWidget;                           // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortHeroSquadBonusPerksWidgetBase* GetDefaultObj();

};

// 0x110 (0x438 - 0x328)
// Class FortniteUI.FortSquadManagementScreenBase
class UFortSquadManagementScreenBase : public UFortActivatablePanel
{
public:
	uint8                                        Pad_19DA[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortSquadStatsWidgetBase*             SquadStatsWidget;                                  // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortSquadSlotsView*                   SquadSlotsView;                                    // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortSquadSlotDetailsPanel*            SelectedSlotDetailsPanel;                          // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortSquadSlotItemPicker*              SelectedSlotItemPicker;                            // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   InspectInputActionRowHandle;                       // 0x358(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   ManageInputActionRowHandle;                        // 0x368(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   BackInputActionRowHandle;                          // 0x378(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   InventoryInputActionRowHandle;                     // 0x388(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   InventoryCloseInputActionRowHandle;                // 0x398(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   ClosePickerInputActionRowHandle;                   // 0x3A8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   SelectPickerSlotActionRowHandle;                   // 0x3B8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   CyclePickerSortActionRowHandle;                    // 0x3C8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   PreviousSquadActionRowHandle;                      // 0x3D8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   NextSquadActionRowHandle;                          // 0x3E8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   ClearAllActionRowHandle;                           // 0x3F8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   AutoSlotActionRowHandle;                           // 0x408(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_19DC[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemViewContext_SquadSlotsView*   ItemViewContext_SquadSlotsView;                    // 0x428(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortItemViewContext_SquadSlotItemPicker* ItemViewContext_SquadSlotItemPicker;               // 0x430(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortSquadManagementScreenBase* GetDefaultObj();

	bool TryGetStaticSquadDataBP(struct FHomebaseSquad* OutSquadData);
	bool TryGetSquadTeamAttribute(struct FGameplayAttribute* OutGameplayAttribute);
	bool TryGetSquadMainAttribute(struct FGameplayAttribute* OutGameplayAttribute);
	bool TryGetAttributeValueFromSquad(float* OutValue, struct FGameplayAttribute& Attribute);
	void SetIdOfSquadToManageBP(class FName& SquadId);
	void SelectSquadWithOffset(int32 Offset);
	void SelectPreviousSquad();
	void SelectNextSquad();
	void NavigateToSquadSlot(int32 SquadSlotIndex);
	void HandleViewInAll(int32 SquadSlotIndex);
	void HandleSquadStateChanged();
	void HandleSquadSlotPickerShown();
	void HandleSquadSlotPickerHidden();
	void HandleSelectPickerSlotInputAction();
	void HandlePreviousSquadInputAction();
	void HandlePickerSelectionCommitted(class UFortItem* CommittedItem);
	void HandlePickerSelectionChanged(class UFortItem* SelectedItem);
	void HandleOpenSquadSlot(int32 SquadSlotIndex);
	void HandleNextSquadInputAction();
	void HandleManageInputAction();
	void HandleInventoryInputAction();
	void HandleInspectInputAction();
	void HandleDifferentSquadSlotSelected(int32 SquadSlotIndex);
	void HandleDifferentSquadSetBP();
	void HandleCyclePickerSortInputAction();
	void HandleClosePickerInputAction();
	void HandleBackInputAction();
	class FName GetIdOfSquadToManageBP();
	void ClearSquad();
};

// 0x20 (0x458 - 0x438)
// Class FortniteUI.FortHeroSquadManagementScreen
class UFortHeroSquadManagementScreen : public UFortSquadManagementScreenBase
{
public:
	struct FDataTableRowHandle                   ManageDefendersInputActionRowHandle;               // 0x438(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UFortHeroSquadBonusPerksWidgetBase*    BonusPerksWidget;                                  // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_19E4[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortHeroSquadManagementScreen* GetDefaultObj();

	void PlayFeedbackForSlottingPerson(class UFortCharacter* Character, int32 SlotIndex);
};

// 0x20 (0x120 - 0x100)
// Class FortniteUI.FortIconWithLabel
class UFortIconWithLabel : public UWidget
{
public:
	bool                                         ShouldShowIcon;                                    // 0x100(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldCollapseIconWhenNotShown;                    // 0x101(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    IconBrushSize;                                     // 0x102(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldShowLabel;                                   // 0x103(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19E8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonTextStyle>          LabelTextStyle;                                    // 0x108(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19E9[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortIconWithLabel* GetDefaultObj();

};

// 0x10 (0x130 - 0x120)
// Class FortniteUI.FortHeroSupportPerkIndicator
class UFortHeroSupportPerkIndicator : public UFortIconWithLabel
{
public:
	TWeakObjectPtr<class UFortItem>              ItemToRepresent;                                   // 0x120(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortSupportBonusType             SupportTypeToRepresent;                            // 0x128(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19F3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortHeroSupportPerkIndicator* GetDefaultObj();

	void SetSupportTypeToRepresent(enum class EFortSupportBonusType SupportTypeToRepresent);
	void SetItemToRepresent(class UFortItem* ItemToRepresent);
};

// 0x358 (0x560 - 0x208)
// Class FortniteUI.FortHeroSupportPerkWidget
class UFortHeroSupportPerkWidget : public UUserWidget
{
public:
	TWeakObjectPtr<class UFortHero>              HeroToRepresent;                                   // 0x208(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortSupportBonusType             SupportTypeToRepresent;                            // 0x210(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortSupportPerkWidgetState       SupportPerkWidgetState;                            // 0x211(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A0C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMultiSizeImage*                   PerkImage;                                         // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      NameText;                                          // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      DescriptionText;                                   // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A0D[0x330];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortHeroSupportPerkWidget* GetDefaultObj();

	void SetSupportTypeToRepresent(enum class EFortSupportBonusType InSupportTypeToRepresent);
	void SetState(enum class EFortSupportPerkWidgetState InState);
	void SetHeroToRepresent(class UFortHero* InHeroToRepresent);
	void OnSupportTypeUpdated();
	void OnStateChanged();
	void OnHeroUpdated();
	bool IsPerkUnlocked();
	bool IsPerkInCorrectSlot();
	bool IsPerkHighlighted();
	bool IsPerkEmpty();
	bool IsPerkActive();
	bool IsHeroInSupportSlot();
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortHomebaseNodeItemUtilities
class UFortHomebaseNodeItemUtilities : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UFortHomebaseNodeItemUtilities* GetDefaultObj();

	bool TryGetHomebaseNodeState(class UWidget* Widget, class FName NodeID, struct FHomebaseNodeState* OutNodeState);
	bool IsSquadSlotUnseen(class AFortPlayerController* FortPC, class FName& SquadId, int32 SquadSlot);
	bool IsHomebaseNodeItemUnseenForTagContainer(class AFortPlayerController* FortPC, struct FGameplayTagContainer& Tags);
	void GetHomebaseNodePageNames(TArray<class FName>* NodePages);
	void GetHomebaseNodeItems(class AFortPlayerController* FortPC, TArray<class UFortHomebaseNodeItem*>* NodeItems);
	class FName GetHomebaseNodeItemNameForTagContainer(class AFortPlayerController* FortPC, struct FGameplayTagContainer& Tags);
	class UFortHomebaseNodeItem* GetHomebaseNodeItemForTagContainer(class AFortPlayerController* FortPC, struct FGameplayTagContainer& Tags);
	class UFortHomebaseNodeItem* GetHomebaseNodeItemForSquadSlot(class AFortPlayerController* FortPC, class FName& SquadId, int32 SquadSlot);
	class UFortHomebaseNodeItem* GetHomebaseNodeItem(class AFortPlayerController* FortPC, class FName& NodeID);
	bool AreAnyHomebaseNodeItemsUnseenForSquadType(class AFortPlayerController* FortPC, enum class EFortHomebaseSquadType SquadType);
	bool AreAnyHomebaseNodeItemsUnseenForSquadId(class AFortPlayerController* FortPC, class FName& SquadId);
};

// 0x70 (0x98 - 0x28)
// Class FortniteUI.FortHomebaseUIContext
class UFortHomebaseUIContext : public UBlueprintContextBase
{
public:
	UMulticastDelegateProperty_                  OnSquadSlotChanged;                                // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnEarlyGameFinished;                               // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnNodePurchased;                                   // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UDataTable>             SquadIconDataTableAsset;                           // 0x58(0x28)(Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A4E[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortHomebaseUIContext* GetDefaultObj();

	void SetShowHeroHeadAccessoriesForLocalPlayer(bool bShow);
	void SetShowHeroBackpackForLocalPlayer(bool bShow);
	void OnSquadSlotChanged__DelegateSignature(class FName SquadName, int32 SlotIndex);
	void OnNodesPurchased__DelegateSignature(class FName NodeID);
	bool IsInEarlyGame();
	bool IsAnySquadSlotUnlocked(class FName SquadId);
	void GetWorkerSetBonusEffectModifiers(struct FGameplayTag& SetBonusTag, TArray<struct FFortAttributeModifierDisplayData>* OutModifiers);
	int32 GetTotalNodesInSkillTreePage(class FName PageId);
	struct FFortMultiSizeBrush GetSquadIcon(class FName SquadId);
	bool GetShowHeroHeadAccessoriesForLocalPlayer();
	bool GetShowHeroBackpackForLocalPlayer();
	class FName GetRootSkillTreePageId();
	class FName GetRootSkillTreeNodeId();
	struct FSlateColor GetQuestNodeColour();
	int32 GetNumOwnedNodesInSkillTreePage(class FName PageId);
	bool GetNodeTagBonusesForDisplay(class FName NodeID, TArray<struct FFortTagUIData>* OutGrantedTagsUIData);
	bool GetNodeDescription(class FName NodeID, class FText* OutDescription);
	bool GetNodeAttributeBonusesForDisplay(class FName NodeID, TArray<struct FFortDisplayAttribute>* OutDisplayAttributes);
	bool GetLocalPlayerHasHeroHeadAccessories();
	bool GetLocalPlayerHasHeroBackpack();
	TArray<class UFortItem*> GetItemsInSquad(class FName SquadId, bool bRemoveEmptySquadSlots);
	class UFortItem* GetItemInSquadSlot(class FName SquadName, int32 SlotIndex);
	class FName GetEarlyGameRootSkillTreePageId();
	class FName GetEarlyGameRootSkillTreeNodeId();
	void GetEarlyGameNodeProgressionState(int32* OutOwnedNodeCount, int32* OutRequiredNodeCountToLeaveEarlyGame);
	class FName GetEarlyGameNodePageId();
};

// 0x8 (0x390 - 0x388)
// Class FortniteUI.FortHomeCMSScreenBase
class UFortHomeCMSScreenBase : public UEpicCMSScreenBase
{
public:
	class UWidgetSwitcher*                       LayoutSwitcher;                                    // 0x388(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortHomeCMSScreenBase* GetDefaultObj();

	void OnTilesLoaded();
	bool AreTilesLoaded();
};

// 0x38 (0x248 - 0x210)
// Class FortniteUI.FortHUDCenterPopupMessageWidget
class UFortHUDCenterPopupMessageWidget : public UCommonUserWidget
{
public:
	TSoftClassPtr<class UUserWidget>             CenterPopupModalWidgetClass;                       // 0x210(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A54[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonActivatablePanel*               CenterPopupModalWidget;                            // 0x240(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortHUDCenterPopupMessageWidget* GetDefaultObj();

	void UpdateState();
	void OnModalDisplayed(enum class ECenterPopupMessageStateEnum NewState, class UCommonActivatablePanel* ModalPopup);
	enum class ECenterPopupMessageStateEnum GetCenterPopupMessageState();
};

// 0x590 (0x5B8 - 0x28)
// Class FortniteUI.FortHUDContext
class UFortHUDContext : public UBlueprintContextBase
{
public:
	uint8                                        Pad_1A77[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnCursorModeChanging;                              // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCursorModeChanged;                               // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnGameViewportActivationChanged;                   // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMgmtMenuTabChangeRequested;                      // 0x60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnIndicatorModeChanged;                            // 0x70(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnContextualReticleChanged;                        // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnBuildingFocused;                                 // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFocusedBuildingStateChanged;                     // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFocusedBuildingHealthChanged;                    // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFocusedBuildingRepairCostChanged;                // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFocusedBuildingAttachedTrapDurabilityChanged;    // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFocusedBuildingAttachedTrapChanged;              // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnDamagedResourceBuilding;                         // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPlayerCanInteract;                               // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnInteractUpdated;                                 // 0x110(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPlayerTargetingChanged;                          // 0x120(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnScoreChanged;                                    // 0x130(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnScoreStatChanged;                                // 0x140(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnZoneCompleted;                                   // 0x150(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPawnSet;                                         // 0x160(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnDamageReceived;                                  // 0x170(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnUnableToPerformAction;                           // 0x180(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerMaxHealthChanged;                     // 0x190(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerHealthChanged;                        // 0x1A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerDied;                                 // 0x1B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerSpawned;                              // 0x1C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerRevived;                              // 0x1D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerKillsChanged;                         // 0x1E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerPlaceChanged;                         // 0x1F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerViewTargetChanged;                    // 0x200(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerMaxShieldChanged;                     // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerShieldChanged;                        // 0x220(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerMaxStaminaChanged;                    // 0x230(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnLocalPlayerStaminaChanged;                       // 0x240(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnToggleScoreboard;                                // 0x250(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnEndOfDayRecap;                                   // 0x260(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnWaveCombatStart;                                 // 0x270(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnWaveBasedModifiersApplied;                       // 0x280(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnActiveGameplayModifiersChanged;                  // 0x290(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnHordeTierInitialized;                            // 0x2A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnHordeTierComplete;                               // 0x2B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnHordeWaveComplete;                               // 0x2C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnBuildingMaterialCycled;                          // 0x2D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnHighlightsCountChanged;                          // 0x2E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnUIResetRequired;                                 // 0x2F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnHUDStateRefreshed;                               // 0x300(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnWeaponEquippedDelegate;                          // 0x310(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAbilityDecisionWindowStackUpdated;               // 0x320(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnItemCollectorChanged;                            // 0x330(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTotalQuantumChanged;                             // 0x340(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAllFOBCoresAdded;                                // 0x350(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnWorldDaysElapsedChanged;                         // 0x360(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnNumSurvivorsRescuedChanged;                      // 0x370(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnEarnedBadgesChanged;                             // 0x380(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPotentialBadgesChanged;                          // 0x390(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMissionManagerCreated;                           // 0x3A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMissionsUpdated;                                 // 0x3B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFocusedMissionChanged;                           // 0x3C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTheaterUniqueIDChanged;                          // 0x3D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnZoneDifficultyInfoRowChanged;                    // 0x3E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnDifficultyIncreaseRewardTierChanged;             // 0x3F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnDifficultyIncreaseRewardsChanged;                // 0x400(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMissionGeneratorChanged;                         // 0x410(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMissionRewardsChanged;                           // 0x420(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPointOfInterestAdded;                            // 0x430(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPointOfInterestRemoved;                          // 0x440(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A7A[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnHUDElementVisibilityChanged;                     // 0x468(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A7B[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnDebugHUDObjectiveHeightChangedDelegate;          // 0x488(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnBuildModeChanged;                                // 0x498(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPersonalVehicleModeChanged;                      // 0x4A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bDebugHudObjectiveHeight;                          // 0x4B8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bPendingAttachToHUD;                               // 0x4B9(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A7C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerState*                      OwningPlayerState;                                 // 0x4C0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ABuildingActor*                        CurFocusedBuilding;                                // 0x4C8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ABuildingTrap*                         CurFocusedTrap;                                    // 0x4D0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A7E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABuildingActor*                        BuildingFocusCandidates[0x3];                      // 0x4E0(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A7F[0xC0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortHUDContext* GetDefaultObj();

	void UpdateTrapAttachedToBuilding();
	void ToggleFullScreenMap();
	bool ShouldOnlyShowNextPrevBuildingSlotKeybinds();
	void SetPreparingMgmtMenu(bool bPreparing);
	void SetIndicatorsState(enum class EFortIndicatorState NewState);
	void SetIndicatorsAllowed(bool bIndicatorsAllowed);
	void SetHUDElementVisibility(struct FGameplayTagContainer& HUDElementTags, bool bHideElements);
	void SetCursorModeLocked(bool bLocked);
	void RequestMgmtMenuTab(class FName TabName);
	void RemovePointOfInterest(class AActor* PointOfInterest);
	bool IsPreparingMgmtMenu();
	bool IsInEditMode();
	bool IsInCursorMode();
	void HandlePersonalVehicleModeChanged(bool bEnteredVehicle);
	void HandleLocalPlayerViewTargetChanged();
	void HandleLocalPlayerPlaceChanged();
	void HandleLocalPlayerKillsChanged();
	void HandleLocalPawnSpawned();
	void HandleLocalPawnRevived();
	void HandleLocalPawnDied(struct FFortPlayerDeathReport& DeathReport);
	void HandleGameplayVoteNotifications(enum class EFortVoteType VoteType, enum class EFortVoteStatus VoteStatus, int32 VoteResult, TArray<struct FVoter>& Voters);
	void HandleFocusedBuildingHealthChanged();
	void HandleBuildingModeChanged(bool bEntering);
	float GetTimeToDelayEndOfDayZoneWidgetDisplay();
	class AFortPvPBaseCornerstone* GetTeamCornerstone(enum class EFortTeam Team);
	float GetScoreDisplayFactor();
	TArray<struct FFortBadgeCount> GetPotentialBadges();
	class AFortPlayerStateZone* GetPlayerStateZone();
	int32 GetNumAllowedDifficultyIncreases();
	void GetMissionRewards(TArray<class UFortItem*>* MissionRewards, TArray<class UFortItem*>* MissionAlertRewards);
	TArray<struct FZoneLoadingScreenHeadingConfig> GetMissionOverviewObjectives();
	class AFortMissionManager* GetMissionManager();
	struct FFortKillerVisualInfo GetKillerVisualInfoFromDeathReport(struct FFortPlayerDeathReport& DeathReport);
	enum class EFortIndicatorState GetIndicatorsState();
	class AFortGameStateZone* GetGameStateZone();
	class AFortMission* GetFocusedMission();
	bool GetFocusedBuildingInfo(struct FFortFocusedBuildingInfo* OutBuildingInfo);
	TArray<struct FEarnedBadgeEntry> GetEarnedBadges();
	int32 GetDifficultyIncreaseRewardsTier();
	void GetDifficultyIncreaseRewardsDifference(int32 BaseDifficultyIncreaseTier, int32 ComparedDifficultyIncreaseTier, TArray<struct FFortItemDelta>* RewardDeltaInfo);
	void GetDifficultyIncreaseRewards(int32 DifficultyIncreaseTier, TArray<struct FFortItemDelta>* DifficultyIncreaseRewards);
	struct FFortHUDState GetCurrentHUDState();
	class UFortHero* GetCurrentHero();
	bool GetCurrentBasicMissionInfo(struct FFortBasicMissionInfo* BasicMissionInfo);
	class AFortBluGloManager* GetBluGloManager();
	void ForwardOnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void ForwardOnNumSurvivorsRescuedChanged(int32 NumSurvivorsRescued);
	void ForwardOnMissionsUpdated();
	void ForwardOnAbilityDecisionWindowStackUpdated();
	void EnterCursorMode(class FName ActionName, class UUserWidget* CursorModeWidget);
	void EnterCameraMode();
	bool AreIndicatorsEnabled();
	bool AreHUDElementsVisible(struct FGameplayTagContainer& HUDElementTags);
	void AddPointOfInterest(class AActor* PointOfInterest, class FText DisplayText, class UTexture2D* DisplayImage);
};

// 0x0 (0x238 - 0x238)
// Class FortniteUI.FortHUDEquipProgressBase
class UFortHUDEquipProgressBase : public UFortHUDElementWidget
{
public:

	static class UClass* StaticClass();
	static class UFortHUDEquipProgressBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortHUDObjectiveSizeInterface
class IFortHUDObjectiveSizeInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IFortHUDObjectiveSizeInterface* GetDefaultObj();

	float GetHeightEstimate();
};

// 0x48 (0x258 - 0x210)
// Class FortniteUI.FortHUDTargetUnderReticleWidget
class UFortHUDTargetUnderReticleWidget : public UCommonUserWidget
{
public:
	TScriptInterface<class IFortHUDTargetUnderReticleInterface> Target;                                            // 0x210(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	bool                                         bKeepTargetUntilNewValidTarget;                    // 0x220(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A85[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 TargetRequiredTags;                                // 0x228(0x20)(Edit, DisableEditOnTemplate, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A86[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortHUDTargetUnderReticleWidget* GetDefaultObj();

	void OnTargetHealthChanged();
	void OnTargetDied();
	void OnTargetDestroyed();
	void OnTargetChanged();
	void OnTargetActorDestroyed(class AActor* DestroyedActor);
	void HandleOnHUDTargetUnderReticle(TScriptInterface<class IFortHUDTargetUnderReticleInterface>* NewTarget);
	void ClearTarget();
};

// 0x40 (0x70 - 0x30)
// Class FortniteUI.FortHUDVisibilityData
class UFortHUDVisibilityData : public UDataAsset
{
public:
	struct FGameplayTag                          HUDVisibilityGameplayTag;                          // 0x30(0x8)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayText;                                       // 0x38(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  ToolTipText;                                       // 0x50(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         Visible;                                           // 0x68(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A87[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortHUDVisibilityData* GetDefaultObj();

};

// 0x8 (0x330 - 0x328)
// Class FortniteUI.FortInfoWindow
class UFortInfoWindow : public UFortActivatablePanel
{
public:
	class UCommonListView*                       InfoEntries;                                       // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortInfoWindow* GetDefaultObj();

	class UWidget* GetListWidget(class UObject* Item);
};

// 0x30 (0x270 - 0x240)
// Class FortniteUI.FortInputReflector
class UFortInputReflector : public UCommonInputReflector
{
public:
	struct FDataTableRowHandle                   MoreInfoActionData;                                // 0x240(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortActivatablePanel>  PanelRequestingMoreInfo;                           // 0x250(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A89[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         MoreInfoButton;                                    // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMenuAnchor*                           MoreInfoMenuAnchor;                                // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortInputReflector* GetDefaultObj();

	void OnInputActionTriggered(bool* bPassThrough);
	class UWidget* GetPopupMenuWidget();
};

// 0x178 (0x1A0 - 0x28)
// Class FortniteUI.FortInventoryContext
class UFortInventoryContext : public UBlueprintContextBase
{
public:
	UMulticastDelegateProperty_                  OnMcpWorldItemsChanged;                            // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMcpOutpostItemsChanged;                          // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnWorldItemListChanged;                            // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnOutpostItemListChanged;                          // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnItemPickedUp;                                    // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnQuickbarContentsChanged;                         // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnQuickbarSlotFocusChanged;                        // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnQuickbarSecondarySlotFocusChanged;               // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnQuickbarForceFullUpdate;                         // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnWorldItemsChanged;                               // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPinnedSchematicsChanged;                         // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnSchematicsLockedChanged;                         // 0xD8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnSchematicUnlocked;                               // 0xE8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCraftItemStarted;                                // 0xF8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCraftItemFailed;                                 // 0x108(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnVaultItemLimitStateChangedEvent;                 // 0x118(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMap<class UFortSchematicItemDefinition*, bool> SchematicLockedStates;                             // 0x128(0x50)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B16[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortInventoryContext* GetDefaultObj();

	bool WouldExceedMaxStackSize(class UFortItemDefinition* ItemDefinition, int32 QuantityToTest);
	void UnlockSchematic(class UFortSchematicItemDefinition* SchematicDefinition);
	void UnlockAllSchematics();
	void SortAccountItemArrayForTransmog(TArray<class UFortAccountItem*>& VaultItems, TArray<class UFortAccountItem*>* SortedItems);
	bool SetSchematicPinned(class UFortSchematicItem* Schematic, bool bEnabled);
	bool RemoveItemFromQuickBar(class UFortItem* Item);
	struct FFortItemQuantityPair MakeItemQuantityPair(class UFortItemDefinition* ItemDefinition, int32 ItemQuantity);
	void LockAllSchematics();
	bool IsTrapAvailableForBuilding(class ABuildingSMActor* Actor);
	bool IsSlotHidden(enum class EFortQuickBars InQuickBar, int32 Slot);
	bool IsSchematicPinned(class UFortSchematicItem* Schematic);
	bool IsPickAxeEquipped();
	bool HasUnavailableItemsInStorage();
	bool HasTrapReadyForBuilding(class ABuildingSMActor* BuildingToAttachTo);
	bool HasRecyclingWarnings(class UFortItem* Item);
	bool HasGameplayTagContainerExact(const struct FGameplayTagContainer& GameplayTagContainer);
	bool HasGameplayTagContainer(const struct FGameplayTagContainer& GameplayTagContainer);
	bool HasEvolutions(class UFortItem* Item);
	void GetWorldItemListForDeployableBaseThePlayerIsIn(TArray<class UFortWorldItem*>* Items, struct FFortItemListFilter& FilterSettings);
	void GetWorldItemList(TArray<class UFortWorldItem*>* Items, struct FFortItemListFilter& FilterSettings);
	class UFortPersistentResourceItemDefinition* GetVoucherResourceItemDefinition();
	enum class EVaultItemLimitStatus GetVaultItemLimitStatus();
	int32 GetVaultItemLimit();
	TArray<class FText> GetUserFriendlyTags(class UFortItem* Item);
	struct FRecipe GetUpgradeItemRarityRecipeFromItemDefintion(class UFortItemDefinition* ItemDefinition);
	void GetUnseenTransformKeys(enum class EConversionControlKeyRequest RequestType, enum class EInventoryContentSortType SortType, TArray<class UFortAccountItem*>* TransformKeys);
	class FText GetTrapAttachTypeName(class ABuildingSMActor* Actor);
	bool GetTransmogSacrificeDataFromItemDefintion(class UFortItemDefinition* ItemDefinition, struct FTransmogSacrifice* OutTransmogData);
	void GetTransformKeys(enum class EConversionControlKeyRequest RequestType, enum class EInventoryContentSortType SortType, TArray<class UFortAccountItem*>* TransformKeys);
	int32 GetTotalItemQuantityByDefinition(class UFortItemDefinition* ItemDefinition);
	class FText GetTierText(enum class EFortItemTier Tier);
	bool GetSupportBonusPerks(class UFortHero* Hero, TArray<struct FFortUIPerk>* SupportBonusPerks);
	int32 GetStorageOverflowFromAddingItem(class UFortWorldItem* Item, int32 Count);
	int32 GetStorageNumItems();
	int32 GetStorageCapacity();
	class FText GetShorthandItemStackCount(int32 Quantity, int32 MiniumFractionalDigits, int32 MaximumFractionalDigits);
	class UFortPersistentResourceItemDefinition* GetSchematicResourceItemDefinition();
	int32 GetResourceItemMaxStackSize(enum class EFortResourceType ResourceType);
	class UFortResourceItemDefinition* GetResourceItemDefinition(enum class EFortResourceType ResourceType);
	class UTexture2D* GetResourceIcon(enum class EFortResourceType ResourceType);
	int32 GetResourceCount(enum class EFortResourceType ResourceType);
	class FText GetRecyclingWarningText(enum class EItemRecyclingWarning Warning, bool WereAnyItemsAnimate);
	class FText GetRecyclingCatalystDisplayName(class UFortItem* Item);
	class FText GetRecycleRestrictionReasonText(enum class EItemRecyclingRestrictionReason Reason);
	class UFortItem* GetQuickBarSlottedItem(enum class EFortQuickBars InQuickBar, int32 Slot);
	void GetQuickbarFocus(enum class EFortQuickBars* OutQuickBar, int32* OutSlot, int32* OutSecondarySlot, int32* OutPreviousFocusedSlot);
	void GetPinnedSchematicList(TArray<class UFortSchematicItem*>* PinnedItems);
	class UFortPersistentResourceItemDefinition* GetPersonnelResourceItemDefinition();
	int32 GetNumInInventory(class UFortItemDefinition* ItemDefinition, bool bIncludeReserved);
	enum class EFortItemTier GetItemTierRecyclingWarningThreshold();
	enum class EFortRarity GetItemRarityRecyclingWarningThreshold();
	int32 GetItemLevelRecyclingWarningThreshold();
	void GetItemInstancesByDefinition(class UFortItemDefinition* ItemDefinition, TArray<class UFortItem*>* Items);
	void GetHomebaseUnlockedTransmogKeys(TArray<class UFortAccountItem*>* TransmogKeys);
	class UFortPersistentResourceItemDefinition* GetHeroResourceItemDefinition();
	bool GetHeroAbilityPerks(class UFortHero* Hero, TArray<struct FFortUIPerk>* HeroAbilityPerks);
	bool GetGameplayTagByIndex(const struct FGameplayTagContainer& GameplayTagContainer, int32 Index, struct FGameplayTag* Result);
	class FText GetEvolveRestrictionReasonText(enum class EItemEvolutionRestrictionReason Reason);
	class AFortWeapon* GetEquippedWeapon();
	class FText GetDisassembleRestrictionReasonText(enum class EItemDisassembleRestrictionReason Reason);
	int32 GetDeployableBaseOverflowFromAddingItem(class UFortWorldItem* Item, int32 Count);
	void GetDeployableBaseItemCounts(int32* ItemsCount, int32* MaxItemsCount, int32* OverflowItemsCount);
	class UFortResourceItemDefinition* GetCurrentResourceItemDefinition();
	int32 GetCurrentResourceCount();
	class UFortWorldItemDefinition* GetCurrentAmmoItemDefinition();
	int32 GetCountOfVaultLimitedItems();
	int32 GetCountOfHeroItems();
	void GetCoreItemsByType(enum class EFortItemType ItemType, TArray<class UFortAccountItem*>* Items);
	void GetCoreItemsByFilterType(const class FString& SearchText, enum class EInventoryContentSortType SortType, enum class EFortInventoryFilter SubType, TArray<class UFortAccountItem*>* OutItemList);
	TArray<struct FRecipe> GetConversionRecipesFromItemDefintion(class UFortItemDefinition* ItemDefinition);
	int32 GetBackpackOverflowFromAddingItem(class UFortWorldItem* Item, int32 Count);
	void GetBackpackItemCounts(int32* ItemsCount, int32* MaxItemsCount, int32* OverflowItemsCount);
	void GetAccountItemsByType(enum class EFortItemType ItemType, TArray<class UFortAccountItem*>* Items);
	void GetAccountItemsByFilterType(const class FString& SearchText, enum class EInventoryContentSortType SortType, enum class EFortInventoryFilter SubType, TArray<class UFortAccountItem*>* OutItemList);
	void EquipItem(class UFortItem* Item);
	void EnumerateRecyclingWarningsForItems(TArray<class UFortItem*>& Items, TArray<enum class EItemRecyclingWarning>* OutWarnings);
	bool DropItemOnQuickBar(class UFortItem* Item, enum class EFortQuickBars TargetQuickbar, int32 TargetSlot);
	void DropItem(class UFortWorldItem* ItemBeingDropped, int32 Quantity);
	bool DoesItemMatchFilter(class UFortItem* Item, struct FFortItemListFilter& FilterSettings);
	void DestroyWorldItem(class UFortItem* Item);
	bool CraftSchematic(class UFortSchematicItem* SchematicItem, enum class EFortCraftFailCause* FailCause);
	bool CraftAndSlotSchematic(class UFortSchematicItem* SchematicItem, int32 PostCraftSlot, enum class EFortCraftFailCause* FailCause);
	bool CanUpgradeItemRarity(class UFortItem* Item, TArray<enum class EItemEvolutionRestrictionReason>* OutRestrictionReasons);
	bool CanSwapItem(class UFortItem* Item, enum class EFortQuickBars TargetQuickbar, int32 TargetSlot);
	bool CanRecycle(class UFortItem* Item, TArray<enum class EItemRecyclingRestrictionReason>* OutRestrictionReasons);
	bool CanPinSchematic(class UFortSchematicItem* Schematic);
	bool CanEvolve(class UFortItem* Item, TArray<enum class EItemEvolutionRestrictionReason>* OutRestrictionReasons);
	bool CanDisassembleItem(class UFortWorldItem* Item, TArray<enum class EItemDisassembleRestrictionReason>* OutRestrictionReasons);
	bool CanCraftSchematic(class UFortSchematicItem* SchematicItem, enum class EFortCraftFailCause* FailCause);
	bool AreRecipeRequirementsMet(TArray<struct FFortItemQuantityPair>& RecipeCosts);
	bool AreAnyItemsUnseenForInventoryFilter(enum class EFortFrontendInventoryFilter FilterType);
	bool AreAnyItemsAnimate(TArray<class UFortItem*>& Items);
	bool ActivateItem(class UFortItem* Item);
};

// 0x0 (0x460 - 0x460)
// Class FortniteUI.FortInventoryOverflowIndicator
class UFortInventoryOverflowIndicator : public UFortSimpleItemConditionIconIndicator
{
public:

	static class UClass* StaticClass();
	static class UFortInventoryOverflowIndicator* GetDefaultObj();

};

// 0x20 (0x230 - 0x210)
// Class FortniteUI.FortInviteRequest
class UFortInviteRequest : public UCommonUserWidget
{
public:
	uint8                                        Pad_1B18[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         Button_RequestInvite;                              // 0x220(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Logout;                                     // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortInviteRequest* GetDefaultObj();

};

// 0x38 (0x248 - 0x210)
// Class FortniteUI.FortItemBaseWidget
class UFortItemBaseWidget : public UCommonUserWidget
{
public:
	struct FFortItemQuantityPair                 ItemQuantityPair;                                  // 0x210(0x30)(NativeAccessSpecifierPrivate)
	class UFortItemDefinition*                   ItemDefinition;                                    // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortItemBaseWidget* GetDefaultObj();

	void SetItemQuantityPairToRepresent(const struct FFortItemQuantityPair& InItemQuantityPair);
	void SetItemDefinitionToRepresent(class UFortItemDefinition* InItemDefinition);
	void OnItemDefinitionChanged();
	void OnItemCountChanged(int32 NewCount);
	void HandleItemCountChanged(class UFortItemDefinition* Definition, int32 Delta);
	int32 GetQuantity();
	class UFortItemDefinition* GetItemDefinition();
};

// 0x28 (0x128 - 0x100)
// Class FortniteUI.FortItemWidget_NUI
class UFortItemWidget_NUI : public UWidget
{
public:
	TWeakObjectPtr<class UFortItem>              ItemToRepresent;                                   // 0x100(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TScriptInterface<class IFortItemViewContextInterface> ItemViewContext;                                   // 0x108(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B1B[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemWidget_NUI* GetDefaultObj();

	void SetItemViewContext(TScriptInterface<class IFortItemViewContextInterface> ItemViewContext);
	void SetItemToRepresent(class UFortItem* ItemToRepresent);
};

// 0x0 (0x128 - 0x128)
// Class FortniteUI.FortItemCardBase
class UFortItemCardBase : public UFortItemWidget_NUI
{
public:

	static class UClass* StaticClass();
	static class UFortItemCardBase* GetDefaultObj();

	enum class EFortItemCardSize PortBrushSize(enum class EFortBrushSize& BrushSize);
};

// 0xF8 (0x120 - 0x28)
// Class FortniteUI.FortItemCardMaterialPooler
class UFortItemCardMaterialPooler : public UObject
{
public:
	uint8                                        Pad_1B1C[0xF8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemCardMaterialPooler* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortItemCardUtilities
class UFortItemCardUtilities : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UFortItemCardUtilities* GetDefaultObj();

	struct FVector2D GetCardDimensions(enum class EFortItemType ItemType, enum class EFortItemCardSize CardSize, bool IsReward, bool UseNewItemCardSizes);
};

// 0x10 (0x130 - 0x120)
// Class FortniteUI.FortItemCategoryIndicator
class UFortItemCategoryIndicator : public UFortIconWithLabel
{
public:
	TWeakObjectPtr<class UFortItem>              ItemToRepresent;                                   // 0x120(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortItemCategoryOrdinal          OrdinalOfCategoryToRepresent;                      // 0x128(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B1E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemCategoryIndicator* GetDefaultObj();

	void SetOrdinalOfCategoryToRepresent(enum class EFortItemCategoryOrdinal ItemCategoryOrdinal);
	void SetLabelColorOverride(const struct FLinearColor& InLabelColorOverride);
	void SetItemToRepresent(class UFortItem* ItemToRepresent);
	void ClearLabelColorOverride();
};

// 0x10 (0x228 - 0x218)
// Class FortniteUI.FortItemCollectorWidget
class UFortItemCollectorWidget : public UFortUserWidget
{
public:
	class ABuildingItemCollectorActor*           ItemCollector;                                     // 0x218(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B21[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemCollectorWidget* GetDefaultObj();

	void OnItemCollectorValuesChanged(class UFortWorldItemDefinition* InputItem, int32 Goal, int32 Deposit, int32 Captures);
	void OnItemCollectorStateChanged(enum class EFortItemCollectorState ItemCollectorState);
	void OnItemCollectorChanged(class ABuildingItemCollectorActor* OutItemCollector);
};

// 0x90 (0x2A0 - 0x210)
// Class FortniteUI.FortItemCooldownWidget
class UFortItemCooldownWidget : public UCommonUserWidget
{
public:
	UMulticastDelegateProperty_                  OnCooldownStarted_Delegate;                        // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCooldownStopped_Delegate;                        // 0x220(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UCommonTextBlock*                      CooldownText;                                      // 0x230(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                CooldownImage;                                     // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  CooldownMaterialParameterName;                     // 0x240(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<enum class EFortItemCooldownType>     CooldownTypesSupported;                            // 0x248(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              CooldownPercentageMID;                             // 0x258(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B25[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemCooldownWidget* GetDefaultObj();

	void SetItem(class UFortWorldItem* InWorldItem);
	void OnWorldItemDestroyed();
	void OnCooldownStopped(enum class EFortItemCooldownType CooldownType);
	void OnCooldownStarted(enum class EFortItemCooldownType CooldownType);
};

// 0x18 (0x300 - 0x2E8)
// Class FortniteUI.FortItemCountTextBlock
class UFortItemCountTextBlock : public UCommonNumericTextBlock
{
public:
	class UFortItemDefinition*                   ItemDefinition;                                    // 0x2E8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortItemCountStyle               CountStyle;                                        // 0x2F0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B36[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ItemCountMaxInterpolateDuration;                   // 0x2F4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ItemCountMinInterpolateRate;                       // 0x2F8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B38[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemCountTextBlock* GetDefaultObj();

	void SetOverrideValue(int32 InOverrideValue);
	void SetItemDefinition(class UFortItemDefinition* InItemDefinition);
	void SetCountStyle(enum class EFortItemCountStyle InCountStyle);
	void InterpolateOverrideToValue(int32 TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset);
	void HandleItemCountChanged(class UFortItemDefinition* Definition, int32 Delta);
};

// 0x38 (0x330 - 0x2F8)
// Class FortniteUI.FortItemDetailsActivatablePanel
class UFortItemDetailsActivatablePanel : public UCommonActivatablePanel
{
public:
	TWeakObjectPtr<class UFortItem>              ItemToDetail;                                      // 0x2F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItem>              ItemToCompareWith;                                 // 0x300(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItemManagementScreen> HostItemManagementScreen;                          // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B3C[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemDetailsActivatablePanel* GetDefaultObj();

	void HandleDifferentItemToDetailSetBP();
	void HandleDifferentItemToCompareSetBP();
	void HandleConsumeItemProgressChangedBP();
};

// 0x8 (0x338 - 0x330)
// Class FortniteUI.FortItemDetailsModeActivatablePanel
class UFortItemDetailsModeActivatablePanel : public UFortItemDetailsActivatablePanel
{
public:
	class UCommonWidgetSwitcher*                 DetailPanelWidgetSwitcher;                         // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortItemDetailsModeActivatablePanel* GetDefaultObj();

	void HandleOnActiveWidgetChanged(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
};

// 0x10 (0x340 - 0x330)
// Class FortniteUI.FortItemCompareModeActivatablePanel
class UFortItemCompareModeActivatablePanel : public UFortItemDetailsActivatablePanel
{
public:
	class UFortItemManagementItemDetailsPanel*   ComparisonModeLeftItemDetailsPanel;                // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItemManagementItemDetailsPanel*   ComparisonModeRightItemDetailsPanel;               // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortItemCompareModeActivatablePanel* GetDefaultObj();

};

// 0x10 (0x340 - 0x330)
// Class FortniteUI.FortItemMulchModeActivatablePanel
class UFortItemMulchModeActivatablePanel : public UFortItemDetailsActivatablePanel
{
public:
	class UFortItemManagementItemDetailsPanel*   MulchModeItemDetailsPanel;                         // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItemManagementMulchDetailsPanel*  MulchDetailsPanel;                                 // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortItemMulchModeActivatablePanel* GetDefaultObj();

};

// 0x48 (0x258 - 0x210)
// Class FortniteUI.FortItemDetailElementWidget
class UFortItemDetailElementWidget : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortItem>              ItemToDetail;                                      // 0x210(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItem>              ItemToCompareWith;                                 // 0x218(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShouldPreviewUpgradingItem;                       // 0x220(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B49[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IFortItemViewContextInterface> ItemViewContext;                                   // 0x228(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	enum class EFortItemInspectionMode           CurrentInspectMode;                                // 0x238(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B4B[0x1F];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemDetailElementWidget* GetDefaultObj();

	void HandleShouldPreviewUpgradingItemChanged();
	void HandlePreDifferentItemToDetailSet();
	void HandlePreDifferentItemToCompareWithSet();
	void HandlePostDifferentItemToDetailSet();
	void HandlePostDifferentItemToCompareWithSet();
	void HandleItemToDetailChangedBP();
	void HandleInspectModeChanged();
};

// 0x68 (0x278 - 0x210)
// Class FortniteUI.FortItemDetailsHostPanel
class UFortItemDetailsHostPanel : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortItem>              ItemToDetail;                                      // 0x210(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItem>              ItemToCompareWith;                                 // 0x218(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShouldPreviewUpgradingItem;                       // 0x220(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B5E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UScrollBox*                            ScrollBox;                                         // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNamedSlot*                            DetailsContainerSlotWidget;                        // 0x230(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonBorder*                         HighRarityBorder;                                  // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TScriptInterface<class IFortItemViewContextInterface> ItemViewContext;                                   // 0x240(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	enum class EFortItemInspectionMode           CurrentInspectMode;                                // 0x250(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B61[0x27];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemDetailsHostPanel* GetDefaultObj();

	void ShouldPreviewUpgradingItem(bool Value);
	void SetScrollWidget();
	void SetItemViewContext(TScriptInterface<class IFortItemViewContextInterface>& ItemViewContext);
	void SetItemToDetail(class UFortItem* ItemToDetail);
	void SetItemToCompareWith(class UFortItem* ItemToCompareWith);
	void SetInspectMode(enum class EFortItemInspectionMode InspectMode);
	void HandleShouldPreviewUpgradingItemChangedBP();
	void HandleInspectModeChanged();
	void HandleDifferentItemToDetailSet();
	void HandleDifferentItemToCompareSet();
};

// 0x28 (0x238 - 0x210)
// Class FortniteUI.FortItemDetailsPanel
class UFortItemDetailsPanel : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortItem>              ItemToDetail;                                      // 0x210(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItem>              ItemToCompareWith;                                 // 0x218(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B7F[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemDetailsPanel* GetDefaultObj();

	void SetItemToDetail(class UFortItem* ItemToDetail);
	void SetItemToCompareWith(class UFortItem* ItemToCompareWith);
	void HandleItemToDetailChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void HandleItemToCompareWithChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void HandleDifferentItemToDetailSet();
	void HandleDifferentItemToCompareSet();
	void HandleCursorModeChanged(bool bCursorModeEnabled, class FName ActionName, class UUserWidget* CustomWidget);
};

// 0x30 (0x290 - 0x260)
// Class FortniteUI.FortItemDisplayNameText
class UFortItemDisplayNameText : public UCommonTextBlock
{
public:
	TWeakObjectPtr<class UFortItem>              ItemToRepresent;                                   // 0x260(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B83[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemDisplayNameText* GetDefaultObj();

	void SetItemToRepresent(class UFortItem* ItemToRepresent);
};

// 0xE8 (0x1E8 - 0x100)
// Class FortniteUI.FortItemIcon
class UFortItemIcon : public UWidget
{
public:
	class UFortItemDefinition*                   ItemDefinition;                                    // 0x100(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    BrushSize;                                         // 0x108(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B95[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ColorAndOpacity;                                   // 0x10C(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShadow;                                           // 0x11C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B97[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ShadowColorAndOpacity;                             // 0x120(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SmallPreviewImageBrush;                            // 0x130(0x88)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B99[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemIcon* GetDefaultObj();

	void SetShadowColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetOpacity(float InOpacity);
	void SetItemDefinition(class UFortItemDefinition* InItemDefinition);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetBrushSize(enum class EFortBrushSize InBrushSize);
};

// 0x0 (0x210 - 0x210)
// Class FortniteUI.FortItemInfoWidget
class UFortItemInfoWidget : public UCommonUserWidget
{
public:

	static class UClass* StaticClass();
	static class UFortItemInfoWidget* GetDefaultObj();

	void PopulateUsingItemDefinition(class UFortItemDefinition* NewItem);
	void PopulateUsingItem(class UFortItem* NewItem);
};

// 0xA8 (0x468 - 0x3C0)
// Class FortniteUI.FortItemInspectionScreen
class UFortItemInspectionScreen : public UFortActivatablePanelWithItemPreview
{
public:
	enum class EFortItemInspectionMode           CurrentInspectMode;                                // 0x3C0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BC1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UFortItem>              InspectedItem;                                     // 0x3C4(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         UpgradeAllowed;                                    // 0x3CC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         EvolveAllowed;                                     // 0x3CD(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         FavoriteAllowed;                                   // 0x3CE(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         RarityUpgradingAllowed;                            // 0x3CF(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsPreviewing;                                      // 0x3D0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BC5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemInspectCycleWidget*           CycleWidget;                                       // 0x3D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagQuery                     InspectAnimationTag;                               // 0x3E0(0x48)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortAlterationModOptinScreenBase> AlterationModOptinScreenClass;                     // 0x428(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortAlterationModScreenBase> AlterationModScreenClass;                          // 0x430(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BC6[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemInspectionScreen* GetDefaultObj();

	void SetItemToRepresent(class UFortItem* Item);
	void SetInspectionMode(enum class EFortItemInspectionMode NewInspectMode);
	void SetAttemptingConversion(bool bIsAttemptingConversion);
	void OpenItemInspect(class UFortItem* ItemToInspect, enum class EFortItemInspectionMode Mode, bool ShouldAllowUpgrading, bool ShouldAllowEvolution, bool ShouldAllowFavorite, bool IsTemporaryItem, bool bAllowRarityUpgrading);
	bool IsItemSlottedInCollectionBook(class UFortItem* Item);
	void HandleItemToInspectDestroyedBP();
	void HandleItemToInspectDestroyed();
	void HandleItemToInspectChangedBP();
	void HandleItemToInspectChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void HandleIsPreviewingChanged();
	void HandleDifferentItemToInspectSetBP();
	void HandleDifferentInspectionModeSetBP();
	class UWidget* GetWidgetForFramingViewedItem();
	class UFortItemInspectCycleWidget* GetCycleWidget();
	bool DoesItemHaveLegacyAlterations();
	void DoAlterationModification();
};

// 0x50 (0x260 - 0x210)
// Class FortniteUI.FortItemInspectCycleWidget
class UFortItemInspectCycleWidget : public UCommonUserWidget
{
public:
	UMulticastDelegateProperty_                  OnItemToRepresentChanged;                          // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UFortItemTileView>      ItemTileView;                                      // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItem>              ItemToRepresent;                                   // 0x228(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   PreviousItemActionRowHandle;                       // 0x230(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   NextItemActionRowHandle;                           // 0x240(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1BDD[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemInspectCycleWidget* GetDefaultObj();

	void SetupActionHandlers();
	void SetOwningItemInspectScreen(class UFortItemInspectionScreen* ItemInspect);
	void SetItemToRepresent(class UFortItem* NewItemToRepresent);
	void SelectPreviousItem();
	void SelectNextItem();
	void SelectItemWithOffset(int32 Offset);
	void OnItemCycled(class UFortItem* OldItem, class UFortItem* NewItem, int32 OffsetFromPreviousItem);
	class UFortItem* GetItemWithOffset_BP(int32 IndexOffset);
};

// 0x68 (0x390 - 0x328)
// Class FortniteUI.FortItemManagementCustomFilterModalWidget
class UFortItemManagementCustomFilterModalWidget : public UFortActivatablePanel
{
public:
	TWeakObjectPtr<class UFortItemManagementScreen> HostItemManagementScreen;                          // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<enum class EFortInventoryCustomFilter> AvailableFilters;                                  // 0x330(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TSet<enum class EFortInventoryCustomFilter>  LocalCustomFilterSet;                              // 0x340(0x50)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortItemManagementCustomFilterModalWidget* GetDefaultObj();

	void ToggleFilter(enum class EFortInventoryCustomFilter Filter);
	void OnEndCommitCustomFilter(bool bWasSuccessful);
	void OnCustomFilterSetUpdated();
	void OnBeginCommitCustomFilter();
	bool IsCustomFilterEnabled(enum class EFortInventoryCustomFilter Filter);
	void EnableAllFilters();
	void DisableAllFilters();
	void CommitCustomFilters();
};

// 0x168 (0x378 - 0x210)
// Class FortniteUI.FortItemManagementInventoryPanel
class UFortItemManagementInventoryPanel : public UCommonUserWidget
{
public:
	uint8                                        Pad_1C14[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CurrentFilterName;                                 // 0x260(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EInventoryContentSortType         CurrentSortType;                                   // 0x268(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C15[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonButton>             FilterTabButtonType;                               // 0x270(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCommonButtonStyle>        FilterTabButtonStyle;                              // 0x278(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FFortItemManagementInventoryFilterTabLabelInfo> FilterTabLabelInfoArray;                           // 0x280(0x10)(Edit, EditFixedSize, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UFortTabListWidgetBase*                FilterTabList;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonLoadGuard*                      TileViewLoadGuard;                                 // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemTileView*                     TileView;                                          // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                          CraftingPanel;                                     // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonLoadGuard*                      CraftingTileViewLoadGuard;                         // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemTileView*                     CraftingTileView;                                  // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                          StoragePanel;                                      // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonLoadGuard*                      StorageTileViewLoadGuard;                          // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemTileView*                     StorageTileView;                                   // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      MulchRestrictionReasonText;                        // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortItemCardSize                 SmallTileSize;                                     // 0x2E0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortItemCardSize                 LargeTileSize;                                     // 0x2E1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C1E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UFortItemManagementScreen> HostItemManagementScreen;                          // 0x2E4(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C1F[0x8C];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemManagementInventoryPanel* GetDefaultObj();

	void UpdateSchematicTiles();
	void ToggleTileSize();
	void TogglePrioritizeFavorites();
	void SwitchPanelFocus();
	void SetSortType(enum class EInventoryContentSortType SortType);
	void SetFilter(class FName FilterName);
	void RefreshCraftingSort();
	bool IsSwitchPanelAvailable();
	void HandleSetOfItemsToMulchChangedBP();
	void HandleQuickBarChangedBP(enum class EFortQuickBars QuickBarType);
	void HandleInventoryUpdatedEvent();
	void HandleFilterTabSelected(class FName TabNameID);
	void HandleFilterTabButtonCreated(class FName TabNameID, class UCommonButton* TabButton);
	void HandleDifferentSortTypeSetBP();
	void HandleDifferentItemManagementModeSetBP();
	void HandleDifferentFrontendInventoryFilterSetBP();
	void HandleDifferentFilterSetBP();
	void HandleCustomInventoryFilterChanged();
	void HandleCursorModeChangedBP(bool bCursorModeEnabled, class FName ActionName, class UUserWidget* CursorModeContentWidget);
	void HandleCursorModeChanged(bool bCursorModeEnabled, class FName ActionName, class UUserWidget* CursorModeContentWidget);
	void HandleCraftItemStarted();
	TArray<class UFortItemDefinition*> GetUpgradeItemDefinitionsForCurrentInventory();
	TArray<enum class EInventoryContentSortType> GetSupportedSortTypesForCurrentInventory();
	bool GetShouldPrioritizeFavorites();
	class FText GetQualifiedFilterDisplayName();
	void CycleSortType();
	void AdvanceSelection();
	void AddItemStackToMulch(class UFortItem* Item, int32 Count);
};

// 0x8 (0x318 - 0x310)
// Class FortniteUI.FortPopupMenu
class UFortPopupMenu : public UCommonPopupMenu
{
public:
	uint8                                        Pad_1C26[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortPopupMenu* GetDefaultObj();

};

// 0x8 (0x320 - 0x318)
// Class FortniteUI.FortItemManagementItemPopupMenu
class UFortItemManagementItemPopupMenu : public UFortPopupMenu
{
public:
	uint8                                        Pad_1C2E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemManagementItemPopupMenu* GetDefaultObj();

	void MulchItem();
	void HandleItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void HandleCompareAction();
	class UFortItemManagementItemTileButton* GetHostButton();
};

// 0x60 (0x918 - 0x8B8)
// Class FortniteUI.FortItemManagementItemTileButton
class UFortItemManagementItemTileButton : public UFortItemTileButton
{
public:
	TWeakObjectPtr<class UFortItemManagementScreen> HostItemManagementScreen;                          // 0x8B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasTheItemToDetail;                                // 0x8C0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         HasTheItemToCompareDetailsWith;                    // 0x8C1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         HasAnItemMarkedForMulching;                        // 0x8C2(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C45[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MulchCount;                                        // 0x8C4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                              NotCraftableOverlay;                               // 0x8C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMenuAnchor*                           PopupMenuAnchor;                                   // 0x8D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         ShowCollectionBookIndicator;                       // 0x8D8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C47[0x3F];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemManagementItemTileButton* GetDefaultObj();

	void OnSlotItemComplete(class UFortAccountItem* SlottedItem, class FName SlotId);
	void HandleShowCollectionBookIndicatorChanged();
	void HandleItemMulchStateChanged();
	void HandleItemChangedBP();
	void HandleHasItemToDetailChanged();
	void HandleHasItemToCompareDetailsWithChanged();
	void HandleEquipSlotChanged(int32 EquipSlot);
	void HandleDifferentItemManagementModeSetBP();
	class UWidget* GetPopupMenu();
	enum class EFortItemManagementMode GetItemManagementMode();
};

// 0x18 (0x290 - 0x278)
// Class FortniteUI.FortItemManagementItemDetailsPanel
class UFortItemManagementItemDetailsPanel : public UFortItemDetailsHostPanel
{
public:
	bool                                         HasItemMarkedForMulching;                          // 0x278(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C4E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UFortItemManagementScreen> HostItemManagementScreen;                          // 0x27C(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C4F[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemManagementItemDetailsPanel* GetDefaultObj();

	void HandleHostSet();
	void HandleHasItemMarkedForMulchingChanged();
};

// 0x18 (0x228 - 0x210)
// Class FortniteUI.FortItemManagementMulchDetailsPanel
class UFortItemManagementMulchDetailsPanel : public UCommonUserWidget
{
public:
	class UFortItemQuantityListBase*             ResourceList;                                      // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItemManagementScreen> HostItemManagementScreen;                          // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C60[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemManagementMulchDetailsPanel* GetDefaultObj();

	bool IsSpaceAvailableForMulch();
	void HandleSetOfItemsToMulchChangedBP();
	void HandleHostSet();
	TArray<class UFortItem*> GetItemsToMulch();
	TArray<int32> GetItemCountsToMulch();
	void CommitMulch();
};

// 0x30 (0x240 - 0x210)
// Class FortniteUI.FortItemManagementModeDetailsPanel
class UFortItemManagementModeDetailsPanel : public UCommonUserWidget
{
public:
	class UCommonWidgetSwitcher*                 ModeWidgetSwitcher;                                // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemDetailsActivatablePanel*      DetailsModeItemDetailsPanel;                       // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemDetailsActivatablePanel*      ComparisonModeItemDetailsPanel;                    // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemDetailsActivatablePanel*      MulchModeItemDetailsPanel;                         // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItemManagementScreen> HostItemManagementScreen;                          // 0x230(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C63[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemManagementModeDetailsPanel* GetDefaultObj();

	void HandleHostSet();
	void HandleDifferentItemManagementModeSetBP();
	enum class EFortItemManagementMode GetItemManagementMode();
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortFrontendInventoryFilterFunctionLibrary
class UFortFrontendInventoryFilterFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UFortFrontendInventoryFilterFunctionLibrary* GetDefaultObj();

	class FText ToText(enum class EFortFrontendInventoryFilter FrontendInventoryFilter);
};

// 0x188 (0x4B0 - 0x328)
// Class FortniteUI.FortItemManagementScreen
class UFortItemManagementScreen : public UFortActivatablePanel
{
public:
	UMulticastDelegateProperty_                  OnItemViewRefreshed;                               // 0x328(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CDB[0xC0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EFortItemManagementMode           Mode;                                              // 0x3F8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortFrontendInventoryFilter      FrontendInventoryFilter;                           // 0x3F9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReadOnlyModeWIFE;                                 // 0x3FA(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ConsumeItemRequestInProgress;                      // 0x3FB(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CDD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemManagementInventoryPanel*     InventoryPanel;                                    // 0x400(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemManagementModeDetailsPanel*   ModeDetailsPanel;                                  // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortItem>              ItemToDetail;                                      // 0x410(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1CDE[0x58];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UFortMulchConfirmationModalWidget> MulchConfirmationModalClass;                       // 0x470(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortItemManagementCustomFilterModalWidget> CustomFilterModalClass;                            // 0x478(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1CE0[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMulchConfirmationModalWidget*     MulchConfirmationModal;                            // 0x498(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortItemManagementCustomFilterModalWidget* CustomFilterModal;                                 // 0x4A0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1CE1[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemManagementScreen* GetDefaultObj();

	void TransferItem(class UFortItem* Item);
	void ToggleShowCollectionBookIndicator();
	void ShowMulchConfirmationModal();
	void ShowCustomFilterModal();
	void SetFrontendInventoryFilter(enum class EFortFrontendInventoryFilter FrontendInventoryFilter);
	void SetConsumeItemRequestInProgress(bool InProgress);
	void RequestPopupMenuForSelectedItem();
	void NotifyPanelDeactivated();
	void NotifyPanelActivated();
	bool IsScreenWIFE();
	void InspectItem(class UFortItem* Item);
	void HideMulchConfirmationModal();
	void HideCustomFilterModal();
	bool HasItemBeenSeen(class UFortAccountItem* AccountItem);
	void HandleTransferItemBP(class UFortItem* Item);
	void HandleMulchQuantitySelection(class UFortItem* Item);
	void HandleItemToDetailChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void HandleItemToCompareWithChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void HandleInspectItemBP(class UFortItem* Item);
	void HandleEquipItemBP(class UFortItem* Item);
	void HandleDropItemBP(class UFortItem* Item);
	void HandleDifferentItemManagementModeSetBP();
	void HandleCraftItemBP(class UFortSchematicItem* SchematicItem);
	void HandleConsumeItemBP(class UFortConsumableAccountItem* ConsumableItem);
	bool GetShouldShowCollectionBookIndicator();
	int32 GetNumItemsToMulch();
	class UFortItem* GetItemToDetail();
	class UFortItem* GetItemToCompareDetailsWith();
	TArray<class UFortItem*> GetItemsToMulchBP();
	void EquipItem(class UFortItem* Item);
	void EnterMulchMode(class UFortItem* ItemToMulch);
	void EnterDetailsMode(class UFortItem* ItemToDetail);
	void EnterComparisonMode(class UFortItem* ItemToCompareDetailsWith);
	void DropItem(class UFortItem* Item);
	void CycleSortType();
	void CraftItem(class UFortSchematicItem* SchematicItem);
	void ConsumeItem(class UFortConsumableAccountItem* ConsumableItem);
	bool CanRequestPopupMenuForSelectedItem();
	bool CanItemBeMulched(class UFortItem* Item, class FText* OutRestrictionReason);
	void CancelInventoryPanelTileViewRefresh();
};

// 0x28 (0x238 - 0x210)
// Class FortniteUI.FortItemQuantityListEntryBase
class UFortItemQuantityListEntryBase : public UCommonUserWidget
{
public:
	uint8                                        Pad_1D02[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Quantity;                                          // 0x218(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D03[0x1C];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemQuantityListEntryBase* GetDefaultObj();

	void SetPreviewData(struct FFortItemEntryPreviewData& PreviewData);
	void SetItemInstanceAndQuantity(struct FFortItemInstanceQuantityPair& ItemQuantityPair, bool ShouldTreatAsReset);
	void SetItemDefinitionAndQuantity(struct FFortItemQuantityPair& ItemQuantityPair, bool ShouldTreatAsReset);
	void PreviewStarted();
	void PreviewEnded();
	bool IsBeingPreviewed();
	void HandleDifferentItemOrQuantitySetBP(bool IsBeingReset);
	void GetPreviewData(struct FFortItemEntryPreviewData* OutPreviewData);
	class UFortItem* GetItemInstance();
	class UFortItemDefinition* GetItemDefinition();
	void ClearPreviewData();
};

// 0x80 (0x290 - 0x210)
// Class FortniteUI.FortItemQuantityListBase
class UFortItemQuantityListBase : public UCommonUserWidget
{
public:
	enum class EFortItemInspectionMode           CurrentInspectMode;                                // 0x210(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D1D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UFortItemQuantityListEntryBase> ListEntryWidgetType;                               // 0x218(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class UObject*, class UFortItemQuantityListEntryBase*> ItemObjectToWidgetMap;                             // 0x220(0x50)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D1E[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemQuantityListBase* GetDefaultObj();

	void SetItemToCompareDefinitionsAndQuantities(TArray<struct FFortItemQuantityPair>& ItemToCompareQuantityPairs);
	void SetItemInstancesAndQuantities(TArray<struct FFortItemInstanceQuantityPair>& ItemQuantityPairs, bool ShouldResetWidgets);
	void SetItemInspectMode(enum class EFortItemInspectionMode InspectMode);
	void SetItemDefinitionsAndQuantities(TArray<struct FFortItemQuantityPair>& ItemQuantityPairs, bool ShouldResetWidgets);
	void OnItemInspectModeChanged();
	bool IsEmptyList();
	TArray<class UFortItemDefinition*> GetItemDefinitions();
	void AddListEntry(class UFortItemQuantityListEntryBase* ListEntry);
};

// 0x368 (0x578 - 0x210)
// Class FortniteUI.FortItemRatingIndicator
class UFortItemRatingIndicator : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortItem>              ItemToRepresent;                                   // 0x210(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UFortItem>              ItemToCompareWith;                                 // 0x218(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortMultiSizeBrush                   RatingTypeIcon;                                    // 0x220(0x330)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	int32                                        RatingValue;                                       // 0x550(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortBuffState                    ComparisonResult;                                  // 0x554(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         ShouldAppearEnchanted;                             // 0x555(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D26[0x22];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemRatingIndicator* GetDefaultObj();

	void SetItemViewContext(TScriptInterface<class IFortItemViewContextInterface> ItemViewContext);
	void SetItemToRepresent(class UFortItem* ItemToRepresent);
	void SetItemToCompareWith(class UFortItem* ItemToCompareWith);
	void HandleViewModelChanged();
};

// 0x58 (0x380 - 0x328)
// Class FortniteUI.FortItemReceivedWidgetBase
class UFortItemReceivedWidgetBase : public UFortActivatablePanel
{
public:
	uint8                                        Pad_1D38[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortReceivedItemLootInfo>     ItemDefs;                                          // 0x340(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UFortGiftBoxItem*                      GiftBoxItem;                                       // 0x350(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FromUsername;                                      // 0x358(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        HeaderContainer;                                   // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScrollBox*                            GiftScrollBox;                                     // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UItemCardWidgetBase>       ItemCardClass;                                     // 0x378(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortItemReceivedWidgetBase* GetDefaultObj();

	void ShowGiftBox();
	void SetGiftBoxItem(class UFortGiftBoxItem* GiftBoxItem);
	void SetAlignmentOnSlots(class UScrollBox* Widget);
	void SetAlignmentOnSlot(class UScrollBox* Widget, int32 Index);
	void OnGiftBoxItemSetInternal();
	void OnGiftBoxItemSet();
	class UFortItem* GetTemporaryInstance(struct FFortReceivedItemLootInfo& ItemReference);
};

// 0x10 (0x390 - 0x380)
// Class FortniteUI.FortItemReceivedScreen
class UFortItemReceivedScreen : public UFortItemReceivedWidgetBase
{
public:
	UMulticastDelegateProperty_                  OnFinalGiftingComplete;                            // 0x380(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortItemReceivedScreen* GetDefaultObj();

};

// 0x10 (0x390 - 0x380)
// Class FortniteUI.FortItemReceivedPrePrompt
class UFortItemReceivedPrePrompt : public UFortItemReceivedWidgetBase
{
public:
	UMulticastDelegateProperty_                  OnPrePromptClosed;                                 // 0x380(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortItemReceivedPrePrompt* GetDefaultObj();

};

// 0x18 (0x220 - 0x208)
// Class FortniteUI.ItemReceivedHeaderBase
class UItemReceivedHeaderBase : public UUserWidget
{
public:
	class UFortGiftBoxItem*                      GiftBoxItem;                                       // 0x208(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FromUsername;                                      // 0x210(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UItemReceivedHeaderBase* GetDefaultObj();

	void InitFromGiftBoxItem();
};

// 0x48 (0x70 - 0x28)
// Class FortniteUI.FortGiftInfo
class UFortGiftInfo : public UObject
{
public:
	struct FGiftBoxInfo                          GiftBoxInfo;                                       // 0x28(0x48)(BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortGiftInfo* GetDefaultObj();

};

// 0x10 (0x430 - 0x420)
// Class FortniteUI.ItemCardWidgetBase
class UItemCardWidgetBase : public UButton
{
public:
	class UFortGiftInfo*                         LootInfo;                                          // 0x420(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortMultiSizeItemCard*                FortMultiSizeItemCard_Widget;                      // 0x428(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UItemCardWidgetBase* GetDefaultObj();

	void SetLootInfo(class UFortGiftInfo* LootInfo);
	void OnLootInfoSet();
};

// 0x0 (0x78 - 0x78)
// Class FortniteUI.FortNullItem
class UFortNullItem : public UFortItem
{
public:

	static class UClass* StaticClass();
	static class UFortNullItem* GetDefaultObj();

};

// 0x0 (0x2F8 - 0x2F8)
// Class FortniteUI.FortItemTransform
class UFortItemTransform : public UCommonActivatablePanel
{
public:

	static class UClass* StaticClass();
	static class UFortItemTransform* GetDefaultObj();

	void ProcessPendingSeenTransformKeys();
	void OnRequestCloseItemPicker();
	void LogSelectedKey(class UFortItem* SelectedKey);
};

// 0x178 (0x1A0 - 0x28)
// Class FortniteUI.FortItemView
class UFortItemView : public UObject
{
public:
	uint8                                        Pad_1D62[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   UnifiedZoomInputAction;                            // 0x30(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   ZoomOutInputAction;                                // 0x40(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   ZoomInInputAction;                                 // 0x50(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   RotateInputAction;                                 // 0x60(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D64[0x120];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDataTableRowHandle>           RegisteredInputActions;                            // 0x190(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortItemView* GetDefaultObj();

	void UnregisterInputActions();
	void SetSettings(struct FFortItemViewSettings& Settings);
	void SetSceneComponentToAffect(class USceneComponent* Component);
	void SetOwningPanel(class UCommonActivatablePanel* Panel);
	void RestoreInitialTransform();
	void RegisterInputActions();
	struct FFortItemViewSettings GetSettings();
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortItemViewContextInterface
class IFortItemViewContextInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IFortItemViewContextInterface* GetDefaultObj();

};

// 0x38 (0x818 - 0x7E0)
// Class FortniteUI.FortItemWidget
class UFortItemWidget : public UFortBaseButton
{
public:
	UDelegateProperty_                           OnGetItemToCompareDelegate;                        // 0x7E0(0x10)(ZeroConstructor, InstancedReference, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class FName                                  CooldownMaterialParameterName;                     // 0x7F0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              CooldownMaterial;                                  // 0x7F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LastCooldownTimeInSeconds;                         // 0x800(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LastCooldownPct;                                   // 0x804(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        LastIsActivatable : 1;                             // Mask: 0x1, PropSize: 0x10x808(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_1D3 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1DC8[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        QuantityOverride;                                  // 0x814(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortItemWidget* GetDefaultObj();

	void SetOnGetItemToCompareDelegate(UDelegateProperty_ InDelegate);
	void SetItem(class UFortItem* InItem, int32 QuantityOverride);
	void SetCooldownMaterial(class UMaterialInstanceDynamic* NewCooldownMaterial);
	void OnGetItemToCompare__DelegateSignature(class UFortItem** ItemToCompare);
	void OnFortItemUpdated(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void OnFortItemDestroyed();
	bool IsSlotted();
	bool IsSchematic();
	bool IsItemValid();
	bool IsInventoryOverflowItem();
	bool IsEquipped();
	bool HasTertiaryCategory();
	bool HasSecondaryCategory();
	bool HasLevel();
	bool HasDurability();
	float GetType();
	int32 GetStackCount();
	enum class EFortRarity GetRarity();
	int32 GetLevel();
	class UFortItem* GetItemToCompare();
	class UFortItem* GetItem();
	class UTexture* GetIconTexture(enum class EFortBrushSize InBrushSize);
	float GetDurability();
	class FText GetDisplayName();
	class FText GetDescription();
	void BPOnItemSet(class UFortItem* NewItem);
	void BPOnItemChanged();
	void BPOnCooldownSecondsChanged(int32 NewCooldownSeconds);
	void BPOnActivatableChanged(bool bNewActivatable);
};

// 0x8 (0x218 - 0x210)
// Class FortniteUI.FortJournalQuestDetails
class UFortJournalQuestDetails : public UCommonUserWidget
{
public:
	class UFortQuestItem*                        CurrentQuest;                                      // 0x210(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortJournalQuestDetails* GetDefaultObj();

	void SetCurrentQuest(class UFortQuestItem* InCurrentQuest);
	void HandleCurrentQuestChangedBP();
	void GetVisibleObjectives(TArray<class UFortQuestObjectiveInfo*>* VisibleObjectives);
	void GetRewards(TArray<struct FFortItemInstanceQuantityPair>* OutRewards, TArray<struct FFortItemInstanceQuantityPair>* OutSelectableRewards);
	void GetFutureObjectives(TArray<class UFortQuestObjectiveInfo*>* FutureObjectives);
	enum class EFortTheaterMapTileType GetActiveMissionTileType();
	bool CanPlayQuest();
	bool CanPartyLeaderPlayQuest();
	bool CanGotoQuest();
};

// 0x10 (0x220 - 0x210)
// Class FortniteUI.FortJournalQuestProgressBar
class UFortJournalQuestProgressBar : public UCommonUserWidget
{
public:
	uint8                                        Pad_1E14[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UFortQuestObjectiveInfo> QuestObjectiveInfo;                                // 0x218(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortJournalQuestProgressBar* GetDefaultObj();

	void GetProgressDetails(class FText* OutNumerator, class FText* OutDenominator, float* OutFraction);
};

// 0x70 (0x280 - 0x210)
// Class FortniteUI.FortKeybindWidget
class UFortKeybindWidget : public UCommonUserWidget
{
public:
	class FName                                  BoundAction;                                       // 0x210(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  BoundKeyFallback;                                  // 0x218(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECommonInputType                  InputTypeOverride;                                 // 0x230(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECommonGamepadType                GamepadTypeOverride;                               // 0x231(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForcedHoldKeybind;                                // 0x232(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortKeybindForcedHoldStatus      ForcedHoldKeybindStatus;                           // 0x233(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsHoldKeybind;                                    // 0x234(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShowKeybindBorder;                                // 0x235(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShowTimeCountDown;                                // 0x236(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E2F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  BoundKey;                                          // 0x238(0x18)(BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                HoldKeybindImage;                                  // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      TextCountdown;                                     // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetSwitcher*                       KeyCountdownSwitcher;                              // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  PercentageMaterialParameterName;                   // 0x268(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              ProgressPercentageMID;                             // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E33[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortKeybindWidget* GetDefaultObj();

	void UpdateKeybindWidget();
	void Update();
	void StopHoldProgress(class FName HoldActionName, bool bCompletedSuccessfully);
	void StartHoldProgress(class FName HoldActionName, float HoldDuration);
	void SetShowProgressCountDown(bool bShow);
	void SetForcedHoldKeybindStatus(enum class EFortKeybindForcedHoldStatus InForcedHoldKeybindStatus);
	void SetForcedHoldKeybind(bool InForcedHoldKeybind);
	void SetBoundAction(class FName NewBoundAction);
	bool IsHoldKeybind();
	bool GetBrushForKey(enum class EFortBrushSize BrushSize, struct FSlateBrush* Brush);
};

// 0x20 (0x230 - 0x210)
// Class FortniteUI.FortLayoutQuestNode
class UFortLayoutQuestNode : public UCommonUserWidget
{
public:
	class UFortQuestMapQuestTile*                QuestTile;                                         // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        QuestNodeIndex;                                    // 0x218(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E37[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortLayoutQuestNode* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortLeaderboardContext
class UFortLeaderboardContext : public UBlueprintContextBase
{
public:

	static class UClass* StaticClass();
	static class UFortLeaderboardContext* GetDefaultObj();

	bool CanShowStats();
	bool CanShowLeaderboards();
	bool CanShowGlobalLeaderboards();
};

// 0x10 (0x898 - 0x888)
// Class FortniteUI.FortLeaderboardEntryWidget
class UFortLeaderboardEntryWidget : public UCommonButton
{
public:
	uint8                                        Pad_1E3D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               LeaderboardEntryObject;                            // 0x890(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortLeaderboardEntryWidget* GetDefaultObj();

};

// 0x18 (0x128 - 0x110)
// Class FortniteUI.FortLegacySlateBridgeWidget
class UFortLegacySlateBridgeWidget : public UNativeWidgetHost
{
public:
	enum class EFortLegacySlateWidget            ContainedWidgetType;                               // 0x110(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E42[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DPIScaleFactor;                                    // 0x114(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UDelegateProperty_                           OnClose;                                           // 0x118(0x10)(ZeroConstructor, Transient, InstancedReference, NoDestructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortLegacySlateBridgeWidget* GetDefaultObj();

	void UpdateSlateWidget(enum class EFortLegacySlateWidget SlateWidgetType);
	void SetOnCloseHandler(UDelegateProperty_& OnCloseHandler);
};

// 0x88 (0x188 - 0x100)
// Class FortniteUI.FortLevelIndicator
class UFortLevelIndicator : public UWidget
{
public:
	TWeakObjectPtr<class UFortItem>              ItemToRepresent;                                   // 0x100(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UFortItem>              ItemForComparison;                                 // 0x108(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldShowLabel;                                   // 0x110(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E53[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonTextStyle>          TextStyle;                                         // 0x118(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldShowMaximumLevel;                            // 0x120(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E55[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentLevel;                                      // 0x124(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaximumLevel;                                      // 0x128(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsComparingLevels;                                 // 0x12C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    ComparisonResultIndicatorSize;                     // 0x12D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E57[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentLevelForComparison;                         // 0x130(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaximumLevelForComparison;                         // 0x134(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonTextBlock*                      LabelTextBlock;                                    // 0x138(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonNumericTextBlock*               CurrentLevelNumericTextBlock;                      // 0x140(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E59[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      DivisionOperatorTextBlock;                         // 0x158(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonNumericTextBlock*               MaximumLevelNumericTextBlock;                      // 0x160(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E5A[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortLevelIndicator* GetDefaultObj();

	void SetShouldShowMaximumLevel(bool InShouldShowMaximumLevel);
	void SetItemToRepresent(class UFortItem* ItemToRepresent);
	void SetItemForComparison(class UFortItem* ItemForComparison);
	void HandleItemToRepresentChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void HandleItemForComparisonChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
};

// 0x0 (0x210 - 0x210)
// Class FortniteUI.FortLiveStreamGrantWindowExpires
class UFortLiveStreamGrantWindowExpires : public UCommonUserWidget
{
public:

	static class UClass* StaticClass();
	static class UFortLiveStreamGrantWindowExpires* GetDefaultObj();

};

// 0x18 (0x310 - 0x2F8)
// Class FortniteUI.FortLobby
class UFortLobby : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_1E68[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UOverlay*                              OverlayMain;                                       // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortLobby* GetDefaultObj();

	void OnPlayerClicked(int32 PlayerIndex);
	void OnNavigationRight();
	void OnNavigationLeft();
	void OnEndCursorOverPlayer(int32 PlayerIndex);
	void OnBeginCursorOverPlayer(int32 PlayerIndex);
};

// 0x80 (0x378 - 0x2F8)
// Class FortniteUI.FortLoginCredentialSelect
class UFortLoginCredentialSelect : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_1E6A[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         Button_Epic;                                       // 0x330(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Facebook;                                   // 0x338(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Google;                                     // 0x340(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_PS;                                         // 0x348(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_XB;                                         // 0x350(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Erebus;                                     // 0x358(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_CreateAccount;                              // 0x360(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_NoXB;                                       // 0x368(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_NoSony;                                     // 0x370(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortLoginCredentialSelect* GetDefaultObj();

};

// 0x40 (0x338 - 0x2F8)
// Class FortniteUI.FortLoginResultWidget
class UFortLoginResultWidget : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_1E70[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonTextStyle>          ErrorStyle;                                        // 0x308(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UCommonTextStyle>          NoErrorStyle;                                      // 0x310(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E71[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      Text_Title;                                        // 0x320(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Description;                                  // 0x328(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Continue;                                   // 0x330(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortLoginResultWidget* GetDefaultObj();

};

// 0x28 (0x320 - 0x2F8)
// Class FortniteUI.FortLoginStatus
class UFortLoginStatus : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_1E7E[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      Text_Title;                                        // 0x308(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Status;                                       // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Status;                                     // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortLoginStatus* GetDefaultObj();

	void SetTitleText(class FText& TitleText);
	void SetLoginStatus(class FText& InLoginStatus);
};

// 0x78 (0x288 - 0x210)
// Class FortniteUI.FortLoginUnavailable
class UFortLoginUnavailable : public UCommonUserWidget
{
public:
	class FText                                  DisableMessage;                                    // 0x210(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  DisableButtonMsg;                                  // 0x228(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  InviteClosedMessage;                               // 0x240(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  InviteButtonMsg;                                   // 0x258(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1E87[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      Text_Title;                                        // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_DisplayMsg;                                   // 0x280(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortLoginUnavailable* GetDefaultObj();

	void OnMessageSet(bool bDisableMessage);
	void LaunchSpecificURL();
};

// 0x68 (0x360 - 0x2F8)
// Class FortniteUI.FortMainTabsScreenBase
class UFortMainTabsScreenBase : public UCommonActivatablePanel
{
public:
	TMap<enum class EFortUIFeature, class FName> FeaturesTabsMap;                                   // 0x2F8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        TopTabContainer;                                   // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortTabListWidgetBase*                TopTabList;                                        // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1EA9[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortMainTabsScreenBase* GetDefaultObj();

	void HandleRefreshSkillTreeNodePage();
	void HandleMainTabSelected(class FName TabNameID);
	void HandleMainTabCreated(class FName TabNameID, class UCommonButton* TabButton);
	void HandleFeatureStateChanged(enum class EFortUIFeature ChangedFeature, enum class EFortUIFeatureState NewState, enum class EFortUIFeatureStateReason Reason);
	void HandleFeatureNavigateRequest(enum class EFortUIFeature Feature);
	void ConstructTabs();
};

// 0x118 (0x140 - 0x28)
// Class FortniteUI.FortMaterialProgressBarStyle
class UFortMaterialProgressBarStyle : public UObject
{
public:
	class FName                                  BackgroundColorParamName;                          // 0x28(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BackgroundColor;                                   // 0x30(0x10)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortMaterialProgressBarSectionStyle  BarSectionStyles[0x4];                             // 0x40(0x100)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortMaterialProgressBarStyle* GetDefaultObj();

};

// 0x158 (0x368 - 0x210)
// Class FortniteUI.FortMaterialProgressBar
class UFortMaterialProgressBar : public UCommonUserWidget
{
public:
	TSubclassOf<class UFortMaterialProgressBarStyle> Style;                                             // 0x210(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  BackgroundColorParamName;                          // 0x218(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          BackgroundColor;                                   // 0x220(0x10)(Edit, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortMaterialProgressBarSectionOverflowBehavior OverflowBehavior;                                  // 0x230(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1EC2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortMaterialProgressBarSectionInfo   BarSectionInfo[0x4];                               // 0x238(0x120)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UCommonBorder*                         ProgressBar;                                       // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              ProgressBarMID;                                    // 0x360(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortMaterialProgressBar* GetDefaultObj();

	void SetStyle(TSubclassOf<class UFortMaterialProgressBarStyle> BarStyle);
	void SetProgressBarSectionPercent(enum class EFortMaterialProgressBarSection BarSection, float Percent);
	void SetProgressBarSectionColor(enum class EFortMaterialProgressBarSection BarSection, const struct FLinearColor& Color, enum class EFortMaterialProgressBarSectionColorNumber ColorNumber);
	void SetBackgroundColor(const struct FLinearColor& Color);
};

// 0x38 (0x248 - 0x210)
// Class FortniteUI.FortMicIndicatorWidget
class UFortMicIndicatorWidget : public UCommonUserWidget
{
public:
	uint8                                        Pad_1ED5[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortMicIndicatorWidget* GetDefaultObj();

	void SetPlayerUniqueId(struct FUniqueNetIdRepl& InPlayerUniqueId);
	void OnPlayerTalkingChanged(bool bIsTalking);
	void OnPlayerMuted(bool bIsMuted);
	void OnPlayerMicAvailable(bool bIsTalking);
};

// 0x40 (0x68 - 0x28)
// Class FortniteUI.FortMissionActivationInfo
class UFortMissionActivationInfo : public UObject
{
public:
	bool                                         bIsMissionActivationVoteActive;                    // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDifficultyIncreaseVoteActive;                   // 0x29(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EF5[0x26];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerController*                 FortPC;                                            // 0x50(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AFortGameStateZone*                    GameStateZone;                                     // 0x58(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                           DifficultyIncreaseBluGloCurve;                     // 0x60(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortMissionActivationInfo* GetDefaultObj();

	class FText TimeSecondsToText(float InSeconds);
	bool IsPlayerVoteInstigator(enum class EFortVoteType VoteType);
	void HandleMissionActivationVoteUpdate(enum class EFortVoteType VoteType, enum class EFortVoteStatus VoteStatus, int32 VoteResult, TArray<struct FVoter>& Voters);
	void HandleDifficultyIncreaseVoteUpdate(enum class EFortVoteType VoteType, enum class EFortVoteStatus VoteStatus, int32 VoteResult, TArray<struct FVoter>& Voters);
	int32 GetStartObjectiveBluGloRequirement();
	class UFortMissionInfo* GetPrimaryMissionInfo();
	class AFortMission* GetPrimaryMission();
	int32 GetIncreaseDifficultyBluGloRequirement();
	void GetDeltaRewards(int32 BaseDifficultyIncreaseTier, int32 ComparedDifficultyIncreaseTier, TArray<struct FFortItemDelta>* DeltaRewards);
	bool DoesPrimaryMissionContainTags(struct FGameplayTagContainer& Tags);
};

// 0x8 (0x218 - 0x210)
// Class FortniteUI.FortMissionActivationWidgetPanel
class UFortMissionActivationWidgetPanel : public UCommonUserWidget
{
public:
	class UFortMissionActivationInfo*            InfoObject;                                        // 0x210(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortMissionActivationWidgetPanel* GetDefaultObj();

	void SetInfoObject(class UFortMissionActivationInfo* NewInfoObject);
	void InfoObjectUpdated();
};

// 0x18 (0x340 - 0x328)
// Class FortniteUI.FortMissionActivationWidget
class UFortMissionActivationWidget : public UFortActivatablePanel
{
public:
	class UFortMissionActivationInfo*            InfoObject;                                        // 0x328(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                           DifficultyIncreaseBluGloCurve;                     // 0x330(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F04[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortMissionActivationWidget* GetDefaultObj();

	void SetState(enum class EFortMissionActivationWidgetState NewState, bool bForceUpdate);
	void OnStateUpdated(enum class EFortMissionActivationWidgetState ActiveState, enum class EFortMissionActivationWidgetState PreviousState);
	enum class EFortMissionActivationWidgetState GetCurrentState();
};

// 0x20 (0x318 - 0x2F8)
// Class FortniteUI.FortMissionSelect
class UFortMissionSelect : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_1F06[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnNavigation;                                      // 0x308(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortMissionSelect* GetDefaultObj();

	bool NavigateMissionTiles(enum class EUINavigation Direction);
};

// 0x30 (0x268 - 0x238)
// Class FortniteUI.FortMissionTracker
class UFortMissionTracker : public UFortHUDElementWidget
{
public:
	class UFortMissionTrackerList*               MissionTrackerList;                                // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortQuestTrackerList*                 MainQuestList;                                     // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortQuestTrackerList*                 PinnedQuestsList;                                  // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               AdditionalEntriesIndicator;                        // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonNumericTextBlock*               DebugHeightEstimate;                               // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        AllowedSize;                                       // 0x260(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnforceHeightLimit;                               // 0x264(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSizeEstimateNeedsRefresh;                         // 0x265(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F08[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortMissionTracker* GetDefaultObj();

	void RefreshSizeEstimate();
	void HandleSizeEstimateChanged(class UObject* ChangedElement);
	void HandleDebugHUDObjectiveHeightChanged(bool bIsDebugging);
};

// 0xA8 (0x2B8 - 0x210)
// Class FortniteUI.FortMissionTrackerEntry
class UFortMissionTrackerEntry : public UCommonUserWidget
{
public:
	uint8                                        Pad_1F0A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnMissionEntryVisibilityChanged;                   // 0x218(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortMissionTrackerSubEntry> SubEntryClass;                                     // 0x228(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bConfigureAsHUD;                                   // 0x230(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHiddenByHeightConstraint;                         // 0x231(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F0B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      MissionNameText;                                   // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                          ObjectivesListBox;                                 // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                UpperSeparator;                                    // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AFortMission*                          TrackedMission;                                    // 0x250(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnSizeEstimateChangedDelegate;                     // 0x258(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F0C[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortMissionTrackerEntry* GetDefaultObj();

	void UpdateVisibility();
	void OnMissionSet();
	void HandleObjectivesChanged();
	void HandleMissionInfoSet();
};

// 0x90 (0x2A0 - 0x210)
// Class FortniteUI.FortMissionTrackerList
class UFortMissionTrackerList : public UCommonUserWidget
{
public:
	uint8                                        Pad_1F0E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UFortMissionTrackerEntry>  MissionEntryClass;                                 // 0x218(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bConfigureAsHUD;                                   // 0x220(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F0F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBox*                          MissionsListBox;                                   // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnMissionTrackerListVisibilityChanged;             // 0x230(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnSizeEstimateChangedDelegate;                     // 0x240(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F10[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortMissionTrackerList* GetDefaultObj();

	void UpdateVisibility();
	void HandleSizeEstimateChanged(class UObject* ChangedElement);
	void HandleMissionsUpdated();
};

// 0x38 (0x248 - 0x210)
// Class FortniteUI.FortMissionTrackerSubEntry
class UFortMissionTrackerSubEntry : public UCommonUserWidget
{
public:
	uint8                                        Pad_1F11[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnMissionSubEntryVisibilityChanged;                // 0x218(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	bool                                         bConfigureAsHUD;                                   // 0x228(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHiddenByHeightConstraint;                         // 0x229(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F12[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortObjectiveBase*                    TrackedObjective;                                  // 0x230(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnSizeEstimateChangedDelegate;                     // 0x238(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortMissionTrackerSubEntry* GetDefaultObj();

	void OnObjectiveSet();
	void OnHiddenByHeightConstraintChanged();
	void NotifyVisibilityChanged();
};

// 0x10 (0x40 - 0x30)
// Class FortniteUI.FortModalContainerData
class UFortModalContainerData : public UDataAsset
{
public:
	TArray<struct FFortModalContainerSizeEntry>  Entries;                                           // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortModalContainerData* GetDefaultObj();

};

// 0x58 (0x158 - 0x100)
// Class FortniteUI.FortModalContainerWidget
class UFortModalContainerWidget : public UWidget
{
public:
	uint8                                        Pad_1F14[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EModalContainerSize               SizeConstraint;                                    // 0x108(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F15[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortModalContainerSizeEntry>  DefaultSizeEntries;                                // 0x110(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UFortModalContainerData*               OverrideSizeEntries;                               // 0x120(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               TopContent;                                        // 0x128(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               MiddleContent;                                     // 0x130(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               BottomContent;                                     // 0x138(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                               BackgroudContent;                                  // 0x140(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F16[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortModalContainerWidget* GetDefaultObj();

};

// 0x30 (0x328 - 0x2F8)
// Class FortniteUI.FortMOTDWidget
class UFortMOTDWidget : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_1F17[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      Text_Header;                                       // 0x308(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Body;                                         // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Close;                                      // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UScrollBox*                            ScrollBox;                                         // 0x320(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortMOTDWidget* GetDefaultObj();

};

// 0x28 (0x240 - 0x218)
// Class FortniteUI.FortMovieWidget
class UFortMovieWidget : public UFortUserWidget
{
public:
	UMulticastDelegateProperty_                  OnMediaOpened;                                     // 0x218(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UMediaPlayer*                          MediaPlayer;                                       // 0x228(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMediaTexture*                         MediaTexture;                                      // 0x230(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMediaSoundComponent*                  SoundComponent;                                    // 0x238(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortMovieWidget* GetDefaultObj();

	bool SetMediaSource(class UMediaSource* InMediaSource);
	void RequestStopMovie();
	void RequestPlayMovie(bool bShouldRewind);
	void MediaDimensionsUpdated(float NewWidth, float NewHeight);
	bool HasPlayerForSource(class UMediaSource* InMediaSource);
	class UMediaTexture* GetMediaTexture();
	class UMediaSoundComponent* GetMediaSoundComponent();
	class UMediaPlayer* GetMediaPlayer();
};

// 0x230 (0x260 - 0x30)
// Class FortniteUI.FortMtxOfferData
class UFortMtxOfferData : public UPrimaryDataAsset
{
public:
	class FText                                  DisplayName;                                       // 0x30(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  ShortDisplayName;                                  // 0x48(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  ShortDescription;                                  // 0x60(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FFortItemQuantityPair>         GrantOverride;                                     // 0x78(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FSlateBrush                           TileImage;                                         // 0x88(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BadgeImage;                                        // 0x110(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DetailsImage;                                      // 0x198(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FFortMtxDetailsAttribute>      DetailsAttributes;                                 // 0x220(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FFortMtxGradient                      Gradient;                                          // 0x230(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          Background;                                        // 0x250(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortMtxOfferData* GetDefaultObj();

};

// 0xA8 (0x3D0 - 0x328)
// Class FortniteUI.FortMtxOfferDetailsBase
class UFortMtxOfferDetailsBase : public UFortActivatablePanel
{
public:
	class UFortMtxOfferData*                     OfferDisplayAsset;                                 // 0x328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMtxPackage                           MtxOffer;                                          // 0x330(0xA0)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortMtxOfferDetailsBase* GetDefaultObj();

	void UpdateMtxOffer(class UFortMtxStoreOfferBase* MtxOfferWidget);
	struct FSlateBrush GetTileImage();
	enum class EFortMtxStoreOfferType GetStoreOfferType();
	bool GetSalePrice(class FText* SalePrice);
	class FString GetOfferId();
	class FText GetNormalPrice();
	class FText GetName();
	struct FFortMtxGradient GetGradient();
	struct FSlateBrush GetDetailsImage();
	TArray<struct FFortMtxDetailsAttribute> GetDetailsAttributes();
	class FText GetDescription();
	int32 GetBonusQuantity();
	int32 GetBaseQuantity();
	struct FLinearColor GetBackground();
};

// 0xA8 (0x930 - 0x888)
// Class FortniteUI.FortMtxStoreOfferBase
class UFortMtxStoreOfferBase : public UCommonButton
{
public:
	class UFortMtxOfferData*                     OfferDisplayAsset;                                 // 0x888(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMtxPackage                           MtxOffer;                                          // 0x890(0xA0)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortMtxStoreOfferBase* GetDefaultObj();

	struct FSlateBrush GetTileImage();
	enum class EFortMtxStoreOfferType GetStoreOfferType();
	bool GetSalePrice(class FText* SalePrice);
	class FString GetOfferId();
	class FText GetNormalPrice();
	class FText GetName();
	struct FFortMtxGradient GetGradient();
	struct FSlateBrush GetDetailsImage();
	TArray<struct FFortMtxDetailsAttribute> GetDetailsAttributes();
	class FText GetDescription();
	int32 GetBonusQuantity();
	int32 GetBaseQuantity();
	struct FLinearColor GetBackground();
};

// 0x48 (0x340 - 0x2F8)
// Class FortniteUI.FortMtxStoreRootBase
class UFortMtxStoreRootBase : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_1F35[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UFortMtxStoreOfferBase>    MtxOfferWidgetClass;                               // 0x300(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        StorefrontNames;                                   // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMtxPackage>                   MtxOffers;                                         // 0x318(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F36[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortMtxStoreRootBase* GetDefaultObj();

	void OnUpdateOtherPlatformMTXMessage(bool HasOtherPlatformCurrency, class FText& CurrencyMessageLocText);
	void OnStartReadingOffers();
	void OnOffersGenerated();
	void OnMtxOfferGenerated(class UFortMtxStoreOfferBase* MtxOffer);
	void NoOffersAvailable();
	void HandleMtxPackagesRead(TArray<struct FMtxPackage>& Offers);
	enum class EFortMtxStoreOfferType GetStoreOfferType(const struct FMtxPackage& Package);
	struct FMtxBreakdown GetMtxBreakdown();
	bool AreOffersLoaded();
};

// 0x0 (0x8B8 - 0x8B8)
// Class FortniteUI.FortMulchItemTileButton
class UFortMulchItemTileButton : public UFortItemTileButton
{
public:

	static class UClass* StaticClass();
	static class UFortMulchItemTileButton* GetDefaultObj();

	void HandleItemChanged_BP(class UFortItem* NewItem);
};

// 0x20 (0x348 - 0x328)
// Class FortniteUI.FortMulchConfirmationModalWidget
class UFortMulchConfirmationModalWidget : public UFortActivatablePanel
{
public:
	TWeakObjectPtr<class UFortItemManagementScreen> HostItemManagementScreen;                          // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTileView*                       RecycleItemTileView;                               // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemManagementMulchDetailsPanel*  RecycleDetailsPanel;                               // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F38[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortMulchConfirmationModalWidget* GetDefaultObj();

	void UpdateConfirmationModal_BP();
	void UpdateConfirmationModal();
	TMap<enum class EItemRecyclingWarning, int32> GetMulchWarnings();
	void CommitMulch();
};

// 0x58 (0x350 - 0x2F8)
// Class FortniteUI.FortMultiFactorAuthWidget
class UFortMultiFactorAuthWidget : public UCommonActivatablePanel
{
public:
	class FText                                  PromptText;                                        // 0x2F8(0x18)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class UCommonButton*                         Button_Continue;                                   // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Cancel;                                     // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Error;                                        // 0x320(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UEditableText*                         EditText_MultiFactorCode;                          // 0x328(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F3B[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortMultiFactorAuthWidget* GetDefaultObj();

	void HandleTextCommitted(class FText& Text, enum class ETextCommit CommitMethod);
};

// 0x38 (0x160 - 0x128)
// Class FortniteUI.FortMultiSizeItemCard
class UFortMultiSizeItemCard : public UFortItemWidget_NUI
{
public:
	enum class EFortItemCardSize                 BPItemCardSize;                                    // 0x128(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldDisplayItemAsReward;                         // 0x129(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F3D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        QuantityOverride;                                  // 0x12C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortItemType                     EmptyItemType;                                     // 0x130(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldSuppressItemTypeIcon;                        // 0x131(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldSuppressTierMeter;                           // 0x132(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldCollapseBorderPadding;                       // 0x133(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F3E[0x2C];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortMultiSizeItemCard* GetDefaultObj();

	bool ShouldUseNewItemCards();
	void SetShouldDisplayItemAsReward(bool Value);
	void SetShouldCollapseBorderPadding(bool Value);
	void SetQuantityOverride(int32 QuantityOverride);
	void SetEmptyItemType(enum class EFortItemType NewEmptyItemType);
	void SetCardSize(enum class EFortItemCardSize CardSize);
	enum class EFortItemCardSize GetCardSize();
};

// 0x30 (0x328 - 0x2F8)
// Class FortniteUI.FortNewAccountWarning
class UFortNewAccountWarning : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_1F3F[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         Button_NewAccount;                                 // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Back;                                       // 0x320(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortNewAccountWarning* GetDefaultObj();

};

// 0x4B0 (0x4E8 - 0x38)
// Class FortniteUI.FortniteUserInterfaceSettings
class UFortniteUserInterfaceSettings : public UDeveloperSettings
{
public:
	struct FRuntimeFloatCurve                    WidthScaleCurve;                                   // 0x38(0x78)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    HeightScaleCurve;                                  // 0xB0(0x78)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    WidthScaleCurve_iOS_InGame;                        // 0x128(0x78)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    HeightScaleCurve_iOS_InGame;                       // 0x1A0(0x78)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    WidthScaleCurve_iOS_FrontEnd;                      // 0x218(0x78)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    HeightScaleCurve_iOS_FrontEnd;                     // 0x290(0x78)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    WidthScaleCurve_Android_InGame;                    // 0x308(0x78)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    HeightScaleCurve_Android_InGame;                   // 0x380(0x78)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    WidthScaleCurve_Android_FrontEnd;                  // 0x3F8(0x78)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    HeightScaleCurve_Android_FrontEnd;                 // 0x470(0x78)(Edit, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortniteUserInterfaceSettings* GetDefaultObj();

};

// 0x40 (0x258 - 0x218)
// Class FortniteUI.FortBaseCanvasEntity
class UFortBaseCanvasEntity : public UFortUserWidget
{
public:
	uint8                                        Pad_1F40[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  NodeID;                                            // 0x220(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bConsideredInSizeCalculation;                      // 0x228(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F41[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MovementMultiplier;                                // 0x22C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   NodeStyleData;                                     // 0x230(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F42[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             BasePos;                                           // 0x248(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasHadBasePosSet;                                  // 0x250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F43[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortBaseCanvasEntity* GetDefaultObj();

	void Outro(enum class EFortAnimSpeed Speed);
	void Intro(enum class EFortAnimSpeed Speed);
};

// 0x28 (0x280 - 0x258)
// Class FortniteUI.FortBaseCanvasNode
class UFortBaseCanvasNode : public UFortBaseCanvasEntity
{
public:
	class UMediaSource*                          PreviewMediaSource;                                // 0x258(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldHideConnectorsToDependents;                 // 0x260(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F4D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnNodeStateChangedEvent;                           // 0x268(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F4F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortBaseCanvasNode* GetDefaultObj();

	bool SelectNode();
	void SelectedChanged(bool bEnabled);
	void Purchase();
	void OnNodeStateChanged__DelegateSignature(class UFortBaseCanvasNode* Node);
	bool IsPurchaseable(TArray<enum class EFortHomebaseNodePurchaseRestrictionReason>* OutRestrictionReasons);
	bool IsOwned();
	bool IsLocked();
	void HandleNodeStateChangedInternal();
	void HandleNodeStateChanged();
	class FText GetPurchaseRestrictionReasonText(enum class EFortHomebaseNodePurchaseRestrictionReason Reason);
	float GetPurchasePercent();
	class UMediaSource* GetPreviewMediaSource();
	bool GetNodeStyleDataCopy(struct FFortNodeStyleData* Style);
	class FName GetNodeID();
	bool GetNodeDataCopy(struct FHomebaseNode* Node);
	TArray<struct FFortItemInstanceQuantityPair> GetCosts();
	bool DrillDownToNodePage();
	bool DoesDrillDownToCurrentNodePage();
};

// 0x100 (0x228 - 0x128)
// Class FortniteUI.FortNodeCanvas
class UFortNodeCanvas : public UCanvasPanel
{
public:
	uint8                                        Pad_1F52[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  NodePageName;                                      // 0x130(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   NodeTypeData;                                      // 0x138(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             OriginForParallax;                                 // 0x148(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F53[0xD8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortNodeCanvas* GetDefaultObj();

	void PanToNode(class FName NodeID, enum class EFortAnimSpeed PanSpeed);
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortNodeCanvasEntityInterface
class IFortNodeCanvasEntityInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IFortNodeCanvasEntityInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortNodeCanvasInterface
class IFortNodeCanvasInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IFortNodeCanvasInterface* GetDefaultObj();

};

// 0x10 (0x228 - 0x218)
// Class FortniteUI.FortNodePrerequisitesWidget
class UFortNodePrerequisitesWidget : public UFortUserWidget
{
public:
	struct FDataTableRowHandle                   NodeStyleData;                                     // 0x218(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortNodePrerequisitesWidget* GetDefaultObj();

	void ProcessNodePrequisites(class FName NodeID);
	void GenerateNodePrerequisiteConnector(enum class EFortNodePrerequisiteConnector Connector);
	void GenerateNodePrerequisite(const struct FFortUINodePrerequisite& NodePrerequisite);
};

// 0x50 (0x268 - 0x218)
// Class FortniteUI.FortNumericTextBlock
class UFortNumericTextBlock : public UTextBlock
{
public:
	UMulticastDelegateProperty_                  CountFinished;                                     // 0x218(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                        StartingValue;                                     // 0x228(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DestValue;                                         // 0x22C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseGrouping;                                      // 0x230(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAsCurrency;                                       // 0x231(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F5A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EaseOutExp;                                        // 0x234(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpdateInterval;                                    // 0x238(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShrinkTime;                                        // 0x23C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F5C[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortNumericTextBlock* GetDefaultObj();

	bool IsInterpolatingNumber();
	void InterpolateSet(int32 InValue, float InUpdateLength, float InReportEndEarly);
	int32 GetCurrentValue();
	void DirectlySet(int32 InValue);
};

// 0x0 (0x328 - 0x328)
// Class FortniteUI.FortOptionsMenu
class UFortOptionsMenu : public UFortActivatablePanel
{
public:

	static class UClass* StaticClass();
	static class UFortOptionsMenu* GetDefaultObj();

	bool ShowVideoOptions();
	bool ShowInputOptions();
	bool ShowControllerOptions();
	bool ShowBrightnessOptions();
	bool ShowAccountOptions();
	bool ShowAccessibilityOptions();
	void ResetGameOptionsSettings();
	void ResetClientHUDSettings();
	void OnVideoCancel();
	void OnVideoAccept();
	void OnResetToDefaults();
	void OnReset();
	void OnApply();
	bool NeedsVideoChangeConfirmation();
	bool NeedsLanguageChangeConfirmation();
	void HandleSettingsSaveComplete();
	void HandleSettingsErrorMessageClosed();
	void HandleBenchmarkComplete();
	void ClearCachedEula();
};

// 0x50 (0x80 - 0x30)
// Class FortniteUI.FortOptionsMenuData
class UFortOptionsMenuData : public UDataAsset
{
public:
	TMap<enum class ESettingTab, struct FOptionsTabData> TabDatas;                                          // 0x30(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortOptionsMenuData* GetDefaultObj();

};

// 0xC0 (0xF0 - 0x30)
// Class FortniteUI.FortOptionsMenuInputData
class UFortOptionsMenuInputData : public UDataAsset
{
public:
	class FName                                  ActionName;                                        // 0x30(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayText;                                       // 0x38(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  PrimaryText;                                       // 0x50(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  SecondaryText;                                     // 0x68(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        ElementNumber;                                     // 0x80(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F63[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      TabText;                                           // 0x88(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortActionKeyMapping                 ActionKeyMapping;                                  // 0x90(0x60)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortOptionsMenuInputData* GetDefaultObj();

};

// 0x10 (0x220 - 0x210)
// Class FortniteUI.FortOptionsMenuSetting
class UFortOptionsMenuSetting : public UCommonUserWidget
{
public:
	enum class ESettingType                      SettingType;                                       // 0x210(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F81[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortOptionsMenuSetting* GetDefaultObj();

	void TouchVerticalSensitivityValueChanged(float NewValue);
	void TouchTargetingMultiplierValueChanged(float NewValue);
	void TouchLookSensitivityChanged(float NewValue);
	void TouchDragScopedSensitivityValueChanged(float NewValue);
	void TargetingToggleChanged(bool bInChecked);
	void TargetingMultiplierValueChanged(float NewValue);
	void TapInteractChanged(bool bInChecked);
	void StreamerModeChanged(bool bInChecked);
	void SprintToggleChanged(bool bInChecked);
	void SprintCancelsReloadChanged(bool bInChecked);
	void ShowViewerCountChanged(bool bInChecked);
	void SettingChanged(float NewValue);
	void ScopedMultiplierValueChanged(float NewValue);
	void SafeZoneChanged(float NewValue);
	void RegionChanged(int32 NewRegion);
	void PowerSaverModeChanged(bool bInChecked);
	void PeripheralLightingChanged(bool bInChecked);
	void OnUseTapToShootChanged(bool bInChecked);
	void OnTurboBuildChanged(bool bInChecked);
	void OnShowGlobalChatEnabledChanged(bool bInChecked);
	void OnShadowPlayHighlightsChanged(bool bInChecked);
	void OnReplayRecordingPreferenceChanged(bool bInChecked);
	void OnLargeTeamsReplayRecordingPreferenceChanged(bool bInChecked);
	void OnHUDScaleChanged(float bInHUDScale);
	void OnGamepadAutoRunChanged(bool bInChecked);
	void OnForceFeedbackChanged(bool bInChecked);
	void OnFocusOnFirstBuildingPieceWhenQuickbarSwappedChangedAthena(bool bInChecked);
	void OnFocusOnFirstBuildingPieceWhenQuickbarSwappedChanged(bool bInChecked);
	void OnEditModeAimAssistChanged(bool bInChecked);
	void OnCrossplayPreferenceChanged(bool bInChecked);
	void OnAutoPickupWeaponsConsolePCChanged(bool bInChecked);
	void OnAutoPickupWeaponsChanged(bool bInChecked);
	void OnAutoOpenDoorsChanged(bool bInChecked);
	void OnAutoChangeMaterialChanged(bool bInChecked);
	void OnAimAssistChanged(bool bInChecked);
	void MouseSensitivityYChanged(float NewValue);
	void MouseSensitivityXChanged(float NewValue);
	void LookInversionChanged(bool bInChecked);
	void LanguageChanged(int32 NewMode);
	void InvertAcceptAndBackChanged(int32 NewMode);
	bool GetUseTapToShoot();
	bool GetTurboBuild();
	float GetTouchVerticalSensitivityValue();
	float GetTouchTargetingMultiplierValue();
	float GetTouchLookSensitivityValue();
	float GetTouchDragScopedSensitivityValue();
	bool GetTargetingToggleState();
	float GetTargetingMultiplierValue();
	bool GetTapInteractState();
	bool GetStreamerModeEnabled();
	bool GetSprintToggleState();
	bool GetSprintCancelsReloadState();
	bool GetShowViewerCountEnabled();
	bool GetShowHeroHeadAccessories();
	bool GetShowHeroBackpack();
	bool GetShowGlobalChatEnabled();
	bool GetShadowPlayHighlightsEnabled();
	float GetSettingValue();
	TArray<class FText> GetSettingDisplayNames();
	float GetScopedMultiplierValue();
	float GetSafeZoneValue();
	bool GetReplayRecordingEnabled();
	TArray<class FText> GetRegionDisplayNames();
	bool GetPowerSaverMode();
	TArray<class FText> GetPossibleLanguages();
	bool GetPeripheralLightingEnabled();
	struct FVector2D GetMouseSensitivityValue();
	bool GetLookInversionState();
	bool GetLargeTeamsReplayRecordingEnabled();
	bool GetInvertAcceptAndBack();
	float GetHUDScale();
	float GetGamepadTargetingMultiplierValue();
	float GetGamepadScopedMultiplierValue();
	struct FVector2D GetGamepadLookSensitivityValue();
	bool GetGamepadAutoRunState();
	bool GetForceFeedbackState();
	bool GetFocusOnFirstBuildingPieceWhenQuickbarSwappedStateAthena();
	bool GetFocusOnFirstBuildingPieceWhenQuickbarSwappedState();
	bool GetFirstPersonCameraState();
	bool GetEditModeAimAssistState();
	int32 GetCurrentRegion();
	int32 GetCurrentLanguage();
	bool GetCrossplayPreference();
	bool GetConsoleUnlockedFPSState();
	bool GetAutoPickupWeaponsConsolePC();
	bool GetAutoPickupWeapons();
	bool GetAutoOpenDoors();
	bool GetAutoEquipState();
	bool GetAutoChangeMaterial();
	bool GetAimAssistState();
	void GamepadTargetingMultiplierValueChanged(float NewValue);
	void GamepadScopedMultiplierValueChanged(float NewValue);
	void GamepadLookSensitivityYChanged(float NewValue);
	void GamepadLookSensitivityXChanged(float NewValue);
	void FirstPersonCameraChanged(bool bInChecked);
	void ConsoleUnlockedFPSChanged(bool bInChecked);
	void AutoEquipChanged(bool bInChecked);
};

// 0x40 (0x68 - 0x28)
// Class FortniteUI.FortSettingInfo
class UFortSettingInfo : public UObject
{
public:
	class FText                                  OptionDisplayText;                                 // 0x28(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  OptionHoverText;                                   // 0x40(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	enum class ESettingDisplayType               DisplayType;                                       // 0x58(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESettingType                      SettingType;                                       // 0x59(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SliderUseDecimal;                                  // 0x5A(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SliderMinZero;                                     // 0x5B(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F84[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UFortOptionsMenuSetting>   SettingEntryClass;                                 // 0x60(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortSettingInfo* GetDefaultObj();

};

// 0x68 (0x310 - 0x2A8)
// Class FortniteUI.FortOutpostStorageItemPicker
class UFortOutpostStorageItemPicker : public UFortItemPickerBase
{
public:
	uint8                                        Pad_1F87[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortOutpostStorageItemPicker* GetDefaultObj();

	void UseFilters(const TArray<enum class EFortItemType>& ItemTypes);
	void UseFilter(enum class EFortItemType ItemType);
};

// 0x18 (0x340 - 0x328)
// Class FortniteUI.FortPartyFinderBase
class UFortPartyFinderBase : public UFortActivatablePanel
{
public:
	class UCommonBorder*                         CommonBorder_PartyServicesDegredationWarning;      // 0x328(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTreeView*                       TreeView_Social;                                   // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Close;                                      // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortPartyFinderBase* GetDefaultObj();

	void HandleSocialListChanged(TArray<class UFortSocialItem*>& SocialItems);
	void HandlePartyServicesDegredationChanged(bool bAreServicesDegredated);
	void ClosePartyFinder();
};

// 0x10 (0x898 - 0x888)
// Class FortniteUI.FortPartyTreeItemBase
class UFortPartyTreeItemBase : public UCommonButton
{
public:
	uint8                                        Pad_1F8A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortSocialItem*                       SocialItem;                                        // 0x890(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortPartyTreeItemBase* GetDefaultObj();

};

// 0x98 (0x2A8 - 0x210)
// Class FortniteUI.FortPerksWidget_NUI
class UFortPerksWidget_NUI : public UCommonUserWidget
{
public:
	class UFortHero*                             Hero;                                              // 0x210(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortPerksWidgetState             State;                                             // 0x218(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F91[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHero*                             EvolutionOption;                                   // 0x220(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortPerkTierWidget_NUI>   PerkTierWidgetType;                                // 0x228(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortPerkWidget_NUI>       PerkWidgetType;                                    // 0x230(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortTooltipContext*                   TooltipContext;                                    // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonLoadGuard*                      PerksListLoadGuard;                                // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F92[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortPerksWidget_NUI* GetDefaultObj();

	void SetState(enum class EFortPerksWidgetState InState, class UFortHero* InEvolutionOption);
	void SetHero(class UFortHero* InHero);
	void ProcessPerkTiers();
	void ProcessPerks();
	void ProcessActiveAbilityPerksAsync();
	void OnStateChanged();
	void OnHeroChanged();
	void OnGeneratePerkTier(const struct FFortUIPerkTier& FortPerkTier, class UFortPerkTierWidget_NUI* PerkTierWidget);
	void OnGeneratePerk(const struct FFortUIPerk& FortPerk, class UFortPerkWidget_NUI* PerkWidget);
};

// 0x50 (0x260 - 0x210)
// Class FortniteUI.FortPerkTierWidget_NUI
class UFortPerkTierWidget_NUI : public UCommonUserWidget
{
public:
	uint8                                        Pad_1F96[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortUIPerkTier                       FortPerkTier;                                      // 0x218(0x20)(BlueprintVisible, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F97[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortPerkTierWidget_NUI* GetDefaultObj();

	void ProcessPerks();
	void OnGeneratePerk(const struct FFortUIPerk& Perk, class UFortPerkWidget_NUI* PerkWidget);
};

// 0xC8 (0x2D8 - 0x210)
// Class FortniteUI.FortPerkWidget_NUI
class UFortPerkWidget_NUI : public UCommonUserWidget
{
public:
	uint8                                        Pad_1F9D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortUIPerk                           Perk;                                              // 0x218(0x98)(BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F9E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortTooltipContext*                   CachedTooltipContext;                              // 0x2B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F9F[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortPerkWidget_NUI* GetDefaultObj();

	void SetTooltipContext(class UFortTooltipContext* InTooltipContext);
	void RequestTooltipDescription();
	void RequestCombinedTooltipDescription();
	void OnTooltipDescriptionReady(TArray<class FText>& DescriptionList);
	void OnPerkUpdated();
	void OnCombinedTooltipDescriptionReady(class FText& Description);
	bool IsTierPerk();
	bool IsPerkUnlocked();
	bool IsPerkHighlighted();
	bool IsPerkEmpty();
	bool HasAbility();
	class FText GetTooltipTitle();
	class UFortTooltipContext* GetTooltipContext();
	enum class EFortSupportBonusType GetSupportBonusType();
	int32 GetRequiredLevel();
	enum class EFortItemTier GetPerkTier();
	bool GetIcon(struct FSlateBrush* Brush);
};

// 0x180 (0x1A8 - 0x28)
// Class FortniteUI.FortPickerContext
class UFortPickerContext : public UBlueprintContextBase
{
public:
	UMulticastDelegateProperty_                  OnShowPicker;                                      // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPickerConfirm;                                   // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPickerCancel;                                    // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPickerOptionMoved;                               // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPickerOptionChosen;                              // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPickerRefreshItems;                              // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FAC[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FItemDefOptionData>            CustomPickerMenuItems;                             // 0xA0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<struct FSquadQuickChatOptionData>     SquadChatMenuItems;                                // 0xB0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TMap<class UFortItemDefinition*, float>      TrackedTrapsMap;                                   // 0xC0(0x50)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1FAE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPickerData*                       PickerData;                                        // 0x118(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UFortSchematicItem*>            AccountTrapSchematics;                             // 0x120(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<struct FFortPickerTemporaryWheel>     AvailableWheels;                                   // 0x130(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	int32                                        CurrentWheelIndex;                                 // 0x140(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1FAF[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class UObject*, int32>                  ConsumableStackCount;                              // 0x150(0x50)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1FB0[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortPickerContext* GetDefaultObj();

	bool UseLeftThumbstick();
	void SwitchToAdjacentWheel(int32 SelectionDirection);
	void ShowRadialPickerMenu(enum class EFortPickerToDisplay PickerType, int32 WheelIndex, class UObject* ContextObject);
	void SetFortPickerData(class UFortPickerData* Data);
	void RestoreInputAxes();
	void PickerOptionAccepted(int32 Option);
	void PickerCanceled();
	void GetRadialPickerOptionItem(int32 Index, class UFortItem** Item, bool* bOptionEnabled);
	void GetRadialPickerOptionImageAndLabel(int32 Index, class FText* Label, struct FSlateBrush* Brush, bool* bOptionEnabled);
	void GetPickerWheelAdjacency(bool* bCanPageLeft, bool* bCanPageRight);
	int32 GetNumPickerOptions();
	class UFortItem* GetListPickerOption(int32 Index);
	int32 GetCurrentWheelIndex();
	class FText GetCurrentPickerDisplayName();
	void GetAdjacentPickerWheelInformation(int32 Direction, class FText* AdjacentTitle, bool* bCanPageThisDirection);
	bool DoesRadialCloseOnRelease();
};

// 0xC0 (0xF0 - 0x30)
// Class FortniteUI.FortPickerData
class UFortPickerData : public UDataAsset
{
public:
	TArray<struct FBuildingCategoryOptionData>   BuildingCategories;                                // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FBuildingOptionData>           WallOptions;                                       // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FBuildingOptionData>           FloorOptions;                                      // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FBuildingOptionData>           StairOptions;                                      // 0x60(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FBuildingOptionData>           RoofOptions;                                       // 0x70(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FItemCategoryOptionData>       TrapCategories;                                    // 0x80(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FItemCategoryOptionData>       WeaponCategories;                                  // 0x90(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FRadialOptionData>             SocialCategories;                                  // 0xA0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FChatOptionData>               ChatOptions;                                       // 0xB0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UAthenaQuickChatBank*>          SquadChatOptionBanks;                              // 0xC0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FMapNoteOptionData>            MapNoteOptions;                                    // 0xD0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FEmoteOptionData>              EmoteOptions;                                      // 0xE0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortPickerData* GetDefaultObj();

};

// 0x28 (0x320 - 0x2F8)
// Class FortniteUI.FortPlayedBeforeSelect
class UFortPlayedBeforeSelect : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_1FB4[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         Button_Yes;                                        // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_No;                                         // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortPlayedBeforeSelect* GetDefaultObj();

};

// 0x0 (0x328 - 0x328)
// Class FortniteUI.FortPlayerBanned
class UFortPlayerBanned : public UFortActivatablePanel
{
public:

	static class UClass* StaticClass();
	static class UFortPlayerBanned* GetDefaultObj();

};

// 0xB8 (0x2C8 - 0x210)
// Class FortniteUI.FortPlayerProfileBannerEditor
class UFortPlayerProfileBannerEditor : public UCommonUserWidget
{
public:
	enum class ESaveProfileForBanners            ProfileToSave;                                     // 0x210(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FB5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortSwipeDetector                    SwipeDetector;                                     // 0x218(0x70)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<class FName>                          IconCategories;                                    // 0x288(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class FName>                          ColorCategories;                                   // 0x298(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class FName                                  ChosenIcon;                                        // 0x2A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ChosenIconCategory;                                // 0x2B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ChosenColor;                                       // 0x2B8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ChosenColorCategory;                               // 0x2C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortPlayerProfileBannerEditor* GetDefaultObj();

	void SetBannerIcon(class FName& Icon);
	void SetBannerColor(class FName& Color);
	void RefreshBannerEditor();
	void OnShowPreviousCategory();
	void OnShowNextCategory();
	void HandleEditorDeactivated();
	void HandleEditorActivated();
	void CommitChosenIconAndColor();
};

// 0x10 (0x898 - 0x888)
// Class FortniteUI.FortPlayerProfileBannerEditorTile
class UFortPlayerProfileBannerEditorTile : public UCommonButton
{
public:
	uint8                                        Pad_1FB8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UFortItem>              Item;                                              // 0x890(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortPlayerProfileBannerEditorTile* GetDefaultObj();

};

// 0x0 (0x328 - 0x328)
// Class FortniteUI.FortPlayerProfileModalWidget
class UFortPlayerProfileModalWidget : public UFortActivatablePanel
{
public:

	static class UClass* StaticClass();
	static class UFortPlayerProfileModalWidget* GetDefaultObj();

};

// 0x40 (0x250 - 0x210)
// Class FortniteUI.FortPlayerTrackerBase
class UFortPlayerTrackerBase : public UCommonUserWidget
{
public:
	uint8                                        Pad_1FC1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      UniqueId;                                          // 0x218(0x28)(BlueprintVisible, BlueprintReadOnly, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UFortRegisteredPlayerInfo> PlayerInfo;                                        // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        PartyIndex;                                        // 0x248(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsLocalPlayer;                                     // 0x24C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         ShouldDeferAttributesChangedEvents;                // 0x24D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1FC2[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortPlayerTrackerBase* GetDefaultObj();

	void UpdateBasedOnId();
	void SetUniqueIdInternal(struct FUniqueNetIdRepl& InUniqueId);
	void SetUniqueId(struct FUniqueNetIdRepl& InUniqueId);
	void SetTeamMember(int32 InPlayerIndex);
	void ResetPartyEvents();
	void ReRegisterAttributeChangedDelegates();
	void RegisterAttributeChangedDelegates();
	void OnPlayerInfoChanged(const struct FFortTeamMemberInfo& NewInfo);
	void OnPlayerAttributesChanged();
	bool HasModifiedStats();
	void HandleTooltipAttributeChanged();
	void HandleTeamMemberStateChangedId(const struct FFortTeamMemberInfo& NewInfo);
	void HandleTeamMemberStateChanged(const struct FFortTeamMemberInfo& NewInfo);
	void HandleTeamMemberRemoved(int32 RemovedIndex);
	void HandleTeamMemberAdded(const struct FFortTeamMemberInfo& NewInfo);
	void HandlePartyLeft();
	void HandleOnPlayerIdUpdated(struct FUniqueNetIdRepl& NewInfo);
	void HandleOnLocalPlayerInfoUpdated(struct FFortTeamMemberInfo& NewInfo);
	void HandleDelayedOnPlayerAttributesChanged();
	int32 GetTeamTech();
	int32 GetTeamResistance();
	int32 GetTeamOffense();
	int32 GetTeamFortitude();
	bool GetModifiedHomebaseRating(int32* Rating, float* ProgressFraction);
	bool GetHomebaseRating(int32* Rating, float* ProgressFraction);
	int32 GetBuffedTech();
	int32 GetBuffedResistance();
	int32 GetBuffedOffense();
	int32 GetBuffedFortitude();
	int32 GetBaseTech();
	int32 GetBaseResistance();
	int32 GetBaseOffense();
	int32 GetBaseFortitude();
};

// 0x80 (0x3A8 - 0x328)
// Class FortniteUI.FortPrivacyBase
class UFortPrivacyBase : public UFortActivatablePanel
{
public:
	UMulticastDelegateProperty_                  OnPrivacyChanged;                                  // 0x328(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UCommonButton*                         AllowFriendsOfFriendsButton;                       // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPanelWidget*                          AllowFriendsOfFriendsContainer;                    // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonGroup*                    ButtonGroup;                                       // 0x348(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class UCommonButton*, enum class EPartyType> PrivacyButtonMap;                                  // 0x350(0x50)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1FD2[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortPrivacyBase* GetDefaultObj();

	void SetTencentBuild(bool bInIsTencentBuild);
	void HandlePrivacyButtonSelected(class UCommonButton* SelectedPrivacyButton, int32 ButtonIndex);
	void ApplyPrivacySetting();
	void AddPrivacyButton(class UCommonButton* PrivacyButton, enum class EPartyType PartyType);
};

// 0x20 (0x8A8 - 0x888)
// Class FortniteUI.FortPurchaseHistoryEntry
class UFortPurchaseHistoryEntry : public UCommonButton
{
public:
	uint8                                        Pad_1FDE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      Text_Name;                                         // 0x890(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortMultiSizeItemCard*                Card_PurchasedItem;                                // 0x898(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortMultiSizeItemCard*                Card_SecondaryItem;                                // 0x8A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortPurchaseHistoryEntry* GetDefaultObj();

	void SetRefundState(class FText& PurchaseText, enum class EItemRefundability Refundability);
	void SetPurchaseText(class FText& PurchaseText, bool bHasBeenRefunded);
};

// 0xB8 (0x2C0 - 0x208)
// Class FortniteUI.FortPurchaseHistoryListView
class UFortPurchaseHistoryListView : public UListViewBase
{
public:
	uint8                                        Pad_1FE2[0xB8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortPurchaseHistoryListView* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class FortniteUI.ReturnReasonDataWrapper
class UReturnReasonDataWrapper : public UObject
{
public:
	uint8                                        Pad_1FE6[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UReturnReasonDataWrapper* GetDefaultObj();

};

// 0xD8 (0x3D0 - 0x2F8)
// Class FortniteUI.FortPurchaseHistoryScreen
class UFortPurchaseHistoryScreen : public UCommonActivatablePanel
{
public:
	struct FDataTableRowHandle                   PreviousStepRowHandle;                             // 0x2F8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortRefundConfirmation>   RefundConfirmationClass;                           // 0x308(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortRefundConfirmation*               RefundConfirmationWidget;                          // 0x310(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FText>                          ReturnReasons;                                     // 0x318(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UReturnReasonDataWrapper*>      WrapperArray;                                      // 0x328(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1FF1[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortItemDefinition*>           SelectedItemDefs;                                  // 0x348(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1FF2[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonGroup*                    TabButtonGroup;                                    // 0x370(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRefundConfirmationProcessing;                     // 0x378(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1FF3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPurchaseHistoryListView*          ListView_Purchases;                                // 0x380(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonListView*                       ListView_Reasons;                                  // 0x388(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Desc;                                         // 0x390(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_RefundCount;                                  // 0x398(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_RequestRefund;                              // 0x3A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortRichTextBlock*                    RichText_WarningMsg;                               // 0x3A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_RefundItem1;                                  // 0x3B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_RefundItem2;                                  // 0x3B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_RefundValue;                                  // 0x3C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_RefundReason;                                 // 0x3C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortPurchaseHistoryScreen* GetDefaultObj();

	void OnPopulateView(enum class EPurchaseReturnStep CurrentStep);
	void OnNoPurchasesAvailable();
	void OnItemRefresh(const struct FMtxPurchaseHistory& PurchaseHistory);
	void OnEndRefundSubmission(bool bSuccess, int32 MtxRefunded, class UFortItemDefinition* ReturnedItem, int32 TicketIndex);
	void OnBeginRefundSubmission();
	void InitializeTickets(int32 NumTicketsAvailableToUse);
	void HandleTabButtonClicked(enum class EPurchaseReturnStep ClickedStep);
	void HandlePreviousStepAction(bool* bPassThrough);
	enum class EPurchaseReturnStep GetCurrentStep();
	void ConsumeComplete();
};

// 0x20 (0x238 - 0x218)
// Class FortniteUI.FortPvPMinimapWidget
class UFortPvPMinimapWidget : public UFortUserWidget
{
public:
	uint8                                        Pad_1FF4[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortPvPMinimapWidget* GetDefaultObj();

};

// 0x10 (0x220 - 0x210)
// Class FortniteUI.FortQuestExpiresWidget
class UFortQuestExpiresWidget : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortQuestItem>         Item;                                              // 0x210(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1FF5[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortQuestExpiresWidget* GetDefaultObj();

	void SetData(class UFortQuestItem* InItem);
	void OnQuestExpirationUpdated();
};

// 0x10 (0x220 - 0x210)
// Class FortniteUI.FortQuestMapDetailsPanel
class UFortQuestMapDetailsPanel : public UCommonUserWidget
{
public:
	struct FDataTableRowHandle                   PlayButtonTriggeringAction;                        // 0x210(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortQuestMapDetailsPanel* GetDefaultObj();

	void DisplayInactiveQuest(class UFortQuestItemDefinition* QuestDef);
	void DisplayActiveQuest(class UFortQuestItem* QuestItem);
};

// 0x58 (0x260 - 0x208)
// Class FortniteUI.FortQuestMapNodeLayout
class UFortQuestMapNodeLayout : public UUserWidget
{
public:
	class UCommonButton*                         ButtonPrevious;                                    // 0x208(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonButton*                         ButtonNext;                                        // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPanelWidget*                          LayoutPanel;                                       // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_200D[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonGroup*                    QuestButtonGroup;                                  // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_200E[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortQuestMapScreen*                   ParentScreen;                                      // 0x258(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortQuestMapNodeLayout* GetDefaultObj();

	void SetParentScreen(class UFortQuestMapScreen* Parent);
	void SetLayoutPanel(class UPanelWidget* Value);
	void HandleQuestButtonSelected(class UCommonButton* SelectedQuestButton, int32 ButtonIndex);
	struct FFortQuestMapPage GetQuestPageData();
	void DisposeLayout();
};

// 0x18 (0x228 - 0x210)
// Class FortniteUI.FortQuestMapQuestTile
class UFortQuestMapQuestTile : public UCommonUserWidget
{
public:
	class UCommonButton*                         QuestButton;                                       // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2019[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortQuestMapQuestTile* GetDefaultObj();

	void HandleSelectedChange(bool Selected);
	void HandleQuestDataChangedBP();
	struct FFortQuestMapNode GetQuestNodeData();
};

// 0x78 (0x370 - 0x2F8)
// Class FortniteUI.FortQuestMapScreen
class UFortQuestMapScreen : public UCommonActivatablePanel
{
public:
	class UFortQuestMapDetailsPanel*             CampaignDetailsPanel;                              // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortQuestMapDetailsPanel*             EventDetailsPanel;                                 // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortQuestMapViewer*                   QuestMapViewer;                                    // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQuestMapScreenMode               CurrentMode;                                       // 0x310(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseSpecialEventsCamera;                           // 0x311(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_201C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ActiveEventFlag;                                   // 0x318(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortQuestMapDataEntry                CampaignQuestMapDataTable;                         // 0x328(0x10)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortQuestMapDataEntry                EventQuestMapDataTable;                            // 0x338(0x10)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UFortQuestItemDefinition*              CutoffQuest;                                       // 0x348(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortQuestMapDataEntry                CurrentQuestMapDataTable;                          // 0x350(0x10)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_201D[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortQuestMapScreen* GetDefaultObj();

	void UpdateQuestMapMode(enum class EQuestMapScreenMode QuestMapMode);
	void ToggleQuestMapState();
	void SetQuestMapViewer(class UFortQuestMapViewer* Value);
	void SetFindCurrentActionVisibility(enum class EInputActionState ActionVisibility);
	void SetBeyondCutoffQuest(bool bBeyondCutoff);
	bool IsBeyondCutoffQuest();
	void InitializeQuestData();
	void HandleRequestCurrentQuestNavigation();
	void HandleMapViewerSelectedQuestIndexChanged();
	void HandleMapViewerNavigationRequest(enum class EViewerNavigationDirection Direction);
	bool GetBeyondCutoffQuest();
};

// 0x70 (0x2F0 - 0x280)
// Class FortniteUI.FortQuestMapViewer
class UFortQuestMapViewer : public UFortCampaignMap
{
public:
	class UCanvasPanel*                          CosmeticCanvasPanel;                               // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USizeBox*                              FullQuestMap;                                      // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortQuestMapScreen*                   ParentScreen;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_201E[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortQuestMapNodeLayout*               NodeLayout;                                        // 0x2E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2020[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortQuestMapViewer* GetDefaultObj();

	void SetQuestMapNodeLayout(class UFortQuestMapNodeLayout* Value);
	void PlayLayoutOutroAnimation(enum class EViewerNavigationDirection TravelDirection);
	void PlayLayoutFadeInAnimation();
	void NavigateToPage(enum class EViewerNavigationDirection Direction);
	void NavigateToCurrentQuest();
	void HandleQuestMapDataChangedBP();
	void HandleLayoutSelectedIndexChanged();
	void HandleLayoutOutroAnimationFinished();
	struct FFortQuestMapPage GetQuestMapData();
	struct FFortQuestMapPageCosmetics GetQuestMapCosmeticData();
	void DisposeQuestMap();
};

// 0x8 (0x1A8 - 0x1A0)
// Class FortniteUI.FortQuestNotificationHandler
class UFortQuestNotificationHandler : public UFortDialogNotificationHandler
{
public:
	class UFortQuestItem*                        Quest;                                             // 0x1A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortQuestNotificationHandler* GetDefaultObj();

};

// 0x20 (0x230 - 0x210)
// Class FortniteUI.FortQuestObjectiveEntry
class UFortQuestObjectiveEntry : public UCommonUserWidget
{
public:
	uint8                                        Pad_2023[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnFinishedDisplaying;                              // 0x218(0x10)(ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPublic)
	class UFortQuestObjectiveInfo*               MyObjectiveInfo;                                   // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortQuestObjectiveEntry* GetDefaultObj();

	void StartDisplayingObjective();
	void ObjectiveInfoSet(class UFortQuestObjectiveInfo* ObjectiveInfo, bool IsAnnouncement);
};

// 0x60 (0x270 - 0x210)
// Class FortniteUI.FortQuestTrackerEntry
class UFortQuestTrackerEntry : public UCommonUserWidget
{
public:
	uint8                                        Pad_2025[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      QuestNameText;                                     // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonListView*                       ObjectivesList;                                    // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortQuestItem*                        TrackedQuest;                                      // 0x230(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnHUDQuestFinalObjectiveHiddenDelegate;            // 0x238(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UFortQuestObjectiveInfo*>       HUDCachedObjectiveInfos;                           // 0x248(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bConfigureAsHUD;                                   // 0x258(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2026[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnSizeEstimateChangedDelegate;                     // 0x260(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortQuestTrackerEntry* GetDefaultObj();

	void OnSetup();
	void HandleHUDObjectiveCompletion(class UFortQuestObjectiveInfo* QuestObjective);
};

// 0x38 (0x248 - 0x210)
// Class FortniteUI.FortQuestTrackerList
class UFortQuestTrackerList : public UCommonUserWidget
{
public:
	uint8                                        Pad_2027[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bConfigureAsHUD;                                   // 0x218(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2028[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonListView*                       QuestList;                                         // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UFortQuestItem*>                HUDCachedQuests;                                   // 0x228(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnSizeEstimateChangedDelegate;                     // 0x238(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortQuestTrackerList* GetDefaultObj();

	void HandleSizeEstimateChanged(class UObject* ChangedElement);
	void HandleQuestsUpdated();
	void HandlePinnedQuestsChanged();
	void HandleHUDFinalObjectiveHidden(class UFortQuestItem* QuestItem);
	TArray<class UFortQuestItem*> GetQuestsToDisplay();
};

// 0x40 (0x250 - 0x210)
// Class FortniteUI.FortQuestTrackerSubEntry
class UFortQuestTrackerSubEntry : public UCommonUserWidget
{
public:
	uint8                                        Pad_202A[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortQuestObjectiveInfo*               TrackedObjective;                                  // 0x220(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnSizeEstimateChangedDelegate;                     // 0x228(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)
	UMulticastDelegateProperty_                  OnHUDQuestObjectiveCompletedDelegate;              // 0x238(0x10)(ZeroConstructor, InstancedReference, Protected, NativeAccessSpecifierProtected)
	bool                                         bConfigureAsHUD;                                   // 0x248(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_202B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortQuestTrackerSubEntry* GetDefaultObj();

	void OnSetup();
	void OnQuestsUpdated();
	void OnPlayObjectiveCompletedAnimation();
	void NotifyCompletionAnimationFinished();
	void HandleQuestsUpdated();
};

// 0x10 (0x898 - 0x888)
// Class FortniteUI.FortQuestTreeItemWidget
class UFortQuestTreeItemWidget : public UCommonButton
{
public:
	uint8                                        Pad_202C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UObject>                QuestOrCategory;                                   // 0x890(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortQuestTreeItemWidget* GetDefaultObj();

	void SetupAsQuest(class UFortQuestItem* Category);
	void SetupAsCategory(class UFortQuestCategory* Category);
	void OnQuestsUpdated();
	void HandleQuestsUpdated();
};

// 0x30 (0x240 - 0x210)
// Class FortniteUI.FortQuestUpdateEntry
class UFortQuestUpdateEntry : public UCommonUserWidget
{
public:
	TSubclassOf<class UFortQuestObjectiveEntry>  SubEntryClass;                                     // 0x210(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  FinishedDisplayingQuests;                          // 0x218(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UVerticalBox*                          ObjectivesBox;                                     // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2031[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortQuestUpdateEntry* GetDefaultObj();

	void StartQuestOutro();
	void StartQuestIntro();
	void SetupAsAnnouncement();
	void SetQuestItem(class UFortQuestObjectiveInfo* ObjectiveInfo, bool IsAnnouncement);
	void QuestItemSet(class UFortQuestItem* QuestItemToCheck);
	int32 GetNumDisplayedObjectives();
	void FinishQuestOutro();
	void FinishQuestIntro();
	void CurrentlyDisplayedObjectiveFinished(class UFortQuestObjectiveEntry* QuestObjective);
	bool CanAddObjective(class UFortQuestItem* QuestItemToCheck);
};

// 0x40 (0x278 - 0x238)
// Class FortniteUI.FortQuestUpdatesLog
class UFortQuestUpdatesLog : public UFortHUDElementWidget
{
public:
	TSubclassOf<class UFortQuestUpdateEntry>     QuestEntryClass;                                   // 0x238(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxDisplayedQuestUpdates;                          // 0x240(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxDisplayedQuestObjectives;                       // 0x244(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVerticalBox*                          QuestUpdatesBox;                                   // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2035[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortQuestUpdateEntry*>         QuestUpdateWidgets;                                // 0x260(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2036[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortQuestUpdatesLog* GetDefaultObj();

	void HandleQuestUpdateFinished(class UFortQuestUpdateEntry* QuestEntryFinished);
	void HandleDisplayDynamicQuestUpdate(class UFortQuestObjectiveInfo* QuestObjective, bool DisplayStatusUpdate, bool DisplayAnnouncementUpdate);
	void CreateAnnouncementUpdate(class UFortQuestObjectiveInfo* QuestItemToCheck);
};

// 0xD8 (0x2E8 - 0x210)
// Class FortniteUI.FortQuickBarSlotBase
class UFortQuickBarSlotBase : public UCommonUserWidget
{
public:
	class UCommonWidgetSwitcher*                 SwitcherTopComboSwitcher;                          // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonWidgetSwitcher*                 SwitcherBottomComboSwitcher;                       // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortKeybindWidget*                    KeybindTop;                                        // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortKeybindWidget*                    KeybindBottom;                                     // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortKeybindWidget*                    KeybindBottomCombo1;                               // 0x230(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortKeybindWidget*                    KeybindBottomCombo2;                               // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortKeybindWidget*                    KeybindTopComboArrow1;                             // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortKeybindWidget*                    KeybindTopComboArrow2;                             // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortKeybindWidget*                    KeybindBottomComboArrow1;                          // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortKeybindWidget*                    KeybindBottomComboArrow2;                          // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      BottomHoldText;                                    // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                TopLeftArrowImage;                                 // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                TopLeftArrowImage2;                                // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                TopRightArrowImage;                                // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                TopRightArrowImage2;                               // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                BottomLeftArrowImage;                              // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                BottomLeftArrowImage2;                             // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                BottomRightArrowImage;                             // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                BottomRightArrowImage2;                            // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                EmptyImage;                                        // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortMultiSizeItemCard*                ItemCardMaximized;                                 // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortMultiSizeItemCard*                ItemCardMinimized;                                 // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortItemCooldownWidget*               QuickbarSlotCooldown;                              // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                SlotInteraction;                                   // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SlotIndex;                                         // 0x2D0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortQuickBars                    QuickBarType;                                      // 0x2D4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bShowBottomArrows : 1;                             // Mask: 0x1, PropSize: 0x10x2D5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bShowTopArrows : 1;                                // Mask: 0x2, PropSize: 0x10x2D5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bHideKeybindsWhenAbilityUnavailable : 1;           // Mask: 0x4, PropSize: 0x10x2D5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bShouldCollapseItemWidgetBorder : 1;               // Mask: 0x8, PropSize: 0x10x2D5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        DoNotPlaySelectionAnimation : 1;                   // Mask: 0x10, PropSize: 0x10x2D5(0x1)(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIsAthenaQuickBar : 1;                             // Mask: 0x20, PropSize: 0x10x2D5(0x1)(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bKeybindsHidden : 1;                               // Mask: 0x40, PropSize: 0x10x2D5(0x1)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_1F4 : 1;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class EFortItemCardSize                 ItemCardSize;                                      // 0x2D6(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_203A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             Item;                                              // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortInputData*                        InputData;                                         // 0x2E0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortQuickBarSlotBase* GetDefaultObj();

	void UpdateKeyBindingVisibility();
	void UpdateKeyBindingText();
	void UpdateItemCardsVisibility();
	void SetTopComboSwitcherVisibility(enum class ESlateVisibility InVisibility);
	void SetSlotSelected(bool bSelected);
	void SetBottomComboSwitcherVisibility(enum class ESlateVisibility InVisibility);
	void Resize(enum class EFortItemCardSize CardSize);
	void RefreshItem();
	void OnRefreshItem();
	void MinimizeSlot(bool bShouldSkipAnimation);
	void MaximizeSlot(bool bShouldSkipAnimation);
	class FName GetKeyBindingActionKeyboard();
	class FName GetKeyBindingActionGamepad();
	class FName GetKeyBindingAction();
};

// 0x0 (0x328 - 0x328)
// Class FortniteUI.FortRedeemCodeBase
class UFortRedeemCodeBase : public UFortActivatablePanel
{
public:

	static class UClass* StaticClass();
	static class UFortRedeemCodeBase* GetDefaultObj();

	void RedeemFriendCode(const class FString& FriendCode);
	void OnRedeemFriendCodeComplete(bool bSuccess, enum class ERedeemCodeFailureReason FailureReason);
};

// 0x48 (0x340 - 0x2F8)
// Class FortniteUI.FortRedirectToEpicAccountWidget
class UFortRedirectToEpicAccountWidget : public UCommonActivatablePanel
{
public:
	TArray<struct FPlatformSupportDesc>          SupportedPlatforms;                                // 0x2F8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FPlatformSupportDesc                  DefaultValues;                                     // 0x308(0x20)(Edit, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Title;                                        // 0x328(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Desc;                                         // 0x330(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_CreateAccount;                              // 0x338(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortRedirectToEpicAccountWidget* GetDefaultObj();

	void SetLoginType(enum class EFortLoginAccountType LoginType);
};

// 0x30 (0x328 - 0x2F8)
// Class FortniteUI.FortRefundConfirmation
class UFortRefundConfirmation : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_2040[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      Text_AreYouSure;                                   // 0x308(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_RefundsRemaining;                             // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Yes;                                        // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_No;                                         // 0x320(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortRefundConfirmation* GetDefaultObj();

	void SetRefundsRemainingText(int32 RefundsRemaining, int32 TotalRefunds);
};

// 0x10 (0x308 - 0x2F8)
// Class FortniteUI.FortRejoinWindowBase
class UFortRejoinWindowBase : public UCommonActivatablePanel
{
public:
	class UCommonTextBlock*                      RejoinTime;                                        // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2041[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortRejoinWindowBase* GetDefaultObj();

	void StopTimeout();
	void StartTimeout(float TimeoutTime);
	void OnTimeoutTimeReached();
};

// 0x8 (0x240 - 0x238)
// Class FortniteUI.FortReplayBase
class UFortReplayBase : public UFortHUDElementWidget
{
public:
	class UFortReplayContext*                    ReplayContext;                                     // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortReplayBase* GetDefaultObj();

	void SetReplayContext(class UFortReplayContext* InReplayContext);
	void OnTimelineRangeChanged(float StartTime, float EndTime);
	void OnReplayPausedChanged(bool bIsPaused);
	void OnPlaybackTimeChanged(float NowTime);
};

// 0x8 (0x330 - 0x328)
// Class FortniteUI.FortReplayViewSettingsTabBase
class UFortReplayViewSettingsTabBase : public UFortActivatablePanel
{
public:
	class AFortPlayerControllerSpectating*       SpectatingPC;                                      // 0x328(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortReplayViewSettingsTabBase* GetDefaultObj();

	void SetWidgetValues();
	void ResetToDefault();
	void OnCameraTypeChanged(class AFortPlayerControllerSpectating* FortPlayerControllerSpectating, enum class ESpectatorCameraType CameraType);
	void InitializeWidgets();
	void CenterOnTab();
};

// 0x0 (0x328 - 0x328)
// Class FortniteUI.FortReportActioned
class UFortReportActioned : public UFortActivatablePanel
{
public:

	static class UClass* StaticClass();
	static class UFortReportActioned* GetDefaultObj();

};

// 0x0 (0x210 - 0x210)
// Class FortniteUI.FortResultsSummaryScreenWidget
class UFortResultsSummaryScreenWidget : public UCommonUserWidget
{
public:

	static class UClass* StaticClass();
	static class UFortResultsSummaryScreenWidget* GetDefaultObj();

	void GetTotalScoreSortedScoreIndices(class UFortUIScoreReport* ScoreReport, TArray<int32>* OutSortedScoreIndices);
};

// 0x28 (0x238 - 0x210)
// Class FortniteUI.FortResultsTeleportScreenWidget
class UFortResultsTeleportScreenWidget : public UCommonUserWidget
{
public:
	float                                        ExitTime;                                          // 0x210(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2044[0x24];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortResultsTeleportScreenWidget* GetDefaultObj();

	void StartExitTimer();
	void OnExitTimerFinished();
	void OnExitTimeRemainingUpdated(int32 TimeRemainingSeconds);
	void OnExitTimePercentagePassedUpdated(float Percent);
};

// 0xC0 (0x3B8 - 0x2F8)
// Class FortniteUI.FortResultsWidget
class UFortResultsWidget : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_2047[0x78];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AdditionalGrantedMissionPoints;                    // 0x370(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2048[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortItem*>                     RewardedBadges;                                    // 0x378(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UFortItem*>                     MissedBadges;                                      // 0x388(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UFortItem*>                     RewardedItems;                                     // 0x398(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UFortItem*>                     RewardedAccountItems;                              // 0x3A8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortResultsWidget* GetDefaultObj();

	void TriggerSetupTeleportCameraEvent();
	void SendEndOfRoundUpVoteAnalytic(struct FUniqueNetIdRepl& TargetId, const class FString& TargetPlayerName);
	void SendEndOfRoundScreenAnalytic(const class FString& ScreenName, bool Skipped, float TimeSpent);
	void SendEndOfRoundFriendInviteAnalytic(struct FUniqueNetIdRepl& TargetId, const class FString& TargetPlayerName);
	void RequestExitZone();
	void LogXPData();
	bool IsDataFinalized();
	enum class EFortCompletionResult GetZoneCompletionResult();
	int32 GetTotalMissionPointsEarned();
	void GetRewardsByType(enum class EFortRewardItemType Type, TArray<class UFortItem*>* OutRewards);
};

// 0x28 (0x260 - 0x238)
// Class FortniteUI.FortReticle
class UFortReticle : public UFortHUDElementWidget
{
public:
	uint8                                        Pad_2049[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortReticle* GetDefaultObj();

	void OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void OnReticleColorChanged();
	void OnPawnSet();
	void OnContextualReticleChanged();
};

// 0x18 (0x8A0 - 0x888)
// Class FortniteUI.FortReturnReasonEntry
class UFortReturnReasonEntry : public UCommonButton
{
public:
	uint8                                        Pad_204A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               InternalData;                                      // 0x890(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Name;                                         // 0x898(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortReturnReasonEntry* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class FortniteUI.FortRewardNotificationData
class UFortRewardNotificationData : public UObject
{
public:
	enum class EFrontEndRewardType               RewardType;                                        // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_204C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortRewardNotificationData* GetDefaultObj();

	bool GetIconBrush(struct FSlateBrush* IconBrush, enum class EFortBrushSize BrushSize);
};

// 0x70 (0xA0 - 0x30)
// Class FortniteUI.FortRewardCollectionBookData
class UFortRewardCollectionBookData : public UFortRewardNotificationData
{
public:
	struct FFortCollectionBookRewards            CollectionBookRewards;                             // 0x30(0x70)(BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortRewardCollectionBookData* GetDefaultObj();

	bool GetIconBrush(struct FSlateBrush* IconBrush, enum class EFortBrushSize BrushSize);
};

// 0x28 (0x238 - 0x210)
// Class FortniteUI.FortRewardNotificationSubWidget
class UFortRewardNotificationSubWidget : public UCommonUserWidget
{
public:
	UMulticastDelegateProperty_                  OnTransitionInComplete;                            // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTransitionOutComplete;                           // 0x220(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	uint8                                        Pad_205F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortRewardNotificationSubWidget* GetDefaultObj();

	void TransitionOutBegin();
	void TransitionOut();
	void TransitionInBegin();
	void TransitionIn();
	void SetPrimaryActionText(class FText Text);
	void SetPrimaryActionHidden();
	void SetPrimaryActionEnabled(bool bEnabled);
	void SetInputActionHandlerState(class UDataTable* DataTable, class FName RowName, enum class EInputActionState State);
	void RemoveInputActionHandler(const struct FDataTableRowHandle& InputActionRow);
	void RemoveAllInputActionHandlers();
	void OnPrimaryAction();
	void OnNavigationUp();
	void OnNavigationRight();
	void OnNavigationLeft();
	void OnNavigationDown();
	void OnDeactivated();
	void OnActivated();
	void IsPrimaryActionHidden(bool* bHidden);
	void IsPrimaryActionEnabled(bool* bEnabled);
	void InspectItem(class UFortItem* ItemToInspect);
	void Init(class UFortRewardNotificationWidget* MainWidget);
	void AddInputActionHandler(class UDataTable* DataTable, class FName RowName, UDelegateProperty_ CommittedEvent);
};

// 0x0 (0x238 - 0x238)
// Class FortniteUI.FortRewardConversationWidget
class UFortRewardConversationWidget : public UFortRewardNotificationSubWidget
{
public:

	static class UClass* StaticClass();
	static class UFortRewardConversationWidget* GetDefaultObj();

	bool IsValidConversation(class UFortConversation* Conversation);
	void GetDataFromSentence(struct FFortConversationSentence& Sentence, class FText* Text, class UTexture2D** TalkingHeadTexture);
};

// 0x0 (0x30 - 0x30)
// Class FortniteUI.FortRewardDifficultyIncrease
class UFortRewardDifficultyIncrease : public UFortRewardNotificationData
{
public:

	static class UClass* StaticClass();
	static class UFortRewardDifficultyIncrease* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class FortniteUI.FortRewardEpicQuestData
class UFortRewardEpicQuestData : public UFortRewardNotificationData
{
public:
	class UFortQuestItem*                        Quest;                                             // 0x30(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortRewardEpicQuestData* GetDefaultObj();

	bool GetIconBrush(struct FSlateBrush* IconBrush, enum class EFortBrushSize BrushSize);
};

// 0x8 (0x38 - 0x30)
// Class FortniteUI.FortRewardExpeditionData
class UFortRewardExpeditionData : public UFortRewardNotificationData
{
public:
	class UFortExpeditionItem*                   Expedition;                                        // 0x30(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortRewardExpeditionData* GetDefaultObj();

	bool GetIconBrush(struct FSlateBrush* IconBrush, enum class EFortBrushSize BrushSize);
};

// 0x68 (0x2A0 - 0x238)
// Class FortniteUI.FortRewardExpeditionWidget
class UFortRewardExpeditionWidget : public UFortRewardNotificationSubWidget
{
public:
	UMulticastDelegateProperty_                  OnMcpError;                                        // 0x238(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2064[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortRewardExpeditionWidget* GetDefaultObj();

	void OnCollectExpeditionCompleted(class UFortExpeditionItem* Expedition, bool bSucceeded, TArray<struct FFortItemInstanceQuantityPair>& Rewards);
	void CollectExpedition(class UFortExpeditionItem* Expedition);
};

// 0x8 (0x38 - 0x30)
// Class FortniteUI.FortRewardGiftBoxData
class UFortRewardGiftBoxData : public UFortRewardNotificationData
{
public:
	class UFortGiftBoxItem*                      GiftBox;                                           // 0x30(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortRewardGiftBoxData* GetDefaultObj();

	bool GetIconBrush(struct FSlateBrush* IconBrush, enum class EFortBrushSize BrushSize);
};

// 0x20 (0x8A8 - 0x888)
// Class FortniteUI.FortRewardInfoButton
class UFortRewardInfoButton : public UCommonButton
{
public:
	uint8                                        Pad_2066[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelWidget*                          ItemCardPanel;                                     // 0x890(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFortItemCardSize                 ItemCardSize;                                      // 0x898(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDisplayAsRewardCard;                              // 0x899(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2067[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             ItemInstance;                                      // 0x8A0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortRewardInfoButton* GetDefaultObj();

	void SetShowDescriptionBP(bool bInShowDescription);
	void SetShowDescription(bool bInShowDescription);
	void SetItemInstanceQuantityPair(struct FFortItemInstanceQuantityPair& ItemQuantityPair);
	void HandleDifferentItemOrQuantitySetBP();
	int32 GetQuantity();
	class UFortItem* GetItemInstance();
};

// 0x88 (0x298 - 0x210)
// Class FortniteUI.FortRewardInfoWidget
class UFortRewardInfoWidget : public UCommonUserWidget
{
public:
	class UPanelWidget*                          RewardListWidget;                                  // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMargin                               RewardWidgetPadding;                               // 0x218(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x228(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x229(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShowDescription;                                  // 0x22A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAllowItemInteraction;                             // 0x22B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxNumRewardsShown;                                // 0x22C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortRewardInfoButton>     OrWidgetType;                                      // 0x230(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortRewardInfoButton>     RewardInfoButtonType;                              // 0x238(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2069[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonGroup*                    ButtonGroup;                                       // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_206A[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortRewardInfoWidget* GetDefaultObj();

	void SetRewards(struct FFortRewardInfo& RewardsIn);
	void SetReward(struct FFortItemQuantityPair& RewardIn);
	void SetButtonGroup(class UCommonButtonGroup* InButtonGroup);
	bool ContainsReward(const class FString& TemplateIdToCheck);
};

// 0x8 (0x38 - 0x30)
// Class FortniteUI.FortRewardItemCacheData
class UFortRewardItemCacheData : public UFortRewardNotificationData
{
public:
	class UFortItem*                             ItemCache;                                         // 0x30(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortRewardItemCacheData* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class FortniteUI.FortRewardMissionAlertData
class UFortRewardMissionAlertData : public UFortRewardNotificationData
{
public:

	static class UClass* StaticClass();
	static class UFortRewardMissionAlertData* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class FortniteUI.FortRewardMissionData
class UFortRewardMissionData : public UFortRewardNotificationData
{
public:

	static class UClass* StaticClass();
	static class UFortRewardMissionData* GetDefaultObj();

};

// 0x0 (0x238 - 0x238)
// Class FortniteUI.FortRewardNewQuestWidget
class UFortRewardNewQuestWidget : public UFortRewardNotificationSubWidget
{
public:

	static class UClass* StaticClass();
	static class UFortRewardNewQuestWidget* GetDefaultObj();

	bool IsValidConversation(class UFortConversation* Conversation);
	void GetDataFromSentence(struct FFortConversationSentence& Sentence, class FText* Text, class UTexture2D** TalkingHeadTexture);
};

// 0xB8 (0x3B0 - 0x2F8)
// Class FortniteUI.FortRewardNotificationWidget
class UFortRewardNotificationWidget : public UCommonActivatablePanel
{
public:
	TArray<class UFortRewardNotificationData*>   NotificationDataList;                              // 0x2F8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_206C[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UOverlay*                              OverlayMain;                                       // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortSwipeDetector                    SwipeDetector;                                     // 0x320(0x70)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	uint8                                        Pad_206D[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortRewardNotificationWidget* GetDefaultObj();

	void SetPrimaryActionText(class FText Text);
	void SetPrimaryActionHidden();
	void SetPrimaryActionEnabled(bool bEnabled);
	void ResetAllRewardData();
	void OnPrimaryActionTextChanged(class FText& Text);
	void OnPrimaryActionHidden();
	void OnPrimaryActionEnabled();
	void OnPrimaryActionDisabled();
	void OnNavigationUp();
	void OnNavigationRight();
	void OnNavigationLeft();
	void OnNavigationDown();
	void IsPrimaryActionHidden(bool* bHidden);
	void IsPrimaryActionEnabled(bool* bEnabled);
	void InspectItem(class UFortItem* ItemToInspect);
	void AddQuestData(class UFortQuestItem* Quest);
	void AddMissionData();
	void AddMissionAlertData();
	void AddItemCacheRewardData(class UFortItem* ItemCache);
	void AddGiftBoxData();
	void AddExpeditionData(class UFortExpeditionItem* ExpeditionItem);
	void AddEpicQuestData(class UFortQuestItem* Quest);
	void AddDifficultyIncreaseRewardData();
	void AddCollectionBookData(struct FFortCollectionBookRewards& CollectionBookRewards);
};

// 0x8 (0x38 - 0x30)
// Class FortniteUI.FortRewardQuestData
class UFortRewardQuestData : public UFortRewardNotificationData
{
public:
	class UFortQuestItem*                        Quest;                                             // 0x30(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortRewardQuestData* GetDefaultObj();

	bool GetIconBrush(struct FSlateBrush* IconBrush, enum class EFortBrushSize BrushSize);
};

// 0x998 (0xA98 - 0x100)
// Class FortniteUI.FortRichTextBlock
class UFortRichTextBlock : public UWidget
{
public:
	class FText                                  Text;                                              // 0x100(0x18)(Edit, NativeAccessSpecifierPublic)
	class UDataTable*                            StyleSet;                                          // 0x118(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               TextMargin;                                        // 0x120(0x10)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        WrapTextAt;                                        // 0x130(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoWrapText;                                      // 0x134(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextJustify                      Justification;                                     // 0x135(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_206F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          HyperlinkButtonStyle;                              // 0x138(0x278)(Edit, NativeAccessSpecifierPublic)
	struct FScrollBarStyle                       ScrollBarStyle;                                    // 0x3B0(0x4D0)(Edit, NativeAccessSpecifierPublic)
	bool                                         AllowContextMenu;                                  // 0x880(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2070[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UFortKeybindWidget>        KeybindWidgetClass;                                // 0x888(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2071[0x208];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortRichTextBlock* GetDefaultObj();

	void SetText(class FText InText);
};

// 0x40 (0x338 - 0x2F8)
// Class FortniteUI.FortSignInConsole
class UFortSignInConsole : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_2073[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UEditableText*                         Email;                                             // 0x308(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_SendCode;                                   // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UEditableText*                         Passcode;                                          // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Error;                                        // 0x320(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_SubmitCode;                                 // 0x328(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidgetSwitcher*                       Switcher_Main;                                     // 0x330(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortSignInConsole* GetDefaultObj();

	void UpdatePasscodeStatus(class FText& Text);
	void UpdateEmailStatus(class FText& Text);
	void HandleTextCommitted(class FText& Text, enum class ETextCommit CommitMethod);
};

// 0x70 (0x368 - 0x2F8)
// Class FortniteUI.FortSignInWidget
class UFortSignInWidget : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_2075[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonBorderStyle>        NormalBorderStyle;                                 // 0x308(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCommonBorderStyle>        HighlightBorderStyle;                              // 0x310(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                ForgotPasswordURL;                                 // 0x318(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2076[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UEditableText*                         Email;                                             // 0x338(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UEditableText*                         Password;                                          // 0x340(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonBorder*                         EmailBorder;                                       // 0x348(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonBorder*                         PasswordBorder;                                    // 0x350(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         SignInButton;                                      // 0x358(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_ForgotPassword;                             // 0x360(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortSignInWidget* GetDefaultObj();

	void UpdateSignInButton(class FText& Text);
	void StartSignIn();
	void HandleTextCommitted(class FText& Text, enum class ETextCommit CommitMethod);
};

// 0xE8 (0x200 - 0x118)
// Class FortniteUI.FortSkillTreeCanvas
class UFortSkillTreeCanvas : public UPanelWidget
{
public:
	uint8                                        Pad_207A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             OriginForParallaxEffect;                           // 0x120(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_207B[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonGroup*                    NodeButtonGroup;                                   // 0x160(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_207C[0x98];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSkillTreeCanvas* GetDefaultObj();

	void HandleButtonGroupSelectionCleared();
	void HandleButtonGroupSelectionChanged(class UCommonButton* SelectedButton, int32 ButtonIndex);
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortSkillTreeCanvasEditorInterface
class IFortSkillTreeCanvasEditorInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IFortSkillTreeCanvasEditorInterface* GetDefaultObj();

};

// 0x28 (0x8B0 - 0x888)
// Class FortniteUI.FortSkillTreeCanvasNode
class UFortSkillTreeCanvasNode : public UCommonButton
{
public:
	uint8                                        Pad_2084[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PageId;                                            // 0x890(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NodeID;                                            // 0x898(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldHideConnectorsToDependents;                  // 0x8A0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2085[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSkillTreeCanvasNode* GetDefaultObj();

	bool TryGetStaticSkillTreeNodeData(struct FHomebaseNode* OutNodeData);
	bool TryGetSkillTreeNodeState(struct FHomebaseNodeState* OutNodeState);
	bool TryGetNodeDisplayData(struct FFortSkillTreeNodeDisplayData* OutDisplayData);
	void HandleSkillTreeNodeStateChanged();
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortSkillTreeCanvasEntityInterface
class IFortSkillTreeCanvasEntityInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IFortSkillTreeCanvasEntityInterface* GetDefaultObj();

	void PlayOutroTransitionBP(enum class EFortAnimSpeed AnimSpeed);
	void PlayIntroTransitionBP(enum class EFortAnimSpeed AnimSpeed);
};

// 0x18 (0x50 - 0x38)
// Class FortniteUI.FortSkillTreeCanvasSlot
class UFortSkillTreeCanvasSlot : public UPanelSlot
{
public:
	struct FVector2D                             BasePosition;                                      // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ParallaxPanningFactor;                             // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ZOrder;                                            // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2089[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSkillTreeCanvasSlot* GetDefaultObj();

	void SetZOrder(int32 InZOrder);
	void SetPosition(const struct FVector2D& InPosition);
	int32 GetZOrder();
	struct FVector2D GetPosition();
	struct FVector2D GetBasePosition();
};

// 0x18 (0x8A0 - 0x888)
// Class FortniteUI.FortSkillTreePageSelectorButton
class UFortSkillTreePageSelectorButton : public UCommonButton
{
public:
	class FName                                  SkillTreePageId;                                   // 0x888(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortSkillTreeViewer>      SkillTreeViewerType;                               // 0x890(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_208F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSkillTreePageSelectorButton* GetDefaultObj();

	bool TryGetStaticSkillTreePageData(struct FHomebaseNodePage* OutStaticData);
	bool TryGetSkillTreeNodeState(class FName NodeID, struct FHomebaseNodeState* OutNodeState);
	bool IsSkillTreePageLocked();
	void HandleRefreshSkillTreeNodePage();
	void HandleDifferentSkillTreePageSet();
	class FText GetButtonNodeCompletionText();
};

// 0x20 (0x318 - 0x2F8)
// Class FortniteUI.FortSkillTreeLandingPage
class UFortSkillTreeLandingPage : public UCommonActivatablePanel
{
public:
	TArray<struct FDataTableRowHandle>           SkillsToLinkTo;                                    // 0x2F8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDataTableRowHandle>           ResearchToLinkTo;                                  // 0x308(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortSkillTreeLandingPage* GetDefaultObj();

	void SetupEventBasedSkillTreePages(TArray<class FString>& ActiveEventFlags);
	class UFortSkillTreePageSelectorButton* CreateAndAddPageButton(class FName& SkillTreePageId, enum class ESkillTreePageType PageType, bool bNewRow);
	bool ClearEventSkillTrees();
};

// 0x10 (0x220 - 0x210)
// Class FortniteUI.FortSkillTreeNodeDetailsPanel
class UFortSkillTreeNodeDetailsPanel : public UCommonUserWidget
{
public:
	class FName                                  IdOfSkillTreeNodeToRepresent;                      // 0x210(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_209C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSkillTreeNodeDetailsPanel* GetDefaultObj();

	bool TryGetSkillTreeNodeState(struct FHomebaseNodeState* OutNodeState);
	bool TryGetNodeSquadAttributeData(struct FHomebaseNode& HomebaseNode, class FText* Name, class FText* Description, struct FFortMultiSizeBrush* Brush);
	bool TryGetNodeDisplayDataFromID(class FName HomeBaseNodeID, struct FFortSkillTreeNodeDisplayData* OutDisplayData);
	bool TryGetNodeDisplayData(struct FHomebaseNode& HomebaseNode, struct FFortSkillTreeNodeDisplayData* OutDisplayData);
	void SetSkillTreeNodeToRepresent(class FName& SkillTreeNodeId);
	bool HasSkillTreeNodeToRepresent();
	void HandleSkillTreeNodeStateChanged();
	void HandleDifferentSkillTreeNodeToRepresentSetBP();
};

// 0x50 (0x80 - 0x30)
// Class FortniteUI.FortSkillTreeNodeDisplayDataRegistry
class UFortSkillTreeNodeDisplayDataRegistry : public UDataAsset
{
public:
	TMap<class FName, struct FFortSkillTreeNodeDisplayData> SkillTreeNodeStyleIdToDisplayDataMap;              // 0x30(0x50)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortSkillTreeNodeDisplayDataRegistry* GetDefaultObj();

};

// 0x48 (0x258 - 0x210)
// Class FortniteUI.FortSkillTreePageWidget
class UFortSkillTreePageWidget : public UCommonUserWidget
{
public:
	class FName                                  SkillTreePageId;                                   // 0x210(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20A0[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortSkillTreeCanvas*                  SkillTreeCanvas;                                   // 0x250(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortSkillTreePageWidget* GetDefaultObj();

	bool TryGetStaticSkillTreePageData(struct FHomebaseNodePage* OutStaticData);
	void PlayOutroTransitionBP(enum class EFortAnimSpeed AnimSpeed);
	void PlayIntroTransitionBP(enum class EFortAnimSpeed AnimSpeed);
};

// 0x78 (0xA8 - 0x30)
// Class FortniteUI.FortSkillTreePageWidgetRegistry
class UFortSkillTreePageWidgetRegistry : public UDataAsset
{
public:
	TMap<class FName, TSubclassOf<class UUserWidget>> SkillTreePageIdToWidgetTypeMap;                    // 0x30(0x50)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_20A1[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSkillTreePageWidgetRegistry* GetDefaultObj();

};

// 0xC8 (0x3C0 - 0x2F8)
// Class FortniteUI.FortSkillTreeViewer
class UFortSkillTreeViewer : public UCommonActivatablePanel
{
public:
	UMulticastDelegateProperty_                  OnNodeSelectionChangedEvent;                       // 0x2F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FMargin                               PageDisplayAreaMargins;                            // 0x308(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UFortSkillTreePageWidget*              CurrentPageWidget;                                 // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                              PageHostOverlay;                                   // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   BackOutInputAction;                                // 0x328(0x10)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, class UFortSkillTreePageWidget*> PageIdToWidgetCache;                               // 0x338(0x50)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	float                                        ZoomLevel;                                         // 0x388(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_20AC[0x34];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSkillTreeViewer* GetDefaultObj();

	bool TryGetSkillTreePageStaticData(struct FHomebaseNodePage* OutData);
	void ShowPage(class FName& SkillTreePageId, enum class EFortAnimSpeed TransitionSpeed);
	void OnNodeSelectionChanged__DelegateSignature();
	void NavigateTo(class FName& SkillTreeNodeId, bool ShouldSelectNode, enum class EFortAnimSpeed TransitionSpeed);
	void HandleViewParametersChangedBP();
	void HandleNodeSelectionChangedBP();
	void HandleDifferentPageShown();
	void HandleBackOutAction(bool* Passthrough);
	void GetViewParameters(struct FVector2D* OutPanOffset, float* OutZoomLevel);
	class FName GetSelectedNodeId();
	int32 GetPageTotalNodes(class FName& SkillTreePageId);
	bool GetPageLocked(class FName& SkillTreePageId);
	int32 GetPageAquiredNodes(class FName& SkillTreePageId);
	void GetCurrenciesNeededForPage(class FName& SkillTreePageId, TArray<class UFortItemDefinition*>* OutCurrencies);
	void DrillDownToSubPage(class FName& DrillDownSkillTreeNodeId, enum class EFortAnimSpeed TransitionSpeed);
	bool CanBackOutOfSubPage();
	void BackOutOfSubPage(enum class EFortAnimSpeed TransitionSpeed);
};

// 0x30 (0x8B8 - 0x888)
// Class FortniteUI.FortSocialImportButton
class UFortSocialImportButton : public UCommonButton
{
public:
	uint8                                        Pad_20AF[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortSocialImportPanel*                ActivePanel;                                       // 0x8A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ESocialImportPanelType            DesiredPanelType;                                  // 0x8A8(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_20B0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UFortSocialImportPanel>    SocialImportPanelClass;                            // 0x8B0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortSocialImportButton* GetDefaultObj();

	void OnCaptionGenerated(class FText& Caption);
	void HandleDynamicSocialImportDialogClosed();
};

// 0x68 (0x390 - 0x328)
// Class FortniteUI.FortSocialImportPanel
class UFortSocialImportPanel : public UFortActivatablePanel
{
public:
	UMulticastDelegateProperty_                  OnSocialImportPanelClosed;                         // 0x328(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_20B4[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetSwitcher*                       Switcher_AddFriends;                               // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Import;                                     // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Cancel;                                     // 0x370(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Yes;                                        // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_No;                                         // 0x380(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_OptOut;                                     // 0x388(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortSocialImportPanel* GetDefaultObj();

	void ShowPanel();
	void OnWaitingViewRequested();
	void OnPanelTypeSet(enum class ESocialImportPanelType NewType);
	void OnLauncherImportOpened();
	void OnIncentivizedSet(bool bIncentivized);
	void OnImportViewRequested();
	void OnClaimViewRequested();
	bool GetSocialPlatform(enum class ESocialImportPanelPlatform* OutPlatform);
};

// 0x0 (0x218 - 0x218)
// Class FortniteUI.FortSocialItemWidget
class UFortSocialItemWidget : public UFortUserWidget
{
public:

	static class UClass* StaticClass();
	static class UFortSocialItemWidget* GetDefaultObj();

	void SetSocialItem(class UFortSocialItem* InSocialItem);
};

// 0x708 (0x808 - 0x100)
// Class FortniteUI.FortSocialListView
class UFortSocialListView : public UWidget
{
public:
	UDelegateProperty_                           GenerateItemEvent;                                 // 0x100(0x10)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortSocialItemWidget>     SocialItemWidgetType;                              // 0x110(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTableRowStyle                        ListRowStyle;                                      // 0x118(0x6B8)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<class UFortSocialItem*>               SocialList;                                        // 0x7D0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_20B6[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSocialListView* GetDefaultObj();

	void SetList(TArray<class UFortSocialItem*>& InList);
};

// 0x18 (0x340 - 0x328)
// Class FortniteUI.FortSocialMenuPanel
class UFortSocialMenuPanel : public UFortActivatablePanel
{
public:
	uint8                                        Pad_20B8[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortSocialMenuSlateWrapperWidget*     SlateWrapper_Social;                               // 0x338(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortSocialMenuPanel* GetDefaultObj();

	void SetOnSocialMenuPanelClosedDelegate(UDelegateProperty_& OnPanelClosedDelegate);
};

// 0x20 (0x120 - 0x100)
// Class FortniteUI.FortSocialMenuSlateWrapperWidget
class UFortSocialMenuSlateWrapperWidget : public UWidget
{
public:
	uint8                                        Pad_20B9[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSocialMenuSlateWrapperWidget* GetDefaultObj();

};

// 0x67B8 (0x67E8 - 0x30)
// Class FortniteUI.FortSocialStyle
class UFortSocialStyle : public UDataAsset
{
public:
	struct FSocialStyle                          Style;                                             // 0x30(0x67B0)(Edit, NativeAccessSpecifierPublic)
	class USocialStyleDataAsset*                 OverrideStyle;                                     // 0x67E0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortSocialStyle* GetDefaultObj();

};

// 0x10 (0x308 - 0x2F8)
// Class FortniteUI.FortSplashScreenWidget
class UFortSplashScreenWidget : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_20BB[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSplashScreenWidget* GetDefaultObj();

};

// 0x18 (0x228 - 0x210)
// Class FortniteUI.FortSquadIcon
class UFortSquadIcon : public UCommonUserWidget
{
public:
	class FName                                  Name;                                              // 0x210(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    ImageSize;                                         // 0x218(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20BD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UImage*                                Icon;                                              // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortSquadIcon* GetDefaultObj();

	void SetSquad(class FName& InName);
	void HandleDifferentSquadSetBP();
};

// 0x10 (0x220 - 0x210)
// Class FortniteUI.FortSquadLandingPageDefenderSquadDetails
class UFortSquadLandingPageDefenderSquadDetails : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                      OutpostName;                                       // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonNumericTextBlock*               PowerRating;                                       // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortSquadLandingPageDefenderSquadDetails* GetDefaultObj();

	void SetDefenderSquadInfo(struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);
	void HandleDefenderSquadInfoSetBP(struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);
	void HandleAddDefenderSquadMemberBP(class FName& SquadId, int32 Index);
};

// 0x8 (0x218 - 0x210)
// Class FortniteUI.FortSquadLandingPageDefenderSquadDetailsLocked
class UFortSquadLandingPageDefenderSquadDetailsLocked : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                      OutpostName;                                       // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortSquadLandingPageDefenderSquadDetailsLocked* GetDefaultObj();

	void SetDefenderSquadInfo(struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);
};

// 0x8 (0x218 - 0x210)
// Class FortniteUI.FortSquadLandingPageDefenderSummary
class UFortSquadLandingPageDefenderSummary : public UCommonUserWidget
{
public:
	uint8                                        Pad_20CE[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSquadLandingPageDefenderSummary* GetDefaultObj();

	void HandleClearDefenderSquadDetailsBP();
	void HandleAddLockedDefenderSquadDetailsBP(const struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);
	void HandleAddDefenderSquadDetailsBP(const struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);
};

// 0x88 (0x298 - 0x210)
// Class FortniteUI.FortSquadLandingPageSurvivorSummary
class UFortSquadLandingPageSurvivorSummary : public UCommonUserWidget
{
public:
	class UFortSquadStatValueWithIcon*           FortitudeStatValue;                                // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortSquadStatValueWithIcon*           OffenseStatValue;                                  // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortSquadStatValueWithIcon*           ResistanceStatValue;                               // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortSquadStatValueWithIcon*           TechStatValue;                                     // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20CF[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSquadLandingPageSurvivorSummary* GetDefaultObj();

	void HandleClearSetBonusSummaryLineItemsBP();
	void HandleAddSetBonusSummaryLineItemBP(const struct FFortAttributeModifierAccumulation& AttributeModifierAccumulation);
};

// 0xD0 (0xF8 - 0x28)
// Class FortniteUI.FortSquadManagementItemViewContextBase
class UFortSquadManagementItemViewContextBase : public UObject
{
public:
	uint8                                        Pad_20D0[0xD0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSquadManagementItemViewContextBase* GetDefaultObj();

};

// 0x8 (0x100 - 0xF8)
// Class FortniteUI.FortItemViewContext_SquadSlotsView
class UFortItemViewContext_SquadSlotsView : public UFortSquadManagementItemViewContextBase
{
public:
	uint8                                        Pad_20D1[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemViewContext_SquadSlotsView* GetDefaultObj();

};

// 0x10 (0x108 - 0xF8)
// Class FortniteUI.FortItemViewContext_SquadSlotItemPicker
class UFortItemViewContext_SquadSlotItemPicker : public UFortSquadManagementItemViewContextBase
{
public:
	uint8                                        Pad_20D2[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemViewContext_SquadSlotItemPicker* GetDefaultObj();

};

// 0x8 (0x108 - 0x100)
// Class FortniteUI.FortItemViewContext_ExpeditionSquadSlotsView
class UFortItemViewContext_ExpeditionSquadSlotsView : public UFortItemViewContext_SquadSlotsView
{
public:
	uint8                                        Pad_20D3[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemViewContext_ExpeditionSquadSlotsView* GetDefaultObj();

};

// 0x8 (0x110 - 0x108)
// Class FortniteUI.FortItemViewContext_ExpeditionSquadSlotItemPicker
class UFortItemViewContext_ExpeditionSquadSlotItemPicker : public UFortItemViewContext_SquadSlotItemPicker
{
public:
	uint8                                        Pad_20D4[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortItemViewContext_ExpeditionSquadSlotItemPicker* GetDefaultObj();

};

// 0x60 (0x270 - 0x210)
// Class FortniteUI.FortSquadSlotDetailsPanel
class UFortSquadSlotDetailsPanel : public UCommonUserWidget
{
public:
	uint8                                        Pad_20E0[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortSquadSlotItemDetailsHostPanel*    ItemDetailsPanel;                                  // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TScriptInterface<class IFortItemViewContextInterface> ItemViewContext;                                   // 0x240(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_20E1[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSquadSlotDetailsPanel* GetDefaultObj();

	bool TryGetItemToPreviewInSlot(class UFortItem** OutItemToPreviewInSlot);
	void SetScrollWidget();
	void SetIdOfSquadSlotToManageBP(class FName& SquadId, int32 SquadSlotIndex);
	bool IsSquadSlotLockedBP();
	void HandleSquadSlotStateChangedBP();
	void HandleSquadSlotRestrictionFactorsChangedBP();
	void HandleDifferentSquadSlotSetBP();
	TArray<enum class EFortSquadSlottingRestrictionReason> GetSlottingRestrictionReasons();
	class UFortItem* GetItemInSquadSlotBP(class ULocalPlayer* LocalPlayer);
	void GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex);
};

// 0x28 (0x280 - 0x258)
// Class FortniteUI.FortSquadSlotItemDetailElementWidget
class UFortSquadSlotItemDetailElementWidget : public UFortItemDetailElementWidget
{
public:
	uint8                                        Pad_20E7[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSquadSlotItemDetailElementWidget* GetDefaultObj();

	void SetIdOfSquadSlotToManageBP(class FName& SquadId, int32 SquadSlotIndex);
	bool IsSquadSlotLockedBP();
	void HandlePostDifferentSquadSlotSetBP();
	class UFortItem* GetItemInSquadSlotBP(class ULocalPlayer* LocalPlayer);
	void GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex);
};

// 0x28 (0x2A0 - 0x278)
// Class FortniteUI.FortSquadSlotItemDetailsHostPanel
class UFortSquadSlotItemDetailsHostPanel : public UFortItemDetailsHostPanel
{
public:
	uint8                                        Pad_20ED[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSquadSlotItemDetailsHostPanel* GetDefaultObj();

	void SetIdOfSquadSlotToManageBP(class FName& SquadId, int32 SquadSlotIndex);
	bool IsSquadSlotLockedBP();
	class UFortItem* GetItemInSquadSlotBP(class ULocalPlayer* LocalPlayer);
	void GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex);
};

// 0xD0 (0x378 - 0x2A8)
// Class FortniteUI.FortSquadSlotItemPicker
class UFortSquadSlotItemPicker : public UFortItemPickerBase
{
public:
	uint8                                        Pad_20F4[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnSortChanged;                                     // 0x2E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_20F5[0x80];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSquadSlotItemPicker* GetDefaultObj();

	void SetSortTypes(const struct FSquadSlotSortTypes& SquadSlotSortTypes);
	void SetIdOfSquadSlotToManageBP(class FName& SquadId, int32 SquadSlotIndex);
	void GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex);
	void FortSquadSlotSortChanged__DelegateSignature(enum class ESquadSlotSortType CurrentSortType, enum class ESquadSlotType SquadSlotType);
	void CycleSortType();
};

// 0x18 (0x8D0 - 0x8B8)
// Class FortniteUI.FortSquadSlotItemPickerTileButton
class UFortSquadSlotItemPickerTileButton : public UFortItemPickerButton
{
public:
	uint8                                        Pad_20F8[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSquadSlotItemPickerTileButton* GetDefaultObj();

	void HandleSlottingRestrictionReasonsChanged();
	void HandleItemSlottedToDifferentSquad(struct FHomebaseSquadSlotId& SquadSlotId);
	TArray<enum class EFortSquadSlottingRestrictionReason> GetSlottingRestrictionReasons();
};

// 0x0 (0x318 - 0x318)
// Class FortniteUI.FortSquadSlotSelectorPopupMenu
class UFortSquadSlotSelectorPopupMenu : public UFortPopupMenu
{
public:

	static class UClass* StaticClass();
	static class UFortSquadSlotSelectorPopupMenu* GetDefaultObj();

	class UFortSquadSlotSelectorButton* GetHostButton();
};

// 0x28 (0x2A8 - 0x280)
// Class FortniteUI.FortSquadSlotSurvivorTraitMatchesDetailWidget
class UFortSquadSlotSurvivorTraitMatchesDetailWidget : public UFortSquadSlotItemDetailElementWidget
{
public:
	bool                                         IsSquadLeaderSlot;                                 // 0x280(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         LeaderMatchesSquadType;                            // 0x281(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_20F9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SubordinatePersonalityMatchCount;                  // 0x284(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         MatchesLeaderPersonality;                          // 0x288(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_20FA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MatchingSetBonusCount;                             // 0x28C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SetBonusSize;                                      // 0x290(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_20FB[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSquadSlotSurvivorTraitMatchesDetailWidget* GetDefaultObj();

	void HandleTraitValuesUpdatedBP();
};

// 0x80 (0x908 - 0x888)
// Class FortniteUI.FortSquadSlotSelectorButton
class UFortSquadSlotSelectorButton : public UCommonButton
{
public:
	uint8                                        Pad_20FF[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnRequestOpenSquadSlotEvent;                       // 0x8B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnRequestViewInAllEvent;                           // 0x8C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UFortSquadSlotWidget*                  SquadSlotWidget;                                   // 0x8D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMenuAnchor*                           PopupMenuAnchor;                                   // 0x8D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TScriptInterface<class IFortItemViewContextInterface> ItemViewContext;                                   // 0x8E0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_2100[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSquadSlotSelectorButton* GetDefaultObj();

	void ViewInAll();
	void SquadSlotWidgetUpdated();
	void SetIdOfSquadSlotToManageBP(class FName& SquadId, int32 SquadSlotIndex);
	void OpenSquadSlot();
	bool IsSquadSlotLockedBP();
	void HandlePreDifferentSquadSlotSetBP();
	void HandlePostDifferentSquadSlotSetBP();
	class UWidget* GetPopupMenu();
	bool GetInPreviewMode();
	void GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex);
};

// 0xE8 (0x2F8 - 0x210)
// Class FortniteUI.FortSquadSlotsView
class UFortSquadSlotsView : public UCommonUserWidget
{
public:
	uint8                                        Pad_2113[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnDifferentSquadSlotSelectedEvent;                 // 0x220(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnRequestOpenSquadSlotEvent;                       // 0x230(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnRequestViewInAllEvent;                           // 0x240(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                        IndexOfSelectedSquadSlot;                          // 0x250(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSlotButtonsRequireSelection;                      // 0x254(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInPreviewMode;                                    // 0x255(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2115[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class ESquadSlotType, struct FSquadSlotSortTypes> SquadSlotSortTypesMap;                             // 0x258(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UFortCommittableButtonGroup*           SquadSlotButtonGroup;                              // 0x2A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2116[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IFortItemViewContextInterface> ItemViewContext;                                   // 0x2E0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2117[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSquadSlotsView* GetDefaultObj();

	bool TryGetStaticSquadDataBP(struct FHomebaseSquad* OutSquadData);
	bool TryGetSelectedSquadSlotSortTypes(struct FSquadSlotSortTypes* OutSlotSortTypes);
	void SetIsSelectionLocked(bool ShouldSelectionBeLocked);
	void SetInPreviewMode(bool bPreview);
	void SetIdOfSquadToManageBP(class FName& SquadId);
	void SelectSlot(int32 SquadSlotIndex);
	void OnDifferentSquadSlotSelected__DelegateSignature(int32 SquadSlotIndex);
	void HandleSelectedButtonChanged(class UCommonButton* SelectedButton, int32 ButtonIndex);
	void HandleRequestViewInAll(int32 SquadSlotIndex);
	void HandleRequestOpenSquadSlot(int32 SquadSlotIndex);
	void HandleHoveredButtonChanged(class UCommonButton* HoveredButton, int32 ButtonIndex);
	void HandleButtonDoubleClicked(class UCommonButton* CommittedButton, int32 ButtonIndex);
	void HandleButtonClicked(class UCommonButton* CommittedButton, int32 ButtonIndex);
	int32 GetIndexOfSelectedSquadSlot();
	class FName GetIdOfSquadToManageBP();
	class UFortSquadSlotSelectorButton* CreateAndAddSquadSlotButton(int32 SquadSlotIndex, struct FHomebaseSquadSlot& SquadSlotDefinition, class UWidget** OutSquadSlotButtonHost);
};

// 0x98 (0x198 - 0x100)
// Class FortniteUI.FortSquadSlotWidget
class UFortSquadSlotWidget : public UWidget
{
public:
	uint8                                        Pad_211C[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EFortItemCardSize                 ItemCardSize;                                      // 0x128(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_211D[0x3F];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMultiSizeItemCard*                SlottedItemCard;                                   // 0x168(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_211E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IFortItemViewContextInterface> ItemViewContext;                                   // 0x178(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_211F[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSquadSlotWidget* GetDefaultObj();

	void SetIdOfSquadSlotToManageBP(class FName& SquadId, int32 SquadSlotIndex);
	void SetCardSize(enum class EFortItemCardSize CardSize);
	bool IsSquadSlotLockedBP();
	class UFortItem* GetItemInSquadSlotBP(class ULocalPlayer* LocalPlayer);
	void GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex);
};

// 0x38 (0x248 - 0x210)
// Class FortniteUI.FortSquadStatsWidgetBase
class UFortSquadStatsWidgetBase : public UCommonUserWidget
{
public:
	TArray<class UFortAttributeListItem_NUI*>    OverviewStats;                                     // 0x210(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UFortAttributeList_NUI*                DetailedStats;                                     // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2121[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSquadStatsWidgetBase* GetDefaultObj();

	void RequestStatsUpdate();
	void RequestShowPreviewStats();
	void HandleSquadSlottingPreviewStateChanged();
	struct FUniqueNetIdRepl GetLocalPlayerId();
};

// 0x58 (0x268 - 0x210)
// Class FortniteUI.FortSquadStatValueWithIcon
class UFortSquadStatValueWithIcon : public UCommonUserWidget
{
public:
	struct FGameplayAttribute                    Attribute;                                         // 0x210(0x20)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    TeamAttribute;                                     // 0x230(0x20)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    ImageSize;                                         // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2124[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonNumericTextBlock*               Value;                                             // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                Icon;                                              // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortSquadStatValueWithIcon* GetDefaultObj();

	void HandleDifferentAttributeSetBP();
};

// 0x40 (0x368 - 0x328)
// Class FortniteUI.FortSquadTypeLandingPageBase
class UFortSquadTypeLandingPageBase : public UFortActivatablePanel
{
public:
	enum class EFortHomebaseSquadType            SquadType;                                         // 0x328(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2126[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   ManageInputActionRowHandle;                        // 0x330(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   BackInputActionRowHandle;                          // 0x340(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EFortFrontendInventoryFilter      ItemManagementScreenFilter;                        // 0x350(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2127[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TWeakObjectPtr<class UFortSquadSelectorButton>> SquadSelectorButtons;                              // 0x358(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortSquadTypeLandingPageBase* GetDefaultObj();

	void HandlePendingNavigationOp();
	void HandleManageInputAction(bool* bPassThrough);
	void HandleBackInputAction(bool* bPassThrough);
	class UFortSquadSelectorButton* CreateAndAddSquadButton(class FName& SquadId);
};

// 0x30 (0x240 - 0x210)
// Class FortniteUI.FortStatIcon
class UFortStatIcon : public UCommonUserWidget
{
public:
	struct FGameplayAttribute                    Attribute;                                         // 0x210(0x20)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    ImageSize;                                         // 0x230(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_212A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UImage*                                Icon;                                              // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortStatIcon* GetDefaultObj();

	void SetAttribute(struct FGameplayAttribute& InAttribute);
	void HandleDifferentAttributeSetBP();
};

// 0xB0 (0xD8 - 0x28)
// Class FortniteUI.FortStoreContext
class UFortStoreContext : public UBlueprintContextBase
{
public:
	uint8                                        Pad_214C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnCardPackOffersChanged;                           // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnStoreStateChange;                                // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FCardPackOffer>                Offers;                                            // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDateTime                             NextStoreRefresh;                                  // 0x60(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCard>                         CardList;                                          // 0x68(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        CardIndex;                                         // 0x78(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_214D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOpenedCardPack                       OpenedCardPack;                                    // 0x80(0x10)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	enum class EFortRarity                       LastCardRarity;                                    // 0x90(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_214E[0x37];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSoftObjectPath>               MissingAssetsAttemptedAsyncLoad;                   // 0xC8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortStoreContext* GetDefaultObj();

	bool StoreHasStarsForSale();
	void RealMoneyPurchaseStart();
	void RealMoneyPurchaseFinished();
	bool OpenWebPayment(const class FString& AttemptedMTXOfferId);
	enum class ECardPackPurchaseError MakePurchase(struct FCardPackOffer& Offer, int32 Quantity);
	bool MakeChoice(int32 ChoiceIdx);
	bool IsWaitingForMcp();
	struct FTimespan GetTimeUntilMarketplaceRefresh();
	struct FTimespan GetTimeUntilDailyLimitReset();
	enum class EFortStoreState GetStoreState();
	struct FLinearColor GetRarityColor(enum class EFortRarity Rarity);
	enum class EFortStoreState GetPreviousState();
	int32 GetNumUnopenedCardPacksRemaining(class UFortCardPackItemDefinition* PackType);
	bool GetCard(int32 CardIdx, struct FCard* ResultOut);
	void GetAccountItems(TArray<class UFortAccountItemDefinition*>& AccountItemDefinitions, TArray<class UFortAccountItem*>* AccountItems);
	void FreshenCache();
	void FireInteractionAnalyticsEvent(const class FString& Interaction, const class FString& Details);
	bool ExitWebPayment();
	bool ExitSummary();
	void ExitRealMoneyStore();
	bool ExitCurrencyStore();
	bool ExitCardPackStore();
	bool ErrorOccurred(const class FString& ErrorAnalytics);
	void EnterRealMoneyStore();
	bool EnterCurrencyStore(const class FString& AttemptedPurchaseCardPackId);
	bool EnterCardPackStore();
	void DismissError();
	bool ChoiceResultComplete();
	bool CardPackOpeningComplete();
	bool CardPackDestroyComplete();
	bool CardFrontRevealComplete();
	bool CardFlipComplete();
	bool CardExitComplete();
	bool CardEntryComplete();
	bool CardBackRevealComplete();
	bool CardAddedToSummaryComplete();
};

// 0x0 (0x218 - 0x218)
// Class FortniteUI.FortStorefront
class UFortStorefront : public UFortUserWidget
{
public:

	static class UClass* StaticClass();
	static class UFortStorefront* GetDefaultObj();

};

// 0x8 (0x300 - 0x2F8)
// Class FortniteUI.FortStoreRootBase
class UFortStoreRootBase : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_2150[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortStoreRootBase* GetDefaultObj();

	void OnUpdateOtherPlatformMTXMessage(bool HasOtherPlatformCurrency, class FText& CurrencyMessageLocText);
};

// 0x18 (0x40 - 0x28)
// Class FortniteUI.StoreCardObject
class UStoreCardObject : public UObject
{
public:
	struct FCard                                 Card;                                              // 0x28(0x18)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UStoreCardObject* GetDefaultObj();

};

// 0x18 (0x310 - 0x2F8)
// Class FortniteUI.FortStoreSummary
class UFortStoreSummary : public UCommonActivatablePanel
{
public:
	TArray<class UStoreCardObject*>              StoreCardObjects;                                  // 0x2F8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UCommonTileView*                       TileView;                                          // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortStoreSummary* GetDefaultObj();

	void SetCards(TArray<struct FCard>& Cards);
};

// 0x0 (0x2F8 - 0x2F8)
// Class FortniteUI.FortSubGameSelectBase
class UFortSubGameSelectBase : public UCommonActivatablePanel
{
public:

	static class UClass* StaticClass();
	static class UFortSubGameSelectBase* GetDefaultObj();

	void ShowRedeemCodeScreen(enum class ESubGame SubGame, UDelegateProperty_& CompletionDelegate);
	void GetUpsellStorefrontNames(enum class ESubGame SubGame, TArray<class FString>* OutStorefrontNames);
	bool GetShortDescription(enum class ESubGame SubGame, class FText* ShortDescription);
	bool GetIsOnSale(enum class ESubGame SubGame);
	bool GetFullDescription(enum class ESubGame SubGame, class FText* FullDescription);
};

// 0x0 (0x210 - 0x210)
// Class FortniteUI.FortSubGameSelectButtonBase
class UFortSubGameSelectButtonBase : public UCommonUserWidget
{
public:

	static class UClass* StaticClass();
	static class UFortSubGameSelectButtonBase* GetDefaultObj();

	void UpdateButtonState(bool bVisible);
};

// 0x10 (0x308 - 0x2F8)
// Class FortniteUI.FortSupportCenter
class UFortSupportCenter : public UCommonActivatablePanel
{
public:
	class UCommonButton*                         Button_OnlineSupport;                              // 0x2F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_Forums;                                     // 0x300(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortSupportCenter* GetDefaultObj();

};

// 0xD8 (0x510 - 0x438)
// Class FortniteUI.FortSurvivorSquadManagementScreen
class UFortSurvivorSquadManagementScreen : public UFortSquadManagementScreenBase
{
public:
	class UFortSurvivorSquadStatMatchesBase*     StatMatchesWidget;                                 // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2166[0xD0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSurvivorSquadManagementScreen* GetDefaultObj();

	void PlayFeedbackForSlottingPerson(class UFortWorker* Worker, int32 SlotIndex, struct FFortSurvivorSquadSlottingFeedbackData& FeedbackData);
	void AutoSlotSquad();
};

// 0x20 (0x8C8 - 0x8A8)
// Class FortniteUI.FortSurvivorSquadSelectorButton
class UFortSurvivorSquadSelectorButton : public UFortSquadSelectorButton
{
public:
	TArray<struct FGameplayAttribute>            FortStatAttributes;                                // 0x8A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGameplayAttribute>            FortTeamStatAttributes;                            // 0x8B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortSurvivorSquadSelectorButton* GetDefaultObj();

	bool TryGetSummaryStats(struct FFortSurvivorSquadSelectorButtonSummaryStats* OutSummaryStats);
	bool TryGetSquadMembers(TArray<class UFortWorker*>* OutSquadMembers);
	bool TryGetPersonalityMatches(struct FFortSurvivorSquadSelectorButtonPersonalityMatches* OutPersonalityMatches);
};

// 0x378 (0x588 - 0x210)
// Class FortniteUI.FortSurvivorSquadStatMatchBase
class UFortSurvivorSquadStatMatchBase : public UCommonUserWidget
{
public:
	uint8                                        Pad_216E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortUISurvivorSquadStatMatch         StatMatch;                                         // 0x218(0x370)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortSurvivorSquadStatMatchBase* GetDefaultObj();

	void OnStatMatchUpdated(const struct FFortUISurvivorSquadStatMatch& UpdatedMatch);
};

// 0x30 (0x270 - 0x240)
// Class FortniteUI.FortSurvivorSquadStatMatchesBase
class UFortSurvivorSquadStatMatchesBase : public UFortSquadStatDetailsWidget
{
public:
	TSubclassOf<class UFortSurvivorSquadStatMatchBase> StatMatchClass;                                    // 0x240(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSummaryView;                                      // 0x248(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2172[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortSurvivorSquadStatMatchBase*> StatMatches;                                       // 0x250(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2173[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSurvivorSquadStatMatchesBase* GetDefaultObj();

	bool TryGetStaticSquadDataBP(struct FHomebaseSquad* OutSquadData);
	void SetSummaryView(bool bInSummaryView);
	void SetIdOfSquadToManageBP(class FName& SquadId);
	void HandleDifferentSquadSetBP();
	class FName GetIdOfSquadToManageBP();
	void AddStatMatch(class UFortSurvivorSquadStatMatchBase* SetBonus);
};

// 0x20 (0x230 - 0x210)
// Class FortniteUI.FortSurvivorSquadSummaryStatItem
class UFortSurvivorSquadSummaryStatItem : public UCommonUserWidget
{
public:
	enum class EFortBrushSize                    ImageSize;                                         // 0x210(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2176[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UImage*                                Icon;                                              // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonTextBlock*                      Value;                                             // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonTextBlock*                      Name;                                              // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortSurvivorSquadSummaryStatItem* GetDefaultObj();

	void SetAttributeModifierAccumulation(struct FFortAttributeModifierAccumulation& Accumulation);
};

// 0xD0 (0x1E8 - 0x118)
// Class FortniteUI.FortSwipePanel
class UFortSwipePanel : public UContentWidget
{
public:
	struct FFortSwipeDetector                    SwipeDetector;                                     // 0x118(0x70)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bBeginSwipeOnPointerEnter;                         // 0x188(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bConsumePointerInput;                              // 0x189(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2178[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnSwipeLeft;                                       // 0x190(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnSwipeRight;                                      // 0x1A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnSwipeUp;                                         // 0x1B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnSwipeDown;                                       // 0x1C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2179[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSwipePanel* GetDefaultObj();

	void SwipeUp();
	void SwipeRight();
	void SwipeLeft();
	void SwipeDown();
	void GetSwipeInfo(int32* OutIndex, struct FVector2D* OutSwipePercentage);
};

// 0x10 (0x48 - 0x38)
// Class FortniteUI.FortSwipePanelSlot
class UFortSwipePanelSlot : public UPanelSlot
{
public:
	uint8                                        Pad_217A[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSwipePanelSlot* GetDefaultObj();

};

// 0x8 (0x1E0 - 0x1D8)
// Class FortniteUI.FortSZAwareImage
class UFortSZAwareImage : public UImage
{
public:
	bool                                         AnchorLeft;                                        // 0x1D8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AnchorRight;                                       // 0x1D9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AnchorTop;                                         // 0x1DA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AnchorBottom;                                      // 0x1DB(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_217B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortSZAwareImage* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortTabButtonInterface
class IFortTabButtonInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IFortTabButtonInterface* GetDefaultObj();

	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo);
};

// 0x78 (0x350 - 0x2D8)
// Class FortniteUI.FortTabListWidgetBase
class UFortTabListWidgetBase : public UCommonTabListWidget
{
public:
	UMulticastDelegateProperty_                  OnTabContentCreated;                               // 0x2D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FFortTabListRegistrationInfo>  PreregisteredTabInfoArray;                         // 0x2E8(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class FName, struct FFortTabButtonLabelInfo> PendingTabLabelInfoMap;                            // 0x2F8(0x50)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2180[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortTabListWidgetBase* GetDefaultObj();

	void SetTabHiddenState(class FName TabNameID, bool bHidden);
	void SetPreviousTabInputActionData(const struct FDataTableRowHandle& PreviousData);
	void SetNextTabInputActionData(const struct FDataTableRowHandle& NextData);
	bool RegisterFortTab(class FName TabNameID, TSubclassOf<class UCommonButton> TabButtonType, struct FFortTabButtonLabelInfo& LabelInfo, class UWidget* ContentWidget);
	void RegisterAllPreregisteredTabInfos();
	void OnTabContentCreated__DelegateSignature(class FName TabId, class UCommonUserWidget* TabWidget);
	bool IsLastTabActive();
	bool IsFirstTabActive();
	bool GetPreregisteredTabInfo(class FName TabNameID, struct FFortTabListRegistrationInfo* OutTabInfo);
};

// 0x8 (0x218 - 0x210)
// Class FortniteUI.FortTextStyleList
class UFortTextStyleList : public UCommonUserWidget
{
public:
	class FName                                  TextStylesPath;                                    // 0x210(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortTextStyleList* GetDefaultObj();

	TArray<TSoftClassPtr<class UCommonTextStyle>> GetTextStyles();
};

// 0x18 (0x310 - 0x2F8)
// Class FortniteUI.FortTheaterSelect
class UFortTheaterSelect : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_2190[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UOverlay*                              OverlayMain;                                       // 0x308(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortTheaterSelect* GetDefaultObj();

	void OnNavigationRight();
	void OnNavigationLeft();
	bool GetTheaterRecommendedRatingRange(const class FString& UniqueId, int32* Minimum, int32* Maximum);
	bool GetSurvivalCMSText(class FText* Title, class FText* Body);
};

// 0x20 (0x120 - 0x100)
// Class FortniteUI.FortTierIndicator
class UFortTierIndicator : public UWidget
{
public:
	TWeakObjectPtr<class UFortItem>              ItemToRepresent;                                   // 0x100(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    BrushSize;                                         // 0x108(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2192[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InterPipPadding;                                   // 0x10C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2193[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortTierIndicator* GetDefaultObj();

	void SetPreviewState(int32 TierIncrease);
	void SetItemToRepresent(class UFortItem* ItemToRepresent);
	void SetInterPipPadding(float InterPipPadding);
	void SetBrushSize(enum class EFortBrushSize BrushSize);
	void ClearPreviewState();
};

// 0x8 (0x330 - 0x328)
// Class FortniteUI.FortTimelineBase
class UFortTimelineBase : public UFortActivatablePanel
{
public:
	class UFortReplayContext*                    ReplayContext;                                     // 0x328(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortTimelineBase* GetDefaultObj();

	class UWidget* GetProgressBarWidget();
	void ClearTimelineMarkers();
	void AddReplayEventToTimeline(enum class EFortReplayEventType EventType, float RelativeTime);
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortTooltipUIContext
class UFortTooltipUIContext : public UBlueprintContextBase
{
public:

	static class UClass* StaticClass();
	static class UFortTooltipUIContext* GetDefaultObj();

	bool HasTooltipStats(class UObject* Object);
	TArray<struct FFortDisplayAttribute> GetUpgradeStats(class UObject* Object, class UFortTooltipContext* TooltipContext);
	bool GetUIDataForTag(struct FGameplayTag& Tag, struct FFortTagUIData* OutData);
	TArray<struct FFortDisplayAttribute> GetTooltipStats(class UObject* Object, class UFortTooltipContext* TooltipContext);
	bool GetTooltipStat(class UObject* Object, class UFortTooltipContext* TooltipContext, const struct FGameplayTag& Token, struct FFortDisplayAttribute* OutDisplayAttribute);
	TArray<struct FGameplayAttribute> GetTooltipAttributes(class UObject* Object);
	bool GetDisplayNameAndMultiBrushForTag(struct FGameplayTag& Tag, class FText* OutDisplayName, struct FFortMultiSizeBrush* OutBrush);
	bool GetDescription(class UObject* Object, class UFortTooltipContext* TooltipContext, TArray<class FText>* OutDescription);
	TArray<struct FFortDisplayAttribute> GetComparisonStats(class UObject* Object, class UObject* ComparisonObject, class UFortTooltipContext* TooltipContext);
	bool GetCombinedDescription(class UObject* Object, class UFortTooltipContext* TooltipContext, class FText* OutDescription);
};

// 0x8 (0x330 - 0x328)
// Class FortniteUI.FortTopBarPanel
class UFortTopBarPanel : public UFortActivatablePanel
{
public:
	uint8                                        Pad_21A2[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortTopBarPanel* GetDefaultObj();

	void AddIconToScreen(class UCommonLazyImage* Image);
};

// 0x110 (0x320 - 0x210)
// Class FortniteUI.FortTouchControlRegion
class UFortTouchControlRegion : public UCommonUserWidget
{
public:
	uint8                                        Pad_21C0[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAutorunLockZone*                  AutoRunLockTarget;                                 // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTimerHandle                          AutorunLockDelayHandle;                            // 0x258(0x8)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UFortTouchMoveStick*                   TouchMoveStick;                                    // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortTouchLookStick*                   TouchLookStick;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               AutoRunTapZone;                                    // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             MovePlayerRegionTouchOrigin;                       // 0x278(0x8)(BlueprintVisible, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             MovePlayerRegionTouchEndPos;                       // 0x280(0x8)(BlueprintVisible, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               MoveVector;                                        // 0x288(0xC)(BlueprintVisible, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             MoveStickPos;                                      // 0x294(0x8)(BlueprintVisible, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MoveStickLockMagnitudeThreshold;                   // 0x29C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MoveStickLockAngleBegin;                           // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MoveStickLockAngleEnd;                             // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MoveStickLockAccumulator;                          // 0x2A8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bLastLookTouchWasTap : 1;                          // Mask: 0x1, PropSize: 0x10x2AC(0x1)(BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bMoveStickIsTouched : 1;                           // Mask: 0x2, PropSize: 0x10x2AC(0x1)(BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bMoveStickIsLocked : 1;                            // Mask: 0x4, PropSize: 0x10x2AC(0x1)(BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bLookStickIsTouched : 1;                           // Mask: 0x8, PropSize: 0x10x2AC(0x1)(BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIsLockedOn : 1;                                   // Mask: 0x10, PropSize: 0x10x2AC(0x1)(BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_1FD : 3;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_21C2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MoveStickLockTimeToHold;                           // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MoveStickLastTouchTime;                            // 0x2B4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              LockBar_MID;                                       // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MovePlayerRegionLastTouchTime;                     // 0x2C0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             MovePlayerRegionLastTouchPos;                      // 0x2C4(0x8)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             RotateCameraRegionTouchStartPos;                   // 0x2CC(0x8)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             RotateCameraRegionLastTouchPos;                    // 0x2D4(0x8)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             RotateCameraPlayerRegionLastTouchDiff;             // 0x2DC(0x8)(BlueprintVisible, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RotateCameraLastTouchTime;                         // 0x2E4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_21C3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           RotateInertiaCurve;                                // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             LockOnStickOrigin;                                 // 0x2F8(0x8)(BlueprintVisible, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             LockOnStickCurrentPos;                             // 0x300(0x8)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             LockOnBarOffset;                                   // 0x308(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_21C4[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortTouchControlRegion* GetDefaultObj();

	void UpdateMoveStickLock(float DeltaTime);
	void UpdateLockOnStickPosition(const struct FVector2D& LocalPos);
	void UpdateLockOnStickOrigin(const struct FVector2D& LocalPos, bool IsTouchStartEvent);
	void SetMoveStickPos(const struct FVector2D& NewMoveStickPos);
	void SetLockOnStickPosition(const struct FVector2D& LocalPos);
	void SetFeedbackPosition(struct FGeometry& InGeometry, struct FPointerEvent& InGestureEvent);
	void ResetTouchState();
	void OnRotatePlayerRegionTouchStarted(struct FGeometry& InGeometry, struct FPointerEvent& InGestureEvent);
	void OnRotatePlayerRegionTouchMoved(struct FGeometry& InGeometry, struct FPointerEvent& InGestureEvent, struct FVector2D& MoveDelta);
	void OnRotatePlayerRegionTouchLost(int32 PointerIndex);
	void OnRotatePlayerRegionTouchEnded(struct FGeometry& InGeometry, struct FPointerEvent& InGestureEvent);
	void OnRegionTouchStarted(enum class EFortTouchControlRegion Region, struct FGeometry& InGeometry, struct FPointerEvent& InGestureEvent);
	void OnRegionTouchMoved(enum class EFortTouchControlRegion Region, struct FGeometry& InGeometry, struct FPointerEvent& InGestureEvent, struct FVector2D& MoveDelta);
	void OnRegionTouchEnded(enum class EFortTouchControlRegion Region, struct FGeometry& InGeometry, struct FPointerEvent& InGestureEvent);
	void OnMovePlayerRegionTouchStarted(struct FGeometry& InGeometry, struct FPointerEvent& InGestureEvent);
	void OnMovePlayerRegionTouchMoved(struct FGeometry& InGeometry, struct FPointerEvent& InGestureEvent);
	void OnMovePlayerRegionTouchLost(int32 PointerIndex);
	void OnMovePlayerRegionTouchEnded(struct FGeometry& InGeometry, struct FPointerEvent& InGestureEvent);
	void OnCursorModeChanged(bool bCursorModeEnabled, class FName ActionName, class UUserWidget* CustomWidget);
	void OnAdditionalTouchStarted(struct FGeometry& InGeometry, struct FPointerEvent& InGestureEvent);
	void OnAdditionalTouchLost(int32 PointerIndex);
	void OnAdditionalTouchEnded(struct FGeometry& InGeometry, struct FPointerEvent& InGestureEvent);
	bool MoveStickIsInSprintThreshold();
	bool MoveStickIsInLockPosition();
	void MovePlayerRegionTick(struct FGeometry& InGeometry, float DeltaTime);
	bool IsRotatePlayerRegionTouched();
	bool IsMovePlayerRegionTouched();
	bool IsFiring();
	float GetMoveStickRange();
	bool CanLockMoveStick();
};

// 0x50 (0x3A0 - 0x350)
// Class FortniteUI.FortTouchLookStick
class UFortTouchLookStick : public UBacchusHUDElement
{
public:
	class USizeBox*                              MainSizeBox;                                       // 0x350(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UImage>                 FireImageRef;                                      // 0x358(0x28)(BlueprintVisible, ExportObject, Transient, InstancedReference, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             FireImageAbsoluteOffset;                           // 0x380(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  SizePropertyName;                                  // 0x388(0x18)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortTouchLookStick* GetDefaultObj();

	void SetTouchStickPositionLocal(const struct FVector2D& TouchPosition);
	void SetTouchStickPositionAbsolute(const struct FVector2D& TouchPosition);
	void SetSize(float NewSize);
	void SetFiringState(bool IsFiring);
	bool IsFireButtonUnderTouch(const struct FVector2D& TouchPosition);
	float GetSize();
};

// 0x28 (0x378 - 0x350)
// Class FortniteUI.FortTouchMoveStick
class UFortTouchMoveStick : public UBacchusHUDElement
{
public:
	bool                                         bIsTouched;                                        // 0x350(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_21CC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  AlwaysShowPropertyName;                            // 0x358(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                         bAlwaysShowWhenTouched;                            // 0x370(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_21CD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortTouchMoveStick* GetDefaultObj();

	void SetStickPosition(const struct FVector2D& NewPosition);
	void SetMovementLockStatus(bool MovementIsLocked);
	bool IsTouched();
	void HandleTouchStarted();
	void HandleTouchEnded();
	float GetHalfHeight();
};

// 0x0 (0x460 - 0x460)
// Class FortniteUI.FortTrackedIndicator
class UFortTrackedIndicator : public UFortSimpleItemConditionIconIndicator
{
public:

	static class UClass* StaticClass();
	static class UFortTrackedIndicator* GetDefaultObj();

};

// 0x68 (0x310 - 0x2A8)
// Class FortniteUI.FortTransformKeyPicker
class UFortTransformKeyPicker : public UFortItemPickerBase
{
public:
	uint8                                        Pad_21CE[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortTransformKeyPicker* GetDefaultObj();

	void RebuildTransformKeys(TArray<class UObject*>& InDataProvider);
};

// 0x0 (0x8B8 - 0x8B8)
// Class FortniteUI.FortTransformKeyPickerTileButton
class UFortTransformKeyPickerTileButton : public UFortItemPickerButton
{
public:

	static class UClass* StaticClass();
	static class UFortTransformKeyPickerTileButton* GetDefaultObj();

};

// 0x8 (0x2B0 - 0x2A8)
// Class FortniteUI.FortTransformSlotItemPicker
class UFortTransformSlotItemPicker : public UFortItemPickerBase
{
public:
	uint8                                        Pad_21D1[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortTransformSlotItemPicker* GetDefaultObj();

	void RebuildSlottableItems(TArray<enum class EFortInventoryFilter>& ItemFilters, enum class EFortItemType ItemType, TArray<class UFortItem*>& ItemsToIgnore);
};

// 0x0 (0x8B8 - 0x8B8)
// Class FortniteUI.FortTransformSlotItemPickerTileButton
class UFortTransformSlotItemPickerTileButton : public UFortItemPickerButton
{
public:

	static class UClass* StaticClass();
	static class UFortTransformSlotItemPickerTileButton* GetDefaultObj();

};

// 0x78 (0x320 - 0x2A8)
// Class FortniteUI.FortTrapDefenderItemPicker
class UFortTrapDefenderItemPicker : public UFortItemPickerBase
{
public:
	class UFortItemDetailsHostPanel*             DetailsPanel;                                      // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class ABuildingTrapDefender>  DefenderTrap;                                      // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_21D3[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortTrapDefenderItemPicker* GetDefaultObj();

	void HandleSelectionCommittedBP(class UFortItem* CommittedItem);
};

// 0x30 (0x238 - 0x208)
// Class FortniteUI.FortTravelLogMap
class UFortTravelLogMap : public UUserWidget
{
public:
	float                                        MapSize;                                           // 0x208(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentTimeFraction;                               // 0x20C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DistanceToCoalescePositions;                       // 0x210(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21D4[0x24];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortTravelLogMap* GetDefaultObj();

	void InitializeFromTravelRecord(struct FAthenaTravelRecord& Record);
};

// 0xC0 (0xE8 - 0x28)
// Class FortniteUI.FortTutorialContext
class UFortTutorialContext : public UBlueprintContextBase
{
public:
	UMulticastDelegateProperty_                  OnUpdateTutorialAnnouncement;                      // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnNewAnnouncementStartedOnClientDelegate;          // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_21D8[0xA0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortTutorialContext* GetDefaultObj();

	void UpdateTutorialAnnouncement(const struct FFortClientAnnouncementData_Tutorial& AnnouncementData, bool bShow);
	void UnhideTutorialCallout(class FName WidgetName);
	void UnhideAllTutorialCallouts();
	void SkipTutorial();
	bool ShouldPromptToSkipTutorial();
	void OnNewAnnouncementStartedOnClient(class AFortClientAnnouncement* NewAnnouncement);
	void HideTutorialCallout(class FName WidgetName);
	void GetTutorialCallouts(TArray<class FName>* WidgetNames);
	void GetHiddenTutorialCallouts(TArray<class FName>* WidgetNames);
	void EnableTutorialCallout(class FName WidgetName);
	void DisableTutorialCallout(class FName WidgetName);
	void ContinueTutorial();
	void ClearTutorialCallouts();
};

// 0x50 (0x260 - 0x210)
// Class FortniteUI.FortTwitchLogin
class UFortTwitchLogin : public UCommonUserWidget
{
public:
	uint8                                        Pad_21DD[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UFortTwitchLoginModalWidget> TwitchLoginModalWidgetClass;                       // 0x230(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortTwitchLoginModalWidget*           ActiveLoginModal;                                  // 0x258(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortTwitchLogin* GetDefaultObj();

	void OnShowLoginError(class FText& ErrorTitle, class FText& ErrorMessage);
	void OnLoginStatusChanged(bool bLoggedIn, const class FString& AccountName);
	void OnLoginFlowModalDismissed(class UFortTwitchLoginModalWidget* Modal);
	void OnLoginFlowModalCreated(class UFortTwitchLoginModalWidget* Modal);
	void OnLinkedTwitchAccountChanged(const class FString& AccountName);
	void Logout();
	void Login();
	bool IsLoggedIn();
	class FString GetLinkedTwitchAccountName();
	class FString GetAccountName();
	void CancelLoginFlow();
};

// 0x8 (0x330 - 0x328)
// Class FortniteUI.FortTwitchLoginModalWidget
class UFortTwitchLoginModalWidget : public UFortActivatablePanel
{
public:
	class UNativeWidgetHost*                     NativeHost;                                        // 0x328(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortTwitchLoginModalWidget* GetDefaultObj();

	void OnNativeHostContentChanged();
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortUIBlueprintFunctionLibrary
class UFortUIBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UFortUIBlueprintFunctionLibrary* GetDefaultObj();

	class FString GetMetaStringOnOffer(struct FCardPackOffer& Offer, const class FString& Key);
	int32 GetMetaIntOnOffer(struct FCardPackOffer& Offer, const class FString& Key, int32 DefaultValue);
	bool GetMetaBoolOnOffer(struct FCardPackOffer& Offer, const class FString& Key, bool bDefaultValue);
	struct FFortMultiSizeBrush GetItemSmallPreviewImageMultiSizeBrush(class UFortItem* Item);
	struct FSlateBrush GetItemSmallPreviewImageBrush(class UFortItem* Item, enum class EFortBrushSize BrushSize);
	struct FFortMultiSizeBrush GetItemDefinitionSmallPreviewImageMultiSizeBrush(class UFortItemDefinition* ItemDefinition);
	struct FSlateBrush GetItemDefinitionSmallPreviewImageBrush(class UFortItemDefinition* ItemDefinition, enum class EFortBrushSize BrushSize);
};

// 0x31D0 (0x3200 - 0x30)
// Class FortniteUI.FortUIDataConfiguration
class UFortUIDataConfiguration : public UPrimaryDataAsset
{
public:
	class FString                                DefaultUIDataConfigurationPath;                    // 0x30(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MobileUIDataConfigurationPath;                     // 0x40(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BROnlyUIDataConfigurationPath;                     // 0x50(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ErebusUIDataConfigurationPath;                     // 0x60(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortUIStateWidget_NUI>  StateWidgetClasses[0xD];                           // 0x70(0x208)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftClassPtr<class UUserWidget>>     CachedWidgetClasses;                               // 0x278(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<enum class EFortBrushSize, int32>       StandardImageBrushSizes;                           // 0x288(0x50)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> PowerRatingIconMultiSizeBrush;                     // 0x2D8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          PowerRatingEnchantedPositiveColorOverride;         // 0x300(0x10)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          PowerRatingEnchantedNegativeColorOverride;         // 0x310(0x10)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> FilledTierPipMultiSizeBrush;                       // 0x320(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> UnfilledTierPipMultiSizeBrush;                     // 0x348(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> PreviewingTierPipMultiSizeBrush;                   // 0x370(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> UpgradeArrowMultiSizeBrush;                        // 0x398(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> ComparisonUpArrowMultiSizeBrush;                   // 0x3C0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BetterComparisonResultColor;                       // 0x3E8(0x10)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          WorseComparisonResultColor;                        // 0x3F8(0x10)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> InventoryOverflowIndicatorMultiSizeBrush;          // 0x408(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> TrackedSchematicIndicatorMultiSizeBrush;           // 0x430(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> FavoritedItemIndicatorMultiSizeBrush;              // 0x458(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, struct FFortUIStatStyle> ProfileStatStyles;                                 // 0x480(0x50)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UFortUIDataProfileStats*>       ProfileStatStyleSets;                              // 0x4D0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<class UClass*, TSubclassOf<class UUserWidget>> VariantToWidgetMaping;                             // 0x4E0(0x50)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bEnableSocialFeatures;                             // 0x530(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableChat;                                       // 0x531(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnablePartyFeatures;                              // 0x532(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21E7[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> UnlockedSquadSlotBorderMultiSizeBrush;             // 0x538(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> LockedSquadSlotBorderMultiSizeBrush;               // 0x560(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> ReadOnlySquadSlotBorderMultiSizeBrush;             // 0x588(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> DefenderIconMultiSizeBrush;                        // 0x5B0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> AssaultDefenderIconMultiSizeBrush;                 // 0x5D8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> PistolDefenderIconMultiSizeBrush;                  // 0x600(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> MeleeDefenderIconMultiSizeBrush;                   // 0x628(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> SniperDefenderIconMultiSizeBrush;                  // 0x650(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> ShotgunDefenderIconMultiSizeBrush;                 // 0x678(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> LeadSurvivorIconMultiSizeBrush;                    // 0x6A0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> SurvivorIconMultiSizeBrush;                        // 0x6C8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> TrapIconMultiSizeBrush;                            // 0x6F0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortKeybindWidget>      KeybindWidgetClass;                                // 0x718(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UUserWidget>             HiddenCursorWidget;                                // 0x740(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UUserWidget>             VirtualCursorWidget;                               // 0x768(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    UIScaleCurve;                                      // 0x790(0x78)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    FrontEndUIScaleCurve;                              // 0x808(0x78)(Edit, Config, NativeAccessSpecifierPublic)
	enum class EFortReturnToFrontendBehavior     ReturnToFrontendBehavior;                          // 0x880(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21E9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SkillTreeMinimumZoomLevel;                         // 0x884(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillTreeMaximumZoomLevel;                         // 0x888(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillTreeZoomLevelIncrement;                       // 0x88C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillTreeZoomLevelIncrementController;             // 0x890(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkillTreeZoomLevelIncrementMobile;                 // 0x894(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortSkillTreeCanvasStyle             SkillTreeCanvasStyle;                              // 0x898(0x34)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_21EB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UFortSkillTreeCanvasNode> DefaultSkillTreeNodeWidgetType;                    // 0x8D0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class EFortHomebaseNodeDisplayType, TSoftClassPtr<class UFortSkillTreeCanvasNode>> SkillTreeNodeWidgetTypeMap;                        // 0x8F8(0x50)(Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortSkillTreeNodeDisplayDataRegistry> SkillTreeNodeDisplayDataRegistry;                  // 0x948(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class EFortBrushSize, TSubclassOf<class UCommonTextStyle>> ItemCardPowerRatingTextStylesByBrushSize;          // 0x970(0x50)(Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<enum class EFortBrushSize, TSubclassOf<class UCommonTextStyle>> ItemCardStackCountTextStylesByBrushSize;           // 0x9C0(0x50)(Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     ItemCardLevelMeterMaterial;                        // 0xA10(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     ItemCardDurabilityMeterMaterial;                   // 0xA38(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ItemCardBackgroundPlateBrush;                      // 0xA60(0x88)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ItemCardRarityGradientBrush;                       // 0xAE8(0x88)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ItemCardDefenderPortraitBackgroundBrush;           // 0xB70(0x88)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ItemCardHeroPortraitBackgroundBrush;               // 0xBF8(0x88)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ItemCardLeadSurvivorPortraitBackgroundBrush;       // 0xC80(0x88)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ItemCardSchematicBackgroundBrush;                  // 0xD08(0x88)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> ItemCardRewardTraitsBackgroundMultiSizeBrush;      // 0xD90(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> ItemCardSchematicTraitsBackgroundMultiSizeBrush;   // 0xDB8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortItemManagementScreen> FrontendItemManagementScreenType;                  // 0xDE0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortItemInspectionScreen> FrontendItemInspectionScreenType;                  // 0xE08(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortSkillTreeViewer>    SkillTreeViewerScreenType;                         // 0xE30(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortSquadManagementScreenBase> HeroSquadManagementScreenType;                     // 0xE58(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortSquadManagementScreenBase> SurvivorSquadManagementScreenType;                 // 0xE80(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortSquadManagementScreenBase> DefenderSquadManagementScreenType;                 // 0xEA8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UAthenaMatchReadyDesktopPopup> MatchReadyDesktopPopupWidgetType;                  // 0xED0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortTabListWidgetBase>  MainTabSet;                                        // 0xEF8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLimitedToES2Features;                             // 0xF20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeightedBlendables                   FrontEndFFPostProcessMaterials;                    // 0xF28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bUseSpecificPinataWeapon;                          // 0xF38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bQuestVOEnabled;                                   // 0xF39(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21ED[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EFortItemCardSize, struct FVector2D> PersonnelAndSchematicCardSizes;                    // 0xF40(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<enum class EFortItemCardSize, struct FVector2D> OtherItemCardSizes;                                // 0xF90(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<enum class EFortItemCardSize, TSoftObjectPtr<class UMaterialInterface>> PersonnelAndSchematicItemCardMaterial;             // 0xFE0(0x50)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<enum class EFortItemCardSize, TSoftObjectPtr<class UMaterialInterface>> CardPackItemCardMaterial;                          // 0x1030(0x50)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<enum class EFortItemCardSize, TSoftObjectPtr<class UMaterialInterface>> InstanceItemCardMaterial;                          // 0x1080(0x50)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<enum class EFortItemCardSize, TSoftObjectPtr<class UMaterialInterface>> TransformKeyItemCardMaterial;                      // 0x10D0(0x50)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<enum class EFortItemCardSize, TSoftObjectPtr<class UMaterialInterface>> CosmeticItemCardMaterial;                          // 0x1120(0x50)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<enum class EFortItemType>             ItemTypesWhoseImagesReplaceCardBackgrounds;        // 0x1170(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSet<enum class EFortItemType>               ItemTypesToHideCountWhenCountEqualsOne;            // 0x1180(0x50)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<enum class EFortItemCardSize, TSoftObjectPtr<class UMaterialInterface>> ItemCardDetailAreaMaterial;                        // 0x11D0(0x50)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> FavoriteBookmarkMultiSizeBrush;                    // 0x1220(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> PermanentTransformKeykMultiSizeBrush;              // 0x1248(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortMultiSizeBrushAsset> ConsumableTransformKeykMultiSizeBrush;             // 0x1270(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, TSoftObjectPtr<class UTexture2D>> DefenderSubtypeWeaponTextures;                     // 0x1298(0x50)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<enum class EFortBuffState, TSoftObjectPtr<class UMaterialInterface>> EnchantedCustomRatingBlockBackgroundMaterial;      // 0x12E8(0x50)(Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<enum class EFortBuffState, TSoftObjectPtr<class UMaterialInterface>> NormalCustomRatingBlockBackgroundMaterial;         // 0x1338(0x50)(Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FMargin                               CustomRatingBlockBackgroundBrushMargin;            // 0x1388(0x10)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     UniversalItemCardDurabilityMeterMaterial;          // 0x1398(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     UniversalItemCardLevelMeterMaterial;               // 0x13C0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     UniversalItemCardTraitIconMaterial;                // 0x13E8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     UniversalItemCardUnearnedTierIconMaterial;         // 0x1410(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     UniversalItemCardAvailableTierIconMaterial;        // 0x1438(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     UniversalItemCardEarnedTierIconMaterial;           // 0x1460(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortItemDefinition>    MysteryItemDefinition;                             // 0x1488(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_XL_PersonnelAndSchematics_Configuration ItemCardConfig_XXL_PersonnelAndSchematics;         // 0x14B0(0x350)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_XL_ItemInstance_Configuration ItemCardConfig_XXL_ItemInstance;                   // 0x1800(0x1B0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_XL_TransformKey_Configuration ItemCardConfig_XXL_TransformKey;                   // 0x19B0(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_XL_PersonnelAndSchematics_Configuration ItemCardConfig_XL_PersonnelAndSchematics;          // 0x19F8(0x350)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_XL_ItemInstance_Configuration ItemCardConfig_XL_ItemInstance;                    // 0x1D48(0x1B0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_XL_TransformKey_Configuration ItemCardConfig_XL_TransformKey;                    // 0x1EF8(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_L_PersonnelAndSchematics_Configuration ItemCardConfig_L_PersonnelAndSchematics;           // 0x1F40(0x2C8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_L_ItemInstance_Configuration ItemCardConfig_L_ItemInstance;                     // 0x2208(0x1B0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_L_TransformKey_Configuration ItemCardConfig_L_TransformKey;                     // 0x23B8(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_M_PersonnelAndSchematics_Configuration ItemCardConfig_M_PersonnelAndSchematics;           // 0x2400(0x2C8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_M_ItemInstance_Configuration ItemCardConfig_M_ItemInstance;                     // 0x26C8(0x1B0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_M_TransformKey_Configuration ItemCardConfig_M_TransformKey;                     // 0x2878(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_S_PersonnelAndSchematics_Configuration ItemCardConfig_S_PersonnelAndSchematics;           // 0x28C0(0x2C8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_S_ItemInstance_Configuration ItemCardConfig_S_ItemInstance;                     // 0x2B88(0x1A0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_S_TransformKey_Configuration ItemCardConfig_S_TransformKey;                     // 0x2D28(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_XS_PersonnelAndSchematics_Configuration ItemCardConfig_XS_PersonnelAndSchematics;          // 0x2D70(0x34)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_21F1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortItemCard_XS_ItemInstance_Configuration ItemCardConfig_XS_ItemInstance;                    // 0x2DA8(0x188)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_XS_TransformKey_Configuration ItemCardConfig_XS_TransformKey;                    // 0x2F30(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_XS_PersonnelAndSchematics_Configuration ItemCardConfig_XXS_PersonnelAndSchematics;         // 0x2F78(0x34)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_21F2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortItemCard_XXS_ItemInstance_Configuration ItemCardConfig_XXS_ItemInstance;                   // 0x2FB0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FFortItemCard_XS_TransformKey_Configuration ItemCardConfig_XXS_TransformKey;                   // 0x2FE0(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UDataTable>             HealthyGamingDataTable;                            // 0x3028(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortTooltipDisplayStatsLookupTable*   ObjClassToTooltipStatsMap;                         // 0x3050(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UUserWidget>             LoadingScreenBacchusTutorialWidget;                // 0x3058(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UUserWidget>             LoadingScreenVBuckScamWarning;                     // 0x3080(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USlateBrushAsset>       ActorCanvasArrowBrush;                             // 0x30A8(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FPlatformPrefixIconList> PlatformPrefixIconMap;                             // 0x30D0(0x50)(Edit, ZeroConstructor, Config, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UFortOptionsMenuData*                  GameOptionsMenuData;                               // 0x3120(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, TSoftObjectPtr<class USlateBrushAsset>> LegacyNativeUIBrushMap;                            // 0x3128(0x50)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<class FName, TSoftObjectPtr<class UObject>> LegacyNativeUIAssetMap;                            // 0x3178(0x50)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	float                                        AnalogRotateSpeed;                                 // 0x31C8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DragRotateSpeed;                                   // 0x31CC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TouchSwipeRotateRate;                              // 0x31D0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MouseWheelZoomSpeed;                               // 0x31D4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DragZoomSpeed;                                     // 0x31D8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TriggerZoomSpeed;                                  // 0x31DC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TouchZoomPinchRate;                                // 0x31E0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ItemViewCompetingAxisInputThreshold;               // 0x31E4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EFortItemType>             ItemTypesToUseVaultCamera;                         // 0x31E8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortFrontendItemViewSettingsManager> FrontendItemViewSettingsManager;                   // 0x31F8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortUIDataConfiguration* GetDefaultObj();

	bool GetIsCurrentlyInCrossplay(class UWorld* World);
	class UFortMultiSizeBrushAsset* GetDefenderSubtypeIconMultiSizeBrushByTag(const struct FGameplayTag& DefenderSubtypeTag);
};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.FortUIDataConfigurationContext
class UFortUIDataConfigurationContext : public UBlueprintContextBase
{
public:

	static class UClass* StaticClass();
	static class UFortUIDataConfigurationContext* GetDefaultObj();

	bool UseSpecificPinataWeapon();
	void SetPlatformPrefixIcon(class UImage* Image, const class FString& OtherPlayerPlatform, bool bForceShow);
	bool IsQuestVOEnabled();
	bool IsLimitedToES2Features();
	bool IsChatEnabled();
	TArray<enum class EFortItemType> GetItemTypesToUseVaultCamera();
	struct FPostProcessSettings GetFrontEndFFSettings();
	bool AreSocialFeaturesEnabled();
	bool ArePartyFeaturesEnabled();
};

// 0x50 (0x80 - 0x30)
// Class FortniteUI.FortUIDataProfileStats
class UFortUIDataProfileStats : public UDataAsset
{
public:
	TMap<struct FGameplayTag, struct FFortUIStatStyle> ProfileStatStyles;                                 // 0x30(0x50)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortUIDataProfileStats* GetDefaultObj();

};

// 0x2B8 (0x4D0 - 0x218)
// Class FortniteUI.FortUIManagerWidget
class UFortUIManagerWidget : public UFortUserWidget
{
public:
	uint8                                        Pad_220B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnBeginSpokenDialog;                               // 0x220(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnEndSpokenDialog;                                 // 0x230(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UFortUIStateWidget>      StateWidgets[0xD];                                 // 0x240(0x208)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EFortUIState                      CurrentState;                                      // 0x448(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EFortUIState                      PendingState;                                      // 0x449(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_220C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIStateWidget*                    CurrentStateWidget;                                // 0x450(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<TSubclassOf<class UFortUIStateWidget>> LoadedStateWidgetClasses;                          // 0x458(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UFortUIStateTrigger*>           StateTriggers;                                     // 0x468(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class UFortActionHandlerPanel*>       ActionHandlerPanels;                               // 0x478(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_220D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortNotificationQueue*                UINotificationQueues[0x3];                         // 0x490(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsStateContentDisplayed;                          // 0x4A8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_220E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUINavigationManager*              NavigationManager;                                 // 0x4B0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_220F[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortUIManagerWidget* GetDefaultObj();

	void UpdateStateWidgetContent(class UFortUIStateWidget* StateWidget);
	void UnregisterStateTrigger(class UFortUIStateTrigger* TriggerToRemove);
	void ShowErrorDialog(class UObject* WorldContextObject, class FText OperationDesc, class FText DisplayMessage, const class FString& ErrorCode, enum class EFortErrorSeverity ErrorSeverity);
	void SetStateContentDisplayed(bool bDisplay);
	void ReleaseNotification(class UFortUINotification* Notification);
	void RegisterStateTrigger(class UFortUIStateTrigger* StateTrigger);
	void QueueActivatablePanelIntoModalLayer(class UCommonActivatablePanel* Panel);
	void QueueActionPanelIntoModalLayer(class UFortActionHandlerPanel* Panel, enum class EHorizontalAlignment HorizontalAlignment, enum class EVerticalAlignment VerticalAlignment);
	void OnStateStarted();
	void OnShowConfirmation_NUI(struct FFortDialogDescription_NUI& Description);
	void OnShowConfirmation(struct FFortDialogDescription& Description);
	void OnEndSpokenDialog__DelegateSignature();
	void OnBeginSpokenDialog__DelegateSignature(class UTexture2D* Image, class FText Title, class FText Subtitle, enum class EFortAnnouncementDisplayPreference DisplayPreference);
	void KillConfirmationDialog(class UObject* WorldContextObject);
	bool IsStateContentDisplayed();
	class UFortUIManagerWidget* GetUIManagerWidget(class UObject* WorldContextObject);
	class UFortUINavigationManager* GetNavigationManager();
	class UFortUIStateWidget* GetCurrentUIStateWidget();
	void DisplayStateContent(bool bDisplay);
	void DisplayErrorDialog(struct FFortErrorInfo& Info);
	class UFortUIStateTrigger* CreateUIStateTrigger(TSubclassOf<class UFortUIStateTrigger> Class, class UObject* WorldContextObject);
	class UFortUINotification* CreateNotification(TSubclassOf<class UFortUINotification> UINotificationClass);
	enum class EFortUIState _BPGetCurrentUIState();
};

// 0x170 (0x380 - 0x210)
// Class FortniteUI.FortUIManagerWidget_NUI
class UFortUIManagerWidget_NUI : public UCommonUserWidget
{
public:
	uint8                                        Pad_221F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnBeginSpokenDialog;                               // 0x218(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnEndSpokenDialog;                                 // 0x228(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnShouldBlockSubtitlePortraitChanged;              // 0x238(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	enum class EFortUIState                      CurrentState;                                      // 0x248(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EFortUIState                      PendingState;                                      // 0x249(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2220[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIStateWidget_NUI*                CurrentStateWidget;                                // 0x250(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2221[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortUIStateTrigger*>           StateTriggers;                                     // 0x268(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2222[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortUINotificationQueue*>      UINotificationQueues;                              // 0x280(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	bool                                         bIsStateContentDisplayed;                          // 0x290(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2223[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUINavigationManager*              NavigationManager;                                 // 0x298(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class UClass*, class UUserWidget*>      TypedWidgetCache;                                  // 0x2A0(0x50)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2224[0x68];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bSupressErrors;                                    // 0x358(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2225[0x17];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UFortPlayerBanned>         PlayerBannedScreen;                                // 0x370(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        BlockSubtitlePortraitRefcount;                     // 0x378(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2226[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortUIManagerWidget_NUI* GetDefaultObj();

	void UpdateStateWidgetContent(class UFortUIStateWidget_NUI* StateWidget);
	void UnregisterStateTrigger(class UFortUIStateTrigger* TriggerToRemove);
	void ShowErrorDialog(class UObject* WorldContextObject, class FText OperationDesc, class FText DisplayMessage, const class FString& ErrorNote, enum class EFortErrorSeverity ErrorSeverity);
	bool ShouldBlockSubtitlePortrait();
	void SetStateContentDisplayed(bool bDisplay);
	void SetFrontEndVisibility(bool bHideHeader, bool bHideFooter, bool bHideChatWidget);
	void ReleaseNotification(class UFortUINotification* Notification);
	void RegisterStateTrigger(class UFortUIStateTrigger* StateTrigger);
	void QueueActivatablePanelIntoModalLayer(class UCommonActivatablePanel* Panel);
	void PushContentWidgetAdvanced(class UWidget* Widget, bool bHideHeader, bool bHideFooter, bool bHideChatWidget);
	void PushContentWidget(class UWidget* Widget);
	void PopContentWidget();
	void PopAllContentWidgets();
	void PopActivatablePanelInModalLayer(class UCommonActivatablePanel* Panel);
	void OnStateStarted();
	void OnStateEnded();
	void OnShowConfirmation_NUI(struct FFortDialogDescription_NUI& Description);
	void OnShowConfirmation(struct FFortDialogDescription& Description);
	void OnShouldBlockSubtitlePortraitChanged__DelegateSignature(bool bShouldBlockSubtitlePortrait);
	void OnEndSpokenDialog__DelegateSignature();
	void OnEndLatentWaitForConfirmationDialog(struct FFortDialogExternalLatentActionHandle& WaitingDialogHandle);
	void OnBeginSpokenDialog__DelegateSignature(class UTexture2D* Image, class FText Title, class FText Subtitle, enum class EFortAnnouncementDisplayPreference DisplayPreference);
	void KillConfirmationDialog(class UObject* WorldContextObject);
	bool IsStateContentDisplayed();
	bool IsShowingModalsConfirmationsErrors();
	void IncrementShouldBlockSubtitlePortrait();
	class UFortUINotificationQueue* GetUINotificationQueue(class UObject* WorldContextObject, enum class EFortNotificationQueueType QueueType);
	class UFortUINavigationManager* GetUINavigationManager(class UObject* WorldContextObject);
	class UFortUIManagerWidget_NUI* GetUIManagerWidget(class UObject* WorldContextObject);
	class UFortUINavigationManager* GetNavigationManager();
	class UFortUIStateWidget_NUI* GetCurrentUIStateWidget();
	class UUserWidget* GetCachedWidget(class UClass* InClass);
	void DisplayStateContent(bool bDisplay);
	void DisplayErrorDialog(struct FFortErrorInfo& Info);
	void DecrementShouldBlockSubtitlePortrait();
	class UFortUIStateTrigger* CreateUIStateTrigger(TSubclassOf<class UFortUIStateTrigger> Class, class UObject* WorldContextObject);
	class UFortUINotification* CreateNotification(TSubclassOf<class UFortUINotification> UINotificationClass);
	void CloseErrorWindow();
	void CloseConfirmationWindow();
	enum class EFortUIState _BPGetCurrentUIState();
};

// 0x48 (0x258 - 0x210)
// Class FortniteUI.FortUIMessageItemWidget
class UFortUIMessageItemWidget : public UCommonUserWidget
{
public:
	UMulticastDelegateProperty_                  OnMessageDisplayed;                                // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMessageRemoved;                                  // 0x220(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FName                                  MessageID;                                         // 0x230(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StackSize;                                         // 0x238(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DisplayDuration;                                   // 0x23C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RemoveDuration;                                    // 0x240(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_222C[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortUIMessageItemWidget* GetDefaultObj();

	void OnStackSizeChanged(int32 OldStackSize);
	void OnReturnedToPool();
	void OnBeginRemove();
};

// 0x80 (0xA8 - 0x28)
// Class FortniteUI.FortUIMessageManager
class UFortUIMessageManager : public UObject
{
public:
	UMulticastDelegateProperty_                  OnMessageAvailable;                                // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class UFortUIMessageItemWidget*>      MessageQueue;                                      // 0x38(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class UFortUIMessageItemWidget>> CurrentlyDisplayedMessages;                        // 0x48(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2234[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortUIMessageManager* GetDefaultObj();

	void HandleMessageRemoved(class UFortUIMessageItemWidget* MessageItem);
	void HandleMessageDisplayed(class UFortUIMessageItemWidget* MessageItem);
	int32 GetNumDisplayedItems();
	class UFortUIMessageItemWidget* GetNextMessageInQueue();
	class UFortUIMessageItemWidget* AddMessageItem(TSubclassOf<class UFortUIMessageItemWidget> MessageItemClass, class APlayerController* OwningPlayer, class FName MessageID, int32 StackCount);
};

// 0x28 (0x320 - 0x2F8)
// Class FortniteUI.FortUIMessagesPageBase
class UFortUIMessagesPageBase : public UCommonActivatablePanel
{
public:
	int32                                        MaximumMessagesShown;                              // 0x2F8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2235[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonListView*                       MessagesList;                                      // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2236[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortUINotification*>           MessagesShown;                                     // 0x310(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortUIMessagesPageBase* GetDefaultObj();

	void OnNotificationCleared(class UFortUINotification* ClearedMessage);
	void OnMessageAvailable();
	void FillMessagesList();
};

// 0x20 (0x48 - 0x28)
// Class FortniteUI.UINavigationManager
class UUINavigationManager : public UObject
{
public:
	UMulticastDelegateProperty_                  OnNavigationEvent;                                 // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FUINavigationEntry>            NavigationStack;                                   // 0x38(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UUINavigationManager* GetDefaultObj();

	void PushNavigation(class FText DisplayName, class UObject* ObjectData, class FName IdData, int32 IntData, UDelegateProperty_& OnNavigateTo, UDelegateProperty_& OnNavigateFrom);
	void PopNavigation();
	void NavigationToIndex(int32 Index);
	int32 GetStackSize();
	class FText GetDisplayName(int32 Index);
	void ClearStack();
};

// 0x110 (0x158 - 0x48)
// Class FortniteUI.FortUINavigationManager
class UFortUINavigationManager : public UUINavigationManager
{
public:
	UMulticastDelegateProperty_                  OnMainTabNavigateRequest;                          // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFeatureNavigateOp;                               // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnNodePageNavigateRequest;                         // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnSquadSlotNavigateRequest;                        // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnVaultTabNavigateRequest;                         // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnVaultItemNavigateRequest;                        // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnItemEvolutionNavigateRequest;                    // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnQuestItemNavigateRequest;                        // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPopContentStackOp;                               // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnSquadNavigationOp;                               // 0xD8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  FortExpeditionsOp;                                 // 0xE8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  FortCollectionBookOp;                              // 0xF8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnQuestItemOp;                                     // 0x108(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2245[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortUINavigationRequest>      NavigationRequests;                                // 0x138(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class UUserWidget*                           HiddenCursorWidget;                                // 0x148(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UUserWidget*                           VirtualCursorWidget;                               // 0x150(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortUINavigationManager* GetDefaultObj();

	bool TryGetPendingNavigationOp(struct FFortUINavigationOperation* NavigationOp);
	void SetScrollWidget(class UWidget* Widget);
	void PushSquadManagementScreen(class FName SquadId, int32 SquadSlotIndex);
	void PushSkillTreePage(class FName SkillTreePageId);
	void PushSkillTreeNode(class FName SkillTreeNodeId);
	void PushItemManagementScreen(enum class EFortFrontendInventoryFilter ItemManagementFilter, class UFortItem* ItemToSelect);
	void PushItemInspectionScreen(class UFortItem* ItemToInspect, enum class EFortItemInspectionMode Mode, class UFortItemTileView* CycleTileView, bool bReadOnly, bool bAllowFavoriting, bool bIsTemporaryItem, bool bAllowRarityUpgrading);
	void NavigateToSquadSlot(class FName SquadId, int32 SquadSlotIndex);
	void NavigateToQuestObjective(class UFortQuestItem* QuestItem);
	void NavigateToNodePageByGameplayTagContainer(const struct FGameplayTagContainer& GameplayTagContainer);
	void NavigateToNodePage(class FName PageId, class FName NodeID);
	void NavigateToItemManagementScreen(enum class EFortFrontendInventoryFilter Filter);
	void NavigateToItem(class UFortItem* Item);
	void NavigateToFeature(enum class EFortUIFeature Feature);
	void NavigateToExpeditions();
	void NavigateToCollectionBook();
	bool HasPendingNavigationOp(enum class EFortUINavigationOp NavigationOp);
	void CompletePendingNavigationOp(enum class EFortUINavigationOp NavigationOp);
	void CenterWidget(class UWidget* Widget);
	bool CanNavigateToQuestObjective(class UFortQuestItem* QuestItem);
	bool CanAccessSquadManagementScreen(class FName SquadId, int32 SquadSlotIndex);
	bool CanAccessSkillTreePage(class FName SkillTreePageId);
	bool CanAccessSkillTreeNode(class FName SkillTreeNodeId);
	bool CanAccessItemManagementScreen(enum class EFortFrontendInventoryFilter ItemManagementFilter);
	bool CanAccessCollectionBook();
	bool AttemptPlayQuest(class UFortQuestItem* Quest);
	bool AttemptMatchmakeForQuest(class UFortQuestItem* Quest, bool* OutContentNotDownloaded);
};

// 0x28 (0x50 - 0x28)
// Class FortniteUI.FortUINotificationQueue
class UFortUINotificationQueue : public UObject
{
public:
	int32                                        MaxNotificationsInQueue;                           // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2246[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortUINotification*>           NotificationQueue;                                 // 0x30(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2247[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortUINotificationQueue* GetDefaultObj();

	void UnregisterToReceiveNotifications();
	void RemoveNotification(class UFortUINotification* InNotificationDescription);
	void RegisterToReceiveNotifications(UDelegateProperty_& NotificationDelegate);
	class UFortUINotification* GetNextNotification();
};

// 0x10 (0x38 - 0x28)
// Class FortniteUI.FortUIRewardReport
class UFortUIRewardReport : public UObject
{
public:
	class UFortLocalPlayer*                      LocalPlayer;                                       // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        RewardDisplayLevel;                                // 0x30(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2248[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortUIRewardReport* GetDefaultObj();

	int32 GetRewardedChestIndex();
};

// 0x8 (0x30 - 0x28)
// Class FortniteUI.FortUIScoreReport
class UFortUIScoreReport : public UObject
{
public:
	class UFortLocalPlayer*                      LocalPlayer;                                       // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortUIScoreReport* GetDefaultObj();

	bool IsLocalPlayer(int32 ScoreReportIndex);
	int32 GetXpToCompleteLevel(int32 Level);
	bool GetXpInfo(int32 ScoreReportIndex, struct FFortUIXpInfo* OutXpInfo);
	int32 GetTeamScore(enum class EFortUIScoreType ScoreType);
	void GetScoreReportIndicesByPlayerID(TArray<int32>* SortedScoreReportIndices);
	int32 GetScoreReportIndex(struct FUniqueNetIdRepl& PlayerID);
	int32 GetPlayerScore(int32 ScoreReportIndex, enum class EFortUIScoreType ScoreType);
	class FString GetPlayerPlatform(int32 ScoreReportIndex);
	class FText GetPlayerName(int32 ScoreReportIndex);
	void GetPlayerIDFromScoreReportIndex(int32 ScoreReportIndex, struct FUniqueNetIdRepl* OutUniqueNetIdRepl);
	int32 GetPlayerCount();
	float GetLevelProgress(int32 Level, int32 DisplayXp);
	int32 GetDifficultBonusScore();
	float GetDifficultBonusMultiplier();
	class AFortPlayerPawn* GetCurrentPlayerPawn(int32 ScoreReportIndex);
	int32 GetBadgeScore(class UFortItem* BadgeItem);
};

// 0x8 (0x30 - 0x28)
// Class FortniteUI.FortUIStateTrigger
class UFortUIStateTrigger : public UObject
{
public:
	enum class EFortUIState                      UIState;                                           // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2254[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortUIStateTrigger* GetDefaultObj();

	bool IsLoggedIn();
	bool EvalBP();
};

// 0x0 (0x30 - 0x30)
// Class FortniteUI.FortUIStateTrigger_Athena
class UFortUIStateTrigger_Athena : public UFortUIStateTrigger
{
public:

	static class UClass* StaticClass();
	static class UFortUIStateTrigger_Athena* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class FortniteUI.FortUIStateTrigger_AthenaReplay
class UFortUIStateTrigger_AthenaReplay : public UFortUIStateTrigger
{
public:

	static class UClass* StaticClass();
	static class UFortUIStateTrigger_AthenaReplay* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class FortniteUI.FortUIStateTrigger_AthenaSpectator
class UFortUIStateTrigger_AthenaSpectator : public UFortUIStateTrigger
{
public:

	static class UClass* StaticClass();
	static class UFortUIStateTrigger_AthenaSpectator* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class FortniteUI.FortUIStateTrigger_InGame
class UFortUIStateTrigger_InGame : public UFortUIStateTrigger
{
public:

	static class UClass* StaticClass();
	static class UFortUIStateTrigger_InGame* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class FortniteUI.FortUIStateTrigger_Login
class UFortUIStateTrigger_Login : public UFortUIStateTrigger
{
public:

	static class UClass* StaticClass();
	static class UFortUIStateTrigger_Login* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class FortniteUI.FortUIStateTrigger_Replay
class UFortUIStateTrigger_Replay : public UFortUIStateTrigger
{
public:

	static class UClass* StaticClass();
	static class UFortUIStateTrigger_Replay* GetDefaultObj();

};

// 0x0 (0x240 - 0x240)
// Class FortniteUI.FortUIStateWidget
class UFortUIStateWidget : public UFortActionHandlerPanel
{
public:

	static class UClass* StaticClass();
	static class UFortUIStateWidget* GetDefaultObj();

	void OnExitState(enum class EFortUIState NextUIState);
	void OnEnterState(enum class EFortUIState PreviousUIState);
};

// 0x28 (0x338 - 0x310)
// Class FortniteUI.FortUIStateWidget_Frontend
class UFortUIStateWidget_Frontend : public UFortUIStateWidget_NUI
{
public:
	class UFortGiftBoxItem*                      NextGiftBox;                                       // 0x310(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UFortItemReceivedScreen>   ItemReceivedScreenClass;                           // 0x318(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_225A[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortUIStateWidget_Frontend* GetDefaultObj();

	void OnMatchmakingV2Changed(bool MatchmakingActive);
	bool NeedSeeTrailerMovie();
	void MarkTrailerMovieSeen();
	void Internal_OnInventoryUpdated(TSet<class FString>& ChangedTypes, int64 ProfileRevision);
	void HandleGiftingComplete();
	void HandleGiftBoxRemoved(bool bSuccess);
	bool CheckForGifts();
	void CheckBanStatus(bool bBanned);
};

// 0x1A8 (0x4B8 - 0x310)
// Class FortniteUI.FortUIStateWidget_Login
class UFortUIStateWidget_Login : public UFortUIStateWidget_NUI
{
public:
	TSubclassOf<class UFortLoginStatus>          StatusScreenClass;                                 // 0x310(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortLoginStatus*                      StatusScreenWidget;                                // 0x318(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortSplashScreenWidget>   SplashScreenClass;                                 // 0x320(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortSplashScreenWidget*               SplashScreenWidget;                                // 0x328(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortHaveInviteSelect>     HaveInviteClass;                                   // 0x330(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortHaveInviteSelect*                 HaveInviteWidget;                                  // 0x338(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortPlayedBeforeSelect>   PlayedBeforeClass;                                 // 0x340(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortPlayedBeforeSelect*               PlayedBeforeWidget;                                // 0x348(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortLoginCredentialSelect> CredentialSelectClass;                             // 0x350(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortLoginCredentialSelect*            CredentialSelectWidget;                            // 0x358(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortInviteRequest>        InviteRequestClass;                                // 0x360(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortInviteRequest*                    InviteRequestWidget;                               // 0x368(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortSignInWidget>         SignInScreenClass;                                 // 0x370(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortSignInWidget*                     SignInScreenWidget;                                // 0x378(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortSignInWidget>         SignInConsoleClass;                                // 0x380(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortSignInWidget*                     SignInConsoleWidget;                               // 0x388(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortRedirectToEpicAccountWidget> RedirectToEpicClass;                               // 0x390(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortRedirectToEpicAccountWidget*      RedirectToEpicWidget;                              // 0x398(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortNewAccountWarning>    NewAccountWarningClass;                            // 0x3A0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortNewAccountWarning*                NewAccountWarningWidget;                           // 0x3A8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortLoginResultWidget>    LoginResultClass;                                  // 0x3B0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortLoginResultWidget*                LoginResultWIdget;                                 // 0x3B8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortAccountNotFound>      AccountNotFoundClass;                              // 0x3C0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAccountNotFound*                  AccountNotFoundWidget;                             // 0x3C8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortDisplayNameWidget>    DisplayNameClass;                                  // 0x3D0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortDisplayNameWidget*                DisplayNameWidget;                                 // 0x3D8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortMultiFactorAuthWidget> MultiFactorAuthWidgetClass;                        // 0x3E0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortMultiFactorAuthWidget*            MultiFactorAuthWidget;                             // 0x3E8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortWebLoginWidget>       WebLoginWidgetClass;                               // 0x3F0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortHealthWarningBase>    HealthWarningClass;                                // 0x3F8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortHealthWarningBase*                HealthWarningWidget;                               // 0x400(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortEulaWidget>           EulaClass;                                         // 0x408(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortEulaWidget*                       EulaWidget;                                        // 0x410(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  BenchmarkDialogTitle;                              // 0x418(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  BenchmarkDialogMessage;                            // 0x430(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortAccountLinkingWindow> AccountLinkingWindowClass;                         // 0x448(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAccountLinkingWindow*             AccountLinkingWidget;                              // 0x450(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   BackButtonRowHandle;                               // 0x458(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortMOTDWidget>           MOTDClass;                                         // 0x468(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortMOTDWidget*                       MOTDWidget;                                        // 0x470(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_225D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UFortLoginUnavailable>     LoginUnavailableClass;                             // 0x480(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_225E[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonWidgetStack*                    LoginFlowStack;                                    // 0x4B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortUIStateWidget_Login* GetDefaultObj();

	void ShowBackBar();
	void SetConsoleWidgetDisplayName();
	void SafePopFlowStackNoReturn();
	class UWidget* SafePopFlowStack();
	void PushWidgetOntoFlowStack(class UWidget* Widget);
	void OnDisplayWebLogin(class UWidget* WebWidget);
	void OnDisplayWebAccountCreation(class UWidget* WebWidget);
	void HideTopBarOptions();
	class FText GetPlatformDisplayName();
};

// 0x0 (0x460 - 0x460)
// Class FortniteUI.FortUpgradeIndicator
class UFortUpgradeIndicator : public UFortSimpleItemConditionIconIndicator
{
public:

	static class UClass* StaticClass();
	static class UFortUpgradeIndicator* GetDefaultObj();

};

// 0x0 (0x218 - 0x218)
// Class FortniteUI.FortUserChoiceWidget
class UFortUserChoiceWidget : public UFortUserWidget
{
public:

	static class UClass* StaticClass();
	static class UFortUserChoiceWidget* GetDefaultObj();

	void SetChoices(struct FChoiceData& ChoiceItems);
};

// 0x60 (0x270 - 0x210)
// Class FortniteUI.FortVariantEditorWidgetBase
class UFortVariantEditorWidgetBase : public UCommonUserWidget
{
public:
	uint8                                        Pad_2260[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortVariantEditorWidgetBase* GetDefaultObj();

};

// 0x50 (0x220 - 0x1D0)
// Class FortniteUI.FortVariantEntryBox
class UFortVariantEntryBox : public UDynamicEntryBox
{
public:
	class UAthenaCosmeticAccountItem*            CurrentItem;                                       // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaCosmeticItemDefinition*         CurrentItemDef;                                    // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FMcpVariantChannelInfo>        CurrentItemVariants;                               // 0x1E0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2261[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortVariantEntryBox* GetDefaultObj();

};

// 0x48 (0x2B8 - 0x270)
// Class FortniteUI.FortVariantNumericalPicker
class UFortVariantNumericalPicker : public UFortVariantEditorWidgetBase
{
public:
	int32                                        MinNum;                                            // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MaxNum;                                            // 0x274(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumericDelta;                                      // 0x278(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        CurrentNumber;                                     // 0x27C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortCosmeticNumericalVariant*         NumericalVariant;                                  // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_ZeroDigitUp;                                // 0x288(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_ZeroDigitDown;                              // 0x290(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_TenDigitUp;                                 // 0x298(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                         Button_TenDigitDown;                               // 0x2A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_NumericalValue;                               // 0x2A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_VariantName;                                  // 0x2B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortVariantNumericalPicker* GetDefaultObj();

};

// 0x20 (0x230 - 0x210)
// Class FortniteUI.FortVariantPicker
class UFortVariantPicker : public UCommonUserWidget
{
public:
	UMulticastDelegateProperty_                  OnVariantChanged;                                  // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UScrollBox*                            ScrollBox_Variants;                                // 0x220(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortVariantEntryBox*                  EntryBox_VariantOptions;                           // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortVariantPicker* GetDefaultObj();

	void InitFromCosmeticItemDef(class UAthenaCosmeticItemDefinition* InCosmeticItemDef);
	void InitFromCosmeticItem(class UAthenaCosmeticAccountItem* InCosmeticItem);
};

// 0x20 (0x48 - 0x28)
// Class FortniteUI.VariantObject
class UVariantObject : public UObject
{
public:
	struct FGameplayTag                          VariantChannel;                                    // 0x28(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          VariantTag;                                        // 0x30(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOwned;                                            // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2266[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaCosmeticItemDefinition*         CosmeticDef;                                       // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVariantObject* GetDefaultObj();

};

// 0x40 (0x8C8 - 0x888)
// Class FortniteUI.FortVariantTileButton
class UFortVariantTileButton : public UCommonButton
{
public:
	uint8                                        Pad_2267[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          LockedTintColor;                                   // 0x890(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  IconParamName;                                     // 0x8A0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UVariantObject*                        SourceObject;                                      // 0x8A8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_VariantDisplay;                              // 0x8B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_Locked;                                      // 0x8B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                Image_Active;                                      // 0x8C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortVariantTileButton* GetDefaultObj();

};

// 0x20 (0x290 - 0x270)
// Class FortniteUI.FortVariantTileSelector
class UFortVariantTileSelector : public UFortVariantEditorWidgetBase
{
public:
	uint8                                        Pad_2268[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTileView*                       Tile_VariantOptions;                               // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_VariantName;                                  // 0x280(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UVariantObject*                        CurrentSelectedVariant;                            // 0x288(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortVariantTileSelector* GetDefaultObj();

};

// 0x60 (0x280 - 0x220)
// Class FortniteUI.FortVideoOptions
class UFortVideoOptions : public UFortOptionsTab
{
public:
	uint8                                        Pad_2273[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortVideoOptions* GetDefaultObj();

	void WindowModeChanged(int32 NewMode);
	void ViewDistanceQualityChanged(int32 ButtonId);
	void UseVsyncChanged(bool IsChecked);
	void TextureQualityChanged(int32 ButtonId);
	void ShowGrassChanged(bool IsChecked);
	void ShowFPSChanged(bool IsChecked);
	void ShadowQualityChanged(int32 ButtonId);
	void ResolutionChanged(int32 NewResolution);
	void PostProcessQualityChanged(int32 ButtonId);
	void OnQualitySelectorChanged(int32 ValueRef);
	void MotionBlurChanged(bool IsChecked);
	bool IsWindowedFullscreen(int32 CurrentMode);
	void InitializeValues();
	int32 GetViewDistanceQuality();
	bool GetUseVsync();
	int32 GetTextureQuality();
	bool GetShowGrass();
	bool GetShowFPS();
	int32 GetShadowQuality();
	int32 GetPostProcessQuality();
	TArray<class FText> GetPossibleWindowModes();
	TArray<class FText> GetPossibleFPS();
	TArray<class FText> GetPossibleDisplayResolutions();
	int32 GetOverallQualityLevel();
	bool GetMotionBlur();
	int32 GetMaxQualityLevel();
	int32 GetEffectsQuality();
	int32 GetCurrentWindowMode();
	int32 GetCurrentFPS();
	int32 GetCurrentDisplayResolution();
	int32 GetAntiAliasingQuality();
	bool GetAllowLowPower();
	void FrameRateLimitChanged(int32 FrameRateLimit);
	void EffectsQualityChanged(int32 ButtonId);
	void AntiAliasingQualityChanged(int32 ButtonId);
	void AllowLowPowerChanged(bool IsChecked);
};

// 0x8 (0x300 - 0x2F8)
// Class FortniteUI.FortWebLoginWidget
class UFortWebLoginWidget : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_2275[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFortWebLoginWidget* GetDefaultObj();

	void DisplayWidget(class UWidget* WebWidget);
	void DismissWidget();
};

// 0x18 (0x228 - 0x210)
// Class FortniteUI.FortWorkerSetBonusIcon
class UFortWorkerSetBonusIcon : public UCommonUserWidget
{
public:
	struct FGameplayTag                          GameplayTag;                                       // 0x210(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBrushSize                    ImageSize;                                         // 0x218(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2276[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UImage*                                Icon;                                              // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortWorkerSetBonusIcon* GetDefaultObj();

	void SetGameplayTag(struct FGameplayTag& InGameplayTag);
	void HandleDifferentGameplayTagSetBP();
};

// 0x0 (0x888 - 0x888)
// Class FortniteUI.FriendCodeEntryBase
class UFriendCodeEntryBase : public UCommonButton
{
public:

	static class UClass* StaticClass();
	static class UFriendCodeEntryBase* GetDefaultObj();

};

// 0x0 (0x2F8 - 0x2F8)
// Class FortniteUI.FriendCodeListBase
class UFriendCodeListBase : public UCommonActivatablePanel
{
public:

	static class UClass* StaticClass();
	static class UFriendCodeListBase* GetDefaultObj();

};

// 0x38 (0x8C0 - 0x888)
// Class FortniteUI.FriendCodeShareButtonBase
class UFriendCodeShareButtonBase : public UCommonButton
{
public:
	TArray<struct FFriendCode>                   BacchusFriendCodes;                                // 0x888(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortFriendCodeListBase>   FriendCodeListClass;                               // 0x898(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      NumSharesRemainingText;                            // 0x8A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTextBlock*                            InviteCodeMessage;                                 // 0x8A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_227A[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFriendCodeShareButtonBase* GetDefaultObj();

	void OnQueryUnredeemedFriendCodesComplete(bool bSuccess, TArray<struct FFriendCode>& FriendCodes);
	void OnNumSharesUpdated();
	void OnFriendCodeIssued(bool bSuccess, struct FFriendCode& FriendCode);
};

// 0x30 (0x240 - 0x210)
// Class FortniteUI.HUDLayoutToolButtonLayer
class UHUDLayoutToolButtonLayer : public UCommonUserWidget
{
public:
	class UCanvasPanel*                          CanvasPanel_Combat;                                // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                          CanvasPanel_Build;                                 // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                          CanvasPanel_Persistent;                            // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USizeBox*                              InternalSizeBox;                                   // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UHUDLayoutToolPlacementWidget*> PlacementWidgets;                                  // 0x230(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UHUDLayoutToolButtonLayer* GetDefaultObj();

	void OnBuildMode(bool bBuildMode);
};

// 0x160 (0x188 - 0x28)
// Class FortniteUI.HUDLayoutToolContext
class UHUDLayoutToolContext : public UBlueprintContextBase
{
public:
	uint8                                        Pad_2289[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnPropertyMenuStateChangeDelegate;                 // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCloseLayoutTool;                                 // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnOpenLayoutToolDelegate;                          // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnRecenterPressedDelegate;                         // 0x60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnViewOffsetUpdatedDelegate;                       // 0x70(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnNewViewOffsetLerpDelegate;                       // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnHUDLayoutModeChangeDelegate;                     // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnWidgetSelectedDelegate;                          // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnOpenCloseFireModePanelDelegate;                  // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_228A[0xC8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHUDLayoutToolContext* GetDefaultObj();

	void StartLerping(const struct FVector2D& NewViewOffset);
	bool ShouldShowSelectedWidgetProperties();
	void SetSelectedWidget(class UHUDLayoutToolPlacementWidget* NewSelectedWidget);
	void SetPropertyMenuState(bool bNewlyOpen);
	void SetInBuildMode(bool bNewInBuildMode);
	void SetFireModeOpenState(bool bNewlyOpened);
	void SetFireMode(enum class EFireModeType NewFireMode);
	void SaveLayout(enum class ELayoutDataType LayoutType, const class FString& Reason);
	void ResetSelectedWidgetProperties();
	void ResetAllWidgets();
	void OnViewOffsetUpdated();
	void OnToolOpened(const class FString& Reason);
	void OnRecenterPressed();
	void OnPanZoomWidgetClick();
	void LoadLayout(enum class ELayoutDataType LayoutType, const class FString& Reason);
	bool IsSelectedWidgetUnderPanel();
	bool IsLayoutDirty();
	bool IsCentered();
	bool HasSelectedWidget();
	bool HasSavedLayout(enum class ELayoutDataType LayoutType);
	bool GetPropertyMenuState();
	bool GetIsPanning();
	bool GetIsLerping();
	bool GetInBuildMode();
	bool GetFireModeOpenState();
	struct FVector2D GetCurrentOffset();
	void CloseLayoutTool(const class FString& Reason);
	void ClearLayout(enum class ELayoutDataType LayoutType, const class FString& Reason);
};

// 0x0 (0x2F8 - 0x2F8)
// Class FortniteUI.HUDLayoutToolFireModePanel
class UHUDLayoutToolFireModePanel : public UCommonActivatablePanel
{
public:

	static class UClass* StaticClass();
	static class UHUDLayoutToolFireModePanel* GetDefaultObj();

	void SetOpenState(bool bNewOpenState);
};

// 0x40 (0x250 - 0x210)
// Class FortniteUI.HUDLayoutToolFireModeButton
class UHUDLayoutToolFireModeButton : public UCommonUserWidget
{
public:
	enum class EFireModeType                     FireModeType;                                      // 0x210(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_228C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  FireModeName;                                      // 0x218(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  FireModeDescription;                               // 0x230(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class UTexture2D*                            FireModeImage;                                     // 0x248(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UHUDLayoutToolFireModeButton* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class FortniteUI.HUDLayoutToolInterface
class IHUDLayoutToolInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IHUDLayoutToolInterface* GetDefaultObj();

};

// 0xC0 (0x1D8 - 0x118)
// Class FortniteUI.HUDLayoutToolPanZoomWidget
class UHUDLayoutToolPanZoomWidget : public UContentWidget
{
public:
	float                                        LerpSpeed;                                         // 0x118(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RecenterRadius;                                    // 0x11C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_228E[0xB8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHUDLayoutToolPanZoomWidget* GetDefaultObj();

	void StopOffsetLerp();
	void StartOffsetLerp(const struct FVector2D& NewTargetOffset);
	void Recenter();
};

// 0x10 (0x48 - 0x38)
// Class FortniteUI.HUDLayoutToolPanZoomWidgetSlot
class UHUDLayoutToolPanZoomWidgetSlot : public UPanelSlot
{
public:
	uint8                                        Pad_228F[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHUDLayoutToolPanZoomWidgetSlot* GetDefaultObj();

};

// 0x180 (0x390 - 0x210)
// Class FortniteUI.HUDLayoutToolPlacementWidget
class UHUDLayoutToolPlacementWidget : public UCommonUserWidget
{
public:
	uint8                                        Pad_2292[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bCanMoveWidget;                                    // 0x218(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2293[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UBacchusHUDElement>        HUDElementClass;                                   // 0x220(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsBlockingWidget;                                 // 0x228(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2294[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBorder*                               SelectionBorder;                                   // 0x230(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBorder*                               DisplayScaleBorder;                                // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                              MainOverlay;                                       // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Property_0;                                        // 0x248(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Property_1;                                        // 0x24C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Property_2;                                        // 0x250(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Property_3;                                        // 0x254(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FHUDLayoutDataEntry                   DefaultEntry;                                      // 0x258(0xD0)(Transient, Protected, NativeAccessSpecifierProtected)
	class UBacchusHUDElement*                    BacchusHUDElement;                                 // 0x328(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2296[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHUDLayoutToolPlacementWidget* GetDefaultObj();

	void OnWidgetSelected(class UHUDLayoutToolPlacementWidget* InSelectedWidget);
	void OnInsideGridStateChange(bool bInsideGrid);
	bool IsInsideGrid();
	bool GetIsOverlapping();
	struct FGameplayTag BP_GetMobileVisualType();
};

// 0x30 (0x240 - 0x210)
// Class FortniteUI.HUDLayoutToolPropertyPanel
class UHUDLayoutToolPropertyPanel : public UCommonUserWidget
{
public:
	class FText                                  DefaultTitle;                                      // 0x210(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      PanelTitle;                                        // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2299[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHUDLayoutToolPropertyPanel* GetDefaultObj();

	void OnWidgetSelected(class UHUDLayoutToolPlacementWidget* NewlySelectedWidget);
	void OnOpen();
	void OnMenuStateChange(bool bNewlyOpen);
	void OnClose();
	bool GetIsOpen();
};

// 0x30 (0x240 - 0x210)
// Class FortniteUI.HUDLayoutToolPropertyWidget
class UHUDLayoutToolPropertyWidget : public UCommonUserWidget
{
public:
	class UAnalogSlider*                         MySlider;                                          // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Text_PropertyName;                                 // 0x218(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      Text_PropertyValue;                                // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        PropertyIndex;                                     // 0x228(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_229B[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHUDLayoutToolPropertyWidget* GetDefaultObj();

	void SetPropertyType(enum class ELayoutPropertyType NewPropertyType);
	void SetBoolValue(bool bNewValue);
	void RefreshProperties();
	void OnWidgetSelected(class UHUDLayoutToolPlacementWidget* NewlySelectedWidget);
	void OnNewSliderValue(float NormalizedValue);
	void OnNewBoolValue(bool bNewValue);
	bool GetCurrentValueAsBool();
	float GetCurrentValue();
};

// 0x30 (0x248 - 0x218)
// Class FortniteUI.FortItemGroupSlotPicker
class UFortItemGroupSlotPicker : public UFortUserWidget
{
public:
	UMulticastDelegateProperty_                  OnItemPickerSelectionCommittedEvent;               // 0x218(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UFortItemGroupSlotWidget> HostItemGroupSlotWidget;                           // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UContentWidget*                        SlottedItemDetailsContainer;                       // 0x230(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UWidget>                SlottedItemDetailsWidget;                          // 0x238(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortItem*                             UpgradedItemForPreview;                            // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortItemGroupSlotPicker* GetDefaultObj();

	void SignalSelectionCommitted(class UFortItem* SelectedItem);
	void SetSelection(class UFortItem* SelectedItem);
	void OnItemPickerSelectionChanged__DelegateSignature(class UFortItem* SelectedItem);
	void HandleItemSetInternal(class UFortItemGroupSlotWidget* ItemGroupSlotWidget);
	void HandleItemSet();
	class FName GetSquadId();
	int32 GetSlotIndexInGroup();
	class FText GetItemSlottingRestrictionReasonText(enum class ESquadSlotItemRestrictionReason Reason);
	class UFortItem* GetCurrentlySlottedItem();
	TArray<class UFortItem*> GetCompatibleCandidateItems();
	void GetCandidateItemSlottingRestrictions(class UFortItem* CandidateItem, TArray<enum class ESquadSlotItemRestrictionReason>* OutRestrictions);
	float GetCandidateFitnessValueForSlot(class UFortItem* Candidate);
	void EndUpgradePreview();
	void DetectCandidateSynergiesAndMatches(class UFortItem* Candidate, bool* OutHasSquadManagerSynergy, bool* OutHasPersonalitySynergy, bool* OutHasSetBonusMatch);
	class UWidget* CreateSlottedItemDetailsWidget(class UFortItem* Item);
	void BeginUpgradePreview();
};

// 0xD8 (0x2F0 - 0x218)
// Class FortniteUI.FortItemGroupSlotWidget
class UFortItemGroupSlotWidget : public UFortUserWidget
{
public:
	int32                                        SlotIndexInGroup;                                  // 0x218(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsLocked;                                          // 0x21C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22B6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FGameplayAttribute, float>       AttributeBonusValues;                              // 0x220(0x50)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         HasSetBonusMatch;                                  // 0x270(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22B7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UFortItem>              SlottedItem;                                       // 0x274(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22B8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EFortItemType>             ItemTypeFilters;                                   // 0x280(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ItemTagFilter;                                     // 0x290(0x20)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnItemSlotLockedStateChangedEvent;                 // 0x2B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnItemSetEvent;                                    // 0x2C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAttributeBonusValueChangedEvent;                 // 0x2D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UFortItemGroupWidget>   HostItemGroupWidget;                               // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortItemGroupSlotPicker>  ItemPickerWidgetType;                              // 0x2E8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortItemGroupSlotWidget* GetDefaultObj();

	bool TryGetSquadSlot(struct FHomebaseSquadSlot* OutSquadSlot);
	bool TryGetSquad(struct FHomebaseSquad* OutSquad);
	void SetSlottingPreviewItem(class UFortItem* Item);
	void SetItem(class UFortItem* ItemToSlot);
	void OnItemSlotLockedStateChanged__DelegateSignature(class UFortItemGroupSlotWidget* ItemSlotWidget);
	void OnItemSet__DelegateSignature(class UFortItemGroupSlotWidget* ItemSlotWidget);
	void OnAttributeBonusValueChanged__DelegateSignature(class UFortItemGroupSlotWidget* ItemSlotWidget);
	bool IsManagerSlot();
	bool IsItemCompatible(class UFortItem* Item);
	void InitializeSlot(class UFortItemGroupWidget* HostItemGroupWidget, int32 SlotIndexInGroup);
	void HandleTraitStateChanged(bool SetBonusMatchStateChanged);
	void HandlePreviewStateChanged(bool IsSquadSlotAffectedByPreview, bool IsBeingReplacedOrRelocated, bool WouldHavePersonalitySynergy, bool WouldHaveSetBonusMatch, TMap<struct FGameplayAttribute, float>& PreviewAttributeBonusValues);
	void HandleLockedStateChanged();
	void HandleItemSet();
	void HandleItemPickerSelectionCommittedInternal(class UFortItem* SelectedItem);
	void HandleItemPickerSelectionCommitted();
	void HandleAttributeBonusValueChanged();
	class FName GetSquadId();
	class UFortItemGroupSlotPicker* CreatePickerWidget();
	void CancelSlottingPreview();
};

// 0x28 (0x240 - 0x218)
// Class FortniteUI.FortItemGroupWidget
class UFortItemGroupWidget : public UFortUserWidget
{
public:
	class FName                                  SquadId;                                           // 0x218(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortItemGroupSlotWidget>  ItemSlotWidgetType;                                // 0x220(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                          ItemSlotsContainer;                                // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UFortItemGroupSlotWidget*>      SlotWidgets;                                       // 0x230(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortItemGroupWidget* GetDefaultObj();

	bool TryGetSquad(struct FHomebaseSquad* OutSquad);
	void SetSquad(class FName SquadId);
	void HandleItemSlotAdded(int32 SlotIndex, class UFortItemGroupSlotWidget* ItemSlotWidget);
	void HandleEffectsChanged();
	void HandleDifferentSquadSet();
	void GetTotalAttributeBonuses(TArray<struct FFortAttributeModifierDisplayData>* OutModifiers);
	class FName GetSquadId();
	void GetActiveSetBonusTags(TArray<struct FGameplayTag>* OutActiveSetBonusTags);
};

// 0x0 (0x210 - 0x210)
// Class FortniteUI.MassiveGadgetEquippedWidget
class UMassiveGadgetEquippedWidget : public UCommonUserWidget
{
public:

	static class UClass* StaticClass();
	static class UMassiveGadgetEquippedWidget* GetDefaultObj();

	void HandleMassiveTagChanged(const struct FGameplayTag& Tag, int32 Count);
};

// 0x10 (0x220 - 0x210)
// Class FortniteUI.MobileHUDVisual
class UMobileHUDVisual : public UCommonUserWidget
{
public:
	struct FGameplayTag                          VisualType;                                        // 0x210(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Opacity;                                           // 0x218(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_22C0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMobileHUDVisual* GetDefaultObj();

	struct FGameplayTag GetVisualType();
};

// 0x28 (0x248 - 0x220)
// Class FortniteUI.MobileHUDButtonVisual
class UMobileHUDButtonVisual : public UMobileHUDVisual
{
public:
	float                                        ButtonSize;                                        // 0x220(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ButtonDisplayScale;                                // 0x224(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPaperSprite*                          DefaultIcon;                                       // 0x228(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USizeBox*                              OuterSizeBox;                                      // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USizeBox*                              InnerSizeBox;                                      // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                Image_Icon;                                        // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMobileHUDButtonVisual* GetDefaultObj();

	void SetButtonSprite(class UPaperSprite* NewSprite);
};

// 0x0 (0x328 - 0x328)
// Class FortniteUI.FortQuestScreen
class UFortQuestScreen : public UFortActivatablePanel
{
public:

	static class UClass* StaticClass();
	static class UFortQuestScreen* GetDefaultObj();

	void ProcessPendingSeenQuestItems();
};

// 0x10 (0x220 - 0x210)
// Class FortniteUI.RemoteControlledPawnExpirationWidget
class URemoteControlledPawnExpirationWidget : public UCommonUserWidget
{
public:
	class UImage*                                ExpirationProgressImage;                           // 0x210(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_22C4[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URemoteControlledPawnExpirationWidget* GetDefaultObj();

	void OnPawnChanged();
};

// 0x18 (0x40 - 0x28)
// Class FortniteUI.FortSeasonPassLevelInfo
class UFortSeasonPassLevelInfo : public UObject
{
public:
	uint8                                        Pad_22CC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerController*                 FortPC;                                            // 0x30(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaSeasonItemDefinition*           SeasonData;                                        // 0x38(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortSeasonPassLevelInfo* GetDefaultObj();

	bool IsPaidUnlocked();
	bool IsPaidClaimed();
	bool IsFreeUnlocked();
	bool IsFreeClaimed();
	int32 GetSeasonPassMaxLevel();
	TArray<class UFortItem*> GetRewardItems(enum class EAthenaSeasonRewardTrack Track);
	int32 GetNumRewardItems(enum class EAthenaSeasonRewardTrack Track);
	float GetLevelProgress();
	int32 GetLevel();
	bool ContainsChaseReward(enum class EAthenaSeasonRewardTrack Track);
};

// 0x18 (0x228 - 0x210)
// Class FortniteUI.SeasonPassLevelWidget
class USeasonPassLevelWidget : public UCommonUserWidget
{
public:
	uint8                                        Pad_22D0[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortSeasonPassLevelInfo*              LevelInfo;                                         // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USeasonPassLevelWidget* GetDefaultObj();

	void PlayIntro();
	void OnSetup();
	void OnNavigateTo();
	void OnLockedStatusChanged(bool FreeUnlocked, bool PaidUnlocked);
	void OnAttemptClaimFinished(bool FreeClaimed, bool PaidClaimed);
	class UFortSeasonPassLevelInfo* GetLevelInfo();
	void AttemptClaim();
};

// 0x18 (0x310 - 0x2F8)
// Class FortniteUI.SeasonPassLevelPanel
class USeasonPassLevelPanel : public UCommonActivatablePanel
{
public:
	uint8                                        Pad_22D3[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortSeasonPassLevelInfo*              LevelInfo;                                         // 0x308(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USeasonPassLevelPanel* GetDefaultObj();

	void Setup(class UFortSeasonPassLevelInfo* Info);
	void OnSetup();
	void OnLockedStatusChanged(bool FreeUnlocked, bool PaidUnlocked);
	class UFortSeasonPassLevelInfo* GetLevelInfo();
};

// 0x18 (0x228 - 0x210)
// Class FortniteUI.SeasonPassPageWidget
class USeasonPassPageWidget : public UCommonUserWidget
{
public:
	uint8                                        Pad_22D8[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USeasonPassPageWidget* GetDefaultObj();

	bool ShouldPlayInto(int32 FirstLevel);
	void ScreenShown();
	bool OwnsSeasonPass();
	void OnBattlePassChanged();
	void NavigatePageRight();
	void NavigatePageLeft();
	int32 GetCurrentSeasonNumber();
	bool ContainsLevel(int32 Level);
};

// 0x70 (0x430 - 0x3C0)
// Class FortniteUI.SeasonPassScreenBase
class USeasonPassScreenBase : public UFortActivatablePanelWithItemPreview
{
public:
	uint8                                        Pad_22DE[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaSeasonItemDefinition*           SeasonData;                                        // 0x3C8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class USeasonPassLevelWidget*>        LevelWidgets;                                      // 0x3D0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<int32, class UFortSeasonPassLevelInfo*> LevelInfos;                                        // 0x3E0(0x50)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USeasonPassScreenBase* GetDefaultObj();

	void UpdateStoreHasStarsNotification(bool bShowNotification);
	void ScrollPositive();
	void ScrollNegative();
	bool OwnsSeasonPass();
	void OnSetGiftability(bool bIsGiftable);
	void OnSeasonPassChanged();
	void OnNoCurrentSeason();
	void OnNavigateToLevel(int32 Level);
	void OnLevelsGenerated();
	void NavigateToLevel(int32 Level);
	int32 GetSeasonPassLevelMax();
	int32 GetSeasonPassLevel();
	struct FDateTime GetSeasonEndDate();
	class UFortSeasonPassLevelInfo* GetLevelInfo(int32 Level);
	TMap<int32, class UFortSeasonPassLevelInfo*> GetAllLevelInfos();
	TArray<class USeasonPassLevelWidget*> GenerateLevelWidgets(class UFortSeasonPassLevelInfo* LevelInfo);
};

// 0x28 (0x240 - 0x218)
// Class FortniteUI.FortSquadPanelWidget
class UFortSquadPanelWidget : public UFortUserWidget
{
public:
	enum class EFortHomebaseSquadType            SquadTypeFilter;                                   // 0x218(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22E0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UFortItemGroupWidget>      SquadWidgetType;                                   // 0x220(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                          SquadWidgetsContainer;                             // 0x228(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UFortItemGroupWidget*>          SquadWidgets;                                      // 0x230(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortSquadPanelWidget* GetDefaultObj();

};

}


