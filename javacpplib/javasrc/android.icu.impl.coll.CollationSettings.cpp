// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationSettings.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.CollationSettings.h"
#include "android.icu.impl.coll.SharedObject.h"
#include "android.icu.impl.coll.UVector32.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Class.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.util.Arrays.h"

static android::icu::impl::coll::CollationSettings::_assertionsDisabled;
static android::icu::impl::coll::CollationSettings::ALTERNATE_MASK = 0xc;
static android::icu::impl::coll::CollationSettings::BACKWARD_SECONDARY = 0x800;
static android::icu::impl::coll::CollationSettings::CASE_FIRST = 0x200;
static android::icu::impl::coll::CollationSettings::CASE_FIRST_AND_UPPER_MASK = 0x300;
static android::icu::impl::coll::CollationSettings::CASE_LEVEL = 0x400;
static android::icu::impl::coll::CollationSettings::CHECK_FCD = 0x1;
static android::icu::impl::coll::CollationSettings::EMPTY_INT_ARRAY;
static android::icu::impl::coll::CollationSettings::MAX_VARIABLE_MASK = 0x70;
static android::icu::impl::coll::CollationSettings::MAX_VARIABLE_SHIFT = 0x4;
static android::icu::impl::coll::CollationSettings::MAX_VAR_CURRENCY = 0x3;
static android::icu::impl::coll::CollationSettings::MAX_VAR_PUNCT = 0x1;
static android::icu::impl::coll::CollationSettings::MAX_VAR_SPACE = 0x0;
static android::icu::impl::coll::CollationSettings::MAX_VAR_SYMBOL = 0x2;
static android::icu::impl::coll::CollationSettings::NUMERIC = 0x2;
static android::icu::impl::coll::CollationSettings::SHIFTED = 0x4;
static android::icu::impl::coll::CollationSettings::STRENGTH_MASK = 0xf000;
static android::icu::impl::coll::CollationSettings::STRENGTH_SHIFT = 0xc;
static android::icu::impl::coll::CollationSettings::UPPER_FIRST = 0x100;
// .method static constructor <clinit>()V
void android::icu::impl::coll::CollationSettings::static_cinit()
{
	
	android::icu::impl::coll::CollationSettings::_assertionsDisabled = ( android::icu::impl::coll::CollationSettings()->desiredAssertionStatus() ^ 0x1);
	android::icu::impl::coll::CollationSettings::EMPTY_INT_ARRAY = std::make_shared<std::vector<int[]>>(0x0);
	return;

}
// .method constructor <init>()V
android::icu::impl::coll::CollationSettings::CollationSettings()
{
	
	// 095    invoke-direct {p0}, Landroid/icu/impl/coll/SharedObject;-><init>()V
	this->options = 0x2010;
	this->reorderCodes = android::icu::impl::coll::CollationSettings::EMPTY_INT_ARRAY;
	this->fastLatinOptions = -0x1;
	this->fastLatinPrimaries = std::make_shared<std::vector<char[]>>(0x180);
	return;

}
// .method static getStrength(I)I
int android::icu::impl::coll::CollationSettings::getStrength(int options)
{
	
	//    .param p0, "options"    # I
	return _shri(options,0xc);

}
// .method static getTertiaryMask(I)I
int android::icu::impl::coll::CollationSettings::getTertiaryMask(int options)
{
	
	int cVar0;
	
	//    .param p0, "options"    # I
	if ( !(android::icu::impl::coll::CollationSettings::isTertiaryWithCaseBits(options)) )  
		goto label_cond_a;
	cVar0 = 0xff3f;
label_goto_9:
	return cVar0;
	// 153    .line 421
label_cond_a:
	cVar0 = 0x3f3f;
	goto label_goto_9;

}
// .method static isTertiaryWithCaseBits(I)Z
bool android::icu::impl::coll::CollationSettings::isTertiaryWithCaseBits(int options)
{
	
	bool cVar0;
	
	//    .param p0, "options"    # I
	if ( ( options & 0x600) != 0x200 )
		goto label_cond_8;
	cVar0 = 0x1;
label_goto_7:
	return cVar0;
label_cond_8:
	cVar0 = 0x0;
	goto label_goto_7;

}
// .method private reorderEx(J)J
long long android::icu::impl::coll::CollationSettings::reorderEx(long long p)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	int i;
	auto r;
	
	//    .param p1, "p"    # J
	if ( android::icu::impl::coll::CollationSettings::_assertionsDisabled )     
		goto label_cond_12;
	if ( (this->minHighNoReorder > 0x0) > 0 ) 
		goto label_cond_12;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 207    .line 298
