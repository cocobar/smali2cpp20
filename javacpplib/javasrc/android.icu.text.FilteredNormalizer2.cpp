// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\FilteredNormalizer2.smali
#include "java2ctype.h"
#include "android.icu.text.FilteredNormalizer2.h"
#include "android.icu.text.Normalizer_S_QuickCheckResult.h"
#include "android.icu.text.Normalizer2.h"
#include "android.icu.text.Normalizer.h"
#include "android.icu.text.UnicodeSet_S_SpanCondition.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.ICUUncheckedIOException.h"
#include "java.io.IOException.h"
#include "java.lang.Appendable.h"
#include "java.lang.CharSequence.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"

// .method public constructor <init>(Landroid/icu/text/Normalizer2;Landroid/icu/text/UnicodeSet;)V
android::icu::text::FilteredNormalizer2::FilteredNormalizer2(std::shared_ptr<android::icu::text::Normalizer2> n2,std::shared_ptr<android::icu::text::UnicodeSet> filterSet)
{
	
	//    .param p1, "n2"    # Landroid/icu/text/Normalizer2;
	//    .param p2, "filterSet"    # Landroid/icu/text/UnicodeSet;
	// 020    invoke-direct {p0}, Landroid/icu/text/Normalizer2;-><init>()V
	this->norm2 = n2;
	this->set = filterSet;
	return;

}
// .method private normalize(Ljava/lang/CharSequence;Ljava/lang/Appendable;Landroid/icu/text/UnicodeSet$SpanCondition;)Ljava/lang/Appendable;
std::shared_ptr<java::lang::Appendable> android::icu::text::FilteredNormalizer2::normalize(std::shared_ptr<java::lang::CharSequence> src,std::shared_ptr<java::lang::Appendable> dest,std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> spanCondition)
{
	
	std::shared_ptr<java::lang::StringBuilder> tempDest;
	int prevSpanLimit;
	std::shared_ptr<android::icu::util::ICUUncheckedIOException> cVar2;
	int spanLimit;
	int spanLength;
	std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> spanCondition;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "src"    # Ljava/lang/CharSequence;
	//    .param p2, "dest"    # Ljava/lang/Appendable;
	//    .param p3, "spanCondition"    # Landroid/icu/text/UnicodeSet$SpanCondition;
	tempDest = std::make_shared<java::lang::StringBuilder>();
	//    .local v4, "tempDest":Ljava/lang/StringBuilder;
	prevSpanLimit = 0x0;
	//    .local v1, "prevSpanLimit":I
label_goto_6:
	try {
	//label_try_start_6:
	if ( prevSpanLimit >= src->length() )
		goto label_cond_3a;
	spanLimit = this->set->span(src, prevSpanLimit, spanCondition);
	//    .local v3, "spanLimit":I
	spanLength = (spanLimit - prevSpanLimit);
	//    .local v2, "spanLength":I
	if ( spanCondition != android::icu::text::UnicodeSet_S_SpanCondition::NOT_CONTAINED )
		goto label_cond_21;
	if ( !(spanLength) )  
		goto label_cond_1d;
	dest->append(src, prevSpanLimit, spanLimit);
label_cond_1d:
	spanCondition = android::icu::text::UnicodeSet_S_SpanCondition::SIMPLE;
label_goto_1f:
	prevSpanLimit = spanLimit;
	goto label_goto_6;
	// 090    .line 228
label_cond_21:
	if ( !(spanLength) )  
		goto label_cond_30;
	dest->append(this->norm2->normalize(src->subSequence(prevSpanLimit, spanLimit), tempDest));
label_cond_30:
	spanCondition = android::icu::text::UnicodeSet_S_SpanCondition::NOT_CONTAINED;
	//label_try_end_32:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_33;
	}
	//    .catch Ljava/io/IOException; {:try_start_6 .. :try_end_32} :catch_33
	goto label_goto_1f;
	// 115    .line 237
	// 116    .end local v2    # "spanLength":I
	// 117    .end local v3    # "spanLimit":I
label_catch_33:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	cVar2 = std::make_shared<android::icu::util::ICUUncheckedIOException>(getCatchExcetionFromList);
	// throw
	throw cVar2;
	// 129    .line 240
	// 130    .end local v0    # "e":Ljava/io/IOException;
label_cond_3a:
	return dest;

}
// .method private normalizeSecondAndAppend(Ljava/lang/StringBuilder;Ljava/lang/CharSequence;Z)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::text::FilteredNormalizer2::normalizeSecondAndAppend(std::shared_ptr<java::lang::StringBuilder> first,std::shared_ptr<java::lang::CharSequence> second,bool doNormalize)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	int prefixLimit;
	std::shared_ptr<java::lang::CharSequence> prefix;
	int suffixStart;
	std::shared_ptr<java::lang::CharSequence> rest;
	std::shared_ptr<java::lang::StringBuilder> middle;
	
	//    .param p1, "first"    # Ljava/lang/StringBuilder;
	//    .param p2, "second"    # Ljava/lang/CharSequence;
	//    .param p3, "doNormalize"    # Z
	cVar0 = 0x7fffffff;
	cVar1 = 0x0;
	if ( first != second )
		goto label_cond_c;
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar2;
	// 156    .line 248
