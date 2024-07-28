// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EAIStates.h"
#include "CoreMinimal.h"
#include "AIStateBase.h"
#include "RPSSimulationCharacter.h"
#include "AIState_Search.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class RPS_SIMULATION_API UAIState_Search : public UAIStateBase
{
	GENERATED_BODY()
public:
	void TickState() override;

protected:


private:
	UFUNCTION(BlueprintCallable, Category = "Logic", meta = (DisplayName = "CheckIfTargetsInVision")) ARPSSimulationCharacter* FindDesiredActor();
	UFUNCTION(BlueprintCallable, Category = "Logic", meta = (DisplayName = "MoveToTarget")) void GoToDesiredActor();
	UFUNCTION(BlueprintCallable, Category = "Logic", meta = (DisplayName = "DoRandomMove")) void DoRandomMove();
		
};
