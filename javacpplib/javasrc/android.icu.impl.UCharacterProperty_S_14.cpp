// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterProperty$14.smali
#include "java2ctype.h"
#include "android.icu.impl.UCharacterProperty_S_14.h"
#include "android.icu.impl.UCharacterProperty_S_CombiningClassIntProperty.h"
#include "android.icu.impl.UCharacterProperty.h"
#include "android.icu.text.Normalizer2.h"

// .method constructor <init>(Landroid/icu/impl/UCharacterProperty;Landroid/icu/impl/UCharacterProperty;I)V
android::icu::impl::UCharacterProperty_S_14::UCharacterProperty_S_14(std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0,std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0_1,int _S_anonymous0)
{
	
	//    .param p1, "this$0"    # Landroid/icu/impl/UCharacterProperty;
	//    .param p2, "this$0_1"    # Landroid/icu/impl/UCharacterProperty;
	//    .param p3, "$anonymous0"    # I
	this->this_S_0 = this_S_0_1;
	android::icu::impl::UCharacterProperty_S_CombiningClassIntProperty::(this_S_0, _S_anonymous0);
	return;

}
// .method getValue(I)I
int android::icu::impl::UCharacterProperty_S_14::getValue(int c)
{
	
	//    .param p1, "c"    # I
	return android::icu::text::Normalizer2::getNFDInstance({const[class].FS-Param})->getCombiningClass(c);

}


