// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\Norm2AllModes$ComposeNormalizer2.smali
#include "java2ctype.h"
#include "android.icu.impl.Norm2AllModes_S_ComposeNormalizer2.h"
#include "android.icu.impl.Norm2AllModes_S_Normalizer2WithImpl.h"
#include "android.icu.impl.Normalizer2Impl_S_ReorderingBuffer.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "android.icu.text.Normalizer_S_QuickCheckResult.h"
#include "android.icu.text.Normalizer.h"
#include "java.lang.CharSequence.h"
#include "java.lang.StringBuilder.h"

// .method public constructor <init>(Landroid/icu/impl/Normalizer2Impl;Z)V
android::icu::impl::Norm2AllModes_S_ComposeNormalizer2::Norm2AllModes_S_ComposeNormalizer2(std::shared_ptr<android::icu::impl::Normalizer2Impl> ni,bool fcc)
{
	
	//    .param p1, "ni"    # Landroid/icu/impl/Normalizer2Impl;
	//    .param p2, "fcc"    # Z
	android::icu::impl::Norm2AllModes_S_Normalizer2WithImpl::(ni);
	this->onlyContiguous = fcc;
	return;

}
// .method public getQuickCheck(I)I
int android::icu::impl::Norm2AllModes_S_ComposeNormalizer2::getQuickCheck(int c)
{
	
	//    .param p1, "c"    # I
	return this->impl->getCompQuickCheck(this->impl->getNorm16(c));

}
// .method public hasBoundaryAfter(I)Z
bool android::icu::impl::Norm2AllModes_S_ComposeNormalizer2::hasBoundaryAfter(int c)
{
	
	//    .param p1, "c"    # I
	return this->impl->hasCompBoundaryAfter(c, this->onlyContiguous, 0x0);

}
// .method public hasBoundaryBefore(I)Z
bool android::icu::impl::Norm2AllModes_S_ComposeNormalizer2::hasBoundaryBefore(int c)
{
	
	//    .param p1, "c"    # I
	return this->impl->hasCompBoundaryBefore(c);

}
// .method public isInert(I)Z
bool android::icu::impl::Norm2AllModes_S_ComposeNormalizer2::isInert(int c)
{
	
	//    .param p1, "c"    # I
	return this->impl->hasCompBoundaryAfter(c, this->onlyContiguous, 0x1);

}
// .method public isNormalized(Ljava/lang/CharSequence;)Z
bool android::icu::impl::Norm2AllModes_S_ComposeNormalizer2::isNormalized(std::shared_ptr<java::lang::CharSequence> s)
{
	
	int cVar0;
	std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	cVar0 = 0x0;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer>(this->impl, cVar2, 0x5);
	return this->impl->compose(s, cVar0, s->length(), this->onlyContiguous, cVar0, cVar1);

}
// .method protected normalize(Ljava/lang/CharSequence;Landroid/icu/impl/Normalizer2Impl$ReorderingBuffer;)V
void android::icu::impl::Norm2AllModes_S_ComposeNormalizer2::normalize(std::shared_ptr<java::lang::CharSequence> src,std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> buffer)
{
	
	//    .param p1, "src"    # Ljava/lang/CharSequence;
	//    .param p2, "buffer"    # Landroid/icu/impl/Normalizer2Impl$ReorderingBuffer;
	this->impl->compose(src, 0x0, src->length(), this->onlyContiguous, 0x1, buffer);
	return;

}
// .method protected normalizeAndAppend(Ljava/lang/CharSequence;ZLandroid/icu/impl/Normalizer2Impl$ReorderingBuffer;)V
void android::icu::impl::Norm2AllModes_S_ComposeNormalizer2::normalizeAndAppend(std::shared_ptr<java::lang::CharSequence> src,bool doNormalize,std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> buffer)
{
	
	//    .param p1, "src"    # Ljava/lang/CharSequence;
	//    .param p2, "doNormalize"    # Z
	//    .param p3, "buffer"    # Landroid/icu/impl/Normalizer2Impl$ReorderingBuffer;
	this->impl->composeAndAppend(src, doNormalize, this->onlyContiguous, buffer);
	return;

}
// .method public quickCheck(Ljava/lang/CharSequence;)Landroid/icu/text/Normalizer$QuickCheckResult;
std::shared_ptr<android::icu::text::Normalizer_S_QuickCheckResult> android::icu::impl::Norm2AllModes_S_ComposeNormalizer2::quickCheck(std::shared_ptr<java::lang::CharSequence> s)
{
	
	int cVar0;
	int spanLengthAndMaybe;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	cVar0 = 0x0;
	spanLengthAndMaybe = this->impl->composeQuickCheck(s, cVar0, s->length(), this->onlyContiguous, cVar0);
	//    .local v6, "spanLengthAndMaybe":I
	if ( !(( spanLengthAndMaybe & 0x1)) )  
		goto label_cond_16;
	return android::icu::text::Normalizer::MAYBE;
	// 238    .line 227
label_cond_16:
	if ( _ushri(spanLengthAndMaybe,0x1) != s->length() )
		goto label_cond_21;
	return android::icu::text::Normalizer::YES;
	// 253    .line 230
label_cond_21:
	return android::icu::text::Normalizer::NO;

}
// .method public spanQuickCheckYes(Ljava/lang/CharSequence;)I
int android::icu::impl::Norm2AllModes_S_ComposeNormalizer2::spanQuickCheckYes(std::shared_ptr<java::lang::CharSequence> s)
{
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	return _ushri(this->impl->composeQuickCheck(s, 0x0, s->length(), this->onlyContiguous, 0x1),0x1);

}


