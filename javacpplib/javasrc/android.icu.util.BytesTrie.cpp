// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\BytesTrie.smali
#include "java2ctype.h"
#include "android.icu.util.BytesTrie_S_Iterator.h"
#include "android.icu.util.BytesTrie_S_Result.h"
#include "android.icu.util.BytesTrie_S_State.h"
#include "android.icu.util.BytesTrie.h"
#include "android.icu.util.ICUUncheckedIOException.h"
#include "java.io.IOException.h"
#include "java.lang.Appendable.h"
#include "java.lang.AssertionError.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

static android::icu::util::BytesTrie::_assertionsDisabled;
static android::icu::util::BytesTrie::kFiveByteDeltaLead = 0xff;
static android::icu::util::BytesTrie::kFiveByteValueLead = 0x7f;
static android::icu::util::BytesTrie::kFourByteDeltaLead = 0xfe;
static android::icu::util::BytesTrie::kFourByteValueLead = 0x7e;
static android::icu::util::BytesTrie::kMaxBranchLinearSubNodeLength = 0x5;
static android::icu::util::BytesTrie::kMaxLinearMatchLength = 0x10;
static android::icu::util::BytesTrie::kMaxOneByteDelta = 0xbf;
static android::icu::util::BytesTrie::kMaxOneByteValue = 0x40;
static android::icu::util::BytesTrie::kMaxThreeByteDelta = 0xdffff;
static android::icu::util::BytesTrie::kMaxThreeByteValue = 0x11ffff;
static android::icu::util::BytesTrie::kMaxTwoByteDelta = 0x2fff;
static android::icu::util::BytesTrie::kMaxTwoByteValue = 0x1aff;
static android::icu::util::BytesTrie::kMinLinearMatch = 0x10;
static android::icu::util::BytesTrie::kMinOneByteValueLead = 0x10;
static android::icu::util::BytesTrie::kMinThreeByteDeltaLead = 0xf0;
static android::icu::util::BytesTrie::kMinThreeByteValueLead = 0x6c;
static android::icu::util::BytesTrie::kMinTwoByteDeltaLead = 0xc0;
static android::icu::util::BytesTrie::kMinTwoByteValueLead = 0x51;
static android::icu::util::BytesTrie::kMinValueLead = 0x20;
static android::icu::util::BytesTrie::kValueIsFinal = 0x1;
static android::icu::util::BytesTrie::valueResults_;
// .method static synthetic -wrap0([BI)I
int android::icu::util::BytesTrie::_wrap0(std::shared_ptr<unsigned char[]> bytes,int pos)
{
	
	//    .param p0, "bytes"    # [B
	//    .param p1, "pos"    # I
	return android::icu::util::BytesTrie::jumpByDelta(bytes, pos);

}
// .method static synthetic -wrap1([BII)I
int android::icu::util::BytesTrie::_wrap1(std::shared_ptr<unsigned char[]> bytes,int pos,int leadByte)
{
	
	//    .param p0, "bytes"    # [B
	//    .param p1, "pos"    # I
	//    .param p2, "leadByte"    # I
	return android::icu::util::BytesTrie::readValue(bytes, pos, leadByte);

}
// .method static synthetic -wrap2([BI)I
int android::icu::util::BytesTrie::_wrap2(std::shared_ptr<unsigned char[]> bytes,int pos)
{
	
	//    .param p0, "bytes"    # [B
	//    .param p1, "pos"    # I
	return android::icu::util::BytesTrie::skipDelta(bytes, pos);

}
// .method static synthetic -wrap3(II)I
int android::icu::util::BytesTrie::_wrap3(int pos,int leadByte)
{
	
	//    .param p0, "pos"    # I
	//    .param p1, "leadByte"    # I
	return android::icu::util::BytesTrie::skipValue(pos, leadByte);

}
// .method static constructor <clinit>()V
void android::icu::util::BytesTrie::static_cinit()
{
	
	std::shared<std::vector<std::vector<android::icu::util::BytesTrie_S_Result>>> cVar0;
	
	android::icu::util::BytesTrie::_assertionsDisabled = ( android::icu::util::BytesTrie()->desiredAssertionStatus() ^ 0x1);
	cVar0 = std::make_shared<std::vector<std::vector<android::icu::util::BytesTrie_S_Result>>>(0x2);
	cVar0[0x0] = android::icu::util::BytesTrie_S_Result::INTERMEDIATE_VALUE;
	cVar0[0x1] = android::icu::util::BytesTrie_S_Result::FINAL_VALUE;
	android::icu::util::BytesTrie::valueResults_ = cVar0;
	return;

}
// .method public constructor <init>([BI)V
android::icu::util::BytesTrie::BytesTrie(std::shared_ptr<unsigned char[]> trieBytes,int offset)
{
	
	//    .param p1, "trieBytes"    # [B
	//    .param p2, "offset"    # I
	// 186    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->bytes_ = trieBytes;
	this->root_ = offset;
	this->pos_ = offset;
	this->remainingMatchLength_ = -0x1;
	return;

}
// .method private static append(Ljava/lang/Appendable;I)V
void android::icu::util::BytesTrie::append(std::shared_ptr<java::lang::Appendable> out,int c)
{
	
	std::shared_ptr<android::icu::util::ICUUncheckedIOException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "out"    # Ljava/lang/Appendable;
	//    .param p1, "c"    # I
	try {
	//label_try_start_1:
	out->append((char)(c));
	//label_try_end_4:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5;
	}
	//    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_4} :catch_5
	return;
	// 222    .line 947
label_catch_5:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	cVar0 = std::make_shared<android::icu::util::ICUUncheckedIOException>(getCatchExcetionFromList);
	// throw
	throw cVar0;

}
// .method private branchNext(III)Landroid/icu/util/BytesTrie$Result;
std::shared_ptr<android::icu::util::BytesTrie_S_Result> android::icu::util::BytesTrie::branchNext(int pos,int cVar2,int inByte)
{
	
	int cVar0;
	int cVar1;
	int pos;
	int cVar2;
	int cVar3;
	int node;
	std::shared_ptr<java::lang::AssertionError> cVar7;
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> cVar8;
	
	//    .param p1, "pos"    # I
	//    .param p2, "length"    # I
	//    .param p3, "inByte"    # I
	cVar0 = 0x7e;
	cVar1 = 0x20;
	if ( cVar2 )     
		goto label_cond_f;
	pos = ( pos + 0x1);
	//    .end local p1    # "pos":I
	//    .local v2, "pos":I
	cVar2 = ( this->bytes_[pos] & 0xff);
	pos = pos;
	//    .end local v2    # "pos":I
	//    .restart local p1    # "pos":I
label_cond_f:
	cVar3 = ( cVar2 + 0x1);
	pos = pos;
	//    .end local p1    # "pos":I
	//    .restart local v2    # "pos":I
label_goto_12:
	if ( cVar3 <= 0x5 )
		goto label_cond_122;
	pos = ( pos + 0x1);
	//    .end local v2    # "pos":I
	//    .restart local p1    # "pos":I
	if ( inByte >= ( this->bytes_[pos] & 0xff) )
		goto label_cond_29;
	cVar3 = _shri(cVar3,0x1);
	pos = android::icu::util::BytesTrie::jumpByDelta(this->bytes_, pos);
label_goto_27:
	pos = pos;
	//    .end local p1    # "pos":I
	//    .restart local v2    # "pos":I
	goto label_goto_12;
	// 308    .line 763
	// 309    .end local v2    # "pos":I
	// 310    .restart local p1    # "pos":I
label_cond_29:
	cVar3 = (cVar3 -  _shri(cVar3,0x1));
	pos = android::icu::util::BytesTrie::skipDelta(this->bytes_, pos);
	goto label_goto_27;
	// 325    .line 806
	// 326    .end local p1    # "pos":I
	// 327    .restart local v2    # "pos":I
label_cond_33:
	cVar3 = ( cVar3 + -0x1);
	pos = android::icu::util::BytesTrie::skipValue(this->bytes_, pos);
	//    .end local v2    # "pos":I
	//    .restart local p1    # "pos":I
	if ( cVar3 <= 0x1 )
		goto label_cond_fe;
label_goto_3e:
	pos = ( pos + 0x1);
	//    .end local p1    # "pos":I
	//    .restart local v2    # "pos":I
	if ( inByte != ( this->bytes_[pos] & 0xff) )
		goto label_cond_33;
	node = ( this->bytes_[pos] & 0xff);
	//    .local v1, "node":I
	if ( android::icu::util::BytesTrie::_assertionsDisabled )     
		goto label_cond_5a;
	if ( node >= cVar1 )
		goto label_cond_5a;
	cVar7 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar7;
	// 380    .line 775
label_cond_5a:
	if ( !(( node & 0x1)) )  
		goto label_cond_64;
	//    .local v3, "result":Landroid/icu/util/BytesTrie$Result;
	pos = pos;
	//    .end local v2    # "pos":I
	//    .restart local p1    # "pos":I
label_goto_61:
	this->pos_ = pos;
	return result;
	// 401    .line 780
	// 402    .end local v3    # "result":Landroid/icu/util/BytesTrie$Result;
	// 403    .end local p1    # "pos":I
	// 404    .restart local v2    # "pos":I
label_cond_64:
	pos = ( pos + 0x1);
	//    .end local v2    # "pos":I
	//    .restart local p1    # "pos":I
	node = _shri(node,0x1);
	if ( node >= 0x51 )
		goto label_cond_7e;
	//    .local v0, "delta":I
label_goto_6e:
	pos = (pos +  delta);
	node = ( this->bytes_[pos] & 0xff);
	if ( node <  cVar1 )
		goto label_cond_fa;
	//    .restart local v3    # "result":Landroid/icu/util/BytesTrie$Result;
	goto label_goto_61;
	// 445    .line 786
	// 446    .end local v0    # "delta":I
	// 447    .end local v3    # "result":Landroid/icu/util/BytesTrie$Result;
label_cond_7e:
	if ( node >= 0x6c )
		goto label_cond_92;
	pos = ( pos + 0x1);
	//    .end local p1    # "pos":I
	//    .restart local v2    # "pos":I
	//    .restart local v0    # "delta":I
	pos = pos;
	//    .end local v2    # "pos":I
	//    .restart local p1    # "pos":I
	goto label_goto_6e;
	// 477    .line 788
	// 478    .end local v0    # "delta":I
label_cond_92:
	if ( node >= cVar0 )
		goto label_cond_ae;
	//    .restart local v0    # "delta":I
	pos = ( pos + 0x2);
	goto label_goto_6e;
	// 513    .line 791
	// 514    .end local v0    # "delta":I
label_cond_ae:
	if ( node != cVar0 )
		goto label_cond_d0;
	//    .restart local v0    # "delta":I
	pos = ( pos + 0x3);
	goto label_goto_6e;
	// 555    .line 795
	// 556    .end local v0    # "delta":I
label_cond_d0:
	//    .restart local v0    # "delta":I
	pos = ( pos + 0x4);
	goto label_goto_6e;
	// 604    .line 801
label_cond_fa:
	//    .restart local v3    # "result":Landroid/icu/util/BytesTrie$Result;
	goto label_goto_61;
	// 611    .line 809
	// 612    .end local v0    # "delta":I
	// 613    .end local v1    # "node":I
	// 614    .end local v3    # "result":Landroid/icu/util/BytesTrie$Result;
label_cond_fe:
	pos = ( pos + 0x1);
	//    .end local p1    # "pos":I
	//    .restart local v2    # "pos":I
	if ( inByte != ( this->bytes_[pos] & 0xff) )
		goto label_cond_11c;
	this->pos_ = pos;
	node = ( this->bytes_[pos] & 0xff);
	//    .restart local v1    # "node":I
	if ( node <  cVar1 )
		goto label_cond_119;
	cVar8 = android::icu::util::BytesTrie::valueResults_[( node & 0x1)];
label_goto_118:
	return cVar8;
label_cond_119:
	cVar8 = android::icu::util::BytesTrie_S_Result::NO_VALUE;
	goto label_goto_118;
	// 656    .line 814
	// 657    .end local v1    # "node":I
label_cond_11c:
	this->stop();
	return android::icu::util::BytesTrie_S_Result::NO_MATCH;
label_cond_122:
	pos = pos;
	//    .end local v2    # "pos":I
	//    .restart local p1    # "pos":I
	goto label_goto_3e;

}
// .method private static findUniqueValue([BIJ)J
long long android::icu::util::BytesTrie::findUniqueValue(std::shared_ptr<unsigned char[]> bytes,int pos,long long uniqueValue)
{
	
	int cVar0;
	long long cVar1;
	int pos;
	int node;
	long long uniqueValue;
	int value;
	
	//    .param p0, "bytes"    # [B
	//    .param p1, "pos"    # I
	//    .param p2, "uniqueValue"    # J
	cVar0 = 0x1;
	cVar1 = 0x0;
label_goto_3:
	pos = ( pos + 0x1);
	//    .end local p1    # "pos":I
	//    .local v2, "pos":I
	node = ( bytes[pos] & 0xff);
	//    .local v1, "node":I
	if ( node >= 0x10 )
		goto label_cond_26;
	if ( node )     
		goto label_cond_56;
	pos = ( pos + 0x1);
	//    .end local v2    # "pos":I
	//    .restart local p1    # "pos":I
label_goto_15:
	uniqueValue = android::icu::util::BytesTrie::findUniqueValueFromBranch(bytes, pos, ( node + 0x1), uniqueValue);
	if ( (uniqueValue > cVar1) )     
		goto label_cond_20;
	return cVar1;
	// 729    .line 907
label_cond_20:
	pos = (int)(_ushrll(uniqueValue,0x21));
	goto label_goto_3;
	// 739    .line 908
	// 740    .end local p1    # "pos":I
	// 741    .restart local v2    # "pos":I
label_cond_26:
	if ( node >= 0x20 )
		goto label_cond_31;
	pos = (pos + ( ( node + -0x10) + 0x1));
	//    .end local v2    # "pos":I
	//    .restart local p1    # "pos":I
	goto label_goto_3;
	// 758    .line 912
	// 759    .end local p1    # "pos":I
	// 760    .restart local v2    # "pos":I
label_cond_31:
	if ( !(( node & 0x1)) )  
		goto label_cond_46;
	//    .local v0, "isFinal":Z
label_goto_36:
	value = android::icu::util::BytesTrie::readValue(bytes, pos, _shri(node,0x1));
	//    .local v3, "value":I
	if ( !((uniqueValue > cVar1)) )  
		goto label_cond_48;
	if ( value == (int)(_shrll(uniqueValue,cVar0)) )
		goto label_cond_4e;
	return cVar1;
	// 793    .line 912
	// 794    .end local v0    # "isFinal":Z
	// 795    .end local v3    # "value":I
label_cond_46:
	//    .restart local v0    # "isFinal":Z
	goto label_goto_36;
	// 802    .line 919
	// 803    .restart local v3    # "value":I
label_cond_48:
	uniqueValue = (((long long)(value) << cVar0) | 0x1);
label_cond_4e:
	if ( !(isFinal) )  
		goto label_cond_51;
	return uniqueValue;
	// 820    .line 924
label_cond_51:
	pos = android::icu::util::BytesTrie::skipValue(pos, node);
	//    .end local v2    # "pos":I
	//    .restart local p1    # "pos":I
	goto label_goto_3;
	// 830    .end local v0    # "isFinal":Z
	// 831    .end local v3    # "value":I
	// 832    .end local p1    # "pos":I
	// 833    .restart local v2    # "pos":I
label_cond_56:
	pos = pos;
	//    .end local v2    # "pos":I
	//    .restart local p1    # "pos":I
	goto label_goto_15;

}
// .method private static findUniqueValueFromBranch([BIIJ)J
long long android::icu::util::BytesTrie::findUniqueValueFromBranch(std::shared_ptr<unsigned char[]> bytes,int pos,int length,long long uniqueValue)
{
	
	int cVar0;
	long long cVar1;
	int cVar2;
	long long uniqueValue;
	int length;
	int pos;
	int node;
	int value;
	
	//    .param p0, "bytes"    # [B
	//    .param p1, "pos"    # I
	//    .param p2, "length"    # I
	//    .param p3, "uniqueValue"    # J
	cVar0 = 0x1;
	cVar1 = 0x0;
label_goto_3:
	if ( length <= 0x5 )
		goto label_cond_29;
	cVar2 = ( pos + 0x1);
	uniqueValue = android::icu::util::BytesTrie::findUniqueValueFromBranch(bytes, android::icu::util::BytesTrie::jumpByDelta(bytes, cVar2), _shri(length,0x1), uniqueValue);
	if ( (uniqueValue > cVar1) )     
		goto label_cond_17;
	return cVar1;
	// 882    .line 864
label_cond_17:
	length = (length -  _shri(length,0x1));
	pos = android::icu::util::BytesTrie::skipDelta(bytes, cVar2);
	goto label_goto_3;
	// 895    .line 880
	// 896    .local v0, "isFinal":Z
	// 897    .local v1, "node":I
	// 898    .local v3, "value":I
label_cond_1f:
	uniqueValue = (((long long)(value) << cVar0) | 0x1);
label_cond_25:
	length = ( length + -0x1);
	if ( length <= cVar0 )
		goto label_cond_59;
	//    .end local v0    # "isFinal":Z
	//    .end local v1    # "node":I
	//    .end local v3    # "value":I
label_cond_29:
	pos = ( pos + 0x1);
	pos = ( pos + 0x1);
	//    .end local p1    # "pos":I
	//    .local v2, "pos":I
	node = ( bytes[pos] & 0xff);
	//    .restart local v1    # "node":I
	if ( !(( node & 0x1)) )  
		goto label_cond_4c;
	//    .restart local v0    # "isFinal":Z
label_goto_36:
	value = android::icu::util::BytesTrie::readValue(bytes, pos, _shri(node,0x1));
	//    .restart local v3    # "value":I
	pos = android::icu::util::BytesTrie::skipValue(pos, node);
	//    .end local v2    # "pos":I
	//    .restart local p1    # "pos":I
	if ( !(isFinal) )  
		goto label_cond_4e;
	if ( !((uniqueValue > cVar1)) )  
		goto label_cond_1f;
	if ( value == (int)(_shrll(uniqueValue,cVar0)) )
		goto label_cond_25;
	return cVar1;
	// 973    .line 871
	// 974    .end local v0    # "isFinal":Z
	// 975    .end local v3    # "value":I
	// 976    .end local p1    # "pos":I
	// 977    .restart local v2    # "pos":I
label_cond_4c:
	//    .restart local v0    # "isFinal":Z
	goto label_goto_36;
	// 984    .line 883
	// 985    .end local v2    # "pos":I
	// 986    .restart local v3    # "value":I
	// 987    .restart local p1    # "pos":I
label_cond_4e:
	uniqueValue = android::icu::util::BytesTrie::findUniqueValue(bytes, (pos + value), uniqueValue);
	if ( (uniqueValue > cVar1) )     
		goto label_cond_25;
	return cVar1;
	// 1003    .line 890
label_cond_59:
	return (((long long)(( pos + 0x1)) << 0x21) |  (0x1ffffffffL &  uniqueValue));

}
// .method private static getNextBranchBytes([BIILjava/lang/Appendable;)V
void android::icu::util::BytesTrie::getNextBranchBytes(std::shared_ptr<unsigned char[]> bytes,int pos,int length,std::shared_ptr<java::lang::Appendable> out)
{
	
	int cVar0;
	int length;
	int pos;
	
	//    .param p0, "bytes"    # [B
	//    .param p1, "pos"    # I
	//    .param p2, "length"    # I
	//    .param p3, "out"    # Ljava/lang/Appendable;
label_goto_0:
	if ( length <= 0x5 )
		goto label_cond_16;
	cVar0 = ( pos + 0x1);
	android::icu::util::BytesTrie::getNextBranchBytes(bytes, android::icu::util::BytesTrie::jumpByDelta(bytes, cVar0), _shri(length,0x1), out);
	length = (length -  _shri(length,0x1));
	pos = android::icu::util::BytesTrie::skipDelta(bytes, cVar0);
	goto label_goto_0;
	// 1060    .line 939
label_cond_16:
	pos = ( pos + 0x1);
	//    .end local p1    # "pos":I
	//    .local v0, "pos":I
	android::icu::util::BytesTrie::append(out, ( bytes[pos] & 0xff));
	pos = android::icu::util::BytesTrie::skipValue(bytes, pos);
	//    .end local v0    # "pos":I
	//    .restart local p1    # "pos":I
	length = ( length + -0x1);
	if ( length >  0x1 )
		goto label_cond_16;
	android::icu::util::BytesTrie::append(out, ( bytes[pos] & 0xff));
	return;

}
// .method public static iterator([BII)Landroid/icu/util/BytesTrie$Iterator;
std::shared_ptr<android::icu::util::BytesTrie_S_Iterator> android::icu::util::BytesTrie::iterator(std::shared_ptr<unsigned char[]> trieBytes,int offset,int maxStringLength)
{
	
	std::shared_ptr<android::icu::util::BytesTrie_S_Iterator> cVar0;
	
	//    .param p0, "trieBytes"    # [B
	//    .param p1, "offset"    # I
	//    .param p2, "maxStringLength"    # I
	cVar0 = std::make_shared<android::icu::util::BytesTrie_S_Iterator>(trieBytes, offset, -0x1, maxStringLength, 0x0);
	return cVar0;

}
// .method private static jumpByDelta([BI)I
int android::icu::util::BytesTrie::jumpByDelta(std::shared_ptr<unsigned char[]> bytes,int pos)
{
	
	int cVar0;
	int pos;
	int delta;
	
	//    .param p0, "bytes"    # [B
	//    .param p1, "pos"    # I
	cVar0 = 0xfe;
	pos = ( pos + 0x1);
	//    .end local p1    # "pos":I
	//    .local v1, "pos":I
	delta = ( bytes[pos] & 0xff);
	//    .local v0, "delta":I
	if ( delta >= 0xc0 )
		goto label_cond_10;
	//    .end local v1    # "pos":I
	//    .restart local p1    # "pos":I
label_goto_d:
	return (pos + delta);
	// 1155    .line 718
	// 1156    .end local p1    # "pos":I
	// 1157    .restart local v1    # "pos":I
label_cond_10:
	if ( delta >= 0xf0 )
		goto label_cond_21;
	//    .end local v1    # "pos":I
	//    .restart local p1    # "pos":I
	delta = (( ( delta + -0xc0) << 0x8) | ( bytes[pos] & 0xff));
	goto label_goto_d;
	// 1180    .line 720
	// 1181    .end local p1    # "pos":I
	// 1182    .restart local v1    # "pos":I
label_cond_21:
	if ( delta >= cVar0 )
		goto label_cond_39;
	delta = ((( ( delta + -0xf0) << 0x10) |  ( ( bytes[pos] & 0xff) << 0x8)) | ( bytes[( pos + 0x1)] & 0xff));
	//    .end local v1    # "pos":I
	//    .restart local p1    # "pos":I
	goto label_goto_d;
	// 1214    .line 723
	// 1215    .end local p1    # "pos":I
	// 1216    .restart local v1    # "pos":I
label_cond_39:
	if ( delta != cVar0 )
		goto label_cond_55;
	delta = ((( ( bytes[pos] & 0xff) << 0x10) |  ( ( bytes[( pos + 0x1)] & 0xff) << 0x8)) | ( bytes[( pos + 0x2)] & 0xff));
	//    .end local v1    # "pos":I
	//    .restart local p1    # "pos":I
	goto label_goto_d;
	// 1252    .line 727
	// 1253    .end local p1    # "pos":I
	// 1254    .restart local v1    # "pos":I
label_cond_55:
	delta = (((( bytes[pos] << 0x18) |  ( ( bytes[( pos + 0x1)] & 0xff) << 0x10)) |  ( ( bytes[( pos + 0x2)] & 0xff) << 0x8)) | ( bytes[( pos + 0x3)] & 0xff));
	//    .end local v1    # "pos":I
	//    .restart local p1    # "pos":I
	goto label_goto_d;

}
// .method private nextImpl(II)Landroid/icu/util/BytesTrie$Result;
std::shared_ptr<android::icu::util::BytesTrie_S_Result> android::icu::util::BytesTrie::nextImpl(int pos,int inByte)
{
	
	int cVar0;
	int pos;
	int node;
	int length;
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> cVar1;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	
	//    .param p1, "pos"    # I
	//    .param p2, "inByte"    # I
	cVar0 = 0x20;
label_cond_2:
	pos = ( pos + 0x1);
	//    .end local p1    # "pos":I
	//    .local v2, "pos":I
	node = ( this->bytes_[pos] & 0xff);
	//    .local v1, "node":I
	if ( node >= 0x10 )
		goto label_cond_13;
	return this->branchNext(pos, node, inByte);
	// 1329    .line 825
label_cond_13:
	if ( node >= cVar0 )
		goto label_cond_3b;
	//    .local v0, "length":I
	pos = ( pos + 0x1);
	//    .end local v2    # "pos":I
	//    .restart local p1    # "pos":I
	if ( inByte != ( this->bytes_[pos] & 0xff) )
		goto label_cond_40;
	length = ( ( node + -0x10) + -0x1);
	this->remainingMatchLength_ = length;
	this->pos_ = pos;
	if ( length >= 0 )
		goto label_cond_38;
	node = ( this->bytes_[pos] & 0xff);
	if ( node <  cVar0 )
		goto label_cond_38;
	cVar1 = android::icu::util::BytesTrie::valueResults_[( node & 0x1)];
label_goto_37:
	return cVar1;
	// 1380    .line 832
label_cond_38:
	cVar1 = android::icu::util::BytesTrie_S_Result::NO_VALUE;
	goto label_goto_37;
	// 1386    .line 837
	// 1387    .end local v0    # "length":I
	// 1388    .end local p1    # "pos":I
	// 1389    .restart local v2    # "pos":I
label_cond_3b:
	if ( !(( node & 0x1)) )  
		goto label_cond_46;
	pos;
	//    .end local v2    # "pos":I
	//    .restart local p1    # "pos":I
label_cond_40:
	this->stop();
	return android::icu::util::BytesTrie_S_Result::NO_MATCH;
	// 1408    .line 842
	// 1409    .end local p1    # "pos":I
	// 1410    .restart local v2    # "pos":I
label_cond_46:
	pos = android::icu::util::BytesTrie::skipValue(pos, node);
	//    .end local v2    # "pos":I
	//    .restart local p1    # "pos":I
	if ( android::icu::util::BytesTrie::_assertionsDisabled )     
		goto label_cond_2;
	if ( ( this->bytes_[pos] & 0xff) <  cVar0 )
		goto label_cond_2;
	cVar3 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar3;

}
// .method private static readValue([BII)I
int android::icu::util::BytesTrie::readValue(std::shared_ptr<unsigned char[]> bytes,int pos,int leadByte)
{
	
	int cVar0;
	
	//    .param p0, "bytes"    # [B
	//    .param p1, "pos"    # I
	//    .param p2, "leadByte"    # I
	cVar0 = 0x7e;
	if ( leadByte >= 0x51 )
		goto label_cond_9;
	//    .local v0, "value":I
label_goto_8:
	return value;
	// 1460    .line 684
	// 1461    .end local v0    # "value":I
label_cond_9:
	if ( leadByte >= 0x6c )
		goto label_cond_18;
	//    .restart local v0    # "value":I
	goto label_goto_8;
	// 1481    .line 686
	// 1482    .end local v0    # "value":I
label_cond_18:
	if ( leadByte >= cVar0 )
		goto label_cond_2e;
	//    .restart local v0    # "value":I
	goto label_goto_8;
	// 1510    .line 688
	// 1511    .end local v0    # "value":I
label_cond_2e:
	if ( leadByte != cVar0 )
		goto label_cond_48;
	//    .restart local v0    # "value":I
	goto label_goto_8;
	// 1543    .line 691
	// 1544    .end local v0    # "value":I
label_cond_48:
	//    .restart local v0    # "value":I
	goto label_goto_8;

}
// .method private static skipDelta([BI)I
int android::icu::util::BytesTrie::skipDelta(std::shared_ptr<unsigned char[]> bytes,int pos)
{
	
	int pos;
	int delta;
	
	//    .param p0, "bytes"    # [B
	//    .param p1, "pos"    # I
	pos = ( pos + 0x1);
	//    .end local p1    # "pos":I
	//    .local v1, "pos":I
	delta = ( bytes[pos] & 0xff);
	//    .local v0, "delta":I
	if ( delta <  0xc0 )
		goto label_cond_1f;
	if ( delta >= 0xf0 )
		goto label_cond_11;
	//    .end local v1    # "pos":I
	//    .restart local p1    # "pos":I
label_goto_10:
	return pos;
	// 1617    .line 738
	// 1618    .end local p1    # "pos":I
	// 1619    .restart local v1    # "pos":I
label_cond_11:
	if ( delta >= 0xfe )
		goto label_cond_18;
	//    .end local v1    # "pos":I
	//    .restart local p1    # "pos":I
	goto label_goto_10;
	// 1632    .line 741
	// 1633    .end local p1    # "pos":I
	// 1634    .restart local v1    # "pos":I
label_cond_18:
	//    .end local v1    # "pos":I
	//    .restart local p1    # "pos":I
	goto label_goto_10;
	// 1646    .end local p1    # "pos":I
	// 1647    .restart local v1    # "pos":I
label_cond_1f:
	//    .end local v1    # "pos":I
	//    .restart local p1    # "pos":I
	goto label_goto_10;

}
// .method private static skipValue(II)I
int android::icu::util::BytesTrie::skipValue(int cVar1,int leadByte)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	int cVar1;
	
	//    .param p0, "pos"    # I
	//    .param p1, "leadByte"    # I
	if ( android::icu::util::BytesTrie::_assertionsDisabled )     
		goto label_cond_e;
	if ( leadByte >= 0x20 )
		goto label_cond_e;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 1677    .line 697
