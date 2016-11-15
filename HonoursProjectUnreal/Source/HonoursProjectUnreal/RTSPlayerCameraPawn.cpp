// Fill out your copyright notice in the Description page of Project Settings.

#include "HonoursProjectUnreal.h"
#include "RTSPlayerCameraPawn.h"


// Sets default values
ARTSPlayerCameraPawn::ARTSPlayerCameraPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARTSPlayerCameraPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARTSPlayerCameraPawn::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void ARTSPlayerCameraPawn::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

