// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "basic_char_cpp.generated.h"

UCLASS(Blueprintable)
class RPGDEMO_API Abasic_char_cpp : public ACharacter
{
	GENERATED_BODY()
public:

//make health
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Base Character")
		float Health = 100;

//make IsDead
	UPROPERTY
	(BlueprintReadOnly, VisibleAnywhere, Category = "Base Character")
		bool isDead = false;

//calculate death
	virtual void CalculateDead() :

		//actual calc death funct
		UFUNCTION(BlueprintCallable, Category = "Base Character")
		virtual void CalculateHealth(float delta);

//editor centric for prop change
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
		override;
#endif

public:
	// Sets default values for this character's properties
	Abasic_char_cpp();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
