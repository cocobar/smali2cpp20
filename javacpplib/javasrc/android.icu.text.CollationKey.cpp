// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CollationKey.smali
#include "java2ctype.h"
#include "android.icu.text.CollationKey.h"
#include "android.icu.text.RawCollationKey.h"
#include "java.lang.AssertionError.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"

static android::icu::text::CollationKey::_assertionsDisabled;
static android::icu::text::CollationKey::MERGE_SEPERATOR_ = 0x2;
// .method static constructor <clinit>()V
void android::icu::text::CollationKey::static_cinit()
{
	
	android::icu::text::CollationKey::_assertionsDisabled = ( android::icu::text::CollationKey()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Landroid/icu/text/RawCollationKey;)V
android::icu::text::CollationKey::CollationKey(std::shared_ptr<java::lang::String> source,std::shared_ptr<android::icu::text::RawCollationKey> key)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p1, "source"    # Ljava/lang/String;
	//    .param p2, "key"    # Landroid/icu/text/RawCollationKey;
	// 071    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->m_source_ = source;
	this->m_length_ = ( key->size + -0x1);
	this->m_key_ = key->releaseBytes();
	if ( android::icu::text::CollationKey::_assertionsDisabled )     
		goto label_cond_24;
	if ( !(this->m_key_[this->m_length_]) )  
		goto label_cond_24;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 109    .line 180
label_cond_24:
	this->m_hashCode_ = 0x0;
	return;

}
// .method public constructor <init>(Ljava/lang/String;[B)V
android::icu::text::CollationKey::CollationKey(std::shared_ptr<java::lang::String> source,std::shared_ptr<unsigned char[]> key)
{
	
	//    .param p1, "source"    # Ljava/lang/String;
	//    .param p2, "key"    # [B
	android::icu::text::CollationKey::(source, key, -0x1);
	return;

}
// .method private constructor <init>(Ljava/lang/String;[BI)V
android::icu::text::CollationKey::CollationKey(std::shared_ptr<java::lang::String> source,std::shared_ptr<unsigned char[]> key,int length)
{
	
	//    .param p1, "source"    # Ljava/lang/String;
	//    .param p2, "key"    # [B
	//    .param p3, "length"    # I
	// 140    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->m_source_ = source;
	this->m_key_ = key;
	this->m_hashCode_ = 0x0;
	this->m_length_ = length;
	return;

}
// .method private getLength()I
int android::icu::text::CollationKey::getLength()
{
	
	int length;
	int index;
	
	if ( this->m_length_ < 0 ) 
		goto label_cond_7;
	return this->m_length_;
	// 174    .line 606
label_cond_7:
	length = this->m_key_->size();
	//    .local v1, "length":I
	index = 0x0;
	//    .local v0, "index":I
label_goto_b:
	if ( index >= length )
		goto label_cond_14;
	if ( this->m_key_[index] )     
		goto label_cond_19;
label_cond_14:
	this->m_length_ = length;
	return this->m_length_;
	// 207    .line 607
label_cond_19:
	index = ( index + 0x1);
	goto label_goto_b;

}
// .method public compareTo(Landroid/icu/text/CollationKey;)I
int android::icu::text::CollationKey::compareTo(std::shared_ptr<android::icu::text::CollationKey> target)
{
	
	int i;
	int l;
	int r;
	
	//    .param p1, "target"    # Landroid/icu/text/CollationKey;
	i = 0x0;
	//    .local v0, "i":I
label_goto_2:
	l = ( this->m_key_[i] & 0xff);
	//    .local v1, "l":I
	r = ( target->m_key_[i] & 0xff);
	//    .local v2, "r":I
	if ( l >= r )
		goto label_cond_12;
	return -0x1;
	// 252    .line 259
label_cond_12:
	if ( l <= r )
		goto label_cond_16;
	return 0x1;
	// 261    .line 261
label_cond_16:
	if ( l )     
		goto label_cond_19;
	return 0x0;
	// 268    .line 254
label_cond_19:
	i = ( i + 0x1);
	goto label_goto_2;

}
// .method public equals(Landroid/icu/text/CollationKey;)Z
bool android::icu::text::CollationKey::equals(std::shared_ptr<android::icu::text::CollationKey> target)
{
	
	bool cVar0;
	bool cVar1;
	int i;
	
	//    .param p1, "target"    # Landroid/icu/text/CollationKey;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this != target )
		goto label_cond_5;
	return cVar0;
	// 304    .line 309
label_cond_5:
	if ( target )     
		goto label_cond_8;
	return cVar1;
	// 311    .line 312
label_cond_8:
	target;
	//    .local v1, "other":Landroid/icu/text/CollationKey;
	i = 0x0;
	//    .local v0, "i":I
label_goto_a:
	if ( this->m_key_[i] == target->m_key_[i] )
		goto label_cond_15;
	return cVar1;
	// 335    .line 318
label_cond_15:
	if ( this->m_key_[i] )     
		goto label_cond_1c;
	return cVar0;
	// 346    .line 321
label_cond_1c:
	i = ( i + 0x1);
	goto label_goto_a;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::CollationKey::equals(std::shared_ptr<java::lang::Object> target)
{
	
	//    .param p1, "target"    # Ljava/lang/Object;
	if ( target->instanceOf("android::icu::text::CollationKey") )     
		goto label_cond_6;
	return 0x0;
	// 368    .line 289
label_cond_6:
	target->checkCast("android::icu::text::CollationKey");
	//    .end local p1    # "target":Ljava/lang/Object;
	return this->equals(target);

}
// .method public getBound(II)Landroid/icu/text/CollationKey;
std::shared_ptr<android::icu::text::CollationKey> android::icu::text::CollationKey::getBound(int boundType,int noOfLevels)
{
	
	unsigned char cVar0;
	int cVar1;
	int offset;
	int keystrength;
	int noOfLevels;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared<std::vector<unsigned char[]>> resultkey;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar5;
	std::shared_ptr<android::icu::text::CollationKey> cVar6;
	
	//    .param p1, "boundType"    # I
	//    .param p2, "noOfLevels"    # I
	cVar0 = -0x1;
	cVar1 = 0x0;
	offset = 0x0;
	//    .local v1, "offset":I
	//    .local v0, "keystrength":I
	if ( noOfLevels <= 0 )
		goto label_cond_91;
label_goto_6:
	if ( offset >= this->m_key_->size() )
		goto label_cond_56;
	if ( !(this->m_key_[offset]) )  
		goto label_cond_56;
	offset = ( offset + 0x1);
	//    .end local v1    # "offset":I
	//    .local v2, "offset":I
	if ( this->m_key_[offset] != 0x1 )
		goto label_cond_5e;
	keystrength = ( keystrength + 0x1);
	noOfLevels = ( noOfLevels + -0x1);
	if ( !(noOfLevels) )  
		goto label_cond_25;
	if ( offset != this->m_key_->size() )
		goto label_cond_58;
label_cond_25:
	//    .end local v2    # "offset":I
	//    .restart local v1    # "offset":I
	offset = ( offset + -0x1);
	//    .end local v1    # "offset":I
	//    .restart local v2    # "offset":I
label_goto_28:
	if ( noOfLevels <= 0 )
		goto label_cond_60;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Source collation key has only ")))->append(keystrength)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" strength level. Call getBound() again ")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" with noOfLevels < ")))->append(keystrength)->toString());
	// throw
	throw cVar3;
	// 507    .end local v2    # "offset":I
	// 508    .restart local v1    # "offset":I
label_cond_56:
	offset = offset;
	//    .end local v1    # "offset":I
	//    .restart local v2    # "offset":I
	goto label_goto_28;
	// 517    .line 423
label_cond_58:
	if ( !(this->m_key_[offset]) )  
		goto label_cond_25;
label_cond_5e:
	offset = offset;
	//    .end local v2    # "offset":I
	//    .restart local v1    # "offset":I
	goto label_goto_6;
	// 532    .line 442
	// 533    .end local v1    # "offset":I
	// 534    .restart local v2    # "offset":I
label_cond_60:
	resultkey = std::make_shared<std::vector<unsigned char[]>>(( (offset + boundType) + 0x1));
	//    .local v3, "resultkey":[B
	java::lang::System::arraycopy(this->m_key_, cVar1, resultkey, cVar1, offset);
	// switch
	{
	auto item = ( boundType );
	if (item == 0) goto label_pswitch_77;
	if (item == 1) goto label_pswitch_81;
	if (item == 2) goto label_pswitch_87;
	}
	cVar5 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal boundType argument")));
	// throw
	throw cVar5;
label_pswitch_77:
	offset = offset;
	//    .end local v2    # "offset":I
	//    .restart local v1    # "offset":I
label_goto_78:
	resultkey[offset] = cVar1;
	cVar6 = std::make_shared<android::icu::text::CollationKey>(0x0, resultkey, offset);
	return cVar6;
	// 580    .line 450
	// 581    .end local v1    # "offset":I
	// 582    .restart local v2    # "offset":I
label_pswitch_81:
	offset = ( offset + 0x1);
	//    .end local v2    # "offset":I
	//    .restart local v1    # "offset":I
	resultkey[offset] = 0x2;
	goto label_goto_78;
	// 594    .line 454
	// 595    .end local v1    # "offset":I
	// 596    .restart local v2    # "offset":I
label_pswitch_87:
	offset = ( offset + 0x1);
	//    .end local v2    # "offset":I
	//    .restart local v1    # "offset":I
	resultkey[offset] = cVar0;
	//    .end local v1    # "offset":I
	//    .restart local v2    # "offset":I
	resultkey[offset] = cVar0;
	offset = ( offset + 0x1);
	//    .end local v2    # "offset":I
	//    .restart local v1    # "offset":I
	goto label_goto_78;
	// 618    .end local v3    # "resultkey":[B
label_cond_91:
	offset = offset;
	//    .end local v1    # "offset":I
	//    .restart local v2    # "offset":I
	goto label_goto_28;
	// 626    .line 444
	// 627    nop
	// 629    :pswitch_data_94
	// 630    .packed-switch 0x0
	// 631        :pswitch_77
	// 632        :pswitch_81
	// 633        :pswitch_87
	// 634    .end packed-switch

}
// .method public getSourceString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CollationKey::getSourceString()
{
	
	return this->m_source_;

}
// .method public hashCode()I
int android::icu::text::CollationKey::hashCode()
{
	
	std::shared_ptr<java::lang::StringBuilder> key;
	int i;
	
	if ( this->m_hashCode_ )     
		goto label_cond_b;
	if ( this->m_key_ )     
		goto label_cond_e;
	this->m_hashCode_ = 0x1;
label_cond_b:
label_goto_b:
	return this->m_hashCode_;
	// 673    .line 343
label_cond_e:
	//    .local v2, "size":I
	key = std::make_shared<java::lang::StringBuilder>(_shri(this->m_key_->size(),0x1));
	//    .local v1, "key":Ljava/lang/StringBuilder;
	i = 0x0;
	//    .local v0, "i":I
label_goto_19:
	if ( !(this->m_key_[i]) )  
		goto label_cond_3d;
	if ( !(this->m_key_[( i + 0x1)]) )  
		goto label_cond_3d;
	key->append((char)((( this->m_key_[i] << 0x8) |  ( this->m_key_[( i + 0x1)] & 0xff))));
	i = ( i + 0x2);
	goto label_goto_19;
	// 734    .line 350
label_cond_3d:
	if ( !(this->m_key_[i]) )  
		goto label_cond_4d;
	key->append((char)(( this->m_key_[i] << 0x8)));
label_cond_4d:
	this->m_hashCode_ = key->toString()->hashCode();
	goto label_goto_b;

}
// .method public merge(Landroid/icu/text/CollationKey;)Landroid/icu/text/CollationKey;
std::shared_ptr<android::icu::text::CollationKey> android::icu::text::CollationKey::merge(std::shared_ptr<android::icu::text::CollationKey> source)
{
	
	unsigned char cVar0;
	unsigned char cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared<std::vector<unsigned char[]>> result;
	int rindex;
	int index;
	int sourceindex;
	int remainingLength;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	std::shared_ptr<android::icu::text::CollationKey> cVar4;
	
	//    .param p1, "source"    # Landroid/icu/text/CollationKey;
	cVar0 = 0x2;
	cVar1 = 0x1;
	if ( !(source) )  
		goto label_cond_c;
	if ( source->getLength() )     
		goto label_cond_15;
label_cond_c:
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("CollationKey argument can not be null or of 0 length")));
	// throw
	throw cVar2;
	// 802    .line 516
