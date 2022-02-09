// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\UnicodeSetStringSpan.smali
#include "java2ctype.h"
#include "android.icu.impl.UnicodeSetStringSpan_S_OffsetList.h"
#include "android.icu.impl.UnicodeSetStringSpan.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.text.UTF16.h"
#include "android.icu.text.UnicodeSet_S_SpanCondition.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.OutputInt.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.ArrayList.h"

static android::icu::impl::UnicodeSetStringSpan::ALL = 0x7f;
static android::icu::impl::UnicodeSetStringSpan::ALL_CP_CONTAINED = 0xffs;
static android::icu::impl::UnicodeSetStringSpan::BACK = 0x10;
static android::icu::impl::UnicodeSetStringSpan::BACK_UTF16_CONTAINED = 0x12;
static android::icu::impl::UnicodeSetStringSpan::BACK_UTF16_NOT_CONTAINED = 0x11;
static android::icu::impl::UnicodeSetStringSpan::CONTAINED = 0x2;
static android::icu::impl::UnicodeSetStringSpan::FWD = 0x20;
static android::icu::impl::UnicodeSetStringSpan::FWD_UTF16_CONTAINED = 0x22;
static android::icu::impl::UnicodeSetStringSpan::FWD_UTF16_NOT_CONTAINED = 0x21;
static android::icu::impl::UnicodeSetStringSpan::LONG_SPAN = 0xfes;
static android::icu::impl::UnicodeSetStringSpan::NOT_CONTAINED = 0x1;
static android::icu::impl::UnicodeSetStringSpan::WITH_COUNT = 0x40;
// .method public constructor <init>(Landroid/icu/impl/UnicodeSetStringSpan;Ljava/util/ArrayList;)V
android::icu::impl::UnicodeSetStringSpan::UnicodeSetStringSpan(std::shared_ptr<android::icu::impl::UnicodeSetStringSpan> otherStringSpan,std::shared_ptr<java::util::ArrayList<java::lang::String>> newParentSetStrings)
{
	
	std::shared_ptr<android::icu::impl::UnicodeSetStringSpan_S_OffsetList> cVar0;
	std::shared_ptr<short[]> cVar1;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar2;
	
	//    .param p1, "otherStringSpan"    # Landroid/icu/impl/UnicodeSetStringSpan;
	//    .annotation system Ldalvik/annotation/Signature;
	// 072        value = {
	// 073            "(",
	// 074            "Landroid/icu/impl/UnicodeSetStringSpan;",
	// 075            "Ljava/util/ArrayList",
	// 076            "<",
	// 077            "Ljava/lang/String;",
	// 078            ">;)V"
	// 079        }
	// 080    .end annotation
	//    .local p2, "newParentSetStrings":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
	// 085    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->spanSet = otherStringSpan->spanSet;
	this->strings = newParentSetStrings;
	this->maxLength16 = otherStringSpan->maxLength16;
	this->someRelevant = otherStringSpan->someRelevant;
	this->all = 0x1;
	if ( !(android::icu::impl::Utility::sameObjects(otherStringSpan->spanNotSet, otherStringSpan->spanSet)) )  
		goto label_cond_34;
	this->spanNotSet = this->spanSet;
label_goto_22:
	cVar0 = std::make_shared<android::icu::impl::UnicodeSetStringSpan_S_OffsetList>();
	this->offsets = cVar0;
	cVar1 = otherStringSpan->spanLengths->clone();
	cVar1->checkCast("short[]");
	this->spanLengths = cVar1;
	return;
	// 148    .line 224
label_cond_34:
	cVar2 = otherStringSpan->spanNotSet->clone();
	cVar2->checkCast("android::icu::text::UnicodeSet");
	this->spanNotSet = cVar2;
	goto label_goto_22;

}
// .method public constructor <init>(Landroid/icu/text/UnicodeSet;Ljava/util/ArrayList;I)V
android::icu::impl::UnicodeSetStringSpan::UnicodeSetStringSpan(std::shared_ptr<android::icu::text::UnicodeSet> set,std::shared_ptr<java::util::ArrayList<java::lang::String>> setStrings,int which)
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	bool cVar1;
	std::shared_ptr<android::icu::impl::UnicodeSetStringSpan_S_OffsetList> cVar2;
	int stringsLength;
	int maxLength16;
	int i;
	std::shared_ptr<java::lang::String> string;
	int length16;
	int spanBackLengthsOffset;
	int spanLength;
	
	//    .param p1, "set"    # Landroid/icu/text/UnicodeSet;
	//    .param p3, "which"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 168        value = {
	// 169            "(",
	// 170            "Landroid/icu/text/UnicodeSet;",
	// 171            "Ljava/util/ArrayList",
	// 172            "<",
	// 173            "Ljava/lang/String;",
	// 174            ">;I)V"
	// 175        }
	// 176    .end annotation
	//    .local p2, "setStrings":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
	// 181    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<android::icu::text::UnicodeSet>(0x0, 0x10ffff);
	this->spanSet = cVar0;
	this->strings = setStrings;
	if ( which != 0x7f )
		goto label_cond_5b;
	cVar1 = 0x1;
label_goto_19:
	this->all = cVar1;
	this->spanSet->retainAll(set);
	if ( !(( which & 0x1)) )  
		goto label_cond_28;
	this->spanNotSet = this->spanSet;
label_cond_28:
	cVar2 = std::make_shared<android::icu::impl::UnicodeSetStringSpan_S_OffsetList>();
	this->offsets = cVar2;
	stringsLength = this->strings->size();
	//    .local v9, "stringsLength":I
	maxLength16 = 0x0;
	//    .local v5, "maxLength16":I
	this->someRelevant = 0x0;
	i = 0x0;
	//    .local v3, "i":I
label_goto_3a:
	if ( i >= stringsLength )
		goto label_cond_5d;
	string = this->strings->get(i);
	string->checkCast("java::lang::String");
	//    .local v8, "string":Ljava/lang/String;
	length16 = string->length();
	//    .local v4, "length16":I
	//    .local v7, "spanLength":I
	if ( this->spanSet->span(string, android::icu::text::UnicodeSet_S_SpanCondition::CONTAINED) >= length16 )
		goto label_cond_55;
	this->someRelevant = 0x1;
label_cond_55:
	if ( length16 <= maxLength16 )
		goto label_cond_58;
	maxLength16 = length16;
label_cond_58:
	i = ( i + 0x1);
	goto label_goto_3a;
	// 305    .line 96
	// 306    .end local v3    # "i":I
	// 307    .end local v4    # "length16":I
	// 308    .end local v5    # "maxLength16":I
	// 309    .end local v7    # "spanLength":I
	// 310    .end local v8    # "string":Ljava/lang/String;
	// 311    .end local v9    # "stringsLength":I
