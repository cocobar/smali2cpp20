// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\TrieIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.Trie_S_DataManipulate.h"
#include "android.icu.impl.Trie.h"
#include "android.icu.impl.TrieIterator.h"
#include "android.icu.text.UTF16.h"
#include "android.icu.util.RangeValueIterator_S_Element.h"
#include "java.lang.Character.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.String.h"

static android::icu::impl::TrieIterator::BMP_INDEX_LENGTH_ = 0x800;
static android::icu::impl::TrieIterator::DATA_BLOCK_LENGTH_ = 0x20;
static android::icu::impl::TrieIterator::LEAD_SURROGATE_MIN_VALUE_ = 0xd800;
static android::icu::impl::TrieIterator::TRAIL_SURROGATE_COUNT_ = 0x400;
static android::icu::impl::TrieIterator::TRAIL_SURROGATE_INDEX_BLOCK_LENGTH_ = 0x20;
static android::icu::impl::TrieIterator::TRAIL_SURROGATE_MIN_VALUE_ = 0xdc00;
// .method public constructor <init>(Landroid/icu/impl/Trie;)V
android::icu::impl::TrieIterator::TrieIterator(std::shared_ptr<android::icu::impl::Trie> trie)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "trie"    # Landroid/icu/impl/Trie;
	// 050    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( trie )     
		goto label_cond_e;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Argument trie cannot be null")));
	// throw
	throw cVar0;
	// 066    .line 106
