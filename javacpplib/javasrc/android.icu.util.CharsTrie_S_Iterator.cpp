// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\CharsTrie$Iterator.smali
#include "java2ctype.h"
#include "android.icu.util.CharsTrie_S_Entry.h"
#include "android.icu.util.CharsTrie_S_Iterator.h"
#include "android.icu.util.CharsTrie.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Long.h"
#include "java.lang.Object.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.util.ArrayList.h"
#include "java.util.NoSuchElementException.h"

// .method private constructor <init>(Ljava/lang/CharSequence;III)V
android::icu::util::CharsTrie_S_Iterator::CharsTrie_S_Iterator(std::shared_ptr<java::lang::CharSequence> trieChars,int offset,int remainingMatchLength,int maxStringLength)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<android::icu::util::CharsTrie_S_Entry> cVar1;
	std::shared_ptr<java::util::ArrayList> cVar2;
	int length;
	
	//    .param p1, "trieChars"    # Ljava/lang/CharSequence;
	//    .param p2, "offset"    # I
	//    .param p3, "remainingMatchLength"    # I
	//    .param p4, "maxStringLength"    # I
	// 071    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	this->str_ = cVar0;
	cVar1 = std::make_shared<android::icu::util::CharsTrie_S_Entry>(0x0);
	this->entry_ = cVar1;
	cVar2 = std::make_shared<java::util::ArrayList>();
	this->stack_ = cVar2;
	this->chars_ = trieChars;
	this->initialPos_ = offset;
	this->pos_ = offset;
	this->initialRemainingMatchLength_ = remainingMatchLength;
	this->remainingMatchLength_ = remainingMatchLength;
	this->maxLength_ = maxStringLength;
	length = this->remainingMatchLength_;
	//    .local v0, "length":I
	if ( length < 0 ) 
		goto label_cond_4b;
	length = ( length + 0x1);
	if ( this->maxLength_ <= 0 )
		goto label_cond_35;
	if ( length <= this->maxLength_ )
		goto label_cond_35;
	length = this->maxLength_;
label_cond_35:
	this->str_->append(this->chars_, this->pos_, (this->pos_ +  length));
	this->pos_ = (this->pos_ +  length);
	this->remainingMatchLength_ = (this->remainingMatchLength_ -  length);