label_cond_12:
	if ( (p > this->minHighNoReorder) < 0 ) 
		goto label_cond_19;
	return p;
	// 217    .line 301
label_cond_19:
	//    .local v2, "q":J
	i = 0x0;
	//    .local v0, "i":I
label_goto_1f:
	r = this->reorderRanges[i];
	//    .local v4, "r":J
	if ( ((p | 0xffff) > r) < 0 ) 
		goto label_cond_2a;
	i = ( i + 0x1);
	goto label_goto_1f;
	// 243    .line 305
label_cond_2a:
	return (((long long)((short)((int)(r))) << 0x18) +  p);

}
// .method private static reorderTableHasSplitBytes([B)Z
bool android::icu::impl::coll::CollationSettings::reorderTableHasSplitBytes(std::shared_ptr<unsigned char[]> table)
{
	
	bool cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	int i;
	
	//    .param p0, "table"    # [B
	cVar0 = 0x0;
	if ( android::icu::impl::coll::CollationSettings::_assertionsDisabled )     
		goto label_cond_f;
	if ( !(table[cVar0]) )  
		goto label_cond_f;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 282    .line 279
label_cond_f:
	i = 0x1;
	//    .local v0, "i":I
label_goto_10:
	if ( i >= 0x100 )
		goto label_cond_1d;
	if ( table[i] )     
		goto label_cond_1a;
	return 0x1;
	// 302    .line 279
label_cond_1a:
	i = ( i + 0x1);
	goto label_goto_10;
	// 308    .line 284
label_cond_1d:
	return cVar0;

}
// .method private setReorderArrays([I[III[B)V
void android::icu::impl::coll::CollationSettings::setReorderArrays(std::shared_ptr<int[]> cVar2,std::shared_ptr<int[]> ranges,int rangesStart,int rangesLength,std::shared_ptr<unsigned char[]> table)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<int[]> cVar2;
	int cVar3;
	std::shared_ptr<java::lang::AssertionError> cVar4;
	
	//    .param p1, "codes"    # [I
	//    .param p2, "ranges"    # [I
	//    .param p3, "rangesStart"    # I
	//    .param p4, "rangesLength"    # I
	//    .param p5, "table"    # [B
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( cVar2 )     
		goto label_cond_6;
	cVar2 = android::icu::impl::coll::CollationSettings::EMPTY_INT_ARRAY;
label_cond_6:
	if ( android::icu::impl::coll::CollationSettings::_assertionsDisabled )     
		goto label_cond_1c;
	if ( cVar2->size() )     
		goto label_cond_18;
	cVar3 = cVar0;
label_goto_e:
	if ( table )     
		goto label_cond_1a;
label_goto_10:
	if ( cVar3 == cVar0 )
		goto label_cond_1c;
	cVar4 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar4;
label_cond_18:
	cVar3 = cVar1;
	goto label_goto_e;
label_cond_1a:
	cVar0 = cVar1;
	goto label_goto_10;
	// 366    .line 247
