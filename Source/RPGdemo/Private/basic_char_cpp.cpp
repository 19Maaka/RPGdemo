// Fill out your copyright notice in the Description page of Project Settings.


#include "basic_char_cpp.h"

// Sets default values
Abasic_char_cpp::Abasic_char_cpp()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Abasic_char_cpp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Abasic_char_cpp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void Abasic_char_cpp::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

