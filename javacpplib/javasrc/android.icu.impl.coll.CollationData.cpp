// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationData.smali
#include "java2ctype.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "android.icu.impl.Trie2_32.h"
#include "android.icu.impl.coll.Collation.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.UVector32.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.ICUException.h"
#include "java.lang.AssertionError.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.UnsupportedOperationException.h"

static android::icu::impl::coll::CollationData::_assertionsDisabled;
static android::icu::impl::coll::CollationData::EMPTY_INT_ARRAY;
static android::icu::impl::coll::CollationData::JAMO_CE32S_LENGTH = 0x43;
static android::icu::impl::coll::CollationData::MAX_NUM_SPECIAL_REORDER_CODES = 0x8;
static android::icu::impl::coll::CollationData::REORDER_RESERVED_AFTER_LATIN = 0x100f;
static android::icu::impl::coll::CollationData::REORDER_RESERVED_BEFORE_LATIN = 0x100e;
// .method static constructor <clinit>()V
void android::icu::impl::coll::CollationData::static_cinit()
{
	
	android::icu::impl::coll::CollationData::_assertionsDisabled = ( android::icu::impl::coll::CollationData()->desiredAssertionStatus() ^ 0x1);
	android::icu::impl::coll::CollationData::EMPTY_INT_ARRAY = std::make_shared<std::vector<int[]>>(0x0);
	return;

}
// .method constructor <init>(Landroid/icu/impl/Normalizer2Impl;)V
android::icu::impl::coll::CollationData::CollationData(std::shared_ptr<android::icu::impl::Normalizer2Impl> nfc)
{
	
	//    .param p1, "nfc"    # Landroid/icu/impl/Normalizer2Impl;
	// 086    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->jamoCE32s = std::make_shared<std::vector<int[]>>(0x43);
	this->numericPrimary = 0x12000000;
	this->nfcImpl = nfc;
	return;

}
// .method private addHighScriptRange([SII)I
int android::icu::impl::coll::CollationData::addHighScriptRange(std::shared_ptr<short[]> table,int index,int cVar1)
{
	
	int cVar0;
	char limit;
	int cVar1;
	char start;
	int cVar2;
	
	//    .param p1, "table"    # [S
	//    .param p2, "index"    # I
	//    .param p3, "highLimit"    # I
	cVar0 = 0xff00;
	limit = this->scriptStarts[( index + 0x1)];
	//    .local v0, "limit":I
	if ( ( limit & 0xff) <= ( cVar1 & 0xff) )
		goto label_cond_11;
	cVar1 = ( cVar1 + -0x100);
label_cond_11:
	start = this->scriptStarts[index];
	//    .local v1, "start":I
	cVar2 = (((cVar1 & cVar0) -  ((limit & cVar0) -  (cVar0 &  start))) | ( start & 0xff));
	table[index] = (short)(_shri(cVar2,0x8));
	return cVar2;

}
// .method private addLowScriptRange([SII)I
int android::icu::impl::coll::CollationData::addLowScriptRange(std::shared_ptr<short[]> table,int index,int cVar1)
{
	
	int cVar0;
	char start;
	int cVar1;
	char limit;
	
	//    .param p1, "table"    # [S
	//    .param p2, "index"    # I
	//    .param p3, "lowStart"    # I
	cVar0 = 0xff00;
	start = this->scriptStarts[index];
	//    .local v1, "start":I
	if ( ( start & 0xff) >= ( cVar1 & 0xff) )
		goto label_cond_f;
	cVar1 = ( cVar1 + 0x100);
label_cond_f:
	table[index] = (short)(_shri(cVar1,0x8));
	limit = this->scriptStarts[( index + 0x1)];
	//    .local v0, "limit":I
	return (((cVar1 & cVar0) +  ((limit & cVar0) -  (cVar0 &  start))) | ( limit & 0xff));

}
// .method private getScriptIndex(I)I
int android::icu::impl::coll::CollationData::getScriptIndex(int script)
{
	
	int cVar0;
	int cVar1;
	
	//    .param p1, "script"    # I
	cVar0 = 0x0;
	if ( script >= 0 )
		goto label_cond_4;
	return cVar0;
	// 240    .line 244
label_cond_4:
	if ( script >= this->numScripts )
		goto label_cond_d;
	return this->scriptsIndex[script];
	// 253    .line 246
label_cond_d:
	if ( script >= 0x1000 )
		goto label_cond_12;
	return cVar0;
	// 262    .line 249
label_cond_12:
	cVar1 = ( script + -0x1000);
	if ( cVar1 >= 0x8 )
		goto label_cond_20;
	return this->scriptsIndex[(this->numScripts +  cVar1)];
	// 282    .line 253
label_cond_20:
	return cVar0;

}
// .method private makeReorderRanges([IZLandroid/icu/impl/coll/UVector32;)V
void android::icu::impl::coll::CollationData::makeReorderRanges(std::shared_ptr<int[]> reorder,bool latinMustMove,std::shared_ptr<android::icu::impl::coll::UVector32> ranges)
{
	
	int length;
	auto table;
	char index;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	int lowStart;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	int highLimit;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	int specials;
	int i;
	int reorderCode;
	int index;
	std::shared_ptr<java::lang::AssertionError> cVar4;
	char start;
	std::shared_ptr<java::lang::AssertionError> cVar5;
	int script;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar6;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar7;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar8;
	std::shared_ptr<java::lang::StringBuilder> cVar9;
	std::shared_ptr<android::icu::util::ICUException> cVar13;
	int offset;
	short newLeadByte;
	int nextOffset;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar10;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar11;
	std::shared_ptr<java::lang::StringBuilder> cVar12;
	
	//    .param p1, "reorder"    # [I
	//    .param p2, "latinMustMove"    # Z
	//    .param p3, "ranges"    # Landroid/icu/impl/coll/UVector32;
	ranges->removeAllElements();
	length = reorder->size();
	//    .local v10, "length":I
	if ( !(length) )  
		goto label_cond_1a;
	if ( length != 0x1 )
		goto label_cond_1b;
	if ( reorder[0x0] != 0x67 )
		goto label_cond_1b;
label_cond_1a:
	return;
	// 328    .line 308
label_cond_1b:
	table = std::make_shared<std::vector<short[]>>(( this->scriptStarts->size() + -0x1));
	//    .local v20, "table":[S
	index = this->scriptsIndex[( ( this->numScripts + 0x100e) + -0x1000)];
	//    .local v8, "index":I
	if ( !(index) )  
		goto label_cond_4e;
	table[index] = 0xff;
label_cond_4e:
	index = this->scriptsIndex[( ( this->numScripts + 0x100f) + -0x1000)];
	if ( !(index) )  
		goto label_cond_6e;
	table[index] = 0xff;
label_cond_6e:
	if ( android::icu::impl::coll::CollationData::_assertionsDisabled )     
		goto label_cond_8b;
	if ( this->scriptStarts->size() >= 0x2 )
		goto label_cond_8b;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 459    .line 326
label_cond_8b:
	if ( android::icu::impl::coll::CollationData::_assertionsDisabled )     
		goto label_cond_a1;
	if ( !(this->scriptStarts[0x0]) )  
		goto label_cond_a1;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 483    .line 327
label_cond_a1:
	lowStart = this->scriptStarts[0x1];
	//    .local v11, "lowStart":I
	if ( android::icu::impl::coll::CollationData::_assertionsDisabled )     
		goto label_cond_bb;
	if ( lowStart == 0x300 )
		goto label_cond_bb;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 513    .line 329
label_cond_bb:
	highLimit = this->scriptStarts[( this->scriptStarts->size() + -0x1)];
	//    .local v5, "highLimit":I
	if ( android::icu::impl::coll::CollationData::_assertionsDisabled )     
		goto label_cond_e1;
	if ( highLimit == 0xff00 )
		goto label_cond_e1;
	cVar3 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar3;
	// 555    .line 335
label_cond_e1:
	specials = 0x0;
	//    .local v18, "specials":I
	i = 0x0;
	//    .local v6, "i":I
label_goto_e4:
	if ( i >= length )
		goto label_cond_fd;
	reorderCode = ( reorder[i] + -0x1000);
	//    .local v15, "reorderCode":I
	if ( reorderCode < 0 ) 
		goto label_cond_fa;
	if ( reorderCode >= 0x8 )
		goto label_cond_fa;
	specials = (specials | (0x1 << reorderCode));
label_cond_fa:
	i = ( i + 0x1);
	goto label_goto_e4;
	// 597    .line 344
	// 598    .end local v15    # "reorderCode":I
label_cond_fd:
	i = 0x0;
label_goto_fe:
	if ( i >= 0x8 )
		goto label_cond_129;
	index = this->scriptsIndex[(this->numScripts + i)];
	if ( !(index) )  
		goto label_cond_126;
	if ( ((0x1 << i) & specials) )     
		goto label_cond_126;
	lowStart = this->addLowScriptRange(table, index, lowStart);
label_cond_126:
	i = ( i + 0x1);
	goto label_goto_fe;
	// 652    .line 353
label_cond_129:
	0x0;
	//    .local v17, "skippedReserved":I
	if ( specials )     
		goto label_cond_16d;
	if ( reorder[0x0] != 0x19 )
		goto label_cond_16d;
	if ( !(( latinMustMove ^ 0x1)) )  
		goto label_cond_16d;
	index = this->scriptsIndex[0x19];
	if ( android::icu::impl::coll::CollationData::_assertionsDisabled )     
		goto label_cond_153;
	if ( index )     
		goto label_cond_153;
	cVar4 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar4;
	// 700    .line 357
label_cond_153:
	start = this->scriptStarts[index];
	//    .local v19, "start":I
	if ( android::icu::impl::coll::CollationData::_assertionsDisabled )     
		goto label_cond_169;
	if ( lowStart <= start )
		goto label_cond_169;
	cVar5 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar5;
	// 726    .line 359
label_cond_169:
	lowStart = start;
	//    .end local v19    # "start":I
label_cond_16d:
	0x0;
	//    .local v4, "hasReorderToEnd":Z
	i = 0x0;
	i = i;
	//    .end local v6    # "i":I
	//    .local v7, "i":I
label_goto_170:
	if ( i >= length )
		goto label_cond_225;
	i = ( i + 0x1);
	//    .end local v7    # "i":I
	//    .restart local v6    # "i":I
	script = reorder[i];
	//    .local v16, "script":I
	if ( script != 0x67 )
		goto label_cond_1dc;
label_cond_17f:
label_goto_17f:
	if ( i >= length )
		goto label_cond_226;
	length = ( length + -0x1);
	script = reorder[length];
	if ( script != 0x67 )
		goto label_cond_196;
	cVar6 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("setReorderCodes(): duplicate UScript.UNKNOWN")));
	// throw
	throw cVar6;
	// 799    .line 376