label_cond_1c:
	this->reorderTable = table;
	this->reorderCodes = cVar2;
	this->setReorderRanges(ranges, rangesStart, rangesLength);
	return;

}
// .method private setReorderRanges([III)V
void android::icu::impl::coll::CollationSettings::setReorderRanges(std::shared_ptr<int[]> ranges,int rangesStart,int rangesLength)
{
	
	int i;
	int rangesStart;
	
	//    .param p1, "ranges"    # [I
	//    .param p2, "rangesStart"    # I
	//    .param p3, "rangesLength"    # I
	if ( rangesLength )     
		goto label_cond_6;
	this->reorderRanges = 0x0;
label_goto_5:
	return;
	// 399    .line 256
label_cond_6:
	this->reorderRanges = std::make_shared<std::vector<long long[]>>(rangesLength);
	i = 0x0;
	//    .local v0, "i":I
label_goto_b:
	i = ( i + 0x1);
	//    .end local v0    # "i":I
	//    .local v1, "i":I
	rangesStart = ( rangesStart + 0x1);
	//    .end local p2    # "rangesStart":I
	//    .local v2, "rangesStart":I
	this->reorderRanges[i] = ((long long)(ranges[rangesStart]) &  0xffffffffL);
	if ( i >= rangesLength )
		goto label_cond_21;
	i = i;
	//    .end local v1    # "i":I
	//    .restart local v0    # "i":I
	rangesStart = rangesStart;
	//    .end local v2    # "rangesStart":I
	//    .restart local p2    # "rangesStart":I
	goto label_goto_b;
	// 444    .end local v0    # "i":I
	// 445    .end local p2    # "rangesStart":I
	// 446    .restart local v1    # "i":I
	// 447    .restart local v2    # "rangesStart":I
label_cond_21:
	rangesStart;
	//    .end local v2    # "rangesStart":I
	//    .restart local p2    # "rangesStart":I
	goto label_goto_5;

}
// .method static sortsTertiaryUpperCaseFirst(I)Z
bool android::icu::impl::coll::CollationSettings::sortsTertiaryUpperCaseFirst(int options)
{
	
	bool cVar0;
	
	//    .param p0, "options"    # I
	if ( ( options & 0x700) != 0x300 )
		goto label_cond_8;
	cVar0 = 0x1;
label_goto_7:
	return cVar0;
label_cond_8:
	cVar0 = 0x0;
	goto label_goto_7;

}
// .method aliasReordering(Landroid/icu/impl/coll/CollationData;[II[B)V
void android::icu::impl::coll::CollationSettings::aliasReordering(std::shared_ptr<android::icu::impl::coll::CollationData> data,std::shared_ptr<int[]> codesAndRanges,int codesLength,std::shared_ptr<unsigned char[]> table)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<int[]> codes;
	int rangesLimit;
	int rangesLength;
	int firstSplitByteRangeIndex;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	std::shared<std::vector<int[]>> codes;
	
	//    .param p1, "data"    # Landroid/icu/impl/coll/CollationData;
	//    .param p2, "codesAndRanges"    # [I
	//    .param p3, "codesLength"    # I
	//    .param p4, "table"    # [B
	cVar0 = 0xffff;
	cVar1 = 0x0;
	if ( codesLength != codesAndRanges->size() )
		goto label_cond_2a;
	codes = codesAndRanges;
	//    .local v0, "codes":[I
label_goto_9:
	codesLength;
	//    .local v4, "rangesStart":I
	rangesLimit = codesAndRanges->size();
	//    .local v3, "rangesLimit":I
	rangesLength = (rangesLimit - codesLength);
	//    .local v2, "rangesLength":I
	if ( !(table) )  
		goto label_cond_3f;
	if ( rangesLength )     
		goto label_cond_30;
	if ( !(( android::icu::impl::coll::CollationSettings::reorderTableHasSplitBytes(table) ^ 0x1)) )  
		goto label_cond_3f;
label_cond_19:
	this->reorderTable = table;
	this->reorderCodes = codes;
	firstSplitByteRangeIndex = codesLength;
	//    .local v1, "firstSplitByteRangeIndex":I
