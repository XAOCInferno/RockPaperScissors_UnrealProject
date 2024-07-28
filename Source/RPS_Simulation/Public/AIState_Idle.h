// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EAIStates.h"
#include "CoreMinimal.h"
#include "AIStateBase.h"
#include "AIState_Idle.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class RPS_SIMULATION_API UAIState_Idle : public UAIStateBase
{
	GENERATED_BODY()
public:
private:
	void TickState() override;
};
