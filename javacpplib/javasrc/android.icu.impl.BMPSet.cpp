// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\BMPSet.smali
#include "java2ctype.h"
#include "android.icu.impl.BMPSet.h"
#include "android.icu.text.UnicodeSet_S_SpanCondition.h"
#include "android.icu.util.OutputInt.h"
#include "java.lang.AssertionError.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"
#include "java.lang.Object.h"

static android::icu::impl::BMPSet::_assertionsDisabled;
static android::icu::impl::BMPSet::U16_SURROGATE_OFFSET;
// .method static constructor <clinit>()V
void android::icu::impl::BMPSet::static_cinit()
{
	
	android::icu::impl::BMPSet::_assertionsDisabled = ( android::icu::impl::BMPSet()->desiredAssertionStatus() ^ 0x1);
	android::icu::impl::BMPSet::U16_SURROGATE_OFFSET = 0x35fdc00;
	return;

}
// .method public constructor <init>(Landroid/icu/impl/BMPSet;[II)V
android::icu::impl::BMPSet::BMPSet(std::shared_ptr<android::icu::impl::BMPSet> otherBMPSet,std::shared_ptr<int[]> newParentList,int newParentListLength)
{
	
	std::shared_ptr<bool[]> cVar0;
	std::shared_ptr<int[]> cVar1;
	std::shared_ptr<int[]> cVar2;
	std::shared_ptr<int[]> cVar3;
	
	//    .param p1, "otherBMPSet"    # Landroid/icu/impl/BMPSet;
	//    .param p2, "newParentList"    # [I
	//    .param p3, "newParentListLength"    # I
	// 058    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->list = newParentList;
	this->listLength = newParentListLength;
	cVar0 = otherBMPSet->latin1Contains->clone();
	cVar0->checkCast("bool[]");
	this->latin1Contains = cVar0;
	cVar1 = otherBMPSet->table7FF->clone();
	cVar1->checkCast("int[]");
	this->table7FF = cVar1;
	cVar2 = otherBMPSet->bmpBlockBits->clone();
	cVar2->checkCast("int[]");
	this->bmpBlockBits = cVar2;
	cVar3 = otherBMPSet->list4kStarts->clone();
	cVar3->checkCast("int[]");
	this->list4kStarts = cVar3;
	return;

}
// .method public constructor <init>([II)V
android::icu::impl::BMPSet::BMPSet(std::shared_ptr<int[]> parentList,int parentListLength)
{
	
	int cVar0;
	int cVar1;
	int i;
	
	//    .param p1, "parentList"    # [I
	//    .param p2, "parentListLength"    # I
	cVar0 = 0x40;
	cVar1 = 0x0;
	// 125    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->list = parentList;
	this->listLength = parentListLength;
	this->latin1Contains = std::make_shared<std::vector<bool[]>>(0x100);
	this->table7FF = std::make_shared<std::vector<int[]>>(cVar0);
	this->bmpBlockBits = std::make_shared<std::vector<int[]>>(cVar0);
	this->list4kStarts = std::make_shared<std::vector<int[]>>(0x12);
	this->list4kStarts[cVar1] = this->findCodePoint(0x800, cVar1, ( this->listLength + -0x1));
	i = 0x1;
	//    .local v0, "i":I
label_goto_2d:
	if ( i >  0x10 )
		goto label_cond_48;
	this->list4kStarts[i] = this->findCodePoint(( i << 0xc), this->list4kStarts[( i + -0x1)], ( this->listLength + -0x1));
	i = ( i + 0x1);
	goto label_goto_2d;
	// 207    .line 89
label_cond_48:
	this->list4kStarts[0x11] = ( this->listLength + -0x1);
	this->initBits();
	return;

}
// .method private final containsSlow(III)Z
bool android::icu::impl::BMPSet::containsSlow(int c,int lo,int hi)
{
	
	bool cVar1;
	
	//    .param p1, "c"    # I
	//    .param p2, "lo"    # I
	//    .param p3, "hi"    # I
	cVar1 = 0x0;
	if ( !(( this->findCodePoint(c, lo, hi) & 0x1)) )  
		goto label_cond_a;
	cVar1 = 0x1;
label_cond_a:
	return cVar1;

}
// .method private findCodePoint(III)I
int android::icu::impl::BMPSet::findCodePoint(int c,int lo,int hi)
{
	
	int i;
	int hi;
	int lo;
	
	//    .param p1, "c"    # I
	//    .param p2, "lo"    # I
	//    .param p3, "hi"    # I
	if ( c >= this->list[lo] )
		goto label_cond_7;
	return lo;
	// 267    .line 496
label_cond_7:
	if ( lo >= hi )
		goto label_cond_11;
	if ( c <  this->list[( hi + -0x1)] )
		goto label_cond_19;
label_cond_11:
	return hi;
	// 283    .line 504
	// 284    .local v0, "i":I
label_cond_12:
	if ( c >= this->list[i] )
		goto label_cond_20;
	hi = i;
	//    .end local v0    # "i":I
label_cond_19:
label_goto_19:
	i = _ushri((lo + hi),0x1);
	//    .restart local v0    # "i":I
	if ( i != lo )
		goto label_cond_12;
	return hi;
	// 310    .line 507
label_cond_20:
	lo = i;
	goto label_goto_19;

}
// .method private initBits()V
void android::icu::impl::BMPSet::initBits()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int listIndex;
	int start;
	int limit;
	int cVar4;
	int minStart;
	std::shared_ptr<int[]> cVar5;
	int cVar6;
	std::shared_ptr<int[]> cVar7;
	int cVar8;
	
	cVar0 = 0x10001;
	cVar1 = 0x10000;
	cVar2 = 0x100;
	cVar3 = 0x800;
	listIndex = 0x0;
	//    .local v1, "listIndex":I
