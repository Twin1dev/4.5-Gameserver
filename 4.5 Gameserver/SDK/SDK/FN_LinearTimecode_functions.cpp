#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LinearTimecode.LinearTimecodeComponent
// (SceneComponent)

class UClass* ULinearTimecodeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LinearTimecodeComponent");

	return Clss;
}


// LinearTimecodeComponent LinearTimecode.Default__LinearTimecodeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class ULinearTimecodeComponent* ULinearTimecodeComponent::GetDefaultObj()
{
	static class ULinearTimecodeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<ULinearTimecodeComponent*>(ULinearTimecodeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function LinearTimecode.LinearTimecodeComponent.SetDropTimecodeFrameNumber
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDropTimecode               Timecode                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// int32                              FrameNumber                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDropTimecode               OutTimecode                                                      (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void ULinearTimecodeComponent::SetDropTimecodeFrameNumber(struct FDropTimecode& Timecode, int32 FrameNumber, struct FDropTimecode* OutTimecode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LinearTimecodeComponent", "SetDropTimecodeFrameNumber");

	Params::ULinearTimecodeComponent_SetDropTimecodeFrameNumber_Params Parms{};

	Parms.Timecode = Timecode;
	Parms.FrameNumber = FrameNumber;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutTimecode != nullptr)
		*OutTimecode = std::move(Parms.OutTimecode);

}


// Function LinearTimecode.LinearTimecodeComponent.GetDropTimeCodeFrameNumber
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDropTimecode               Timecode                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// int32                              FrameNumber                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULinearTimecodeComponent::GetDropTimeCodeFrameNumber(struct FDropTimecode& Timecode, int32* FrameNumber)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LinearTimecodeComponent", "GetDropTimeCodeFrameNumber");

	Params::ULinearTimecodeComponent_GetDropTimeCodeFrameNumber_Params Parms{};

	Parms.Timecode = Timecode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FrameNumber != nullptr)
		*FrameNumber = Parms.FrameNumber;

}


// Function LinearTimecode.LinearTimecodeComponent.GetDropFrameNumber
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULinearTimecodeComponent::GetDropFrameNumber()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LinearTimecodeComponent", "GetDropFrameNumber");

	Params::ULinearTimecodeComponent_GetDropFrameNumber_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class LinearTimecode.DropTimecodeToStringConversion
// (None)

class UClass* UDropTimecodeToStringConversion::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DropTimecodeToStringConversion");

	return Clss;
}


// DropTimecodeToStringConversion LinearTimecode.Default__DropTimecodeToStringConversion
// (Public, ClassDefaultObject, ArchetypeObject)

class UDropTimecodeToStringConversion* UDropTimecodeToStringConversion::GetDefaultObj()
{
	static class UDropTimecodeToStringConversion* Default = nullptr;

	if (!Default)
		Default = static_cast<UDropTimecodeToStringConversion*>(UDropTimecodeToStringConversion::StaticClass()->DefaultObject);

	return Default;
}


// Function LinearTimecode.DropTimecodeToStringConversion.Conv_DropTimecodeToString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDropTimecode               InTimecode                                                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UDropTimecodeToStringConversion::Conv_DropTimecodeToString(struct FDropTimecode& InTimecode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DropTimecodeToStringConversion", "Conv_DropTimecodeToString");

	Params::UDropTimecodeToStringConversion_Conv_DropTimecodeToString_Params Parms{};

	Parms.InTimecode = InTimecode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


