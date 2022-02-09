// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterProperty$20.smali
#include "java2ctype.h"
#include "android.icu.impl.UCharacterProperty_S_20.h"
#include "android.icu.impl.UCharacterProperty_S_IntProperty.h"
#include "android.icu.impl.UCharacterProperty.h"

// .method constructor <init>(Landroid/icu/impl/UCharacterProperty;Landroid/icu/impl/UCharacterProperty;I)V
android::icu::impl::UCharacterProperty_S_20::UCharacterProperty_S_20(std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0,std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0_1,int _S_anonymous0)
{
	
	//    .param p1, "this$0"    # Landroid/icu/impl/UCharacterProperty;
	//    .param p2, "this$0_1"    # Landroid/icu/impl/UCharacterProperty;
	//    .param p3, "$anonymous0"    # I
	this->this_S_0 = this_S_0_1;
	android::icu::impl::UCharacterProperty_S_IntProperty::(this_S_0, _S_anonymous0);
	return;

}
// .method getMaxValue(I)I
int android::icu::impl::UCharacterProperty_S_20::getMaxValue(int which)
{
	
	//    .param p1, "which"    # I
	return 0x5;

}
// .method getValue(I)I
int android::icu::impl::UCharacterProperty_S_20::getValue(int c)
{
	
	int gcb;
	
	//    .param p1, "c"    # I
	gcb = _ushri(( this->this_S_0->getAdditional(c, 0x2) & 0x3e0),0x5);
	//    .local v0, "gcb":I
	if ( gcb >= android::icu::impl::UCharacterProperty::-get0({const[class].FS-Param})->size() )
		goto label_cond_19;
	return android::icu::impl::UCharacterProperty::-get0({const[class].FS-Param})[gcb];
	// 089    .line 572
label_cond_19:
	return 0x0;

}