label_cond_15:
	result = std::make_shared<std::vector<unsigned char[]>>(( (this->getLength() +  source->getLength()) + 0x2));
	//    .local v3, "result":[B
	rindex = 0x0;
	//    .local v4, "rindex":I
	index = 0x0;
	//    .local v0, "index":I
	sourceindex = 0x0;
	//    .local v6, "sourceindex":I
label_goto_25:
	if ( this->m_key_[index] < 0 ) 
		goto label_cond_31;
	if ( this->m_key_[index] <  cVar0 )
		goto label_cond_3e;
label_cond_31:
	rindex = ( rindex + 0x1);
	//    .end local v4    # "rindex":I
	//    .local v5, "rindex":I
	index = ( index + 0x1);
	//    .end local v0    # "index":I
	//    .local v1, "index":I
	result[rindex] = this->m_key_[index];
	index = index;
	//    .end local v1    # "index":I
	//    .restart local v0    # "index":I
	rindex = rindex;
	//    .end local v5    # "rindex":I
	//    .restart local v4    # "rindex":I
	goto label_goto_25;
	// 871    .line 530
label_cond_3e:
	rindex = ( rindex + 0x1);
	//    .end local v4    # "rindex":I
	//    .restart local v5    # "rindex":I
	result[rindex] = cVar0;
	rindex = rindex;
	//    .end local v5    # "rindex":I
	//    .restart local v4    # "rindex":I
