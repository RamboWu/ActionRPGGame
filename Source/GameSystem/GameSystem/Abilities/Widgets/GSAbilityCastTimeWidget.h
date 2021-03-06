#pragma once
#include "UserWidget.h"
#include "GSAbilityCastTimeWidget.generated.h"
/*
	Base class to show abilities in UI.
*/
UCLASS(BlueprintType, Blueprintable, DefaultToInstanced)
class GAMESYSTEM_API UGSAbilityCastTimeWidget : public UUserWidget
{
	GENERATED_UCLASS_BODY()
public:
	void InitializeWidget();

	UPROPERTY()
	class UGSAbilitiesComponent* AbilityComponent;

protected:
	UFUNCTION(BlueprintCallable, Category = "Cast Time")
		float const GetCurrentCastTime() const;
	UFUNCTION(BlueprintCallable, Category = "Cast Time")
		float const GetMaxCastTime() const;

protected:
	void OnAbilityCastStarted();
	void OnAbilityCastFinished();
};
