// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterProperty$BiDiIntProperty.smali
#include "java2ctype.h"
#include "android.icu.impl.UBiDiProps.h"
#include "android.icu.impl.UCharacterProperty_S_BiDiIntProperty.h"
#include "android.icu.impl.UCharacterProperty_S_IntProperty.h"
#include "android.icu.impl.UCharacterProperty.h"

// .method constructor <init>(Landroid/icu/impl/UCharacterProperty;)V
android::icu::impl::UCharacterProperty_S_BiDiIntProperty::UCharacterProperty_S_BiDiIntProperty(std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0)
{
	
	//    .param p1, "this$0"    # Landroid/icu/impl/UCharacterProperty;
	this->this_S_0 = this_S_0;
	android::icu::impl::UCharacterProperty_S_IntProperty::(this_S_0, 0x5);
	return;

}
// .method getMaxValue(I)I
int android::icu::impl::UCharacterProperty_S_BiDiIntProperty::getMaxValue(int which)
{
	
	//    .param p1, "which"    # I
	return android::icu::impl::UBiDiProps::INSTANCE->getMaxValue(which);

}


