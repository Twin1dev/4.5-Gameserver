#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x123 (0x52B - 0x408)
// WidgetBlueprintGeneratedClass AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C
class UAthenaDirectAcquisitionOfferDetailsWidget_C : public UFortDirectAcquisitionOfferDetailsWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Outro;                                             // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C* AthenaDirectAcquisitonDetails_BattlePassStarDetails; // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        BacchusCloseButton;                                // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        Button_Next;                                       // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        Button_Previous;                                   // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              CameraFramingWidget;                               // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CatalogOfferName;                                  // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              CatalogOfferSB;                                    // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Check;                                             // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorder_0;                                    // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Currency1ItemImage2;                               // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Currency1VB;                                       // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventStoreHostPanels_C*               EventStoreHostPanels;                              // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     GiftButton;                                        // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInfoHeaderWidget_C*               ItemInfoHeaderWidget;                              // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ItemRewardsSB;                                     // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              LeftPanelSB;                                       // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMTXButton_C*                          MTXButton;                                         // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              MTXButtonBox;                                      // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         MultipleItemCB;                                    // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaDirectAcquisitonDetails_RefundDisclaimer_C* NonrefundableText;                                 // 0x4B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              O_Sale_PreviousPrice;                              // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        OfferDetailsHB;                                    // 0x4C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       OwnedSwitcher;                                     // 0x4D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      OwnedText;                                         // 0x4D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     PreviewStylesButton;                               // 0x4E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     PurchaseButton;                                    // 0x4E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     QuantityToPurchaseLeft;                            // 0x4F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     QuantityToPurchaseRight;                           // 0x4F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_MainContent;                                    // 0x500(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortSwipePanel*                       SwipePanel;                                        // 0x508(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextOfferDisplayPrice1;                            // 0x510(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextOriginalPrice1;                                // 0x518(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         CanPurchase;                                       // 0x520(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsPurchasing;                                      // 0x521(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52DC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumberToPurchase;                                  // 0x524(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanPurchaseLeft;                                   // 0x528(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CanPurchaseRight;                                  // 0x529(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CanChangeQuantity;                                 // 0x52A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAthenaDirectAcquisitionOfferDetailsWidget_C* GetDefaultObj();

	void UpdateCamera(bool NeedsToUseVaultCamera, enum class EFrontEndCamera Temp_byte_Variable, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, enum class EFrontEndCamera Temp_byte_Variable1, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, enum class EFrontEndCamera Temp_byte_Variable2, bool Temp_bool_Variable1, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TArray<class UFortAccountItemDefinition*>& CallFunc_GetGrantedItemDefinitions_GrantedItems, class UFortAccountItemDefinition* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, enum class EFortItemType CallFunc_GetItemType_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsUnique_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, enum class EFrontEndCamera K2Node_Select_Default, class UFortUIDataConfigurationContext* CallFunc_GetContext_ReturnValue1, enum class EFrontEndCamera K2Node_Select1_Default, TArray<enum class EFortItemType>& CallFunc_GetItemTypesToUseVaultCamera_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void UpdatePreviewButton(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortAccountItemDefinition* CallFunc_GetFirstGrantItemDefinition_ReturnValue, class UAthenaCosmeticItemDefinition* K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasModifiableVariants_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateViewedItem(class UFortItem* ViewedItem, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue);
	void FixupBackpack(class UFortAccountItemDefinition* ItemDef, TArray<class UFortAccountItemDefinition*>& AllItemDefs, class UAthenaSeasonReward_C* RewardWidget, int32 CallFunc_Array_Length_ReturnValue, class UAthenaBackpackItemDefinition* K2Node_DynamicCast_AsAthena_Backpack_Item_Definition, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UFortAccountItemDefinition* CallFunc_Array_Get_Item, class UAthenaCharacterItemDefinition* K2Node_DynamicCast_AsAthena_Character_Item_Definition, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_Less_IntInt_ReturnValue, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void DeclinePurchase();
	void ExecutePurchase(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue, const class FString& CallFunc_GetOfferId_ReturnValue, enum class EOfferPurchaseError CallFunc_PurchaseOffer_ReturnValue);
	void UpdateCatalogOfferName(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class FText CallFunc_HasCatalogOfferName_CatalogOfferName, bool CallFunc_HasCatalogOfferName_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateItemList(int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, enum class EFortItemCardSize Temp_byte_Variable, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortAccountItem* CallFunc_CreatePreviewItem_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EFortItemCardSize Temp_byte_Variable1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaSeasonReward_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable, enum class EFortItemCardSize K2Node_Select_Default, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UScrollBoxSlot* K2Node_DynamicCast_AsScroll_Box_Slot, bool K2Node_DynamicCast_bSuccess, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue1, TArray<class UFortAccountItemDefinition*>& CallFunc_GetGrantedItemDefinitions_GrantedItems, class UFortAccountItemDefinition* CallFunc_GetFirstGrantItemDefinition_ReturnValue, class UFortAccountItemDefinition* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, int32 CallFunc_GetFirstGrantQuantity_ReturnValue, int32 CallFunc_GetNumGrantedItems_ReturnValue, const struct FFortItemQuantityPair& CallFunc_MakeItemQuantityPair_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue1);
	class UWidget* GetWidgetForFramingViewedItem(bool Temp_bool_Variable, class UWidget* K2Node_Select_Default);
	void SetupSaleInfo(bool bHasSale, class FText SaleText, const class FString& BannerOverrideTag, class FText NormalPrice, bool bHasBattlePassStars, int32 NumOfBattlePassStars, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility K2Node_Select1_Default);
	void UpdateSaleStatus(class FText Temp_text_Variable, class FText Temp_text_Variable1, enum class ECatalogSaleType Temp_byte_Variable, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue, const class FString& CallFunc_GetBannerOverrideTag_ReturnValue, bool CallFunc_GetMetaAsBool_ReturnValue, int32 CallFunc_GetItemQuantity_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetItemOfferCount_ReturnValue, const class FString& CallFunc_GetOfferId_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsOwned_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, class FText CallFunc_GetSalePrice_SalePrice, bool CallFunc_GetSalePrice_ReturnValue, enum class ECatalogSaleType CallFunc_GetSaleType_ReturnValue, class FText CallFunc_GetNormalPrice_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, class FText CallFunc_GetSaleText_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_BooleanAND_ReturnValue1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_BooleanAND_ReturnValue2, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue1, class FText CallFunc_Format_ReturnValue2, class FText K2Node_Select_Default);
	void UpdatePurchaseQuantity(class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetSalePrice_SalePrice, bool CallFunc_GetSalePrice_ReturnValue, class FText CallFunc_GetNormalPrice_ReturnValue, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_GetOfferId_ReturnValue, enum class EOfferPurchaseError CallFunc_CanPurchaseOffer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue2, int32 CallFunc_GetQuantityRemaining_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void UpdateAvailability(int32 Temp_int_Variable, int32 Temp_int_Variable1, bool Temp_bool_Variable, int32 Temp_int_Variable2, int32 Temp_int_Variable3, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, bool CallFunc_IsUnique_ReturnValue, int32 CallFunc_GetQuantityRemaining_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue1, bool Temp_bool_Variable1, const class FString& CallFunc_GetOfferId_ReturnValue, bool CallFunc_IsOwned_ReturnValue, int32 K2Node_Select_Default, class FText CallFunc_MakeLiteralText_ReturnValue, int32 K2Node_Select1_Default, class FText CallFunc_MakeLiteralText_ReturnValue1);
	void Update_Locked_Information(class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, bool CallFunc_IsLockedByRequirement_ReturnValue, class FText CallFunc_HasRequirement_RequirementText, bool CallFunc_HasRequirement_ReturnValue);
	void AttemptPurchase(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UAthenaDirectAcquisitionConfirmation_C* CallFunc_Create_ReturnValue, bool CallFunc_ShouldHavePurchaseConfirmation_ReturnValue, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_IsPriceInMTX_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue2, const class FString& CallFunc_GetOfferId_ReturnValue, enum class EOfferPurchaseError CallFunc_CanPurchaseOffer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void HandlePurchaseOfferComplete(bool Success, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaDirectAcquisitionOfferPurchasedWidget_C* CallFunc_Create_ReturnValue);
	void SetupPrice(class UIconTextButton_C* PurchaseButton, class UWidget* PriceContainer, class UTextBlock* NormalPriceText, class UWidget* SalePriceContainer, class UTextBlock* SalePriceText, class UImage* CurrencyImage, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, int32 CallFunc_GetNumGrantedItems_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue1, bool CallFunc_OfferHasDenyRequirements_ReturnValue, bool CallFunc_IsUnique_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, int32 CallFunc_GetQuantityRemaining_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_IsPriceInMTX_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue2, const class FString& CallFunc_GetOfferId_ReturnValue, bool CallFunc_IsLockedByRequirement_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue, enum class EOfferPurchaseError CallFunc_CanPurchaseOffer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue3, enum class ESlateVisibility Temp_byte_Variable3, class FText CallFunc_GetSalePrice_SalePrice, bool CallFunc_GetSalePrice_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_GetNormalPrice_ReturnValue, int32 CallFunc_GetPriceItem_RequiredItemCount, class UFortAccountItemDefinition* CallFunc_GetPriceItem_ReturnValue, bool Temp_bool_Variable1, const struct FSlateBrush& CallFunc_GetSmallPreviewImageBrush_ReturnValue, enum class ESlateVisibility K2Node_Select1_Default, bool CallFunc_IsValid_ReturnValue);
	void PopDetails(bool CallFunc_IsActivated_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void HandleBack(bool* Passthrough, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue1, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, bool CallFunc_IsPanelOnStack_ReturnValue);
	void UpdateFromOffer(const TArray<class FString>& PlaceholderOneRecipient, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, TArray<class FString>& K2Node_MakeArray_Array, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, bool CallFunc_IsValidOffer_ReturnValue, float Temp_float_Variable, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue1, float Temp_float_Variable1, const struct FCatalogOffer& CallFunc_GetOffer_ReturnValue, bool Temp_bool_Variable1, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue2, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_IsRefundable_ReturnValue, bool CallFunc_IsGiftingDisabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue3, const class FString& CallFunc_GetOfferId_ReturnValue, enum class EOfferPurchaseError CallFunc_CanGiftOffer_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, bool K2Node_SwitchEnum_CmpSuccess, enum class ESubGame CallFunc_GetSubGame_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, float K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue3);
	void DialogResult_9E262B7A4CA17B2146A54B8A29CFC473(enum class EFortDialogResult Result, class FName ResultName);
	void OnOfferSet();
	void OnActivated();
	void BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void OnUpdateStatus();
	void BndEvt__QuantityToPurchaseLeft_K2Node_ComponentBoundEvent_777_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__QuantityToPurchaseRight_K2Node_ComponentBoundEvent_794_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Show_Not_Enough_Currency();
	void PurchaseAmountLeft();
	void PurchaseAmountRight();
	void BndEvt__Button_Next_K2Node_ComponentBoundEvent_54_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_Previous_K2Node_ComponentBoundEvent_83_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__GiftButton_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__PanelButton_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__SwipePanel_K2Node_ComponentBoundEvent_11_OnFortSwipeEvent__DelegateSignature();
	void BndEvt__SwipePanel_K2Node_ComponentBoundEvent_29_OnFortSwipeEvent__DelegateSignature();
	void OnBeginIntro();
	void HandleVaultViewItem(class UFortItem* Item);
	void UpdateCenterandBinding();
	void BndEvt__PreviewStylesButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnDeactivated();
	void UpdateItemViewModeBP();
	void ExecuteUbergraph_AthenaDirectAcquisitionOfferDetailsWidget(int32 EntryPoint, enum class ESubGame Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable1, float Temp_float_Variable2, float Temp_float_Variable3, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, enum class ESubGame CallFunc_GetSubGame_ReturnValue, int32 Temp_int_Variable, enum class ESlateVisibility Temp_byte_Variable1, float K2Node_Select_Default, const struct FMargin& K2Node_MakeStruct_Margin, enum class ESlateVisibility Temp_byte_Variable2, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable3, int32 Temp_int_Variable1, class UCommonButton* K2Node_ComponentBoundEvent_Button7, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UCommonButton* K2Node_ComponentBoundEvent_Button6, class UCommonButton* K2Node_ComponentBoundEvent_Button5, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class FText CallFunc_Format_ReturnValue, class UFortAccountItemDefinition* CallFunc_GetCurrencyItemDefinition_ReturnValue, class UFortItemIcon* CallFunc_SpawnObject_ReturnValue, enum class ESlateVisibility Temp_byte_Variable4, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, class UCommonButton* K2Node_ComponentBoundEvent_Button4, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool Temp_bool_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, class UCommonButton* K2Node_ComponentBoundEvent_Button3, int32 CallFunc_Percent_IntInt_ReturnValue, class UFortDirectAcquisitionOfferInfo* CallFunc_Array_Get_Item, int32 CallFunc_Array_LastIndex_ReturnValue, class UFortDirectAcquisitionOfferInfo* CallFunc_Array_Get_Item1, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue2, int32 CallFunc_Array_Find_ReturnValue1, int32 CallFunc_Subtract_IntInt_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue1, class UFortDirectAcquisitionOfferInfo* CallFunc_Array_Get_Item2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue1, enum class ESlateVisibility K2Node_Select1_Default, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button1, bool CallFunc_HandleBack_Passthrough, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue1, enum class EFortDialogResult Temp_byte_Variable5, class FName Temp_name_Variable, class UFortItem* K2Node_CustomEvent_Item, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue1, enum class ESlateVisibility K2Node_Select2_Default, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue3, int32 CallFunc_GetNumGrantedItems_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue4, class UAthenaDirectAquisitionStyleScreen_C* CallFunc_Create_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UGiftingScreen_C* CallFunc_Create_ReturnValue1, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue1, bool CallFunc_IsMobileGame_ReturnValue2, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class UFortDirectAcquisitionOfferInfo* CallFunc_GetOfferInfo_ReturnValue5);
};

}

