// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Civilian_AIController.generated.h"

/**
 * 
 */
class UBeheviorTreeComponent;
UCLASS()
class ACivilian_AIController : public AAIController
{
	GENERATED_BODY()
public :
	//Begin Play
	virtual void BeginPlay();
	//Tick
	virtual void Tick(float deltaSeconds);

public :
	 

	
	
	
};
