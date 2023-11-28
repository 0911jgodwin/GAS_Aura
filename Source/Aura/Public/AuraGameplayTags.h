// Copyright JG

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"

/**
 * AuraGameplayTags
 *
 * Singleton containing native Gameplay Tags
 */
struct FAuraGameplayTags
{
public:
 static const FAuraGameplayTags& Get() { return GameplayTags; }
 static void InitialiseNativeGameplayTags();

 FGameplayTag Attributes_Primary_Strength;
 FGameplayTag Attributes_Primary_Intelligence;
 FGameplayTag Attributes_Primary_Resilience;
 FGameplayTag Attributes_Primary_Vigour;

 FGameplayTag Attributes_Derived_Armour;
 FGameplayTag Attributes_Derived_ArmourPenetration;
 FGameplayTag Attributes_Derived_BlockChance;
 FGameplayTag Attributes_Derived_CriticalHitChance;
 FGameplayTag Attributes_Derived_CriticalHitMagnitude;
 FGameplayTag Attributes_Derived_CriticalDefence;
 FGameplayTag Attributes_Derived_HealthRegeneration;
 FGameplayTag Attributes_Derived_ManaRegeneration;
 FGameplayTag Attributes_Derived_MaxHealth;
 FGameplayTag Attributes_Derived_MaxMana;

 FGameplayTag InputTag_LMB;
 FGameplayTag InputTag_RMB;
 FGameplayTag InputTag_1;
 FGameplayTag InputTag_2;
 FGameplayTag InputTag_3;
 FGameplayTag InputTag_4;

 FGameplayTag Damage;
 FGameplayTag Damage_Fire;

 TArray<FGameplayTag> DamageTypes;
 
 FGameplayTag Effects_HitReact;

 
private:
 static FAuraGameplayTags GameplayTags;
};