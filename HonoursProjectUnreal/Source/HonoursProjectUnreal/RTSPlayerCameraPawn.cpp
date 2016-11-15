// Fill out your copyright notice in the Description page of Project Settings.

#include "HonoursProjectUnreal.h"
#include "RTSPlayerCameraPawn.h"


ARTSPlayerCameraPawn::ARTSPlayerCameraPawn(const FObjectInitializer& ObjectInitializer)
{
	// enable Tick function
	PrimaryActorTick.bCanEverTick = true;

	// disable standard WASD movement
	//bAddDefaultMovementBindings = false;

	// not needed Pitch Yaw Roll
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// set defaults
	CameraRadius = 4000.0f;
	CameraRadiusMin = 1000.0f;                // min height
	CameraRadiusMax = 8000.0f;                // max height

	CameraZAngle = 0.0;                        // yaw

	CameraHeightAngle = 30.0f;                // pitch
	CameraHeightAngleMin = 15.0f;
	CameraHeightAngleMax = 60.0f;

	CameraZoomSpeed = 200.0f;                // wheel
	CameraRotationSpeed = 10.0f;            // wheel + ctrl
	CameraMovementSpeed = 3000.0f;            // in all directions

	CameraScrollBoundary = 25.0f;            // screen edge width

	bCanMoveCamera = true;

	// intialize the camera
	CameraComponent = ObjectInitializer.CreateDefaultSubobject<UCameraComponent>(this, TEXT("RTS Camera"));
	CameraComponent->AttachParent = GetRootComponent();
	CameraComponent->bUsePawnControlRotation = false;
	RepositionCamera();
}


//////////////////////////////////////////////////////////////////


void ARTSPlayerCameraPawn::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	check(InputComponent);

	Super::SetupPlayerInputComponent(InputComponent);

	// mouse zoom
	InputComponent->BindAction("ZoomOutByWheel", IE_Pressed, this, &ARTSPlayerCameraPawn::ZoomOutByWheel);
	InputComponent->BindAction("ZoomInByWheel", IE_Pressed, this, &ARTSPlayerCameraPawn::ZoomInByWheel);

	// mouse rotate (+Ctrl or +Alt)
	InputComponent->BindAction("RotateLeftByWheel", IE_Pressed, this, &ARTSPlayerCameraPawn::RotateLeftByWheel);
	InputComponent->BindAction("RotateRightByWheel", IE_Pressed, this, &ARTSPlayerCameraPawn::RotateRightByWheel);
	InputComponent->BindAction("RotateUpByWheel", IE_Pressed, this, &ARTSPlayerCameraPawn::RotateUpByWheel);
	InputComponent->BindAction("RotateDownByWheel", IE_Pressed, this, &ARTSPlayerCameraPawn::RotateDownByWheel);

	// keyboard move (WASD, Home/End)
	InputComponent->BindAxis("MoveForward", this, &ARTSPlayerCameraPawn::MoveCameraForwardInput);
	InputComponent->BindAxis("MoveRight", this, &ARTSPlayerCameraPawn::MoveCameraRightInput);
	InputComponent->BindAxis("MoveUp", this, &ARTSPlayerCameraPawn::MoveCameraUpInput);
	InputComponent->BindAxis("ZoomIn", this, &ARTSPlayerCameraPawn::ZoomCameraInInput);

	// double speed (WASD +Shift)
	InputComponent->BindAxis("FastMove", this, &ARTSPlayerCameraPawn::FastMoveInput);
	// yaw and pitch (WASD +Ctrl)
	InputComponent->BindAxis("Rotate", this, &ARTSPlayerCameraPawn::RotateInput);
}


//////////////////////////////////////////////////////////////////


void ARTSPlayerCameraPawn::ZoomInByWheel()
{
	if (!bCanMoveCamera)    return;

	CameraRadius -= CameraZoomSpeed * FastMoveValue;
	CameraRadius = FMath::Clamp(CameraRadius, CameraRadiusMin, CameraRadiusMax);

	RepositionCamera();
}


