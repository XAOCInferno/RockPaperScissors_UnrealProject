// Fill out your copyright notice in the Description page of Project Settings.


#include "AIState_Idle.h"

void UAIState_Idle::TickState()
{
	if (AICharacter->GetIfHungry() || AICharacter->GetIfCanMate())
	{
		AICharacter->AIController->ChangeActiveState(EAIStates::SEARCH);
	}
}
