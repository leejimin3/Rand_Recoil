// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Rand_Recoil : ModuleRules
{
	public Rand_Recoil(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