label_goto_1e:
	if ( firstSplitByteRangeIndex >= rangesLimit )
		goto label_cond_43;
	if ( (codesAndRanges[firstSplitByteRangeIndex] &  0xff0000) )     
		goto label_cond_43;
	firstSplitByteRangeIndex = ( firstSplitByteRangeIndex + 0x1);
	goto label_goto_1e;
	// 562    .line 143
	// 563    .end local v0    # "codes":[I
	// 564    .end local v1    # "firstSplitByteRangeIndex":I
	// 565    .end local v2    # "rangesLength":I
	// 566    .end local v3    # "rangesLimit":I
	// 567    .end local v4    # "rangesStart":I
label_cond_2a:
	codes = std::make_shared<std::vector<int[]>>(codesLength);
	//    .restart local v0    # "codes":[I
	java::lang::System::arraycopy(codesAndRanges, cVar1, codes, cVar1, codesLength);
	goto label_goto_9;
	// 577    .line 152
	// 578    .restart local v2    # "rangesLength":I
	// 579    .restart local v3    # "rangesLimit":I
	// 580    .restart local v4    # "rangesStart":I
label_cond_30:
	if ( rangesLength <  0x2 )
		goto label_cond_3f;
	if ( (codesAndRanges[codesLength] &  cVar0) )     
		goto label_cond_3f;
	if ( (codesAndRanges[( rangesLimit + -0x1)] &  cVar0) )     
		goto label_cond_19;
label_cond_3f:
	this->setReordering(data, codes);
	return;
	// 609    .line 166
	// 610    .restart local v1    # "firstSplitByteRangeIndex":I
label_cond_43:
	if ( firstSplitByteRangeIndex != rangesLimit )
		goto label_cond_5c;
	if ( android::icu::impl::coll::CollationSettings::_assertionsDisabled )     
		goto label_cond_55;
	if ( !(android::icu::impl::coll::CollationSettings::reorderTableHasSplitBytes(table)) )  
		goto label_cond_55;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 631    .line 168
label_cond_55:
	this->minHighNoReorder = 0x0;
	this->reorderRanges = 0x0;
label_goto_5b:
	return;
	// 644    .line 171
label_cond_5c:
	if ( android::icu::impl::coll::CollationSettings::_assertionsDisabled )     
		goto label_cond_6e;
	if ( !(table[_ushri(codesAndRanges[firstSplitByteRangeIndex],0x18)]) )  
		goto label_cond_6e;
	cVar3 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar3;
	// 664    .line 172
