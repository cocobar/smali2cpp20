// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterProperty$CaseBinaryProperty.smali
#include "java2ctype.h"
#include "android.icu.impl.UCaseProps.h"
#include "android.icu.impl.UCharacterProperty_S_BinaryProperty.h"
#include "android.icu.impl.UCharacterProperty_S_CaseBinaryProperty.h"
#include "android.icu.impl.UCharacterProperty.h"

// .method constructor <init>(Landroid/icu/impl/UCharacterProperty;I)V
android::icu::impl::UCharacterProperty_S_CaseBinaryProperty::UCharacterProperty_S_CaseBinaryProperty(std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0,int which)
{
	
	//    .param p1, "this$0"    # Landroid/icu/impl/UCharacterProperty;
	//    .param p2, "which"    # I
	this->this_S_0 = this_S_0;
	android::icu::impl::UCharacterProperty_S_BinaryProperty::(this_S_0, 0x4);
	this->which = which;
	return;

}
// .method contains(I)Z
bool android::icu::impl::UCharacterProperty_S_CaseBinaryProperty::contains(int c)
{
	
	//    .param p1, "c"    # I
	return android::icu::impl::UCaseProps::INSTANCE->hasBinaryProperty(c, this->which);

}