label_cond_196:
	if ( script != -0x1 )
		goto label_cond_1a7;
	cVar7 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("setReorderCodes(): UScript.DEFAULT together with other scripts")));
	// throw
	throw cVar7;
	// 820    .line 380
label_cond_1a7:
	index = this->getScriptIndex(script);
	if ( !(index) )  
		goto label_cond_17f;
	if ( !(table[index]) )  
		goto label_cond_1d3;
	cVar9 = std::make_shared<java::lang::StringBuilder>();
	cVar8 = std::make_shared<java::lang::IllegalArgumentException>(cVar9->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("setReorderCodes(): duplicate or equivalent script ")))->append(android::icu::impl::coll::CollationData::scriptCodeString(script))->toString());
	// throw
	throw cVar8;
	// 871    .line 387
label_cond_1d3:
	highLimit = this->addHighScriptRange(table, index, highLimit);
	goto label_goto_17f;
	// 883    .line 391
label_cond_1dc:
	if ( script != -0x1 )
		goto label_cond_1ed;
	cVar10 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("setReorderCodes(): UScript.DEFAULT together with other scripts")));
	// throw
	throw cVar10;
	// 904    .line 397
label_cond_1ed:
	index = this->getScriptIndex(script);
	if ( index )     
		goto label_cond_1fa;
