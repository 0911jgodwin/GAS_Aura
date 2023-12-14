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

 FGameplayTag Attributes_Resistances_Fire;
 FGameplayTag Attributes_Resistances_Lightning;
 FGameplayTag Attributes_Resistances_Arcane;
 FGameplayTag Attributes_Resistances_Physical;

 FGameplayTag InputTag_LMB;
 FGameplayTag InputTag_RMB;
 FGameplayTag InputTag_1;
 FGameplayTag InputTag_2;
 FGameplayTag InputTag_3;
 FGameplayTag InputTag_4;

 FGameplayTag Damage;
 FGameplayTag Damage_Fire;
 FGameplayTag Damage_Lightning;
 FGameplayTag Damage_Arcane;
 FGameplayTag Damage_Physical;

 FGameplayTag Attributes_Resistance_Fire;
 FGameplayTag Attributes_Resistance_Arcane;
 FGameplayTag Attributes_Resistance_Lightning;
 FGameplayTag Attributes_Resistance_Physical;

 FGameplayTag Abilities_Attack;

 TMap<FGameplayTag, FGameplayTag> DamageTypesToResistances;
 
 FGameplayTag Effects_HitReact;

 
private:
 static FAuraGameplayTags GameplayTags;
};