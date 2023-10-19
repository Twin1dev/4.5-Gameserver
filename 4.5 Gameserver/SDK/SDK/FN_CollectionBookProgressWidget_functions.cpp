#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CollectionBookProgressWidget.CollectionBookProgressWidget_C
// (None)

class UClass* UCollectionBookProgressWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CollectionBookProgressWidget_C");

	return Clss;
}


// CollectionBookProgressWidget_C CollectionBookProgressWidget.Default__CollectionBookProgressWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCollectionBookProgressWidget_C* UCollectionBookProgressWidget_C::GetDefaultObj()
{
	static class UCollectionBookProgressWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCollectionBookProgressWidget_C*>(UCollectionBookProgressWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CollectionBookProgressWidget.CollectionBookProgressWidget_C.OnCollectionBookLevelProgressionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              NewCompletionPct                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookProgressWidget_C::OnCollectionBookLevelProgressionChanged(float NewCompletionPct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBookProgressWidget_C", "OnCollectionBookLevelProgressionChanged");

	Params::UCollectionBookProgressWidget_C_OnCollectionBookLevelProgressionChanged_Params Parms{};

	Parms.NewCompletionPct = NewCompletionPct;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookProgressWidget.CollectionBookProgressWidget_C.OnCollectionBookPreviewXPChange
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              PreviewCompletionPct                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookProgressWidget_C::OnCollectionBookPreviewXPChange(float PreviewCompletionPct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBookProgressWidget_C", "OnCollectionBookPreviewXPChange");

	Params::UCollectionBookProgressWidget_C_OnCollectionBookPreviewXPChange_Params Parms{};

	Parms.PreviewCompletionPct = PreviewCompletionPct;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookProgressWidget.CollectionBookProgressWidget_C.ExecuteUbergraph_CollectionBookProgressWidget
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_PreviewCompletionPct                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_NewCompletionPct                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookProgressWidget_C::ExecuteUbergraph_CollectionBookProgressWidget(int32 EntryPoint, float K2Node_Event_PreviewCompletionPct, float K2Node_Event_NewCompletionPct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBookProgressWidget_C", "ExecuteUbergraph_CollectionBookProgressWidget");

	Params::UCollectionBookProgressWidget_C_ExecuteUbergraph_CollectionBookProgressWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_PreviewCompletionPct = K2Node_Event_PreviewCompletionPct;
	Parms.K2Node_Event_NewCompletionPct = K2Node_Event_NewCompletionPct;

	UObject::ProcessEvent(Func, &Parms);

}

}


