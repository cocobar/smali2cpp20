// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RuleBasedCollator$FCDUTF16NFDIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.Normalizer2Impl_S_ReorderingBuffer.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "android.icu.text.RuleBasedCollator_S_FCDUTF16NFDIterator.h"
#include "java.lang.CharSequence.h"
#include "java.lang.StringBuilder.h"

// .method constructor <init>()V
android::icu::text::RuleBasedCollator_S_FCDUTF16NFDIterator::RuleBasedCollator_S_FCDUTF16NFDIterator()
{
	
	// 027    invoke-direct {p0}, Landroid/icu/text/RuleBasedCollator$UTF16NFDIterator;-><init>()V
	return;

}
// .method setText(Landroid/icu/impl/Normalizer2Impl;Ljava/lang/CharSequence;I)V
void android::icu::text::RuleBasedCollator_S_FCDUTF16NFDIterator::setText(std::shared_ptr<android::icu::impl::Normalizer2Impl> nfcImpl,std::shared_ptr<java::lang::CharSequence> seq,int start)
{
	
	int cVar0;
	int spanLimit;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> buffer;
	
	//    .param p1, "nfcImpl"    # Landroid/icu/impl/Normalizer2Impl;
	//    .param p2, "seq"    # Ljava/lang/CharSequence;
	//    .param p3, "start"    # I
	cVar0 = 0x0;
	this->reset();
	spanLimit = nfcImpl->makeFCD(seq, start, seq->length(), 0x0);
	//    .local v1, "spanLimit":I
	if ( spanLimit != seq->length() )
		goto label_cond_18;
	this->s = seq;
	this->pos = start;
label_goto_17:
	return;
	// 075    .line 1538
label_cond_18:
	if ( this->str )     
		goto label_cond_42;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	this->str = cVar1;
label_goto_23:
	this->str->append(seq, start, spanLimit);
	buffer = std::make_shared<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer>(nfcImpl, this->str, (seq->length() -  start));
	//    .local v0, "buffer":Landroid/icu/impl/Normalizer2Impl$ReorderingBuffer;
	nfcImpl->makeFCD(seq, spanLimit, seq->length(), buffer);
	this->s = this->str;
	this->pos = cVar0;
	goto label_goto_17;
	// 125    .line 1541
	// 126    .end local v0    # "buffer":Landroid/icu/impl/Normalizer2Impl$ReorderingBuffer;
label_cond_42:
	this->str->setLength(cVar0);
	goto label_goto_23;

}