label_goto_43:
	if ( source->m_key_[sourceindex] < 0 ) 
		goto label_cond_4f;
	if ( source->m_key_[sourceindex] <  cVar0 )
		goto label_cond_5c;
label_cond_4f:
	rindex = ( rindex + 0x1);
	//    .end local v4    # "rindex":I
	//    .restart local v5    # "rindex":I
	sourceindex = ( sourceindex + 0x1);
	//    .end local v6    # "sourceindex":I
	//    .local v7, "sourceindex":I
	result[rindex] = source->m_key_[sourceindex];
	sourceindex = sourceindex;
	//    .end local v7    # "sourceindex":I
	//    .restart local v6    # "sourceindex":I
	rindex = rindex;
	//    .end local v5    # "rindex":I
	//    .restart local v4    # "rindex":I
	goto label_goto_43;
	// 924    .line 540
label_cond_5c:
	if ( this->m_key_[index] != cVar1 )
		goto label_cond_72;
	if ( source->m_key_[sourceindex] != cVar1 )
		goto label_cond_72;
	index = ( index + 0x1);
	sourceindex = ( sourceindex + 0x1);
	rindex = ( rindex + 0x1);
	//    .end local v4    # "rindex":I
	//    .restart local v5    # "rindex":I
	result[rindex] = cVar1;
	rindex = rindex;
	//    .end local v5    # "rindex":I
	//    .restart local v4    # "rindex":I
	goto label_goto_25;
	// 958    .line 556
