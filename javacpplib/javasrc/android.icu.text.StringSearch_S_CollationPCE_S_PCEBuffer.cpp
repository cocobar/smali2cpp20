// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\StringSearch$CollationPCE$PCEBuffer.smali
#include "java2ctype.h"
#include "android.icu.text.StringSearch_S_CollationPCE_S_PCEBuffer.h"
#include "android.icu.text.StringSearch_S_CollationPCE_S_PCEI.h"
#include "java.lang.System.h"

// .method private constructor <init>()V
android::icu::text::StringSearch_S_CollationPCE_S_PCEBuffer::StringSearch_S_CollationPCE_S_PCEBuffer()
{
	
	// 029    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->buffer_ = std::make_shared<std::vector<std::vector<android::icu::text::StringSearch_S_CollationPCE_S_PCEI>>>(0x10);
	this->bufferIndex_ = 0x0;
	return;

}
// .method synthetic constructor <init>(Landroid/icu/text/StringSearch$CollationPCE$PCEBuffer;)V
android::icu::text::StringSearch_S_CollationPCE_S_PCEBuffer::StringSearch_S_CollationPCE_S_PCEBuffer(std::shared_ptr<android::icu::text::StringSearch_S_CollationPCE_S_PCEBuffer> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/text/StringSearch$CollationPCE$PCEBuffer;
	// 052    invoke-direct {p0}, Landroid/icu/text/StringSearch$CollationPCE$PCEBuffer;-><init>()V
	return;

}
// .method empty()Z
bool android::icu::text::StringSearch_S_CollationPCE_S_PCEBuffer::empty()
{
	
	bool cVar1;
	
	cVar1 = 0x0;
	if ( this->bufferIndex_ > 0 ) 
		goto label_cond_6;
	cVar1 = 0x1;
label_cond_6:
	return cVar1;

}
// .method get()Landroid/icu/text/StringSearch$CollationPCE$PCEI;
std::shared_ptr<android::icu::text::StringSearch_S_CollationPCE_S_PCEI> android::icu::text::StringSearch_S_CollationPCE_S_PCEBuffer::get()
{
	
	int cVar0;
	
	if ( this->bufferIndex_ <= 0 )
		goto label_cond_f;
	cVar0 = ( this->bufferIndex_ + -0x1);
	this->bufferIndex_ = cVar0;
	return this->buffer_[cVar0];
	// 098    .line 1869
label_cond_f:
	return 0x0;

}
// .method put(JII)V
void android::icu::text::StringSearch_S_CollationPCE_S_PCEBuffer::put(long long ce,int ixLow,int ixHigh)
{
	
	int cVar0;
	std::shared<std::vector<std::vector<android::icu::text::StringSearch_S_CollationPCE_S_PCEI>>> newBuffer;
	std::shared_ptr<android::icu::text::StringSearch_S_CollationPCE_S_PCEI> cVar1;
	
	//    .param p1, "ce"    # J
	//    .param p3, "ixLow"    # I
	//    .param p4, "ixHigh"    # I
	cVar0 = 0x0;
	if ( this->bufferIndex_ <  this->buffer_->size() )
		goto label_cond_19;
	newBuffer = std::make_shared<std::vector<std::vector<android::icu::text::StringSearch_S_CollationPCE_S_PCEI>>>(( this->buffer_->size() + 0x8));
	//    .local v0, "newBuffer":[Landroid/icu/text/StringSearch$CollationPCE$PCEI;
	java::lang::System::arraycopy(this->buffer_, cVar0, newBuffer, cVar0, this->buffer_->size());
	this->buffer_ = newBuffer;
	//    .end local v0    # "newBuffer":[Landroid/icu/text/StringSearch$CollationPCE$PCEI;
label_cond_19:
	cVar1 = std::make_shared<android::icu::text::StringSearch_S_CollationPCE_S_PCEI>(0x0);
	this->buffer_[this->bufferIndex_] = cVar1;
	this->buffer_[this->bufferIndex_]->ce_ = ce;
	this->buffer_[this->bufferIndex_]->low_ = ixLow;
	this->buffer_[this->bufferIndex_]->high_ = ixHigh;
	this->bufferIndex_ = ( this->bufferIndex_ + 0x1);
	return;

}
// .method reset()V
void android::icu::text::StringSearch_S_CollationPCE_S_PCEBuffer::reset()
{
	
	this->bufferIndex_ = 0x0;
	return;

}