label_cond_a:
	listIndex = ( listIndex + 0x1);
	//    .end local v1    # "listIndex":I
	//    .local v2, "listIndex":I
	start = this->list[listIndex];
	//    .local v4, "start":I
	if ( listIndex >= this->listLength )
		goto label_cond_7a;
	listIndex = ( listIndex + 0x1);
	//    .end local v2    # "listIndex":I
	//    .restart local v1    # "listIndex":I
	limit = this->list[listIndex];
	//    .local v0, "limit":I
label_goto_1a:
	if ( start <  cVar2 )
		goto label_cond_7e;
	listIndex = listIndex;
	//    .end local v1    # "listIndex":I
	//    .restart local v2    # "listIndex":I
label_goto_1d:
	if ( start >= cVar3 )
		goto label_cond_2b;
	if ( limit >  cVar3 )
		goto label_cond_90;
	cVar4 = limit;
label_goto_24:
	android::icu::impl::BMPSet::set32x64Bits(this->table7FF, start, cVar4);
	if ( limit <= cVar3 )
		goto label_cond_92;
	start = 0x800;
label_cond_2b:
	minStart = 0x800;
	//    .local v3, "minStart":I
label_goto_2d:
	if ( start >= cVar1 )
		goto label_cond_79;
	if ( limit <= cVar1 )
		goto label_cond_33;
	limit = 0x10000;
label_cond_33:
	if ( start >= minStart )
		goto label_cond_36;
	start = minStart;
label_cond_36:
	if ( start >= limit )
		goto label_cond_77;
	if ( !(( start & 0x3f)) )  
		goto label_cond_50;
	start = _shri(start,0x6);
	cVar5 = this->bmpBlockBits;
	cVar6 = ( start & 0x3f);
	cVar5[cVar6] = (cVar5[cVar6] |  (cVar0 << _shri(start,0x6)));
	start = ( ( start + 0x1) << 0x6);
	minStart = start;
label_cond_50:
	if ( start >= limit )
		goto label_cond_77;
	if ( start >= ( limit & -0x40) )
		goto label_cond_5f;
	android::icu::impl::BMPSet::set32x64Bits(this->bmpBlockBits, _shri(start,0x6), _shri(limit,0x6));
label_cond_5f:
	if ( !(( limit & 0x3f)) )  
		goto label_cond_77;
	limit = _shri(limit,0x6);
	cVar7 = this->bmpBlockBits;
	cVar8 = ( limit & 0x3f);
	cVar7[cVar8] = (cVar7[cVar8] |  (cVar0 << _shri(limit,0x6)));
	limit = ( ( limit + 0x1) << 0x6);
	minStart = limit;
label_cond_77:
	if ( limit != cVar1 )
		goto label_cond_a9;
