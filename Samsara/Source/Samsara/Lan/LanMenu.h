// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LanMenu.generated.h"

class UEditableTextBox;
class UButton;
/**
 * 
 */
UCLASS()
class SAMSARA_API ULanMenu : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeOnInitialized();

private:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UEditableTextBox> TextBox_IpAddress;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> Button_Host;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> Button_Join;

	UPROPERTY(EditDefaultsOnly)
	TSoftObjectPtr<UWorld> HostingLevel;

	UFUNCTION()
	void HostButtonClicked();

	UFUNCTION()
	void JoinButtonClicked();

	
};
