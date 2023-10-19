#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B0 (0x1D8 - 0x28)
// Class MovieSceneCapture.MovieSceneCapture
class UMovieSceneCapture : public UObject
{
public:
	uint8                                        Pad_F90[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCaptureProtocolID                    CaptureType;                                       // 0x38(0x8)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneCaptureProtocolSettings*    ProtocolSettings;                                  // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneCaptureSettings            Settings;                                          // 0x48(0x50)(Edit, Config, NativeAccessSpecifierPublic)
	bool                                         bUseSeparateProcess;                               // 0x98(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCloseEditorWhenCaptureStarts;                     // 0x99(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F94[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AdditionalCommandLineArguments;                    // 0xA0(0x10)(Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InheritedCommandLineArguments;                     // 0xB0(0x10)(Edit, ZeroConstructor, Transient, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F95[0x118];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneCapture* GetDefaultObj();

};

// 0x0 (0x1D8 - 0x1D8)
// Class MovieSceneCapture.AutomatedLevelSequenceCapture
class UAutomatedLevelSequenceCapture : public UMovieSceneCapture
{
public:

	static class UClass* StaticClass();
	static class UAutomatedLevelSequenceCapture* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieSceneCapture.MovieSceneCaptureProtocolSettings
class UMovieSceneCaptureProtocolSettings : public UObject
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneCaptureProtocolSettings* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class MovieSceneCapture.CompositionGraphCaptureSettings
class UCompositionGraphCaptureSettings : public UMovieSceneCaptureProtocolSettings
{
public:
	struct FCompositionGraphCapturePasses        IncludeRenderPasses;                               // 0x28(0x10)(Edit, Config, NativeAccessSpecifierPublic)
	bool                                         bCaptureFramesInHDR;                               // 0x38(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F9D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HDRCompressionQuality;                             // 0x3C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHDRCaptureGamut                  CaptureGamut;                                      // 0x40(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F9E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftObjectPath                       PostProcessingMaterial;                            // 0x48(0x18)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableScreenPercentage;                          // 0x60(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FA1[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCompositionGraphCaptureSettings* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class MovieSceneCapture.FrameGrabberProtocolSettings
class UFrameGrabberProtocolSettings : public UMovieSceneCaptureProtocolSettings
{
public:
	uint8                                        Pad_FA6[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFrameGrabberProtocolSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieSceneCapture.BmpImageCaptureSettings
class UBmpImageCaptureSettings : public UMovieSceneCaptureProtocolSettings
{
public:

	static class UClass* StaticClass();
	static class UBmpImageCaptureSettings* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class MovieSceneCapture.ImageCaptureSettings
class UImageCaptureSettings : public UFrameGrabberProtocolSettings
{
public:
	int32                                        CompressionQuality;                                // 0x30(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FAF[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UImageCaptureSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieSceneCapture.MovieSceneCaptureInterface
class IMovieSceneCaptureInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneCaptureInterface* GetDefaultObj();

};

// 0x20 (0x1F8 - 0x1D8)
// Class MovieSceneCapture.LevelCapture
class ULevelCapture : public UMovieSceneCapture
{
public:
	bool                                         bAutoStartCapture;                                 // 0x1D8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FB6[0xB];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 PrerequisiteActorId;                               // 0x1E4(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FB7[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULevelCapture* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieSceneCapture.MovieSceneCaptureEnvironment
class UMovieSceneCaptureEnvironment : public UObject
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneCaptureEnvironment* GetDefaultObj();

	int32 GetCaptureFrameNumber();
	float GetCaptureElapsedTime();
};

// 0x18 (0x48 - 0x30)
// Class MovieSceneCapture.VideoCaptureSettings
class UVideoCaptureSettings : public UFrameGrabberProtocolSettings
{
public:
	bool                                         bUseCompression;                                   // 0x30(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FC6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CompressionQuality;                                // 0x34(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VideoCodec;                                        // 0x38(0x10)(Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVideoCaptureSettings* GetDefaultObj();

};

}


