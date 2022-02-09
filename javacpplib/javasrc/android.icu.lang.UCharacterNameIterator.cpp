// CPP L:\smali2cpp20\x64\Release\out\android\icu\lang\UCharacterNameIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.UCharacterName.h"
#include "android.icu.lang.UCharacterNameIterator.h"
#include "android.icu.util.ValueIterator_S_Element.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

static android::icu::lang::UCharacterNameIterator::GROUP_LENGTHS_;
static android::icu::lang::UCharacterNameIterator::GROUP_OFFSETS_;
// .method static constructor <clinit>()V
void android::icu::lang::UCharacterNameIterator::static_cinit()
{
	
	int cVar0;
	
	cVar0 = 0x21;
	android::icu::lang::UCharacterNameIterator::GROUP_OFFSETS_ = std::make_shared<std::vector<char[]>>(cVar0);
	android::icu::lang::UCharacterNameIterator::GROUP_LENGTHS_ = std::make_shared<std::vector<char[]>>(cVar0);
	return;

}
// .method protected constructor <init>(Landroid/icu/impl/UCharacterName;I)V
android::icu::lang::UCharacterNameIterator::UCharacterNameIterator(std::shared_ptr<android::icu::impl::UCharacterName> name,int choice)
{
	
	int cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	
	//    .param p1, "name"    # Landroid/icu/impl/UCharacterName;
	//    .param p2, "choice"    # I
	cVar0 = -0x1;
	// 063    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->m_groupIndex_ = cVar0;
	this->m_algorithmIndex_ = cVar0;
	if ( name )     
		goto label_cond_13;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("UCharacterName name argument cannot be null. Missing unames.icu?")));
	// throw
	throw cVar1;
	// 083    .line 179