label_goto_1f7:
	i = i;
	//    .end local v6    # "i":I
	//    .restart local v7    # "i":I
	goto label_goto_170;
	// 924    .line 399
	// 925    .end local v7    # "i":I
	// 926    .restart local v6    # "i":I
label_cond_1fa:
	if ( !(table[index]) )  
		goto label_cond_21c;
	cVar12 = std::make_shared<java::lang::StringBuilder>();
	cVar11 = std::make_shared<java::lang::IllegalArgumentException>(cVar12->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("setReorderCodes(): duplicate or equivalent script ")))->append(android::icu::impl::coll::CollationData::scriptCodeString(script))->toString());
	// throw
	throw cVar11;
	// 965    .line 404
label_cond_21c:
	lowStart = this->addLowScriptRange(table, index, lowStart);
	goto label_goto_1f7;
	// 977    .end local v6    # "i":I
	// 978    .end local v16    # "script":I
	// 979    .restart local v7    # "i":I
label_cond_225:
	i = i;
	//    .end local v7    # "i":I
	//    .restart local v6    # "i":I
label_cond_226:
	i = 0x1;
label_goto_227:
	if ( i >= ( this->scriptStarts->size() + -0x1) )
		goto label_cond_258;
	//    .local v9, "leadByte":I
	if ( !(table[i]) )  
		goto label_cond_23f;
