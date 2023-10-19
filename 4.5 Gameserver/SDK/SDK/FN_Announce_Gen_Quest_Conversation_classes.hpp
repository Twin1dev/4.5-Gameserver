#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3F0 - 0x3E8)
// BlueprintGeneratedClass Announce_Gen_Quest_Conversation.Announce_Gen_Quest_Conversation_C
class AAnnounce_Gen_Quest_Conversation_C : public AFortClientAnnouncement_Conversation
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E8(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AAnnounce_Gen_Quest_Conversation_C* GetDefaultObj();

	void UserConstructionScript();
	void OnConversationFinished(const struct FFortConversationSentence& FinishingSentence, int32 FinishingSentenceSentenceIndex);
	void ExecuteUbergraph_Announce_Gen_Quest_Conversation(int32 EntryPoint, const struct FFortConversationSentence& K2Node_Event_FinishingSentence, int32 K2Node_Event_FinishingSentenceSentenceIndex);
};

}


