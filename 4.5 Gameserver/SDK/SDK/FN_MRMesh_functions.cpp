#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MRMesh.MeshReconstructorBase
// (None)

class UClass* UMeshReconstructorBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshReconstructorBase");

	return Clss;
}


// MeshReconstructorBase MRMesh.Default__MeshReconstructorBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshReconstructorBase* UMeshReconstructorBase::GetDefaultObj()
{
	static class UMeshReconstructorBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshReconstructorBase*>(UMeshReconstructorBase::StaticClass()->DefaultObject);

	return Default;
}


// Function MRMesh.MeshReconstructorBase.StopReconstruction
// (Native, Public, BlueprintCallable)
// Parameters:

void UMeshReconstructorBase::StopReconstruction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshReconstructorBase", "StopReconstruction");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MRMesh.MeshReconstructorBase.StartReconstruction
// (Native, Public, BlueprintCallable)
// Parameters:

void UMeshReconstructorBase::StartReconstruction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshReconstructorBase", "StartReconstruction");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MRMesh.MeshReconstructorBase.PauseReconstruction
// (Native, Public, BlueprintCallable)
// Parameters:

void UMeshReconstructorBase::PauseReconstruction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshReconstructorBase", "PauseReconstruction");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MRMesh.MeshReconstructorBase.IsReconstructionStarted
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMeshReconstructorBase::IsReconstructionStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshReconstructorBase", "IsReconstructionStarted");

	Params::UMeshReconstructorBase_IsReconstructionStarted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MRMesh.MeshReconstructorBase.IsReconstructionPaused
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMeshReconstructorBase::IsReconstructionPaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshReconstructorBase", "IsReconstructionPaused");

	Params::UMeshReconstructorBase_IsReconstructionPaused_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MRMesh.MeshReconstructorBase.DisconnectMRMesh
// (Native, Public)
// Parameters:

void UMeshReconstructorBase::DisconnectMRMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshReconstructorBase", "DisconnectMRMesh");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MRMesh.MeshReconstructorBase.ConnectMRMesh
// (Native, Public)
// Parameters:
// class UMRMeshComponent*            Mesh                                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMRMeshConfiguration        ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FMRMeshConfiguration UMeshReconstructorBase::ConnectMRMesh(class UMRMeshComponent* Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshReconstructorBase", "ConnectMRMesh");

	Params::UMeshReconstructorBase_ConnectMRMesh_Params Parms{};

	Parms.Mesh = Mesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class MRMesh.MRMeshComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UMRMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MRMeshComponent");

	return Clss;
}


// MRMeshComponent MRMesh.Default__MRMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMRMeshComponent* UMRMeshComponent::GetDefaultObj()
{
	static class UMRMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMRMeshComponent*>(UMRMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MRMesh.MRMeshComponent.GetReconstructor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMeshReconstructorBase*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMeshReconstructorBase* UMRMeshComponent::GetReconstructor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MRMeshComponent", "GetReconstructor");

	Params::UMRMeshComponent_GetReconstructor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MRMesh.MRMeshComponent.ConnectReconstructor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMeshReconstructorBase*      Reconstructor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMRMeshComponent::ConnectReconstructor(class UMeshReconstructorBase* Reconstructor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MRMeshComponent", "ConnectReconstructor");

	Params::UMRMeshComponent_ConnectReconstructor_Params Parms{};

	Parms.Reconstructor = Reconstructor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