label_cond_c:
	if ( first->length() )     
		goto label_cond_1e;
	if ( !(doNormalize) )  
		goto label_cond_19;
	return this->normalize(second, first);
	// 174    .line 252
label_cond_19:
	return first->append(second);
	// 182    .line 256
label_cond_1e:
	prefixLimit = this->set->span(second, cVar1, android::icu::text::UnicodeSet_S_SpanCondition::SIMPLE);
	//    .local v2, "prefixLimit":I
	if ( !(prefixLimit) )  
		goto label_cond_3d;
	prefix = second->subSequence(cVar1, prefixLimit);
	//    .local v1, "prefix":Ljava/lang/CharSequence;
	suffixStart = this->set->spanBack(first, cVar0, android::icu::text::UnicodeSet_S_SpanCondition::SIMPLE);
	//    .local v4, "suffixStart":I
	if ( suffixStart )     
		goto label_cond_59;
	if ( !(doNormalize) )  
		goto label_cond_53;
	this->norm2->normalizeSecondAndAppend(first, prefix);
	//    .end local v1    # "prefix":Ljava/lang/CharSequence;
	//    .end local v4    # "suffixStart":I
label_cond_3d:
label_goto_3d:
	if ( prefixLimit >= second->length() )
		goto label_cond_52;
	rest = second->subSequence(prefixLimit, second->length());
	//    .local v3, "rest":Ljava/lang/CharSequence;
	if ( !(doNormalize) )  
		goto label_cond_7b;
	this->normalize(rest, first, android::icu::text::UnicodeSet_S_SpanCondition::NOT_CONTAINED);
	//    .end local v3    # "rest":Ljava/lang/CharSequence;
label_cond_52:
label_goto_52:
	return first;
	// 258    .line 264
	// 259    .restart local v1    # "prefix":Ljava/lang/CharSequence;
	// 260    .restart local v4    # "suffixStart":I
label_cond_53:
	this->norm2->append(first, prefix);
	goto label_goto_3d;
	// 268    .line 267
label_cond_59:
	middle = std::make_shared<java::lang::StringBuilder>(first->subSequence(suffixStart, first->length()));
	//    .local v0, "middle":Ljava/lang/StringBuilder;
	if ( !(doNormalize) )  
		goto label_cond_75;
	this->norm2->normalizeSecondAndAppend(middle, prefix);
label_goto_6d:
	first->delete(suffixStart, cVar0)->append(middle);
	goto label_goto_3d;
	// 303    .line 272