label_cond_4b:
	return;

}
// .method synthetic constructor <init>(Ljava/lang/CharSequence;IIILandroid/icu/util/CharsTrie$Iterator;)V
android::icu::util::CharsTrie_S_Iterator::CharsTrie_S_Iterator(std::shared_ptr<java::lang::CharSequence> trieChars,int offset,int remainingMatchLength,int maxStringLength,std::shared_ptr<android::icu::util::CharsTrie_S_Iterator> _this4)
{
	
	//    .param p1, "trieChars"    # Ljava/lang/CharSequence;
	//    .param p2, "offset"    # I
	//    .param p3, "remainingMatchLength"    # I
	//    .param p4, "maxStringLength"    # I
	//    .param p5, "-this4"    # Landroid/icu/util/CharsTrie$Iterator;
	android::icu::util::CharsTrie_S_Iterator::(trieChars, offset, remainingMatchLength, maxStringLength);
	return;

}
// .method private branchNext(II)I
int android::icu::util::CharsTrie_S_Iterator::branchNext(int pos,int length)
{
	
	int cVar0;
	int cVar1;
	int pos;
	int length;
	int node;
	int value;
	
	//    .param p1, "pos"    # I
	//    .param p2, "length"    # I
	cVar0 = 0x20;
	cVar1 = -0x1;
	pos = pos;
	//    .end local p1    # "pos":I
	//    .local v2, "pos":I
label_goto_4:
	if ( length <= 0x5 )
		goto label_cond_34;
	pos = ( pos + 0x1);
	//    .end local v2    # "pos":I
	//    .restart local p1    # "pos":I
	this->stack_->add(java::lang::Long::valueOf(((((long long)(android::icu::util::CharsTrie::-wrap3(this->chars_, pos)) << cVar0) |  (long long)(( (length - _shri(length,0x1)) << 0x10))) |  (long long)(this->str_->length()))));
	length = _shri(length,0x1);
	//    .end local p1    # "pos":I
	//    .restart local v2    # "pos":I
	goto label_goto_4;
	// 261    .line 583
label_cond_34:
	pos = ( pos + 0x1);
	//    .end local v2    # "pos":I
	//    .restart local p1    # "pos":I
	//    .local v3, "trieUnit":C
	pos = ( pos + 0x1);
	//    .end local p1    # "pos":I
	//    .restart local v2    # "pos":I
	node = this->chars_->charAt(pos);
	//    .local v1, "node":I
	if ( !((0x8000 &  node)) )  
		goto label_cond_84;
	//    .local v0, "isFinal":Z
label_goto_4b:
	node = ( node & 0x7fff);
	value = android::icu::util::CharsTrie::-wrap2(this->chars_, pos, node);
	//    .local v4, "value":I
	pos = android::icu::util::CharsTrie::-wrap5(pos, node);
	//    .end local v2    # "pos":I
	//    .restart local p1    # "pos":I
	this->stack_->add(java::lang::Long::valueOf(((((long long)(pos) << cVar0) |  (long long)(( ( length + -0x1) << 0x10))) |  (long long)(this->str_->length()))));
	this->str_->append(this->chars_->charAt(pos));
	if ( !(isFinal) )  
		goto label_cond_86;
	this->pos_ = cVar1;
	this->entry_->chars = this->str_;
	this->entry_->value = value;
	return cVar1;
	// 371    .line 585
	// 372    .end local v0    # "isFinal":Z
	// 373    .end local v4    # "value":I
	// 374    .end local p1    # "pos":I
	// 375    .restart local v2    # "pos":I
label_cond_84:
	//    .restart local v0    # "isFinal":Z
	goto label_goto_4b;
	// 382    .line 596
	// 383    .end local v2    # "pos":I
	// 384    .restart local v4    # "value":I
	// 385    .restart local p1    # "pos":I
label_cond_86:
	return (pos + value);

}
// .method private truncateAndStop()Landroid/icu/util/CharsTrie$Entry;
std::shared_ptr<android::icu::util::CharsTrie_S_Entry> android::icu::util::CharsTrie_S_Iterator::truncateAndStop()
{
	
	int cVar0;
	
	cVar0 = -0x1;
	this->pos_ = cVar0;
	this->entry_->chars = this->str_;
	this->entry_->value = cVar0;
	return this->entry_;

}
// .method public hasNext()Z
bool android::icu::util::CharsTrie_S_Iterator::hasNext()
{
	
	bool cVar0;
	
	if ( this->pos_ >= 0 )
		goto label_cond_d;
	cVar0 = ( this->stack_->isEmpty() ^ 0x1);
label_goto_c:
	return cVar0;
label_cond_d:
	cVar0 = 0x1;
	goto label_goto_c;

}
// .method public next()Landroid/icu/util/CharsTrie$Entry;
std::shared_ptr<android::icu::util::CharsTrie_S_Entry> android::icu::util::CharsTrie_S_Iterator::next()
{
	
	bool cVar0;
	int pos;
	std::shared_ptr<java::util::NoSuchElementException> cVar1;
	std::shared_ptr<java::lang::Long> cVar2;
	auto top;
	int length;
	int node;
	int isFinal;
	
	cVar0 = 0x1;
	pos = this->pos_;
	//    .local v3, "pos":I
	if ( pos >= 0 )
		goto label_cond_52;
	if ( !(this->stack_->isEmpty()) )  
		goto label_cond_14;
	cVar1 = std::make_shared<java::util::NoSuchElementException>();
	// throw
	throw cVar1;
	// 478    .line 482
label_cond_14:
	cVar2 = this->stack_->remove(( this->stack_->size() + -0x1));
	cVar2->checkCast("java::lang::Long");
	top = cVar2->longValue();
	//    .local v6, "top":J
	length = (int)(top);
	//    .local v1, "length":I
	pos = (int)(_shrll(top,0x20));
	this->str_->setLength((0xffff &  length));
	length = _ushri(length,0x10);
	if ( length <= cVar0 )
		goto label_cond_44;
	pos = this->branchNext(pos, length);
	if ( pos >= 0 )
		goto label_cond_52;
	return this->entry_;
	// 540    .line 493
label_cond_44:
	pos = ( pos + 0x1);
	//    .end local v3    # "pos":I
	//    .local v4, "pos":I
	this->str_->append(this->chars_->charAt(pos));
	pos = pos;
	//    .end local v1    # "length":I
	//    .end local v4    # "pos":I
	//    .end local v6    # "top":J
	//    .restart local v3    # "pos":I
label_cond_52:
	if ( this->remainingMatchLength_ < 0 ) 
		goto label_cond_65;
	return this->truncateAndStop();
	// 575    .line 548
	// 576    .restart local v1    # "length":I
	// 577    .local v2, "node":I
label_cond_5b:
	this->str_->append(this->chars_, pos, (pos + length));
	pos = (pos +  length);
	//    .end local v1    # "length":I
	//    .end local v2    # "node":I
label_cond_65:
	pos = ( pos + 0x1);
	//    .end local v3    # "pos":I
	//    .restart local v4    # "pos":I
	node = this->chars_->charAt(pos);
	//    .restart local v2    # "node":I
	if ( node <  0x40 )
		goto label_cond_118;
	if ( !(this->skipValue_) )  
		goto label_cond_90;
	pos = android::icu::util::CharsTrie::-wrap4(pos, node);
	//    .end local v4    # "pos":I
	//    .restart local v3    # "pos":I
	node = ( node & 0x3f);
	this->skipValue_ = 0x0;
label_goto_7d:
	if ( this->maxLength_ <= 0 )
		goto label_cond_d5;
	if ( this->str_->length() != this->maxLength_ )
		goto label_cond_d5;
	return this->truncateAndStop();
	// 651    .line 510
	// 652    .end local v3    # "pos":I
	// 653    .restart local v4    # "pos":I
label_cond_90:
	if ( !((0x8000 &  node)) )  
		goto label_cond_c1;
	isFinal = 0x1;
	//    .local v0, "isFinal":Z
label_goto_97:
	if ( !(isFinal) )  
		goto label_cond_c3;
	this->entry_->value = android::icu::util::CharsTrie::-wrap2(this->chars_, pos, ( node & 0x7fff));
label_goto_a5:
	if ( isFinal )     
		goto label_cond_b5;
	if ( this->maxLength_ <= 0 )
		goto label_cond_ce;
	if ( this->str_->length() != this->maxLength_ )
		goto label_cond_ce;
label_cond_b5:
	this->pos_ = -0x1;
label_goto_b8:
	this->entry_->chars = this->str_;
	return this->entry_;
	// 718    .line 510
	// 719    .end local v0    # "isFinal":Z
label_cond_c1:
	isFinal = 0x0;
	//    .restart local v0    # "isFinal":Z
	goto label_goto_97;
	// 726    .line 514
label_cond_c3:
	this->entry_->value = android::icu::util::CharsTrie::-wrap1(this->chars_, pos, node);
	goto label_goto_a5;
	// 740    .line 523
label_cond_ce:
	this->pos_ = ( pos + -0x1);
	this->skipValue_ = cVar0;
	goto label_goto_b8;
	// 751    .line 533
	// 752    .end local v0    # "isFinal":Z
	// 753    .end local v4    # "pos":I
	// 754    .restart local v3    # "pos":I
label_cond_d5:
	if ( node >= 0x30 )
		goto label_cond_ef;
	if ( node )     
		goto label_cond_e4;
	pos = ( pos + 0x1);
	//    .end local v3    # "pos":I
	//    .restart local v4    # "pos":I
	pos = pos;
	//    .end local v4    # "pos":I
	//    .restart local v3    # "pos":I
label_cond_e4:
	pos = this->branchNext(pos, ( node + 0x1));
	if ( pos >= 0 )
		goto label_cond_65;
	return this->entry_;
	// 794    .line 543
label_cond_ef:
	length = ( ( node + -0x30) + 0x1);
	//    .restart local v1    # "length":I
	if ( this->maxLength_ <= 0 )
		goto label_cond_5b;
	if ( (this->str_->length() +  length) <= this->maxLength_ )
		goto label_cond_5b;
	this->str_->append(this->chars_, pos, ((this->maxLength_ +  pos) -  this->str_->length()));
	return this->truncateAndStop();
	// 844    .end local v1    # "length":I
	// 845    .end local v3    # "pos":I
	// 846    .restart local v4    # "pos":I
label_cond_118:
	pos = pos;
	//    .end local v4    # "pos":I
	//    .restart local v3    # "pos":I
	goto label_goto_7d;

}
// .method public remove()V
void android::icu::util::CharsTrie_S_Iterator::remove()
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>();
	// throw
	throw cVar0;

}
// .method public reset()Landroid/icu/util/CharsTrie$Iterator;
std::shared_ptr<android::icu::util::CharsTrie_S_Iterator> android::icu::util::CharsTrie_S_Iterator::reset()
{
	
	int length;
	
	this->pos_ = this->initialPos_;
	this->remainingMatchLength_ = this->initialRemainingMatchLength_;
	this->skipValue_ = 0x0;
	length = ( this->remainingMatchLength_ + 0x1);
	//    .local v0, "length":I
	if ( this->maxLength_ <= 0 )
		goto label_cond_19;
	if ( length <= this->maxLength_ )
		goto label_cond_19;
	length = this->maxLength_;
label_cond_19:
	this->str_->setLength(length);
	this->pos_ = (this->pos_ +  length);
	this->remainingMatchLength_ = (this->remainingMatchLength_ -  length);
	this->stack_->clear();
	return this;

}


