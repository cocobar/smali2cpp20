// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\BytesTrie$Iterator.smali
#include "java2ctype.h"
#include "android.icu.util.BytesTrie_S_Entry.h"
#include "android.icu.util.BytesTrie_S_Iterator.h"
#include "android.icu.util.BytesTrie.h"
#include "java.lang.Long.h"
#include "java.lang.Object.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.util.ArrayList.h"
#include "java.util.NoSuchElementException.h"

// .method private constructor <init>([BIII)V
android::icu::util::BytesTrie_S_Iterator::BytesTrie_S_Iterator(std::shared_ptr<unsigned char[]> trieBytes,int offset,int remainingMatchLength,int maxStringLength)
{
	
	std::shared_ptr<java::util::ArrayList> cVar0;
	std::shared_ptr<android::icu::util::BytesTrie_S_Entry> cVar1;
	int cVar2;
	int length;
	
	//    .param p1, "trieBytes"    # [B
	//    .param p2, "offset"    # I
	//    .param p3, "remainingMatchLength"    # I
	//    .param p4, "maxStringLength"    # I
	// 067    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::util::ArrayList>();
	this->stack_ = cVar0;
	this->bytes_ = trieBytes;
	this->initialPos_ = offset;
	this->pos_ = offset;
	this->initialRemainingMatchLength_ = remainingMatchLength;
	this->remainingMatchLength_ = remainingMatchLength;
	this->maxLength_ = maxStringLength;
	if ( !(this->maxLength_) )  
		goto label_cond_48;
	cVar2 = this->maxLength_;
label_goto_1e:
	cVar1 = std::make_shared<android::icu::util::BytesTrie_S_Entry>(cVar2, 0x0);
	this->entry_ = cVar1;
	length = this->remainingMatchLength_;
	//    .local v0, "length":I
	if ( length < 0 ) 
		goto label_cond_47;
	length = ( length + 0x1);
	if ( this->maxLength_ <= 0 )
		goto label_cond_34;
	if ( length <= this->maxLength_ )
		goto label_cond_34;
	length = this->maxLength_;
label_cond_34:
	android::icu::util::BytesTrie_S_Entry::-wrap0(this->entry_, this->bytes_, this->pos_, length);
	this->pos_ = (this->pos_ +  length);
	this->remainingMatchLength_ = (this->remainingMatchLength_ -  length);
label_cond_47:
	return;
	// 158    .line 500
	// 159    .end local v0    # "length":I
label_cond_48:
	cVar2 = 0x20;
	goto label_goto_1e;

}
// .method synthetic constructor <init>([BIIILandroid/icu/util/BytesTrie$Iterator;)V
android::icu::util::BytesTrie_S_Iterator::BytesTrie_S_Iterator(std::shared_ptr<unsigned char[]> trieBytes,int offset,int remainingMatchLength,int maxStringLength,std::shared_ptr<android::icu::util::BytesTrie_S_Iterator> _this4)
{
	
	//    .param p1, "trieBytes"    # [B
	//    .param p2, "offset"    # I
	//    .param p3, "remainingMatchLength"    # I
	//    .param p4, "maxStringLength"    # I
	//    .param p5, "-this4"    # Landroid/icu/util/BytesTrie$Iterator;
	android::icu::util::BytesTrie_S_Iterator::(trieBytes, offset, remainingMatchLength, maxStringLength);
	return;

}
// .method private branchNext(II)I
int android::icu::util::BytesTrie_S_Iterator::branchNext(int pos,int length)
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
	this->stack_->add(java::lang::Long::valueOf(((((long long)(android::icu::util::BytesTrie::-wrap2(this->bytes_, pos)) << cVar0) |  (long long)(( (length - _shri(length,0x1)) << 0x10))) |  (long long)(android::icu::util::BytesTrie_S_Entry::-get0(this->entry_)))));
	length = _shri(length,0x1);
	//    .end local p1    # "pos":I
	//    .restart local v2    # "pos":I
	goto label_goto_4;
	// 260    .line 639
label_cond_34:
	pos = ( pos + 0x1);
	//    .end local v2    # "pos":I
	//    .restart local p1    # "pos":I
	//    .local v3, "trieByte":B
	pos = ( pos + 0x1);
	//    .end local p1    # "pos":I
	//    .restart local v2    # "pos":I
	node = ( this->bytes_[pos] & 0xff);
	//    .local v1, "node":I
	if ( !(( node & 0x1)) )  
		goto label_cond_7a;
	//    .local v0, "isFinal":Z
