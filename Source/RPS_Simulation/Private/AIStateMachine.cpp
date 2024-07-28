// Fill out your copyright notice in the Description page of Project Settings.


#include "AIStateMachine.h"
#include "AIState_Battle.h"
#include "AIState_Feed.h"
#include "AIState_Search.h"
#include "AIState_Reproduce.h"
#include "AIState_Follow.h"
#include "AIState_Idle.h"

UAIStateMachine::UAIStateMachine()
{

	ChangeActiveState(EAIStates::IDLE);
	AIFollowTarget = nullptr;

}

void UAIStateMachine::ChangeActiveState(EAIStates NewState)
{
	AICurrentBehaviour = NewState;
	switch (NewState) 
	{
	case EAIStates::IDLE:
		break; 
	case EAIStates::BATTLE:
		break;
	case EAIStates::REPRODUCE:
		break;
	case EAIStates::SEARCH:
		break;
	default:
		GEngine->AddOnScreenDebugMessage(3, 4, FColor::Red, "Passed state is not valid!");
		return;
	}
}

