// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankTurret.h"

void UTankTurret::Rotation(float RelativeSpeed)
{
	// Move the barrel the right amount this frame

	// given a max elevation speed, and the frame time
	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1, +1);
	auto RotationChange = RelativeSpeed * MaxDegreesPerSecond * GetWorld()->DeltaTimeSeconds;
	auto RawNewRotation = RelativeRotation.Pitch + RotationChange;
	auto Rotation = RawNewRotation;

	SetRelativeRotation(FRotator(Rotation, 0, 0));

}