label_cond_6e:
	this->minHighNoReorder = ((long long)(codesAndRanges[( rangesLimit + -0x1)]) &  0xffff0000L);
	this->setReorderRanges(codesAndRanges, firstSplitByteRangeIndex, (rangesLimit - firstSplitByteRangeIndex));
	goto label_goto_5b;

}
// .method public clone()Landroid/icu/impl/coll/CollationSettings;
std::shared_ptr<android::icu::impl::coll::CollationSettings> android::icu::impl::coll::CollationSettings::clone()
{
	
	std::shared_ptr<android::icu::impl::coll::CollationSettings> newSettings;
	std::shared_ptr<char[]> cVar0;
	
	newSettings = this->clone();
	newSettings->checkCast("android::icu::impl::coll::CollationSettings");
	//    .local v0, "newSettings":Landroid/icu/impl/coll/CollationSettings;
	cVar0 = this->fastLatinPrimaries->clone();
	cVar0->checkCast("char[]");
	newSettings->fastLatinPrimaries = cVar0;
	return newSettings;

}
// .method public copyReorderingFrom(Landroid/icu/impl/coll/CollationSettings;)V
void android::icu::impl::coll::CollationSettings::copyReorderingFrom(std::shared_ptr<android::icu::impl::coll::CollationSettings> other)
{
	
	//    .param p1, "other"    # Landroid/icu/impl/coll/CollationSettings;
	if ( other->hasReordering() )     
		goto label_cond_a;
	this->resetReordering();
	return;
	// 761    .line 269
label_cond_a:
	this->minHighNoReorder = other->minHighNoReorder;
	this->reorderTable = other->reorderTable;
	this->reorderRanges = other->reorderRanges;
	this->reorderCodes = other->reorderCodes;
	return;

}
// .method public dontCheckFCD()Z
bool android::icu::impl::coll::CollationSettings::dontCheckFCD()
{
	
	bool cVar1;
	
	cVar1 = 0x0;
	if ( ( this->options & 0x1) )     
		goto label_cond_8;
	cVar1 = 0x1;
label_cond_8:
	return cVar1;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::impl::coll::CollationSettings::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar0;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> o;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	cVar0 = 0x0;
	if ( other )     
		goto label_cond_4;
	return cVar0;
	// 817    .line 109
label_cond_4:
	if ( this->getClass()->equals(other->getClass()) )     
		goto label_cond_13;
	return cVar0;
label_cond_13:
	o = other;
	o->checkCast("android::icu::impl::coll::CollationSettings");
	//    .local v0, "o":Landroid/icu/impl/coll/CollationSettings;
	if ( this->options == o->options )
		goto label_cond_1d;
	return cVar0;
	// 851    .line 112
label_cond_1d:
	if ( !(( this->options & 0xc)) )  
		goto label_cond_2c;
	if ( !((this->variableTop > o->variableTop)) )  
		goto label_cond_2c;
	return cVar0;
	// 869    .line 113
label_cond_2c:
	if ( java::util::Arrays::equals(this->reorderCodes, o->reorderCodes) )     
		goto label_cond_37;
	return cVar0;
	// 883    .line 114
label_cond_37:
	return 0x1;

}
// .method public getAlternateHandling()Z
bool android::icu::impl::coll::CollationSettings::getAlternateHandling()
{
	
	bool cVar1;
	
	cVar1 = 0x0;
	if ( !(( this->options & 0xc)) )  
		goto label_cond_8;
	cVar1 = 0x1;
label_cond_8:
	return cVar1;

}
// .method public getCaseFirst()I
int android::icu::impl::coll::CollationSettings::getCaseFirst()
{
	
	return ( this->options & 0x300);

}
// .method public getFlag(I)Z
bool android::icu::impl::coll::CollationSettings::getFlag(int bit)
{
	
	bool cVar1;
	
	//    .param p1, "bit"    # I
	cVar1 = 0x0;
	if ( !((this->options &  bit)) )  
		goto label_cond_7;
	cVar1 = 0x1;
label_cond_7:
	return cVar1;

}
// .method public getMaxVariable()I
int android::icu::impl::coll::CollationSettings::getMaxVariable()
{
	
	return _shri(( this->options & 0x70),0x4);

}
// .method public getStrength()I
int android::icu::impl::coll::CollationSettings::getStrength()
{
	
	return android::icu::impl::coll::CollationSettings::getStrength(this->options);

}
// .method hasBackwardSecondary()Z
bool android::icu::impl::coll::CollationSettings::hasBackwardSecondary()
{
	
	bool cVar1;
	
	cVar1 = 0x0;
	if ( !(( this->options & 0x800)) )  
		goto label_cond_8;
	cVar1 = 0x1;
label_cond_8:
	return cVar1;

}
// .method public hasReordering()Z
bool android::icu::impl::coll::CollationSettings::hasReordering()
{
	
	bool cVar0;
	
	if ( !(this->reorderTable) )  
		goto label_cond_6;
	cVar0 = 0x1;
label_goto_5:
	return cVar0;
label_cond_6:
	cVar0 = 0x0;
	goto label_goto_5;

}
// .method public hashCode()I
int android::icu::impl::coll::CollationSettings::hashCode()
{
	
	int h;
	int i;
	
	h = ( this->options << 0x8);
	//    .local v0, "h":I
	if ( !(( this->options & 0xc)) )  
		goto label_cond_f;
	h = (int)(((long long)(h) ^  this->variableTop));
label_cond_f:
	h = (h ^  this->reorderCodes->size());
	i = 0x0;
	//    .local v1, "i":I
label_goto_14:
	if ( i >= this->reorderCodes->size() )
		goto label_cond_22;
	h = (h ^  (this->reorderCodes[i] << i));
	i = ( i + 0x1);
	goto label_goto_14;
	// 1066    .line 125
label_cond_22:
	return h;

}
// .method public isNumeric()Z
bool android::icu::impl::coll::CollationSettings::isNumeric()
{
	
	bool cVar1;
	
	cVar1 = 0x0;
	if ( !(( this->options & 0x2)) )  
		goto label_cond_8;
	cVar1 = 0x1;
label_cond_8:
	return cVar1;

}
// .method public reorder(J)J
long long android::icu::impl::coll::CollationSettings::reorder(long long p)
{
	
	unsigned char b;
	
	//    .param p1, "p"    # J
	b = this->reorderTable[_ushri((int)(p),0x18)];
	//    .local v0, "b":B
	if ( b )     
		goto label_cond_f;
	if ( (p > 0x1) > 0 ) 
		goto label_cond_1c;
label_cond_f:
	return ((((long long)(b) &  0xff) << 0x18) |  (0xffffff &  p));
	// 1134    .line 292
label_cond_1c:
	return this->reorderEx(p);

}
// .method public resetReordering()V
void android::icu::impl::coll::CollationSettings::resetReordering()
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	
	cVar0 = 0x0;
	this->reorderTable = cVar0;
	this->minHighNoReorder = 0x0;
	this->reorderRanges = cVar0;
	this->reorderCodes = android::icu::impl::coll::CollationSettings::EMPTY_INT_ARRAY;
	return;

}
// .method public setAlternateHandlingDefault(I)V
void android::icu::impl::coll::CollationSettings::setAlternateHandlingDefault(int defaultOptions)
{
	
	//    .param p1, "defaultOptions"    # I
	//    .local v0, "noAlternate":I
	this->options = (( defaultOptions & 0xc) |  ( this->options & -0xd));
	return;

}
// .method public setAlternateHandlingShifted(Z)V
void android::icu::impl::coll::CollationSettings::setAlternateHandlingShifted(bool value)
{
	
	int noAlternate;
	
	//    .param p1, "value"    # Z
	noAlternate = ( this->options & -0xd);
	//    .local v0, "noAlternate":I
	if ( !(value) )  
		goto label_cond_b;
	this->options = ( noAlternate | 0x4);
label_goto_a:
	return;
	// 1214    .line 378
label_cond_b:
	this->options = noAlternate;
	goto label_goto_a;

}
// .method public setCaseFirst(I)V
void android::icu::impl::coll::CollationSettings::setCaseFirst(int value)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p1, "value"    # I
	if ( android::icu::impl::coll::CollationSettings::_assertionsDisabled )     
		goto label_cond_14;
	if ( !(value) )  
		goto label_cond_14;
	if ( value == 0x200 )
		goto label_cond_14;
	if ( value == 0x300 )
		goto label_cond_14;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 1247    .line 360
