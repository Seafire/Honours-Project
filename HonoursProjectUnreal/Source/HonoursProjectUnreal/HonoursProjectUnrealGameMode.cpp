// Fill out your copyright notice in the Description page of Project Settings.

#include "HonoursProjectUnreal.h"
#include "HonoursProjectUnrealGameMode.h"

#include "RTSPlayerController.h"
#include "RTSPlayerSpectatorCameraPawn.h"

AHonoursProjectUnrealGameMode::AHonoursProjectUnrealGameMode()
{
	// C++ classes
	PlayerControllerClass = ARTSPlayerController::StaticClass();
	DefaultPawnClass = ARTSPlayerSpectatorCameraPawn::StaticClass();
}




