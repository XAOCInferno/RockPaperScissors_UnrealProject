// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "RPSSimulationCharacter.h"
#include "CoreMinimal.h"
#include "StateBase.h"
#include "AIStateBase.generated.h"

/**
 * 
 */
UCLASS()
class RPS_SIMULATION_API UAIStateBase : public UStateBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character") ARPSSimulationCharacter* AICharacter;
};
