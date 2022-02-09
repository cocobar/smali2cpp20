// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\Norm2AllModes$Normalizer2WithImpl.smali
#include "java2ctype.h"
#include "android.icu.impl.Norm2AllModes_S_Normalizer2WithImpl.h"
#include "android.icu.impl.Normalizer2Impl_S_ReorderingBuffer.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "android.icu.text.Normalizer_S_QuickCheckResult.h"
#include "android.icu.text.Normalizer.h"
#include "java.lang.Appendable.h"
#include "java.lang.CharSequence.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method public constructor <init>(Landroid/icu/impl/Normalizer2Impl;)V
android::icu::impl::Norm2AllModes_S_Normalizer2WithImpl::Norm2AllModes_S_Normalizer2WithImpl(std::shared_ptr<android::icu::impl::Normalizer2Impl> ni)
{
	
	//    .param p1, "ni"    # Landroid/icu/impl/Normalizer2Impl;
	// 028    invoke-direct {p0}, Landroid/icu/text/Normalizer2;-><init>()V
	this->impl = ni;
	return;

}
// .method public append(Ljava/lang/StringBuilder;Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::impl::Norm2AllModes_S_Normalizer2WithImpl::append(std::shared_ptr<java::lang::StringBuilder> first,std::shared_ptr<java::lang::CharSequence> second)
{
	
	//    .param p1, "first"    # Ljava/lang/StringBuilder;
	//    .param p2, "second"    # Ljava/lang/CharSequence;
	return this->normalizeSecondAndAppend(first, second, 0x0);

}
// .method public composePair(II)I
int android::icu::impl::Norm2AllModes_S_Normalizer2WithImpl::composePair(int a,int b)
{
	
	//    .param p1, "a"    # I
	//    .param p2, "b"    # I
	return this->impl->composePair(a, b);

}
// .method public getCombiningClass(I)I
int android::icu::impl::Norm2AllModes_S_Normalizer2WithImpl::getCombiningClass(int c)
{
	
	//    .param p1, "c"    # I
	return this->impl->getCC(this->impl->getNorm16(c));

}
// .method public getDecomposition(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::Norm2AllModes_S_Normalizer2WithImpl::getDecomposition(int c)
{
	
	//    .param p1, "c"    # I
	return this->impl->getDecomposition(c);

}
// .method public getRawDecomposition(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::Norm2AllModes_S_Normalizer2WithImpl::getRawDecomposition(int c)
{
	
	//    .param p1, "c"    # I
	return this->impl->getRawDecomposition(c);

}
// .method public isNormalized(Ljava/lang/CharSequence;)Z
bool android::icu::impl::Norm2AllModes_S_Normalizer2WithImpl::isNormalized(std::shared_ptr<java::lang::CharSequence> s)
{
	
	bool cVar0;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	if ( s->length() != this->spanQuickCheckYes(s) )
		goto label_cond_c;
	cVar0 = 0x1;
label_goto_b:
	return cVar0;
label_cond_c:
	cVar0 = 0x0;
	goto label_goto_b;

}
// .method public normalize(Ljava/lang/CharSequence;Ljava/lang/Appendable;)Ljava/lang/Appendable;
std::shared_ptr<java::lang::Appendable> android::icu::impl::Norm2AllModes_S_Normalizer2WithImpl::normalize(std::shared_ptr<java::lang::CharSequence> src,std::shared_ptr<java::lang::Appendable> dest)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> buffer;
	
	//    .param p1, "src"    # Ljava/lang/CharSequence;
	//    .param p2, "dest"    # Ljava/lang/Appendable;
	if ( dest != src )
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar0;
	// 168    .line 107
label_cond_8:
	buffer = std::make_shared<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer>(this->impl, dest, src->length());
	//    .local v0, "buffer":Landroid/icu/impl/Normalizer2Impl$ReorderingBuffer;
	this->normalize(src, buffer);
	buffer->flush();
	return dest;

}
// .method public normalize(Ljava/lang/CharSequence;Ljava/lang/StringBuilder;)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::impl::Norm2AllModes_S_Normalizer2WithImpl::normalize(std::shared_ptr<java::lang::CharSequence> src,std::shared_ptr<java::lang::StringBuilder> dest)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> cVar1;
	
	//    .param p1, "src"    # Ljava/lang/CharSequence;
	//    .param p2, "dest"    # Ljava/lang/StringBuilder;
	if ( dest != src )
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar0;
	// 207    .line 97
label_cond_8:
	dest->setLength(0x0);
	cVar1 = std::make_shared<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer>(this->impl, dest, src->length());
	this->normalize(src, cVar1);
	return dest;

}
// .method public normalizeSecondAndAppend(Ljava/lang/StringBuilder;Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::impl::Norm2AllModes_S_Normalizer2WithImpl::normalizeSecondAndAppend(std::shared_ptr<java::lang::StringBuilder> first,std::shared_ptr<java::lang::CharSequence> second)
{
	
	//    .param p1, "first"    # Ljava/lang/StringBuilder;
	//    .param p2, "second"    # Ljava/lang/CharSequence;
	return this->normalizeSecondAndAppend(first, second, 0x1);

}
// .method public normalizeSecondAndAppend(Ljava/lang/StringBuilder;Ljava/lang/CharSequence;Z)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::impl::Norm2AllModes_S_Normalizer2WithImpl::normalizeSecondAndAppend(std::shared_ptr<java::lang::StringBuilder> first,std::shared_ptr<java::lang::CharSequence> second,bool doNormalize)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> cVar1;
	
	//    .param p1, "first"    # Ljava/lang/StringBuilder;
	//    .param p2, "second"    # Ljava/lang/CharSequence;
	//    .param p3, "doNormalize"    # Z
	if ( first != second )
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar0;
	// 269    .line 130
label_cond_8:
	cVar1 = std::make_shared<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer>(this->impl, first, (first->length() +  second->length()));
	this->normalizeAndAppend(second, doNormalize, cVar1);
	return first;

}
// .method public quickCheck(Ljava/lang/CharSequence;)Landroid/icu/text/Normalizer$QuickCheckResult;
std::shared_ptr<android::icu::text::Normalizer_S_QuickCheckResult> android::icu::impl::Norm2AllModes_S_Normalizer2WithImpl::quickCheck(std::shared_ptr<java::lang::CharSequence> s)
{
	
	std::shared_ptr<android::icu::text::Normalizer_S_QuickCheckResult> cVar0;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	if ( !(this->isNormalized(s)) )  
		goto label_cond_9;
	cVar0 = android::icu::text::Normalizer::YES;
label_goto_8:
	return cVar0;
label_cond_9:
	cVar0 = android::icu::text::Normalizer::NO;
	goto label_goto_8;

}