label_goto_47:
	value = android::icu::util::BytesTrie::-wrap1(this->bytes_, pos, _shri(node,0x1));
	//    .local v4, "value":I
	pos = android::icu::util::BytesTrie::-wrap3(pos, node);
	//    .end local v2    # "pos":I
	//    .restart local p1    # "pos":I
	this->stack_->add(java::lang::Long::valueOf(((((long long)(pos) << cVar0) |  (long long)(( ( length + -0x1) << 0x10))) |  (long long)(android::icu::util::BytesTrie_S_Entry::-get0(this->entry_)))));
	android::icu::util::BytesTrie_S_Entry::-wrap1(this->entry_, this->bytes_[pos]);
	if ( !(isFinal) )  
		goto label_cond_7c;
	this->pos_ = cVar1;
	this->entry_->value = value;
	return cVar1;
	// 359    .line 641
	// 360    .end local v0    # "isFinal":Z
	// 361    .end local v4    # "value":I
	// 362    .end local p1    # "pos":I
	// 363    .restart local v2    # "pos":I
label_cond_7a:
	//    .restart local v0    # "isFinal":Z
	goto label_goto_47;
	// 370    .line 651
	// 371    .end local v2    # "pos":I
	// 372    .restart local v4    # "value":I
	// 373    .restart local p1    # "pos":I