label_goto_23c:
	i = ( i + 0x1);
	goto label_goto_227;
	// 1021    .line 411
label_cond_23f:
	start = this->scriptStarts[i];
	//    .restart local v19    # "start":I
	if ( 0x1 )     
		goto label_cond_24f;
	if ( start <= lowStart )
		goto label_cond_24f;
	lowStart = start;
label_cond_24f:
	lowStart = this->addLowScriptRange(table, i, lowStart);
	goto label_goto_23c;
	// 1054    .line 418
	// 1055    .end local v9    # "leadByte":I
	// 1056    .end local v19    # "start":I
label_cond_258:
	if ( lowStart <= highLimit )
		goto label_cond_27c;
	if ( (lowStart - (0xff00 & (start - lowStart))) >  highLimit )
		goto label_cond_273;
	this->makeReorderRanges(reorder, 0x1, ranges);
	return;
	// 1087    .line 425
label_cond_273:
	cVar13 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("setReorderCodes(): reordering too many partial-primary-lead-byte scripts")));
	// throw
	throw cVar13;
	// 1099    .line 432
label_cond_27c:
	offset = 0x0;
	//    .local v14, "offset":I
	i = 0x1;
label_goto_27e:
	//    .local v13, "nextOffset":I
label_goto_27f:
	if ( i >= ( this->scriptStarts->size() + -0x1) )
		goto label_cond_2a9;
	newLeadByte = table[i];
	//    .local v12, "newLeadByte":I
	if ( newLeadByte != 0xff )
		goto label_cond_29b;
label_cond_298:
	i = ( i + 0x1);
	goto label_goto_27f;
	// 1149    .line 440
label_cond_29b:
	nextOffset = (newLeadByte - _shri(this->scriptStarts[i],0x8));
	if ( nextOffset == offset )
		goto label_cond_298;
	//    .end local v12    # "newLeadByte":I
label_cond_2a9:
	if ( offset )     
		goto label_cond_2bc;
	if ( i >= ( this->scriptStarts->size() + -0x1) )
		goto label_cond_2d4;
label_cond_2bc:
	ranges->addElement((( this->scriptStarts[i] << 0x10) | (0xffff & offset)));
label_cond_2d4:
	if ( i != ( this->scriptStarts->size() + -0x1) )
		goto label_cond_2e6;
	return;
	// 1236    .line 449
label_cond_2e6:
	offset = offset;
	i = ( i + 0x1);
	goto label_goto_27e;

}
// .method private static scriptCodeString(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::coll::CollationData::scriptCodeString(int script)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "script"    # I
	if ( script >= 0x1000 )
		goto label_cond_9;
	cVar0 = java::lang::Integer::toString(script);
label_goto_8:
	return cVar0;
	// 1265    .line 478
