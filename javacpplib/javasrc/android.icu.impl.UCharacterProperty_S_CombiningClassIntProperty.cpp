// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterProperty$CombiningClassIntProperty.smali
#include "java2ctype.h"
#include "android.icu.impl.UCharacterProperty_S_CombiningClassIntProperty.h"
#include "android.icu.impl.UCharacterProperty_S_IntProperty.h"
#include "android.icu.impl.UCharacterProperty.h"

// .method constructor <init>(Landroid/icu/impl/UCharacterProperty;I)V
android::icu::impl::UCharacterProperty_S_CombiningClassIntProperty::UCharacterProperty_S_CombiningClassIntProperty(std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0,int source)
{
	
	//    .param p1, "this$0"    # Landroid/icu/impl/UCharacterProperty;
	//    .param p2, "source"    # I
	this->this_S_0 = this_S_0;
	android::icu::impl::UCharacterProperty_S_IntProperty::(this_S_0, source);
	return;

}
// .method getMaxValue(I)I
int android::icu::impl::UCharacterProperty_S_CombiningClassIntProperty::getMaxValue(int which)
{
	
	//    .param p1, "which"    # I
	return 0xff;

}


