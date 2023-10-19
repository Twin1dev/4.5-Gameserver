#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkSourceFactory
class ULiveLinkSourceFactory : public UObject
{
public:

	static class UClass* StaticClass();
	static class ULiveLinkSourceFactory* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class LiveLinkInterface.LiveLinkSourceSettings
class ULiveLinkSourceSettings : public UObject
{
public:
	struct FLiveLinkInterpolationSettings        InterpolationSettings;                             // 0x28(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULiveLinkSourceSettings* GetDefaultObj();

};

}


