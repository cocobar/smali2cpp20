// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterProperty$13.smali
#include "java2ctype.h"
#include "android.icu.impl.UBiDiProps.h"
#include "android.icu.impl.UCharacterProperty_S_13.h"
#include "android.icu.impl.UCharacterProperty_S_BiDiIntProperty.h"
#include "android.icu.impl.UCharacterProperty.h"

// .method constructor <init>(Landroid/icu/impl/UCharacterProperty;Landroid/icu/impl/UCharacterProperty;)V
android::icu::impl::UCharacterProperty_S_13::UCharacterProperty_S_13(std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0,std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0_1)
{
	
	//    .param p1, "this$0"    # Landroid/icu/impl/UCharacterProperty;
	//    .param p2, "this$0_1"    # Landroid/icu/impl/UCharacterProperty;
	this->this_S_0 = this_S_0_1;
	android::icu::impl::UCharacterProperty_S_BiDiIntProperty::(this_S_0);
	return;

}
// .method getValue(I)I
int android::icu::impl::UCharacterProperty_S_13::getValue(int c)
{
	
	//    .param p1, "c"    # I
	return android::icu::impl::UBiDiProps::INSTANCE->getClass(c);

}


