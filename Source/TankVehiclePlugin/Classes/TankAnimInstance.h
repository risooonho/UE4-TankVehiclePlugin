//Copyright 2014-2015 Leon Rosengarten and Open House Studios, All Rights Reserved.

#pragma once
#include "Vehicles/VehicleAnimInstance.h"
#include "TankAnimInstance.generated.h"

UCLASS(transient)
class UTankAnimInstance : public UVehicleAnimInstance
{

	GENERATED_UCLASS_BODY()

		/** Makes a montage jump to the end of a named section. */
		UFUNCTION(BlueprintCallable, Category = "Animation")
	class ATankVehicle * GetTank();

};