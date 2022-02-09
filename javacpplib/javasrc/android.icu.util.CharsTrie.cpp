// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\CharsTrie.smali
#include "java2ctype.h"
#include "android.icu.text.UTF16.h"
#include "android.icu.util.BytesTrie_S_Result.h"
#include "android.icu.util.CharsTrie_S_Iterator.h"
#include "android.icu.util.CharsTrie_S_State.h"
#include "android.icu.util.CharsTrie.h"
#include "android.icu.util.ICUUncheckedIOException.h"
#include "java.io.IOException.h"
#include "java.lang.Appendable.h"
#include "java.lang.AssertionError.h"
#include "java.lang.CharSequence.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

static android::icu::util::CharsTrie::_assertionsDisabled;
static android::icu::util::CharsTrie::kMaxBranchLinearSubNodeLength = 0x5;
static android::icu::util::CharsTrie::kMaxLinearMatchLength = 0x10;
static android::icu::util::CharsTrie::kMaxOneUnitDelta = 0xfbff;
static android::icu::util::CharsTrie::kMaxOneUnitNodeValue = 0xff;
static android::icu::util::CharsTrie::kMaxOneUnitValue = 0x3fff;
static android::icu::util::CharsTrie::kMaxTwoUnitDelta = 0x3feffff;
static android::icu::util::CharsTrie::kMaxTwoUnitNodeValue = 0xfdffff;
static android::icu::util::CharsTrie::kMaxTwoUnitValue = 0x3ffeffff;
static android::icu::util::CharsTrie::kMinLinearMatch = 0x30;
static android::icu::util::CharsTrie::kMinTwoUnitDeltaLead = 0xfc00;
static android::icu::util::CharsTrie::kMinTwoUnitNodeValueLead = 0x4040;
static android::icu::util::CharsTrie::kMinTwoUnitValueLead = 0x4000;
static android::icu::util::CharsTrie::kMinValueLead = 0x40;
static android::icu::util::CharsTrie::kNodeTypeMask = 0x3f;
static android::icu::util::CharsTrie::kThreeUnitDeltaLead = 0xffff;
static android::icu::util::CharsTrie::kThreeUnitNodeValueLead = 0x7fc0;
static android::icu::util::CharsTrie::kThreeUnitValueLead = 0x7fff;
static android::icu::util::CharsTrie::kValueIsFinal = 0x8000;
static android::icu::util::CharsTrie::valueResults_;
// .method static synthetic -wrap0(Ljava/lang/CharSequence;I)I
int android::icu::util::CharsTrie::_wrap0(std::shared_ptr<java::lang::CharSequence> chars,int pos)
{
	
	//    .param p0, "chars"    # Ljava/lang/CharSequence;
	//    .param p1, "pos"    # I
	return android::icu::util::CharsTrie::jumpByDelta(chars, pos);

}
// .method static synthetic -wrap1(Ljava/lang/CharSequence;II)I
int android::icu::util::CharsTrie::_wrap1(std::shared_ptr<java::lang::CharSequence> chars,int pos,int leadUnit)
{
	
	//    .param p0, "chars"    # Ljava/lang/CharSequence;
	//    .param p1, "pos"    # I
	//    .param p2, "leadUnit"    # I
	return android::icu::util::CharsTrie::readNodeValue(chars, pos, leadUnit);

}
// .method static synthetic -wrap2(Ljava/lang/CharSequence;II)I
int android::icu::util::CharsTrie::_wrap2(std::shared_ptr<java::lang::CharSequence> chars,int pos,int leadUnit)
{
	
	//    .param p0, "chars"    # Ljava/lang/CharSequence;
	//    .param p1, "pos"    # I
	//    .param p2, "leadUnit"    # I
	return android::icu::util::CharsTrie::readValue(chars, pos, leadUnit);

}
// .method static synthetic -wrap3(Ljava/lang/CharSequence;I)I
int android::icu::util::CharsTrie::_wrap3(std::shared_ptr<java::lang::CharSequence> chars,int pos)
{
	
	//    .param p0, "chars"    # Ljava/lang/CharSequence;
	//    .param p1, "pos"    # I
	return android::icu::util::CharsTrie::skipDelta(chars, pos);

}
// .method static synthetic -wrap4(II)I
int android::icu::util::CharsTrie::_wrap4(int pos,int leadUnit)
{
	
	//    .param p0, "pos"    # I
	//    .param p1, "leadUnit"    # I
	return android::icu::util::CharsTrie::skipNodeValue(pos, leadUnit);

}
// .method static synthetic -wrap5(II)I
int android::icu::util::CharsTrie::_wrap5(int pos,int leadUnit)
{
	
	//    .param p0, "pos"    # I
	//    .param p1, "leadUnit"    # I
	return android::icu::util::CharsTrie::skipValue(pos, leadUnit);

}
// .method static constructor <clinit>()V
void android::icu::util::CharsTrie::static_cinit()
{
	
	std::shared<std::vector<std::vector<android::icu::util::BytesTrie_S_Result>>> cVar0;
	
	android::icu::util::CharsTrie::_assertionsDisabled = ( android::icu::util::CharsTrie()->desiredAssertionStatus() ^ 0x1);
	cVar0 = std::make_shared<std::vector<std::vector<android::icu::util::BytesTrie_S_Result>>>(0x2);
	cVar0[0x0] = android::icu::util::BytesTrie_S_Result::INTERMEDIATE_VALUE;
	cVar0[0x1] = android::icu::util::BytesTrie_S_Result::FINAL_VALUE;
	android::icu::util::CharsTrie::valueResults_ = cVar0;
	return;

}
// .method public constructor <init>(Ljava/lang/CharSequence;I)V
android::icu::util::CharsTrie::CharsTrie(std::shared_ptr<java::lang::CharSequence> trieChars,int offset)
{
	
	//    .param p1, "trieChars"    # Ljava/lang/CharSequence;
	//    .param p2, "offset"    # I
	// 208    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->chars_ = trieChars;
	this->root_ = offset;
	this->pos_ = offset;
	this->remainingMatchLength_ = -0x1;
	return;

}
// .method private static append(Ljava/lang/Appendable;I)V
void android::icu::util::CharsTrie::append(std::shared_ptr<java::lang::Appendable> out,int c)
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
	// 244    .line 902
