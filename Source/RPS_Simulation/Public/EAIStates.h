// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

UENUM(BlueprintType)
enum class EAIStates : uint8
{
	IDLE = 0 UMETA(DisplayName = "Idle"),
	SEARCH = 1 UMETA(DisplayName = "FindFoodOrMate"),
	BATTLE = 2 UMETA(DisplayName = "Battle"),
	REPRODUCE = 3 UMETA(DisplayName = "Reproduce")
};

ENUM_RANGE_BY_FIRST_AND_LAST(EAIStates, EAIStates::IDLE, EAIStates::REPRODUCE);