label_cond_13:
	this->m_name_ = name;
	this->m_choice_ = choice;
	this->m_start_ = 0x0;
	this->m_limit_ = 0x110000;
	this->m_current_ = this->m_start_;
	return;

}
// .method private iterateExtended(Landroid/icu/util/ValueIterator$Element;I)Z
bool android::icu::lang::UCharacterNameIterator::iterateExtended(std::shared_ptr<android::icu::util::ValueIterator_S_Element> result,int limit)
{
	
	std::shared_ptr<java::lang::String> name;
	
	//    .param p1, "result"    # Landroid/icu/util/ValueIterator$Element;
	//    .param p2, "limit"    # I
label_goto_1:
	if ( this->m_current_ >= limit )
		goto label_cond_23;
	name = this->m_name_->getExtendedOr10Name(this->m_current_);
	//    .local v0, "name":Ljava/lang/String;
	if ( !(name) )  
		goto label_cond_1c;
	if ( name->length() <= 0 )
		goto label_cond_1c;
	result->integer = this->m_current_;
	result->value = name;
	return 0x0;
	// 153    .line 337
label_cond_1c:
	this->m_current_ = ( this->m_current_ + 0x1);
	goto label_goto_1;
	// 163    .line 339
	// 164    .end local v0    # "name":Ljava/lang/String;
label_cond_23:
	return 0x1;

}
// .method private iterateGroup(Landroid/icu/util/ValueIterator$Element;I)Z
bool android::icu::lang::UCharacterNameIterator::iterateGroup(std::shared_ptr<android::icu::util::ValueIterator_S_Element> result,int limit)
{
	
	bool cVar0;
	int startMSB;
	int gMSB;
	int gMIN;
	
	//    .param p1, "result"    # Landroid/icu/util/ValueIterator$Element;
	//    .param p2, "limit"    # I
	cVar0 = 0x0;
	if ( this->m_groupIndex_ >= 0 )
		goto label_cond_f;
	this->m_groupIndex_ = this->m_name_->getGroup(this->m_current_);
label_cond_f:
label_goto_f:
	if ( this->m_groupIndex_ >= this->m_name_->m_groupcount_ )
		goto label_cond_69;
	if ( this->m_current_ >= limit )
		goto label_cond_69;
	startMSB = android::icu::impl::UCharacterName::getCodepointMSB(this->m_current_);
	//    .local v2, "startMSB":I
	gMSB = this->m_name_->getGroupMSB(this->m_groupIndex_);
	//    .local v1, "gMSB":I
	if ( startMSB != gMSB )
		goto label_cond_4a;
	if ( startMSB != android::icu::impl::UCharacterName::getCodepointMSB(( limit + -0x1)) )
		goto label_cond_38;
	return this->iterateSingleGroup(result, limit);
	// 248    .line 292
label_cond_38:
	if ( this->iterateSingleGroup(result, android::icu::impl::UCharacterName::getGroupLimit(gMSB)) )     
		goto label_cond_43;
	return cVar0;
	// 264    .line 295
label_cond_43:
	this->m_groupIndex_ = ( this->m_groupIndex_ + 0x1);
	goto label_goto_f;
	// 274    .line 297
label_cond_4a:
	if ( startMSB <= gMSB )
		goto label_cond_53;
	this->m_groupIndex_ = ( this->m_groupIndex_ + 0x1);
	goto label_goto_f;
	// 287    .line 303
label_cond_53:
	gMIN = android::icu::impl::UCharacterName::getGroupMin(gMSB);
	//    .local v0, "gMIN":I
	if ( gMIN <= limit )
		goto label_cond_5a;
	gMIN = limit;
label_cond_5a:
	if ( this->m_choice_ != 0x2 )
		goto label_cond_66;
	if ( this->iterateExtended(result, gMIN) )     
		goto label_cond_66;
	return cVar0;
	// 318    .line 312
label_cond_66:
	this->m_current_ = gMIN;
	goto label_goto_f;
	// 324    .line 316
	// 325    .end local v0    # "gMIN":I
	// 326    .end local v1    # "gMSB":I
	// 327    .end local v2    # "startMSB":I
label_cond_69:
	return 0x1;

}
// .method private iterateSingleGroup(Landroid/icu/util/ValueIterator$Element;I)Z
bool android::icu::lang::UCharacterNameIterator::iterateSingleGroup(std::shared_ptr<android::icu::util::ValueIterator_S_Element> result,int limit)
{
	
	std::shared_ptr<char[]> cVar0;
	std::shared_ptr<char[]> cVar1;
	int offset;
	std::shared_ptr<java::lang::String> name;
	
	//    .param p1, "result"    # Landroid/icu/util/ValueIterator$Element;
	//    .param p2, "limit"    # I
	cVar0 = android::icu::lang::UCharacterNameIterator::GROUP_OFFSETS_;
	cVar0->monitor_enter();
	try {
	//label_try_start_4:
	cVar1 = android::icu::lang::UCharacterNameIterator::GROUP_LENGTHS_;
	cVar1->monitor_enter();
	//label_try_end_7:
	}
	catch (...){
		goto label_catchall_5e;
	}
	//    .catchall {:try_start_4 .. :try_end_7} :catchall_5e
	try {
	//label_try_start_7:
	//    .local v0, "index":I
label_goto_13:
	if ( this->m_current_ >= limit )
		goto label_cond_61;
	offset = android::icu::impl::UCharacterName::getGroupOffset(this->m_current_);
	//    .local v2, "offset":I
	name = this->m_name_->getGroupName((android::icu::lang::UCharacterNameIterator::GROUP_OFFSETS_[offset] +  this->m_name_->getGroupLengths(this->m_groupIndex_, android::icu::lang::UCharacterNameIterator::GROUP_OFFSETS_, android::icu::lang::UCharacterNameIterator::GROUP_LENGTHS_)), android::icu::lang::UCharacterNameIterator::GROUP_LENGTHS_[offset], this->m_choice_);
	//    .local v1, "name":Ljava/lang/String;
	if ( !(name) )  
		goto label_cond_36;
	if ( name->length() )     
		goto label_cond_43;
label_cond_36:
	if ( this->m_choice_ != 0x2 )
		goto label_cond_43;
	name = this->m_name_->getExtendedName(this->m_current_);
label_cond_43:
	if ( !(name) )  
		goto label_cond_54;
	if ( name->length() <= 0 )
		goto label_cond_54;
	result->integer = this->m_current_;
	result->value = name;
	//label_try_end_51:
	}
	catch (...){
		goto label_catchall_5b;
	}
	//    .catchall {:try_start_7 .. :try_end_51} :catchall_5b
	try {
	//label_try_start_51:
	cVar1->monitor_exit();
	//label_try_end_52:
	}
	catch (...){
		goto label_catchall_5e;
	}
	//    .catchall {:try_start_51 .. :try_end_52} :catchall_5e
	cVar0->monitor_exit();
	return 0x0;
	// 465    .line 256
label_cond_54:
	try {
	//label_try_start_54:
	this->m_current_ = ( this->m_current_ + 0x1);
	//label_try_end_5a:
	}
	catch (...){
		goto label_catchall_5b;
	}
	//    .catchall {:try_start_54 .. :try_end_5a} :catchall_5b
	goto label_goto_13;
	// 478    .line 239
	// 479    .end local v0    # "index":I
	// 480    .end local v1    # "name":Ljava/lang/String;
	// 481    .end local v2    # "offset":I
label_catchall_5b:
	// move-exception
	
	try {
	//label_try_start_5c:
	cVar1->monitor_exit();
	// throw
	throw;
	// 489    :try_end_5e
	// 490    .catchall {:try_start_5c .. :try_end_5e} :catchall_5e
	// 492    .line 238
label_catchall_5e:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 500    .restart local v0    # "index":I
label_cond_61:
	try {
	//label_try_start_61:
	cVar1->monitor_exit();
	//label_try_end_62:
	}
	catch (...){
		goto label_catchall_5e;
	}
	//    .catchall {:try_start_61 .. :try_end_62} :catchall_5e
	cVar0->monitor_exit();
	return 0x1;

}
// .method public next(Landroid/icu/util/ValueIterator$Element;)Z
bool android::icu::lang::UCharacterNameIterator::next(std::shared_ptr<android::icu::util::ValueIterator_S_Element> element)
{
	
	int cVar0;
	bool cVar1;
	bool cVar2;
	int length;
	int start;
	
	//    .param p1, "element"    # Landroid/icu/util/ValueIterator$Element;
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	if ( this->m_current_ <  this->m_limit_ )
		goto label_cond_a;
	return cVar2;
	// 538    .line 44
label_cond_a:
	if ( !(this->m_choice_) )  
		goto label_cond_12;
	if ( this->m_choice_ != cVar0 )
		goto label_cond_7c;
label_cond_12:
	length = this->m_name_->getAlgorithmLength();
	//    .local v1, "length":I
	if ( this->m_algorithmIndex_ >= length )
		goto label_cond_7c;
label_goto_1c:
	if ( this->m_algorithmIndex_ >= length )
		goto label_cond_37;
	if ( this->m_algorithmIndex_ < 0 ) 
		goto label_cond_30;
	if ( this->m_name_->getAlgorithmEnd(this->m_algorithmIndex_) >= this->m_current_ )
		goto label_cond_37;
label_cond_30:
	this->m_algorithmIndex_ = ( this->m_algorithmIndex_ + 0x1);
	goto label_goto_1c;
	// 599    .line 61
label_cond_37:
	if ( this->m_algorithmIndex_ >= length )
		goto label_cond_7c;
	start = this->m_name_->getAlgorithmStart(this->m_algorithmIndex_);
	//    .local v2, "start":I
	if ( this->m_current_ >= start )
		goto label_cond_5b;
	//    .local v0, "end":I
	if ( this->m_limit_ >  start )
		goto label_cond_4e;
label_cond_4e:
	if ( this->iterateGroup(element, start) )     
		goto label_cond_5b;
	this->m_current_ = ( this->m_current_ + 0x1);
	return cVar1;
	// 650    .line 84
	// 651    .end local v0    # "end":I
label_cond_5b:
	if ( this->m_current_ <  this->m_limit_ )
		goto label_cond_62;
	return cVar2;
	// 662    .line 90
label_cond_62:
	element->integer = this->m_current_;
	element->value = this->m_name_->getAlgorithmName(this->m_algorithmIndex_, this->m_current_);
	this->m_groupIndex_ = -0x1;
	this->m_current_ = ( this->m_current_ + 0x1);
	return cVar1;
	// 698    .line 101
	// 699    .end local v1    # "length":I
	// 700    .end local v2    # "start":I
label_cond_7c:
	if ( this->iterateGroup(element, this->m_limit_) )     
		goto label_cond_8b;
	this->m_current_ = ( this->m_current_ + 0x1);
	return cVar1;
	// 720    .line 105
label_cond_8b:
	if ( this->m_choice_ != cVar0 )
		goto label_cond_9e;
	if ( this->iterateExtended(element, this->m_limit_) )     
		goto label_cond_9e;
	this->m_current_ = ( this->m_current_ + 0x1);
	return cVar1;
	// 745    .line 112
label_cond_9e:
	return cVar2;

}
// .method public reset()V
void android::icu::lang::UCharacterNameIterator::reset()
{
	
	int cVar0;
	
	cVar0 = -0x1;
	this->m_current_ = this->m_start_;
	this->m_groupIndex_ = cVar0;
	this->m_algorithmIndex_ = cVar0;
	return;

}
// .method public setRange(II)V
void android::icu::lang::UCharacterNameIterator::setRange(int start,int limit)
{
	
	int cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	cVar0 = 0x110000;
	if ( start <  limit )
		goto label_cond_e;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("start or limit has to be valid Unicode codepoints and start < limit")));
	// throw
	throw cVar1;
	// 795    .line 150
label_cond_e:
	if ( start >= 0 )
		goto label_cond_1b;
	this->m_start_ = 0x0;
label_goto_12:
	if ( limit <= cVar0 )
		goto label_cond_1e;
	this->m_limit_ = cVar0;
label_goto_16:
	this->m_current_ = this->m_start_;
	return;
	// 818    .line 154
label_cond_1b:
	this->m_start_ = start;
	goto label_goto_12;
	// 824    .line 161
label_cond_1e:
	this->m_limit_ = limit;
	goto label_goto_16;

}


