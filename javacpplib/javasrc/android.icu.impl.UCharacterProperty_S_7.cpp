// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterProperty$7.smali
#include "java2ctype.h"
#include "android.icu.impl.UCharacterProperty_S_7.h"
#include "android.icu.impl.UCharacterProperty_S_BinaryProperty.h"
#include "android.icu.impl.UCharacterProperty.h"
#include "android.icu.lang.UCharacter.h"

// .method constructor <init>(Landroid/icu/impl/UCharacterProperty;Landroid/icu/impl/UCharacterProperty;I)V
android::icu::impl::UCharacterProperty_S_7::UCharacterProperty_S_7(std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0,std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0_1,int _S_anonymous0)
{
	
	//    .param p1, "this$0"    # Landroid/icu/impl/UCharacterProperty;
	//    .param p2, "this$0_1"    # Landroid/icu/impl/UCharacterProperty;
	//    .param p3, "$anonymous0"    # I
	this->this_S_0 = this_S_0_1;
	android::icu::impl::UCharacterProperty_S_BinaryProperty::(this_S_0, _S_anonymous0);
	return;

}
// .method contains(I)Z
bool android::icu::impl::UCharacterProperty_S_7::contains(int c)
{
	
	int cVar0;
	bool cVar1;
	
	//    .param p1, "c"    # I
	cVar0 = 0x0;
	cVar1 = 0x1;
	if ( c >  0x9f )
		goto label_cond_11;
	if ( c == 0x9 )
		goto label_cond_e;
	if ( c != 0x20 )
		goto label_cond_f;
label_cond_e:
label_goto_e:
	return cVar1;
label_cond_f:
	cVar1 = cVar0;
	goto label_goto_e;
	// 073    .line 325
label_cond_11:
	if ( android::icu::lang::UCharacter::getType(c) != 0xc )
		goto label_cond_1a;
label_goto_19:
	return cVar1;
label_cond_1a:
	cVar1 = cVar0;
	goto label_goto_19;

}