label_cond_9:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("0x")))->append(java::lang::Integer::toHexString(script))->toString();
	goto label_goto_8;

}
// .method public getCE32(I)I
int android::icu::impl::coll::CollationData::getCE32(int c)
{
	
	//    .param p1, "c"    # I
	return this->trie->get(c);

}
// .method getCE32FromContexts(I)I
int android::icu::impl::coll::CollationData::getCE32FromContexts(int index)
{
	
	//    .param p1, "index"    # I
	return (( this->contexts->charAt(index) << 0x10) |  this->contexts->charAt(( index + 0x1)));

}
// .method getCE32FromSupplementary(I)I
int android::icu::impl::coll::CollationData::getCE32FromSupplementary(int c)
{
	
	//    .param p1, "c"    # I
	return this->trie->get(c);

}
// .method getCEFromOffsetCE32(II)J
long long android::icu::impl::coll::CollationData::getCEFromOffsetCE32(int c,int ce32)
{
	
	//    .param p1, "c"    # I
	//    .param p2, "ce32"    # I
	//    .local v0, "dataCE":J
	return android::icu::impl::coll::Collation::makeCE(android::icu::impl::coll::Collation::getThreeBytePrimaryForOffsetData(c, this->ces[android::icu::impl::coll::Collation::indexFromCE32(ce32)]));

}
// .method public getEquivalentScripts(I)[I
int android::icu::impl::coll::CollationData::getEquivalentScripts(int script)
{
	
	int cVar0;
	int cVar1;
	int index;
	std::shared<std::vector<int[]>> cVar2;
	int length;
	int i;
	std::shared<std::vector<int[]>> dest;
	
	//    .param p1, "script"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	index = this->getScriptIndex(script);
	//    .local v2, "index":I
	if ( index )     
		goto label_cond_b;
	return android::icu::impl::coll::CollationData::EMPTY_INT_ARRAY;
	// 1401    .line 261
label_cond_b:
	if ( script <  0x1000 )
		goto label_cond_14;
	cVar2 = std::make_shared<std::vector<int[]>>(cVar0);
	cVar2[cVar1] = script;
	return cVar2;
	// 1414    .line 266
label_cond_14:
	length = 0x0;
	//    .local v3, "length":I
	i = 0x0;
	//    .local v1, "i":I
label_goto_16:
	if ( i >= this->numScripts )
		goto label_cond_25;
	if ( this->scriptsIndex[i] != index )
		goto label_cond_22;
	length = ( length + 0x1);
label_cond_22:
	i = ( i + 0x1);
	goto label_goto_16;
	// 1444    .line 272
label_cond_25:
	dest = std::make_shared<std::vector<int[]>>(length);
	//    .local v0, "dest":[I
	if ( length != cVar0 )
		goto label_cond_2c;
	dest[cVar1] = script;
	return dest;
	// 1458    .line 277
label_cond_2c:
	length = 0x0;
	i = 0x0;
label_goto_2e:
	if ( i >= this->numScripts )
		goto label_cond_40;
	if ( this->scriptsIndex[i] != index )
		goto label_cond_3d;
	length = ( length + 0x1);
	//    .end local v3    # "length":I
	//    .local v4, "length":I
	dest[length] = i;
	length = length;
	//    .end local v4    # "length":I
	//    .restart local v3    # "length":I
label_cond_3d:
	i = ( i + 0x1);
	goto label_goto_2e;
	// 1494    .line 283
label_cond_40:
	return dest;

}
// .method getFCD16(I)I
int android::icu::impl::coll::CollationData::getFCD16(int c)
{
	
	//    .param p1, "c"    # I
	return this->nfcImpl->getFCD16(c);

}
// .method getFinalCE32(I)I
int android::icu::impl::coll::CollationData::getFinalCE32(int cVar0)
{
	
	int cVar0;
	
	//    .param p1, "ce32"    # I
	if ( !(android::icu::impl::coll::Collation::isSpecialCE32(cVar0)) )  
		goto label_cond_a;
	cVar0 = this->getIndirectCE32(cVar0);
label_cond_a:
	return cVar0;

}
// .method getFirstPrimaryForGroup(I)J
long long android::icu::impl::coll::CollationData::getFirstPrimaryForGroup(int script)
{
	
	int index;
	long long cVar0;
	
	//    .param p1, "script"    # I
	index = this->getScriptIndex(script);
	//    .local v0, "index":I
	if ( index )     
		goto label_cond_9;
	cVar0 = 0x0;
label_goto_8:
	return cVar0;
label_cond_9:
	cVar0 = ((long long)(this->scriptStarts[index]) << 0x10);
	goto label_goto_8;

}
// .method public getGroupForPrimary(J)I
int android::icu::impl::coll::CollationData::getGroupForPrimary(long long p)
{
	
	int cVar0;
	long long cVar1;
	int index;
	int i;
	
	//    .param p1, "p"    # J
	cVar0 = -0x1;
	cVar1 = _shrll(p,0x10);
	if ( (cVar1 > (long long)(this->scriptStarts[0x1])) < 0 ) 
		goto label_cond_1c;
	if ( ((long long)(this->scriptStarts[( this->scriptStarts->size() + -0x1)]) > cVar1) > 0 ) 
		goto label_cond_1d;
label_cond_1c:
	return cVar0;
	// 1614    .line 226
label_cond_1d:
	index = 0x1;
	//    .local v1, "index":I
label_goto_1e:
	if ( (cVar1 > (long long)(this->scriptStarts[( index + 0x1)])) < 0 ) 
		goto label_cond_2c;
	index = ( index + 0x1);
	goto label_goto_1e;
	// 1637    .line 228
label_cond_2c:
	i = 0x0;
	//    .local v0, "i":I
label_goto_2d:
	if ( i >= this->numScripts )
		goto label_cond_3b;
	if ( this->scriptsIndex[i] != index )
		goto label_cond_38;
	return i;
	// 1657    .line 228
label_cond_38:
	i = ( i + 0x1);
	goto label_goto_2d;
	// 1663    .line 233
label_cond_3b:
	i = 0x0;
label_goto_3c:
	if ( i >= 0x8 )
		goto label_cond_4f;
	if ( this->scriptsIndex[(this->numScripts +  i)] != index )
		goto label_cond_4c;
	return ( i + 0x1000);
	// 1688    .line 233
label_cond_4c:
	i = ( i + 0x1);
	goto label_goto_3c;
	// 1694    .line 238
label_cond_4f:
	return cVar0;

}
// .method getIndirectCE32(I)I
int android::icu::impl::coll::CollationData::getIndirectCE32(int cVar1)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	int tag;
	int cVar1;
	
	//    .param p1, "ce32"    # I
	if ( android::icu::impl::coll::CollationData::_assertionsDisabled )     
		goto label_cond_10;
	if ( android::icu::impl::coll::Collation::isSpecialCE32(cVar1) )     
		goto label_cond_10;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 1721    .line 84
