#pragma once

// File is used for hooks that really dont have a category
namespace Hooks {

	enum ENetMode
	{
		NM_Standalone,
		NM_DedicatedServer,
		NM_ListenServer,
		NM_Client,
		NM_MAX,
	};

	void Init()
	{
	}
}
