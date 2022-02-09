// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterProperty$NormQuickCheckIntProperty.smali
#include "java2ctype.h"
#include "android.icu.impl.Norm2AllModes_S_Normalizer2WithImpl.h"
#include "android.icu.impl.Norm2AllModes.h"
#include "android.icu.impl.UCharacterProperty_S_IntProperty.h"
#include "android.icu.impl.UCharacterProperty_S_NormQuickCheckIntProperty.h"
#include "android.icu.impl.UCharacterProperty.h"

// .method constructor <init>(Landroid/icu/impl/UCharacterProperty;III)V
android::icu::impl::UCharacterProperty_S_NormQuickCheckIntProperty::UCharacterProperty_S_NormQuickCheckIntProperty(std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0,int source,int which,int max)
{
	
	//    .param p1, "this$0"    # Landroid/icu/impl/UCharacterProperty;
	//    .param p2, "source"    # I
	//    .param p3, "which"    # I
	//    .param p4, "max"    # I
	this->this_S_0 = this_S_0;
	android::icu::impl::UCharacterProperty_S_IntProperty::(this_S_0, source);
	this->which = which;
	this->max = max;
	return;

}
// .method getMaxValue(I)I
int android::icu::impl::UCharacterProperty_S_NormQuickCheckIntProperty::getMaxValue(int which)
{
	
	//    .param p1, "which"    # I
	return this->max;

}
// .method getValue(I)I
int android::icu::impl::UCharacterProperty_S_NormQuickCheckIntProperty::getValue(int c)
{
	
	//    .param p1, "c"    # I
	return android::icu::impl::Norm2AllModes::getN2WithImpl(( this->which + -0x100c))->getQuickCheck(c);

}


