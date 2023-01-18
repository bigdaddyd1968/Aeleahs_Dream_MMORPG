// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Aeleahs_Dream_MMORPGTarget : TargetRules
{
	public Aeleahs_Dream_MMORPGTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("Aeleahs_Dream_MMORPG");
	}
}
