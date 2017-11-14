// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class UE4_HomeTask11_SavesEditorTarget : TargetRules
{
	public UE4_HomeTask11_SavesEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "UE4_HomeTask11_Saves" } );
	}
}
