// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\UnicodeSetStringSpan$OffsetList.smali
#include "java2ctype.h"
#include "android.icu.impl.UnicodeSetStringSpan_S_OffsetList.h"
#include "android.icu.util.OutputInt.h"
#include "java.lang.AssertionError.h"

static android::icu::impl::UnicodeSetStringSpan_S_OffsetList::_assertionsDisabled;
// .method static constructor <clinit>()V
void android::icu::impl::UnicodeSetStringSpan_S_OffsetList::static_cinit()
{
	
	android::icu::impl::UnicodeSetStringSpan_S_OffsetList::_assertionsDisabled = ( android::icu::impl::UnicodeSetStringSpan_S_OffsetList()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method public constructor <init>()V
android::icu::impl::UnicodeSetStringSpan_S_OffsetList::UnicodeSetStringSpan_S_OffsetList()
{
	
	// 053    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->list = std::make_shared<std::vector<int[]>>(0x10);
	return;

}
// .method public addOffset(I)V
void android::icu::impl::UnicodeSetStringSpan_S_OffsetList::addOffset(int offset)
{
	
	int i;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p1, "offset"    # I
	i = (this->start + offset);
	//    .local v0, "i":I
	if ( i <  this->list->size() )
		goto label_cond_d;
	i = (i -  this->list->size());
label_cond_d:
	if ( android::icu::impl::UnicodeSetStringSpan_S_OffsetList::_assertionsDisabled )     
		goto label_cond_1d;
	if ( !(this->list[i]) )  
		goto label_cond_1d;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 111    .line 1088
label_cond_1d:
	this->list[i] = 0x1;
	this->length = ( this->length + 0x1);
	return;

}
// .method public addOffsetAndCount(II)V
void android::icu::impl::UnicodeSetStringSpan_S_OffsetList::addOffsetAndCount(int offset,int count)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	int i;
	
	//    .param p1, "offset"    # I
	//    .param p2, "count"    # I
	if ( android::icu::impl::UnicodeSetStringSpan_S_OffsetList::_assertionsDisabled )     
		goto label_cond_c;
	if ( count > 0 ) 
		goto label_cond_c;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 149    .line 1099
label_cond_c:
	i = (this->start + offset);
	//    .local v0, "i":I
	if ( i <  this->list->size() )
		goto label_cond_19;
	i = (i -  this->list->size());
label_cond_19:
	if ( this->list[i] )     
		goto label_cond_2a;
	this->list[i] = count;
	this->length = ( this->length + 0x1);
label_cond_29:
label_goto_29:
	return;
	// 195    .line 1106
label_cond_2a:
	if ( count >= this->list[i] )
		goto label_cond_29;
	this->list[i] = count;
	goto label_goto_29;

}
// .method public clear()V
void android::icu::impl::UnicodeSetStringSpan_S_OffsetList::clear()
{
	
	int cVar0;
	int i;
	
	cVar0 = 0x0;
	//    .local v0, "i":I
	i = this->list->size();
	//    .end local v0    # "i":I
	//    .local v1, "i":I
label_goto_5:
	i = ( i + -0x1);
	//    .end local v1    # "i":I
	//    .restart local v0    # "i":I
	if ( i <= 0 )
		goto label_cond_f;
	this->list[i] = cVar0;
	i = i;
	//    .end local v0    # "i":I
	//    .restart local v1    # "i":I
	goto label_goto_5;
	// 245    .line 1052
	// 246    .end local v1    # "i":I
	// 247    .restart local v0    # "i":I
label_cond_f:
	this->length = cVar0;
	this->start = cVar0;
	return;

}
// .method public containsOffset(I)Z
bool android::icu::impl::UnicodeSetStringSpan_S_OffsetList::containsOffset(int offset)
{
	
	bool cVar1;
	int i;
	
	//    .param p1, "offset"    # I
	cVar1 = 0x0;
	i = (this->start + offset);
	//    .local v0, "i":I
	if ( i <  this->list->size() )
		goto label_cond_e;
label_cond_e:
	if ( !(this->list[i]) )  
		goto label_cond_15;
	cVar1 = 0x1;
label_cond_15:
	return cVar1;

}
// .method public hasCountAtOffset(II)Z
bool android::icu::impl::UnicodeSetStringSpan_S_OffsetList::hasCountAtOffset(int offset,int count)
{
	
	bool cVar1;
	int i;
	int oldCount;
	
	//    .param p1, "offset"    # I
	//    .param p2, "count"    # I
	cVar1 = 0x0;
	i = (this->start + offset);
	//    .local v0, "i":I
	if ( i <  this->list->size() )
		goto label_cond_e;
label_cond_e:
	oldCount = this->list[i];
	//    .local v1, "oldCount":I
	if ( !(oldCount) )  
		goto label_cond_17;
	if ( oldCount >  count )
		goto label_cond_17;
	cVar1 = 0x1;
label_cond_17:
	return cVar1;

}
// .method public isEmpty()Z
bool android::icu::impl::UnicodeSetStringSpan_S_OffsetList::isEmpty()
{
	
	bool cVar1;
	
	cVar1 = 0x0;
	if ( this->length )     
		goto label_cond_6;
	cVar1 = 0x1;
label_cond_6:
	return cVar1;

}
// .method public popMinimum(Landroid/icu/util/OutputInt;)I
int android::icu::impl::UnicodeSetStringSpan_S_OffsetList::popMinimum(std::shared_ptr<android::icu::util::OutputInt> outCount)
{
	
	int cVar0;
	int i;
	int count;
	
	//    .param p1, "outCount"    # Landroid/icu/util/OutputInt;
	cVar0 = 0x0;
	i = this->start;
	//    .local v1, "i":I
label_cond_3:
	i = ( i + 0x1);
	if ( i >= this->list->size() )
		goto label_cond_25;
	count = this->list[i];
	//    .local v0, "count":I
	if ( !(count) )  
		goto label_cond_3;
	this->list[i] = cVar0;
	this->length = ( this->length + -0x1);
	//    .local v2, "result":I
	this->start = i;
	if ( !(outCount) )  
		goto label_cond_24;
	outCount->value = count;
label_cond_24:
	return (i - this->start);
	// 421    .line 1157
	// 422    .end local v0    # "count":I
	// 423    .end local v2    # "result":I
label_cond_25:
	//    .restart local v2    # "result":I
	i = 0x0;
label_goto_2d:
	count = this->list[i];
	//    .restart local v0    # "count":I
	if ( count )     
		goto label_cond_36;
	i = ( i + 0x1);
	goto label_goto_2d;
	// 451    .line 1163
label_cond_36:
	this->list[i] = cVar0;
	this->length = ( this->length + -0x1);
	this->start = i;
	if ( !(outCount) )  
		goto label_cond_46;
	outCount->value = count;
label_cond_46:
	return ((this->list->size() - this->start) + i);

}
// .method public setMaxLength(I)V
void android::icu::impl::UnicodeSetStringSpan_S_OffsetList::setMaxLength(int maxLength)
{
	
	//    .param p1, "maxLength"    # I
	if ( maxLength <= this->list->size() )
		goto label_cond_9;
	this->list = std::make_shared<std::vector<int[]>>(maxLength);
label_cond_9:
	this->clear();
	return;

}
// .method public shift(I)V
void android::icu::impl::UnicodeSetStringSpan_S_OffsetList::shift(int delta)
{
	
	int i;
	
	//    .param p1, "delta"    # I
	i = (this->start + delta);
	//    .local v0, "i":I
	if ( i <  this->list->size() )
		goto label_cond_e;
	i = (i -  this->list->size());
label_cond_e:
	if ( !(this->list[i]) )  
		goto label_cond_1e;
	this->list[i] = 0x0;
	this->length = ( this->length + -0x1);
label_cond_1e:
	this->start = i;
	return;

}