label_cond_14:
	//    .local v0, "noCaseFirst":I
	this->options = (( this->options & -0x301) | value);
	return;

}
// .method public setCaseFirstDefault(I)V
void android::icu::impl::coll::CollationSettings::setCaseFirstDefault(int defaultOptions)
{
	
	//    .param p1, "defaultOptions"    # I
	//    .local v0, "noCaseFirst":I
	this->options = (( defaultOptions & 0x300) |  ( this->options & -0x301));
	return;

}
// .method public setFlag(IZ)V
void android::icu::impl::coll::CollationSettings::setFlag(int bit,bool value)
{
	
	//    .param p1, "bit"    # I
	//    .param p2, "value"    # Z
	if ( !(value) )  
		goto label_cond_8;
	this->options = (this->options |  bit);
label_goto_7:
	return;
	// 1305    .line 346
label_cond_8:
	this->options = (this->options &  (~bit));
	goto label_goto_7;

}
// .method public setFlagDefault(II)V
void android::icu::impl::coll::CollationSettings::setFlagDefault(int bit,int defaultOptions)
{
	
	//    .param p1, "bit"    # I
	//    .param p2, "defaultOptions"    # I
	this->options = ((this->options &  (~bit)) |  (defaultOptions & bit));
	return;

}
// .method public setMaxVariable(II)V
void android::icu::impl::coll::CollationSettings::setMaxVariable(int value,int defaultOptions)
{
	
	int noMax;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "value"    # I
	//    .param p2, "defaultOptions"    # I
	noMax = ( this->options & -0x71);
	//    .local v0, "noMax":I
	// switch
	{
	auto item = ( value );
	if (item == -1) goto label_pswitch_27;
	if (item == 0) goto label_pswitch_21;
	if (item == 1) goto label_pswitch_21;
	if (item == 2) goto label_pswitch_21;
	if (item == 3) goto label_pswitch_21;
	}
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("illegal maxVariable value ")))->append(value)->toString());
	// throw
	throw cVar0;
	// 1381    .line 398
