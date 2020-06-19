// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MyProject4_25 : ModuleRules
{
	public MyProject4_25(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
