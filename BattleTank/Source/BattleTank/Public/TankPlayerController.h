// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include"Tank.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h" // MUST be the last include!

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ATank* GetControlledTank() const;

	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaSeconds) override;

	// Start the moving the barrel of the tank towards where
	// the crosshair intersects with the world.
	void AimTowardsCrosshair();
};
