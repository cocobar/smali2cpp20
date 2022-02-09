// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\StringSearch$CEBuffer.smali
#include "java2ctype.h"
#include "android.icu.text.SearchIterator_S_ElementComparisonType.h"
#include "android.icu.text.SearchIterator_S_Search.h"
#include "android.icu.text.StringSearch_S_CEBuffer.h"
#include "android.icu.text.StringSearch_S_CEI.h"
#include "android.icu.text.StringSearch_S_CollationPCE_S_Range.h"
#include "android.icu.text.StringSearch_S_CollationPCE.h"
#include "android.icu.text.StringSearch_S_Pattern.h"
#include "android.icu.text.StringSearch.h"
#include "java.lang.AssertionError.h"
#include "java.lang.String.h"

static android::icu::text::StringSearch_S_CEBuffer::_assertionsDisabled;
static android::icu::text::StringSearch_S_CEBuffer::CEBUFFER_EXTRA = 0x20;
static android::icu::text::StringSearch_S_CEBuffer::MAX_TARGET_IGNORABLES_PER_PAT_JAMO_L = 0x8;
static android::icu::text::StringSearch_S_CEBuffer::MAX_TARGET_IGNORABLES_PER_PAT_OTHER = 0x3;
// .method static constructor <clinit>()V
void android::icu::text::StringSearch_S_CEBuffer::static_cinit()
{
	
	android::icu::text::StringSearch_S_CEBuffer::_assertionsDisabled = ( android::icu::text::StringSearch_S_CEBuffer()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method constructor <init>(Landroid/icu/text/StringSearch;)V
android::icu::text::StringSearch_S_CEBuffer::StringSearch_S_CEBuffer(std::shared_ptr<android::icu::text::StringSearch> ss)
{
	
	int cVar0;
	std::shared_ptr<java::lang::String> patText;
	int i;
	
	//    .param p1, "ss"    # Landroid/icu/text/StringSearch;
	cVar0 = 0x0;
	// 066    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->strSearch_ = ss;
	this->bufSize_ = ( android::icu::text::StringSearch::-get0(ss)->PCELength_ + 0x20);
	if ( ss->search_->elementComparisonType_ == android::icu::text::SearchIterator_S_ElementComparisonType::STANDARD_ELEMENT_COMPARISON )
		goto label_cond_41;
	patText = android::icu::text::StringSearch::-get0(ss)->text_;
	//    .local v2, "patText":Ljava/lang/String;
	if ( !(patText) )  
		goto label_cond_41;
	i = 0x0;
	//    .local v1, "i":I
label_goto_21:
	if ( i >= patText->length() )
		goto label_cond_41;
	//    .local v0, "c":C
	if ( !(android::icu::text::StringSearch_S_CEBuffer::MIGHT_BE_JAMO_L(patText->charAt(i))) )  
		goto label_cond_3a;
	this->bufSize_ = ( this->bufSize_ + 0x8);
label_goto_37:
	i = ( i + 0x1);
	goto label_goto_21;
	// 139    .line 1956
label_cond_3a:
	this->bufSize_ = ( this->bufSize_ + 0x3);
	goto label_goto_37;
	// 149    .line 1965
	// 150    .end local v0    # "c":C
	// 151    .end local v1    # "i":I
	// 152    .end local v2    # "patText":Ljava/lang/String;
label_cond_41:
	this->firstIx_ = cVar0;
	this->limitIx_ = cVar0;
	if ( android::icu::text::StringSearch::-wrap0(ss) )     
		goto label_cond_4c;
	return;
	// 169    .line 1972
label_cond_4c:
	this->buf_ = std::make_shared<std::vector<std::vector<android::icu::text::StringSearch_S_CEI>>>(this->bufSize_);
	return;

}
// .method static MIGHT_BE_JAMO_L(C)Z
bool android::icu::text::StringSearch_S_CEBuffer::MIGHT_BE_JAMO_L(char c)
{
	
	bool cVar0;
	
	//    .param p0, "c"    # C
	cVar0 = 0x1;
	if ( c <  0x1100 )
		goto label_cond_b;
	if ( c >  0x115e )
		goto label_cond_b;
label_cond_a:
label_goto_a:
	return cVar0;
	// 203    .line 2061
label_cond_b:
	if ( c <  0x3131 )
		goto label_cond_13;
	if ( c <= 0x314e )
		goto label_cond_a;
label_cond_13:
	if ( c <  0x3165 )
		goto label_cond_1b;
	if ( c <= 0x3186 )
		goto label_cond_a;
label_cond_1b:
	cVar0 = 0x0;
	goto label_goto_a;

}
// .method get(I)Landroid/icu/text/StringSearch$CEI;
std::shared_ptr<android::icu::text::StringSearch_S_CEI> android::icu::text::StringSearch_S_CEBuffer::get(int index)
{
	
	std::shared_ptr<android::icu::text::StringSearch_S_CEI> cVar0;
	int i;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	std::shared_ptr<android::icu::text::StringSearch_S_CollationPCE_S_Range> range;
	std::shared_ptr<android::icu::text::StringSearch_S_CEI> cVar2;
	
	//    .param p1, "index"    # I
	cVar0 = 0x0;
	i = (index % this->bufSize_);
	//    .local v0, "i":I
	if ( index <  this->firstIx_ )
		goto label_cond_12;
	if ( index >= this->limitIx_ )
		goto label_cond_12;
	return this->buf_[i];
	// 260    .line 1993
label_cond_12:
	if ( index == this->limitIx_ )
		goto label_cond_21;
	if ( android::icu::text::StringSearch_S_CEBuffer::_assertionsDisabled )     
		goto label_cond_20;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 277    .line 1995
label_cond_20:
	return cVar0;
	// 281    .line 1999
label_cond_21:
	this->limitIx_ = ( this->limitIx_ + 0x1);
	if ( (this->limitIx_ -  this->firstIx_) <  this->bufSize_ )
		goto label_cond_36;
	this->firstIx_ = ( this->firstIx_ + 0x1);
label_cond_36:
	range = std::make_shared<android::icu::text::StringSearch_S_CollationPCE_S_Range>();
	//    .local v1, "range":Landroid/icu/text/StringSearch$CollationPCE$Range;
	if ( this->buf_[i] )     
		goto label_cond_4a;
	cVar2 = std::make_shared<android::icu::text::StringSearch_S_CEI>(cVar0);
	this->buf_[i] = cVar2;
label_cond_4a:
	this->buf_[i]->ce_ = android::icu::text::StringSearch::-get1(this->strSearch_)->nextProcessed(range);
	this->buf_[i]->lowIndex_ = range->ixLow_;
	this->buf_[i]->highIndex_ = range->ixHigh_;
	return this->buf_[i];

}
// .method getPrevious(I)Landroid/icu/text/StringSearch$CEI;
std::shared_ptr<android::icu::text::StringSearch_S_CEI> android::icu::text::StringSearch_S_CEBuffer::getPrevious(int index)
{
	
	std::shared_ptr<android::icu::text::StringSearch_S_CEI> cVar0;
	int i;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	std::shared_ptr<android::icu::text::StringSearch_S_CollationPCE_S_Range> range;
	std::shared_ptr<android::icu::text::StringSearch_S_CEI> cVar2;
	
	//    .param p1, "index"    # I
	cVar0 = 0x0;
	i = (index % this->bufSize_);
	//    .local v0, "i":I
	if ( index <  this->firstIx_ )
		goto label_cond_12;
	if ( index >= this->limitIx_ )
		goto label_cond_12;
	return this->buf_[i];
	// 403    .line 2035
label_cond_12:
	if ( index == this->limitIx_ )
		goto label_cond_21;
	if ( android::icu::text::StringSearch_S_CEBuffer::_assertionsDisabled )     
		goto label_cond_20;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 420    .line 2037
label_cond_20:
	return cVar0;
	// 424    .line 2041
label_cond_21:
	this->limitIx_ = ( this->limitIx_ + 0x1);
	if ( (this->limitIx_ -  this->firstIx_) <  this->bufSize_ )
		goto label_cond_36;
	this->firstIx_ = ( this->firstIx_ + 0x1);
label_cond_36:
	range = std::make_shared<android::icu::text::StringSearch_S_CollationPCE_S_Range>();
	//    .local v1, "range":Landroid/icu/text/StringSearch$CollationPCE$Range;
	if ( this->buf_[i] )     
		goto label_cond_4a;
	cVar2 = std::make_shared<android::icu::text::StringSearch_S_CEI>(cVar0);
	this->buf_[i] = cVar2;
label_cond_4a:
	this->buf_[i]->ce_ = android::icu::text::StringSearch::-get1(this->strSearch_)->previousProcessed(range);
	this->buf_[i]->lowIndex_ = range->ixLow_;
	this->buf_[i]->highIndex_ = range->ixHigh_;
	return this->buf_[i];

}


