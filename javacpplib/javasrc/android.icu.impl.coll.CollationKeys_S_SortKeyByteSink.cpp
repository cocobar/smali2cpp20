// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationKeys$SortKeyByteSink.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.CollationKeys_S_SortKeyByteSink.h"
#include "java.lang.System.h"

// .method public constructor <init>([B)V
android::icu::impl::coll::CollationKeys_S_SortKeyByteSink::CollationKeys_S_SortKeyByteSink(std::shared_ptr<unsigned char[]> dest)
{
	
	//    .param p1, "dest"    # [B
	// 030    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->appended_ = 0x0;
	this->buffer_ = dest;
	return;

}
// .method public Append(I)V
void android::icu::impl::coll::CollationKeys_S_SortKeyByteSink::Append(int b)
{
	
	//    .param p1, "b"    # I
	if ( this->appended_ <  this->buffer_->size() )
		goto label_cond_10;
	if ( !(this->Resize(0x1, this->appended_)) )  
		goto label_cond_17;
label_cond_10:
	this->buffer_[this->appended_] = (unsigned char)(b);
label_cond_17:
	this->appended_ = ( this->appended_ + 0x1);
	return;

}
// .method public Append([BI)V
void android::icu::impl::coll::CollationKeys_S_SortKeyByteSink::Append(std::shared_ptr<unsigned char[]> bytes,int n)
{
	
	int cVar0;
	int length;
	
	//    .param p1, "bytes"    # [B
	//    .param p2, "n"    # I
	cVar0 = 0x0;
	if ( n <= 0 )
		goto label_cond_5;
	if ( bytes )     
		goto label_cond_6;
label_cond_5:
	return;
	// 109    .line 75
label_cond_6:
	length = this->appended_;
	//    .local v1, "length":I
	this->appended_ = (this->appended_ +  n);
	//    .local v0, "available":I
	if ( n >  (this->buffer_->size() - length) )
		goto label_cond_1a;
	java::lang::System::arraycopy(bytes, cVar0, this->buffer_, length, n);
label_goto_19:
	return;
	// 141    .line 82
label_cond_1a:
	this->AppendBeyondCapacity(bytes, cVar0, n, length);
	goto label_goto_19;

}
// .method public GetRemainingCapacity()I
int android::icu::impl::coll::CollationKeys_S_SortKeyByteSink::GetRemainingCapacity()
{
	
	return (this->buffer_->size() -  this->appended_);

}
// .method public NumberOfBytesAppended()I
int android::icu::impl::coll::CollationKeys_S_SortKeyByteSink::NumberOfBytesAppended()
{
	
	return this->appended_;

}
// .method public Overflowed()Z
bool android::icu::impl::coll::CollationKeys_S_SortKeyByteSink::Overflowed()
{
	
	bool cVar0;
	
	if ( this->appended_ <= this->buffer_->size() )
		goto label_cond_9;
	cVar0 = 0x1;
label_goto_8:
	return cVar0;
label_cond_9:
	cVar0 = 0x0;
	goto label_goto_8;

}
// .method public setBufferAndAppended([BI)V
void android::icu::impl::coll::CollationKeys_S_SortKeyByteSink::setBufferAndAppended(std::shared_ptr<unsigned char[]> dest,int app)
{
	
	//    .param p1, "dest"    # [B
	//    .param p2, "app"    # I
	this->buffer_ = dest;
	this->appended_ = app;
	return;

}