void ARTSPlayerCameraPawn::ZoomOutByWheel()
{
	if (!bCanMoveCamera)    return;

	CameraRadius += CameraZoomSpeed * FastMoveValue;
	CameraRadius = FMath::Clamp(CameraRadius, CameraRadiusMin, CameraRadiusMax);

	RepositionCamera();
}


void ARTSPlayerCameraPawn::RotateLeftByWheel()
{
	if (!bCanMoveCamera)    return;

	CameraZAngle -= CameraRotationSpeed * FastMoveValue;

	RepositionCamera();
}


void ARTSPlayerCameraPawn::RotateRightByWheel()
{
	if (!bCanMoveCamera)    return;

	CameraZAngle += CameraRotationSpeed * FastMoveValue;

	RepositionCamera();
}


void ARTSPlayerCameraPawn::RotateUpByWheel()
{
	if (!bCanMoveCamera)    return;

	CameraHeightAngle += CameraRotationSpeed * FastMoveValue;
	CameraHeightAngle = FMath::Clamp(CameraHeightAngle, CameraHeightAngleMin, CameraHeightAngleMax);

	RepositionCamera();
}


void ARTSPlayerCameraPawn::RotateDownByWheel()
{
	if (!bCanMoveCamera)    return;

	CameraHeightAngle -= CameraRotationSpeed * FastMoveValue;
	CameraHeightAngle = FMath::Clamp(CameraHeightAngle, CameraHeightAngleMin, CameraHeightAngleMax);

	RepositionCamera();
}

//---------------

void ARTSPlayerCameraPawn::RepositionCamera()
{
	FVector newLocation(0.0f, 0.0f, 0.0f);
	FRotator newRotation(0.0f, 0.0f, 0.0f);

	float sinCameraZAngle = FMath::Sin(FMath::DegreesToRadians(CameraZAngle));
	float cosCameraZAngle = FMath::Cos(FMath::DegreesToRadians(CameraZAngle));

	float sinCameraHeightAngle = FMath::Sin(FMath::DegreesToRadians(CameraHeightAngle));
	float cosCameraHeightAngle = FMath::Cos(FMath::DegreesToRadians(CameraHeightAngle));

	newLocation.X = cosCameraZAngle * cosCameraHeightAngle * CameraRadius;
	newLocation.Y = sinCameraZAngle * cosCameraHeightAngle * CameraRadius;
	newLocation.Z = sinCameraHeightAngle * CameraRadius;

	newRotation = (FVector(0.0f, 0.0f, 0.0f) - newLocation).Rotation();

	// new camera location and rotation
	CameraComponent->SetRelativeLocation(newLocation);
	CameraComponent->SetRelativeRotation(newRotation);
}


//////////////////////////////////////////////////////////////////


void ARTSPlayerCameraPawn::FastMoveInput(float Direction)
{
	if (!bCanMoveCamera)    return;

	// left or right does not matter, to set double speed in any direction
	FastMoveValue = FMath::Abs(Direction) * 2.0f;

	// used as multiplier so must be 1 if not pressed
	if (FastMoveValue == 0.0f)
	{
		FastMoveValue = 1.0f;
	}
}


void ARTSPlayerCameraPawn::RotateInput(float Direction)
{
	if (!bCanMoveCamera)    return;

	// left or right does not matter
	RotateValue = FMath::Abs(Direction);
}


void ARTSPlayerCameraPawn::MoveCameraForwardInput(float Direction)
{
	if (!bCanMoveCamera)    return;

	MoveForwardValue = Direction;
}


void ARTSPlayerCameraPawn::MoveCameraRightInput(float Direction)
{
	if (!bCanMoveCamera)    return;

	MoveRightValue = Direction;
}


void ARTSPlayerCameraPawn::MoveCameraUpInput(float Direction)
{
	if (!bCanMoveCamera)    return;

	MoveUpValue = Direction;
}


void ARTSPlayerCameraPawn::ZoomCameraInInput(float Direction)
{
	if (!bCanMoveCamera)    return;

	ZoomInValue = Direction;
}


//------------------------------------------------------------


