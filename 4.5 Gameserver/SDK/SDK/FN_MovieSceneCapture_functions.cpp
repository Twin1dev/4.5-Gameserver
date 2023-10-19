#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MovieSceneCapture.MovieSceneCapture
// (None)

class UClass* UMovieSceneCapture::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneCapture");

	return Clss;
}


// MovieSceneCapture MovieSceneCapture.Default__MovieSceneCapture
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneCapture* UMovieSceneCapture::GetDefaultObj()
{
	static class UMovieSceneCapture* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneCapture*>(UMovieSceneCapture::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneCapture.AutomatedLevelSequenceCapture
// (None)

class UClass* UAutomatedLevelSequenceCapture::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AutomatedLevelSequenceCapture");

	return Clss;
}


// AutomatedLevelSequenceCapture MovieSceneCapture.Default__AutomatedLevelSequenceCapture
// (Public, ClassDefaultObject, ArchetypeObject)

class UAutomatedLevelSequenceCapture* UAutomatedLevelSequenceCapture::GetDefaultObj()
{
	static class UAutomatedLevelSequenceCapture* Default = nullptr;

	if (!Default)
		Default = static_cast<UAutomatedLevelSequenceCapture*>(UAutomatedLevelSequenceCapture::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneCapture.MovieSceneCaptureProtocolSettings
// (None)

class UClass* UMovieSceneCaptureProtocolSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneCaptureProtocolSettings");

	return Clss;
}


// MovieSceneCaptureProtocolSettings MovieSceneCapture.Default__MovieSceneCaptureProtocolSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneCaptureProtocolSettings* UMovieSceneCaptureProtocolSettings::GetDefaultObj()
{
	static class UMovieSceneCaptureProtocolSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneCaptureProtocolSettings*>(UMovieSceneCaptureProtocolSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneCapture.CompositionGraphCaptureSettings
// (None)

class UClass* UCompositionGraphCaptureSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompositionGraphCaptureSettings");

	return Clss;
}


// CompositionGraphCaptureSettings MovieSceneCapture.Default__CompositionGraphCaptureSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UCompositionGraphCaptureSettings* UCompositionGraphCaptureSettings::GetDefaultObj()
{
	static class UCompositionGraphCaptureSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UCompositionGraphCaptureSettings*>(UCompositionGraphCaptureSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneCapture.FrameGrabberProtocolSettings
// (None)

class UClass* UFrameGrabberProtocolSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FrameGrabberProtocolSettings");

	return Clss;
}


// FrameGrabberProtocolSettings MovieSceneCapture.Default__FrameGrabberProtocolSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UFrameGrabberProtocolSettings* UFrameGrabberProtocolSettings::GetDefaultObj()
{
	static class UFrameGrabberProtocolSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UFrameGrabberProtocolSettings*>(UFrameGrabberProtocolSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneCapture.BmpImageCaptureSettings
// (None)

class UClass* UBmpImageCaptureSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BmpImageCaptureSettings");

	return Clss;
}


// BmpImageCaptureSettings MovieSceneCapture.Default__BmpImageCaptureSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UBmpImageCaptureSettings* UBmpImageCaptureSettings::GetDefaultObj()
{
	static class UBmpImageCaptureSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UBmpImageCaptureSettings*>(UBmpImageCaptureSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneCapture.ImageCaptureSettings
// (None)

class UClass* UImageCaptureSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ImageCaptureSettings");

	return Clss;
}


// ImageCaptureSettings MovieSceneCapture.Default__ImageCaptureSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UImageCaptureSettings* UImageCaptureSettings::GetDefaultObj()
{
	static class UImageCaptureSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UImageCaptureSettings*>(UImageCaptureSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneCapture.MovieSceneCaptureInterface
// (None)

class UClass* IMovieSceneCaptureInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneCaptureInterface");

	return Clss;
}


// MovieSceneCaptureInterface MovieSceneCapture.Default__MovieSceneCaptureInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IMovieSceneCaptureInterface* IMovieSceneCaptureInterface::GetDefaultObj()
{
	static class IMovieSceneCaptureInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IMovieSceneCaptureInterface*>(IMovieSceneCaptureInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneCapture.LevelCapture
// (None)

class UClass* ULevelCapture::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelCapture");

	return Clss;
}


// LevelCapture MovieSceneCapture.Default__LevelCapture
// (Public, ClassDefaultObject, ArchetypeObject)

class ULevelCapture* ULevelCapture::GetDefaultObj()
{
	static class ULevelCapture* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelCapture*>(ULevelCapture::StaticClass()->DefaultObject);

	return Default;
}


// Class MovieSceneCapture.MovieSceneCaptureEnvironment
// (None)

class UClass* UMovieSceneCaptureEnvironment::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneCaptureEnvironment");

	return Clss;
}


// MovieSceneCaptureEnvironment MovieSceneCapture.Default__MovieSceneCaptureEnvironment
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneCaptureEnvironment* UMovieSceneCaptureEnvironment::GetDefaultObj()
{
	static class UMovieSceneCaptureEnvironment* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneCaptureEnvironment*>(UMovieSceneCaptureEnvironment::StaticClass()->DefaultObject);

	return Default;
}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMovieSceneCaptureEnvironment::GetCaptureFrameNumber()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneCaptureEnvironment", "GetCaptureFrameNumber");

	Params::UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMovieSceneCaptureEnvironment::GetCaptureElapsedTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneCaptureEnvironment", "GetCaptureElapsedTime");

	Params::UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MovieSceneCapture.VideoCaptureSettings
// (None)

class UClass* UVideoCaptureSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VideoCaptureSettings");

	return Clss;
}


// VideoCaptureSettings MovieSceneCapture.Default__VideoCaptureSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UVideoCaptureSettings* UVideoCaptureSettings::GetDefaultObj()
{
	static class UVideoCaptureSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UVideoCaptureSettings*>(UVideoCaptureSettings::StaticClass()->DefaultObject);

	return Default;
}

}


