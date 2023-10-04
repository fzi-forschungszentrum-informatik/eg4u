// Copyright (c) 2023 FZI Forschungszentrum Informatik
// SPDX-License-Identifier: Apache-2.0

using UnrealBuildTool;
using System;
using System.IO;

namespace UnrealBuildTool.Rules
{
public class libOpenDRIVE : ModuleRules
{
	public libOpenDRIVE(ReadOnlyTargetRules Target)
		: base(Target)
	{
        Type = ModuleType.External;

        string OpenDrivePath = ModuleDirectory;
		string PlatformSubdir = Target.Platform.ToString();
		string OpenDriveLibs = Path.Combine(OpenDrivePath, "lib", PlatformSubdir) + "/";
		string OpenDriveIncl = Path.Combine(OpenDrivePath, "include");
		PublicIncludePaths.Add(OpenDriveIncl);
		PublicSystemIncludePaths.Add(OpenDriveIncl);
        
        if (Target.Platform == UnrealTargetPlatform.Win64)
			{
                PublicAdditionalLibraries.Add(OpenDriveLibs + "OpenDrive.lib");
				
				//PublicDelayLoadDLLs.Add("OpenDrive.dll");
				//RuntimeDependencies.Add(Path.Combine("$(TargetOutputDir)", "OpenDrive.dll"), Path.Combine(OpenDriveLibs, "OpenDrive.dll"));
			}
		else if (Target.Platform == UnrealTargetPlatform.Linux)
            {
				PublicAdditionalLibraries.Add(OpenDriveLibs + "OpenDrive.so");

				//PublicDelayLoadDLLs.Add("OpenDrive.a");
				//RuntimeDependencies.Add(Path.Combine("$(TargetOutputDir)", "OpenDrive.dll"), Path.Combine(OpenDriveLibs, "OpenDrive.a"));
			}
		}
}

}