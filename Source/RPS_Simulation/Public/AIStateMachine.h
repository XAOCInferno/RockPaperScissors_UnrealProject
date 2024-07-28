// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EAIStates.h"
#include "CoreMinimal.h"
#include "AIStateMachine.generated.h"

/**
 * 
 */
UCLASS()
class RPS_SIMULATION_API UAIStateMachine : public UObject
{
	GENERATED_BODY()

public:
	UAIStateMachine();

	UFUNCTION(BlueprintCallable, Category = "Logic", meta = (DisplayName = "ChangeActiveState")) void ChangeActiveState(EAIStates NewState);

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Behaviour") EAIStates AICurrentBehaviour;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Behaviour") AActor* AIFollowTarget;
};
