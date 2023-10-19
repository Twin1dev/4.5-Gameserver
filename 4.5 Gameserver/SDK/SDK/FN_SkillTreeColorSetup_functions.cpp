#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SkillTreeColorSetup.SkillTreeColorSetup_C
// (None)

class UClass* USkillTreeColorSetup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkillTreeColorSetup_C");

	return Clss;
}


// SkillTreeColorSetup_C SkillTreeColorSetup.Default__SkillTreeColorSetup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USkillTreeColorSetup_C* USkillTreeColorSetup_C::GetDefaultObj()
{
	static class USkillTreeColorSetup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USkillTreeColorSetup_C*>(USkillTreeColorSetup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SkillTreeColorSetup.SkillTreeColorSetup_C.SkillTreeBGSetup
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSkillTreePageColors        Page_Color                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// enum class ESkillTreePages         Pages                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    Mid                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESkillTreePages         Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESkillTreePages         Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select1_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESkillTreePages         Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select2_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillTreeColorSetup_C::SkillTreeBGSetup(const struct FSkillTreePageColors& Page_Color, enum class ESkillTreePages Pages, class UMaterialInstanceDynamic* Mid, class UObject* __WorldContext, enum class ESkillTreePages Temp_byte_Variable, enum class ESkillTreePages Temp_byte_Variable1, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select1_Default, enum class ESkillTreePages Temp_byte_Variable2, const struct FLinearColor& K2Node_Select2_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkillTreeColorSetup_C", "SkillTreeBGSetup");

	Params::USkillTreeColorSetup_C_SkillTreeBGSetup_Params Parms{};

	Parms.Page_Color = Page_Color;
	Parms.Pages = Pages;
	Parms.Mid = Mid;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