label_catch_5:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	cVar0 = std::make_shared<android::icu::util::ICUUncheckedIOException>(getCatchExcetionFromList);
	// throw
	throw cVar0;

}
// .method private branchNext(III)Landroid/icu/util/BytesTrie$Result;
std::shared_ptr<android::icu::util::BytesTrie_S_Result> android::icu::util::CharsTrie::branchNext(int pos,int cVar1,int inUnit)
{
	
	int cVar0;
	int pos;
	int cVar1;
	int cVar2;
	int node;
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> cVar6;
	
	//    .param p1, "pos"    # I
	//    .param p2, "length"    # I
	//    .param p3, "inUnit"    # I
	cVar0 = 0x40;
	if ( cVar1 )     
		goto label_cond_d;
	pos = ( pos + 0x1);
	//    .end local p1    # "pos":I
	//    .local v2, "pos":I
	cVar1 = this->chars_->charAt(pos);
	pos = pos;
	//    .end local v2    # "pos":I
	//    .restart local p1    # "pos":I
label_cond_d:
	cVar2 = ( cVar1 + 0x1);
	pos = pos;
	//    .end local p1    # "pos":I
	//    .restart local v2    # "pos":I
label_goto_10:
	if ( cVar2 <= 0x5 )
		goto label_cond_bf;
	pos = ( pos + 0x1);
	//    .end local v2    # "pos":I
	//    .restart local p1    # "pos":I
	if ( inUnit >= this->chars_->charAt(pos) )
		goto label_cond_27;
	cVar2 = _shri(cVar2,0x1);
	pos = android::icu::util::CharsTrie::jumpByDelta(this->chars_, pos);
label_goto_25:
	pos = pos;
	//    .end local p1    # "pos":I
	//    .restart local v2    # "pos":I
	goto label_goto_10;
	// 328    .line 718
	// 329    .end local v2    # "pos":I
	// 330    .restart local p1    # "pos":I
label_cond_27:
	cVar2 = (cVar2 -  _shri(cVar2,0x1));
	pos = android::icu::util::CharsTrie::skipDelta(this->chars_, pos);
	goto label_goto_25;
	// 345    .line 753
	// 346    .end local p1    # "pos":I
	// 347    .restart local v2    # "pos":I
label_cond_31:
	cVar2 = ( cVar2 + -0x1);
	pos = android::icu::util::CharsTrie::skipValue(this->chars_, pos);
	//    .end local v2    # "pos":I
	//    .restart local p1    # "pos":I
	if ( cVar2 <= 0x1 )
		goto label_cond_9b;
label_goto_3c:
	pos = ( pos + 0x1);
	//    .end local p1    # "pos":I
	//    .restart local v2    # "pos":I
	if ( inUnit != this->chars_->charAt(pos) )
		goto label_cond_31;
	node = this->chars_->charAt(pos);
	//    .local v1, "node":I
	if ( !((0x8000 &  node)) )  
		goto label_cond_58;
	//    .local v3, "result":Landroid/icu/util/BytesTrie$Result;
	pos = pos;
	//    .end local v2    # "pos":I
	//    .restart local p1    # "pos":I
label_goto_55:
	this->pos_ = pos;
	return result;
	// 409    .line 734
	// 410    .end local v3    # "result":Landroid/icu/util/BytesTrie$Result;
	// 411    .end local p1    # "pos":I
	// 412    .restart local v2    # "pos":I
label_cond_58:
	pos = ( pos + 0x1);
	//    .end local v2    # "pos":I
	//    .restart local p1    # "pos":I
	if ( node >= 0x4000 )
		goto label_cond_6f;
	//    .local v0, "delta":I
label_goto_5f:
	pos = (pos +  delta);
	node = this->chars_->charAt(pos);
	if ( node <  cVar0 )
		goto label_cond_98;
	//    .restart local v3    # "result":Landroid/icu/util/BytesTrie$Result;
	goto label_goto_55;
	// 450    .line 739
	// 451    .end local v0    # "delta":I
	// 452    .end local v3    # "result":Landroid/icu/util/BytesTrie$Result;
label_cond_6f:
	if ( node >= 0x7fff )
		goto label_cond_83;
	pos = ( pos + 0x1);
	//    .end local p1    # "pos":I
	//    .restart local v2    # "pos":I
	//    .restart local v0    # "delta":I
	pos = pos;
	//    .end local v2    # "pos":I
	//    .restart local p1    # "pos":I
	goto label_goto_5f;
	// 482    .line 742
	// 483    .end local v0    # "delta":I
label_cond_83:
	//    .restart local v0    # "delta":I
	pos = ( pos + 0x2);
	goto label_goto_5f;
	// 509    .line 748
label_cond_98:
	//    .restart local v3    # "result":Landroid/icu/util/BytesTrie$Result;
	goto label_goto_55;
	// 516    .line 756
	// 517    .end local v0    # "delta":I
	// 518    .end local v1    # "node":I
	// 519    .end local v3    # "result":Landroid/icu/util/BytesTrie$Result;
label_cond_9b:
	pos = ( pos + 0x1);
	//    .end local p1    # "pos":I
	//    .restart local v2    # "pos":I
	if ( inUnit != this->chars_->charAt(pos) )
		goto label_cond_b9;
	this->pos_ = pos;
	node = this->chars_->charAt(pos);
	//    .restart local v1    # "node":I
	if ( node <  cVar0 )
		goto label_cond_b6;
	cVar6 = android::icu::util::CharsTrie::valueResults_[_shri(node,0xf)];
label_goto_b5:
	return cVar6;
label_cond_b6:
	cVar6 = android::icu::util::BytesTrie_S_Result::NO_VALUE;
	goto label_goto_b5;
	// 561    .line 761
	// 562    .end local v1    # "node":I
label_cond_b9:
	this->stop();
	return android::icu::util::BytesTrie_S_Result::NO_MATCH;
label_cond_bf:
	pos = pos;
	//    .end local v2    # "pos":I
	//    .restart local p1    # "pos":I
	goto label_goto_3c;

}
// .method private static findUniqueValue(Ljava/lang/CharSequence;IJ)J
long long android::icu::util::CharsTrie::findUniqueValue(std::shared_ptr<java::lang::CharSequence> chars,int pos,long long uniqueValue)
{
	
	int cVar0;
	long long cVar1;
	int pos;
	int node;
	long long uniqueValue;
	int isFinal;
	int value;
	
	//    .param p0, "chars"    # Ljava/lang/CharSequence;
	//    .param p1, "pos"    # I
	//    .param p2, "uniqueValue"    # J
	cVar0 = 0x1;
	cVar1 = 0x0;
	pos = ( pos + 0x1);
	//    .end local p1    # "pos":I
	//    .local v2, "pos":I
	node = chars->charAt(pos);
	//    .local v1, "node":I
label_goto_9:
	if ( node >= 0x30 )
		goto label_cond_2e;
	if ( node )     
		goto label_cond_70;
	//    .end local v2    # "pos":I
	//    .restart local p1    # "pos":I
	node = chars->charAt(pos);
label_goto_15:
	uniqueValue = android::icu::util::CharsTrie::findUniqueValueFromBranch(chars, pos, ( node + 0x1), uniqueValue);
	if ( (uniqueValue > cVar1) )     
		goto label_cond_20;
	return cVar1;
	// 634    .line 854
label_cond_20:
	pos = (int)(_ushrll(uniqueValue,0x21));
	//    .end local p1    # "pos":I
	//    .restart local v2    # "pos":I
	node = chars->charAt(pos);
	//    .end local v2    # "pos":I
	//    .restart local p1    # "pos":I
label_goto_2c:
	pos = pos;
	//    .end local p1    # "pos":I
	//    .restart local v2    # "pos":I
	goto label_goto_9;
	// 662    .line 856
label_cond_2e:
	if ( node >= 0x40 )
		goto label_cond_40;
	pos = (pos + ( ( node + -0x30) + 0x1));
	//    .end local v2    # "pos":I
	//    .restart local p1    # "pos":I
	//    .end local p1    # "pos":I
	//    .restart local v2    # "pos":I
	node = chars->charAt(pos);
	//    .end local v2    # "pos":I
	//    .restart local p1    # "pos":I
	goto label_goto_2c;
	// 692    .line 861
	// 693    .end local p1    # "pos":I
	// 694    .restart local v2    # "pos":I
label_cond_40:
	if ( !((0x8000 &  node)) )  
		goto label_cond_59;
	isFinal = 0x1;
	//    .local v0, "isFinal":Z
label_goto_47:
	if ( !(isFinal) )  
		goto label_cond_5b;
	value = android::icu::util::CharsTrie::readValue(chars, pos, ( node & 0x7fff));
	//    .local v3, "value":I
label_goto_4f:
	if ( !((uniqueValue > cVar1)) )  
		goto label_cond_60;
	if ( value == (int)(_shrll(uniqueValue,cVar0)) )
		goto label_cond_66;
	return cVar1;
	// 733    .line 861
	// 734    .end local v0    # "isFinal":Z
	// 735    .end local v3    # "value":I
label_cond_59:
	isFinal = 0x0;
	//    .restart local v0    # "isFinal":Z
	goto label_goto_47;
	// 742    .line 866
label_cond_5b:
	//    .restart local v3    # "value":I
	goto label_goto_4f;
	// 751    .line 873
label_cond_60:
	uniqueValue = (((long long)(value) << cVar0) | 0x1);
label_cond_66:
	if ( !(isFinal) )  
		goto label_cond_69;
	return uniqueValue;
	// 768    .line 878
label_cond_69:
	//    .end local v2    # "pos":I
	//    .restart local p1    # "pos":I
	node = ( node & 0x3f);
	goto label_goto_2c;
	// 781    .end local v0    # "isFinal":Z
	// 782    .end local v3    # "value":I
	// 783    .end local p1    # "pos":I
	// 784    .restart local v2    # "pos":I
label_cond_70:
	//    .end local v2    # "pos":I
	//    .restart local p1    # "pos":I
	goto label_goto_15;

}
// .method private static findUniqueValueFromBranch(Ljava/lang/CharSequence;IIJ)J
long long android::icu::util::CharsTrie::findUniqueValueFromBranch(std::shared_ptr<java::lang::CharSequence> chars,int pos,int length,long long uniqueValue)
{
	
	int cVar0;
	long long cVar1;
	int cVar2;
	long long uniqueValue;
	int length;
	int pos;
	int node;
	int value;
	
	//    .param p0, "chars"    # Ljava/lang/CharSequence;
	//    .param p1, "pos"    # I
	//    .param p2, "length"    # I
	//    .param p3, "uniqueValue"    # J
	cVar0 = 0x1;
	cVar1 = 0x0;
label_goto_3:
	if ( length <= 0x5 )
		goto label_cond_29;
	cVar2 = ( pos + 0x1);
	uniqueValue = android::icu::util::CharsTrie::findUniqueValueFromBranch(chars, android::icu::util::CharsTrie::jumpByDelta(chars, cVar2), _shri(length,0x1), uniqueValue);
	if ( (uniqueValue > cVar1) )     
		goto label_cond_17;
	return cVar1;
	// 833    .line 810
label_cond_17:
	length = (length -  _shri(length,0x1));
	pos = android::icu::util::CharsTrie::skipDelta(chars, cVar2);
	goto label_goto_3;
	// 846    .line 827
	// 847    .local v0, "isFinal":Z
	// 848    .local v1, "node":I
	// 849    .local v3, "value":I
label_cond_1f:
	uniqueValue = (((long long)(value) << cVar0) | 0x1);
label_cond_25:
	length = ( length + -0x1);
	if ( length <= cVar0 )
		goto label_cond_5b;
	//    .end local v0    # "isFinal":Z
	//    .end local v1    # "node":I
	//    .end local v3    # "value":I
label_cond_29:
	pos = ( pos + 0x1);
	pos = ( pos + 0x1);
	//    .end local p1    # "pos":I
	//    .local v2, "pos":I
	node = chars->charAt(pos);
	//    .restart local v1    # "node":I
	if ( !((0x8000 &  node)) )  
		goto label_cond_4e;
	//    .restart local v0    # "isFinal":Z
label_goto_38:
	node = ( node & 0x7fff);
	value = android::icu::util::CharsTrie::readValue(chars, pos, node);
	//    .restart local v3    # "value":I
	pos = android::icu::util::CharsTrie::skipValue(pos, node);
	//    .end local v2    # "pos":I
	//    .restart local p1    # "pos":I
	if ( !(isFinal) )  
		goto label_cond_50;
	if ( !((uniqueValue > cVar1)) )  
		goto label_cond_1f;
	if ( value == (int)(_shrll(uniqueValue,cVar0)) )
		goto label_cond_25;
	return cVar1;
	// 927    .line 817
	// 928    .end local v0    # "isFinal":Z
	// 929    .end local v3    # "value":I
	// 930    .end local p1    # "pos":I
	// 931    .restart local v2    # "pos":I
label_cond_4e:
	//    .restart local v0    # "isFinal":Z
	goto label_goto_38;
	// 938    .line 830
	// 939    .end local v2    # "pos":I
	// 940    .restart local v3    # "value":I
	// 941    .restart local p1    # "pos":I
label_cond_50:
	uniqueValue = android::icu::util::CharsTrie::findUniqueValue(chars, (pos + value), uniqueValue);
	if ( (uniqueValue > cVar1) )     
		goto label_cond_25;
	return cVar1;
	// 957    .line 837
label_cond_5b:
	return (((long long)(( pos + 0x1)) << 0x21) |  (0x1ffffffffL &  uniqueValue));

}
// .method private static getNextBranchChars(Ljava/lang/CharSequence;IILjava/lang/Appendable;)V
void android::icu::util::CharsTrie::getNextBranchChars(std::shared_ptr<java::lang::CharSequence> chars,int pos,int length,std::shared_ptr<java::lang::Appendable> out)
{
	
	int cVar0;
	int length;
	int pos;
	
	//    .param p0, "chars"    # Ljava/lang/CharSequence;
	//    .param p1, "pos"    # I
	//    .param p2, "length"    # I
	//    .param p3, "out"    # Ljava/lang/Appendable;
label_goto_0:
	if ( length <= 0x5 )
		goto label_cond_16;
	cVar0 = ( pos + 0x1);
	android::icu::util::CharsTrie::getNextBranchChars(chars, android::icu::util::CharsTrie::jumpByDelta(chars, cVar0), _shri(length,0x1), out);
	length = (length -  _shri(length,0x1));
	pos = android::icu::util::CharsTrie::skipDelta(chars, cVar0);
	goto label_goto_0;
	// 1014    .line 894
label_cond_16:
	pos = ( pos + 0x1);
	//    .end local p1    # "pos":I
	//    .local v0, "pos":I
	android::icu::util::CharsTrie::append(out, chars->charAt(pos));
	pos = android::icu::util::CharsTrie::skipValue(chars, pos);
	//    .end local v0    # "pos":I
	//    .restart local p1    # "pos":I
	length = ( length + -0x1);
	if ( length >  0x1 )
		goto label_cond_16;
	android::icu::util::CharsTrie::append(out, chars->charAt(pos));
	return;

}
// .method public static iterator(Ljava/lang/CharSequence;II)Landroid/icu/util/CharsTrie$Iterator;
std::shared_ptr<android::icu::util::CharsTrie_S_Iterator> android::icu::util::CharsTrie::iterator(std::shared_ptr<java::lang::CharSequence> trieChars,int offset,int maxStringLength)
{
	
	std::shared_ptr<android::icu::util::CharsTrie_S_Iterator> cVar0;
	
	//    .param p0, "trieChars"    # Ljava/lang/CharSequence;
	//    .param p1, "offset"    # I
	//    .param p2, "maxStringLength"    # I
	cVar0 = std::make_shared<android::icu::util::CharsTrie_S_Iterator>(trieChars, offset, -0x1, maxStringLength, 0x0);
	return cVar0;

}
// .method private static jumpByDelta(Ljava/lang/CharSequence;I)I
int android::icu::util::CharsTrie::jumpByDelta(std::shared_ptr<java::lang::CharSequence> chars,int pos)
{
	
	int cVar0;
	int pos;
	int delta;
	
	//    .param p0, "chars"    # Ljava/lang/CharSequence;
	//    .param p1, "pos"    # I
	cVar0 = 0xfc00;
	pos = ( pos + 0x1);
	//    .end local p1    # "pos":I
	//    .local v1, "pos":I
	delta = chars->charAt(pos);
	//    .local v0, "delta":I
	if ( delta <  cVar0 )
		goto label_cond_30;
	if ( delta != 0xffff )
		goto label_cond_23;
	delta = (( chars->charAt(pos) << 0x10) | chars->charAt(( pos + 0x1)));
	//    .end local v1    # "pos":I
	//    .restart local p1    # "pos":I
label_goto_20:
	return (pos + delta);
	// 1128    .line 684
	// 1129    .end local p1    # "pos":I
	// 1130    .restart local v1    # "pos":I
label_cond_23:
	//    .end local v1    # "pos":I
	//    .restart local p1    # "pos":I
	delta = (( (delta - cVar0) << 0x10) | chars->charAt(pos));
	goto label_goto_20;
	// 1148    .end local p1    # "pos":I
	// 1149    .restart local v1    # "pos":I
label_cond_30:
	//    .end local v1    # "pos":I
	//    .restart local p1    # "pos":I
	goto label_goto_20;

}
// .method private nextImpl(II)Landroid/icu/util/BytesTrie$Result;
std::shared_ptr<android::icu::util::BytesTrie_S_Result> android::icu::util::CharsTrie::nextImpl(int pos,int inUnit)
{
	
	int cVar0;
	int pos;
	int node;
	int length;
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> cVar1;
	
	//    .param p1, "pos"    # I
	//    .param p2, "inUnit"    # I
	cVar0 = 0x40;
	pos = ( pos + 0x1);
	//    .end local p1    # "pos":I
	//    .local v2, "pos":I
	node = this->chars_->charAt(pos);
	//    .local v1, "node":I
label_goto_a:
	if ( node >= 0x30 )
		goto label_cond_13;
	return this->branchNext(pos, node, inUnit);
	// 1191    .line 772
label_cond_13:
	if ( node >= cVar0 )
		goto label_cond_3b;
	//    .local v0, "length":I
	pos = ( pos + 0x1);
	//    .end local v2    # "pos":I
	//    .restart local p1    # "pos":I
	if ( inUnit != this->chars_->charAt(pos) )
		goto label_cond_42;
	length = ( ( node + -0x30) + -0x1);
	this->remainingMatchLength_ = length;
	this->pos_ = pos;
	if ( length >= 0 )
		goto label_cond_38;
	node = this->chars_->charAt(pos);
	if ( node <  cVar0 )
		goto label_cond_38;
	cVar1 = android::icu::util::CharsTrie::valueResults_[_shri(node,0xf)];
label_goto_37:
	return cVar1;
	// 1242    .line 779
label_cond_38:
	cVar1 = android::icu::util::BytesTrie_S_Result::NO_VALUE;
	goto label_goto_37;
	// 1248    .line 784
	// 1249    .end local v0    # "length":I
	// 1250    .end local p1    # "pos":I
	// 1251    .restart local v2    # "pos":I
label_cond_3b:
	if ( !((0x8000 &  node)) )  
		goto label_cond_48;
	pos;
	//    .end local v2    # "pos":I
	//    .restart local p1    # "pos":I
label_cond_42:
	this->stop();
	return android::icu::util::BytesTrie_S_Result::NO_MATCH;
	// 1272    .line 789
	// 1273    .end local p1    # "pos":I
	// 1274    .restart local v2    # "pos":I
label_cond_48:
	//    .end local v2    # "pos":I
	//    .restart local p1    # "pos":I
	node = ( node & 0x3f);
	//    .end local p1    # "pos":I
	//    .restart local v2    # "pos":I
	goto label_goto_a;

}
// .method private static readNodeValue(Ljava/lang/CharSequence;II)I
int android::icu::util::CharsTrie::readNodeValue(std::shared_ptr<java::lang::CharSequence> chars,int pos,int leadUnit)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p0, "chars"    # Ljava/lang/CharSequence;
	//    .param p1, "pos"    # I
	//    .param p2, "leadUnit"    # I
	if ( android::icu::util::CharsTrie::_assertionsDisabled )     
		goto label_cond_13;
	if ( 0x40 >  leadUnit )
		goto label_cond_d;
	if ( leadUnit <  0x8000 )
		goto label_cond_13;
