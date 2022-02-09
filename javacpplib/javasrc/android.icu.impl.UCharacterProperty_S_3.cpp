// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterProperty$3.smali
#include "java2ctype.h"
#include "android.icu.impl.Norm2AllModes.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "android.icu.impl.UCharacterProperty_S_3.h"
#include "android.icu.impl.UCharacterProperty_S_BinaryProperty.h"
#include "android.icu.impl.UCharacterProperty.h"

// .method constructor <init>(Landroid/icu/impl/UCharacterProperty;Landroid/icu/impl/UCharacterProperty;I)V
android::icu::impl::UCharacterProperty_S_3::UCharacterProperty_S_3(std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0,std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0_1,int _S_anonymous0)
{
	
	//    .param p1, "this$0"    # Landroid/icu/impl/UCharacterProperty;
	//    .param p2, "this$0_1"    # Landroid/icu/impl/UCharacterProperty;
	//    .param p3, "$anonymous0"    # I
	this->this_S_0 = this_S_0_1;
	android::icu::impl::UCharacterProperty_S_BinaryProperty::(this_S_0, _S_anonymous0);
	return;

}
// .method contains(I)Z
bool android::icu::impl::UCharacterProperty_S_3::contains(int c)
{
	
	std::shared_ptr<android::icu::impl::Normalizer2Impl> impl;
	
	//    .param p1, "c"    # I
	impl = android::icu::impl::Norm2AllModes::getNFCInstance({const[class].FS-Param})->impl;
	//    .local v0, "impl":Landroid/icu/impl/Normalizer2Impl;
	return impl->isCompNo(impl->getNorm16(c));

}