label_cond_e:
	if ( leadByte <  0xa2 )
		goto label_cond_18;
	if ( leadByte >= 0xd8 )
		goto label_cond_19;
	cVar1 = ( cVar1 + 0x1);
label_cond_18:
label_goto_18:
	return cVar1;
	// 1696    .line 700
label_cond_19:
	if ( leadByte >= 0xfc )
		goto label_cond_20;
	cVar1 = ( cVar1 + 0x2);
	goto label_goto_18;
	// 1707    .line 703
label_cond_20:
	cVar1 = (cVar1 +  ( ( _shri(leadByte,0x1) & 0x1) + 0x3));
	goto label_goto_18;

}
// .method private static skipValue([BI)I
int android::icu::util::BytesTrie::skipValue(std::shared_ptr<unsigned char[]> bytes,int pos)
{
	
	//    .param p0, "bytes"    # [B
	//    .param p1, "pos"    # I
	//    .end local p1    # "pos":I
	//    .local v1, "pos":I
	//    .local v0, "leadByte":I
	return android::icu::util::BytesTrie::skipValue(( pos + 0x1), ( bytes[pos] & 0xff));

}
// .method private stop()V
void android::icu::util::BytesTrie::stop()
{
	
	this->pos_ = -0x1;
	return;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::util::BytesTrie::clone()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1762        value = {
	// 1763            Ljava/lang/CloneNotSupportedException;
	// 1764        }
	// 1765    .end annotation
	return this->clone();

}
// .method public current()Landroid/icu/util/BytesTrie$Result;
std::shared_ptr<android::icu::util::BytesTrie_S_Result> android::icu::util::BytesTrie::current()
{
	
	int pos;
	int node;
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> cVar0;
	
	pos = this->pos_;
	//    .local v1, "pos":I
	if ( pos >= 0 )
		goto label_cond_7;
	return android::icu::util::BytesTrie_S_Result::NO_MATCH;
	// 1792    .line 186
label_cond_7:
	if ( this->remainingMatchLength_ >= 0 )
		goto label_cond_1c;
	node = ( this->bytes_[pos] & 0xff);
	//    .local v0, "node":I
	if ( node <  0x20 )
		goto label_cond_1c;
	cVar0 = android::icu::util::BytesTrie::valueResults_[( node & 0x1)];
	//    .end local v0    # "node":I
label_goto_1b:
	return cVar0;
	// 1821    .line 187
label_cond_1c:
	cVar0 = android::icu::util::BytesTrie_S_Result::NO_VALUE;
	goto label_goto_1b;

}
// .method public first(I)Landroid/icu/util/BytesTrie$Result;
std::shared_ptr<android::icu::util::BytesTrie_S_Result> android::icu::util::BytesTrie::first(int cVar0)
{
	
	int cVar0;
	
	//    .param p1, "inByte"    # I
	this->remainingMatchLength_ = -0x1;
	if ( cVar0 >= 0 )
		goto label_cond_7;
	cVar0 = ( cVar0 + 0x100);
label_cond_7:
	return this->nextImpl(this->root_, cVar0);

}
// .method public getNextBytes(Ljava/lang/Appendable;)I
int android::icu::util::BytesTrie::getNextBytes(std::shared_ptr<java::lang::Appendable> out)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int pos;
	int node;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	
	//    .param p1, "out"    # Ljava/lang/Appendable;
	cVar0 = 0x20;
	cVar1 = 0x1;
	cVar2 = 0x0;
	pos = this->pos_;
	//    .local v1, "pos":I
	if ( pos >= 0 )
		goto label_cond_9;
	return cVar2;
	// 1876    .line 373
label_cond_9:
	if ( this->remainingMatchLength_ < 0 ) 
		goto label_cond_17;
	android::icu::util::BytesTrie::append(out, ( this->bytes_[pos] & 0xff));
	return cVar1;
	// 1894    .line 377
label_cond_17:
	pos = ( pos + 0x1);
	//    .end local v1    # "pos":I
	//    .local v2, "pos":I
	node = ( this->bytes_[pos] & 0xff);
	//    .local v0, "node":I
	if ( node <  cVar0 )
		goto label_cond_3e;
	if ( !(( node & 0x1)) )  
		goto label_cond_26;
	return cVar2;
	// 1918    .line 382
label_cond_26:
	pos = android::icu::util::BytesTrie::skipValue(pos, node);
	//    .end local v2    # "pos":I
	//    .restart local v1    # "pos":I
	pos = ( pos + 0x1);
	//    .end local v1    # "pos":I
	//    .restart local v2    # "pos":I
	node = ( this->bytes_[pos] & 0xff);
	if ( android::icu::util::BytesTrie::_assertionsDisabled )     
		goto label_cond_3e;
	if ( node <  cVar0 )
		goto label_cond_3e;
	cVar3 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar3;
	// 1950    .line 387
label_cond_3e:
	if ( node >= 0x10 )
		goto label_cond_54;
	if ( node )     
		goto label_cond_5e;
	//    .end local v2    # "pos":I
	//    .restart local v1    # "pos":I
label_goto_4c:
	node = ( node + 0x1);
	android::icu::util::BytesTrie::getNextBranchBytes(this->bytes_, pos, node, out);
	return node;
	// 1981    .line 395
	// 1982    .end local v1    # "pos":I
	// 1983    .restart local v2    # "pos":I
label_cond_54:
	android::icu::util::BytesTrie::append(out, ( this->bytes_[pos] & 0xff));
	return cVar1;
label_cond_5e:
	//    .end local v2    # "pos":I
	//    .restart local v1    # "pos":I
	goto label_goto_4c;

}
// .method public getUniqueValue()J
long long android::icu::util::BytesTrie::getUniqueValue()
{
	
	long long cVar0;
	int cVar1;
	int pos;
	
	cVar0 = 0x0;
	cVar1 = 0x1f;
	pos = this->pos_;
	//    .local v0, "pos":I
	if ( pos >= 0 )
		goto label_cond_9;
	return cVar0;
	// 2022    .line 356
label_cond_9:
	//    .local v2, "uniqueValue":J
	return _shrll((android::icu::util::BytesTrie::findUniqueValue(this->bytes_, ( (this->remainingMatchLength_ +  pos) + 0x1), cVar0) << cVar1),cVar1);

}
// .method public getValue()I
int android::icu::util::BytesTrie::getValue()
{
	
	int pos;
	int leadByte;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	pos = this->pos_;
	//    .local v1, "pos":I
	//    .end local v1    # "pos":I
	//    .local v2, "pos":I
	leadByte = ( this->bytes_[pos] & 0xff);
	//    .local v0, "leadByte":I
	if ( android::icu::util::BytesTrie::_assertionsDisabled )     
		goto label_cond_18;
	if ( leadByte >= 0x20 )
		goto label_cond_18;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 2080    .line 340
label_cond_18:
	return android::icu::util::BytesTrie::readValue(this->bytes_, ( pos + 0x1), _shri(leadByte,0x1));

}
// .method public iterator()Landroid/icu/util/BytesTrie$Iterator;
std::shared_ptr<android::icu::util::BytesTrie_S_Iterator> android::icu::util::BytesTrie::iterator()
{
	
	std::shared_ptr<android::icu::util::BytesTrie_S_Iterator> cVar0;
	
	cVar0 = std::make_shared<android::icu::util::BytesTrie_S_Iterator>(this->bytes_, this->pos_, this->remainingMatchLength_, 0x0, 0x0);
	return cVar0;

}
// .method public iterator(I)Landroid/icu/util/BytesTrie$Iterator;
std::shared_ptr<android::icu::util::BytesTrie_S_Iterator> android::icu::util::BytesTrie::iterator(int maxStringLength)
{
	
	std::shared_ptr<android::icu::util::BytesTrie_S_Iterator> cVar0;
	
	//    .param p1, "maxStringLength"    # I
	cVar0 = std::make_shared<android::icu::util::BytesTrie_S_Iterator>(this->bytes_, this->pos_, this->remainingMatchLength_, maxStringLength, 0x0);
	return cVar0;

}
// .method public next(I)Landroid/icu/util/BytesTrie$Result;
std::shared_ptr<android::icu::util::BytesTrie_S_Result> android::icu::util::BytesTrie::next(int cVar0)
{
	
	int pos;
	int cVar0;
	int length;
	int node;
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> cVar1;
	
	//    .param p1, "inByte"    # I
	pos = this->pos_;
	//    .local v2, "pos":I
	if ( pos >= 0 )
		goto label_cond_7;
	return android::icu::util::BytesTrie_S_Result::NO_MATCH;
	// 2167    .line 217
label_cond_7:
	if ( cVar0 >= 0 )
		goto label_cond_b;
	cVar0 = ( cVar0 + 0x100);
label_cond_b:
	length = this->remainingMatchLength_;
	//    .local v0, "length":I
	if ( length < 0 ) 
		goto label_cond_3b;
	pos = ( pos + 0x1);
	//    .end local v2    # "pos":I
	//    .local v3, "pos":I
	if ( cVar0 != ( this->bytes_[pos] & 0xff) )
		goto label_cond_35;
	length = ( length + -0x1);
	this->remainingMatchLength_ = length;
	this->pos_ = pos;
	if ( length >= 0 )
		goto label_cond_32;
	node = ( this->bytes_[pos] & 0xff);
	//    .local v1, "node":I
	if ( node <  0x20 )
		goto label_cond_32;
	cVar1 = android::icu::util::BytesTrie::valueResults_[( node & 0x1)];
	//    .end local v1    # "node":I
label_goto_31:
	return cVar1;
	// 2229    .line 228
label_cond_32:
	cVar1 = android::icu::util::BytesTrie_S_Result::NO_VALUE;
	goto label_goto_31;
	// 2235    .line 230
label_cond_35:
	this->stop();
	return android::icu::util::BytesTrie_S_Result::NO_MATCH;
	// 2244    .line 234
	// 2245    .end local v3    # "pos":I
	// 2246    .restart local v2    # "pos":I
label_cond_3b:
	return this->nextImpl(pos, cVar0);

}
// .method public next([BII)Landroid/icu/util/BytesTrie$Result;
std::shared_ptr<android::icu::util::BytesTrie_S_Result> android::icu::util::BytesTrie::next(std::shared_ptr<unsigned char[]> s,int sIndex,int sLimit)
{
	
	int cVar0;
	int pos;
	int length;
	int sIndex;
	int node;
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> cVar1;
	unsigned char inByte;
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> result;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	
	//    .param p1, "s"    # [B
	//    .param p2, "sIndex"    # I
	//    .param p3, "sLimit"    # I
	cVar0 = 0x20;
	if ( sIndex <  sLimit )
		goto label_cond_9;
	return this->current();
	// 2274    .line 257
label_cond_9:
	pos = this->pos_;
	//    .local v3, "pos":I
	if ( pos >= 0 )
		goto label_cond_10;
	return android::icu::util::BytesTrie_S_Result::NO_MATCH;
	// 2287    .line 261
label_cond_10:
	length = this->remainingMatchLength_;
	//    .local v1, "length":I
	sIndex = sIndex;
	//    .end local p2    # "sIndex":I
	//    .local v6, "sIndex":I
label_goto_13:
	if ( sIndex != sLimit )
		goto label_cond_2d;
	this->remainingMatchLength_ = length;
	this->pos_ = pos;
	if ( length >= 0 )
		goto label_cond_2a;
	node = ( this->bytes_[pos] & 0xff);
	//    .local v2, "node":I
	if ( node <  cVar0 )
		goto label_cond_2a;
	cVar1 = android::icu::util::BytesTrie::valueResults_[( node & 0x1)];
	//    .end local v2    # "node":I
label_goto_29:
	return cVar1;
	// 2330    .line 272
label_cond_2a:
	cVar1 = android::icu::util::BytesTrie_S_Result::NO_VALUE;
	goto label_goto_29;
	// 2336    .line 274
label_cond_2d:
	sIndex = ( sIndex + 0x1);
	//    .end local v6    # "sIndex":I
	//    .restart local p2    # "sIndex":I
	inByte = s[sIndex];
	//    .local v0, "inByte":B
	if ( length >= 0 )
		goto label_cond_4e;
	this->remainingMatchLength_ = length;
label_cond_35:
label_goto_35:
	pos = ( pos + 0x1);
	//    .end local v3    # "pos":I
	//    .local v4, "pos":I
	node = ( this->bytes_[pos] & 0xff);
	//    .restart local v2    # "node":I
	if ( node >= 0x10 )
		goto label_cond_75;
	result = this->branchNext(pos, node, ( inByte & 0xff));
	//    .local v5, "result":Landroid/icu/util/BytesTrie$Result;
	if ( result != android::icu::util::BytesTrie_S_Result::NO_MATCH )
		goto label_cond_60;
	return android::icu::util::BytesTrie_S_Result::NO_MATCH;
	// 2388    .line 279
	// 2389    .end local v2    # "node":I
	// 2390    .end local v4    # "pos":I
	// 2391    .end local v5    # "result":Landroid/icu/util/BytesTrie$Result;
	// 2392    .restart local v3    # "pos":I
label_cond_4e:
	if ( inByte == this->bytes_[pos] )
		goto label_cond_5a;
	this->stop();
	return android::icu::util::BytesTrie_S_Result::NO_MATCH;
	// 2408    .line 283
label_cond_5a:
	pos = ( pos + 0x1);
	length = ( length + -0x1);
label_goto_5e:
	sIndex = sIndex;
	//    .end local p2    # "sIndex":I
	//    .restart local v6    # "sIndex":I
	goto label_goto_13;
	// 2422    .line 294
	// 2423    .end local v3    # "pos":I
	// 2424    .end local v6    # "sIndex":I
	// 2425    .restart local v2    # "node":I
	// 2426    .restart local v4    # "pos":I
	// 2427    .restart local v5    # "result":Landroid/icu/util/BytesTrie$Result;
	// 2428    .restart local p2    # "sIndex":I
label_cond_60:
	if ( sIndex != sLimit )
		goto label_cond_63;
	return result;
	// 2435    .line 297
label_cond_63:
	if ( result != android::icu::util::BytesTrie_S_Result::FINAL_VALUE )
		goto label_cond_6d;
	this->stop();
	return android::icu::util::BytesTrie_S_Result::NO_MATCH;
	// 2449    .line 302
label_cond_6d:
	//    .end local p2    # "sIndex":I
	//    .restart local v6    # "sIndex":I
	inByte = s[sIndex];
	pos = this->pos_;
	//    .end local v4    # "pos":I
	//    .restart local v3    # "pos":I
	sIndex = ( sIndex + 0x1);
	//    .end local v6    # "sIndex":I
	//    .restart local p2    # "sIndex":I
	goto label_goto_35;
	// 2468    .line 304
	// 2469    .end local v3    # "pos":I
	// 2470    .end local v5    # "result":Landroid/icu/util/BytesTrie$Result;
	// 2471    .restart local v4    # "pos":I
label_cond_75:
	if ( node >= cVar0 )
		goto label_cond_8a;
	length = ( node + -0x10);
	if ( inByte == this->bytes_[pos] )
		goto label_cond_85;
	this->stop();
	return android::icu::util::BytesTrie_S_Result::NO_MATCH;
	// 2493    .line 311
label_cond_85:
	pos = ( pos + 0x1);
	//    .end local v4    # "pos":I
	//    .restart local v3    # "pos":I
	length = ( length + -0x1);
	goto label_goto_5e;
	// 2505    .line 314
	// 2506    .end local v3    # "pos":I
	// 2507    .restart local v4    # "pos":I
label_cond_8a:
	if ( !(( node & 0x1)) )  
		goto label_cond_94;
	this->stop();
	return android::icu::util::BytesTrie_S_Result::NO_MATCH;
	// 2521    .line 320
label_cond_94:
	pos = android::icu::util::BytesTrie::skipValue(pos, node);
	//    .end local v4    # "pos":I
	//    .restart local v3    # "pos":I
	if ( android::icu::util::BytesTrie::_assertionsDisabled )     
		goto label_cond_35;
	if ( ( this->bytes_[pos] & 0xff) <  cVar0 )
		goto label_cond_35;
	cVar3 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar3;

}
// .method public reset()Landroid/icu/util/BytesTrie;
std::shared_ptr<android::icu::util::BytesTrie> android::icu::util::BytesTrie::reset()
{
	
	this->pos_ = this->root_;
	this->remainingMatchLength_ = -0x1;
	return this;

}
// .method public resetToState(Landroid/icu/util/BytesTrie$State;)Landroid/icu/util/BytesTrie;
std::shared_ptr<android::icu::util::BytesTrie> android::icu::util::BytesTrie::resetToState(std::shared_ptr<android::icu::util::BytesTrie_S_State> state)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "state"    # Landroid/icu/util/BytesTrie$State;
	if ( this->bytes_ != android::icu::util::BytesTrie_S_State::-get0(state) )
		goto label_cond_21;
	if ( !(this->bytes_) )  
		goto label_cond_21;
	if ( this->root_ != android::icu::util::BytesTrie_S_State::-get3(state) )
		goto label_cond_21;
	this->pos_ = android::icu::util::BytesTrie_S_State::-get1(state);
	this->remainingMatchLength_ = android::icu::util::BytesTrie_S_State::-get2(state);
	return this;
	// 2610    .line 114
label_cond_21:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("incompatible trie state")));
	// throw
	throw cVar0;

}
// .method public saveState(Landroid/icu/util/BytesTrie$State;)Landroid/icu/util/BytesTrie;
std::shared_ptr<android::icu::util::BytesTrie> android::icu::util::BytesTrie::saveState(std::shared_ptr<android::icu::util::BytesTrie_S_State> state)
{
	
	//    .param p1, "state"    # Landroid/icu/util/BytesTrie$State;
	android::icu::util::BytesTrie_S_State::-set0(state, this->bytes_);
	android::icu::util::BytesTrie_S_State::-set3(state, this->root_);
	android::icu::util::BytesTrie_S_State::-set1(state, this->pos_);
	android::icu::util::BytesTrie_S_State::-set2(state, this->remainingMatchLength_);
	return this;

}