label_cond_d:
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 1319    .line 656
label_cond_13:
	if ( leadUnit >= 0x4040 )
		goto label_cond_1c;
	//    .local v0, "value":I
label_goto_1b:
	return value;
	// 1335    .line 658
	// 1336    .end local v0    # "value":I
label_cond_1c:
	if ( leadUnit >= 0x7fc0 )
		goto label_cond_2d;
	//    .restart local v0    # "value":I
	goto label_goto_1b;
	// 1358    .line 661
	// 1359    .end local v0    # "value":I
label_cond_2d:
	//    .restart local v0    # "value":I
	goto label_goto_1b;

}
// .method private static readValue(Ljava/lang/CharSequence;II)I
int android::icu::util::CharsTrie::readValue(std::shared_ptr<java::lang::CharSequence> chars,int pos,int leadUnit)
{
	
	//    .param p0, "chars"    # Ljava/lang/CharSequence;
	//    .param p1, "pos"    # I
	//    .param p2, "leadUnit"    # I
	if ( leadUnit >= 0x4000 )
		goto label_cond_6;
	//    .local v0, "value":I
label_goto_5:
	return value;
	// 1399    .line 631
	// 1400    .end local v0    # "value":I
label_cond_6:
	if ( leadUnit >= 0x7fff )
		goto label_cond_15;
	//    .restart local v0    # "value":I
	goto label_goto_5;
	// 1420    .line 634
	// 1421    .end local v0    # "value":I
label_cond_15:
	//    .restart local v0    # "value":I
	goto label_goto_5;

}
// .method private static skipDelta(Ljava/lang/CharSequence;I)I
int android::icu::util::CharsTrie::skipDelta(std::shared_ptr<java::lang::CharSequence> chars,int pos)
{
	
	int pos;
	int delta;
	
	//    .param p0, "chars"    # Ljava/lang/CharSequence;
	//    .param p1, "pos"    # I
	pos = ( pos + 0x1);
	//    .end local p1    # "pos":I
	//    .local v1, "pos":I
	delta = chars->charAt(pos);
	//    .local v0, "delta":I
	if ( delta <  0xfc00 )
		goto label_cond_16;
	if ( delta != 0xffff )
		goto label_cond_13;
	//    .end local v1    # "pos":I
	//    .restart local p1    # "pos":I
label_goto_12:
	return pos;
	// 1476    .line 696
	// 1477    .end local p1    # "pos":I
	// 1478    .restart local v1    # "pos":I
label_cond_13:
	//    .end local v1    # "pos":I
	//    .restart local p1    # "pos":I
	goto label_goto_12;
	// 1486    .end local p1    # "pos":I
	// 1487    .restart local v1    # "pos":I
label_cond_16:
	//    .end local v1    # "pos":I
	//    .restart local p1    # "pos":I
	goto label_goto_12;

}
// .method private static skipNodeValue(II)I
int android::icu::util::CharsTrie::skipNodeValue(int cVar1,int leadUnit)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	int cVar1;
	
	//    .param p0, "pos"    # I
	//    .param p1, "leadUnit"    # I
	if ( android::icu::util::CharsTrie::_assertionsDisabled )     
		goto label_cond_13;
	if ( 0x40 >  leadUnit )
		goto label_cond_d;
	if ( leadUnit <  0x8000 )
		goto label_cond_13;
