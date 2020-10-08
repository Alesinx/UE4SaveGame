#pragma once
#include "GameFramework/Actor.h"
#include "ISaveable.h"

#include "SaveableObject.generated.h"

UCLASS()
class ASaveableObject : public AActor, public ISaveable
{
	GENERATED_BODY()

public:

	ASaveableObject(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, Category = "Test")
	float SaveMeFloat = 0;

	//Testing the de/serialization of a pointer (causes a crash if you mark "savegame")
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Test")
	ASaveableObject* OtherObj = NULL;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Test")
	TArray<ASaveableObject*> TestList;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Test")
	TSoftClassPtr<ASaveableObject> SavePtr = NULL;
	//void Serialize(FArchive& Ar) override;

	//ISaveable Interface implementation:
	FSaveDataRecord SaveToRecord() override;
	void LoadFromRecord(FSaveDataRecord Record) override;
	void RelinkPointers(TMap<uint32, AActor*> ObjectDB, TArray<uint32> OIDList) override;
	//End ISaveable Interface
};