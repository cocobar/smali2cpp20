// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\Quantifier.smali
#include "java2ctype.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.text.Quantifier.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.UnicodeMatcher.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

static android::icu::text::Quantifier::MAX = 0x7fffffff;
// .method public constructor <init>(Landroid/icu/text/UnicodeMatcher;II)V
android::icu::text::Quantifier::Quantifier(std::shared_ptr<android::icu::text::UnicodeMatcher> theMatcher,int theMinCount,int theMaxCount)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "theMatcher"    # Landroid/icu/text/UnicodeMatcher;
	//    .param p2, "theMinCount"    # I
	//    .param p3, "theMaxCount"    # I
	// 030    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( !(theMatcher) )  
		goto label_cond_7;
	if ( theMinCount >= 0 )
		goto label_cond_d;
label_cond_7:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar0;
	// 045    .line 28
label_cond_d:
	if ( theMaxCount < 0 ) 
		goto label_cond_7;
	if ( theMinCount >  theMaxCount )
		goto label_cond_7;
	this->matcher = theMatcher;
	this->minCount = theMinCount;
	this->maxCount = theMaxCount;
	return;

}
// .method public addMatchSetTo(Landroid/icu/text/UnicodeSet;)V
void android::icu::text::Quantifier::addMatchSetTo(std::shared_ptr<android::icu::text::UnicodeSet> toUnionTo)
{
	
	//    .param p1, "toUnionTo"    # Landroid/icu/text/UnicodeSet;
	if ( this->maxCount <= 0 )
		goto label_cond_9;
	this->matcher->addMatchSetTo(toUnionTo);
label_cond_9:
	return;

}
// .method public matches(Landroid/icu/text/Replaceable;[IIZ)I
int android::icu::text::Quantifier::matches(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<int[]> offset,int limit,bool incremental)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int count;
	int m;
	
	//    .param p1, "text"    # Landroid/icu/text/Replaceable;
	//    .param p2, "offset"    # [I
	//    .param p3, "limit"    # I
	//    .param p4, "incremental"    # Z
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	//    .local v3, "start":I
	count = 0x0;
	//    .local v0, "count":I
label_cond_6:
	if ( count >= this->maxCount )
		goto label_cond_1a;
	//    .local v2, "pos":I
	m = this->matcher->matches(text, offset, limit, incremental);
	//    .local v1, "m":I
	if ( m != cVar0 )
		goto label_cond_21;
	count = ( count + 0x1);
	if ( offset[cVar2] != offset[cVar2] )
		goto label_cond_6;
	//    .end local v1    # "m":I
	//    .end local v2    # "pos":I
label_cond_1a:
	if ( !(incremental) )  
		goto label_cond_26;
	if ( offset[cVar2] != limit )
		goto label_cond_26;
	return cVar1;
	// 150    .line 55
	// 151    .restart local v1    # "m":I
	// 152    .restart local v2    # "pos":I
label_cond_21:
	if ( !(incremental) )  
		goto label_cond_1a;
	if ( m != cVar1 )
		goto label_cond_1a;
	return cVar1;
	// 161    .line 64
	// 162    .end local v1    # "m":I
	// 163    .end local v2    # "pos":I
label_cond_26:
	if ( count <  this->minCount )
		goto label_cond_2b;
	return cVar0;
	// 172    .line 67
label_cond_2b:
	offset[cVar2] = offset[cVar2];
	return cVar2;

}
// .method public matchesIndexValue(I)Z
bool android::icu::text::Quantifier::matchesIndexValue(int v)
{
	
	bool cVar0;
	
	//    .param p1, "v"    # I
	if ( !(this->minCount) )  
		goto label_cond_b;
	cVar0 = this->matcher->matchesIndexValue(v);
label_goto_a:
	return cVar0;
label_cond_b:
	cVar0 = 0x1;
	goto label_goto_a;

}
// .method public toPattern(Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::Quantifier::toPattern(bool escapeUnprintable)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::lang::StringBuilder> result;
	
	//    .param p1, "escapeUnprintable"    # Z
	cVar0 = 0x7fffffff;
	cVar1 = 0x1;
	result = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "result":Ljava/lang/StringBuilder;
	result->append(this->matcher->toPattern(escapeUnprintable));
	if ( this->minCount )     
		goto label_cond_34;
	if ( this->maxCount != cVar1 )
		goto label_cond_25;
	return result->append(0x3f)->toString();
	// 252    .line 80
label_cond_25:
	if ( this->maxCount != cVar0 )
		goto label_cond_47;
	return result->append(0x2a)->toString();
	// 271    .line 84
label_cond_34:
	if ( this->minCount != cVar1 )
		goto label_cond_47;
	if ( this->maxCount != cVar0 )
		goto label_cond_47;
	return result->append(0x2b)->toString();
	// 294    .line 87
label_cond_47:
	result->append(0x7b);
	result->append(android::icu::impl::Utility::hex((long long)(this->minCount), cVar1));
	result->append(0x2c);
	if ( this->maxCount == cVar0 )
		goto label_cond_69;
	result->append(android::icu::impl::Utility::hex((long long)(this->maxCount), cVar1));
label_cond_69:
	result->append(0x7d);
	return result->toString();

}


