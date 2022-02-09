// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\Norm2AllModes$1.smali
#include "java2ctype.h"
#include "android.icu.impl.Norm2AllModes_S_1.h"
#include "android.icu.impl.Norm2AllModes.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.nio.ByteBuffer.h"

// .method constructor <init>()V
android::icu::impl::Norm2AllModes_S_1::Norm2AllModes_S_1()
{
	
	// 034    invoke-direct {p0}, Landroid/icu/impl/SoftCache;-><init>()V
	return;

}
// .method protected createInstance(Ljava/lang/String;Ljava/nio/ByteBuffer;)Landroid/icu/impl/Norm2AllModes;
std::shared_ptr<android::icu::impl::Norm2AllModes> android::icu::impl::Norm2AllModes_S_1::createInstance(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::nio::ByteBuffer> bytes)
{
	
	std::shared_ptr<android::icu::impl::Normalizer2Impl> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<android::icu::impl::Norm2AllModes> cVar2;
	std::shared_ptr<android::icu::impl::Normalizer2Impl> cVar3;
	
	//    .param p1, "key"    # Ljava/lang/String;
	//    .param p2, "bytes"    # Ljava/nio/ByteBuffer;
	if ( bytes )     
		goto label_cond_26;
	cVar0 = std::make_shared<android::icu::impl::Normalizer2Impl>();
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "impl":Landroid/icu/impl/Normalizer2Impl;
label_goto_20:
	cVar2 = std::make_shared<android::icu::impl::Norm2AllModes>(impl, 0x0);
	return cVar2;
	// 089    .line 355
	// 090    .end local v0    # "impl":Landroid/icu/impl/Normalizer2Impl;
label_cond_26:
	cVar3 = std::make_shared<android::icu::impl::Normalizer2Impl>();
	//    .restart local v0    # "impl":Landroid/icu/impl/Normalizer2Impl;
	goto label_goto_20;

}


