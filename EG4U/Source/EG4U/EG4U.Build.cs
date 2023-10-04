// Copyright (c) 2023 FZI Forschungszentrum Informatik
// SPDX-License-Identifier: Apache-2.0

using UnrealBuildTool;

public class EG4U : ModuleRules
{
	public EG4U(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"AIModule",
				"ProceduralMeshComponent",
				"libOpenDRIVE"
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"libOpenDRIVE",
				"RawMesh",
				"ProceduralMeshComponent"
			}
			);
	
	}
}
