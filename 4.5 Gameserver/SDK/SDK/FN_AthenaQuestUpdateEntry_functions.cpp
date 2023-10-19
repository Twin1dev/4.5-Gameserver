#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaQuestUpdateEntry.AthenaQuestUpdateEntry_C
// (None)

class UClass* UAthenaQuestUpdateEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaQuestUpdateEntry_C");

	return Clss;
}


// AthenaQuestUpdateEntry_C AthenaQuestUpdateEntry.Default__AthenaQuestUpdateEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaQuestUpdateEntry_C* UAthenaQuestUpdateEntry_C::GetDefaultObj()
{
	static class UAthenaQuestUpdateEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaQuestUpdateEntry_C*>(UAthenaQuestUpdateEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaQuestUpdateEntry.AthenaQuestUpdateEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaQuestUpdateEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaQuestUpdateEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaQuestUpdateEntry.AthenaQuestUpdateEntry_C.StartQuestIntro
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaQuestUpdateEntry_C::StartQuestIntro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaQuestUpdateEntry_C", "StartQuestIntro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaQuestUpdateEntry.AthenaQuestUpdateEntry_C.StartQuestOutro
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaQuestUpdateEntry_C::StartQuestOutro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaQuestUpdateEntry_C", "StartQuestOutro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaQuestUpdateEntry.AthenaQuestUpdateEntry_C.ExecuteUbergraph_AthenaQuestUpdateEntry
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)

void UAthenaQuestUpdateEntry_C::ExecuteUbergraph_AthenaQuestUpdateEntry(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaQuestUpdateEntry_C", "ExecuteUbergraph_AthenaQuestUpdateEntry");

	Params::UAthenaQuestUpdateEntry_C_ExecuteUbergraph_AthenaQuestUpdateEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaQuestUpdateEntry.AthenaQuestUpdateEntry_C.AllQuestUpdatesFinished_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestUpdateEntry_C*         UpdateWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaQuestUpdateEntry_C::AllQuestUpdatesFinished_0__DelegateSignature(class UQuestUpdateEntry_C* UpdateWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaQuestUpdateEntry_C", "AllQuestUpdatesFinished_0__DelegateSignature");

	Params::UAthenaQuestUpdateEntry_C_AllQuestUpdatesFinished_0__DelegateSignature_Params Parms{};

	Parms.UpdateWidget = UpdateWidget;

	UObject::ProcessEvent(Func, &Parms);

}

}


