#pragma once

#include "Components/ActorComponent.h"
#include "BDFR_AeroVehicleComponent.generated.h"

/**
 * Base component for all aerial vehicles.
 * Supports aircraft, helicopters, VTOL and multirotor implementations.
 */
UCLASS(ClassGroup=(BDFR), meta=(BlueprintSpawnableComponent))
class BDFRAERODYNAMICS_API UBDFR_AeroVehicleComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UBDFR_AeroVehicleComponent();

    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Flight")
    float Throttle = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Flight")
    float PitchInput = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Flight")
    float RollInput = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Flight")
    float YawInput = 0.0f;
};
