// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\IterCollationIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.Trie2_32.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.CollationIterator.h"
#include "android.icu.impl.coll.IterCollationIterator.h"
#include "android.icu.text.UCharacterIterator.h"

// .method public constructor <init>(Landroid/icu/impl/coll/CollationData;ZLandroid/icu/text/UCharacterIterator;)V
android::icu::impl::coll::IterCollationIterator::IterCollationIterator(std::shared_ptr<android::icu::impl::coll::CollationData> d,bool numeric,std::shared_ptr<android::icu::text::UCharacterIterator> ui)
{
	
	//    .param p1, "d"    # Landroid/icu/impl/coll/CollationData;
	//    .param p2, "numeric"    # Z
	//    .param p3, "ui"    # Landroid/icu/text/UCharacterIterator;
	android::icu::impl::coll::CollationIterator::(d, numeric);
	this->iter = ui;
	return;

}
// .method protected backwardNumCodePoints(I)V
void android::icu::impl::coll::IterCollationIterator::backwardNumCodePoints(int num)
{
	
	//    .param p1, "num"    # I
	this->iter->moveCodePointIndex((0 - num));
	return;

}
// .method protected forwardNumCodePoints(I)V
void android::icu::impl::coll::IterCollationIterator::forwardNumCodePoints(int num)
{
	
	//    .param p1, "num"    # I
	this->iter->moveCodePointIndex(num);
	return;

}
// .method public getOffset()I
int android::icu::impl::coll::IterCollationIterator::getOffset()
{
	
	return this->iter->getIndex();

}
// .method protected handleGetTrailSurrogate()C
char android::icu::impl::coll::IterCollationIterator::handleGetTrailSurrogate()
{
	
	int trail;
	
	trail = this->iter->next();
	//    .local v0, "trail":I
	if ( android::icu::impl::coll::IterCollationIterator::isTrailSurrogate(trail) )     
		goto label_cond_13;
	if ( trail < 0 ) 
		goto label_cond_13;
	this->iter->previous();
label_cond_13:
	return (char)(trail);

}
// .method protected handleNextCE32()J
long long android::icu::impl::coll::IterCollationIterator::handleNextCE32()
{
	
	int c;
	
	c = this->iter->next();
	//    .local v0, "c":I
	if ( c >= 0 )
		goto label_cond_e;
	return -0xffffff40L;
	// 126    .line 58
label_cond_e:
	return this->makeCodePointAndCE32Pair(c, this->trie->getFromU16SingleLead((char)(c)));

}
// .method public nextCodePoint()I
int android::icu::impl::coll::IterCollationIterator::nextCodePoint()
{
	
	return this->iter->nextCodePoint();

}
// .method public previousCodePoint()I
int android::icu::impl::coll::IterCollationIterator::previousCodePoint()
{
	
	return this->iter->previousCodePoint();

}
// .method public resetToOffset(I)V
void android::icu::impl::coll::IterCollationIterator::resetToOffset(int newOffset)
{
	
	//    .param p1, "newOffset"    # I
	this->reset();
	this->iter->setIndex(newOffset);
	return;

}


