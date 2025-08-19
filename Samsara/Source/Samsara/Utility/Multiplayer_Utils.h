// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Multiplayer_Utils.generated.h"
DECLARE_LOG_CATEGORY_EXTERN(LogAuthority, Log, All);

/**
 * 
 */
UCLASS()
class SAMSARA_API UMultiplayer_Utils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category="Multiplayer Utilities")
	static void PrintLocalNetRole(AActor* Actor);
};
