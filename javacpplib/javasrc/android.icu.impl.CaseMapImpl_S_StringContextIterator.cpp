// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\CaseMapImpl$StringContextIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.CaseMapImpl_S_StringContextIterator.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"

// .method public constructor <init>(Ljava/lang/CharSequence;)V
android::icu::impl::CaseMapImpl_S_StringContextIterator::CaseMapImpl_S_StringContextIterator(std::shared_ptr<java::lang::CharSequence> src)
{
	
	int cVar0;
	
	//    .param p1, "src"    # Ljava/lang/CharSequence;
	cVar0 = 0x0;
	// 043    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->s = src;
	this->limit = src->length();
	this->index = cVar0;
	this->cpLimit = cVar0;
	this->cpStart = cVar0;
	this->dir = cVar0;
	return;

}
// .method public getCPLength()I
int android::icu::impl::CaseMapImpl_S_StringContextIterator::getCPLength()
{
	
	return (this->cpLimit -  this->cpStart);

}
// .method public getCPLimit()I
int android::icu::impl::CaseMapImpl_S_StringContextIterator::getCPLimit()
{
	
	return this->cpLimit;

}
// .method public getCPStart()I
int android::icu::impl::CaseMapImpl_S_StringContextIterator::getCPStart()
{
	
	return this->cpStart;

}
// .method public moveToLimit()V
void android::icu::impl::CaseMapImpl_S_StringContextIterator::moveToLimit()
{
	
	int cVar0;
	
	cVar0 = this->limit;
	this->cpLimit = cVar0;
	this->cpStart = cVar0;
	return;

}
// .method public next()I
int android::icu::impl::CaseMapImpl_S_StringContextIterator::next()
{
	
	int c;
	
	if ( this->dir <= 0 )
		goto label_cond_20;
	if ( this->index >= this->s->length() )
		goto label_cond_20;
	c = java::lang::Character::codePointAt(this->s, this->index);
	//    .local v0, "c":I
	this->index = (this->index +  java::lang::Character::charCount(c));
	return c;
	// 163    .line 127
	// 164    .end local v0    # "c":I
label_cond_20:
	if ( this->dir >= 0 )
		goto label_cond_3a;
	if ( this->index <= 0 )
		goto label_cond_3a;
	c = java::lang::Character::codePointBefore(this->s, this->index);
	//    .restart local v0    # "c":I
	this->index = (this->index -  java::lang::Character::charCount(c));
	return c;
	// 198    .line 132
	// 199    .end local v0    # "c":I
label_cond_3a:
	return -0x1;

}
// .method public nextCaseMapCP()I
int android::icu::impl::CaseMapImpl_S_StringContextIterator::nextCaseMapCP()
{
	
	int c;
	
	this->cpStart = this->cpLimit;
	if ( this->cpLimit >= this->limit )
		goto label_cond_1c;
	c = java::lang::Character::codePointAt(this->s, this->cpLimit);
	//    .local v0, "c":I
	this->cpLimit = (this->cpLimit +  java::lang::Character::charCount(c));
	return c;
	// 246    .line 76
	// 247    .end local v0    # "c":I
label_cond_1c:
	return -0x1;

}
// .method public reset(I)V
void android::icu::impl::CaseMapImpl_S_StringContextIterator::reset(int direction)
{
	
	int cVar0;
	
	//    .param p1, "direction"    # I
	cVar0 = 0x0;
	if ( direction <= 0 )
		goto label_cond_b;
	this->dir = 0x1;
	this->index = this->cpLimit;
label_goto_a:
	return;
	// 278    .line 108
label_cond_b:
	if ( direction >= 0 )
		goto label_cond_15;
	this->dir = -0x1;
	this->index = this->cpStart;
	goto label_goto_a;
	// 294    .line 114
label_cond_15:
	this->dir = cVar0;
	this->index = cVar0;
	goto label_goto_a;

}
// .method public setLimit(I)V
void android::icu::impl::CaseMapImpl_S_StringContextIterator::setLimit(int lim)
{
	
	//    .param p1, "lim"    # I
	if ( lim < 0 ) 
		goto label_cond_d;
	if ( lim >  this->s->length() )
		goto label_cond_d;
	this->limit = lim;
label_goto_c:
	return;
	// 327    .line 47
label_cond_d:
	this->limit = this->s->length();
	goto label_goto_c;

}


