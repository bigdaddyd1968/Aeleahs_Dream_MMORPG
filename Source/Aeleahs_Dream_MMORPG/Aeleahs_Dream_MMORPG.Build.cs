// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Aeleahs_Dream_MMORPG : ModuleRules
{
	public Aeleahs_Dream_MMORPG(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
