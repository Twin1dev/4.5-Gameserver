#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TransportIndicator.TransportIndicator_C
// (None)

class UClass* UTransportIndicator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TransportIndicator_C");

	return Clss;
}


// TransportIndicator_C TransportIndicator.Default__TransportIndicator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTransportIndicator_C* UTransportIndicator_C::GetDefaultObj()
{
	static class UTransportIndicator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTransportIndicator_C*>(UTransportIndicator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TransportIndicator.TransportIndicator_C.StopTheAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTransportIndicator_C::StopTheAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TransportIndicator_C", "StopTheAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TransportIndicator.TransportIndicator_C.Animate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTransportIndicator_C::Animate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TransportIndicator_C", "Animate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TransportIndicator.TransportIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTransportIndicator_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TransportIndicator_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TransportIndicator.TransportIndicator_C.HandleAniFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTransportIndicator_C::HandleAniFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TransportIndicator_C", "HandleAniFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TransportIndicator.TransportIndicator_C.ExecuteUbergraph_TransportIndicator
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UTransportIndicator_C::ExecuteUbergraph_TransportIndicator(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TransportIndicator_C", "ExecuteUbergraph_TransportIndicator");

	Params::UTransportIndicator_C_ExecuteUbergraph_TransportIndicator_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


