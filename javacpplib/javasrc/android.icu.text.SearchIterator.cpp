// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\SearchIterator.smali
#include "java2ctype.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.text.SearchIterator_S_ElementComparisonType.h"
#include "android.icu.text.SearchIterator_S_Search.h"
#include "android.icu.text.SearchIterator.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.text.CharacterIterator.h"

static android::icu::text::SearchIterator::DONE = -0x1;
// .method protected constructor <init>(Ljava/text/CharacterIterator;Landroid/icu/text/BreakIterator;)V
android::icu::text::SearchIterator::SearchIterator(std::shared_ptr<java::text::CharacterIterator> target,std::shared_ptr<android::icu::text::BreakIterator> breaker)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<android::icu::text::SearchIterator_S_Search> cVar2;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	std::shared_ptr<java::text::CharacterIterator> cVar4;
	
	//    .param p1, "target"    # Ljava/text/CharacterIterator;
	//    .param p2, "breaker"    # Landroid/icu/text/BreakIterator;
	cVar0 = 0x1;
	cVar1 = 0x0;
	// 041    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar2 = std::make_shared<android::icu::text::SearchIterator_S_Search>(this);
	this->search_ = cVar2;
	if ( !(target) )  
		goto label_cond_19;
	if ( (target->getEndIndex() -  target->getBeginIndex()) )     
		goto label_cond_22;
label_cond_19:
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal argument target.  Argument can not be null or of length 0")));
	// throw
	throw cVar3;
	// 078    .line 617
label_cond_22:
	this->search_->setTarget(target);
	this->search_->setBreakIter(breaker);
	if ( !(this->search_->breakIter()) )  
		goto label_cond_43;
	cVar4 = target->clone();
	cVar4->checkCast("java::text::CharacterIterator");
	this->search_->breakIter()->setText(cVar4);
