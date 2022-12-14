// Fill out your copyright notice in the Description page of Project Settings.


#include "PostHTTPActor.h"

// Sets default values
APostHTTPActor::APostHTTPActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Http = &FHttpModule::Get();
}

// Called when the game starts or when spawned
void APostHTTPActor::BeginPlay()
{
	Super::BeginPlay();
	//MyHttpCall();
}

// Called every frame
void APostHTTPActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}
void APostHTTPActor::MyHttpCall(FString text)
{
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
	JsonObject->SetStringField("mode", text);

	// OutputStringÇ…JsonèëÇ´èoÇµ
	FString OutputString;
	
	TSharedRef<TJsonWriter<TCHAR>> JsonWriter = TJsonWriterFactory<>::Create(&OutputString);
	FJsonSerializer::Serialize(JsonObject.ToSharedRef(), JsonWriter);
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = Http->CreateRequest();
	Request->OnProcessRequestComplete().BindUObject(this, &APostHTTPActor::OnResponseReceived);
	
	//This is the url on which to process the request
	Request->SetURL("http://localhost/modeselect.php");
	Request->SetVerb("POST");
	Request->SetHeader(TEXT("User-Agent"), "X-UnrealEngine-Agent");
	Request->SetHeader("Content-Type", TEXT("application/json"));
	Request->SetContentAsString(OutputString);
	Request->ProcessRequest();

}

/*Assigned function on successfull http call*/
void APostHTTPActor::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{

	//Create a pointer to hold the json serialized data
	TSharedPtr<FJsonObject> JsonObject;
	
	//Create a reader pointer to read the json data
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());
	GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Green, Response->GetContentAsString());
	returnoutput = Response->GetContentAsString();
	//Deserialize the json data given Reader and the actual object to deserialize
	if (FJsonSerializer::Deserialize(Reader, JsonObject))
	{
		//Get the value of the json object by field name
	 FString str  = JsonObject->GetStringField("mode");

		//Output it to the engine
		GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Green, str);
	}
}
