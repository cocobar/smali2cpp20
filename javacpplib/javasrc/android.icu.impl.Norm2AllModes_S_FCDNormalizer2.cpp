// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\Norm2AllModes$FCDNormalizer2.smali
#include "java2ctype.h"
#include "android.icu.impl.Norm2AllModes_S_FCDNormalizer2.h"
#include "android.icu.impl.Norm2AllModes_S_Normalizer2WithImpl.h"
#include "android.icu.impl.Normalizer2Impl_S_ReorderingBuffer.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "java.lang.CharSequence.h"

// .method public constructor <init>(Landroid/icu/impl/Normalizer2Impl;)V
android::icu::impl::Norm2AllModes_S_FCDNormalizer2::Norm2AllModes_S_FCDNormalizer2(std::shared_ptr<android::icu::impl::Normalizer2Impl> ni)
{
	
	//    .param p1, "ni"    # Landroid/icu/impl/Normalizer2Impl;
	android::icu::impl::Norm2AllModes_S_Normalizer2WithImpl::(ni);
	return;

}
// .method public getQuickCheck(I)I
int android::icu::impl::Norm2AllModes_S_FCDNormalizer2::getQuickCheck(int c)
{
	
	int cVar0;
	
	//    .param p1, "c"    # I
	if ( !(this->impl->isDecompYes(this->impl->getNorm16(c))) )  
		goto label_cond_10;
	cVar0 = 0x1;
label_goto_f:
	return cVar0;
label_cond_10:
	cVar0 = 0x0;
	goto label_goto_f;

}
// .method public hasBoundaryAfter(I)Z
bool android::icu::impl::Norm2AllModes_S_FCDNormalizer2::hasBoundaryAfter(int c)
{
	
	//    .param p1, "c"    # I
	return this->impl->hasFCDBoundaryAfter(c);

}
// .method public hasBoundaryBefore(I)Z
bool android::icu::impl::Norm2AllModes_S_FCDNormalizer2::hasBoundaryBefore(int c)
{
	
	//    .param p1, "c"    # I
	return this->impl->hasFCDBoundaryBefore(c);

}
// .method public isInert(I)Z
bool android::icu::impl::Norm2AllModes_S_FCDNormalizer2::isInert(int c)
{
	
	//    .param p1, "c"    # I
	return this->impl->isFCDInert(c);

}
// .method protected normalize(Ljava/lang/CharSequence;Landroid/icu/impl/Normalizer2Impl$ReorderingBuffer;)V
void android::icu::impl::Norm2AllModes_S_FCDNormalizer2::normalize(std::shared_ptr<java::lang::CharSequence> src,std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> buffer)
{
	
	//    .param p1, "src"    # Ljava/lang/CharSequence;
	//    .param p2, "buffer"    # Landroid/icu/impl/Normalizer2Impl$ReorderingBuffer;
	this->impl->makeFCD(src, 0x0, src->length(), buffer);
	return;

}
// .method protected normalizeAndAppend(Ljava/lang/CharSequence;ZLandroid/icu/impl/Normalizer2Impl$ReorderingBuffer;)V
void android::icu::impl::Norm2AllModes_S_FCDNormalizer2::normalizeAndAppend(std::shared_ptr<java::lang::CharSequence> src,bool doNormalize,std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> buffer)
{
	
	//    .param p1, "src"    # Ljava/lang/CharSequence;
	//    .param p2, "doNormalize"    # Z
	//    .param p3, "buffer"    # Landroid/icu/impl/Normalizer2Impl$ReorderingBuffer;
	this->impl->makeFCDAndAppend(src, doNormalize, buffer);
	return;

}
// .method public spanQuickCheckYes(Ljava/lang/CharSequence;)I
int android::icu::impl::Norm2AllModes_S_FCDNormalizer2::spanQuickCheckYes(std::shared_ptr<java::lang::CharSequence> s)
{
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	return this->impl->makeFCD(s, 0x0, s->length(), 0x0);

}


