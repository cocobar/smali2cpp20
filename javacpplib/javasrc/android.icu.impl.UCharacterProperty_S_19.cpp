// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterProperty$19.smali
#include "java2ctype.h"
#include "android.icu.impl.UCharacterProperty_S_19.h"
#include "android.icu.impl.UCharacterProperty_S_IntProperty.h"
#include "android.icu.impl.UCharacterProperty.h"
#include "android.icu.lang.UScript.h"

// .method constructor <init>(Landroid/icu/impl/UCharacterProperty;Landroid/icu/impl/UCharacterProperty;III)V
android::icu::impl::UCharacterProperty_S_19::UCharacterProperty_S_19(std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0,std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0_1,int _S_anonymous0,int _S_anonymous1,int _S_anonymous2)
{
	
	//    .param p1, "this$0"    # Landroid/icu/impl/UCharacterProperty;
	//    .param p2, "this$0_1"    # Landroid/icu/impl/UCharacterProperty;
	//    .param p3, "$anonymous0"    # I
	//    .param p4, "$anonymous1"    # I
	//    .param p5, "$anonymous2"    # I
	this->this_S_0 = this_S_0_1;
	android::icu::impl::UCharacterProperty_S_IntProperty::(this_S_0, _S_anonymous0, _S_anonymous1, _S_anonymous2);
	return;

}
// .method getValue(I)I
int android::icu::impl::UCharacterProperty_S_19::getValue(int c)
{
	
	//    .param p1, "c"    # I
	return android::icu::lang::UScript::getScript(c);

}


