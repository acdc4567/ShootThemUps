// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ShootThemUps : ModuleRules
{
	public ShootThemUps(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });

		PublicIncludePaths.AddRange(new string[] { 
			"ShootThemUps/Public/Player" 
		});
	}
}
