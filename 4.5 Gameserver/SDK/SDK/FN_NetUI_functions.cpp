#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class NetUI.NetDebugWidget
// (None)

class UClass* UNetDebugWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetDebugWidget");

	return Clss;
}


// NetDebugWidget NetUI.Default__NetDebugWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UNetDebugWidget* UNetDebugWidget::GetDefaultObj()
{
	static class UNetDebugWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetDebugWidget*>(UNetDebugWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function NetUI.NetDebugWidget.StopTimer
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UNetDebugWidget::StopTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NetDebugWidget", "StopTimer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NetUI.NetDebugWidget.StartTimer
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UNetDebugWidget::StartTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NetDebugWidget", "StartTimer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


