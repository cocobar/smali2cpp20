// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\UTF16CollationIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.Trie2_32.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.CollationIterator.h"
#include "android.icu.impl.coll.UTF16CollationIterator.h"
#include "java.lang.AssertionError.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

static android::icu::impl::coll::UTF16CollationIterator::_assertionsDisabled;
// .method static constructor <clinit>()V
void android::icu::impl::coll::UTF16CollationIterator::static_cinit()
{
	
	android::icu::impl::coll::UTF16CollationIterator::_assertionsDisabled = ( android::icu::impl::coll::UTF16CollationIterator()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method public constructor <init>(Landroid/icu/impl/coll/CollationData;)V
android::icu::impl::coll::UTF16CollationIterator::UTF16CollationIterator(std::shared_ptr<android::icu::impl::coll::CollationData> d)
{
	
	//    .param p1, "d"    # Landroid/icu/impl/coll/CollationData;
	android::icu::impl::coll::CollationIterator::(d);
	return;

}
// .method public constructor <init>(Landroid/icu/impl/coll/CollationData;ZLjava/lang/CharSequence;I)V
android::icu::impl::coll::UTF16CollationIterator::UTF16CollationIterator(std::shared_ptr<android::icu::impl::coll::CollationData> d,bool numeric,std::shared_ptr<java::lang::CharSequence> s,int p)
{
	
	//    .param p1, "d"    # Landroid/icu/impl/coll/CollationData;
	//    .param p2, "numeric"    # Z
	//    .param p3, "s"    # Ljava/lang/CharSequence;
	//    .param p4, "p"    # I
	android::icu::impl::coll::CollationIterator::(d, numeric);
	this->seq = s;
	this->start = 0x0;
	this->pos = p;
	this->limit = s->length();
	return;

}
// .method protected backwardNumCodePoints(I)V
void android::icu::impl::coll::UTF16CollationIterator::backwardNumCodePoints(int num)
{
	
	int cVar0;
	int num;
	
	//    .param p1, "num"    # I
label_cond_0:
label_goto_0:
	if ( num <= 0 )
		goto label_cond_39;
	if ( this->pos == this->start )
		goto label_cond_39;
	cVar0 = ( this->pos + -0x1);
	this->pos = cVar0;
	//    .local v0, "c":C
	num = ( num + -0x1);
	if ( !(java::lang::Character::isLowSurrogate(this->seq->charAt(cVar0))) )  
		goto label_cond_0;
	if ( this->pos == this->start )
		goto label_cond_0;
	if ( !(java::lang::Character::isHighSurrogate(this->seq->charAt(( this->pos + -0x1)))) )  
		goto label_cond_0;
	this->pos = ( this->pos + -0x1);
	goto label_goto_0;
	// 159    .line 145
	// 160    .end local v0    # "c":C
label_cond_39:
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::impl::coll::UTF16CollationIterator::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar1;
	std::shared_ptr<android::icu::impl::coll::UTF16CollationIterator> o;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( this->equals(other) )     
		goto label_cond_8;
	return cVar1;
label_cond_8:
	o = other;
	o->checkCast("android::icu::impl::coll::UTF16CollationIterator");
	//    .local v0, "o":Landroid/icu/impl/coll/UTF16CollationIterator;
	if ( (this->pos -  this->start) != (o->pos -  o->start) )
		goto label_cond_18;
	cVar1 = 0x1;
label_cond_18:
	return cVar1;

}
// .method protected forwardNumCodePoints(I)V
void android::icu::impl::coll::UTF16CollationIterator::forwardNumCodePoints(int num)
{
	
	int cVar0;
	int num;
	
	//    .param p1, "num"    # I
label_cond_0:
label_goto_0:
	if ( num <= 0 )
		goto label_cond_37;
	if ( this->pos == this->limit )
		goto label_cond_37;
	cVar0 = this->pos;
	this->pos = ( cVar0 + 0x1);
	//    .local v0, "c":C
	num = ( num + -0x1);
	if ( !(java::lang::Character::isHighSurrogate(this->seq->charAt(cVar0))) )  
		goto label_cond_0;
	if ( this->pos == this->limit )
		goto label_cond_0;
	if ( !(java::lang::Character::isLowSurrogate(this->seq->charAt(this->pos))) )  
		goto label_cond_0;
	this->pos = ( this->pos + 0x1);
	goto label_goto_0;
	// 280    .line 133
	// 281    .end local v0    # "c":C
label_cond_37:
	return;

}
// .method public getOffset()I
int android::icu::impl::coll::UTF16CollationIterator::getOffset()
{
	
	return (this->pos -  this->start);

}
// .method protected handleGetTrailSurrogate()C
char android::icu::impl::coll::UTF16CollationIterator::handleGetTrailSurrogate()
{
	
	char trail;
	
	if ( this->pos != this->limit )
		goto label_cond_8;
	return 0x0;
	// 315    .line 117
label_cond_8:
	trail = this->seq->charAt(this->pos);
	//    .local v0, "trail":C
	if ( !(java::lang::Character::isLowSurrogate(trail)) )  
		goto label_cond_1c;
	this->pos = ( this->pos + 0x1);
label_cond_1c:
	return trail;

}
// .method protected handleNextCE32()J
long long android::icu::impl::coll::UTF16CollationIterator::handleNextCE32()
{
	
	int cVar0;
	char c;
	
	if ( this->pos != this->limit )
		goto label_cond_c;
	return -0xffffff40L;
	// 359    .line 109
label_cond_c:
	cVar0 = this->pos;
	this->pos = ( cVar0 + 0x1);
	c = this->seq->charAt(cVar0);
	//    .local v0, "c":C
	return this->makeCodePointAndCE32Pair(c, this->trie->getFromU16SingleLead(c));

}
// .method public hashCode()I
int android::icu::impl::coll::UTF16CollationIterator::hashCode()
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	if ( android::icu::impl::coll::UTF16CollationIterator::_assertionsDisabled )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::lang::AssertionError>(std::make_shared<java::lang::String>(std::make_shared<char[]>("hashCode not designed")));
	// throw
	throw cVar0;
	// 405    .line 50
label_cond_d:
	return 0x2a;

}
// .method public nextCodePoint()I
int android::icu::impl::coll::UTF16CollationIterator::nextCodePoint()
{
	
	int cVar0;
	char c;
	char trail;
	
	if ( this->pos != this->limit )
		goto label_cond_8;
	return -0x1;
	// 428    .line 77
label_cond_8:
	cVar0 = this->pos;
	this->pos = ( cVar0 + 0x1);
	c = this->seq->charAt(cVar0);
	//    .local v0, "c":C
	if ( !(java::lang::Character::isHighSurrogate(c)) )  
		goto label_cond_39;
	if ( this->pos == this->limit )
		goto label_cond_39;
	trail = this->seq->charAt(this->pos);
	//    .local v1, "trail":C
	if ( !(java::lang::Character::isLowSurrogate(trail)) )  
		goto label_cond_39;
	this->pos = ( this->pos + 0x1);
	return java::lang::Character::toCodePoint(c, trail);
	// 487    .line 84
	// 488    .end local v1    # "trail":C
label_cond_39:
	return c;

}
// .method public previousCodePoint()I
int android::icu::impl::coll::UTF16CollationIterator::previousCodePoint()
{
	
	int cVar0;
	char c;
	char lead;
	
	if ( this->pos != this->start )
		goto label_cond_8;
	return -0x1;
	// 509    .line 93
label_cond_8:
	cVar0 = ( this->pos + -0x1);
	this->pos = cVar0;
	c = this->seq->charAt(cVar0);
	//    .local v0, "c":C
	if ( !(java::lang::Character::isLowSurrogate(c)) )  
		goto label_cond_3b;
	if ( this->pos == this->start )
		goto label_cond_3b;
	lead = this->seq->charAt(( this->pos + -0x1));
	//    .local v1, "lead":C
	if ( !(java::lang::Character::isHighSurrogate(lead)) )  
		goto label_cond_3b;
	this->pos = ( this->pos + -0x1);
	return java::lang::Character::toCodePoint(lead, c);
	// 570    .line 100
	// 571    .end local v1    # "lead":C
label_cond_3b:
	return c;

}
// .method public resetToOffset(I)V
void android::icu::impl::coll::UTF16CollationIterator::resetToOffset(int newOffset)
{
	
	//    .param p1, "newOffset"    # I
	this->reset();
	this->pos = (this->start +  newOffset);
	return;

}
// .method public setText(ZLjava/lang/CharSequence;I)V
void android::icu::impl::coll::UTF16CollationIterator::setText(bool numeric,std::shared_ptr<java::lang::CharSequence> s,int p)
{
	
	//    .param p1, "numeric"    # Z
	//    .param p2, "s"    # Ljava/lang/CharSequence;
	//    .param p3, "p"    # I
	this->reset(numeric);
	this->seq = s;
	this->start = 0x0;
	this->pos = p;
	this->limit = s->length();
	return;

}


