// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Aeleahs_Dream_MMORPGEditorTarget : TargetRules
{
	public Aeleahs_Dream_MMORPGEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("Aeleahs_Dream_MMORPG");
	}
}
