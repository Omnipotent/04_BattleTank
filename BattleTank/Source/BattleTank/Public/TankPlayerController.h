// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h" // MUST be the last include!

class ATank;
/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaSeconds) override;

protected:
	UFUNCTION(BlueprintCallable, Category = "Setup")
	ATank* GetControlledTank() const;

private:
	// Start the moving the barrel of the tank towards where
	// the crosshair intersects with the world.
	void AimTowardsCrosshair();

	// Return an OUT parameter, true if hit landscape
	bool GetSightRayHitLocation(FVector& HitLocation) const;

	UPROPERTY(EditDefaultsOnly)
	float CrosshairXLocation = 0.5;

	UPROPERTY(EditDefaultsOnly)
	float CrosshairYLocation = 0.45;

	UPROPERTY(EditDefaultsOnly)
	float LineTraceRange = 1000000;

	bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const;
	bool GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation) const;
};