label_cond_10:
	tag = android::icu::impl::coll::Collation::tagFromCE32(cVar1);
	//    .local v0, "tag":I
	if ( tag != 0xa )
		goto label_cond_21;
	cVar1 = this->ce32s[android::icu::impl::coll::Collation::indexFromCE32(cVar1)];
label_cond_20:
label_goto_20:
	return cVar1;
	// 1747    .line 88
label_cond_21:
	if ( tag != 0xd )
		goto label_cond_27;
	cVar1 = -0x1;
	goto label_goto_20;
	// 1758    .line 90
label_cond_27:
	if ( tag != 0xb )
		goto label_cond_20;
	cVar1 = this->ce32s[0x0];
	goto label_goto_20;

}
// .method public getLastPrimaryForGroup(I)J
long long android::icu::impl::coll::CollationData::getLastPrimaryForGroup(int script)
{
	
	int index;
	
	//    .param p1, "script"    # I
	index = this->getScriptIndex(script);
	//    .local v0, "index":I
	if ( index )     
		goto label_cond_9;
	return 0x0;
	// 1793    .line 213
label_cond_9:
	//    .local v2, "limit":J
	return (((long long)(this->scriptStarts[( index + 0x1)]) << 0x10) -  0x1);

}
// .method getSingleCE(I)J
long long android::icu::impl::coll::CollationData::getSingleCE(int c)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int ce32;
	std::shared_ptr<android::icu::impl::coll::CollationData> d;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar4;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar5;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar6;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar7;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar8;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar9;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar10;
	std::shared_ptr<java::lang::AssertionError> cVar11;
	
	//    .param p1, "c"    # I
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	ce32 = this->getCE32(c);
	//    .local v0, "ce32":I
	if ( ce32 != 0xc0 )
		goto label_cond_3c;
	d = this->base;
	//    .local v1, "d":Landroid/icu/impl/coll/CollationData;
	ce32 = this->base->getCE32(c);
