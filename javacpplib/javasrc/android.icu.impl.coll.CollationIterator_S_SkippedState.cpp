// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationIterator$SkippedState.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.CollationIterator_S_SkippedState.h"
#include "android.icu.util.CharsTrie_S_State.h"
#include "android.icu.util.CharsTrie.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Character.h"
#include "java.lang.StringBuilder.h"

static android::icu::impl::coll::CollationIterator_S_SkippedState::_assertionsDisabled;
// .method static constructor <clinit>()V
void android::icu::impl::coll::CollationIterator_S_SkippedState::static_cinit()
{
	
	android::icu::impl::coll::CollationIterator_S_SkippedState::_assertionsDisabled = ( android::icu::impl::coll::CollationIterator_S_SkippedState()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method constructor <init>()V
android::icu::impl::coll::CollationIterator_S_SkippedState::CollationIterator_S_SkippedState()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<android::icu::util::CharsTrie_S_State> cVar2;
	
	// 057    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	this->oldBuffer = cVar0;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	this->newBuffer = cVar1;
	cVar2 = std::make_shared<android::icu::util::CharsTrie_S_State>();
	this->state = cVar2;
	return;

}
// .method backwardNumCodePoints(I)I
int android::icu::impl::coll::CollationIterator_S_SkippedState::backwardNumCodePoints(int n)
{
	
	int length;
	int beyond;
	
	//    .param p1, "n"    # I
	length = this->oldBuffer->length();
	//    .local v1, "length":I
	beyond = (this->pos - length);
	//    .local v0, "beyond":I
	if ( beyond <= 0 )
		goto label_cond_20;
	if ( beyond <  n )
		goto label_cond_15;
	this->pos = (this->pos -  n);
	return n;
	// 123    .line 125
label_cond_15:
	this->pos = this->oldBuffer->offsetByCodePoints(length, (beyond - n));
	return beyond;
	// 138    .line 130
label_cond_20:
	this->pos = this->oldBuffer->offsetByCodePoints(this->pos, (0 - n));
	return 0x0;

}
// .method clear()V
void android::icu::impl::coll::CollationIterator_S_SkippedState::clear()
{
	
	int cVar0;
	
	cVar0 = 0x0;
	this->oldBuffer->setLength(cVar0);
	this->pos = cVar0;
	return;

}
// .method hasNext()Z
bool android::icu::impl::coll::CollationIterator_S_SkippedState::hasNext()
{
	
	bool cVar0;
	
	if ( this->pos >= this->oldBuffer->length() )
		goto label_cond_c;
	cVar0 = 0x1;
label_goto_b:
	return cVar0;
label_cond_c:
	cVar0 = 0x0;
	goto label_goto_b;

}
// .method incBeyond()V
void android::icu::impl::coll::CollationIterator_S_SkippedState::incBeyond()
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	if ( android::icu::impl::coll::CollationIterator_S_SkippedState::_assertionsDisabled )     
		goto label_cond_10;
	if ( !(this->hasNext()) )  
		goto label_cond_10;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 221    .line 109
label_cond_10:
	this->pos = ( this->pos + 0x1);
	return;

}
// .method isEmpty()Z
bool android::icu::impl::coll::CollationIterator_S_SkippedState::isEmpty()
{
	
	bool cVar1;
	
	cVar1 = 0x0;
	if ( this->oldBuffer->length() )     
		goto label_cond_a;
	cVar1 = 0x1;
label_cond_a:
	return cVar1;

}
// .method next()I
int android::icu::impl::coll::CollationIterator_S_SkippedState::next()
{
	
	int c;
	
	c = this->oldBuffer->codePointAt(this->pos);
	//    .local v0, "c":I
	this->pos = (this->pos +  java::lang::Character::charCount(c));
	return c;

}
// .method recordMatch()V
void android::icu::impl::coll::CollationIterator_S_SkippedState::recordMatch()
{
	
	this->skipLengthAtMatch = this->newBuffer->length();
	return;

}
// .method replaceMatch()V
void android::icu::impl::coll::CollationIterator_S_SkippedState::replaceMatch()
{
	
	int cVar0;
	int oldLength;
	
	cVar0 = 0x0;
	oldLength = this->oldBuffer->length();
	//    .local v0, "oldLength":I
	if ( this->pos <= oldLength )
		goto label_cond_d;
	this->pos = oldLength;
label_cond_d:
	this->oldBuffer->delete(cVar0, this->pos)->insert(cVar0, this->newBuffer, cVar0, this->skipLengthAtMatch);
	this->pos = cVar0;
	return;

}
// .method resetToTrieState(Landroid/icu/util/CharsTrie;)V
void android::icu::impl::coll::CollationIterator_S_SkippedState::resetToTrieState(std::shared_ptr<android::icu::util::CharsTrie> trie)
{
	
	//    .param p1, "trie"    # Landroid/icu/util/CharsTrie;
	trie->resetToState(this->state);
	return;

}
// .method saveTrieState(Landroid/icu/util/CharsTrie;)V
void android::icu::impl::coll::CollationIterator_S_SkippedState::saveTrieState(std::shared_ptr<android::icu::util::CharsTrie> trie)
{
	
	//    .param p1, "trie"    # Landroid/icu/util/CharsTrie;
	trie->saveState(this->state);
	return;

}
// .method setFirstSkipped(I)V
void android::icu::impl::coll::CollationIterator_S_SkippedState::setFirstSkipped(int c)
{
	
	int cVar0;
	
	//    .param p1, "c"    # I
	cVar0 = 0x0;
	this->skipLengthAtMatch = cVar0;
	this->newBuffer->setLength(cVar0);
	this->newBuffer->appendCodePoint(c);
	return;

}
// .method skip(I)V
void android::icu::impl::coll::CollationIterator_S_SkippedState::skip(int c)
{
	
	//    .param p1, "c"    # I
	this->newBuffer->appendCodePoint(c);
	return;

}


