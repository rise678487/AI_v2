// Fill out your copyright notice in the Description page of Project Settings.

#include "Civilian.h"
#include "ConstructorHelpers.h"
#include "Private/Civilian_AIController.h"
#include "Components/SkeletalMeshComponent.h"



// Sets default values
ACivilian::ACivilian()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> skeleMesh(TEXT("SkeletalMesh'/Game/AdvancedLocomotionV2/Characters/Mannequin/SK_Mannequin.SK_Mannequin'"));
	if (skeleMesh.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(skeleMesh.Object);
	}
	else
	{
		if (skeletalMesh)
		{
			GetMesh()->SetSkeletalMesh(skeletalMesh);
		}
	}
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
	AIControllerClass = ACivilian_AIController::StaticClass();
	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	static ConstructorHelpers::FObjectFinder<UAnimBlueprint> animBP(TEXT("AnimBlueprint'/Game/AdvancedLocomotionV2/Blueprints/ALS_AnimBP.ALS_AnimBP'"));
	if (animBP.Succeeded())
	{
		GetMesh()->SetAnimInstanceClass(animBP.Object->GeneratedClass);
	}
	
	

}

// Called when the game starts or when spawned
void ACivilian::BeginPlay()
{
	Super::BeginPlay();
	GetMesh()->SetRelativeLocation(FVector(0.0f, 0.0f, -88.0f));
	
}

// Called every frame
void ACivilian::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACivilian::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