label_cond_79:
	return;
	// 502    .line 390
	// 503    .end local v0    # "limit":I
	// 504    .end local v3    # "minStart":I
label_cond_7a:
	limit = 0x110000;
	//    .restart local v0    # "limit":I
	listIndex = listIndex;
	//    .end local v2    # "listIndex":I
	//    .restart local v1    # "listIndex":I
	goto label_goto_1a;
	// 515    .line 396
label_cond_7e:
label_goto_7e:
	start = ( start + 0x1);
	//    .end local v4    # "start":I
	//    .local v5, "start":I
	this->latin1Contains[start] = 0x1;
	if ( start >= limit )
		goto label_cond_8b;
	if ( start >= cVar2 )
		goto label_cond_8b;
	start = start;
	//    .end local v5    # "start":I
	//    .restart local v4    # "start":I
	goto label_goto_7e;
	// 539    .line 398
	// 540    .end local v4    # "start":I
	// 541    .restart local v5    # "start":I
label_cond_8b:
	if ( limit <= cVar2 )
		goto label_cond_a;
	start = start;
	//    .end local v5    # "start":I
	//    .restart local v4    # "start":I
	listIndex;
	//    .end local v1    # "listIndex":I
	//    .restart local v2    # "listIndex":I
	goto label_goto_1d;
label_cond_90:
	cVar4 = cVar3;
	goto label_goto_24;
	// 561    .line 408
label_cond_92:
	listIndex = ( listIndex + 0x1);
	//    .end local v2    # "listIndex":I
	//    .restart local v1    # "listIndex":I
	start = this->list[listIndex];
	if ( listIndex >= this->listLength )
		goto label_cond_a6;
	//    .end local v1    # "listIndex":I
	//    .restart local v2    # "listIndex":I
	limit = this->list[listIndex];
	//    .end local v2    # "listIndex":I
	//    .restart local v1    # "listIndex":I
label_goto_a3:
	listIndex = listIndex;
	//    .end local v1    # "listIndex":I
	//    .restart local v2    # "listIndex":I
	goto label_goto_1d;
	// 596    .line 412
	// 597    .end local v2    # "listIndex":I
	// 598    .restart local v1    # "listIndex":I
label_cond_a6:
	limit = 0x110000;
	goto label_goto_a3;
	// 604    .line 454
	// 605    .end local v1    # "listIndex":I
	// 606    .restart local v2    # "listIndex":I
	// 607    .restart local v3    # "minStart":I
label_cond_a9:
	listIndex = ( listIndex + 0x1);
	//    .end local v2    # "listIndex":I
	//    .restart local v1    # "listIndex":I
	start = this->list[listIndex];
	if ( listIndex >= this->listLength )
		goto label_cond_bd;
	//    .end local v1    # "listIndex":I
	//    .restart local v2    # "listIndex":I
	limit = this->list[listIndex];
	//    .end local v2    # "listIndex":I
	//    .restart local v1    # "listIndex":I
label_goto_ba:
	listIndex = listIndex;
	//    .end local v1    # "listIndex":I
	//    .restart local v2    # "listIndex":I
	goto label_goto_2d;
	// 642    .line 458
	// 643    .end local v2    # "listIndex":I
	// 644    .restart local v1    # "listIndex":I
label_cond_bd:
	limit = 0x110000;
	goto label_goto_ba;

}
// .method private static set32x64Bits([III)V
void android::icu::impl::BMPSet::set32x64Bits(std::shared_ptr<int[]> table,int start,int limit)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	int lead;
	int trail;
	int bits;
	int limitLead;
	int limitTrail;
	
	//    .param p0, "table"    # [I
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	cVar0 = 0x40;
	cVar1 = 0x1;
	if ( android::icu::impl::BMPSet::_assertionsDisabled )     
		goto label_cond_10;
	if ( cVar0 == table->size() )
		goto label_cond_10;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 677    .line 332
label_cond_10:
	lead = _shri(start,0x6);
	//    .local v1, "lead":I
	trail = ( start & 0x3f);
	//    .local v4, "trail":I
	bits = (cVar1 << lead);
	//    .local v0, "bits":I
	if ( ( start + 0x1) != limit )
		goto label_cond_20;
	table[trail] = (table[trail] |  bits);
	return;
	// 705    .line 342
