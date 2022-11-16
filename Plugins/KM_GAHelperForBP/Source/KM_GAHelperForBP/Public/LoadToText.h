#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LoadToText.generated.h"

UCLASS()
class KM_GAHELPERFORBP_API ULoadToText : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:	

	UFUNCTION(BlueprintCallable, Category = "save")
		static bool FileSaveString(FString FileNameB, FString SaveTextB);
	UFUNCTION(BlueprintPure, Category = "save")
		static bool FileLoadString(FString FileNameA, FString& SaveTextA);
};
