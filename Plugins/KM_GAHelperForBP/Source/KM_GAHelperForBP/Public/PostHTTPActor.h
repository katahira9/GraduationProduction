// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "PostHTTPActor.generated.h"

UCLASS(Blueprintable,BlueprintType)
class KM_GAHELPERFORBP_API APostHTTPActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APostHTTPActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	FHttpModule* Http;

	/* The actual HTTP call */
	UFUNCTION(BlueprintCallable,Category="Level")
		void MyHttpCall(FString text);
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Level")
		FString returnoutput;
	/*Assign this function to call when the GET request processes sucessfully*/

	void OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
};
