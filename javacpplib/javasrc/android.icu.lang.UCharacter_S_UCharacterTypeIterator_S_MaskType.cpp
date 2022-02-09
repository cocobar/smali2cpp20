// CPP L:\smali2cpp20\x64\Release\out\android\icu\lang\UCharacter$UCharacterTypeIterator$MaskType.smali
#include "java2ctype.h"
#include "android.icu.lang.UCharacter_S_UCharacterTypeIterator_S_MaskType.h"

// .method private constructor <init>()V
android::icu::lang::UCharacter_S_UCharacterTypeIterator_S_MaskType::UCharacter_S_UCharacterTypeIterator_S_MaskType()
{
	
	// 026    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/lang/UCharacter$UCharacterTypeIterator$MaskType;)V
android::icu::lang::UCharacter_S_UCharacterTypeIterator_S_MaskType::UCharacter_S_UCharacterTypeIterator_S_MaskType(std::shared_ptr<android::icu::lang::UCharacter_S_UCharacterTypeIterator_S_MaskType> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/lang/UCharacter$UCharacterTypeIterator$MaskType;
	// 036    invoke-direct {p0}, Landroid/icu/lang/UCharacter$UCharacterTypeIterator$MaskType;-><init>()V
	return;

}
// .method public map(I)I
int android::icu::lang::UCharacter_S_UCharacterTypeIterator_S_MaskType::map(int value)
{
	
	//    .param p1, "value"    # I
	return ( value & 0x1f);

}