label_goto_13:
	if ( !(android::icu::impl::coll::Collation::isSpecialCE32(ce32)) )  
		goto label_cond_dd;
	// switch
	{
	auto item = ( android::icu::impl::coll::Collation::tagFromCE32(ce32) );
	if (item == 0) goto label_pswitch_21;
	if (item == 1) goto label_pswitch_59;
	if (item == 2) goto label_pswitch_5e;
	if (item == 3) goto label_pswitch_21;
	if (item == 4) goto label_pswitch_3e;
	if (item == 5) goto label_pswitch_63;
	if (item == 6) goto label_pswitch_8d;
	if (item == 7) goto label_pswitch_3e;
	if (item == 8) goto label_pswitch_3e;
	if (item == 9) goto label_pswitch_3e;
	if (item == 10) goto label_pswitch_b7;
	if (item == 11) goto label_pswitch_c1;
	if (item == 12) goto label_pswitch_3e;
	if (item == 13) goto label_pswitch_3e;
	if (item == 14) goto label_pswitch_d3;
	if (item == 15) goto label_pswitch_d8;
	}
	goto label_goto_13;
	// 1866    .line 142
label_pswitch_21:
	cVar4 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar4[cVar2] = java::lang::Integer::valueOf(c);
	cVar4[cVar1] = java::lang::Integer::valueOf(ce32);
	cVar3 = std::make_shared<java::lang::AssertionError>(java::lang::String::format(std::make_shared<java::lang::String>(std::make_shared<char[]>("unexpected CE32 tag for U+%04X (CE32 0x%08x)")), cVar4));
	// throw
	throw cVar3;
	// 1898    .line 127
	// 1899    .end local v1    # "d":Landroid/icu/impl/coll/CollationData;
label_cond_3c:
	this;
	//    .restart local v1    # "d":Landroid/icu/impl/coll/CollationData;
	goto label_goto_13;
	// 1906    .line 137
label_pswitch_3e:
	cVar6 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar6[cVar2] = java::lang::Integer::valueOf(c);
	cVar6[cVar1] = java::lang::Integer::valueOf(ce32);
	cVar5 = std::make_shared<java::lang::UnsupportedOperationException>(java::lang::String::format(std::make_shared<java::lang::String>(std::make_shared<char[]>("there is not exactly one collation element for U+%04X (CE32 0x%08x)")), cVar6));
	// throw
	throw cVar5;
	// 1938    .line 145
label_pswitch_59:
	return android::icu::impl::coll::Collation::ceFromLongPrimaryCE32(ce32);
	// 1946    .line 147
label_pswitch_5e:
	return android::icu::impl::coll::Collation::ceFromLongSecondaryCE32(ce32);
	// 1954    .line 149
label_pswitch_63:
	if ( android::icu::impl::coll::Collation::lengthFromCE32(ce32) != cVar1 )
		goto label_cond_72;
	ce32 = d->ce32s[android::icu::impl::coll::Collation::indexFromCE32(ce32)];
	goto label_goto_13;
	// 1973    .line 153
label_cond_72:
	cVar8 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar8[cVar2] = java::lang::Integer::valueOf(c);
	cVar8[cVar1] = java::lang::Integer::valueOf(ce32);
	cVar7 = std::make_shared<java::lang::UnsupportedOperationException>(java::lang::String::format(std::make_shared<java::lang::String>(std::make_shared<char[]>("there is not exactly one collation element for U+%04X (CE32 0x%08x)")), cVar8));
	// throw
	throw cVar7;
	// 2005    .line 158
label_pswitch_8d:
	if ( android::icu::impl::coll::Collation::lengthFromCE32(ce32) != cVar1 )
		goto label_cond_9c;
	return d->ces[android::icu::impl::coll::Collation::indexFromCE32(ce32)];
	// 2024    .line 161
label_cond_9c:
	cVar10 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar10[cVar2] = java::lang::Integer::valueOf(c);
	cVar10[cVar1] = java::lang::Integer::valueOf(ce32);
	cVar9 = std::make_shared<java::lang::UnsupportedOperationException>(java::lang::String::format(std::make_shared<java::lang::String>(std::make_shared<char[]>("there is not exactly one collation element for U+%04X (CE32 0x%08x)")), cVar10));
	// throw
	throw cVar9;
	// 2056    .line 168
