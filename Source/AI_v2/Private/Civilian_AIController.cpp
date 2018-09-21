// Fill out your copyright notice in the Description page of Project Settings.

#include "Civilian_AIController.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "ConstructorHelpers.h"

//Set default function
void ACivilian_AIController::BeginPlay()
{
	Super::BeginPlay();
	PrimaryActorTick.bCanEverTick = true;

}
void ACivilian_AIController::Tick(float deltaSeconds)
{
	Super::Tick(deltaSeconds);

}
