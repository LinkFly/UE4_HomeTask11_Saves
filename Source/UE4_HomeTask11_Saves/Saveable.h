// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/CoreUObject/Public/UObject/UnrealType.h"
#include "Saveable.generated.h"

/**
 * 
 */

UCLASS(Blueprintable)
class UE4_HOMETASK11_SAVES_API USaveable : public UObject
{
	GENERATED_BODY()

public:
	USaveable();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 test;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UProperty* Property;

	UFUNCTION(BlueprintCallable)
		void TestMyCustomSerialization();

	~USaveable();
};