label_pswitch_21:
	this->options = (( value << 0x4) |  noMax);
label_goto_26:
	return;
	// 1393    .line 401
label_pswitch_27:
	this->options = (( defaultOptions & 0x70) |  noMax);
	goto label_goto_26;
	// 1403    .line 393
	// 1404    nop
	// 1406    :pswitch_data_2e
	// 1407    .packed-switch -0x1
	// 1408        :pswitch_27
	// 1409        :pswitch_21
	// 1410        :pswitch_21
	// 1411        :pswitch_21
	// 1412        :pswitch_21
	// 1413    .end packed-switch

}
// .method public setReordering(Landroid/icu/impl/coll/CollationData;[I)V
void android::icu::impl::coll::CollationSettings::setReordering(std::shared_ptr<android::icu::impl::coll::CollationData> data,std::shared_ptr<int[]> codes)
{
	
	std::shared_ptr<android::icu::impl::coll::UVector32> rangesList;
	int rangesLength;
	std::shared_ptr<int[]> ranges;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	std::shared<std::vector<unsigned char[]>> table;
	int b;
	int firstSplitByteRangeIndex;
	int i;
	int pair;
	int limit1;
	
	//    .param p1, "data"    # Landroid/icu/impl/coll/CollationData;
	//    .param p2, "codes"    # [I
	if ( !(codes->size()) )  
		goto label_cond_12;
	if ( codes->size() != 0x1 )
		goto label_cond_16;
	if ( codes[0x0] != 0x67 )
		goto label_cond_16;
label_cond_12:
	this->resetReordering();
	return;
	// 1452    .line 187
label_cond_16:
	rangesList = std::make_shared<android::icu::impl::coll::UVector32>();
	//    .local v13, "rangesList":Landroid/icu/impl/coll/UVector32;
	data->makeReorderRanges(codes, rangesList);
	rangesLength = rangesList->size();
	//    .local v6, "rangesLength":I
	if ( rangesLength )     
		goto label_cond_2c;
	this->resetReordering();
	return;
	// 1481    .line 194
label_cond_2c:
	ranges = rangesList->getBuffer();
	//    .local v4, "ranges":[I
	if ( android::icu::impl::coll::CollationSettings::_assertionsDisabled )     
		goto label_cond_3d;
	if ( rangesLength >= 0x2 )
		goto label_cond_3d;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 1503    .line 200
label_cond_3d:
	if ( android::icu::impl::coll::CollationSettings::_assertionsDisabled )     
		goto label_cond_5a;
	if ( (ranges[0x0] &  0xffff) )     
		goto label_cond_54;
	if ( (ranges[( rangesLength + -0x1)] &  0xffff) )     
		goto label_cond_5a;
label_cond_54:
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 1536    .line 201
label_cond_5a:
	this->minHighNoReorder = ((long long)(ranges[( rangesLength + -0x1)]) &  0xffff0000L);
	table = std::make_shared<std::vector<unsigned char[]>>(0x100);
	//    .local v7, "table":[B
	b = 0x0;
	//    .local v8, "b":I
	firstSplitByteRangeIndex = -0x1;
	//    .local v9, "firstSplitByteRangeIndex":I
	i = 0x0;
	//    .local v10, "i":I
label_goto_70:
	if ( i >= rangesLength )
		goto label_cond_90;
	pair = ranges[i];
	//    .local v12, "pair":I
	limit1 = _ushri(pair,0x18);
	//    .local v11, "limit1":I
label_goto_76:
	if ( b >= limit1 )
		goto label_cond_80;
	table[b] = (unsigned char)((b + pair));
	b = ( b + 0x1);
	goto label_goto_76;
	// 1597    .line 216
label_cond_80:
	if ( !((0xff0000 &  pair)) )  
		goto label_cond_8d;
	table[limit1] = 0x0;
	b = ( limit1 + 0x1);
	if ( firstSplitByteRangeIndex >= 0 )
		goto label_cond_8d;
	firstSplitByteRangeIndex = i;
label_cond_8d:
	i = ( i + 0x1);
	goto label_goto_70;
	// 1625    .line 224
	// 1626    .end local v11    # "limit1":I
	// 1627    .end local v12    # "pair":I
label_cond_90:
label_goto_90:
	if ( b >  0xff )
		goto label_cond_9a;
	table[b] = (unsigned char)(b);
	b = ( b + 0x1);
	goto label_goto_90;
	// 1644    .line 229
label_cond_9a:
	if ( firstSplitByteRangeIndex >= 0 )
		goto label_cond_a6;
	rangesLength = 0x0;
	//    .local v5, "rangesStart":I
label_goto_9e:
	this->setReorderArrays(codes, ranges, rangesStart, rangesLength, table);
	return;
	// 1665    .line 234
	// 1666    .end local v5    # "rangesStart":I
label_cond_a6:
	//    .restart local v5    # "rangesStart":I
	rangesLength = (rangesLength -  firstSplitByteRangeIndex);
	goto label_goto_9e;

}
// .method public setStrength(I)V
void android::icu::impl::coll::CollationSettings::setStrength(int value)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "value"    # I
	//    .local v0, "noStrength":I
	// switch
	{
	auto item = ( value );
	if (item == 0x0) goto label_sswitch_24;
	if (item == 0x1) goto label_sswitch_24;
	if (item == 0x2) goto label_sswitch_24;
	if (item == 0x3) goto label_sswitch_24;
	if (item == 0xf) goto label_sswitch_24;
	}
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("illegal strength value ")))->append(value)->toString());
	// throw
	throw cVar0;
	// 1718    .line 321
label_sswitch_24:
	this->options = (( value << 0xc) |  (this->options & -0xf001));
	return;
	// 1729    .line 315
	// 1730    :sswitch_data_2a
	// 1731    .sparse-switch
	// 1732        0x0 -> :sswitch_24
	// 1733        0x1 -> :sswitch_24
	// 1734        0x2 -> :sswitch_24
	// 1735        0x3 -> :sswitch_24
	// 1736        0xf -> :sswitch_24
	// 1737    .end sparse-switch

}
// .method public setStrengthDefault(I)V
void android::icu::impl::coll::CollationSettings::setStrengthDefault(int defaultOptions)
{
	
	//    .param p1, "defaultOptions"    # I
	//    .local v0, "noStrength":I
	this->options = ((0xf000 &  defaultOptions) |  (this->options & -0xf001));
	return;

}