label_cond_75:
	this->norm2->append(middle, prefix);
	goto label_goto_6d;
	// 311    .line 282
	// 312    .end local v0    # "middle":Ljava/lang/StringBuilder;
	// 313    .end local v1    # "prefix":Ljava/lang/CharSequence;
	// 314    .end local v4    # "suffixStart":I
	// 315    .restart local v3    # "rest":Ljava/lang/CharSequence;
label_cond_7b:
	first->append(rest);
	goto label_goto_52;

}
// .method public append(Ljava/lang/StringBuilder;Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::text::FilteredNormalizer2::append(std::shared_ptr<java::lang::StringBuilder> first,std::shared_ptr<java::lang::CharSequence> second)
{
	
	//    .param p1, "first"    # Ljava/lang/StringBuilder;
	//    .param p2, "second"    # Ljava/lang/CharSequence;
	return this->normalizeSecondAndAppend(first, second, 0x0);

}
// .method public composePair(II)I
int android::icu::text::FilteredNormalizer2::composePair(int a,int b)
{
	
	int cVar0;
	
	//    .param p1, "a"    # I
	//    .param p2, "b"    # I
	if ( !(this->set->contains(a)) )  
		goto label_cond_17;
	if ( !(this->set->contains(b)) )  
		goto label_cond_17;
	cVar0 = this->norm2->composePair(a, b);
label_goto_16:
	return cVar0;
label_cond_17:
	cVar0 = -0x1;
	goto label_goto_16;

}
// .method public getCombiningClass(I)I
int android::icu::text::FilteredNormalizer2::getCombiningClass(int c)
{
	
	int cVar0;
	
	//    .param p1, "c"    # I
	if ( !(this->set->contains(c)) )  
		goto label_cond_f;
	cVar0 = this->norm2->getCombiningClass(c);
label_goto_e:
	return cVar0;
label_cond_f:
	cVar0 = 0x0;
	goto label_goto_e;

}
// .method public getDecomposition(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::FilteredNormalizer2::getDecomposition(int c)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p1, "c"    # I
	if ( !(this->set->contains(c)) )  
		goto label_cond_f;
	cVar0 = this->norm2->getDecomposition(c);
label_goto_e:
	return cVar0;
label_cond_f:
	cVar0 = 0x0;
	goto label_goto_e;

}
// .method public getRawDecomposition(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::FilteredNormalizer2::getRawDecomposition(int c)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p1, "c"    # I
	if ( !(this->set->contains(c)) )  
		goto label_cond_f;
	cVar0 = this->norm2->getRawDecomposition(c);
label_goto_e:
	return cVar0;
