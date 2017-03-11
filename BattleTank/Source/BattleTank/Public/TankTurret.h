// Copyright Nicholas Wilkie

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankTurret.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UTankTurret : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
	// -1 is max left movement, and +1 is max right movement
	void Rotate(float RelativeSpeed);

private:
	UPROPERTY(EditDefaultsOnly, Category = "Setup") // If adding new tanks, make this EditAnywhere and allow different turret rotation speeds in editor.
	float MaxDegreesPerSecond = 20; // Sensible default
	
	
};