label_cond_20:
	limitLead = _shri(limit,0x6);
	//    .local v2, "limitLead":I
	limitTrail = ( limit & 0x3f);
	//    .local v3, "limitTrail":I
	if ( lead != limitLead )
		goto label_cond_31;
label_goto_26:
	trail = trail;
	//    .end local v4    # "trail":I
	//    .local v5, "trail":I
	if ( trail >= limitTrail )
		goto label_cond_69;
	trail = ( trail + 0x1);
	//    .end local v5    # "trail":I
	//    .restart local v4    # "trail":I
	table[trail] = (table[trail] |  bits);
	goto label_goto_26;
	// 738    .line 354
label_cond_31:
	if ( trail <= 0 )
		goto label_cond_41;
label_goto_33:
	trail = ( trail + 0x1);
	//    .end local v4    # "trail":I
	//    .restart local v5    # "trail":I
	table[trail] = (table[trail] |  bits);
	if ( trail >= cVar0 )
		goto label_cond_3e;
	trail = trail;
	//    .end local v5    # "trail":I
	//    .restart local v4    # "trail":I
	goto label_goto_33;
	// 763    .line 358
	// 764    .end local v4    # "trail":I
	// 765    .restart local v5    # "trail":I
label_cond_3e:
	lead = ( lead + 0x1);
	trail = trail;
	//    .end local v5    # "trail":I
	//    .restart local v4    # "trail":I
label_cond_41:
	if ( lead >= limitLead )
		goto label_cond_5c;
	if ( limitLead >= 0x20 )
		goto label_cond_51;
label_cond_51:
	trail = 0x0;
label_goto_52:
	if ( trail >= cVar0 )
		goto label_cond_5c;
	table[trail] = (table[trail] |  ((~( (cVar1 << lead) + -0x1)) &  ( (cVar1 << limitLead) + -0x1)));
	trail = ( trail + 0x1);
	goto label_goto_52;
	// 815    .line 373
label_cond_5c:
	trail = 0x0;
label_goto_5f:
	if ( trail >= limitTrail )
		goto label_cond_6a;
	table[trail] = (table[trail] |  (cVar1 << limitLead));
	trail = ( trail + 0x1);
	goto label_goto_5f;
	// 837    .end local v4    # "trail":I
	// 838    .restart local v5    # "trail":I
label_cond_69:
	trail = trail;
	//    .end local v5    # "trail":I
	//    .restart local v4    # "trail":I