label_cond_f:
	cVar0 = 0x0;
	goto label_goto_e;

}
// .method public hasBoundaryAfter(I)Z
bool android::icu::text::FilteredNormalizer2::hasBoundaryAfter(int c)
{
	
	bool cVar0;
	
	//    .param p1, "c"    # I
	if ( !(this->set->contains(c)) )  
		goto label_cond_f;
	cVar0 = this->norm2->hasBoundaryAfter(c);
label_goto_e:
	return cVar0;
label_cond_f:
	cVar0 = 0x1;
	goto label_goto_e;

}
// .method public hasBoundaryBefore(I)Z
bool android::icu::text::FilteredNormalizer2::hasBoundaryBefore(int c)
{
	
	bool cVar0;
	
	//    .param p1, "c"    # I
	if ( !(this->set->contains(c)) )  
		goto label_cond_f;
	cVar0 = this->norm2->hasBoundaryBefore(c);
label_goto_e:
	return cVar0;
label_cond_f:
	cVar0 = 0x1;
	goto label_goto_e;

}
// .method public isInert(I)Z
bool android::icu::text::FilteredNormalizer2::isInert(int c)
{
	
	bool cVar0;
	
	//    .param p1, "c"    # I
	if ( !(this->set->contains(c)) )  
		goto label_cond_f;
	cVar0 = this->norm2->isInert(c);
label_goto_e:
	return cVar0;
label_cond_f:
	cVar0 = 0x1;
	goto label_goto_e;

}
// .method public isNormalized(Ljava/lang/CharSequence;)Z
bool android::icu::text::FilteredNormalizer2::isNormalized(std::shared_ptr<java::lang::CharSequence> s)
{
	
	std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> spanCondition;
	int prevSpanLimit;
	int spanLimit;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	spanCondition = android::icu::text::UnicodeSet_S_SpanCondition::SIMPLE;
	//    .local v1, "spanCondition":Landroid/icu/text/UnicodeSet$SpanCondition;
	prevSpanLimit = 0x0;
	//    .local v0, "prevSpanLimit":I
label_goto_3:
	if ( prevSpanLimit >= s->length() )
		goto label_cond_28;
	spanLimit = this->set->span(s, prevSpanLimit, spanCondition);
	//    .local v2, "spanLimit":I
	if ( spanCondition != android::icu::text::UnicodeSet_S_SpanCondition::NOT_CONTAINED )
		goto label_cond_17;
	spanCondition = android::icu::text::UnicodeSet_S_SpanCondition::SIMPLE;
label_goto_15:
	prevSpanLimit = spanLimit;
	goto label_goto_3;
	// 594    .line 124
label_cond_17:
	if ( this->norm2->isNormalized(s->subSequence(prevSpanLimit, spanLimit)) )     
		goto label_cond_25;
	return 0x0;
	// 613    .line 127
label_cond_25:
	spanCondition = android::icu::text::UnicodeSet_S_SpanCondition::NOT_CONTAINED;
	goto label_goto_15;
	// 619    .line 131
	// 620    .end local v2    # "spanLimit":I
label_cond_28:
	return 0x1;

}
// .method public normalize(Ljava/lang/CharSequence;Ljava/lang/Appendable;)Ljava/lang/Appendable;
std::shared_ptr<java::lang::Appendable> android::icu::text::FilteredNormalizer2::normalize(std::shared_ptr<java::lang::CharSequence> src,std::shared_ptr<java::lang::Appendable> dest)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "src"    # Ljava/lang/CharSequence;
	//    .param p2, "dest"    # Ljava/lang/Appendable;
	if ( dest != src )
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar0;
	// 643    .line 62
label_cond_8:
	return this->normalize(src, dest, android::icu::text::UnicodeSet_S_SpanCondition::SIMPLE);

}
// .method public normalize(Ljava/lang/CharSequence;Ljava/lang/StringBuilder;)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::text::FilteredNormalizer2::normalize(std::shared_ptr<java::lang::CharSequence> src,std::shared_ptr<java::lang::StringBuilder> dest)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "src"    # Ljava/lang/CharSequence;
	//    .param p2, "dest"    # Ljava/lang/StringBuilder;
	if ( dest != src )
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar0;
	// 670    .line 50
