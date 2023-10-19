#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x330 - 0x328)
// Class ImagePlate.ImagePlate
class AImagePlate : public AActor
{
public:
	class UImagePlateComponent*                  ImagePlate;                                        // 0x328(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AImagePlate* GetDefaultObj();

};

// 0xD0 (0x630 - 0x560)
// Class ImagePlate.ImagePlateComponent
class UImagePlateComponent : public UPrimitiveComponent
{
public:
	struct FImagePlateParameters                 Plate;                                             // 0x560(0x38)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_870[0x98];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UImagePlateComponent* GetDefaultObj();

	void SetImagePlate(const struct FImagePlateParameters& Plate);
	void OnRenderTextureChanged();
	struct FImagePlateParameters GetPlate();
};

// 0x10 (0x38 - 0x28)
// Class ImagePlate.ImagePlateSettings
class UImagePlateSettings : public UObject
{
public:
	class FString                                ProxyName;                                         // 0x28(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UImagePlateSettings* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class ImagePlate.ImagePlateFileSequence
class UImagePlateFileSequence : public UObject
{
public:
	struct FDirectoryPath                        SequencePath;                                      // 0x28(0x10)(Edit, NativeAccessSpecifierPublic)
	class FString                                FileWildcard;                                      // 0x38(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FrameRate;                                         // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_876[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UImagePlateFileSequence* GetDefaultObj();

};

// 0x0 (0x560 - 0x560)
// Class ImagePlate.ImagePlateFrustumComponent
class UImagePlateFrustumComponent : public UPrimitiveComponent
{
public:

	static class UClass* StaticClass();
	static class UImagePlateFrustumComponent* GetDefaultObj();

};

// 0x10 (0xF0 - 0xE0)
// Class ImagePlate.MovieSceneImagePlateSection
class UMovieSceneImagePlateSection : public UMovieSceneSection
{
public:
	class UImagePlateFileSequence*               FileSequence;                                      // 0xE0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReuseExistingTexture;                             // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_878[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneImagePlateSection* GetDefaultObj();

};

// 0x0 (0x80 - 0x80)
// Class ImagePlate.MovieSceneImagePlateTrack
class UMovieSceneImagePlateTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneImagePlateTrack* GetDefaultObj();

};

}


