#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x150 - 0x30)
// Class SocialDefaults.ChatColorSchemeDataAsset
class UChatColorSchemeDataAsset : public UDataAsset
{
public:
	struct FChatColorScheme                      ChatColorData;                                     // 0x30(0x120)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UChatColorSchemeDataAsset* GetDefaultObj();

};

// 0x278 (0x2A8 - 0x30)
// Class SocialDefaults.SocialActionButtonStyleDataAsset
class USocialActionButtonStyleDataAsset : public UDataAsset
{
public:
	struct FButtonStyle                          Style;                                             // 0x30(0x278)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USocialActionButtonStyleDataAsset* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class SocialDefaults.SocialChatChromeColorSchemeDataAsset
class USocialChatChromeColorSchemeDataAsset : public UDataAsset
{
public:
	struct FChatChromeColorScheme                Style;                                             // 0x30(0x50)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USocialChatChromeColorSchemeDataAsset* GetDefaultObj();

};

// 0x68 (0x98 - 0x30)
// Class SocialDefaults.SocialChatChromeMarginsDataAsset
class USocialChatChromeMarginsDataAsset : public UDataAsset
{
public:
	struct FChatChromeMargins                    Style;                                             // 0x30(0x64)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1086[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialChatChromeMarginsDataAsset* GetDefaultObj();

};

// 0x7C8 (0x7F8 - 0x30)
// Class SocialDefaults.SocialChatChromeStyleDataAsset
class USocialChatChromeStyleDataAsset : public UDataAsset
{
public:
	struct FChatChromeStyle                      Style;                                             // 0x30(0x7C8)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USocialChatChromeStyleDataAsset* GetDefaultObj();

};

// 0x610 (0x640 - 0x30)
// Class SocialDefaults.SocialChatMarkupStyleDataAsset
class USocialChatMarkupStyleDataAsset : public UDataAsset
{
public:
	struct FChatMarkupStyle                      Style;                                             // 0x30(0x610)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USocialChatMarkupStyleDataAsset* GetDefaultObj();

};

// 0x1370 (0x13A0 - 0x30)
// Class SocialDefaults.SocialChatStyleDataAsset
class USocialChatStyleDataAsset : public UDataAsset
{
public:
	struct FChatStyle                            Style;                                             // 0x30(0x1370)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USocialChatStyleDataAsset* GetDefaultObj();

};

// 0x580 (0x5B0 - 0x30)
// Class SocialDefaults.SocialCheckBoxStyleDataAsset
class USocialCheckBoxStyleDataAsset : public UDataAsset
{
public:
	struct FCheckBoxStyle                        Style;                                             // 0x30(0x580)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USocialCheckBoxStyleDataAsset* GetDefaultObj();

};

// 0x240 (0x270 - 0x30)
// Class SocialDefaults.SocialFontStyleDataAsset
class USocialFontStyleDataAsset : public UDataAsset
{
public:
	struct FSocialFontStyle                      Style;                                             // 0x30(0x240)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USocialFontStyleDataAsset* GetDefaultObj();

};

// 0x200 (0x230 - 0x30)
// Class SocialDefaults.SocialListMarginsDataAsset
class USocialListMarginsDataAsset : public UDataAsset
{
public:
	struct FSocialListMargins                    Style;                                             // 0x30(0x200)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USocialListMarginsDataAsset* GetDefaultObj();

};

// 0x2700 (0x2730 - 0x30)
// Class SocialDefaults.SocialListStyleDataAsset
class USocialListStyleDataAsset : public UDataAsset
{
public:
	struct FSocialListStyle                      Style;                                             // 0x30(0x2700)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USocialListStyleDataAsset* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class SocialDefaults.SocialProfanityDataAsset
class USocialProfanityDataAsset : public UDataAsset
{
public:
	TArray<struct FProfanityData>                ProfanityData;                                     // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USocialProfanityDataAsset* GetDefaultObj();

};

// 0x580 (0x5B0 - 0x30)
// Class SocialDefaults.SocialRadioBoxStyleDataAsset
class USocialRadioBoxStyleDataAsset : public UDataAsset
{
public:
	struct FCheckBoxStyle                        Style;                                             // 0x30(0x580)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USocialRadioBoxStyleDataAsset* GetDefaultObj();

};

// 0x4D0 (0x500 - 0x30)
// Class SocialDefaults.SocialScrollBarStyleDataAsset
class USocialScrollBarStyleDataAsset : public UDataAsset
{
public:
	struct FScrollBarStyle                       Style;                                             // 0x30(0x4D0)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USocialScrollBarStyleDataAsset* GetDefaultObj();

};

// 0x48 (0x78 - 0x30)
// Class SocialDefaults.SocialSoundSchemaDataAsset
class USocialSoundSchemaDataAsset : public UDataAsset
{
public:
	struct FSocialSoundSchema                    SoundSchema;                                       // 0x30(0x48)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USocialSoundSchemaDataAsset* GetDefaultObj();

};

// 0x6840 (0x6870 - 0x30)
// Class SocialDefaults.SocialStyleDataAsset
class USocialStyleDataAsset : public UDataAsset
{
public:
	class USocialFontStyleDataAsset*             SmallFontStyle;                                    // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialFontStyleDataAsset*             NormalFontStyle;                                   // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialFontStyleDataAsset*             LargeFontStyle;                                    // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialFontStyleDataAsset*             ChatFontStyle;                                     // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialListStyleDataAsset*             SocialListStyle;                                   // 0x50(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialListMarginsDataAsset*           SocialListMargins;                                 // 0x58(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialChatStyleDataAsset*             ChatStyle;                                         // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialChatChromeStyleDataAsset*       ChatChromeStyle;                                   // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialChatChromeMarginsDataAsset*     ChatChromeMargins;                                 // 0x70(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialChatChromeColorSchemeDataAsset* ChatChromeColorScheme;                             // 0x78(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UChatColorSchemeDataAsset*             ChatColorScheme;                                   // 0x80(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialSoundSchemaDataAsset*           SoundSchema;                                       // 0x88(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialActionButtonStyleDataAsset*     ActionButtonStyle;                                 // 0x90(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialCheckBoxStyleDataAsset*         CheckBoxStyle;                                     // 0x98(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialRadioBoxStyleDataAsset*         RadioBoxStyle;                                     // 0xA0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialScrollBarStyleDataAsset*        ScrollBoxStyle;                                    // 0xA8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialChatMarkupStyleDataAsset*       MarkupStyle;                                       // 0xB0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialProfanityDataAsset*             ProfanityDataAsset;                                // 0xB8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10A4[0x67B0];                                  // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialStyleDataAsset* GetDefaultObj();

};

}