label_cond_5b:
	cVar1 = 0x0;
	goto label_goto_19;
	// 317    .line 128
	// 318    .restart local v3    # "i":I
	// 319    .restart local v5    # "maxLength16":I
	// 320    .restart local v9    # "stringsLength":I
label_cond_5d:
	this->maxLength16 = maxLength16;
	if ( this->someRelevant )     
		goto label_cond_68;
	if ( ( which & 0x40) )     
		goto label_cond_68;
	return;
	// 336    .line 135
label_cond_68:
	if ( !(this->all) )  
		goto label_cond_71;
	this->spanSet->freeze();
label_cond_71:
	if ( !(this->all) )  
		goto label_cond_df;
	//    .local v1, "allocSize":I
label_goto_77:
	this->spanLengths = std::make_shared<std::vector<short[]>>(allocSize);
	if ( !(this->all) )  
		goto label_cond_e1;
	spanBackLengthsOffset = stringsLength;
	//    .local v6, "spanBackLengthsOffset":I
label_goto_80:
	i = 0x0;
label_goto_81:
	if ( i >= stringsLength )
		goto label_cond_10a;
	string = this->strings->get(i);
	string->checkCast("java::lang::String");
	//    .restart local v8    # "string":Ljava/lang/String;
	length16 = string->length();
	//    .restart local v4    # "length16":I
	spanLength = this->spanSet->span(string, android::icu::text::UnicodeSet_S_SpanCondition::CONTAINED);
	//    .restart local v7    # "spanLength":I
	if ( spanLength >= length16 )
		goto label_cond_f0;
	if ( !(( which & 0x2)) )  
		goto label_cond_e3;
	if ( !(( which & 0x20)) )  
		goto label_cond_a9;
	this->spanLengths[i] = android::icu::impl::UnicodeSetStringSpan::makeSpanLengthByte(spanLength);
label_cond_a9:
	if ( !(( which & 0x10)) )  
		goto label_cond_c1;
	this->spanLengths[(spanBackLengthsOffset + i)] = android::icu::impl::UnicodeSetStringSpan::makeSpanLengthByte((length16 - this->spanSet->spanBack(string, length16, android::icu::text::UnicodeSet_S_SpanCondition::CONTAINED)));
label_cond_c1:
label_goto_c1:
	if ( !(( which & 0x1)) )  
		goto label_cond_dc;
	if ( !(( which & 0x20)) )  
		goto label_cond_d1;
	//    .local v2, "c":I
	this->addToSpanNotSet(string->codePointAt(0x0));
	//    .end local v2    # "c":I
label_cond_d1:
	if ( !(( which & 0x10)) )  
		goto label_cond_dc;
	//    .restart local v2    # "c":I
	this->addToSpanNotSet(string->codePointBefore(length16));
	//    .end local v2    # "c":I
label_cond_dc:
label_goto_dc:
	i = ( i + 0x1);
	goto label_goto_81;
	// 503    .line 147
	// 504    .end local v1    # "allocSize":I
	// 505    .end local v4    # "length16":I
	// 506    .end local v6    # "spanBackLengthsOffset":I
	// 507    .end local v7    # "spanLength":I
	// 508    .end local v8    # "string":Ljava/lang/String;
label_cond_df:
	//    .restart local v1    # "allocSize":I
	goto label_goto_77;
	// 515    .line 156
label_cond_e1:
	0x0;
	//    .restart local v6    # "spanBackLengthsOffset":I
	goto label_goto_80;
	// 522    .line 177
	// 523    .restart local v4    # "length16":I
	// 524    .restart local v7    # "spanLength":I
	// 525    .restart local v8    # "string":Ljava/lang/String;
label_cond_e3:
	this->spanLengths[(spanBackLengthsOffset + i)] = 0x0;
	this->spanLengths[i] = 0x0;
	goto label_goto_c1;
	// 543    .line 195
label_cond_f0:
	if ( !(this->all) )  
		goto label_cond_103;
	this->spanLengths[(spanBackLengthsOffset + i)] = 0xff;
	this->spanLengths[i] = 0xff;
	goto label_goto_dc;
	// 566    .line 199
label_cond_103:
	this->spanLengths[i] = 0xff;
	goto label_goto_dc;
	// 576    .line 205
	// 577    .end local v4    # "length16":I
	// 578    .end local v7    # "spanLength":I
	// 579    .end local v8    # "string":Ljava/lang/String;
label_cond_10a:
	if ( !(this->all) )  
		goto label_cond_113;
	this->spanNotSet->freeze();
