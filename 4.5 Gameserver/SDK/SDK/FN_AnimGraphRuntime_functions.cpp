#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AnimGraphRuntime.AnimCustomInstance
// (None)

class UClass* UAnimCustomInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimCustomInstance");

	return Clss;
}


// AnimCustomInstance AnimGraphRuntime.Default__AnimCustomInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimCustomInstance* UAnimCustomInstance::GetDefaultObj()
{
	static class UAnimCustomInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimCustomInstance*>(UAnimCustomInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
// (None)

class UClass* UAnimNotify_PlayMontageNotify::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_PlayMontageNotify");

	return Clss;
}


// AnimNotify_PlayMontageNotify AnimGraphRuntime.Default__AnimNotify_PlayMontageNotify
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotify_PlayMontageNotify* UAnimNotify_PlayMontageNotify::GetDefaultObj()
{
	static class UAnimNotify_PlayMontageNotify* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_PlayMontageNotify*>(UAnimNotify_PlayMontageNotify::StaticClass()->DefaultObject);

	return Default;
}


// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
// (None)

class UClass* UAnimNotify_PlayMontageNotifyWindow::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_PlayMontageNotifyWindow");

	return Clss;
}


// AnimNotify_PlayMontageNotifyWindow AnimGraphRuntime.Default__AnimNotify_PlayMontageNotifyWindow
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotify_PlayMontageNotifyWindow* UAnimNotify_PlayMontageNotifyWindow::GetDefaultObj()
{
	static class UAnimNotify_PlayMontageNotifyWindow* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_PlayMontageNotifyWindow*>(UAnimNotify_PlayMontageNotifyWindow::StaticClass()->DefaultObject);

	return Default;
}


// Class AnimGraphRuntime.AnimSequencerInstance
// (None)

class UClass* UAnimSequencerInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimSequencerInstance");

	return Clss;
}


// AnimSequencerInstance AnimGraphRuntime.Default__AnimSequencerInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimSequencerInstance* UAnimSequencerInstance::GetDefaultObj()
{
	static class UAnimSequencerInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimSequencerInstance*>(UAnimSequencerInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class AnimGraphRuntime.KismetAnimationLibrary
// (None)

class UClass* UKismetAnimationLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KismetAnimationLibrary");

	return Clss;
}


// KismetAnimationLibrary AnimGraphRuntime.Default__KismetAnimationLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UKismetAnimationLibrary* UKismetAnimationLibrary::GetDefaultObj()
{
	static class UKismetAnimationLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UKismetAnimationLibrary*>(UKismetAnimationLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     RootPos                                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     JointPos                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     EndPos                                                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     JointTarget                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Effector                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutJointPos                                                      (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutEndPos                                                        (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowStretching                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartStretchRatio                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxStretchScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKismetAnimationLibrary::K2_TwoBoneIK(struct FVector& RootPos, struct FVector& JointPos, struct FVector& EndPos, struct FVector& JointTarget, struct FVector& Effector, struct FVector* OutJointPos, struct FVector* OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_TwoBoneIK");

	Params::UKismetAnimationLibrary_K2_TwoBoneIK_Params Parms{};

	Parms.RootPos = RootPos;
	Parms.JointPos = JointPos;
	Parms.EndPos = EndPos;
	Parms.JointTarget = JointTarget;
	Parms.Effector = Effector;
	Parms.bAllowStretching = bAllowStretching;
	Parms.StartStretchRatio = StartStretchRatio;
	Parms.MaxStretchScale = MaxStretchScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutJointPos != nullptr)
		*OutJointPos = std::move(Parms.OutJointPos);

	if (OutEndPos != nullptr)
		*OutEndPos = std::move(Parms.OutEndPos);

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  CurrentTransform                                                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     TargetPosition                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LookAtVector                                                     (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseUpVector                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     UpVector                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ClampConeInDegree                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform UKismetAnimationLibrary::K2_LookAt(struct FTransform& CurrentTransform, struct FVector& TargetPosition, const struct FVector& LookAtVector, bool bUseUpVector, const struct FVector& UpVector, float ClampConeInDegree)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_LookAt");

	Params::UKismetAnimationLibrary_K2_LookAt_Params Parms{};

	Parms.CurrentTransform = CurrentTransform;
	Parms.TargetPosition = TargetPosition;
	Parms.LookAtVector = LookAtVector;
	Parms.bUseUpVector = bUseUpVector;
	Parms.UpVector = UpVector;
	Parms.ClampConeInDegree = ClampConeInDegree;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AnimGraphRuntime.PlayMontageCallbackProxy
// (None)

class UClass* UPlayMontageCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayMontageCallbackProxy");

	return Clss;
}


// PlayMontageCallbackProxy AnimGraphRuntime.Default__PlayMontageCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayMontageCallbackProxy* UPlayMontageCallbackProxy::GetDefaultObj()
{
	static class UPlayMontageCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayMontageCallbackProxy*>(UPlayMontageCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class FName                        NotifyName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBranchingPointNotifyPayloadBranchingPointNotifyPayload                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UPlayMontageCallbackProxy::OnNotifyEndReceived(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayMontageCallbackProxy", "OnNotifyEndReceived");

	Params::UPlayMontageCallbackProxy_OnNotifyEndReceived_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class FName                        NotifyName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBranchingPointNotifyPayloadBranchingPointNotifyPayload                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UPlayMontageCallbackProxy::OnNotifyBeginReceived(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayMontageCallbackProxy", "OnNotifyBeginReceived");

	Params::UPlayMontageCallbackProxy_OnNotifyBeginReceived_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
// (Final, Native, Protected)
// Parameters:
// class UAnimMontage*                Montage                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInterrupted                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayMontageCallbackProxy::OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayMontageCallbackProxy", "OnMontageEnded");

	Params::UPlayMontageCallbackProxy_OnMontageEnded_Params Parms{};

	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
// (Final, Native, Protected)
// Parameters:
// class UAnimMontage*                Montage                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInterrupted                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayMontageCallbackProxy::OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayMontageCallbackProxy", "OnMontageBlendingOut");

	Params::UPlayMontageCallbackProxy_OnMontageBlendingOut_Params Parms{};

	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      InSkeletalMeshComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimMontage*                MontageToPlay                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PlayRate                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartingPosition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        StartingSection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayMontageCallbackProxy*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPlayMontageCallbackProxy* UPlayMontageCallbackProxy::CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, class FName StartingSection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayMontageCallbackProxy", "CreateProxyObjectForPlayMontage");

	Params::UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Params Parms{};

	Parms.InSkeletalMeshComponent = InSkeletalMeshComponent;
	Parms.MontageToPlay = MontageToPlay;
	Parms.PlayRate = PlayRate;
	Parms.StartingPosition = StartingPosition;
	Parms.StartingSection = StartingSection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