label_cond_d:
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 1522    .line 667
label_cond_13:
	if ( leadUnit <  0x4040 )
		goto label_cond_1d;
	if ( leadUnit >= 0x7fc0 )
		goto label_cond_1e;
	cVar1 = ( cVar1 + 0x1);
label_cond_1d:
label_goto_1d:
	return cVar1;
	// 1541    .line 671
label_cond_1e:
	cVar1 = ( cVar1 + 0x2);
	goto label_goto_1d;

}
// .method private static skipValue(II)I
int android::icu::util::CharsTrie::skipValue(int cVar0,int leadUnit)
{
	
	int cVar0;
	
	//    .param p0, "pos"    # I
	//    .param p1, "leadUnit"    # I
	if ( leadUnit <  0x4000 )
		goto label_cond_a;
	if ( leadUnit >= 0x7fff )
		goto label_cond_b;
	cVar0 = ( cVar0 + 0x1);
label_cond_a:
label_goto_a:
	return cVar0;
	// 1572    .line 643
label_cond_b:
	cVar0 = ( cVar0 + 0x2);
	goto label_goto_a;

}
// .method private static skipValue(Ljava/lang/CharSequence;I)I
int android::icu::util::CharsTrie::skipValue(std::shared_ptr<java::lang::CharSequence> chars,int pos)
{
	
	//    .param p0, "chars"    # Ljava/lang/CharSequence;
	//    .param p1, "pos"    # I
	//    .end local p1    # "pos":I
	//    .local v1, "pos":I
	//    .local v0, "leadUnit":I
	return android::icu::util::CharsTrie::skipValue(( pos + 0x1), ( chars->charAt(pos) & 0x7fff));

}
// .method private stop()V
void android::icu::util::CharsTrie::stop()
{
	
	this->pos_ = -0x1;
	return;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::util::CharsTrie::clone()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1623        value = {
	// 1624            Ljava/lang/CloneNotSupportedException;
	// 1625        }
	// 1626    .end annotation
	return this->clone();

}
// .method public current()Landroid/icu/util/BytesTrie$Result;
std::shared_ptr<android::icu::util::BytesTrie_S_Result> android::icu::util::CharsTrie::current()
{
	
	int pos;
	int node;
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> cVar0;
	
	pos = this->pos_;
	//    .local v1, "pos":I
	if ( pos >= 0 )
		goto label_cond_7;
	return android::icu::util::BytesTrie_S_Result::NO_MATCH;
	// 1653    .line 133
label_cond_7:
	if ( this->remainingMatchLength_ >= 0 )
		goto label_cond_1c;
	node = this->chars_->charAt(pos);
	//    .local v0, "node":I
	if ( node <  0x40 )
		goto label_cond_1c;
	cVar0 = android::icu::util::CharsTrie::valueResults_[_shri(node,0xf)];
	//    .end local v0    # "node":I
label_goto_1b:
	return cVar0;
	// 1682    .line 134
label_cond_1c:
	cVar0 = android::icu::util::BytesTrie_S_Result::NO_VALUE;
	goto label_goto_1b;

}
// .method public first(I)Landroid/icu/util/BytesTrie$Result;
std::shared_ptr<android::icu::util::BytesTrie_S_Result> android::icu::util::CharsTrie::first(int inUnit)
{
	
	//    .param p1, "inUnit"    # I
	this->remainingMatchLength_ = -0x1;
	return this->nextImpl(this->root_, inUnit);

}
// .method public firstForCodePoint(I)Landroid/icu/util/BytesTrie$Result;
std::shared_ptr<android::icu::util::BytesTrie_S_Result> android::icu::util::CharsTrie::firstForCodePoint(int cp)
{
	
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> cVar0;
	
	//    .param p1, "cp"    # I
	if ( cp >  0xffff )
		goto label_cond_a;
	cVar0 = this->first(cp);
label_goto_9:
	return cVar0;
	// 1728    .line 159
label_cond_a:
	if ( !(this->first(android::icu::text::UTF16::getLeadSurrogate(cp))->hasNext()) )  
		goto label_cond_21;
	cVar0 = this->next(android::icu::text::UTF16::getTrailSurrogate(cp));
	goto label_goto_9;
	// 1755    .line 161
label_cond_21:
	cVar0 = android::icu::util::BytesTrie_S_Result::NO_MATCH;
	goto label_goto_9;

}
// .method public getNextChars(Ljava/lang/Appendable;)I
int android::icu::util::CharsTrie::getNextChars(std::shared_ptr<java::lang::Appendable> out)
{
	
	int cVar0;
	int cVar1;
	int pos;
	int node;
	
	//    .param p1, "out"    # Ljava/lang/Appendable;
	cVar0 = 0x1;
	cVar1 = 0x0;
	pos = this->pos_;
	//    .local v1, "pos":I
	if ( pos >= 0 )
		goto label_cond_7;
	return cVar1;
	// 1781    .line 342
label_cond_7:
	if ( this->remainingMatchLength_ < 0 ) 
		goto label_cond_15;
	android::icu::util::CharsTrie::append(out, this->chars_->charAt(pos));
	return cVar0;
	// 1799    .line 346
label_cond_15:
	pos = ( pos + 0x1);
	//    .end local v1    # "pos":I
	//    .local v2, "pos":I
	node = this->chars_->charAt(pos);
	//    .local v0, "node":I
	if ( node <  0x40 )
		goto label_cond_2f;
	if ( !((0x8000 &  node)) )  
		goto label_cond_28;
	return cVar1;
	// 1827    .line 351
label_cond_28:
	//    .end local v2    # "pos":I
	//    .restart local v1    # "pos":I
	node = ( node & 0x3f);
	pos = android::icu::util::CharsTrie::skipNodeValue(pos, node);
	//    .end local v1    # "pos":I
	//    .restart local v2    # "pos":I
label_cond_2f:
	if ( node >= 0x30 )
		goto label_cond_45;
	if ( node )     
		goto label_cond_4f;
	//    .end local v2    # "pos":I
	//    .restart local v1    # "pos":I
label_goto_3d:
	node = ( node + 0x1);
	android::icu::util::CharsTrie::getNextBranchChars(this->chars_, pos, node, out);
	return node;
	// 1873    .line 363
	// 1874    .end local v1    # "pos":I
	// 1875    .restart local v2    # "pos":I
label_cond_45:
	android::icu::util::CharsTrie::append(out, this->chars_->charAt(pos));
	return cVar0;
label_cond_4f:
	//    .end local v2    # "pos":I
	//    .restart local v1    # "pos":I
	goto label_goto_3d;

}
// .method public getUniqueValue()J
long long android::icu::util::CharsTrie::getUniqueValue()
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
	// 1914    .line 325
label_cond_9:
	//    .local v2, "uniqueValue":J
	return _shrll((android::icu::util::CharsTrie::findUniqueValue(this->chars_, ( (this->remainingMatchLength_ +  pos) + 0x1), cVar0) << cVar1),cVar1);

}
// .method public getValue()I
int android::icu::util::CharsTrie::getValue()
{
	
	int pos;
	int leadUnit;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	int cVar1;
	
	pos = this->pos_;
	//    .local v1, "pos":I
	pos = ( pos + 0x1);
	//    .end local v1    # "pos":I
	//    .local v2, "pos":I
	leadUnit = this->chars_->charAt(pos);
	//    .local v0, "leadUnit":I
	if ( android::icu::util::CharsTrie::_assertionsDisabled )     
		goto label_cond_18;
	if ( leadUnit >= 0x40 )
		goto label_cond_18;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 1972    .line 308
label_cond_18:
	if ( !((0x8000 &  leadUnit)) )  
		goto label_cond_27;
	cVar1 = android::icu::util::CharsTrie::readValue(this->chars_, pos, ( leadUnit & 0x7fff));
label_goto_26:
	return cVar1;
	// 1993    .line 309
label_cond_27:
	cVar1 = android::icu::util::CharsTrie::readNodeValue(this->chars_, pos, leadUnit);
	goto label_goto_26;

}
// .method public iterator()Landroid/icu/util/CharsTrie$Iterator;
std::shared_ptr<android::icu::util::CharsTrie_S_Iterator> android::icu::util::CharsTrie::iterator()
{
	
	std::shared_ptr<android::icu::util::CharsTrie_S_Iterator> cVar0;
	
	cVar0 = std::make_shared<android::icu::util::CharsTrie_S_Iterator>(this->chars_, this->pos_, this->remainingMatchLength_, 0x0, 0x0);
	return cVar0;

}
// .method public iterator(I)Landroid/icu/util/CharsTrie$Iterator;
std::shared_ptr<android::icu::util::CharsTrie_S_Iterator> android::icu::util::CharsTrie::iterator(int maxStringLength)
{
	
	std::shared_ptr<android::icu::util::CharsTrie_S_Iterator> cVar0;
	
	//    .param p1, "maxStringLength"    # I
	cVar0 = std::make_shared<android::icu::util::CharsTrie_S_Iterator>(this->chars_, this->pos_, this->remainingMatchLength_, maxStringLength, 0x0);
	return cVar0;

}
// .method public next(I)Landroid/icu/util/BytesTrie$Result;
std::shared_ptr<android::icu::util::BytesTrie_S_Result> android::icu::util::CharsTrie::next(int inUnit)
{
	
	int pos;
	int length;
	int node;
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> cVar0;
	
	//    .param p1, "inUnit"    # I
	pos = this->pos_;
	//    .local v2, "pos":I
	if ( pos >= 0 )
		goto label_cond_7;
	return android::icu::util::BytesTrie_S_Result::NO_MATCH;
	// 2078    .line 174
label_cond_7:
	length = this->remainingMatchLength_;
	//    .local v0, "length":I
	if ( length < 0 ) 
		goto label_cond_37;
	pos = ( pos + 0x1);
	//    .end local v2    # "pos":I
	//    .local v3, "pos":I
	if ( inUnit != this->chars_->charAt(pos) )
		goto label_cond_31;
	length = ( length + -0x1);
	this->remainingMatchLength_ = length;
	this->pos_ = pos;
	if ( length >= 0 )
		goto label_cond_2e;
	node = this->chars_->charAt(pos);
	//    .local v1, "node":I
	if ( node <  0x40 )
		goto label_cond_2e;
	cVar0 = android::icu::util::CharsTrie::valueResults_[_shri(node,0xf)];
	//    .end local v1    # "node":I
label_goto_2d:
	return cVar0;
	// 2133    .line 182
label_cond_2e:
	cVar0 = android::icu::util::BytesTrie_S_Result::NO_VALUE;
	goto label_goto_2d;
	// 2139    .line 184
label_cond_31:
	this->stop();
	return android::icu::util::BytesTrie_S_Result::NO_MATCH;
	// 2148    .line 188
	// 2149    .end local v3    # "pos":I
	// 2150    .restart local v2    # "pos":I
label_cond_37:
	return this->nextImpl(pos, inUnit);

}
// .method public next(Ljava/lang/CharSequence;II)Landroid/icu/util/BytesTrie$Result;
std::shared_ptr<android::icu::util::BytesTrie_S_Result> android::icu::util::CharsTrie::next(std::shared_ptr<java::lang::CharSequence> s,int sIndex,int sLimit)
{
	
	int cVar0;
	int pos;
	int length;
	int sIndex;
	int node;
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> cVar1;
	int inUnit;
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> result;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "sIndex"    # I
	//    .param p3, "sLimit"    # I
	cVar0 = 0x40;
	if ( sIndex <  sLimit )
		goto label_cond_9;
	return this->current();
	// 2178    .line 225
label_cond_9:
	pos = this->pos_;
	//    .local v3, "pos":I
	if ( pos >= 0 )
		goto label_cond_10;
	return android::icu::util::BytesTrie_S_Result::NO_MATCH;
	// 2191    .line 229
label_cond_10:
	length = this->remainingMatchLength_;
	//    .local v1, "length":I
	pos = pos;
	//    .end local v3    # "pos":I
	//    .local v4, "pos":I
	sIndex = sIndex;
	//    .end local p2    # "sIndex":I
	//    .local v6, "sIndex":I
label_goto_14:
	if ( sIndex != sLimit )
		goto label_cond_2e;
	this->remainingMatchLength_ = length;
	this->pos_ = pos;
	if ( length >= 0 )
		goto label_cond_2b;
	node = this->chars_->charAt(pos);
	//    .local v2, "node":I
	if ( node <  cVar0 )
		goto label_cond_2b;
	cVar1 = android::icu::util::CharsTrie::valueResults_[_shri(node,0xf)];
	//    .end local v2    # "node":I
label_goto_2a:
	return cVar1;
	// 2238    .line 240
label_cond_2b:
	cVar1 = android::icu::util::BytesTrie_S_Result::NO_VALUE;
	goto label_goto_2a;
	// 2244    .line 242
label_cond_2e:
	sIndex = ( sIndex + 0x1);
	//    .end local v6    # "sIndex":I
	//    .restart local p2    # "sIndex":I
	inUnit = s->charAt(sIndex);
	//    .local v0, "inUnit":C
	if ( length >= 0 )
		goto label_cond_50;
	this->remainingMatchLength_ = length;
	pos = ( pos + 0x1);
	//    .end local v4    # "pos":I
	//    .restart local v3    # "pos":I
	node = this->chars_->charAt(pos);
	//    .restart local v2    # "node":I
	sIndex = sIndex;
	//    .end local p2    # "sIndex":I
	//    .restart local v6    # "sIndex":I
label_goto_41:
	if ( node >= 0x30 )
		goto label_cond_85;
	result = this->branchNext(pos, node, inUnit);
	//    .local v5, "result":Landroid/icu/util/BytesTrie$Result;
	if ( result != android::icu::util::BytesTrie_S_Result::NO_MATCH )
		goto label_cond_65;
	return android::icu::util::BytesTrie_S_Result::NO_MATCH;
	// 2299    .line 247
	// 2300    .end local v2    # "node":I
	// 2301    .end local v3    # "pos":I
	// 2302    .end local v5    # "result":Landroid/icu/util/BytesTrie$Result;
	// 2303    .end local v6    # "sIndex":I
	// 2304    .restart local v4    # "pos":I
	// 2305    .restart local p2    # "sIndex":I
label_cond_50:
	if ( inUnit == this->chars_->charAt(pos) )
		goto label_cond_5e;
	this->stop();
	return android::icu::util::BytesTrie_S_Result::NO_MATCH;
	// 2323    .line 251
label_cond_5e:
	pos = ( pos + 0x1);
	//    .end local v4    # "pos":I
	//    .restart local v3    # "pos":I
	length = ( length + -0x1);
	pos = pos;
	//    .end local v3    # "pos":I
	//    .restart local v4    # "pos":I
	sIndex = sIndex;
	//    .end local p2    # "sIndex":I
	//    .restart local v6    # "sIndex":I
	goto label_goto_14;
	// 2342    .line 262
	// 2343    .end local v4    # "pos":I
	// 2344    .restart local v2    # "node":I
	// 2345    .restart local v3    # "pos":I
	// 2346    .restart local v5    # "result":Landroid/icu/util/BytesTrie$Result;
label_cond_65:
	if ( sIndex != sLimit )
		goto label_cond_68;
	return result;
	// 2353    .line 265
label_cond_68:
	if ( result != android::icu::util::BytesTrie_S_Result::FINAL_VALUE )
		goto label_cond_72;
	this->stop();
	return android::icu::util::BytesTrie_S_Result::NO_MATCH;
	// 2367    .line 270
label_cond_72:
	//    .end local v6    # "sIndex":I
	//    .restart local p2    # "sIndex":I
	inUnit = s->charAt(sIndex);
	pos = this->pos_;
	pos = ( pos + 0x1);
	//    .end local v3    # "pos":I
	//    .restart local v4    # "pos":I
	node = this->chars_->charAt(pos);
	pos = pos;
	//    .end local v4    # "pos":I
	//    .end local v5    # "result":Landroid/icu/util/BytesTrie$Result;
	//    .restart local v3    # "pos":I
label_goto_83:
	sIndex = sIndex;
	//    .end local p2    # "sIndex":I
	//    .restart local v6    # "sIndex":I
	goto label_goto_41;
	// 2403    .line 273
label_cond_85:
	if ( node >= cVar0 )
		goto label_cond_9e;
	length = ( node + -0x30);
	if ( inUnit == this->chars_->charAt(pos) )
		goto label_cond_97;
	this->stop();
	return android::icu::util::BytesTrie_S_Result::NO_MATCH;
	// 2427    .line 280
label_cond_97:
	pos = ( pos + 0x1);
	length = ( length + -0x1);
	pos = pos;
	//    .end local v3    # "pos":I
	//    .restart local v4    # "pos":I
	goto label_goto_14;
	// 2440    .line 283
	// 2441    .end local v4    # "pos":I
	// 2442    .restart local v3    # "pos":I
label_cond_9e:
	if ( !((0x8000 &  node)) )  
		goto label_cond_aa;
	this->stop();
	return android::icu::util::BytesTrie_S_Result::NO_MATCH;
	// 2458    .line 289
label_cond_aa:
	pos = android::icu::util::CharsTrie::skipNodeValue(pos, node);
	node = ( node & 0x3f);
	//    .end local v6    # "sIndex":I
	//    .restart local p2    # "sIndex":I
	goto label_goto_83;

}
// .method public nextForCodePoint(I)Landroid/icu/util/BytesTrie$Result;
std::shared_ptr<android::icu::util::BytesTrie_S_Result> android::icu::util::CharsTrie::nextForCodePoint(int cp)
{
	
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> cVar0;
	
	//    .param p1, "cp"    # I
	if ( cp >  0xffff )
		goto label_cond_a;
	cVar0 = this->next(cp);
label_goto_9:
	return cVar0;
	// 2493    .line 200
label_cond_a:
	if ( !(this->next(android::icu::text::UTF16::getLeadSurrogate(cp))->hasNext()) )  
		goto label_cond_21;
	cVar0 = this->next(android::icu::text::UTF16::getTrailSurrogate(cp));
	goto label_goto_9;
	// 2520    .line 202
label_cond_21:
	cVar0 = android::icu::util::BytesTrie_S_Result::NO_MATCH;
	goto label_goto_9;

}
// .method public reset()Landroid/icu/util/CharsTrie;
std::shared_ptr<android::icu::util::CharsTrie> android::icu::util::CharsTrie::reset()
{
	
	this->pos_ = this->root_;
	this->remainingMatchLength_ = -0x1;
	return this;

}
// .method public resetToState(Landroid/icu/util/CharsTrie$State;)Landroid/icu/util/CharsTrie;
std::shared_ptr<android::icu::util::CharsTrie> android::icu::util::CharsTrie::resetToState(std::shared_ptr<android::icu::util::CharsTrie_S_State> state)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "state"    # Landroid/icu/util/CharsTrie$State;
	if ( this->chars_ != android::icu::util::CharsTrie_S_State::-get0(state) )
		goto label_cond_21;
	if ( !(this->chars_) )  
		goto label_cond_21;
	if ( this->root_ != android::icu::util::CharsTrie_S_State::-get3(state) )
		goto label_cond_21;
	this->pos_ = android::icu::util::CharsTrie_S_State::-get1(state);
	this->remainingMatchLength_ = android::icu::util::CharsTrie_S_State::-get2(state);
	return this;
	// 2588    .line 117
label_cond_21:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("incompatible trie state")));
	// throw
	throw cVar0;

}
// .method public saveState(Landroid/icu/util/CharsTrie$State;)Landroid/icu/util/CharsTrie;
std::shared_ptr<android::icu::util::CharsTrie> android::icu::util::CharsTrie::saveState(std::shared_ptr<android::icu::util::CharsTrie_S_State> state)
{
	
	//    .param p1, "state"    # Landroid/icu/util/CharsTrie$State;
	android::icu::util::CharsTrie_S_State::-set0(state, this->chars_);
	android::icu::util::CharsTrie_S_State::-set3(state, this->root_);
	android::icu::util::CharsTrie_S_State::-set1(state, this->pos_);
	android::icu::util::CharsTrie_S_State::-set2(state, this->remainingMatchLength_);
	return this;

}


