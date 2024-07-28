// Fill out your copyright notice in the Description page of Project Settings.


#include "AIState_Search.h"

void UAIState_Search::TickState()
{
	if (AICharacter->GetHasReachedDestination()) 
	{
		if (AICharacter->GetIfHungry())
		{

		}
		else if (AICharacter->GetIfCanMate())
		{

		}
	}
}

void UAIState_Search::GoToDesiredActor() 
{

}


ARPSSimulationCharacter* UAIState_Search::FindDesiredActor() 
{
	//Check if any desired objects are in vision
	return nullptr;
}

void UAIState_Search::DoRandomMove()
{
	//Check if any desired objects are in vision
}
