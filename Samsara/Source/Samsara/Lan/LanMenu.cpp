// Fill out your copyright notice in the Description page of Project Settings.


#include "LanMenu.h"
#include "Components/Button.h"
#include "Components/EditableTextBox.h"
#include "Kismet/GameplayStatics.h"

void ULanMenu::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	FInputModeUIOnly InputMode;
	GetOwningPlayer()->SetInputMode(InputMode);
	GetOwningPlayer()->SetShowMouseCursor(true);
	
	Button_Host->OnClicked.AddDynamic(this, &ThisClass::HostButtonClicked);
	Button_Join->OnClicked.AddDynamic(this, &ThisClass::HostButtonClicked);
	
}

void ULanMenu::HostButtonClicked()
{
	FInputModeGameOnly InputMode;
	GetOwningPlayer()->SetInputMode(InputMode);
	GetOwningPlayer()->SetShowMouseCursor(false);

	UGameplayStatics::OpenLevelBySoftObjectPtr(this, HostingLevel, true, TEXT("listen"));
	
	
}

void ULanMenu::JoinButtonClicked()
{
	FInputModeGameOnly InputMode;
	GetOwningPlayer()->SetInputMode(InputMode);
	GetOwningPlayer()->SetShowMouseCursor(false);

	const FString Address = TextBox_IpAddress->GetText().ToString();
	UGameplayStatics::OpenLevel(this, *Address);
	

	
}
