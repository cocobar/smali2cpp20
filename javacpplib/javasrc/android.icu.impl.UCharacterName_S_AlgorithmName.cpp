// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterName$AlgorithmName.smali
#include "java2ctype.h"
#include "android.icu.impl.UCharacterName_S_AlgorithmName.h"
#include "android.icu.impl.UCharacterName.h"
#include "android.icu.impl.UCharacterUtility.h"
#include "android.icu.impl.Utility.h"
#include "java.lang.Integer.h"
#include "java.lang.NumberFormatException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"

static android::icu::impl::UCharacterName_S_AlgorithmName::TYPE_0_ = 0x0;
static android::icu::impl::UCharacterName_S_AlgorithmName::TYPE_1_ = 0x1;
// .method static synthetic -get0(Landroid/icu/impl/UCharacterName$AlgorithmName;)I
int android::icu::impl::UCharacterName_S_AlgorithmName::_get0(std::shared_ptr<android::icu::impl::UCharacterName_S_AlgorithmName> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/UCharacterName$AlgorithmName;
	return _this->m_rangeend_;

}
// .method static synthetic -get1(Landroid/icu/impl/UCharacterName$AlgorithmName;)I
int android::icu::impl::UCharacterName_S_AlgorithmName::_get1(std::shared_ptr<android::icu::impl::UCharacterName_S_AlgorithmName> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/UCharacterName$AlgorithmName;
	return _this->m_rangestart_;

}
// .method constructor <init>()V
android::icu::impl::UCharacterName_S_AlgorithmName::UCharacterName_S_AlgorithmName()
{
	
	std::shared_ptr<java::lang::StringBuffer> cVar0;
	
	// 069    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::lang::StringBuffer>();
	this->m_utilStringBuffer_ = cVar0;
	this->m_utilIntBuffer_ = std::make_shared<std::vector<int[]>>(0x100);
	return;

}
// .method private compareFactorString([IILjava/lang/String;I)Z
bool android::icu::impl::UCharacterName_S_AlgorithmName::compareFactorString(std::shared_ptr<int[]> index,int length,std::shared_ptr<java::lang::String> str,int offset)
{
	
	bool cVar0;
	int size;
	int count;
	int strcount;
	int i;
	
	//    .param p1, "index"    # [I
	//    .param p2, "length"    # I
	//    .param p3, "str"    # Ljava/lang/String;
	//    .param p4, "offset"    # I
	cVar0 = 0x0;
	size = this->m_factor_->size();
	//    .local v3, "size":I
	if ( !(index) )  
		goto label_cond_8;
	if ( length == size )
		goto label_cond_9;
label_cond_8:
	return cVar0;
	// 114    .line 923
label_cond_9:
	count = 0x0;
	//    .local v0, "count":I
	strcount = offset;
	//    .local v4, "strcount":I
	size = ( size + -0x1);
	i = 0x0;
	//    .local v2, "i":I
label_goto_e:
	if ( i >  size )
		goto label_cond_34;
	//    .local v1, "factor":I
	count = android::icu::impl::UCharacterUtility::skipNullTermByteSubString(this->m_factorstring_, count, index[i]);
	strcount = android::icu::impl::UCharacterUtility::compareNullTermByteSubString(str, this->m_factorstring_, strcount, count);
	if ( strcount >= 0 )
		goto label_cond_25;
	return cVar0;
	// 163    .line 938
label_cond_25:
	if ( i == size )
		goto label_cond_31;
	count = android::icu::impl::UCharacterUtility::skipNullTermByteSubString(this->m_factorstring_, count, (this->m_factor_[i] - index[i]));
label_cond_31:
	i = ( i + 0x1);
	goto label_goto_e;
	// 185    .line 943
	// 186    .end local v1    # "factor":I
label_cond_34:
	if ( strcount == str->length() )
		goto label_cond_3b;
	return cVar0;
	// 197    .line 946
label_cond_3b:
	return 0x1;

}
// .method private getFactorString([II)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::UCharacterName_S_AlgorithmName::getFactorString(std::shared_ptr<int[]> index,int length)
{
	
	int size;
	std::shared_ptr<java::lang::StringBuffer> cVar0;
	int count;
	int i;
	
	//    .param p1, "index"    # [I
	//    .param p2, "length"    # I
	size = this->m_factor_->size();
	//    .local v3, "size":I
	if ( !(index) )  
		goto label_cond_8;
	if ( length == size )
		goto label_cond_9;
label_cond_8:
	return 0x0;
	// 227    .line 885
label_cond_9:
	cVar0 = this->m_utilStringBuffer_;
	cVar0->monitor_enter();
	try {
	//label_try_start_c:
	this->m_utilStringBuffer_->setLength(0x0);
	count = 0x0;
	//    .local v0, "count":I
	size = ( size + -0x1);
	i = 0x0;
	//    .local v2, "i":I
label_goto_16:
	if ( i >  size )
		goto label_cond_3d;
	//    .local v1, "factor":I
	count = android::icu::impl::UCharacterUtility::skipNullTermByteSubString(this->m_factorstring_, count, index[i]);
	count = android::icu::impl::UCharacterUtility::getNullTermByteSubString(this->m_utilStringBuffer_, this->m_factorstring_, count);
	if ( i == size )
		goto label_cond_3a;
	count = android::icu::impl::UCharacterUtility::skipNullTermByteSubString(this->m_factorstring_, count, ( (this->m_factor_[i] - index[i]) + -0x1));
label_cond_3a:
	i = ( i + 0x1);
	goto label_goto_16;
	// 305    .line 903
	// 306    .end local v1    # "factor":I
label_cond_3d:
	//label_try_end_42:
	}
	catch (...){
		goto label_catchall_45;
	}
	//    .catchall {:try_start_c .. :try_end_42} :catchall_45
	cVar0->monitor_exit();
	return this->m_utilStringBuffer_->toString();
	// 320    .line 885
	// 321    .end local v0    # "count":I
	// 322    .end local v2    # "i":I
label_catchall_45:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method add([II)I
int android::icu::impl::UCharacterName_S_AlgorithmName::add(std::shared_ptr<int[]> set,int maxlength)
{
	
	int length;
	int i;
	int maxfactorlength;
	int count;
	char factor;
	std::shared_ptr<java::lang::StringBuffer> cVar0;
	int factor;
	
	//    .param p1, "set"    # [I
	//    .param p2, "maxlength"    # I
	length = android::icu::impl::UCharacterName::-wrap1(set, this->m_prefix_);
	//    .local v3, "length":I
	// switch
	{
	auto item = ( this->m_type_ );
	if (item == 0) goto label_pswitch_e;
	if (item == 1) goto label_pswitch_12;
	}
label_cond_b:
label_goto_b:
	if ( length <= maxlength )
		goto label_cond_4f;
	return length;
	// 360    .line 808
label_pswitch_e:
	length = (length +  this->m_variant_);
	goto label_goto_b;
	// 369    .line 818
label_pswitch_12:
	i = ( this->m_variant_ + -0x1);
	//    .local v2, "i":I
label_goto_16:
	if ( i <= 0 )
		goto label_cond_b;
	maxfactorlength = 0x0;
	//    .local v4, "maxfactorlength":I
	count = 0x0;
	//    .local v0, "count":I
	factor = this->m_factor_[i];
	//    .local v1, "factor":I
label_goto_1e:
	if ( factor <= 0 )
		goto label_cond_4b;
	cVar0 = this->m_utilStringBuffer_;
	cVar0->monitor_enter();
	try {
	//label_try_start_23:
	this->m_utilStringBuffer_->setLength(0x0);
	count = android::icu::impl::UCharacterUtility::getNullTermByteSubString(this->m_utilStringBuffer_, this->m_factorstring_, count);
	android::icu::impl::UCharacterName::-wrap0(set, this->m_utilStringBuffer_);
	if ( this->m_utilStringBuffer_->length() <= maxfactorlength )
		goto label_cond_44;
	//label_try_end_43:
	}
	catch (...){
		goto label_catchall_48;
	}
	//    .catchall {:try_start_23 .. :try_end_43} :catchall_48
	maxfactorlength = this->m_utilStringBuffer_->length();
label_cond_44:
	cVar0->monitor_exit();
	factor = ( factor + -0x1);
	goto label_goto_1e;
	// 451    .line 823
label_catchall_48:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 459    .line 838
label_cond_4b:
	length = (length +  maxfactorlength);
	i = ( i + -0x1);
	goto label_goto_16;
	// 468    .line 845
	// 469    .end local v0    # "count":I
	// 470    .end local v1    # "factor":I
	// 471    .end local v2    # "i":I
	// 472    .end local v4    # "maxfactorlength":I
label_cond_4f:
	return maxlength;
	// 476    .line 804
	// 477    :pswitch_data_50
	// 478    .packed-switch 0x0
	// 479        :pswitch_e
	// 480        :pswitch_12
	// 481    .end packed-switch

}
// .method appendName(ILjava/lang/StringBuffer;)V
void android::icu::impl::UCharacterName_S_AlgorithmName::appendName(int ch,std::shared_ptr<java::lang::StringBuffer> str)
{
	
	int offset;
	std::shared_ptr<int[]> indexes;
	std::shared_ptr<int[]> cVar0;
	int i;
	int factor;
	
	//    .param p1, "ch"    # I
	//    .param p2, "str"    # Ljava/lang/StringBuffer;
	str->append(this->m_prefix_);
	// switch
	{
	auto item = ( this->m_type_ );
	if (item == 0) goto label_pswitch_b;
	if (item == 1) goto label_pswitch_16;
	}
label_goto_a:
	return;
	// 504    .line 695
label_pswitch_b:
	str->append(android::icu::impl::Utility::hex((long long)(ch), this->m_variant_));
	goto label_goto_a;
	// 518    .line 699
label_pswitch_16:
	offset = (ch - this->m_rangestart_);
	//    .local v3, "offset":I
	indexes = this->m_utilIntBuffer_;
	//    .local v2, "indexes":[I
	cVar0 = this->m_utilIntBuffer_;
	cVar0->monitor_enter();
	try {
	//label_try_start_1f:
	i = ( this->m_variant_ + -0x1);
	//    .local v1, "i":I
label_goto_23:
	if ( i <= 0 )
		goto label_cond_33;
	factor = ( this->m_factor_[i] & 0xff);
	//    .local v0, "factor":I
	indexes[i] = (offset % factor);
	offset = (offset /  factor);
	i = ( i + -0x1);
	goto label_goto_23;
	// 565    .line 717
	// 566    .end local v0    # "factor":I
label_cond_33:
	indexes[0x0] = offset;
	str->append(this->getFactorString(indexes, this->m_variant_));
	//label_try_end_3f:
	}
	catch (...){
		goto label_catchall_41;
	}
	//    .catchall {:try_start_1f .. :try_end_3f} :catchall_41
	cVar0->monitor_exit();
	goto label_goto_a;
	// 587    .line 706
	// 588    .end local v1    # "i":I
label_catchall_41:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 596    .line 691
	// 597    :pswitch_data_44
	// 598    .packed-switch 0x0
	// 599        :pswitch_b
	// 600        :pswitch_16
	// 601    .end packed-switch

}
// .method contains(I)Z
bool android::icu::impl::UCharacterName_S_AlgorithmName::contains(int ch)
{
	
	bool cVar1;
	
	//    .param p1, "ch"    # I
	cVar1 = 0x0;
	if ( this->m_rangestart_ >  ch )
		goto label_cond_a;
	if ( ch >  this->m_rangeend_ )
		goto label_cond_a;
	cVar1 = 0x1;
label_cond_a:
	return cVar1;

}
// .method getChar(Ljava/lang/String;)I
int android::icu::impl::UCharacterName_S_AlgorithmName::getChar(std::shared_ptr<java::lang::String> name)
{
	
	int cVar0;
	int prefixlen;
	int result;
	std::vector<std::any> tryCatchExcetionList;
	int ch;
	int offset;
	std::shared_ptr<int[]> indexes;
	std::shared_ptr<int[]> cVar1;
	int i;
	int factor;
	
	//    .param p1, "name"    # Ljava/lang/String;
	cVar0 = -0x1;
	prefixlen = this->m_prefix_->length();
	//    .local v6, "prefixlen":I
	if ( name->length() <  prefixlen )
		goto label_cond_1c;
	if ( !(( this->m_prefix_->equals(name->substring(0x0, prefixlen)) ^ 0x1)) )  
		goto label_cond_1d;
label_cond_1c:
	return cVar0;
	// 670    .line 738
label_cond_1d:
	// switch
	{
	auto item = ( this->m_type_ );
	if (item == 0) goto label_pswitch_23;
	if (item == 1) goto label_pswitch_38;
	}
label_cond_22:
	return cVar0;
	// 680    .line 743
label_pswitch_23:
	try {
	//label_try_start_23:
	result = java::lang::Integer::parseInt(name->substring(prefixlen), 0x10);
	//    .local v7, "result":I
	if ( this->m_rangestart_ >  result )
		goto label_cond_22;
	//label_try_end_33:
	}
	catch (java::lang::NumberFormatException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_36;
	}
	//    .catch Ljava/lang/NumberFormatException; {:try_start_23 .. :try_end_33} :catch_36
	if ( result >  this->m_rangeend_ )
		goto label_cond_22;
	return result;
	// 710    .line 751
	// 711    .end local v7    # "result":I
label_catch_36:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/NumberFormatException;
	return cVar0;
	// 719    .line 758
	// 720    .end local v1    # "e":Ljava/lang/NumberFormatException;
label_pswitch_38:
	ch = this->m_rangestart_;
	//    .local v0, "ch":I
label_goto_3a:
	if ( ch >  this->m_rangeend_ )
		goto label_cond_22;
	offset = (ch - this->m_rangestart_);
	//    .local v5, "offset":I
	indexes = this->m_utilIntBuffer_;
	//    .local v4, "indexes":[I
	cVar1 = this->m_utilIntBuffer_;
	cVar1->monitor_enter();
	try {
	//label_try_start_47:
	i = ( this->m_variant_ + -0x1);
	//    .local v3, "i":I
label_goto_4b:
	if ( i <= 0 )
		goto label_cond_5b;
	factor = ( this->m_factor_[i] & 0xff);
	//    .local v2, "factor":I
	indexes[i] = (offset % factor);
	offset = (offset /  factor);
	i = ( i + -0x1);
	goto label_goto_4b;
	// 776    .line 778
	// 777    .end local v2    # "factor":I
label_cond_5b:
	indexes[0x0] = offset;
	//label_try_end_63:
	}
	catch (...){
		goto label_catchall_6c;
	}
	//    .catchall {:try_start_47 .. :try_end_63} :catchall_6c
	if ( !(this->compareFactorString(indexes, this->m_variant_, name, prefixlen)) )  
		goto label_cond_68;
	cVar1->monitor_exit();
	return ch;
label_cond_68:
	cVar1->monitor_exit();
	ch = ( ch + 0x1);
	goto label_goto_3a;
	// 807    .line 767
	// 808    .end local v3    # "i":I
label_catchall_6c:
	// move-exception
	
	cVar1->monitor_exit();
	// throw
	throw;
	// 816    .line 738
	// 817    nop
	// 819    :pswitch_data_70
	// 820    .packed-switch 0x0
	// 821        :pswitch_23
	// 822        :pswitch_38
	// 823    .end packed-switch

}
// .method setFactor([C)Z
bool android::icu::impl::UCharacterName_S_AlgorithmName::setFactor(std::shared_ptr<char[]> factor)
{
	
	//    .param p1, "factor"    # [C
	if ( factor->size() != this->m_variant_ )
		goto label_cond_9;
	this->m_factor_ = factor;
	return 0x1;
	// 846    .line 642
label_cond_9:
	return 0x0;

}
// .method setFactorString([B)Z
bool android::icu::impl::UCharacterName_S_AlgorithmName::setFactorString(std::shared_ptr<unsigned char[]> string)
{
	
	//    .param p1, "string"    # [B
	this->m_factorstring_ = string;
	return 0x1;

}
// .method setInfo(IIBB)Z
bool android::icu::impl::UCharacterName_S_AlgorithmName::setInfo(int rangestart,int rangeend,unsigned char type,unsigned char variant)
{
	
	bool cVar0;
	
	//    .param p1, "rangestart"    # I
	//    .param p2, "rangeend"    # I
	//    .param p3, "type"    # B
	//    .param p4, "variant"    # B
	cVar0 = 0x1;
	if ( rangestart < 0 ) 
		goto label_cond_18;
	if ( rangestart >  rangeend )
		goto label_cond_18;
	if ( rangeend >  0x10ffff )
		goto label_cond_18;
	if ( !(type) )  
		goto label_cond_f;
	if ( type != cVar0 )
		goto label_cond_18;
label_cond_f:
	this->m_rangestart_ = rangestart;
	this->m_rangeend_ = rangeend;
	this->m_type_ = type;
	this->m_variant_ = variant;
	return cVar0;
	// 910    .line 628
label_cond_18:
	return 0x0;

}
// .method setPrefix(Ljava/lang/String;)Z
bool android::icu::impl::UCharacterName_S_AlgorithmName::setPrefix(std::shared_ptr<java::lang::String> prefix)
{
	
	//    .param p1, "prefix"    # Ljava/lang/String;
	if ( !(prefix) )  
		goto label_cond_d;
	if ( prefix->length() <= 0 )
		goto label_cond_d;
	this->m_prefix_ = prefix;
	return 0x1;
	// 939    .line 656
label_cond_d:
	return 0x0;

}