label_cond_7c:
	return (pos + value);

}
// .method private truncateAndStop()Landroid/icu/util/BytesTrie$Entry;
std::shared_ptr<android::icu::util::BytesTrie_S_Entry> android::icu::util::BytesTrie_S_Iterator::truncateAndStop()
{
	
	int cVar0;
	
	cVar0 = -0x1;
	this->pos_ = cVar0;
	this->entry_->value = cVar0;
	return this->entry_;

}
// .method public hasNext()Z
bool android::icu::util::BytesTrie_S_Iterator::hasNext()
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
// .method public next()Landroid/icu/util/BytesTrie$Entry;
std::shared_ptr<android::icu::util::BytesTrie_S_Entry> android::icu::util::BytesTrie_S_Iterator::next()
{
	
	int cVar0;
	int pos;
	std::shared_ptr<java::util::NoSuchElementException> cVar1;
	std::shared_ptr<java::lang::Long> cVar2;
	auto top;
	int length;
	int node;
	
	cVar0 = 0x20;
	pos = this->pos_;
	//    .local v3, "pos":I
	if ( pos >= 0 )
		goto label_cond_4f;
	if ( !(this->stack_->isEmpty()) )  
		goto label_cond_14;
	cVar1 = std::make_shared<java::util::NoSuchElementException>();
	// throw
	throw cVar1;
	// 457    .line 557
label_cond_14:
	cVar2 = this->stack_->remove(( this->stack_->size() + -0x1));
	cVar2->checkCast("java::lang::Long");
	top = cVar2->longValue();
	//    .local v6, "top":J
	length = (int)(top);
	//    .local v1, "length":I
	pos = (int)(_shrll(top,cVar0));
	android::icu::util::BytesTrie_S_Entry::-wrap2(this->entry_, (0xffff &  length));
	length = _ushri(length,0x10);
	if ( length <= 0x1 )
		goto label_cond_43;
	pos = this->branchNext(pos, length);
	if ( pos >= 0 )
		goto label_cond_4f;
	return this->entry_;
	// 519    .line 568
label_cond_43:
	//    .end local v3    # "pos":I
	//    .local v4, "pos":I
	android::icu::util::BytesTrie_S_Entry::-wrap1(this->entry_, this->bytes_[pos]);
	pos = ( pos + 0x1);
	//    .end local v1    # "length":I
	//    .end local v4    # "pos":I
	//    .end local v6    # "top":J
	//    .restart local v3    # "pos":I
label_cond_4f:
	if ( this->remainingMatchLength_ < 0 ) 
		goto label_cond_61;
	return this->truncateAndStop();
	// 552    .line 607
	// 553    .end local v3    # "pos":I
	// 554    .restart local v1    # "length":I
	// 555    .local v2, "node":I
	// 556    .restart local v4    # "pos":I
label_cond_58:
	android::icu::util::BytesTrie_S_Entry::-wrap0(this->entry_, this->bytes_, pos, length);
	pos = (pos + length);
	//    .end local v1    # "length":I
	//    .end local v2    # "node":I
	//    .end local v4    # "pos":I
	//    .restart local v3    # "pos":I
label_cond_61:
	pos = ( pos + 0x1);
	//    .end local v3    # "pos":I
	//    .restart local v4    # "pos":I
	node = ( this->bytes_[pos] & 0xff);
	//    .restart local v2    # "node":I
	if ( node <  cVar0 )
		goto label_cond_9b;
	if ( !(( node & 0x1)) )  
		goto label_cond_92;
	//    .local v0, "isFinal":Z
label_goto_70:
	this->entry_->value = android::icu::util::BytesTrie::-wrap1(this->bytes_, pos, _shri(node,0x1));
	if ( isFinal )     
		goto label_cond_8c;
	if ( this->maxLength_ <= 0 )
		goto label_cond_94;
	if ( android::icu::util::BytesTrie_S_Entry::-get0(this->entry_) != this->maxLength_ )
		goto label_cond_94;
label_cond_8c:
	this->pos_ = -0x1;
label_goto_8f:
	return this->entry_;
	// 638    .line 580
	// 639    .end local v0    # "isFinal":Z
label_cond_92:
	//    .restart local v0    # "isFinal":Z
	goto label_goto_70;
	// 646    .line 585
label_cond_94:
	this->pos_ = android::icu::util::BytesTrie::-wrap3(pos, node);
	goto label_goto_8f;
	// 656    .line 589
	// 657    .end local v0    # "isFinal":Z
label_cond_9b:
	if ( this->maxLength_ <= 0 )
		goto label_cond_ae;
	if ( android::icu::util::BytesTrie_S_Entry::-get0(this->entry_) != this->maxLength_ )
		goto label_cond_ae;
	return this->truncateAndStop();
	// 680    .line 592
label_cond_ae:
	if ( node >= 0x10 )
		goto label_cond_c7;
	if ( node )     
		goto label_cond_ef;
	//    .end local v4    # "pos":I
	//    .restart local v3    # "pos":I
label_goto_bc:
	pos = this->branchNext(pos, ( node + 0x1));
	if ( pos >= 0 )
		goto label_cond_61;
	return this->entry_;
	// 716    .line 602
	// 717    .end local v3    # "pos":I
	// 718    .restart local v4    # "pos":I
label_cond_c7:
	length = ( ( node + -0x10) + 0x1);
	//    .restart local v1    # "length":I
	if ( this->maxLength_ <= 0 )
		goto label_cond_58;
	if ( (android::icu::util::BytesTrie_S_Entry::-get0(this->entry_) +  length) <= this->maxLength_ )
		goto label_cond_58;
	android::icu::util::BytesTrie_S_Entry::-wrap0(this->entry_, this->bytes_, pos, (this->maxLength_ -  android::icu::util::BytesTrie_S_Entry::-get0(this->entry_)));
	return this->truncateAndStop();
	// 766    .end local v1    # "length":I
label_cond_ef:
	//    .end local v4    # "pos":I
	//    .restart local v3    # "pos":I
	goto label_goto_bc;

}
// .method public remove()V
void android::icu::util::BytesTrie_S_Iterator::remove()
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>();
	// throw
	throw cVar0;

}
// .method public reset()Landroid/icu/util/BytesTrie$Iterator;
std::shared_ptr<android::icu::util::BytesTrie_S_Iterator> android::icu::util::BytesTrie_S_Iterator::reset()
{
	
	int length;
	
	this->pos_ = this->initialPos_;
	this->remainingMatchLength_ = this->initialRemainingMatchLength_;
	length = ( this->remainingMatchLength_ + 0x1);
	//    .local v0, "length":I
	if ( this->maxLength_ <= 0 )
		goto label_cond_16;
	if ( length <= this->maxLength_ )
		goto label_cond_16;
	length = this->maxLength_;
label_cond_16:
	android::icu::util::BytesTrie_S_Entry::-wrap2(this->entry_, length);
	this->pos_ = (this->pos_ +  length);
	this->remainingMatchLength_ = (this->remainingMatchLength_ -  length);
	this->stack_->clear();
	return this;

}


