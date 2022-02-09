// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterProperty$12.smali
#include "java2ctype.h"
#include "android.icu.impl.Norm2AllModes.h"
#include "android.icu.impl.Normalizer2Impl_S_ReorderingBuffer.h"
#include "android.icu.impl.Normalizer2Impl_S_UTF16Plus.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "android.icu.impl.UCharacterProperty_S_12.h"
#include "android.icu.impl.UCharacterProperty_S_BinaryProperty.h"
#include "android.icu.impl.UCharacterProperty.h"
#include "android.icu.text.UTF16.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method constructor <init>(Landroid/icu/impl/UCharacterProperty;Landroid/icu/impl/UCharacterProperty;I)V
android::icu::impl::UCharacterProperty_S_12::UCharacterProperty_S_12(std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0,std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0_1,int _S_anonymous0)
{
	
	//    .param p1, "this$0"    # Landroid/icu/impl/UCharacterProperty;
	//    .param p2, "this$0_1"    # Landroid/icu/impl/UCharacterProperty;
	//    .param p3, "$anonymous0"    # I
	this->this_S_0 = this_S_0_1;
	android::icu::impl::UCharacterProperty_S_BinaryProperty::(this_S_0, _S_anonymous0);
	return;

}
// .method contains(I)Z
bool android::icu::impl::UCharacterProperty_S_12::contains(int c)
{
	
	int cVar0;
	std::shared_ptr<android::icu::impl::Normalizer2Impl> kcf;
	std::shared_ptr<java::lang::String> src;
	std::shared_ptr<java::lang::StringBuilder> dest;
	std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> buffer;
	
	//    .param p1, "c"    # I
	cVar0 = 0x0;
	kcf = android::icu::impl::Norm2AllModes::getNFKC_CFInstance({const[class].FS-Param})->impl;
	//    .local v0, "kcf":Landroid/icu/impl/Normalizer2Impl;
	src = android::icu::text::UTF16::valueOf(c);
	//    .local v1, "src":Ljava/lang/String;
	dest = std::make_shared<java::lang::StringBuilder>();
	//    .local v7, "dest":Ljava/lang/StringBuilder;
	buffer = std::make_shared<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer>(kcf, dest, 0x5);
	//    .local v6, "buffer":Landroid/icu/impl/Normalizer2Impl$ReorderingBuffer;
	kcf->compose(src, cVar0, src->length(), cVar0, 0x1, buffer);
	return ( android::icu::impl::Normalizer2Impl_S_UTF16Plus::equal(dest, src) ^ 0x1);

}