label_cond_43:
	this->search_->isOverlap_ = cVar1;
	this->search_->isCanonicalMatch_ = cVar1;
	this->search_->elementComparisonType_ = android::icu::text::SearchIterator_S_ElementComparisonType::STANDARD_ELEMENT_COMPARISON;
	this->search_->isForwardSearching_ = cVar0;
	this->search_->reset_ = cVar0;
	this->search_->matchedIndex_ = -0x1;
	this->search_->setMatchedLength(cVar1);
	return;

}
// .method public final first()I
int android::icu::text::SearchIterator::first()
{
	
	int startIdx;
	
	startIdx = this->search_->beginIndex();
	//    .local v0, "startIdx":I
	this->setIndex(startIdx);
	return this->handleNext(startIdx);

}
// .method public final following(I)I
int android::icu::text::SearchIterator::following(int position)
{
	
	//    .param p1, "position"    # I
	this->setIndex(position);
	return this->handleNext(position);

}
// .method public getBreakIterator()Landroid/icu/text/BreakIterator;
std::shared_ptr<android::icu::text::BreakIterator> android::icu::text::SearchIterator::getBreakIterator()
{
	
	return this->search_->breakIter();

}
// .method public getElementComparisonType()Landroid/icu/text/SearchIterator$ElementComparisonType;
std::shared_ptr<android::icu::text::SearchIterator_S_ElementComparisonType> android::icu::text::SearchIterator::getElementComparisonType()
{
	
	return this->search_->elementComparisonType_;

}
// .method public getMatchLength()I
int android::icu::text::SearchIterator::getMatchLength()
{
	
	return this->search_->matchedLength();

}
// .method public getMatchStart()I
int android::icu::text::SearchIterator::getMatchStart()
{
	
	return this->search_->matchedIndex_;

}
// .method public getMatchedText()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::SearchIterator::getMatchedText()
{
	
	std::shared_ptr<java::lang::StringBuilder> result;
	std::shared_ptr<java::text::CharacterIterator> it;
	
	if ( this->search_->matchedLength() <= 0 )
		goto label_cond_49;
	//    .local v1, "limit":I
	result = std::make_shared<java::lang::StringBuilder>(this->search_->matchedLength());
	//    .local v2, "result":Ljava/lang/StringBuilder;
	it = this->search_->text();
	//    .local v0, "it":Ljava/text/CharacterIterator;
	it->setIndex(this->search_->matchedIndex_);
label_goto_2c:
	if ( it->getIndex() >= (this->search_->matchedIndex_ + this->search_->matchedLength()) )
		goto label_cond_3d;
	result->append(it->current());
	it->next();
	goto label_goto_2c;
	// 327    .line 364
label_cond_3d:
	it->setIndex(this->search_->matchedIndex_);
	return result->toString();
	// 342    .line 367
	// 343    .end local v0    # "it":Ljava/text/CharacterIterator;
	// 344    .end local v1    # "limit":I
	// 345    .end local v2    # "result":Ljava/lang/StringBuilder;
label_cond_49:
	return 0x0;

}
// .method public getTarget()Ljava/text/CharacterIterator;
std::shared_ptr<java::text::CharacterIterator> android::icu::text::SearchIterator::getTarget()
{
	
	return this->search_->text();

}
// .method public isOverlapping()Z
bool android::icu::text::SearchIterator::isOverlapping()
{
	
	return this->search_->isOverlap_;

}
// .method public final last()I
int android::icu::text::SearchIterator::last()
{
	
	int endIdx;
	
	endIdx = this->search_->endIndex();
	//    .local v0, "endIdx":I
	this->setIndex(endIdx);
	return this->handlePrevious(endIdx);

}
// .method public next()I
int android::icu::text::SearchIterator::next()
{
	
	int cVar0;
	int index;
	int matchindex;
	int matchlength;
	int endIdx;
	
	cVar0 = -0x1;
	index = this->getIndex();
	//    .local v1, "index":I
	matchindex = this->search_->matchedIndex_;
	//    .local v2, "matchindex":I
	matchlength = this->search_->matchedLength();
	//    .local v3, "matchlength":I
	this->search_->reset_ = 0x0;
	if ( !(this->search_->isForwardSearching_) )  
		goto label_cond_3d;
	endIdx = this->search_->endIndex();
	//    .local v0, "endIdx":I
	if ( index == endIdx )
		goto label_cond_24;
	if ( matchindex != endIdx )
		goto label_cond_28;
label_cond_24:
	this->setMatchNotFound();
	return cVar0;
	// 467    .line 393
label_cond_28:
	if ( matchindex == cVar0 )
		goto label_cond_2e;
	if ( (matchindex + matchlength) >= endIdx )
		goto label_cond_24;
	//    .end local v0    # "endIdx":I
label_cond_2e:
	if ( matchlength <= 0 )
		goto label_cond_38;
	if ( !(this->search_->isOverlap_) )  
		goto label_cond_49;
	index = ( index + 0x1);
label_cond_38:
label_goto_38:
	return this->handleNext(index);
	// 500    .line 404
label_cond_3d:
	this->search_->isForwardSearching_ = 0x1;
	if ( this->search_->matchedIndex_ == cVar0 )
		goto label_cond_2e;
	return matchindex;
	// 518    .line 417
label_cond_49:
	index = (index +  matchlength);
	goto label_goto_38;

}
// .method public final preceding(I)I
int android::icu::text::SearchIterator::preceding(int position)
{
	
	//    .param p1, "position"    # I
	this->setIndex(position);
	return this->handlePrevious(position);

}
// .method public previous()I
int android::icu::text::SearchIterator::previous()
{
	
	bool cVar0;
	int cVar1;
	int index;
	int matchindex;
	int startIdx;
	
	cVar0 = 0x0;
	cVar1 = -0x1;
	if ( !(this->search_->reset_) )  
		goto label_cond_2a;
	index = this->search_->endIndex();
	//    .local v0, "index":I
	this->search_->isForwardSearching_ = cVar0;
	this->search_->reset_ = cVar0;
	this->setIndex(index);
label_goto_19:
	matchindex = this->search_->matchedIndex_;
	//    .local v1, "matchindex":I
	if ( !(this->search_->isForwardSearching_) )  
		goto label_cond_2f;
	this->search_->isForwardSearching_ = cVar0;
	if ( matchindex == cVar1 )
		goto label_cond_3d;
	return matchindex;
	// 602    .line 444
	// 603    .end local v0    # "index":I
	// 604    .end local v1    # "matchindex":I
label_cond_2a:
	//    .restart local v0    # "index":I
	goto label_goto_19;
	// 613    .line 459
	// 614    .restart local v1    # "matchindex":I
label_cond_2f:
	startIdx = this->search_->beginIndex();
	//    .local v2, "startIdx":I
	if ( index == startIdx )
		goto label_cond_39;
	if ( matchindex != startIdx )
		goto label_cond_3d;
label_cond_39:
	this->setMatchNotFound();
	return cVar1;
	// 635    .line 467
	// 636    .end local v2    # "startIdx":I
label_cond_3d:
	if ( matchindex == cVar1 )
		goto label_cond_53;
	if ( !(this->search_->isOverlap_) )  
		goto label_cond_4e;
label_cond_4e:
	return this->handlePrevious(matchindex);
	// 666    .line 475
label_cond_53:
	return this->handlePrevious(index);

}
// .method public reset()V
void android::icu::text::SearchIterator::reset()
{
	
	bool cVar0;
	bool cVar1;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	this->setMatchNotFound();
	this->setIndex(this->search_->beginIndex());
	this->search_->isOverlap_ = cVar1;
	this->search_->isCanonicalMatch_ = cVar1;
	this->search_->elementComparisonType_ = android::icu::text::SearchIterator_S_ElementComparisonType::STANDARD_ELEMENT_COMPARISON;
	this->search_->isForwardSearching_ = cVar0;
	this->search_->reset_ = cVar0;
	return;

}
// .method public setBreakIterator(Landroid/icu/text/BreakIterator;)V
void android::icu::text::SearchIterator::setBreakIterator(std::shared_ptr<android::icu::text::BreakIterator> breakiter)
{
	
	std::shared_ptr<java::text::CharacterIterator> cVar0;
	
	//    .param p1, "breakiter"    # Landroid/icu/text/BreakIterator;
	this->search_->setBreakIter(breakiter);
	if ( !(this->search_->breakIter()) )  
		goto label_cond_2a;
	if ( !(this->search_->text()) )  
		goto label_cond_2a;
	cVar0 = this->search_->text()->clone();
	cVar0->checkCast("java::text::CharacterIterator");
	this->search_->breakIter()->setText(cVar0);
label_cond_2a:
	return;

}
// .method public setElementComparisonType(Landroid/icu/text/SearchIterator$ElementComparisonType;)V
void android::icu::text::SearchIterator::setElementComparisonType(std::shared_ptr<android::icu::text::SearchIterator_S_ElementComparisonType> type)
{
	
	//    .param p1, "type"    # Landroid/icu/text/SearchIterator$ElementComparisonType;
	this->search_->elementComparisonType_ = type;
	return;

}
// .method public setIndex(I)V
void android::icu::text::SearchIterator::setIndex(int position)
{
	
	bool cVar0;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "position"    # I
	cVar0 = 0x0;
	if ( position <  this->search_->beginIndex() )
		goto label_cond_11;
	if ( position <= this->search_->endIndex() )
		goto label_cond_42;
label_cond_11:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::IndexOutOfBoundsException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("setIndex(int) expected position to be between ")))->append(this->search_->beginIndex())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" and ")))->append(this->search_->endIndex())->toString());
	// throw
	throw cVar1;
	// 875    .line 190