label_cond_8:
	dest->setLength(0x0);
	this->normalize(src, dest, android::icu::text::UnicodeSet_S_SpanCondition::SIMPLE);
	return dest;

}
// .method public normalizeSecondAndAppend(Ljava/lang/StringBuilder;Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::text::FilteredNormalizer2::normalizeSecondAndAppend(std::shared_ptr<java::lang::StringBuilder> first,std::shared_ptr<java::lang::CharSequence> second)
{
	
	//    .param p1, "first"    # Ljava/lang/StringBuilder;
	//    .param p2, "second"    # Ljava/lang/CharSequence;
	return this->normalizeSecondAndAppend(first, second, 0x1);

}
// .method public quickCheck(Ljava/lang/CharSequence;)Landroid/icu/text/Normalizer$QuickCheckResult;
std::shared_ptr<android::icu::text::Normalizer_S_QuickCheckResult> android::icu::text::FilteredNormalizer2::quickCheck(std::shared_ptr<java::lang::CharSequence> s)
{
	
	std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> spanCondition;
	int prevSpanLimit;
	int spanLimit;
	std::shared_ptr<android::icu::text::Normalizer_S_QuickCheckResult> qcResult;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .local v2, "result":Landroid/icu/text/Normalizer$QuickCheckResult;
	spanCondition = android::icu::text::UnicodeSet_S_SpanCondition::SIMPLE;
	//    .local v3, "spanCondition":Landroid/icu/text/UnicodeSet$SpanCondition;
	prevSpanLimit = 0x0;
	//    .local v0, "prevSpanLimit":I
label_goto_5:
	if ( prevSpanLimit >= s->length() )
		goto label_cond_30;
	spanLimit = this->set->span(s, prevSpanLimit, spanCondition);
	//    .local v4, "spanLimit":I
	if ( spanCondition != android::icu::text::UnicodeSet_S_SpanCondition::NOT_CONTAINED )
		goto label_cond_19;
	spanCondition = android::icu::text::UnicodeSet_S_SpanCondition::SIMPLE;
label_goto_17:
	prevSpanLimit = spanLimit;
	goto label_goto_5;
	// 747    .line 147
label_cond_19:
	qcResult = this->norm2->quickCheck(s->subSequence(prevSpanLimit, spanLimit));
	//    .local v1, "qcResult":Landroid/icu/text/Normalizer$QuickCheckResult;
	if ( qcResult != android::icu::text::Normalizer::NO )
		goto label_cond_28;
	return qcResult;
	// 768    .line 150
label_cond_28:
	if ( qcResult != android::icu::text::Normalizer::MAYBE )
		goto label_cond_2d;
	qcResult;
label_cond_2d:
	spanCondition = android::icu::text::UnicodeSet_S_SpanCondition::NOT_CONTAINED;
	goto label_goto_17;
	// 783    .line 157
	// 784    .end local v1    # "qcResult":Landroid/icu/text/Normalizer$QuickCheckResult;
	// 785    .end local v4    # "spanLimit":I
label_cond_30:
	return android::icu::text::Normalizer::YES;

}
// .method public spanQuickCheckYes(Ljava/lang/CharSequence;)I
int android::icu::text::FilteredNormalizer2::spanQuickCheckYes(std::shared_ptr<java::lang::CharSequence> s)
{
	
	std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> spanCondition;
	int prevSpanLimit;
	int spanLimit;
	int yesLimit;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	spanCondition = android::icu::text::UnicodeSet_S_SpanCondition::SIMPLE;
	//    .local v1, "spanCondition":Landroid/icu/text/UnicodeSet$SpanCondition;
	prevSpanLimit = 0x0;
	//    .local v0, "prevSpanLimit":I
label_goto_3:
	if ( prevSpanLimit >= s->length() )
		goto label_cond_29;
	spanLimit = this->set->span(s, prevSpanLimit, spanCondition);
	//    .local v2, "spanLimit":I
	if ( spanCondition != android::icu::text::UnicodeSet_S_SpanCondition::NOT_CONTAINED )
		goto label_cond_17;
	spanCondition = android::icu::text::UnicodeSet_S_SpanCondition::SIMPLE;
label_goto_15:
	prevSpanLimit = spanLimit;
	goto label_goto_3;
	// 832    .line 172
label_cond_17:
	yesLimit = (prevSpanLimit + this->norm2->spanQuickCheckYes(s->subSequence(prevSpanLimit, spanLimit)));
	//    .local v3, "yesLimit":I
	if ( yesLimit >= spanLimit )
		goto label_cond_26;
	return yesLimit;
	// 854    .line 176
label_cond_26:
	spanCondition = android::icu::text::UnicodeSet_S_SpanCondition::NOT_CONTAINED;
	goto label_goto_15;
	// 860    .line 180
	// 861    .end local v2    # "spanLimit":I
	// 862    .end local v3    # "yesLimit":I
label_cond_29:
	return s->length();

}


