#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LevelSequence.DefaultLevelSequenceInstanceData
// (None)

class UClass* UDefaultLevelSequenceInstanceData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultLevelSequenceInstanceData");

	return Clss;
}


// DefaultLevelSequenceInstanceData LevelSequence.Default__DefaultLevelSequenceInstanceData
// (Public, ClassDefaultObject, ArchetypeObject)

class UDefaultLevelSequenceInstanceData* UDefaultLevelSequenceInstanceData::GetDefaultObj()
{
	static class UDefaultLevelSequenceInstanceData* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefaultLevelSequenceInstanceData*>(UDefaultLevelSequenceInstanceData::StaticClass()->DefaultObject);

	return Default;
}


// Class LevelSequence.LevelSequence
// (None)

class UClass* ULevelSequence::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelSequence");

	return Clss;
}


// LevelSequence LevelSequence.Default__LevelSequence
// (Public, ClassDefaultObject, ArchetypeObject)

class ULevelSequence* ULevelSequence::GetDefaultObj()
{
	static class ULevelSequence* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelSequence*>(ULevelSequence::StaticClass()->DefaultObject);

	return Default;
}


// Class LevelSequence.LevelSequenceBurnInInitSettings
// (None)

class UClass* ULevelSequenceBurnInInitSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelSequenceBurnInInitSettings");

	return Clss;
}


// LevelSequenceBurnInInitSettings LevelSequence.Default__LevelSequenceBurnInInitSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class ULevelSequenceBurnInInitSettings* ULevelSequenceBurnInInitSettings::GetDefaultObj()
{
	static class ULevelSequenceBurnInInitSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelSequenceBurnInInitSettings*>(ULevelSequenceBurnInInitSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class LevelSequence.LevelSequenceBurnInOptions
// (None)

class UClass* ULevelSequenceBurnInOptions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelSequenceBurnInOptions");

	return Clss;
}


// LevelSequenceBurnInOptions LevelSequence.Default__LevelSequenceBurnInOptions
// (Public, ClassDefaultObject, ArchetypeObject)

class ULevelSequenceBurnInOptions* ULevelSequenceBurnInOptions::GetDefaultObj()
{
	static class ULevelSequenceBurnInOptions* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelSequenceBurnInOptions*>(ULevelSequenceBurnInOptions::StaticClass()->DefaultObject);

	return Default;
}


// Class LevelSequence.LevelSequenceActor
// (Actor)

class UClass* ALevelSequenceActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelSequenceActor");

	return Clss;
}


// LevelSequenceActor LevelSequence.Default__LevelSequenceActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ALevelSequenceActor* ALevelSequenceActor::GetDefaultObj()
{
	static class ALevelSequenceActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ALevelSequenceActor*>(ALevelSequenceActor::StaticClass()->DefaultObject);

	return Default;
}


// Function LevelSequence.LevelSequenceActor.SetSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULevelSequence*              InSequence                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceActor::SetSequence(class ULevelSequence* InSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "SetSequence");

	Params::ALevelSequenceActor_SetSequence_Params Parms{};

	Parms.InSequence = InSequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LevelSequence.LevelSequenceActor.SetEventReceivers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class AActor*>              AdditionalReceivers                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void ALevelSequenceActor::SetEventReceivers(const TArray<class AActor*>& AdditionalReceivers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "SetEventReceivers");

	Params::ALevelSequenceActor_SetEventReceivers_Params Parms{};

	Parms.AdditionalReceivers = AdditionalReceivers;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LevelSequence.LevelSequenceActor.SetBinding
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  Binding                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              Actors                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bAllowBindingsFromAsset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceActor::SetBinding(const struct FMovieSceneObjectBindingID& Binding, TArray<class AActor*>& Actors, bool bAllowBindingsFromAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "SetBinding");

	Params::ALevelSequenceActor_SetBinding_Params Parms{};

	Parms.Binding = Binding;
	Parms.Actors = Actors;
	Parms.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LevelSequence.LevelSequenceActor.ResetBindings
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ALevelSequenceActor::ResetBindings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "ResetBindings");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LevelSequence.LevelSequenceActor.ResetBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  Binding                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceActor::ResetBinding(const struct FMovieSceneObjectBindingID& Binding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "ResetBinding");

	Params::ALevelSequenceActor_ResetBinding_Params Parms{};

	Parms.Binding = Binding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LevelSequence.LevelSequenceActor.RemoveBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  Binding                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceActor::RemoveBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "RemoveBinding");

	Params::ALevelSequenceActor_RemoveBinding_Params Parms{};

	Parms.Binding = Binding;
	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LevelSequence.LevelSequenceActor.GetSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bLoad                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInitializePlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULevelSequence*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULevelSequence* ALevelSequenceActor::GetSequence(bool bLoad, bool bInitializePlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "GetSequence");

	Params::ALevelSequenceActor_GetSequence_Params Parms{};

	Parms.bLoad = bLoad;
	Parms.bInitializePlayer = bInitializePlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceActor.AddBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  Binding                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowBindingsFromAsset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceActor::AddBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "AddBinding");

	Params::ALevelSequenceActor_AddBinding_Params Parms{};

	Parms.Binding = Binding;
	Parms.Actor = Actor;
	Parms.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LevelSequence.LevelSequenceBurnIn
// (None)

class UClass* ULevelSequenceBurnIn::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelSequenceBurnIn");

	return Clss;
}


// LevelSequenceBurnIn LevelSequence.Default__LevelSequenceBurnIn
// (Public, ClassDefaultObject, ArchetypeObject)

class ULevelSequenceBurnIn* ULevelSequenceBurnIn::GetDefaultObj()
{
	static class ULevelSequenceBurnIn* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelSequenceBurnIn*>(ULevelSequenceBurnIn::StaticClass()->DefaultObject);

	return Default;
}


// Function LevelSequence.LevelSequenceBurnIn.SetSettings
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     InSettings                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelSequenceBurnIn::SetSettings(class UObject* InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceBurnIn", "SetSettings");

	Params::ULevelSequenceBurnIn_SetSettings_Params Parms{};

	Parms.InSettings = InSettings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// TSubclassOf<class ULevelSequenceBurnInInitSettings>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class ULevelSequenceBurnInInitSettings> ULevelSequenceBurnIn::GetSettingsClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceBurnIn", "GetSettingsClass");

	Params::ULevelSequenceBurnIn_GetSettingsClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class LevelSequence.LevelSequencePlayer
// (None)

class UClass* ULevelSequencePlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelSequencePlayer");

	return Clss;
}


// LevelSequencePlayer LevelSequence.Default__LevelSequencePlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class ULevelSequencePlayer* ULevelSequencePlayer::GetDefaultObj()
{
	static class ULevelSequencePlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelSequencePlayer*>(ULevelSequencePlayer::StaticClass()->DefaultObject);

	return Default;
}


// Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMovieSceneSequencePlaybackSettingsSettings                                                         (Parm, NativeAccessSpecifierPublic)
// class ALevelSequenceActor*         OutActor                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULevelSequencePlayer*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULevelSequencePlayer* ULevelSequencePlayer::CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ALevelSequenceActor** OutActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequencePlayer", "CreateLevelSequencePlayer");

	Params::ULevelSequencePlayer_CreateLevelSequencePlayer_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LevelSequence = LevelSequence;
	Parms.Settings = Settings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutActor != nullptr)
		*OutActor = Parms.OutActor;

	return Parms.ReturnValue;

}

}