label_cond_e:
	this->m_trie_ = trie;
	this->m_initialValue_ = this->extract(this->m_trie_->getInitialValue());
	this->reset();
	return;

}
// .method private final calculateNextBMPElement(Landroid/icu/util/RangeValueIterator$Element;)Z
bool android::icu::impl::TrieIterator::calculateNextBMPElement(std::shared_ptr<android::icu::util::RangeValueIterator_S_Element> element)
{
	
	bool cVar0;
	int cVar1;
	int currentValue;
	
	//    .param p1, "element"    # Landroid/icu/util/RangeValueIterator$Element;
	cVar0 = 0x1;
	cVar1 = 0x0;
	currentValue = this->m_nextValue_;
	//    .local v0, "currentValue":I
	this->m_currentCodepoint_ = this->m_nextCodepoint_;
	this->m_nextCodepoint_ = ( this->m_nextCodepoint_ + 0x1);
	this->m_nextBlockIndex_ = ( this->m_nextBlockIndex_ + 0x1);
	if ( this->checkBlockDetail(currentValue) )     
		goto label_cond_22;
	this->setResult(element, this->m_currentCodepoint_, this->m_nextCodepoint_, currentValue);
	return cVar0;
	// 139    .line 215
label_cond_22:
	if ( this->m_nextCodepoint_ >= 0x10000 )
		goto label_cond_58;
	if ( this->m_nextCodepoint_ != 0xd800 )
		goto label_cond_43;
	this->m_nextIndex_ = 0x800;
label_goto_33:
	this->m_nextBlockIndex_ = cVar1;
	if ( this->checkBlock(currentValue) )     
		goto label_cond_22;
	this->setResult(element, this->m_currentCodepoint_, this->m_nextCodepoint_, currentValue);
	return cVar0;
	// 180    .line 224
label_cond_43:
	if ( this->m_nextCodepoint_ != 0xdc00 )
		goto label_cond_51;
	this->m_nextIndex_ = _shri(this->m_nextCodepoint_,0x5);
	goto label_goto_33;
	// 197    .line 228
label_cond_51:
	this->m_nextIndex_ = ( this->m_nextIndex_ + 0x1);
	goto label_goto_33;
	// 207    .line 238
label_cond_58:
	this->m_nextCodepoint_ = ( this->m_nextCodepoint_ + -0x1);
	this->m_nextBlockIndex_ = ( this->m_nextBlockIndex_ + -0x1);
	return cVar1;

}
// .method private final calculateNextSupplementaryElement(Landroid/icu/util/RangeValueIterator$Element;)V
void android::icu::impl::TrieIterator::calculateNextSupplementaryElement(std::shared_ptr<android::icu::util::RangeValueIterator_S_Element> element)
{
	
	char cVar0;
	int cVar1;
	int currentValue;
	int nextLead;
	int leadBlock;
	std::shared_ptr<java::lang::NullPointerException> cVar2;
	
	//    .param p1, "element"    # Landroid/icu/util/RangeValueIterator$Element;
	cVar0 = 0xdc00;
	cVar1 = 0x0;
	currentValue = this->m_nextValue_;
	//    .local v0, "currentValue":I
	this->m_nextCodepoint_ = ( this->m_nextCodepoint_ + 0x1);
	this->m_nextBlockIndex_ = ( this->m_nextBlockIndex_ + 0x1);
	if ( android::icu::text::UTF16::getTrailSurrogate(this->m_nextCodepoint_) == cVar0 )
		goto label_cond_52;
	if ( this->checkNullNextTrailIndex() )     
		goto label_cond_34;
	if ( !(( this->checkBlockDetail(currentValue) ^ 0x1)) )  
		goto label_cond_34;
	this->setResult(element, this->m_currentCodepoint_, this->m_nextCodepoint_, currentValue);
	this->m_currentCodepoint_ = this->m_nextCodepoint_;
	return;
	// 292    .line 277
label_cond_34:
	this->m_nextIndex_ = ( this->m_nextIndex_ + 0x1);
	this->m_nextTrailIndexOffset_ = ( this->m_nextTrailIndexOffset_ + 0x1);
	if ( this->checkTrailBlock(currentValue) )     
		goto label_cond_52;
	this->setResult(element, this->m_currentCodepoint_, this->m_nextCodepoint_, currentValue);
	this->m_currentCodepoint_ = this->m_nextCodepoint_;
	return;
	// 329    .line 286
label_cond_52:
	nextLead = android::icu::text::UTF16::getLeadSurrogate(this->m_nextCodepoint_);
	//    .local v2, "nextLead":I
label_goto_58:
	if ( nextLead >= cVar0 )
		goto label_cond_eb;
	leadBlock = ( this->m_trie_->m_index_[_shri(nextLead,0x5)] << 0x2);
	//    .local v1, "leadBlock":I
	if ( leadBlock != this->m_trie_->m_dataOffset_ )
		goto label_cond_8c;
	if ( currentValue == this->m_initialValue_ )
		goto label_cond_82;
	this->m_nextValue_ = this->m_initialValue_;
	this->m_nextBlock_ = leadBlock;
	this->m_nextBlockIndex_ = cVar1;
	this->setResult(element, this->m_currentCodepoint_, this->m_nextCodepoint_, currentValue);
	this->m_currentCodepoint_ = this->m_nextCodepoint_;
	return;
	// 392    .line 305
label_cond_82:
	nextLead = ( nextLead + 0x20);
	this->m_nextCodepoint_ = java::lang::Character::toCodePoint((char)(nextLead), cVar0);
	goto label_goto_58;
	// 407    .line 314
label_cond_8c:
	if ( this->m_trie_->m_dataManipulate_ )     
		goto label_cond_9b;
	cVar2 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("The field DataManipulate in this Trie is null")));
	// throw
	throw cVar2;
	// 426    .line 319
label_cond_9b:
	this->m_nextIndex_ = this->m_trie_->m_dataManipulate_->getFoldingOffset(this->m_trie_->getValue((( nextLead & 0x1f) +  leadBlock)));
	if ( this->m_nextIndex_ > 0 ) 
		goto label_cond_d7;
	if ( currentValue == this->m_initialValue_ )
		goto label_cond_ce;
	this->m_nextValue_ = this->m_initialValue_;
	this->m_nextBlock_ = this->m_trie_->m_dataOffset_;
	this->m_nextBlockIndex_ = cVar1;
	this->setResult(element, this->m_currentCodepoint_, this->m_nextCodepoint_, currentValue);
	this->m_currentCodepoint_ = this->m_nextCodepoint_;
	return;
	// 492    .line 333