label_cond_113:
	return;

}
// .method private addToSpanNotSet(I)V
void android::icu::impl::UnicodeSetStringSpan::addToSpanNotSet(int c)
{
	
	//    .param p1, "c"    # I
	if ( android::icu::impl::Utility::sameObjects(this->spanNotSet, 0x0) )     
		goto label_cond_13;
	if ( !(android::icu::impl::Utility::sameObjects(this->spanNotSet, this->spanSet)) )  
		goto label_cond_24;
label_cond_13:
	if ( !(this->spanSet->contains(c)) )  
		goto label_cond_1c;
	return;
	// 634    .line 255
label_cond_1c:
	this->spanNotSet = this->spanSet->cloneAsThawed();
label_cond_24:
	this->spanNotSet->add(c);
	return;

}
// .method static makeSpanLengthByte(I)S
short android::icu::impl::UnicodeSetStringSpan::makeSpanLengthByte(int spanLength)
{
	
	short cVar1;
	
	//    .param p0, "spanLength"    # I
	cVar1 = 0xfe;
	if ( spanLength >= cVar1 )
		goto label_cond_5;
	cVar1 = (short)(spanLength);
label_cond_5:
	return cVar1;

}
// .method private static matches16(Ljava/lang/CharSequence;ILjava/lang/String;I)Z
bool android::icu::impl::UnicodeSetStringSpan::matches16(std::shared_ptr<java::lang::CharSequence> s,int start,std::shared_ptr<java::lang::String> t,int length)
{
	
	int length;
	int end;
	
	//    .param p0, "s"    # Ljava/lang/CharSequence;
	//    .param p1, "start"    # I
	//    .param p2, "t"    # Ljava/lang/String;
	//    .param p3, "length"    # I
	//    .local v0, "end":I
	length = length;
	//    .end local p3    # "length":I
	//    .local v1, "length":I
label_goto_4:
	length = ( length + -0x1);
	//    .end local v1    # "length":I
	//    .restart local p3    # "length":I
	if ( length <= 0 )
		goto label_cond_17;
	end = ( end + -0x1);
	if ( s->charAt(end) == t->charAt(length) )
		goto label_cond_15;
	return 0x0;
label_cond_15:
	length = length;
	//    .end local p3    # "length":I
	//    .restart local v1    # "length":I
	goto label_goto_4;
	// 719    .line 951
	// 720    .end local v1    # "length":I
	// 721    .restart local p3    # "length":I
label_cond_17:
	return 0x1;

}
// .method static matches16CPB(Ljava/lang/CharSequence;IILjava/lang/String;I)Z
bool android::icu::impl::UnicodeSetStringSpan::matches16CPB(std::shared_ptr<java::lang::CharSequence> s,int start,int limit,std::shared_ptr<java::lang::String> t,int tlength)
{
	
	bool cVar2;
	int cVar1;
	
	//    .param p0, "s"    # Ljava/lang/CharSequence;
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	//    .param p3, "t"    # Ljava/lang/String;
	//    .param p4, "tlength"    # I
	cVar2 = 0x0;
	if ( !(android::icu::impl::UnicodeSetStringSpan::matches16(s, start, t, tlength)) )  
		goto label_cond_3f;
	if ( start <= 0 )
		goto label_cond_40;
	if ( !(java::lang::Character::isHighSurrogate(s->charAt(( start + -0x1)))) )  
		goto label_cond_40;
	cVar1 = java::lang::Character::isLowSurrogate(s->charAt(start));
label_goto_1d:
	if ( !(( cVar1 ^ 0x1)) )  
		goto label_cond_3f;
	if ( (start + tlength) >= limit )
		goto label_cond_3d;
	if ( !(java::lang::Character::isHighSurrogate(s->charAt(( (start + tlength) + -0x1)))) )  
		goto label_cond_3d;
	cVar2 = java::lang::Character::isLowSurrogate(s->charAt((start + tlength)));
label_cond_3d:
	cVar2 = ( cVar2 ^ 0x1);
label_cond_3f:
	return cVar2;
label_cond_40:
	cVar1 = cVar2;
	goto label_goto_1d;

}
// .method private declared-synchronized spanContainedAndCount(Ljava/lang/CharSequence;ILandroid/icu/util/OutputInt;)I
int android::icu::impl::UnicodeSetStringSpan::spanContainedAndCount(std::shared_ptr<java::lang::CharSequence> s,int start,std::shared_ptr<android::icu::util::OutputInt> outCount)
{
	
	int length;
	int pos;
	int rest;
	int count;
	int cpLength;
	int i;
	std::shared_ptr<java::lang::String> string;
	int length16;
	int minOffset;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "start"    # I
	//    .param p3, "outCount"    # Landroid/icu/util/OutputInt;
	this->monitor_enter();
	try {
	//label_try_start_1:
	this->offsets->setMaxLength(this->maxLength16);
	//    .local v9, "stringsLength":I
	length = s->length();
	//    .local v3, "length":I
	pos = start;
	//    .local v6, "pos":I
	rest = (length - start);
	//    .local v7, "rest":I
	count = 0x0;
	//    .local v0, "count":I
label_goto_16:
	if ( !(rest) )  
		goto label_cond_6b;
	cpLength = android::icu::impl::UnicodeSetStringSpan::spanOne(this->spanSet, s, pos, rest);
	//    .local v1, "cpLength":I
	if ( cpLength <= 0 )
		goto label_cond_27;
	this->offsets->addOffsetAndCount(cpLength, ( count + 0x1));
label_cond_27:
	i = 0x0;
	//    .local v2, "i":I
label_goto_28:
	if ( i >= this->strings->size() )
		goto label_cond_54;
	string = this->strings->get(i);
	string->checkCast("java::lang::String");
	//    .local v8, "string":Ljava/lang/String;
	length16 = string->length();
	//    .local v4, "length16":I
	if ( length16 >  rest )
		goto label_cond_51;
	if ( !(( this->offsets->hasCountAtOffset(length16, ( count + 0x1)) ^ 0x1)) )  
		goto label_cond_51;
	if ( !(android::icu::impl::UnicodeSetStringSpan::matches16CPB(s, pos, length, string, length16)) )  
		goto label_cond_51;
	this->offsets->addOffsetAndCount(length16, ( count + 0x1));
label_cond_51:
	i = ( i + 0x1);
	goto label_goto_28;
	// 947    .line 628
	// 948    .end local v4    # "length16":I
	// 949    .end local v8    # "string":Ljava/lang/String;
label_cond_54:
	if ( !(this->offsets->isEmpty()) )  
		goto label_cond_60;
	outCount->value = count;
	//label_try_end_5e:
	}
	catch (...){
		goto label_catchall_6f;
	}
	//    .catchall {:try_start_1 .. :try_end_5e} :catchall_6f
	this->monitor_exit();
	return pos;
	// 969    .line 633
label_cond_60:
	try {
	//label_try_start_60:
	minOffset = this->offsets->popMinimum(outCount);
	//    .local v5, "minOffset":I
	count = outCount->value;
	pos = (pos +  minOffset);
	rest = (rest -  minOffset);
	goto label_goto_16;
	// 990    .line 638
	// 991    .end local v1    # "cpLength":I
	// 992    .end local v2    # "i":I
	// 993    .end local v5    # "minOffset":I
label_cond_6b:
	outCount->value = count;
	//label_try_end_6d:
	}
	catch (...){
		goto label_catchall_6f;
	}
	//    .catchall {:try_start_60 .. :try_end_6d} :catchall_6f
	this->monitor_exit();
	return pos;
	// 1004    .end local v0    # "count":I
	// 1005    .end local v3    # "length":I
	// 1006    .end local v6    # "pos":I
	// 1007    .end local v7    # "rest":I
	// 1008    .end local v9    # "stringsLength":I
label_catchall_6f:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method private spanNot(Ljava/lang/CharSequence;ILandroid/icu/util/OutputInt;)I
int android::icu::impl::UnicodeSetStringSpan::spanNot(std::shared_ptr<java::lang::CharSequence> s,int start,std::shared_ptr<android::icu::util::OutputInt> outCount)
{
	
	int length;
	int pos;
	int count;
	int spanLimit;
	int rest;
	int cpLength;
	int i;
	std::shared_ptr<java::lang::String> string;
	int length16;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "start"    # I
	//    .param p3, "outCount"    # Landroid/icu/util/OutputInt;
	length = s->length();
	//    .local v3, "length":I
	pos = start;
	//    .local v5, "pos":I
	(length - start);
	//    .local v6, "rest":I
	//    .local v9, "stringsLength":I
	count = 0x0;
	//    .local v0, "count":I
label_cond_e:
	if ( outCount )     
		goto label_cond_1b;
	spanLimit = this->spanNotSet->span(s, pos, android::icu::text::UnicodeSet_S_SpanCondition::NOT_CONTAINED);
	//    .local v7, "spanLimit":I
label_goto_18:
	if ( spanLimit != length )
		goto label_cond_29;
	return length;
	// 1070    .line 854
	// 1071    .end local v7    # "spanLimit":I
label_cond_1b:
	spanLimit = this->spanNotSet->spanAndCount(s, pos, android::icu::text::UnicodeSet_S_SpanCondition::NOT_CONTAINED, outCount);
	//    .restart local v7    # "spanLimit":I
	count = (count +  outCount->value);
	outCount->value = count;
	goto label_goto_18;
	// 1091    .line 860
label_cond_29:
	pos = spanLimit;
	rest = (length - spanLimit);
	cpLength = android::icu::impl::UnicodeSetStringSpan::spanOne(this->spanSet, s, pos, rest);
	//    .local v1, "cpLength":I
	if ( cpLength <= 0 )
		goto label_cond_35;
	return pos;
	// 1112    .line 871
label_cond_35:
	i = 0x0;
	//    .local v2, "i":I
label_goto_36:
	if ( i >= this->strings->size() )
		goto label_cond_58;
	if ( this->spanLengths[i] != 0xff )
		goto label_cond_43;
label_cond_40:
	i = ( i + 0x1);
	goto label_goto_36;
	// 1135    .line 875
label_cond_43:
	string = this->strings->get(i);
	string->checkCast("java::lang::String");
	//    .local v8, "string":Ljava/lang/String;
	length16 = string->length();
	//    .local v4, "length16":I
	if ( length16 >  rest )
		goto label_cond_40;
	if ( !(android::icu::impl::UnicodeSetStringSpan::matches16CPB(s, pos, length, string, length16)) )  
		goto label_cond_40;
	return pos;
	// 1164    .line 886
	// 1165    .end local v4    # "length16":I
	// 1166    .end local v8    # "string":Ljava/lang/String;
label_cond_58:
	pos = (pos -  cpLength);
	count = ( count + 0x1);
	if ( (rest +  cpLength) )     
		goto label_cond_e;
	if ( !(outCount) )  
		goto label_cond_62;
	outCount->value = count;
label_cond_62:
	return length;

}
// .method private spanNotBack(Ljava/lang/CharSequence;I)I
int android::icu::impl::UnicodeSetStringSpan::spanNotBack(std::shared_ptr<java::lang::CharSequence> s,int length)
{
	
	int cVar0;
	int pos;
	int cpLength;
	int i;
	std::shared_ptr<java::lang::String> string;
	int length16;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "length"    # I
	cVar0 = 0x0;
	//    .local v3, "pos":I
	//    .local v5, "stringsLength":I
label_cond_8:
	pos = this->spanNotSet->spanBack(s, pos, android::icu::text::UnicodeSet_S_SpanCondition::NOT_CONTAINED);
	if ( pos )     
		goto label_cond_13;
	return cVar0;
	// 1226    .line 909
label_cond_13:
	cpLength = android::icu::impl::UnicodeSetStringSpan::spanOneBack(this->spanSet, s, pos);
	//    .local v0, "cpLength":I
	if ( cpLength <= 0 )
		goto label_cond_1c;
	return pos;
	// 1241    .line 915
label_cond_1c:
	i = 0x0;
	//    .local v1, "i":I
label_goto_1d:
	if ( i >= this->strings->size() )
		goto label_cond_41;
	if ( this->spanLengths[i] != 0xff )
		goto label_cond_2a;
label_cond_27:
	i = ( i + 0x1);
	goto label_goto_1d;
	// 1264    .line 922
label_cond_2a:
	string = this->strings->get(i);
	string->checkCast("java::lang::String");
	//    .local v4, "string":Ljava/lang/String;
	length16 = string->length();
	//    .local v2, "length16":I
	if ( length16 >  pos )
		goto label_cond_27;
	if ( !(android::icu::impl::UnicodeSetStringSpan::matches16CPB(s, (pos - length16), length, string, length16)) )  
		goto label_cond_27;
	return pos;
	// 1295    .line 933
	// 1296    .end local v2    # "length16":I
	// 1297    .end local v4    # "string":Ljava/lang/String;
label_cond_41:
	pos = (pos +  cpLength);
	if ( pos )     
		goto label_cond_8;
	return cVar0;

}
// .method static spanOne(Landroid/icu/text/UnicodeSet;Ljava/lang/CharSequence;II)I
int android::icu::impl::UnicodeSetStringSpan::spanOne(std::shared_ptr<android::icu::text::UnicodeSet> set,std::shared_ptr<java::lang::CharSequence> s,int start,int length)
{
	
	int cVar0;
	char c;
	char c2;
	int cVar2;
	
	//    .param p0, "set"    # Landroid/icu/text/UnicodeSet;
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "start"    # I
	//    .param p3, "length"    # I
	cVar0 = 0x2;
	c = s->charAt(start);
	//    .local v0, "c":C
	if ( c <  0xd800 )
		goto label_cond_2a;
	if ( c >  0xdbff )
		goto label_cond_2a;
	if ( length <  cVar0 )
		goto label_cond_2a;
	c2 = s->charAt(( start + 0x1));
	//    .local v1, "c2":C
	if ( !(android::icu::text::UTF16::isTrailSurrogate(c2)) )  
		goto label_cond_2a;
	//    .local v2, "supplementary":I
	if ( !(set->contains(java::lang::Character::toCodePoint(c, c2))) )  
		goto label_cond_28;
label_goto_27:
	return cVar0;
label_cond_28:
	cVar0 = -0x2;
	goto label_goto_27;
	// 1371    .line 985
	// 1372    .end local v1    # "c2":C
	// 1373    .end local v2    # "supplementary":I
label_cond_2a:
	if ( !(set->contains(c)) )  
		goto label_cond_32;
	cVar2 = 0x1;
label_goto_31:
	return cVar2;
label_cond_32:
	cVar2 = -0x1;
	goto label_goto_31;

}
// .method static spanOneBack(Landroid/icu/text/UnicodeSet;Ljava/lang/CharSequence;I)I
int android::icu::impl::UnicodeSetStringSpan::spanOneBack(std::shared_ptr<android::icu::text::UnicodeSet> set,std::shared_ptr<java::lang::CharSequence> s,int length)
{
	
	int cVar0;
	char c;
	char c2;
	int cVar2;
	
	//    .param p0, "set"    # Landroid/icu/text/UnicodeSet;
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "length"    # I
	cVar0 = 0x2;
	c = s->charAt(( length + -0x1));
	//    .local v0, "c":C
	if ( c <  0xdc00 )
		goto label_cond_2c;
	if ( c >  0xdfff )
		goto label_cond_2c;
	if ( length <  cVar0 )
		goto label_cond_2c;
	c2 = s->charAt(( length + -0x2));
	//    .local v1, "c2":C
	if ( !(android::icu::text::UTF16::isLeadSurrogate(c2)) )  
		goto label_cond_2c;
	//    .local v2, "supplementary":I
	if ( !(set->contains(java::lang::Character::toCodePoint(c2, c))) )  
		goto label_cond_2a;
label_goto_29:
	return cVar0;
label_cond_2a:
	cVar0 = -0x2;
	goto label_goto_29;
	// 1456    .line 997
	// 1457    .end local v1    # "c2":C
	// 1458    .end local v2    # "supplementary":I
label_cond_2c:
	if ( !(set->contains(c)) )  
		goto label_cond_34;
	cVar2 = 0x1;
label_goto_33:
	return cVar2;
label_cond_34:
	cVar2 = -0x1;
	goto label_goto_33;

}
// .method private declared-synchronized spanWithStrings(Ljava/lang/CharSequence;IILandroid/icu/text/UnicodeSet$SpanCondition;)I
int android::icu::impl::UnicodeSetStringSpan::spanWithStrings(std::shared_ptr<java::lang::CharSequence> s,int start,int spanLimit,std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> spanCondition)
{
	
	int length;
	int pos;
	int rest;
	int spanLength;
	int stringsLength;
	int i;
	short overlap;
	std::shared_ptr<java::lang::String> string;
	int length16;
	int overlap;
	int inc;
	int minOffset;
	int cVar0;
	int maxInc;
	int maxOverlap;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "start"    # I
	//    .param p3, "spanLimit"    # I
	//    .param p4, "spanCondition"    # Landroid/icu/text/UnicodeSet$SpanCondition;
	this->monitor_enter();
	//    .local v5, "initSize":I
	try {
	//label_try_start_2:
	if ( spanCondition != android::icu::text::UnicodeSet_S_SpanCondition::CONTAINED )
		goto label_cond_e;
label_cond_e:
	this->offsets->setMaxLength(0x0);
	length = s->length();
	//    .local v6, "length":I
	pos = spanLimit;
	//    .local v12, "pos":I
	rest = (length - spanLimit);
	//    .local v13, "rest":I
	spanLength = (spanLimit - start);
	//    .local v14, "spanLength":I
	stringsLength = this->strings->size();
	//    .local v16, "stringsLength":I
label_goto_2d:
	if ( spanCondition != android::icu::text::UnicodeSet_S_SpanCondition::CONTAINED )
		goto label_cond_a3;
	i = 0x0;
	//    .local v3, "i":I
label_goto_36:
	if ( i >= stringsLength )
		goto label_cond_fc;
	overlap = this->spanLengths[i];
	//    .local v11, "overlap":I
	if ( overlap != 0xff )
		goto label_cond_4b;
label_cond_48:
	i = ( i + 0x1);
	goto label_goto_36;
	// 1589    .line 408
label_cond_4b:
	string = this->strings->get(i);
	string->checkCast("java::lang::String");
	//    .local v15, "string":Ljava/lang/String;
	length16 = string->length();
	//    .local v7, "length16":I
	if ( overlap <  0xfe )
		goto label_cond_6c;
	length16;
	overlap = string->offsetByCodePoints(length16, -0x1);
label_cond_6c:
	if ( overlap <= spanLength )
		goto label_cond_6f;
	overlap = spanLength;
label_cond_6f:
	inc = (length16 - overlap);
	//    .local v4, "inc":I
label_goto_71:
	if ( inc >  rest )
		goto label_cond_48;
	if ( this->offsets->containsOffset(inc) )     
		goto label_cond_9c;
	//label_try_end_8a:
	}
	catch (...){
		goto label_catchall_16d;
	}
	//    .catchall {:try_start_2 .. :try_end_8a} :catchall_16d
	if ( !(android::icu::impl::UnicodeSetStringSpan::matches16CPB(s, (pos - overlap), length, string, length16)) )  
		goto label_cond_9c;
	if ( inc != rest )
		goto label_cond_91;
	this->monitor_exit();
	return length;
	// 1684    .line 432
label_cond_91:
	try {
	//label_try_start_91:
	this->offsets->addOffset(inc);
label_cond_9c:
	if ( !(overlap) )  
		goto label_cond_48;
	overlap = ( overlap + -0x1);
	inc = ( inc + 0x1);
	goto label_goto_71;
	// 1709    .line 442
	// 1710    .end local v3    # "i":I
	// 1711    .end local v4    # "inc":I
	// 1712    .end local v7    # "length16":I
	// 1713    .end local v11    # "overlap":I
	// 1714    .end local v15    # "string":Ljava/lang/String;
label_cond_a3:
	maxInc = 0x0;
	//    .local v8, "maxInc":I
	maxOverlap = 0x0;
	//    .local v9, "maxOverlap":I
	i = 0x0;
	//    .restart local v3    # "i":I
label_goto_a6:
	if ( i >= stringsLength )
		goto label_cond_ef;
	overlap = this->spanLengths[i];
	//    .restart local v11    # "overlap":I
	string = this->strings->get(i);
	string->checkCast("java::lang::String");
	//    .restart local v15    # "string":Ljava/lang/String;
	length16 = string->length();
	//    .restart local v7    # "length16":I
	if ( overlap <  0xfe )
		goto label_cond_cb;
	overlap = length16;
label_cond_cb:
	if ( overlap <= spanLength )
		goto label_cond_ce;
	overlap = spanLength;
label_cond_ce:
	inc = (length16 - overlap);
	//    .restart local v4    # "inc":I
label_goto_d0:
	if ( inc >  rest )
		goto label_cond_d4;
	if ( overlap >= maxOverlap )
		goto label_cond_d7;
label_cond_d4:
label_goto_d4:
	i = ( i + 0x1);
	goto label_goto_a6;
	// 1798    .line 467
label_cond_d7:
	if ( overlap >  maxOverlap )
		goto label_cond_db;
	if ( inc <= maxInc )
		goto label_cond_ea;
label_cond_db:
	//label_try_end_e4:
	}
	catch (...){
		goto label_catchall_16d;
	}
	//    .catchall {:try_start_91 .. :try_end_e4} :catchall_16d
	if ( !(android::icu::impl::UnicodeSetStringSpan::matches16CPB(s, (pos - overlap), length, string, length16)) )  
		goto label_cond_ea;
	maxInc = inc;
	maxOverlap = overlap;
	goto label_goto_d4;
	// 1830    .line 473
label_cond_ea:
	overlap = ( overlap + -0x1);
	inc = ( inc + 0x1);
	goto label_goto_d0;
	// 1839    .line 478
	// 1840    .end local v4    # "inc":I
	// 1841    .end local v7    # "length16":I
	// 1842    .end local v11    # "overlap":I
	// 1843    .end local v15    # "string":Ljava/lang/String;
label_cond_ef:
	if ( maxInc )     
		goto label_cond_f3;
	if ( !(maxOverlap) )  
		goto label_cond_fc;
label_cond_f3:
	pos = (pos +  maxInc);
	rest = (rest -  maxInc);
	if ( rest )     
		goto label_cond_f9;
	this->monitor_exit();
	return length;
	// 1864    .line 486
label_cond_f9:
	0x0;
	goto label_goto_2d;
	// 1871    .line 492
	// 1872    .end local v8    # "maxInc":I
	// 1873    .end local v9    # "maxOverlap":I
label_cond_fc:
	if ( spanLength )     
		goto label_cond_100;
	if ( pos )     
		goto label_cond_10e;
label_cond_100:
	try {
	//label_try_start_100:
	//label_try_end_109:
	}
	catch (...){
		goto label_catchall_16d;
	}
	//    .catchall {:try_start_100 .. :try_end_109} :catchall_16d
	if ( !(this->offsets->isEmpty()) )  
		goto label_cond_15c;
	this->monitor_exit();
	return pos;
	// 1901    .line 504
label_cond_10e:
	try {
	//label_try_start_10e:
	if ( !(this->offsets->isEmpty()) )  
		goto label_cond_138;
	//label_try_end_12b:
	}
	catch (...){
		goto label_catchall_16d;
	}
	//    .catchall {:try_start_10e .. :try_end_12b} :catchall_16d
	cVar0 = this->spanSet->span(s, pos, android::icu::text::UnicodeSet_S_SpanCondition::CONTAINED);
	spanLength = (cVar0 - pos);
	if ( spanLength == rest )
		goto label_cond_132;
	if ( spanLength )     
		goto label_cond_134;
label_cond_132:
	this->monitor_exit();
	return cVar0;
	// 1952    .line 514
label_cond_134:
	pos = (pos +  spanLength);
	rest = (rest -  spanLength);
	goto label_goto_2d;
	// 1962    .line 521
label_cond_138:
	try {
	//label_try_start_138:
	//label_try_end_145:
	}
	catch (...){
		goto label_catchall_16d;
	}
	//    .catchall {:try_start_138 .. :try_end_145} :catchall_16d
	spanLength = android::icu::impl::UnicodeSetStringSpan::spanOne(this->spanSet, s, pos, rest);
	if ( spanLength <= 0 )
		goto label_cond_15c;
	if ( spanLength != rest )
		goto label_cond_14c;
	this->monitor_exit();
	return length;
	// 1992    .line 529
label_cond_14c:
	pos = (pos +  spanLength);
	rest = (rest -  spanLength);
	try {
	//label_try_start_14e:
	this->offsets->shift(spanLength);
	spanLength = 0x0;
	goto label_goto_2d;
	// 2017    .line 538
label_cond_15c:
	//label_try_end_167:
	}
	catch (...){
		goto label_catchall_16d;
	}
	//    .catchall {:try_start_14e .. :try_end_167} :catchall_16d
	minOffset = this->offsets->popMinimum(0x0);
	//    .local v10, "minOffset":I
	pos = (pos +  minOffset);
	rest = (rest -  minOffset);
	spanLength = 0x0;
	goto label_goto_2d;
	// 2045    .end local v3    # "i":I
	// 2046    .end local v6    # "length":I
	// 2047    .end local v10    # "minOffset":I
	// 2048    .end local v12    # "pos":I
	// 2049    .end local v13    # "rest":I
	// 2050    .end local v14    # "spanLength":I
	// 2051    .end local v16    # "stringsLength":I
label_catchall_16d:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public contains(I)Z
bool android::icu::impl::UnicodeSetStringSpan::contains(int c)
{
	
	//    .param p1, "c"    # I
	return this->spanSet->contains(c);

}
// .method public needsStringSpanUTF16()Z
bool android::icu::impl::UnicodeSetStringSpan::needsStringSpanUTF16()
{
	
	return this->someRelevant;

}
// .method public span(Ljava/lang/CharSequence;ILandroid/icu/text/UnicodeSet$SpanCondition;)I
int android::icu::impl::UnicodeSetStringSpan::span(std::shared_ptr<java::lang::CharSequence> s,int start,std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> spanCondition)
{
	
	int spanLimit;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "start"    # I
	//    .param p3, "spanCondition"    # Landroid/icu/text/UnicodeSet$SpanCondition;
	if ( spanCondition != android::icu::text::UnicodeSet_S_SpanCondition::NOT_CONTAINED )
		goto label_cond_a;
	return this->spanNot(s, start, 0x0);
	// 2108    .line 375
label_cond_a:
	spanLimit = this->spanSet->span(s, start, android::icu::text::UnicodeSet_S_SpanCondition::CONTAINED);
	//    .local v0, "spanLimit":I
	if ( spanLimit != s->length() )
		goto label_cond_19;
	return spanLimit;
	// 2129    .line 379
label_cond_19:
	return this->spanWithStrings(s, start, spanLimit, spanCondition);

}
// .method public spanAndCount(Ljava/lang/CharSequence;ILandroid/icu/text/UnicodeSet$SpanCondition;Landroid/icu/util/OutputInt;)I
int android::icu::impl::UnicodeSetStringSpan::spanAndCount(std::shared_ptr<java::lang::CharSequence> s,int start,std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> spanCondition,std::shared_ptr<android::icu::util::OutputInt> outCount)
{
	
	int length;
	int pos;
	int rest;
	int count;
	int cpLength;
	int maxInc;
	int i;
	std::shared_ptr<java::lang::String> string;
	int length16;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "start"    # I
	//    .param p3, "spanCondition"    # Landroid/icu/text/UnicodeSet$SpanCondition;
	//    .param p4, "outCount"    # Landroid/icu/util/OutputInt;
	if ( spanCondition != android::icu::text::UnicodeSet_S_SpanCondition::NOT_CONTAINED )
		goto label_cond_9;
	return this->spanNot(s, start, outCount);
	// 2158    .line 566
label_cond_9:
	if ( spanCondition != android::icu::text::UnicodeSet_S_SpanCondition::CONTAINED )
		goto label_cond_12;
	return this->spanContainedAndCount(s, start, outCount);
	// 2171    .line 570
label_cond_12:
	//    .local v9, "stringsLength":I
	length = s->length();
	//    .local v3, "length":I
	pos = start;
	//    .local v6, "pos":I
	rest = (length - start);
	//    .local v7, "rest":I
	count = 0x0;
	//    .local v0, "count":I
label_goto_20:
	if ( !(rest) )  
		goto label_cond_54;
	cpLength = android::icu::impl::UnicodeSetStringSpan::spanOne(this->spanSet, s, pos, rest);
	//    .local v1, "cpLength":I
	if ( cpLength <= 0 )
		goto label_cond_48;
	maxInc = cpLength;
	//    .local v5, "maxInc":I
label_goto_2b:
	i = 0x0;
	//    .local v2, "i":I
label_goto_2c:
	if ( i >= this->strings->size() )
		goto label_cond_4a;
	string = this->strings->get(i);
	string->checkCast("java::lang::String");
	//    .local v8, "string":Ljava/lang/String;
	length16 = string->length();
	//    .local v4, "length16":I
	if ( maxInc >= length16 )
		goto label_cond_45;
	if ( length16 >  rest )
		goto label_cond_45;
	if ( !(android::icu::impl::UnicodeSetStringSpan::matches16CPB(s, pos, length, string, length16)) )  
		goto label_cond_45;
	maxInc = length16;
label_cond_45:
	i = ( i + 0x1);
	goto label_goto_2c;
	// 2262    .line 578
	// 2263    .end local v2    # "i":I
	// 2264    .end local v4    # "length16":I
	// 2265    .end local v5    # "maxInc":I
	// 2266    .end local v8    # "string":Ljava/lang/String;
label_cond_48:
	maxInc = 0x0;
	//    .restart local v5    # "maxInc":I
	goto label_goto_2b;
	// 2273    .line 589
	// 2274    .restart local v2    # "i":I
label_cond_4a:
	if ( maxInc )     
		goto label_cond_4f;
	outCount->value = count;
	return pos;
	// 2284    .line 594
label_cond_4f:
	count = ( count + 0x1);
	pos = (pos +  maxInc);
	rest = (rest -  maxInc);
	goto label_goto_20;
	// 2296    .line 598
	// 2297    .end local v1    # "cpLength":I
	// 2298    .end local v2    # "i":I
	// 2299    .end local v5    # "maxInc":I
label_cond_54:
	outCount->value = count;
	return pos;

}
// .method public declared-synchronized spanBack(Ljava/lang/CharSequence;ILandroid/icu/text/UnicodeSet$SpanCondition;)I
int android::icu::impl::UnicodeSetStringSpan::spanBack(std::shared_ptr<java::lang::CharSequence> s,int length,std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> spanCondition)
{
	
	int pos;
	int spanLength;
	int stringsLength;
	int spanBackLengthsOffset;
	int i;
	short overlap;
	std::shared_ptr<java::lang::String> string;
	int length16;
	int overlap;
	int dec;
	int oldPos;
	int maxDec;
	int maxOverlap;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "length"    # I
	//    .param p3, "spanCondition"    # Landroid/icu/text/UnicodeSet$SpanCondition;
	this->monitor_enter();
	try {
	//label_try_start_1:
	if ( spanCondition != android::icu::text::UnicodeSet_S_SpanCondition::NOT_CONTAINED )
		goto label_cond_f;
	//label_try_end_c:
	}
	catch (...){
		goto label_catchall_1b0;
	}
	//    .catchall {:try_start_1 .. :try_end_c} :catchall_1b0
	this->monitor_exit();
	return this->spanNotBack(s, length);
	// 2337    .line 653
label_cond_f:
	try {
	//label_try_start_f:
	//label_try_end_22:
	}
	catch (...){
		goto label_catchall_1b0;
	}
	//    .catchall {:try_start_f .. :try_end_22} :catchall_1b0
	pos = this->spanSet->spanBack(s, length, android::icu::text::UnicodeSet_S_SpanCondition::CONTAINED);
	//    .local v13, "pos":I
	if ( pos )     
		goto label_cond_29;
	this->monitor_exit();
	return 0x0;
	// 2373    .line 657
label_cond_29:
	spanLength = (length - pos);
	//    .local v15, "spanLength":I
	//    .local v6, "initSize":I
	try {
	//label_try_start_2c:
	if ( spanCondition != android::icu::text::UnicodeSet_S_SpanCondition::CONTAINED )
		goto label_cond_38;
label_cond_38:
	this->offsets->setMaxLength(0x0);
	stringsLength = this->strings->size();
	//    .local v17, "stringsLength":I
	0x0;
	//    .local v14, "spanBackLengthsOffset":I
	if ( !(this->all) )  
		goto label_cond_58;
	spanBackLengthsOffset = stringsLength;
label_cond_58:
label_goto_58:
	if ( spanCondition != android::icu::text::UnicodeSet_S_SpanCondition::CONTAINED )
		goto label_cond_df;
	i = 0x0;
	//    .local v5, "i":I
label_goto_61:
	if ( i >= stringsLength )
		goto label_cond_13f;
	overlap = this->spanLengths[(spanBackLengthsOffset + i)];
	//    .local v12, "overlap":I
	if ( overlap != 0xff )
		goto label_cond_78;
label_cond_75:
	i = ( i + 0x1);
	goto label_goto_61;
	// 2482    .line 678
label_cond_78:
	string = this->strings->get(i);
	string->checkCast("java::lang::String");
	//    .local v16, "string":Ljava/lang/String;
	length16 = string->length();
	//    .local v8, "length16":I
	if ( overlap <  0xfe )
		goto label_cond_a2;
	length16;
	0x0;
	//    .local v7, "len1":I
	overlap = (length16 - string->offsetByCodePoints(0x0, 0x1));
	//    .end local v7    # "len1":I
label_cond_a2:
	if ( overlap <= spanLength )
		goto label_cond_a5;
	overlap = spanLength;
label_cond_a5:
	dec = (length16 - overlap);
	//    .local v4, "dec":I
label_goto_a7:
	if ( dec >  pos )
		goto label_cond_75;
	if ( this->offsets->containsOffset(dec) )     
		goto label_cond_d8;
	//label_try_end_c4:
	}
	catch (...){
		goto label_catchall_1b0;
	}
	//    .catchall {:try_start_2c .. :try_end_c4} :catchall_1b0
	if ( !(android::icu::impl::UnicodeSetStringSpan::matches16CPB(s, (pos - dec), length, string, length16)) )  
		goto label_cond_d8;
	if ( dec != pos )
		goto label_cond_cd;
	this->monitor_exit();
	return 0x0;
	// 2597    .line 703
label_cond_cd:
	try {
	//label_try_start_cd:
	this->offsets->addOffset(dec);
label_cond_d8:
	if ( !(overlap) )  
		goto label_cond_75;
	overlap = ( overlap + -0x1);
	dec = ( dec + 0x1);
	goto label_goto_a7;
	// 2622    .line 713
	// 2623    .end local v4    # "dec":I
	// 2624    .end local v5    # "i":I
	// 2625    .end local v8    # "length16":I
	// 2626    .end local v12    # "overlap":I
	// 2627    .end local v16    # "string":Ljava/lang/String;
label_cond_df:
	maxDec = 0x0;
	//    .local v9, "maxDec":I
	maxOverlap = 0x0;
	//    .local v10, "maxOverlap":I
	i = 0x0;
	//    .restart local v5    # "i":I
label_goto_e2:
	if ( i >= stringsLength )
		goto label_cond_131;
	overlap = this->spanLengths[(spanBackLengthsOffset + i)];
	//    .restart local v12    # "overlap":I
	string = this->strings->get(i);
	string->checkCast("java::lang::String");
	//    .restart local v16    # "string":Ljava/lang/String;
	length16 = string->length();
	//    .restart local v8    # "length16":I
	if ( overlap <  0xfe )
		goto label_cond_109;
	overlap = length16;
label_cond_109:
	if ( overlap <= spanLength )
		goto label_cond_10c;
	overlap = spanLength;
label_cond_10c:
	dec = (length16 - overlap);
	//    .restart local v4    # "dec":I
label_goto_10e:
	if ( dec >  pos )
		goto label_cond_112;
	if ( overlap >= maxOverlap )
		goto label_cond_115;
label_cond_112:
label_goto_112:
	i = ( i + 0x1);
	goto label_goto_e2;
	// 2713    .line 738
label_cond_115:
	if ( overlap >  maxOverlap )
		goto label_cond_119;
	if ( dec <= maxDec )
		goto label_cond_12c;
label_cond_119:
	//label_try_end_126:
	}
	catch (...){
		goto label_catchall_1b0;
	}
	//    .catchall {:try_start_cd .. :try_end_126} :catchall_1b0
	if ( !(android::icu::impl::UnicodeSetStringSpan::matches16CPB(s, (pos - dec), length, string, length16)) )  
		goto label_cond_12c;
	maxDec = dec;
	maxOverlap = overlap;
	goto label_goto_112;
	// 2749    .line 744
label_cond_12c:
	overlap = ( overlap + -0x1);
	dec = ( dec + 0x1);
	goto label_goto_10e;
	// 2758    .line 749
	// 2759    .end local v4    # "dec":I
	// 2760    .end local v8    # "length16":I
	// 2761    .end local v12    # "overlap":I
	// 2762    .end local v16    # "string":Ljava/lang/String;
label_cond_131:
	if ( maxDec )     
		goto label_cond_135;
	if ( !(maxOverlap) )  
		goto label_cond_13f;
label_cond_135:
	pos = (pos -  maxDec);
	if ( pos )     
		goto label_cond_13c;
	this->monitor_exit();
	return 0x0;
	// 2782    .line 756
label_cond_13c:
	0x0;
	goto label_goto_58;
	// 2788    .line 762
	// 2789    .end local v9    # "maxDec":I
	// 2790    .end local v10    # "maxOverlap":I
label_cond_13f:
	if ( spanLength )     
		goto label_cond_145;
	if ( pos != length )
		goto label_cond_153;
label_cond_145:
	try {
	//label_try_start_145:
	//label_try_end_14e:
	}
	catch (...){
		goto label_catchall_1b0;
	}
	//    .catchall {:try_start_145 .. :try_end_14e} :catchall_1b0
	if ( !(this->offsets->isEmpty()) )  
		goto label_cond_19f;
	this->monitor_exit();
	return pos;
	// 2820    .line 774
label_cond_153:
	try {
	//label_try_start_153:
	if ( !(this->offsets->isEmpty()) )  
		goto label_cond_17a;
	oldPos = pos;
	//    .local v11, "oldPos":I
	//label_try_end_171:
	}
	catch (...){
		goto label_catchall_1b0;
	}
	//    .catchall {:try_start_153 .. :try_end_171} :catchall_1b0
	pos = this->spanSet->spanBack(s, oldPos, android::icu::text::UnicodeSet_S_SpanCondition::CONTAINED);
	spanLength = (oldPos - pos);
	if ( !(pos) )  
		goto label_cond_178;
	if ( spanLength )     
		goto label_cond_58;
label_cond_178:
	this->monitor_exit();
	return pos;
	// 2875    .line 790
	// 2876    .end local v11    # "oldPos":I
label_cond_17a:
	try {
	//label_try_start_17a:
	//label_try_end_187:
	}
	catch (...){
		goto label_catchall_1b0;
	}
	//    .catchall {:try_start_17a .. :try_end_187} :catchall_1b0
	spanLength = android::icu::impl::UnicodeSetStringSpan::spanOneBack(this->spanSet, s, pos);
	if ( spanLength <= 0 )
		goto label_cond_19f;
	if ( spanLength != pos )
		goto label_cond_190;
	this->monitor_exit();
	return 0x0;
	// 2908    .line 798
label_cond_190:
	pos = (pos -  spanLength);
	try {
	//label_try_start_191:
	this->offsets->shift(spanLength);
	spanLength = 0x0;
	goto label_goto_58;
	// 2930    .line 806
label_cond_19f:
	//label_try_end_1aa:
	}
	catch (...){
		goto label_catchall_1b0;
	}
	//    .catchall {:try_start_191 .. :try_end_1aa} :catchall_1b0
	pos = (pos - this->offsets->popMinimum(0x0));
	spanLength = 0x0;
	goto label_goto_58;
	// 2953    .end local v5    # "i":I
	// 2954    .end local v6    # "initSize":I
	// 2955    .end local v13    # "pos":I
	// 2956    .end local v14    # "spanBackLengthsOffset":I
	// 2957    .end local v15    # "spanLength":I
	// 2958    .end local v17    # "stringsLength":I
label_catchall_1b0:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}


