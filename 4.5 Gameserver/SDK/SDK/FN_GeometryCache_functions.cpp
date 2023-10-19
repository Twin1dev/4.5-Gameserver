#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GeometryCache.GeometryCache
// (None)

class UClass* UGeometryCache::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCache");

	return Clss;
}


// GeometryCache GeometryCache.Default__GeometryCache
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryCache* UGeometryCache::GetDefaultObj()
{
	static class UGeometryCache* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryCache*>(UGeometryCache::StaticClass()->DefaultObject);

	return Default;
}


// Class GeometryCache.GeometryCacheActor
// (Actor)

class UClass* AGeometryCacheActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCacheActor");

	return Clss;
}


// GeometryCacheActor GeometryCache.Default__GeometryCacheActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AGeometryCacheActor* AGeometryCacheActor::GetDefaultObj()
{
	static class AGeometryCacheActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AGeometryCacheActor*>(AGeometryCacheActor::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGeometryCacheComponent*     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGeometryCacheComponent* AGeometryCacheActor::GetGeometryCacheComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheActor", "GetGeometryCacheComponent");

	Params::AGeometryCacheActor_GetGeometryCacheComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryCache.GeometryCacheComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UGeometryCacheComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCacheComponent");

	return Clss;
}


// GeometryCacheComponent GeometryCache.Default__GeometryCacheComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryCacheComponent* UGeometryCacheComponent::GetDefaultObj()
{
	static class UGeometryCacheComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryCacheComponent*>(UGeometryCacheComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryCache.GeometryCacheComponent.Stop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGeometryCacheComponent::Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "Stop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewStartTimeOffset                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCacheComponent::SetStartTimeOffset(float NewStartTimeOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "SetStartTimeOffset");

	Params::UGeometryCacheComponent_SetStartTimeOffset_Params Parms{};

	Parms.NewStartTimeOffset = NewStartTimeOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewPlaybackSpeed                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCacheComponent::SetPlaybackSpeed(float NewPlaybackSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "SetPlaybackSpeed");

	Params::UGeometryCacheComponent_SetPlaybackSpeed_Params Parms{};

	Parms.NewPlaybackSpeed = NewPlaybackSpeed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCache.GeometryCacheComponent.SetLooping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewLooping                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCacheComponent::SetLooping(bool bNewLooping)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "SetLooping");

	Params::UGeometryCacheComponent_SetLooping_Params Parms{};

	Parms.bNewLooping = bNewLooping;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCache.GeometryCacheComponent.SetGeometryCache
// (Native, Public, BlueprintCallable)
// Parameters:
// class UGeometryCache*              NewGeomCache                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGeometryCacheComponent::SetGeometryCache(class UGeometryCache* NewGeomCache)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "SetGeometryCache");

	Params::UGeometryCacheComponent_SetGeometryCache_Params Parms{};

	Parms.NewGeomCache = NewGeomCache;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGeometryCacheComponent::PlayReversedFromEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "PlayReversedFromEnd");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCache.GeometryCacheComponent.PlayReversed
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGeometryCacheComponent::PlayReversed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "PlayReversed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCache.GeometryCacheComponent.PlayFromStart
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGeometryCacheComponent::PlayFromStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "PlayFromStart");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCache.GeometryCacheComponent.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGeometryCacheComponent::Play()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "Play");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCache.GeometryCacheComponent.Pause
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGeometryCacheComponent::Pause()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "Pause");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCache.GeometryCacheComponent.IsPlayingReversed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGeometryCacheComponent::IsPlayingReversed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "IsPlayingReversed");

	Params::UGeometryCacheComponent_IsPlayingReversed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheComponent.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGeometryCacheComponent::IsPlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "IsPlaying");

	Params::UGeometryCacheComponent_IsPlaying_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheComponent.IsLooping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGeometryCacheComponent::IsLooping()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "IsLooping");

	Params::UGeometryCacheComponent_IsLooping_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGeometryCacheComponent::GetStartTimeOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "GetStartTimeOffset");

	Params::UGeometryCacheComponent_GetStartTimeOffset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGeometryCacheComponent::GetPlaybackSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "GetPlaybackSpeed");

	Params::UGeometryCacheComponent_GetPlaybackSpeed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GeometryCache.GeometryCacheTrack
// (None)

class UClass* UGeometryCacheTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCacheTrack");

	return Clss;
}


// GeometryCacheTrack GeometryCache.Default__GeometryCacheTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryCacheTrack* UGeometryCacheTrack::GetDefaultObj()
{
	static class UGeometryCacheTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryCacheTrack*>(UGeometryCacheTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
// (None)

class UClass* UGeometryCacheTrack_FlipbookAnimation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCacheTrack_FlipbookAnimation");

	return Clss;
}


// GeometryCacheTrack_FlipbookAnimation GeometryCache.Default__GeometryCacheTrack_FlipbookAnimation
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryCacheTrack_FlipbookAnimation* UGeometryCacheTrack_FlipbookAnimation::GetDefaultObj()
{
	static class UGeometryCacheTrack_FlipbookAnimation* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryCacheTrack_FlipbookAnimation*>(UGeometryCacheTrack_FlipbookAnimation::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FGeometryCacheMeshData      MeshData                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                              SampleTime                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCacheTrack_FlipbookAnimation::AddMeshSample(struct FGeometryCacheMeshData& MeshData, float SampleTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheTrack_FlipbookAnimation", "AddMeshSample");

	Params::UGeometryCacheTrack_FlipbookAnimation_AddMeshSample_Params Parms{};

	Parms.MeshData = MeshData;
	Parms.SampleTime = SampleTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryCache.GeometryCacheTrack_TransformAnimation
// (None)

class UClass* UGeometryCacheTrack_TransformAnimation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCacheTrack_TransformAnimation");

	return Clss;
}


// GeometryCacheTrack_TransformAnimation GeometryCache.Default__GeometryCacheTrack_TransformAnimation
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryCacheTrack_TransformAnimation* UGeometryCacheTrack_TransformAnimation::GetDefaultObj()
{
	static class UGeometryCacheTrack_TransformAnimation* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryCacheTrack_TransformAnimation*>(UGeometryCacheTrack_TransformAnimation::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FGeometryCacheMeshData      NewMeshData                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGeometryCacheTrack_TransformAnimation::SetMesh(struct FGeometryCacheMeshData& NewMeshData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheTrack_TransformAnimation", "SetMesh");

	Params::UGeometryCacheTrack_TransformAnimation_SetMesh_Params Parms{};

	Parms.NewMeshData = NewMeshData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
// (None)

class UClass* UGeometryCacheTrack_TransformGroupAnimation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCacheTrack_TransformGroupAnimation");

	return Clss;
}


// GeometryCacheTrack_TransformGroupAnimation GeometryCache.Default__GeometryCacheTrack_TransformGroupAnimation
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryCacheTrack_TransformGroupAnimation* UGeometryCacheTrack_TransformGroupAnimation::GetDefaultObj()
{
	static class UGeometryCacheTrack_TransformGroupAnimation* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryCacheTrack_TransformGroupAnimation*>(UGeometryCacheTrack_TransformGroupAnimation::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FGeometryCacheMeshData      NewMeshData                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGeometryCacheTrack_TransformGroupAnimation::SetMesh(struct FGeometryCacheMeshData& NewMeshData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheTrack_TransformGroupAnimation", "SetMesh");

	Params::UGeometryCacheTrack_TransformGroupAnimation_SetMesh_Params Parms{};

	Parms.NewMeshData = NewMeshData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


