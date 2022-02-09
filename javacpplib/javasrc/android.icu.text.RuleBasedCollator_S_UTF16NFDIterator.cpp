// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RuleBasedCollator$UTF16NFDIterator.smali
#include "java2ctype.h"
#include "android.icu.text.RuleBasedCollator_S_UTF16NFDIterator.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"

// .method constructor <init>()V
android::icu::text::RuleBasedCollator_S_UTF16NFDIterator::RuleBasedCollator_S_UTF16NFDIterator()
{
	
	// 029    invoke-direct {p0}, Landroid/icu/text/RuleBasedCollator$NFDIterator;-><init>()V
	return;

}
// .method protected nextRawCodePoint()I
int android::icu::text::RuleBasedCollator_S_UTF16NFDIterator::nextRawCodePoint()
{
	
	int c;
	
	if ( this->pos != this->s->length() )
		goto label_cond_c;
	return -0x1;
	// 055    .line 1520
label_cond_c:
	c = java::lang::Character::codePointAt(this->s, this->pos);
	//    .local v0, "c":I
	this->pos = (this->pos +  java::lang::Character::charCount(c));
	return c;

}
// .method setText(Ljava/lang/CharSequence;I)V
void android::icu::text::RuleBasedCollator_S_UTF16NFDIterator::setText(std::shared_ptr<java::lang::CharSequence> seq,int start)
{
	
	//    .param p1, "seq"    # Ljava/lang/CharSequence;
	//    .param p2, "start"    # I
	this->reset();
	this->s = seq;
	this->pos = start;
	return;

}


