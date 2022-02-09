// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\SimpleFilteredSentenceBreakIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.SimpleFilteredSentenceBreakIterator.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.text.UCharacterIterator.h"
#include "android.icu.util.BytesTrie_S_Result.h"
#include "android.icu.util.CharsTrie.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.text.CharacterIterator.h"

// .method public constructor <init>(Landroid/icu/text/BreakIterator;Landroid/icu/util/CharsTrie;Landroid/icu/util/CharsTrie;)V
android::icu::impl::SimpleFilteredSentenceBreakIterator::SimpleFilteredSentenceBreakIterator(std::shared_ptr<android::icu::text::BreakIterator> adoptBreakIterator,std::shared_ptr<android::icu::util::CharsTrie> forwardsPartialTrie,std::shared_ptr<android::icu::util::CharsTrie> backwardsTrie)
{
	
	//    .param p1, "adoptBreakIterator"    # Landroid/icu/text/BreakIterator;
	//    .param p2, "forwardsPartialTrie"    # Landroid/icu/util/CharsTrie;
	//    .param p3, "backwardsTrie"    # Landroid/icu/util/CharsTrie;
	// 033    invoke-direct {p0}, Landroid/icu/text/BreakIterator;-><init>()V
	this->delegate = adoptBreakIterator;
	this->forwardsPartialTrie = forwardsPartialTrie;
	this->backwardsTrie = backwardsTrie;
	return;

}
// .method private final breakExceptionAt(I)Z
bool android::icu::impl::SimpleFilteredSentenceBreakIterator::breakExceptionAt(int n)
{
	
	int cVar0;
	bool cVar1;
	int uch;
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> r;
	int bestValue;
	int bestPosn;
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> rfwd;
	
	//    .param p1, "n"    # I
	cVar0 = -0x1;
	cVar1 = 0x1;
	//    .local v0, "bestPosn":I
	-0x1;
	//    .local v1, "bestValue":I
	this->text->setIndex(n);
	this->backwardsTrie->reset();
	//    .local v4, "uch":I
	if ( this->text->previousCodePoint() != 0x20 )
		goto label_cond_42;
label_goto_19:
	//    .local v2, "r":Landroid/icu/util/BytesTrie$Result;
label_cond_1b:
label_goto_1b:
	uch = this->text->previousCodePoint();
	if ( uch == cVar0 )
		goto label_cond_49;
	r = this->backwardsTrie->nextForCodePoint(uch);
	if ( !(r->hasNext()) )  
		goto label_cond_49;
	if ( !(r->hasValue()) )  
		goto label_cond_1b;
	this->text->getIndex();
	this->backwardsTrie->getValue();
	goto label_goto_1b;
	// 142    .line 80
	// 143    .end local v2    # "r":Landroid/icu/util/BytesTrie$Result;
label_cond_42:
	this->text->nextCodePoint();
	goto label_goto_19;
	// 153    .line 93
	// 154    .restart local v2    # "r":Landroid/icu/util/BytesTrie$Result;
label_cond_49:
	if ( !(android::icu::util::BytesTrie_S_Result::INTERMEDIATE_VALUE->matches()) )  
		goto label_cond_5b;
	bestValue = this->backwardsTrie->getValue();
	bestPosn = this->text->getIndex();
label_cond_5b:
	if ( -0x1 < 0 ) 
		goto label_cond_8e;
	if ( bestValue != 0x2 )
		goto label_cond_61;
	return cVar1;
	// 188    .line 101
label_cond_61:
	if ( bestValue != cVar1 )
		goto label_cond_8e;
	if ( !(this->forwardsPartialTrie) )  
		goto label_cond_8e;
	this->forwardsPartialTrie->reset();
	//    .local v3, "rfwd":Landroid/icu/util/BytesTrie$Result;
	this->text->setIndex(bestPosn);
label_cond_73:
	uch = this->text->nextCodePoint();
	if ( uch == cVar0 )
		goto label_cond_87;
	rfwd = this->forwardsPartialTrie->nextForCodePoint(uch);
	if ( rfwd->hasNext() )     
		goto label_cond_73;
label_cond_87:
	if ( !(android::icu::util::BytesTrie_S_Result::INTERMEDIATE_VALUE->matches()) )  
		goto label_cond_8e;
	return cVar1;
	// 245    .line 118
	// 246    .end local v3    # "rfwd":Landroid/icu/util/BytesTrie$Result;
label_cond_8e:
	return 0x0;

}
// .method private final internalNext(I)I
int android::icu::impl::SimpleFilteredSentenceBreakIterator::internalNext(int n)
{
	
	int cVar0;
	int n;
	
	//    .param p1, "n"    # I
	cVar0 = -0x1;
	if ( n == cVar0 )
		goto label_cond_7;
	if ( this->backwardsTrie )     
		goto label_cond_8;
label_cond_7:
	return n;
	// 270    .line 132
label_cond_8:
	this->resetState();
	//    .local v0, "textLen":I
label_goto_11:
	if ( n == cVar0 )
		goto label_cond_23;
	if ( n == this->text->getLength() )
		goto label_cond_23;
	if ( !(this->breakExceptionAt(n)) )  
		goto label_cond_22;
	n = this->delegate->next();
	goto label_goto_11;
	// 304    .line 145
label_cond_22:
	return n;
	// 308    .line 148
label_cond_23:
	return n;

}
// .method private final internalPrev(I)I
int android::icu::impl::SimpleFilteredSentenceBreakIterator::internalPrev(int n)
{
	
	int cVar0;
	int n;
	
	//    .param p1, "n"    # I
	cVar0 = -0x1;
	if ( !(n) )  
		goto label_cond_5;
	if ( n != cVar0 )
		goto label_cond_6;
label_cond_5:
	return n;
	// 329    .line 159
label_cond_6:
	if ( !(this->backwardsTrie) )  
		goto label_cond_5;
	this->resetState();
label_goto_d:
	if ( n == cVar0 )
		goto label_cond_1f;
	if ( !(n) )  
		goto label_cond_1f;
	if ( !(this->breakExceptionAt(n)) )  
		goto label_cond_1e;
	n = this->delegate->previous();
	goto label_goto_d;
	// 360    .line 173
label_cond_1e:
	return n;
	// 364    .line 176
label_cond_1f:
	return n;

}
// .method private final resetState()V
void android::icu::impl::SimpleFilteredSentenceBreakIterator::resetState()
{
	
	std::shared_ptr<java::text::CharacterIterator> cVar0;
	
	cVar0 = this->delegate->getText()->clone();
	cVar0->checkCast("java::text::CharacterIterator");
	this->text = android::icu::text::UCharacterIterator::getInstance(cVar0);
	return;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::SimpleFilteredSentenceBreakIterator::clone()
{
	
	std::shared_ptr<android::icu::impl::SimpleFilteredSentenceBreakIterator> other;
	
	other = this->clone();
	other->checkCast("android::icu::impl::SimpleFilteredSentenceBreakIterator");
	//    .local v0, "other":Landroid/icu/impl/SimpleFilteredSentenceBreakIterator;
	return other;

}
// .method public current()I
int android::icu::impl::SimpleFilteredSentenceBreakIterator::current()
{
	
	return this->delegate->current();

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::impl::SimpleFilteredSentenceBreakIterator::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar1;
	std::shared_ptr<android::icu::impl::SimpleFilteredSentenceBreakIterator> other;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( obj )     
		goto label_cond_4;
	return cVar1;
	// 441    .line 183
label_cond_4:
	if ( this != obj )
		goto label_cond_8;
	return 0x1;
	// 450    .line 185
label_cond_8:
	if ( this->getClass() == obj->getClass() )
		goto label_cond_13;
	return cVar1;
label_cond_13:
	other = obj;
	other->checkCast("android::icu::impl::SimpleFilteredSentenceBreakIterator");
	//    .local v0, "other":Landroid/icu/impl/SimpleFilteredSentenceBreakIterator;
	if ( !(this->delegate->equals(other->delegate)) )  
		goto label_cond_3c;
	if ( !(this->text->equals(other->text)) )  
		goto label_cond_3c;
	if ( !(this->backwardsTrie->equals(other->backwardsTrie)) )  
		goto label_cond_3c;
	cVar1 = this->forwardsPartialTrie->equals(other->forwardsPartialTrie);
label_cond_3c:
	return cVar1;

}
// .method public first()I
int android::icu::impl::SimpleFilteredSentenceBreakIterator::first()
{
	
	return this->delegate->first();

}
// .method public following(I)I
int android::icu::impl::SimpleFilteredSentenceBreakIterator::following(int offset)
{
	
	//    .param p1, "offset"    # I
	return this->internalNext(this->delegate->following(offset));

}
// .method public getText()Ljava/text/CharacterIterator;
std::shared_ptr<java::text::CharacterIterator> android::icu::impl::SimpleFilteredSentenceBreakIterator::getText()
{
	
	return this->delegate->getText();

}
// .method public hashCode()I
int android::icu::impl::SimpleFilteredSentenceBreakIterator::hashCode()
{
	
	return ((( this->forwardsPartialTrie->hashCode() * 0x27) +  ( this->backwardsTrie->hashCode() * 0xb)) +  this->delegate->hashCode());

}
// .method public isBoundary(I)Z
bool android::icu::impl::SimpleFilteredSentenceBreakIterator::isBoundary(int offset)
{
	
	//    .param p1, "offset"    # I
	if ( this->delegate->isBoundary(offset) )     
		goto label_cond_a;
	return 0x0;
	// 617    .line 232
label_cond_a:
	if ( this->backwardsTrie )     
		goto label_cond_10;
	return 0x1;
	// 628    .line 236
label_cond_10:
	this->resetState();
	return ( this->breakExceptionAt(offset) ^ 0x1);

}
// .method public last()I
int android::icu::impl::SimpleFilteredSentenceBreakIterator::last()
{
	
	return this->delegate->last();

}
// .method public next()I
int android::icu::impl::SimpleFilteredSentenceBreakIterator::next()
{
	
	return this->internalNext(this->delegate->next());

}
// .method public next(I)I
int android::icu::impl::SimpleFilteredSentenceBreakIterator::next(int n)
{
	
	//    .param p1, "n"    # I
	return this->internalNext(this->delegate->next(n));

}
// .method public preceding(I)I
int android::icu::impl::SimpleFilteredSentenceBreakIterator::preceding(int offset)
{
	
	//    .param p1, "offset"    # I
	return this->internalPrev(this->delegate->preceding(offset));

}
// .method public previous()I
int android::icu::impl::SimpleFilteredSentenceBreakIterator::previous()
{
	
	return this->internalPrev(this->delegate->previous());

}
// .method public setText(Ljava/text/CharacterIterator;)V
void android::icu::impl::SimpleFilteredSentenceBreakIterator::setText(std::shared_ptr<java::text::CharacterIterator> newText)
{
	
	//    .param p1, "newText"    # Ljava/text/CharacterIterator;
	this->delegate->setText(newText);
	return;

}


