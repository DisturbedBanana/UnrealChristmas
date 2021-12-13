// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ChristmasJam2021 : ModuleRules
{
	public ChristmasJam2021(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
