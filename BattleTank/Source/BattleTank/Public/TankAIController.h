// Copyright Nicholas Wilkie

#pragma once

#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

private:
	// Called every frame
	virtual void Tick(float DeltaSeconds) override;

	// How close can the AI tank get to the player
	float AcceptanceRadius = 3000;
};
