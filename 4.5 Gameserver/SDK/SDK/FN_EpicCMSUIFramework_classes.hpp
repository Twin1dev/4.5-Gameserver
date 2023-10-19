#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x250 - 0x220)
// Class EpicCMSUIFramework.EpicCMSImage
class UEpicCMSImage : public UCommonLazyImage
{
public:
	UMulticastDelegateProperty_                  OnImageLoadingComplete;                            // 0x220(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B1[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bDownloadingExternalMedia;                         // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3B2[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEpicCMSImage* GetDefaultObj();

};

// 0x68 (0x270 - 0x208)
// Class EpicCMSUIFramework.EpicCMSLayoutBase
class UEpicCMSLayoutBase : public UUserWidget
{
public:
	TArray<struct FSlotDescription>              CarouselSlotDescriptions;                          // 0x208(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UEpicCMSTileCarousel>      CarouselClass;                                     // 0x218(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3B8[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEpicCMSLayoutBase* GetDefaultObj();

};

// 0x88 (0xB0 - 0x28)
// Class EpicCMSUIFramework.EpicCMSManager
class UEpicCMSManager : public UObject
{
public:
	uint8                                        Pad_3BA[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CmsEndpointOverride;                               // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bRefreshing;                                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3BB[0x5F];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEpicCMSManager* GetDefaultObj();

};

// 0x90 (0x388 - 0x2F8)
// Class EpicCMSUIFramework.EpicCMSScreenBase
class UEpicCMSScreenBase : public UCommonActivatablePanel
{
public:
	class FString                                TileSetFieldName;                                  // 0x2F8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UDataTable>             TileTypeToTileClassDataTable;                      // 0x308(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UUserWidget>             LayoutErrorClass;                                  // 0x330(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UDataTable>             LayoutTypeToLayoutClassDataTable;                  // 0x358(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3BF[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEpicCMSScreenBase* GetDefaultObj();

};

// 0x118 (0x9A0 - 0x888)
// Class EpicCMSUIFramework.EpicCMSTileBase
class UEpicCMSTileBase : public UCommonButton
{
public:
	uint8                                        Pad_3C5[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonTextStyle>          DefaultTitleTextStyle;                             // 0x890(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCommonTextStyle>          FeaturedTitleTextStyle;                            // 0x898(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  Title;                                             // 0x8A0(0x18)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FString                                Link;                                              // 0x8B8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDownloadingExternalMedia;                         // 0x8C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRefreshingMcpCatalog;                             // 0x8C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3C8[0xB6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonLazyImage*                      LazyImage_Icon;                                    // 0x980(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      TitleTextBlock;                                    // 0x988(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      SubtitleTextBlock;                                 // 0x990(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      EyebrowTextBlock;                                  // 0x998(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UEpicCMSTileBase* GetDefaultObj();

	void Launch();
	void DynamicHandleIconLoadingStateChanged(bool bIsLoading);
};

// 0x50 (0x258 - 0x208)
// Class EpicCMSUIFramework.EpicCMSTileCarousel
class UEpicCMSTileCarousel : public UUserWidget
{
public:
	struct FSlateSound                           PreviousButtonSound;                               // 0x208(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateSound                           NextButtonSound;                                   // 0x220(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UCommonWidgetCarousel*                 Carousel;                                          // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               NextPageButton;                                    // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               PreviousPageButton;                                // 0x248(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShouldShowNavigationOnlyOnHover;                  // 0x250(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsShowingNavigation;                              // 0x251(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3CC[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEpicCMSTileCarousel* GetDefaultObj();

	void SetCurrentPageByIndex(int32 PageIndex);
	void PreviousPage();
	void NextPage();
	void NavigationVisibilityChanged(bool bShowNavigation);
	void HandleTilePageAdded(class UWidget* TileWidget);
	int32 GetCurrentPageIndex();
};

}