label_cond_42:
	this->search_->reset_ = cVar0;
	this->search_->setMatchedLength(cVar0);
	this->search_->matchedIndex_ = -0x1;
	return;

}
// .method protected setMatchLength(I)V
void android::icu::text::SearchIterator::setMatchLength(int length)
{
	
	//    .param p1, "length"    # I
	this->search_->setMatchedLength(length);
	return;

}
// .method protected setMatchNotFound()V
void android::icu::text::SearchIterator::setMatchNotFound()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 914    .end annotation
	this->search_->matchedIndex_ = -0x1;
	this->search_->setMatchedLength(0x0);
	return;

}
// .method public setOverlapping(Z)V
void android::icu::text::SearchIterator::setOverlapping(bool allowOverlap)
{
	
	//    .param p1, "allowOverlap"    # Z
	this->search_->isOverlap_ = allowOverlap;
	return;

}
// .method public setTarget(Ljava/text/CharacterIterator;)V
void android::icu::text::SearchIterator::setTarget(std::shared_ptr<java::text::CharacterIterator> text)
{
	
	bool cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::text::CharacterIterator> cVar2;
	std::shared_ptr<java::text::CharacterIterator> cVar3;
	
	//    .param p1, "text"    # Ljava/text/CharacterIterator;
	cVar0 = 0x1;
	if ( !(text) )  
		goto label_cond_d;
	if ( text->getEndIndex() != text->getIndex() )
		goto label_cond_16;
label_cond_d:
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal null or empty text")));
	// throw
	throw cVar1;
	// 979    .line 248
label_cond_16:
	text->setIndex(text->getBeginIndex());
	this->search_->setTarget(text);
	this->search_->matchedIndex_ = -0x1;
	this->search_->setMatchedLength(0x0);
	this->search_->reset_ = cVar0;
	this->search_->isForwardSearching_ = cVar0;
	if ( !(this->search_->breakIter()) )  
		goto label_cond_4c;
	cVar2 = text->clone();
	cVar2->checkCast("java::text::CharacterIterator");
	this->search_->breakIter()->setText(cVar2);
label_cond_4c:
	if ( !(this->search_->internalBreakIter_) )  
		goto label_cond_5f;
	cVar3 = text->clone();
	cVar3->checkCast("java::text::CharacterIterator");
	this->search_->internalBreakIter_->setText(cVar3);
label_cond_5f:
	return;

}


