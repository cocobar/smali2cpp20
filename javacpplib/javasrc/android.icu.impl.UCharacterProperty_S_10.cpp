// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterProperty$10.smali
#include "java2ctype.h"
#include "android.icu.impl.UCharacterProperty_S_10.h"
#include "android.icu.impl.UCharacterProperty_S_BinaryProperty.h"
#include "android.icu.impl.UCharacterProperty.h"
#include "android.icu.lang.UCharacter.h"

// .method constructor <init>(Landroid/icu/impl/UCharacterProperty;Landroid/icu/impl/UCharacterProperty;I)V
android::icu::impl::UCharacterProperty_S_10::UCharacterProperty_S_10(std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0,std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0_1,int _S_anonymous0)
{
	
	//    .param p1, "this$0"    # Landroid/icu/impl/UCharacterProperty;
	//    .param p2, "this$0_1"    # Landroid/icu/impl/UCharacterProperty;
	//    .param p3, "$anonymous0"    # I
	this->this_S_0 = this_S_0_1;
	android::icu::impl::UCharacterProperty_S_BinaryProperty::(this_S_0, _S_anonymous0);
	return;

}
// .method contains(I)Z
bool android::icu::impl::UCharacterProperty_S_10::contains(int c)
{
	
	bool cVar0;
	
	//    .param p1, "c"    # I
	cVar0 = 0x1;
	if ( c >  0x66 )
		goto label_cond_12;
	if ( c <  0x41 )
		goto label_cond_12;
	if ( c <= 0x46 )
		goto label_cond_11;
	if ( c <  0x61 )
		goto label_cond_12;
label_cond_11:
	return cVar0;
	// 069    .line 353
label_cond_12:
	if ( c <  0xff21 )
		goto label_cond_26;
	if ( c >  0xff46 )
		goto label_cond_26;
	if ( c <= 0xff26 )
		goto label_cond_11;
	if ( c >= 0xff41 )
		goto label_cond_11;
label_cond_26:
	if ( android::icu::lang::UCharacter::getType(c) != 0x9 )
		goto label_cond_2f;
label_goto_2e:
	return cVar0;
label_cond_2f:
	cVar0 = 0x0;
	goto label_goto_2e;

}


