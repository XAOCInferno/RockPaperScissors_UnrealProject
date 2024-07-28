// Fill out your copyright notice in the Description page of Project Settings.


#include "StateBase.h"

void UStateBase::OnEnterState()
{
	GEngine->AddOnScreenDebugMessage(0, 4, FColor::Yellow, TEXT("'OnEnterState', no defined behaviour."));
}

void UStateBase::TickState()
{
	GEngine->AddOnScreenDebugMessage(0, 4, FColor::Yellow, TEXT("'TickState', no defined behaviour."));
}

void UStateBase::OnExitState()
{
	GEngine->AddOnScreenDebugMessage(0, 4, FColor::Yellow, TEXT("'OnExitState', no defined behaviour."));
}