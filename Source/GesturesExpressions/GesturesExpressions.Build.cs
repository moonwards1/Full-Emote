// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GesturesExpressions : ModuleRules
{
	public GesturesExpressions(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