label_cond_6a:
	return;

}
// .method public contains(I)Z
bool android::icu::impl::BMPSet::contains(int c)
{
	
	bool cVar0;
	bool cVar1;
	int lead;
	int twoBits;
	
	//    .param p1, "c"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( c >  0xff )
		goto label_cond_b;
	return this->latin1Contains[c];
	// 872    .line 106
label_cond_b:
	if ( c >  0x7ff )
		goto label_cond_1f;
	if ( !((this->table7FF[( c & 0x3f)] &  (cVar0 << _shri(c,0x6)))) )  
		goto label_cond_1d;
label_goto_1c:
	return cVar0;
label_cond_1d:
	cVar0 = cVar1;
	goto label_goto_1c;
	// 901    .line 108
label_cond_1f:
	if ( c <  0xd800 )
		goto label_cond_2e;
	if ( c <  0xe000 )
		goto label_cond_54;
	if ( c >  0xffff )
		goto label_cond_54;
label_cond_2e:
	lead = _shri(c,0xc);
	//    .local v0, "lead":I
	twoBits = (_shri(this->bmpBlockBits[( _shri(c,0x6) & 0x3f)],lead) & 0x10001);
	//    .local v1, "twoBits":I
	if ( twoBits >  cVar0 )
		goto label_cond_45;
	if ( !(twoBits) )  
		goto label_cond_43;
label_goto_42:
	return cVar0;
label_cond_43:
	cVar0 = cVar1;
	goto label_goto_42;
	// 950    .line 117
label_cond_45:
	return this->containsSlow(c, this->list4kStarts[lead], this->list4kStarts[( lead + 0x1)]);
	// 968    .line 119
	// 969    .end local v0    # "lead":I
	// 970    .end local v1    # "twoBits":I
label_cond_54:
	if ( c >  0x10ffff )
		goto label_cond_6a;
	return this->containsSlow(c, this->list4kStarts[0xd], this->list4kStarts[0x11]);
	// 995    .line 125
label_cond_6a:
	return cVar1;

}
// .method public final span(Ljava/lang/CharSequence;ILandroid/icu/text/UnicodeSet$SpanCondition;Landroid/icu/util/OutputInt;)I
int android::icu::impl::BMPSet::span(std::shared_ptr<java::lang::CharSequence> s,int start,std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> spanCondition,std::shared_ptr<android::icu::util::OutputInt> outCount)
{
	
	int i;
	int limit;
	int numSupplementary;
	char c;
	int lead;
	int twoBits;
	char c2;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "start"    # I
	//    .param p3, "spanCondition"    # Landroid/icu/text/UnicodeSet$SpanCondition;
	//    .param p4, "outCount"    # Landroid/icu/util/OutputInt;
	i = start;
	//    .local v3, "i":I
	limit = s->length();
	//    .local v5, "limit":I
	numSupplementary = 0x0;
	//    .local v6, "numSupplementary":I
	if ( android::icu::text::UnicodeSet_S_SpanCondition::NOT_CONTAINED == spanCondition )
		goto label_cond_a2;
label_goto_c:
	if ( i >= limit )
		goto label_cond_1c;
	c = s->charAt(i);
	//    .local v1, "c":C
	if ( c >  0xff )
		goto label_cond_27;
	if ( this->latin1Contains[c] )     
		goto label_cond_39;
	//    .end local v1    # "c":C
label_cond_1c:
label_goto_1c:
	if ( !(outCount) )  
		goto label_cond_26;
	//    .local v7, "spanLength":I
	outCount->value = ((i - start) - numSupplementary);
	//    .end local v7    # "spanLength":I
label_cond_26:
	return i;
	// 1073    .line 155
	// 1074    .restart local v1    # "c":C
label_cond_27:
	if ( c >  0x7ff )
		goto label_cond_3c;
	if ( !((this->table7FF[( c & 0x3f)] &  (0x1 << _shri(c,0x6)))) )  
		goto label_cond_1c;
label_cond_39:
label_goto_39:
	i = ( i + 0x1);
	goto label_goto_c;
	// 1104    .line 159
label_cond_3c:
	if ( c <  0xd800 )
		goto label_cond_46;
	if ( c <  0xdc00 )
		goto label_cond_5c;
label_cond_46:
	lead = _shri(c,0xc);
	//    .local v4, "lead":I
	twoBits = (_shri(this->bmpBlockBits[( _shri(c,0x6) & 0x3f)],lead) & 0x10001);
	//    .local v9, "twoBits":I
	if ( twoBits >  0x1 )
		goto label_cond_8b;
	if ( twoBits )     
		goto label_cond_39;
	goto label_goto_1c;
	// 1146    .line 160
	// 1147    .end local v4    # "lead":I
	// 1148    .end local v9    # "twoBits":I
label_cond_5c:
	if ( ( i + 0x1) == limit )
		goto label_cond_46;
	c2 = s->charAt(( i + 0x1));
	//    .local v2, "c2":C
	if ( c2 <  0xdc00 )
		goto label_cond_46;
	if ( c2 >= 0xe000 )
		goto label_cond_46;
	//    .local v8, "supplementary":I
	if ( !(this->containsSlow(java::lang::Character::toCodePoint(c, c2), this->list4kStarts[0x10], this->list4kStarts[0x11])) )  
		goto label_cond_1c;
	numSupplementary = ( numSupplementary + 0x1);
	i = ( i + 0x1);
	goto label_goto_39;
	// 1202    .line 171
	// 1203    .end local v2    # "c2":C
	// 1204    .end local v8    # "supplementary":I
	// 1205    .restart local v4    # "lead":I
	// 1206    .restart local v9    # "twoBits":I
label_cond_8b:
	if ( this->containsSlow(c, this->list4kStarts[lead], this->list4kStarts[( lead + 0x1)]) )     
		goto label_cond_39;
	goto label_goto_1c;
	// 1226    .line 220
	// 1227    .end local v4    # "lead":I
	// 1228    .end local v9    # "twoBits":I
	// 1229    .restart local v2    # "c2":C
	// 1230    .restart local v8    # "supplementary":I
label_cond_9c:
	numSupplementary = ( numSupplementary + 0x1);
	i = ( i + 0x1);
	//    .end local v2    # "c2":C
	//    .end local v8    # "supplementary":I
label_cond_a0:
	i = ( i + 0x1);
	//    .end local v1    # "c":C
label_cond_a2:
	if ( i >= limit )
		goto label_cond_1c;
	c = s->charAt(i);
	//    .restart local v1    # "c":C
	if ( c >  0xff )
		goto label_cond_b4;
	if ( !(this->latin1Contains[c]) )  
		goto label_cond_a0;
	goto label_goto_1c;
	// 1268    .line 194
label_cond_b4:
	if ( c >  0x7ff )
		goto label_cond_c8;
	if ( !((this->table7FF[( c & 0x3f)] &  (0x1 << _shri(c,0x6)))) )  
		goto label_cond_a0;
	goto label_goto_1c;
	// 1293    .line 198
label_cond_c8:
	if ( c <  0xd800 )
		goto label_cond_d2;
	if ( c <  0xdc00 )
		goto label_cond_e9;
label_cond_d2:
	lead = _shri(c,0xc);
	//    .restart local v4    # "lead":I
	twoBits = (_shri(this->bmpBlockBits[( _shri(c,0x6) & 0x3f)],lead) & 0x10001);
	//    .restart local v9    # "twoBits":I
	if ( twoBits >  0x1 )
		goto label_cond_115;
	if ( !(twoBits) )  
		goto label_cond_a0;
	goto label_goto_1c;
	// 1335    .line 199
	// 1336    .end local v4    # "lead":I
	// 1337    .end local v9    # "twoBits":I
label_cond_e9:
	if ( ( i + 0x1) == limit )
		goto label_cond_d2;
	c2 = s->charAt(( i + 0x1));
	//    .restart local v2    # "c2":C
	if ( c2 <  0xdc00 )
		goto label_cond_d2;
	if ( c2 >= 0xe000 )
		goto label_cond_d2;
	//    .restart local v8    # "supplementary":I
	if ( !(this->containsSlow(java::lang::Character::toCodePoint(c, c2), this->list4kStarts[0x10], this->list4kStarts[0x11])) )  
		goto label_cond_9c;
	goto label_goto_1c;
	// 1385    .line 210
	// 1386    .end local v2    # "c2":C
	// 1387    .end local v8    # "supplementary":I
	// 1388    .restart local v4    # "lead":I
	// 1389    .restart local v9    # "twoBits":I
label_cond_115:
	if ( !(this->containsSlow(c, this->list4kStarts[lead], this->list4kStarts[( lead + 0x1)])) )  
		goto label_cond_a0;
	goto label_goto_1c;

}
// .method public final spanBack(Ljava/lang/CharSequence;ILandroid/icu/text/UnicodeSet$SpanCondition;)I
int android::icu::impl::BMPSet::spanBack(std::shared_ptr<java::lang::CharSequence> s,int limit,std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> spanCondition)
{
	
	int limit;
	char c;
	int lead;
	int twoBits;
	char c2;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "limit"    # I
	//    .param p3, "spanCondition"    # Landroid/icu/text/UnicodeSet$SpanCondition;
	if ( android::icu::text::UnicodeSet_S_SpanCondition::NOT_CONTAINED == spanCondition )
		goto label_cond_89;
label_cond_4:
	limit = ( limit + -0x1);
	c = s->charAt(limit);
	//    .local v0, "c":C
	if ( c >  0xff )
		goto label_cond_17;
	if ( this->latin1Contains[c] )     
		goto label_cond_29;
label_cond_14:
label_goto_14:
	return ( limit + 0x1);
	// 1450    .line 251
label_cond_17:
	if ( c >  0x7ff )
		goto label_cond_2d;
	if ( !((this->table7FF[( c & 0x3f)] &  (0x1 << _shri(c,0x6)))) )  
		goto label_cond_14;
label_cond_29:
label_goto_29:
	if ( limit )     
		goto label_cond_4;
	return 0x0;
	// 1483    .line 255
label_cond_2d:
	if ( c <  0xd800 )
		goto label_cond_37;
	if ( c >= 0xdc00 )
		goto label_cond_4d;
label_cond_37:
	lead = _shri(c,0xc);
	//    .local v2, "lead":I
	twoBits = (_shri(this->bmpBlockBits[( _shri(c,0x6) & 0x3f)],lead) & 0x10001);
	//    .local v4, "twoBits":I
	if ( twoBits >  0x1 )
		goto label_cond_78;
	if ( twoBits )     
		goto label_cond_29;
	goto label_goto_14;
	// 1525    .line 256
	// 1526    .end local v2    # "lead":I
	// 1527    .end local v4    # "twoBits":I
label_cond_4d:
	if ( !(limit) )  
		goto label_cond_37;
	c2 = s->charAt(( limit + -0x1));
	//    .local v1, "c2":C
	if ( c2 <  0xd800 )
		goto label_cond_37;
	if ( c2 >= 0xdc00 )
		goto label_cond_37;
	//    .local v3, "supplementary":I
	if ( !(this->containsSlow(java::lang::Character::toCodePoint(c2, c), this->list4kStarts[0x10], this->list4kStarts[0x11])) )  
		goto label_cond_14;
	limit = ( limit + -0x1);
	goto label_goto_29;
	// 1576    .line 267
	// 1577    .end local v1    # "c2":C
	// 1578    .end local v3    # "supplementary":I
	// 1579    .restart local v2    # "lead":I
	// 1580    .restart local v4    # "twoBits":I
label_cond_78:
	if ( this->containsSlow(c, this->list4kStarts[lead], this->list4kStarts[( lead + 0x1)]) )     
		goto label_cond_29;
	goto label_goto_14;
	// 1600    .line 286
	// 1601    .end local v0    # "c":C
	// 1602    .end local v2    # "lead":I
	// 1603    .end local v4    # "twoBits":I
label_cond_89:
	limit = ( limit + -0x1);
	c = s->charAt(limit);
	//    .restart local v0    # "c":C
	if ( c >  0xff )
		goto label_cond_9d;
	if ( this->latin1Contains[c] )     
		goto label_cond_14;
label_cond_99:
label_goto_99:
	if ( limit )     
		goto label_cond_89;
	return 0x0;
	// 1634    .line 291
label_cond_9d:
	if ( c >  0x7ff )
		goto label_cond_b1;
	if ( !((this->table7FF[( c & 0x3f)] &  (0x1 << _shri(c,0x6)))) )  
		goto label_cond_99;
	goto label_goto_14;
	// 1659    .line 295
label_cond_b1:
	if ( c <  0xd800 )
		goto label_cond_bb;
	if ( c >= 0xdc00 )
		goto label_cond_d2;
label_cond_bb:
	lead = _shri(c,0xc);
	//    .restart local v2    # "lead":I
	twoBits = (_shri(this->bmpBlockBits[( _shri(c,0x6) & 0x3f)],lead) & 0x10001);
	//    .restart local v4    # "twoBits":I
	if ( twoBits >  0x1 )
		goto label_cond_fd;
	if ( !(twoBits) )  
		goto label_cond_99;
	goto label_goto_14;
	// 1701    .line 296
	// 1702    .end local v2    # "lead":I
	// 1703    .end local v4    # "twoBits":I
label_cond_d2:
	if ( !(limit) )  
		goto label_cond_bb;
	c2 = s->charAt(( limit + -0x1));
	//    .restart local v1    # "c2":C
	if ( c2 <  0xd800 )
		goto label_cond_bb;
	if ( c2 >= 0xdc00 )
		goto label_cond_bb;
	//    .restart local v3    # "supplementary":I
	if ( this->containsSlow(java::lang::Character::toCodePoint(c2, c), this->list4kStarts[0x10], this->list4kStarts[0x11]) )     
		goto label_cond_14;
	limit = ( limit + -0x1);
	goto label_goto_99;
	// 1752    .line 307
	// 1753    .end local v1    # "c2":C
	// 1754    .end local v3    # "supplementary":I
	// 1755    .restart local v2    # "lead":I
	// 1756    .restart local v4    # "twoBits":I
label_cond_fd:
	if ( !(this->containsSlow(c, this->list4kStarts[lead], this->list4kStarts[( lead + 0x1)])) )  
		goto label_cond_99;
	goto label_goto_14;

}