label_pswitch_b7:
	ce32 = d->ce32s[android::icu::impl::coll::Collation::indexFromCE32(ce32)];
	goto label_goto_13;
	// 2068    .line 171
label_pswitch_c1:
	if ( android::icu::impl::coll::CollationData::_assertionsDisabled )     
		goto label_cond_cd;
	if ( !(c) )  
		goto label_cond_cd;
	cVar11 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar11;
	// 2082    .line 173
label_cond_cd:
	ce32 = d->ce32s[cVar2];
	goto label_goto_13;
	// 2090    .line 176
label_pswitch_d3:
	return d->getCEFromOffsetCE32(c, ce32);
	// 2098    .line 178
label_pswitch_d8:
	return android::icu::impl::coll::Collation::unassignedCEFromCodePoint(c);
	// 2106    .line 181
label_cond_dd:
	return android::icu::impl::coll::Collation::ceFromSimpleCE32(ce32);
	// 2114    .line 130
	// 2115    :pswitch_data_e2
	// 2116    .packed-switch 0x0
	// 2117        :pswitch_21
	// 2118        :pswitch_59
	// 2119        :pswitch_5e
	// 2120        :pswitch_21
	// 2121        :pswitch_3e
	// 2122        :pswitch_63
	// 2123        :pswitch_8d
	// 2124        :pswitch_3e
	// 2125        :pswitch_3e
	// 2126        :pswitch_3e
	// 2127        :pswitch_b7
	// 2128        :pswitch_c1
	// 2129        :pswitch_3e
	// 2130        :pswitch_3e
	// 2131        :pswitch_d3
	// 2132        :pswitch_d8
	// 2133    .end packed-switch

}
// .method public isCompressibleLeadByte(I)Z
bool android::icu::impl::coll::CollationData::isCompressibleLeadByte(int b)
{
	
	//    .param p1, "b"    # I
	return this->compressibleBytes[b];

}
// .method public isCompressiblePrimary(J)Z
bool android::icu::impl::coll::CollationData::isCompressiblePrimary(long long p)
{
	
	//    .param p1, "p"    # J
	return this->isCompressibleLeadByte(_ushri((int)(p),0x18));

}
// .method isDigit(I)Z
bool android::icu::impl::coll::CollationData::isDigit(int c)
{
	
	bool cVar1;
	
	//    .param p1, "c"    # I
	cVar1 = 0x0;
	if ( c >= 0x660 )
		goto label_cond_f;
	if ( c >  0x39 )
		goto label_cond_e;
	if ( 0x30 >  c )
		goto label_cond_e;
	cVar1 = 0x1;
label_cond_e:
label_goto_e:
	return cVar1;
	// 2192    .line 55
label_cond_f:
	cVar1 = android::icu::impl::coll::Collation::hasCE32Tag(this->getCE32(c), 0xa);
	goto label_goto_e;

}
// .method public isUnsafeBackward(IZ)Z
bool android::icu::impl::coll::CollationData::isUnsafeBackward(int c,bool numeric)
{
	
	bool cVar0;
	
	//    .param p1, "c"    # I
	//    .param p2, "numeric"    # Z
	if ( this->unsafeBackwardSet->contains(c) )     
		goto label_cond_f;
	if ( !(numeric) )  
		goto label_cond_11;
	cVar0 = this->isDigit(c);
label_goto_e:
	return cVar0;
label_cond_f:
	cVar0 = 0x1;
	goto label_goto_e;
label_cond_11:
	cVar0 = 0x0;
	goto label_goto_e;

}
// .method makeReorderRanges([ILandroid/icu/impl/coll/UVector32;)V
void android::icu::impl::coll::CollationData::makeReorderRanges(std::shared_ptr<int[]> reorder,std::shared_ptr<android::icu::impl::coll::UVector32> ranges)
{
	
	//    .param p1, "reorder"    # [I
	//    .param p2, "ranges"    # Landroid/icu/impl/coll/UVector32;
	this->makeReorderRanges(reorder, 0x0, ranges);
	return;

}


