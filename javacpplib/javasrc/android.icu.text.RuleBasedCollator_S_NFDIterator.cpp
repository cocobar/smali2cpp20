// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RuleBasedCollator$NFDIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "android.icu.text.RuleBasedCollator_S_NFDIterator.h"
#include "java.lang.Character.h"
#include "java.lang.String.h"

// .method constructor <init>()V
android::icu::text::RuleBasedCollator_S_NFDIterator::RuleBasedCollator_S_NFDIterator()
{
	
	// 029    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method final nextCodePoint()I
int android::icu::text::RuleBasedCollator_S_NFDIterator::nextCodePoint()
{
	
	int c;
	
	if ( this->index < 0 ) 
		goto label_cond_11;
	if ( this->index != this->decomp->length() )
		goto label_cond_16;
	this->index = -0x1;
label_cond_11:
	return this->nextRawCodePoint();
	// 069    .line 1477
label_cond_16:
	c = java::lang::Character::codePointAt(this->decomp, this->index);
	//    .local v0, "c":I
	this->index = (this->index +  java::lang::Character::charCount(c));
	return c;

}
// .method final nextDecomposedCodePoint(Landroid/icu/impl/Normalizer2Impl;I)I
int android::icu::text::RuleBasedCollator_S_NFDIterator::nextDecomposedCodePoint(std::shared_ptr<android::icu::impl::Normalizer2Impl> nfcImpl,int c)
{
	
	int cVar0;
	
	//    .param p1, "nfcImpl"    # Landroid/icu/impl/Normalizer2Impl;
	//    .param p2, "c"    # I
	if ( this->index < 0 ) 
		goto label_cond_6;
	return c;
	// 110    .line 1492
label_cond_6:
	this->decomp = nfcImpl->getDecomposition(c);
	if ( this->decomp )     
		goto label_cond_11;
	return c;
	// 125    .line 1494
label_cond_11:
	cVar0 = java::lang::Character::codePointAt(this->decomp, 0x0);
	this->index = java::lang::Character::charCount(cVar0);
	return cVar0;

}
// .method final reset()V
void android::icu::text::RuleBasedCollator_S_NFDIterator::reset()
{
	
	this->index = -0x1;
	return;

}


