// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterProperty$6.smali
#include "java2ctype.h"
#include "android.icu.impl.UCharacterProperty_S_6.h"
#include "android.icu.impl.UCharacterProperty_S_BinaryProperty.h"
#include "android.icu.impl.UCharacterProperty.h"
#include "android.icu.lang.UCharacter.h"

// .method constructor <init>(Landroid/icu/impl/UCharacterProperty;Landroid/icu/impl/UCharacterProperty;I)V
android::icu::impl::UCharacterProperty_S_6::UCharacterProperty_S_6(std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0,std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0_1,int _S_anonymous0)
{
	
	//    .param p1, "this$0"    # Landroid/icu/impl/UCharacterProperty;
	//    .param p2, "this$0_1"    # Landroid/icu/impl/UCharacterProperty;
	//    .param p3, "$anonymous0"    # I
	this->this_S_0 = this_S_0_1;
	android::icu::impl::UCharacterProperty_S_BinaryProperty::(this_S_0, _S_anonymous0);
	return;

}
// .method contains(I)Z
bool android::icu::impl::UCharacterProperty_S_6::contains(int c)
{
	
	bool cVar0;
	
	//    .param p1, "c"    # I
	if ( android::icu::lang::UCharacter::isUAlphabetic(c) )     
		goto label_cond_b;
	cVar0 = android::icu::lang::UCharacter::isDigit(c);
label_goto_a:
	return cVar0;
label_cond_b:
	cVar0 = 0x1;
	goto label_goto_a;

}


