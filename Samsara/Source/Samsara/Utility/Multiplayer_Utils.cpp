// Fill out your copyright notice in the Description page of Project Settings.


#include "Multiplayer_Utils.h"

DEFINE_LOG_CATEGORY(LogAuthority)

void UMultiplayer_Utils::PrintLocalNetRole(AActor* Actor)
{
	if (Actor->HasAuthority())
	{
		UE_LOG(LogAuthority, Warning , TEXT("Actor [%s] Has Authority"), *Actor->GetName());
	}

	else
	{
		UE_LOG(LogAuthority, Warning, TEXT("Actor [%s] Does Not Have Authority"), *Actor->GetName());
	}

	switch (Actor->GetLocalRole())
	{
	case ROLE_None:
		UE_LOG(LogAuthority, Warning, TEXT("Actor [%s] Role: ROLE_None - Invalid Role"), *Actor->GetName());
		break;
        
	case ROLE_SimulatedProxy:
		UE_LOG(LogAuthority, Warning, TEXT("Actor [%s] Role: ROLE_SimulatedProxy - This actor is replicated from server and updated via simulation"), *Actor->GetName());
		break;
        
	case ROLE_AutonomousProxy:
		UE_LOG(LogAuthority, Warning, TEXT("Actor [%s] Role: ROLE_AutonomousProxy - This actor is controlled locally but the server maintains authority"), *Actor->GetName());
		break;
        
	case ROLE_Authority:
		UE_LOG(LogAuthority, Warning, TEXT("Actor [%s] Role: ROLE_Authority - This actor has authority (server)"), *Actor->GetName());
		break;
        
	default:
		UE_LOG(LogAuthority, Warning, TEXT("Actor [%s] Role: Unknown Role"), *Actor->GetName());
		break;
	}

}