label_cond_72:
	remainingLength = (this->m_length_ - index);
	//    .local v2, "remainingLength":I
	if ( remainingLength <= 0 )
		goto label_cond_8f;
	java::lang::System::arraycopy(this->m_key_, index, result, rindex, remainingLength);
	rindex = (rindex +  remainingLength);
label_cond_7e:
label_goto_7e:
	result[rindex] = 0x0;
	if ( android::icu::text::CollationKey::_assertionsDisabled )     
		goto label_cond_9c;
	if ( rindex == ( result->size() + -0x1) )
		goto label_cond_9c;
	cVar3 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar3;
	// 997    .line 560
label_cond_8f:
	remainingLength = (source->m_length_ - sourceindex);
	if ( remainingLength <= 0 )
		goto label_cond_7e;
	java::lang::System::arraycopy(source->m_key_, sourceindex, result, rindex, remainingLength);
	rindex = (rindex +  remainingLength);
	goto label_goto_7e;
	// 1015    .line 567
label_cond_9c:
	cVar4 = std::make_shared<android::icu::text::CollationKey>(0x0, result, rindex);
	return cVar4;

}
// .method public toByteArray()[B
unsigned char android::icu::text::CollationKey::toByteArray()
{
	
	int cVar0;
	int length;
	std::shared<std::vector<unsigned char[]>> result;
	
	cVar0 = 0x0;
	length = ( this->getLength() + 0x1);
	//    .local v0, "length":I
	result = std::make_shared<std::vector<unsigned char[]>>(length);
	//    .local v1, "result":[B
	java::lang::System::arraycopy(this->m_key_, cVar0, result, cVar0, length);
	return result;

}


