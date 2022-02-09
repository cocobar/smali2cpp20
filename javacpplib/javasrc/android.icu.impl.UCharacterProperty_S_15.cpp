// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterProperty$15.smali
#include "java2ctype.h"
#include "android.icu.impl.UCharacterProperty_S_15.h"
#include "android.icu.impl.UCharacterProperty_S_IntProperty.h"
#include "android.icu.impl.UCharacterProperty.h"

// .method constructor <init>(Landroid/icu/impl/UCharacterProperty;Landroid/icu/impl/UCharacterProperty;I)V
android::icu::impl::UCharacterProperty_S_15::UCharacterProperty_S_15(std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0,std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0_1,int _S_anonymous0)
{
	
	//    .param p1, "this$0"    # Landroid/icu/impl/UCharacterProperty;
	//    .param p2, "this$0_1"    # Landroid/icu/impl/UCharacterProperty;
	//    .param p3, "$anonymous0"    # I
	this->this_S_0 = this_S_0_1;
	android::icu::impl::UCharacterProperty_S_IntProperty::(this_S_0, _S_anonymous0);
	return;

}
// .method getMaxValue(I)I
int android::icu::impl::UCharacterProperty_S_15::getMaxValue(int which)
{
	
	//    .param p1, "which"    # I
	return 0x1d;

}
// .method getValue(I)I
int android::icu::impl::UCharacterProperty_S_15::getValue(int c)
{
	
	//    .param p1, "c"    # I
	return this->this_S_0->getType(c);

}


