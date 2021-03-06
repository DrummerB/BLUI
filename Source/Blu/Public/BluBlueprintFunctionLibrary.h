#pragma once

#include "BluBlueprintFunctionLibrary.generated.h"

UCLASS(ClassGroup = Blu, Blueprintable)
class BLU_API UBluBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintPure, meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", FriendlyName = "Create BluEye", CompactNodeTitle = "BluEye", Keywords = "new create blu eye blui"), Category = Blu)
		static UBluEye* NewBluEye(UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, meta = (FriendlyName = "Run BLUI Tick", Keywords = "blui blu eye blui tick"), Category = Blu)
		static void RunBluEventLoop();

	UFUNCTION(BlueprintCallable, meta = (FriendlyName = "Parse JSON String", Keywords = "blui blu eye json parse"), Category = Blu)
		static UBluJsonObj* ParseJSON(const FString& JSONString);

};
