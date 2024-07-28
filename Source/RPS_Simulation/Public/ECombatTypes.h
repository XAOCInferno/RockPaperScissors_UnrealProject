// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

UENUM(BlueprintType)
enum class ECombatTypes : uint8
{
	ROCK = 0 UMETA(DisplayName = "Rock"),
	PAPER = 1 UMETA(DisplayName = "Paper"),
	SCISSORS = 2 UMETA(DisplayName = "Scissors")
};

ENUM_RANGE_BY_FIRST_AND_LAST(ECombatTypes, ECombatTypes::ROCK, ECombatTypes::SCISSORS);