label_cond_ce:
	this->m_nextCodepoint_ = ( this->m_nextCodepoint_ + 0x400);
label_cond_d4:
	nextLead = ( nextLead + 0x1);
	goto label_goto_58;
	// 506    .line 335
label_cond_d7:
	this->m_nextTrailIndexOffset_ = cVar1;
	if ( this->checkTrailBlock(currentValue) )     
		goto label_cond_d4;
	this->setResult(element, this->m_currentCodepoint_, this->m_nextCodepoint_, currentValue);
	this->m_currentCodepoint_ = this->m_nextCodepoint_;
	return;
	// 532    .line 347
	// 533    .end local v1    # "leadBlock":I
label_cond_eb:
	this->setResult(element, this->m_currentCodepoint_, 0x110000, currentValue);
	return;

}
// .method private final checkBlock(I)Z
bool android::icu::impl::TrieIterator::checkBlock(int currentValue)
{
	
	int cVar0;
	
	//    .param p1, "currentValue"    # I
	cVar0 = 0x0;
	//    .local v0, "currentBlock":I
	this->m_nextBlock_ = ( this->m_trie_->m_index_[this->m_nextIndex_] << 0x2);
	if ( this->m_nextBlock_ != this->m_nextBlock_ )
		goto label_cond_24;
	if ( (this->m_nextCodepoint_ -  this->m_currentCodepoint_) <  0x20 )
		goto label_cond_24;
	this->m_nextCodepoint_ = ( this->m_nextCodepoint_ + 0x20);
label_cond_22:
label_goto_22:
	return 0x1;
	// 599    .line 400
label_cond_24:
	if ( this->m_nextBlock_ != this->m_trie_->m_dataOffset_ )
		goto label_cond_3e;
	if ( currentValue == this->m_initialValue_ )
		goto label_cond_37;
	this->m_nextValue_ = this->m_initialValue_;
	this->m_nextBlockIndex_ = cVar0;
	return cVar0;
	// 625    .line 407
label_cond_37:
	this->m_nextCodepoint_ = ( this->m_nextCodepoint_ + 0x20);
	goto label_goto_22;
	// 635    .line 410
label_cond_3e:
	if ( this->checkBlockDetail(currentValue) )     
		goto label_cond_22;
	return cVar0;

}
// .method private final checkBlockDetail(I)Z
bool android::icu::impl::TrieIterator::checkBlockDetail(int currentValue)
{
	
	//    .param p1, "currentValue"    # I
label_goto_0:
	if ( this->m_nextBlockIndex_ >= 0x20 )
		goto label_cond_2a;
	this->m_nextValue_ = this->extract(this->m_trie_->getValue((this->m_nextBlock_ +  this->m_nextBlockIndex_)));
	if ( this->m_nextValue_ == currentValue )
		goto label_cond_1d;
	return 0x0;
	// 691    .line 371
label_cond_1d:
	this->m_nextBlockIndex_ = ( this->m_nextBlockIndex_ + 0x1);
	this->m_nextCodepoint_ = ( this->m_nextCodepoint_ + 0x1);
	goto label_goto_0;
	// 708    .line 374
label_cond_2a:
	return 0x1;

}
// .method private final checkNullNextTrailIndex()Z
bool android::icu::impl::TrieIterator::checkNullNextTrailIndex()
{
	
	int nextLead;
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	if ( this->m_nextIndex_ > 0 ) 
		goto label_cond_49;
	this->m_nextCodepoint_ = ( this->m_nextCodepoint_ + 0x3ff);
	nextLead = android::icu::text::UTF16::getLeadSurrogate(this->m_nextCodepoint_);
	//    .local v1, "nextLead":I
	//    .local v0, "leadBlock":I
	if ( this->m_trie_->m_dataManipulate_ )     
		goto label_cond_2a;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("The field DataManipulate in this Trie is null")));
	// throw
	throw cVar0;
	// 771    .line 466
