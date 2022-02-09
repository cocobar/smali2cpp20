// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\ReplaceableContextIterator.smali
#include "java2ctype.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.ReplaceableContextIterator.h"
#include "android.icu.text.UTF16.h"
#include "java.lang.String.h"

// .method constructor <init>()V
android::icu::text::ReplaceableContextIterator::ReplaceableContextIterator()
{
	
	int cVar0;
	
	cVar0 = 0x0;
	// 037    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->rep = 0x0;
	this->contextLimit = cVar0;
	this->contextStart = cVar0;
	this->index = cVar0;
	this->cpLimit = cVar0;
	this->cpStart = cVar0;
	this->limit = cVar0;
	this->dir = cVar0;
	this->reachedLimit = cVar0;
	return;

}
// .method public didReachLimit()Z
bool android::icu::text::ReplaceableContextIterator::didReachLimit()
{
	
	return this->reachedLimit;

}
// .method public getCaseMapCPStart()I
int android::icu::text::ReplaceableContextIterator::getCaseMapCPStart()
{
	
	return this->cpStart;

}
// .method public next()I
int android::icu::text::ReplaceableContextIterator::next()
{
	
	int c;
	
	if ( this->dir <= 0 )
		goto label_cond_21;
	if ( this->index >= this->contextLimit )
		goto label_cond_1c;
	c = this->rep->char32At(this->index);
	//    .local v0, "c":I
	this->index = (this->index +  android::icu::text::UTF16::getCharCount(c));
	return c;
	// 129    .line 184
	// 130    .end local v0    # "c":I
label_cond_1c:
	this->reachedLimit = 0x1;
label_cond_1f:
	return -0x1;
	// 142    .line 186
label_cond_21:
	if ( this->dir >= 0 )
		goto label_cond_1f;
	if ( this->index <= this->contextStart )
		goto label_cond_1f;
	c = this->rep->char32At(( this->index + -0x1));
	//    .restart local v0    # "c":I
	this->index = (this->index -  android::icu::text::UTF16::getCharCount(c));
	return c;

}
// .method public nextCaseMapCP()I
int android::icu::text::ReplaceableContextIterator::nextCaseMapCP()
{
	
	int c;
	
	if ( this->cpLimit >= this->limit )
		goto label_cond_1c;
	this->cpStart = this->cpLimit;
	c = this->rep->char32At(this->cpLimit);
	//    .local v0, "c":I
	this->cpLimit = (this->cpLimit +  android::icu::text::UTF16::getCharCount(c));
	return c;
	// 221    .line 128
	// 222    .end local v0    # "c":I
label_cond_1c:
	return -0x1;

}
// .method public replace(Ljava/lang/String;)I
int android::icu::text::ReplaceableContextIterator::replace(std::shared_ptr<java::lang::String> text)
{
	
	int delta;
	
	//    .param p1, "text"    # Ljava/lang/String;
	delta = (text->length() - (this->cpLimit -  this->cpStart));
	//    .local v0, "delta":I
	this->rep->replace(this->cpStart, this->cpLimit, text);
	this->cpLimit = (this->cpLimit +  delta);
	this->limit = (this->limit +  delta);
	this->contextLimit = (this->contextLimit +  delta);
	return delta;

}
// .method public reset(I)V
void android::icu::text::ReplaceableContextIterator::reset(int direction)
{
	
	bool cVar0;
	
	//    .param p1, "direction"    # I
	cVar0 = 0x0;
	if ( direction <= 0 )
		goto label_cond_d;
	this->dir = 0x1;
	this->index = this->cpLimit;
label_goto_a:
	this->reachedLimit = cVar0;
	return;
	// 309    .line 162
label_cond_d:
	if ( direction >= 0 )
		goto label_cond_17;
	this->dir = -0x1;
	this->index = this->cpStart;
	goto label_goto_a;
	// 325    .line 168
label_cond_17:
	this->dir = cVar0;
	this->index = cVar0;
	goto label_goto_a;

}
// .method public setContextLimits(II)V
void android::icu::text::ReplaceableContextIterator::setContextLimits(int contextStart,int contextLimit)
{
	
	int cVar0;
	
	//    .param p1, "contextStart"    # I
	//    .param p2, "contextLimit"    # I
	cVar0 = 0x0;
	if ( contextStart >= 0 )
		goto label_cond_10;
	this->contextStart = cVar0;
label_goto_5:
	if ( contextLimit >= this->contextStart )
		goto label_cond_24;
	this->contextLimit = this->contextStart;
label_goto_d:
	this->reachedLimit = cVar0;
	return;
	// 367    .line 99
label_cond_10:
	if ( contextStart >  this->rep->length() )
		goto label_cond_1b;
	this->contextStart = contextStart;
	goto label_goto_5;
	// 382    .line 102
label_cond_1b:
	this->contextStart = this->rep->length();
	goto label_goto_5;
	// 394    .line 106
label_cond_24:
	if ( contextLimit >  this->rep->length() )
		goto label_cond_2f;
	this->contextLimit = contextLimit;
	goto label_goto_d;
	// 409    .line 109
label_cond_2f:
	this->contextLimit = this->rep->length();
	goto label_goto_d;

}
// .method public setIndex(I)V
void android::icu::text::ReplaceableContextIterator::setIndex(int index)
{
	
	int cVar0;
	
	//    .param p1, "index"    # I
	cVar0 = 0x0;
	this->cpLimit = index;
	this->cpStart = index;
	this->index = cVar0;
	this->dir = cVar0;
	this->reachedLimit = cVar0;
	return;

}
// .method public setLimit(I)V
void android::icu::text::ReplaceableContextIterator::setLimit(int lim)
{
	
	//    .param p1, "lim"    # I
	if ( lim < 0 ) 
		goto label_cond_10;
	if ( lim >  this->rep->length() )
		goto label_cond_10;
	this->limit = lim;
label_goto_d:
	this->reachedLimit = 0x0;
	return;
	// 475    .line 86
label_cond_10:
	this->limit = this->rep->length();
	goto label_goto_d;

}
// .method public setText(Landroid/icu/text/Replaceable;)V
void android::icu::text::ReplaceableContextIterator::setText(std::shared_ptr<android::icu::text::Replaceable> rep)
{
	
	int cVar0;
	int cVar1;
	
	//    .param p1, "rep"    # Landroid/icu/text/Replaceable;
	cVar0 = 0x0;
	this->rep = rep;
	cVar1 = rep->length();
	this->contextLimit = cVar1;
	this->limit = cVar1;
	this->contextStart = cVar0;
	this->index = cVar0;
	this->cpLimit = cVar0;
	this->cpStart = cVar0;
	this->dir = cVar0;
	this->reachedLimit = cVar0;
	return;

}


