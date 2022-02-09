// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterProperty$NormInertBinaryProperty.smali
#include "java2ctype.h"
#include "android.icu.impl.Norm2AllModes_S_Normalizer2WithImpl.h"
#include "android.icu.impl.Norm2AllModes.h"
#include "android.icu.impl.UCharacterProperty_S_BinaryProperty.h"
#include "android.icu.impl.UCharacterProperty_S_NormInertBinaryProperty.h"
#include "android.icu.impl.UCharacterProperty.h"

// .method constructor <init>(Landroid/icu/impl/UCharacterProperty;II)V
android::icu::impl::UCharacterProperty_S_NormInertBinaryProperty::UCharacterProperty_S_NormInertBinaryProperty(std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0,int source,int which)
{
	
	//    .param p1, "this$0"    # Landroid/icu/impl/UCharacterProperty;
	//    .param p2, "source"    # I
	//    .param p3, "which"    # I
	this->this_S_0 = this_S_0;
	android::icu::impl::UCharacterProperty_S_BinaryProperty::(this_S_0, source);
	this->which = which;
	return;

}
// .method contains(I)Z
bool android::icu::impl::UCharacterProperty_S_NormInertBinaryProperty::contains(int c)
{
	
	//    .param p1, "c"    # I
	return android::icu::impl::Norm2AllModes::getN2WithImpl(( this->which + -0x25))->isInert(c);

}