label_cond_2a:
	this->m_nextIndex_ = this->m_trie_->m_dataManipulate_->getFoldingOffset(this->m_trie_->getValue((( nextLead & 0x1f) +  ( this->m_trie_->m_index_[_shri(nextLead,0x5)] << 0x2))));
	this->m_nextIndex_ = ( this->m_nextIndex_ + -0x1);
	this->m_nextBlockIndex_ = 0x20;
	return 0x1;
	// 814    .line 473
	// 815    .end local v0    # "leadBlock":I
	// 816    .end local v1    # "nextLead":I
label_cond_49:
	return 0x0;

}
// .method private final checkTrailBlock(I)Z
bool android::icu::impl::TrieIterator::checkTrailBlock(int currentValue)
{
	
	int cVar0;
	
	//    .param p1, "currentValue"    # I
	cVar0 = 0x0;
label_goto_1:
	if ( this->m_nextTrailIndexOffset_ >= 0x20 )
		goto label_cond_1d;
	this->m_nextBlockIndex_ = cVar0;
	if ( this->checkBlock(currentValue) )     
		goto label_cond_10;
	return cVar0;
	// 849    .line 439
label_cond_10:
	this->m_nextTrailIndexOffset_ = ( this->m_nextTrailIndexOffset_ + 0x1);
	this->m_nextIndex_ = ( this->m_nextIndex_ + 0x1);
	goto label_goto_1;
	// 866    .line 442
label_cond_1d:
	return 0x1;

}
// .method private final setResult(Landroid/icu/util/RangeValueIterator$Element;III)V
void android::icu::impl::TrieIterator::setResult(std::shared_ptr<android::icu::util::RangeValueIterator_S_Element> element,int start,int limit,int value)
{
	
	//    .param p1, "element"    # Landroid/icu/util/RangeValueIterator$Element;
	//    .param p2, "start"    # I
	//    .param p3, "limit"    # I
	//    .param p4, "value"    # I
	element->start = start;
	element->limit = limit;
	element->value = value;
	return;

}
// .method protected extract(I)I
int android::icu::impl::TrieIterator::extract(int value)
{
	
	//    .param p1, "value"    # I
	return value;

}
// .method public final next(Landroid/icu/util/RangeValueIterator$Element;)Z
bool android::icu::impl::TrieIterator::next(std::shared_ptr<android::icu::util::RangeValueIterator_S_Element> element)
{
	
	bool cVar0;
	
	//    .param p1, "element"    # Landroid/icu/util/RangeValueIterator$Element;
	cVar0 = 0x1;
	if ( this->m_nextCodepoint_ <= 0x10ffff )
		goto label_cond_a;
	return 0x0;
	// 924    .line 130
label_cond_a:
	if ( this->m_nextCodepoint_ >= 0x10000 )
		goto label_cond_17;
	if ( !(this->calculateNextBMPElement(element)) )  
		goto label_cond_17;
	return cVar0;
	// 943    .line 134
label_cond_17:
	this->calculateNextSupplementaryElement(element);
	return cVar0;

}
// .method public final reset()V
void android::icu::impl::TrieIterator::reset()
{
	
	int cVar0;
	
	cVar0 = 0x0;
	this->m_currentCodepoint_ = cVar0;
	this->m_nextCodepoint_ = cVar0;
	this->m_nextIndex_ = cVar0;
	this->m_nextBlock_ = ( this->m_trie_->m_index_[cVar0] << 0x2);
	if ( this->m_nextBlock_ != this->m_trie_->m_dataOffset_ )
		goto label_cond_24;
	this->m_nextValue_ = this->m_initialValue_;
label_goto_1d:
	this->m_nextBlockIndex_ = cVar0;
	this->m_nextTrailIndexOffset_ = 0x20;
	return;
	// 1003    .line 152
label_cond_24:
	this->m_nextValue_ = this->extract(this->m_trie_->getValue(this->m_nextBlock_));
	goto label_goto_1d;

}


