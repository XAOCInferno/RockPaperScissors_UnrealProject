// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EAIStates.h"
#include "CoreMinimal.h"
#include "StateBase.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class RPS_SIMULATION_API UStateBase : public UObject
{
	GENERATED_BODY()
public:
	virtual void OnEnterState();
	virtual void TickState();
	virtual void OnExitState();
};
