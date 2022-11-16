// Fill out your copyright notice in the Description page of Project Settings.


#include "LoadToText.h"


bool ULoadToText::FileSaveString(FString FileNameB, FString SaveTextB)
{
	return FFileHelper::SaveStringToFile(SaveTextB, *(FileNameB));
}

bool ULoadToText::FileLoadString(FString FileNameA, FString& SaveTextA)
{
	return FFileHelper::LoadFileToString(SaveTextA,*(FileNameA));
}
