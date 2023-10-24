// Copyright JG


#include "AbilitySystem/MMC/MMC_MaxHealth.h"
#include "AbilitySystem/AuraAttributeSet.h"
#include "Interaction/CombatInterface.h"

UMMC_MaxHealth::UMMC_MaxHealth()
{
	VigourDef.AttributeToCapture = UAuraAttributeSet::GetVigourAttribute();
	VigourDef.AttributeSource = EGameplayEffectAttributeCaptureSource::Target;
	VigourDef.bSnapshot = false;

	RelevantAttributesToCapture.Add(VigourDef);
}

float UMMC_MaxHealth::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	// Gather tags from source and target
	const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
	const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();

	FAggregatorEvaluateParameters EvaluationParameters;
	EvaluationParameters.SourceTags = SourceTags;
	EvaluationParameters.TargetTags = TargetTags;

	float Vigour = 0.f;
	GetCapturedAttributeMagnitude(VigourDef, Spec, EvaluationParameters, Vigour);
	Vigour = FMath::Max<float>(Vigour, 0.f);
	ICombatInterface* CombatInterface = Cast<ICombatInterface>(Spec.GetContext().GetSourceObject());
	const int32 PlayerLevel = CombatInterface->GetPlayerLevel();

	return 80.f + (2.5f * Vigour) + (10.f * PlayerLevel);
}