void ARTSPlayerCameraPawn::MoveCameraForward(float Direction)
{
	float MovementValue = Direction * CameraMovementSpeed;
	FVector DeltaMovement = MovementValue * GetIsolatedCameraYaw().Vector();
	FVector NewLocation = GetActorLocation() + DeltaMovement;

	SetActorLocation(NewLocation);
}


void ARTSPlayerCameraPawn::MoveCameraRight(float Direction)
{
	float MovementValue = Direction * CameraMovementSpeed;
	FVector DeltaMovement = MovementValue * (FRotator(0.0f, 90.0f, 0.0f) + GetIsolatedCameraYaw()).Vector();
	FVector NewLocation = GetActorLocation() + DeltaMovement;

	SetActorLocation(NewLocation);
}


FRotator ARTSPlayerCameraPawn::GetIsolatedCameraYaw()
{
	// FRotator containing Yaw only
	return FRotator(0.0f, CameraComponent->ComponentToWorld.Rotator().Yaw, 0.0f);
}

//---------------

void ARTSPlayerCameraPawn::MoveCameraUp(float Direction)
{
	float MovementValue = Direction * CameraMovementSpeed;
	FVector DeltaMovement = FVector(0.0f, 0.0f, MovementValue);
	FVector NewLocation = GetActorLocation() + DeltaMovement;
	NewLocation.Z = FMath::Clamp(NewLocation.Z, CameraRadiusMin, CameraRadiusMax);

	SetActorLocation(NewLocation);
}

//---------------

void ARTSPlayerCameraPawn::ZoomCameraIn(float Direction)
{
	float MovementValue = Direction * CameraMovementSpeed;                // zoom speed is too low here
	CameraRadius += MovementValue;
	CameraRadius = FMath::Clamp(CameraRadius, CameraRadiusMin, CameraRadiusMax);

	RepositionCamera();
}


void ARTSPlayerCameraPawn::TurnCameraUp(float Direction)
{
	CameraHeightAngle -= Direction * CameraRotationSpeed * 10.0f;        // rotation speed is too low
	CameraHeightAngle = FMath::Clamp(CameraHeightAngle, CameraHeightAngleMin, CameraHeightAngleMax);

	RepositionCamera();
}


void ARTSPlayerCameraPawn::TurnCameraRight(float Direction)
{
	CameraZAngle += Direction * CameraRotationSpeed * 10.0f;            // rotation speed is too low here

	RepositionCamera();
}


//////////////////////////////////////////////////////////////////


void ARTSPlayerCameraPawn::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	// mouse position and screen size
	FVector2D MousePosition;
	FVector2D ViewportSize;

	UGameViewportClient* GameViewport = GEngine->GameViewport;

	check(GameViewport);
	GameViewport->GetViewportSize(ViewportSize);

	// if viewport is focused, contains the mouse, and camera movement is allowed
	if (
		GameViewport->IsFocused(GameViewport->Viewport)
		&&
		GameViewport->GetMousePosition(MousePosition)
		&&
		bCanMoveCamera
		)
	{
		// movement direction
		if (MousePosition.X < CameraScrollBoundary)
		{
			MoveRightValue = -1.0f;
		}
		else if (ViewportSize.X - MousePosition.X < CameraScrollBoundary)
		{
			MoveRightValue = 1.0f;
		}

		if (MousePosition.Y < CameraScrollBoundary)
		{
			MoveForwardValue = 1.0f;
		}
		else if (ViewportSize.Y - MousePosition.Y < CameraScrollBoundary)
		{
			MoveForwardValue = -1.0f;
		}

		// rotate
		if (RotateValue != 0.0f)
		{
			TurnCameraUp(MoveForwardValue * FastMoveValue * DeltaSeconds);
			TurnCameraRight(MoveRightValue * FastMoveValue * DeltaSeconds);
		}
		// move horizontal
		else
		{
			MoveCameraForward(MoveForwardValue * FastMoveValue * DeltaSeconds);
			MoveCameraRight(MoveRightValue * FastMoveValue * DeltaSeconds);
		}

		// move vertical
		MoveCameraUp(MoveUpValue * FastMoveValue * DeltaSeconds);

		// zoom
		ZoomCameraIn(ZoomInValue * FastMoveValue * DeltaSeconds);
	}
}
