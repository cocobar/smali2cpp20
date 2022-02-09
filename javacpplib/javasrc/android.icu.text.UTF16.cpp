// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\UTF16.smali
#include "java2ctype.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.UTF16.h"
#include "java.lang.ArrayIndexOutOfBoundsException.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.Integer.h"
#include "java.lang.Math.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.StringIndexOutOfBoundsException.h"
#include "java.lang.System.h"

static android::icu::text::UTF16::CODEPOINT_MAX_VALUE = 0x10ffff;
static android::icu::text::UTF16::CODEPOINT_MIN_VALUE = 0x0;
static android::icu::text::UTF16::LEAD_SURROGATE_BITMASK = -0x400;
static android::icu::text::UTF16::LEAD_SURROGATE_BITS = 0xd800;
static android::icu::text::UTF16::LEAD_SURROGATE_BOUNDARY = 0x2;
static android::icu::text::UTF16::LEAD_SURROGATE_MAX_VALUE = 0xdbff;
static android::icu::text::UTF16::LEAD_SURROGATE_MIN_VALUE = 0xd800;
static android::icu::text::UTF16::LEAD_SURROGATE_OFFSET_ = 0xd7c0;
static android::icu::text::UTF16::LEAD_SURROGATE_SHIFT_ = 0xa;
static android::icu::text::UTF16::SINGLE_CHAR_BOUNDARY = 0x1;
static android::icu::text::UTF16::SUPPLEMENTARY_MIN_VALUE = 0x10000;
static android::icu::text::UTF16::SURROGATE_BITMASK = -0x800;
static android::icu::text::UTF16::SURROGATE_BITS = 0xd800;
static android::icu::text::UTF16::SURROGATE_MAX_VALUE = 0xdfff;
static android::icu::text::UTF16::SURROGATE_MIN_VALUE = 0xd800;
static android::icu::text::UTF16::TRAIL_SURROGATE_BITMASK = -0x400;
static android::icu::text::UTF16::TRAIL_SURROGATE_BITS = 0xdc00;
static android::icu::text::UTF16::TRAIL_SURROGATE_BOUNDARY = 0x5;
static android::icu::text::UTF16::TRAIL_SURROGATE_MASK_ = 0x3ff;
static android::icu::text::UTF16::TRAIL_SURROGATE_MAX_VALUE = 0xdfff;
static android::icu::text::UTF16::TRAIL_SURROGATE_MIN_VALUE = 0xdc00;
// .method private constructor <init>()V
android::icu::text::UTF16::UTF16()
{
	
	// 064    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method private static _charAt(Ljava/lang/CharSequence;IC)I
int android::icu::text::UTF16::_charAt(std::shared_ptr<java::lang::CharSequence> source,int offset16,char single)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	char trail;
	int cVar3;
	char lead;
	
	//    .param p0, "source"    # Ljava/lang/CharSequence;
	//    .param p1, "offset16"    # I
	//    .param p2, "single"    # C
	cVar0 = 0xdfff;
	cVar1 = 0xdbff;
	if ( single <= cVar0 )
		goto label_cond_9;
	return single;
	// 087    .line 269
label_cond_9:
	if ( single >  cVar1 )
		goto label_cond_23;
	cVar2 = ( offset16 + 0x1);
	if ( source->length() == cVar2 )
		goto label_cond_37;
	trail = source->charAt(cVar2);
	//    .local v1, "trail":C
	if ( trail <  0xdc00 )
		goto label_cond_37;
	if ( trail >  cVar0 )
		goto label_cond_37;
	return java::lang::Character::toCodePoint(single, trail);
	// 122    .line 279
	// 123    .end local v1    # "trail":C
label_cond_23:
	cVar3 = ( offset16 + -0x1);
	if ( cVar3 < 0 ) 
		goto label_cond_37;
	lead = source->charAt(cVar3);
	//    .local v0, "lead":C
	if ( lead <  0xd800 )
		goto label_cond_37;
	if ( lead >  cVar1 )
		goto label_cond_37;
	return java::lang::Character::toCodePoint(lead, single);
	// 151    .line 289
	// 152    .end local v0    # "lead":C
label_cond_37:
	return single;

}
// .method private static _charAt(Ljava/lang/String;IC)I
int android::icu::text::UTF16::_charAt(std::shared_ptr<java::lang::String> source,int offset16,char single)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	char trail;
	int cVar3;
	char lead;
	
	//    .param p0, "source"    # Ljava/lang/String;
	//    .param p1, "offset16"    # I
	//    .param p2, "single"    # C
	cVar0 = 0xdfff;
	cVar1 = 0xdbff;
	if ( single <= cVar0 )
		goto label_cond_9;
	return single;
	// 174    .line 216
label_cond_9:
	if ( single >  cVar1 )
		goto label_cond_23;
	cVar2 = ( offset16 + 0x1);
	if ( source->length() == cVar2 )
		goto label_cond_37;
	trail = source->charAt(cVar2);
	//    .local v1, "trail":C
	if ( trail <  0xdc00 )
		goto label_cond_37;
	if ( trail >  cVar0 )
		goto label_cond_37;
	return java::lang::Character::toCodePoint(single, trail);
	// 208    .line 225
	// 209    .end local v1    # "trail":C
label_cond_23:
	cVar3 = ( offset16 + -0x1);
	if ( cVar3 < 0 ) 
		goto label_cond_37;
	lead = source->charAt(cVar3);
	//    .local v0, "lead":C
	if ( lead <  0xd800 )
		goto label_cond_37;
	if ( lead >  cVar1 )
		goto label_cond_37;
	return java::lang::Character::toCodePoint(lead, single);
	// 236    .line 234
	// 237    .end local v0    # "lead":C
label_cond_37:
	return single;

}
// .method public static append([CII)I
int android::icu::text::UTF16::append(std::shared_ptr<char[]> target,int limit,int char32)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	int limit;
	
	//    .param p0, "target"    # [C
	//    .param p1, "limit"    # I
	//    .param p2, "char32"    # I
	if ( char32 < 0 ) 
		goto label_cond_7;
	if ( char32 <= 0x10ffff )
		goto label_cond_10;
label_cond_7:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal codepoint")));
	// throw
	throw cVar0;
	// 266    .line 1023
label_cond_10:
	if ( char32 <  0x10000 )
		goto label_cond_25;
	limit = ( limit + 0x1);
	//    .end local p1    # "limit":I
	//    .local v0, "limit":I
	target[limit] = android::icu::text::UTF16::getLeadSurrogate(char32);
	//    .end local v0    # "limit":I
	//    .restart local p1    # "limit":I
	target[limit] = android::icu::text::UTF16::getTrailSurrogate(char32);
label_goto_24:
	return limit;
	// 298    .line 1027
label_cond_25:
	//    .end local p1    # "limit":I
	//    .restart local v0    # "limit":I
	target[limit] = (char)(char32);
	//    .end local v0    # "limit":I
	//    .restart local p1    # "limit":I
	goto label_goto_24;

}
// .method public static append(Ljava/lang/StringBuffer;I)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::UTF16::append(std::shared_ptr<java::lang::StringBuffer> target,int char32)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "target"    # Ljava/lang/StringBuffer;
	//    .param p1, "char32"    # I
	if ( char32 < 0 ) 
		goto label_cond_7;
	if ( char32 <= 0x10ffff )
		goto label_cond_25;
label_cond_7:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal codepoint: ")))->append(java::lang::Integer::toHexString(char32))->toString());
	// throw
	throw cVar0;
	// 358    .line 985
label_cond_25:
	if ( char32 <  0x10000 )
		goto label_cond_38;
	target->append(android::icu::text::UTF16::getLeadSurrogate(char32));
	target->append(android::icu::text::UTF16::getTrailSurrogate(char32));
label_goto_37:
	return target;
	// 382    .line 989
label_cond_38:
	target->append((char)(char32));
	goto label_goto_37;

}
// .method public static appendCodePoint(Ljava/lang/StringBuffer;I)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::UTF16::appendCodePoint(std::shared_ptr<java::lang::StringBuffer> target,int cp)
{
	
	//    .param p0, "target"    # Ljava/lang/StringBuffer;
	//    .param p1, "cp"    # I
	return android::icu::text::UTF16::append(target, cp);

}
// .method public static bounds(Ljava/lang/String;I)I
int android::icu::text::UTF16::bounds(std::shared_ptr<java::lang::String> source,int offset16)
{
	
	char ch;
	int cVar0;
	int cVar1;
	
	//    .param p0, "source"    # Ljava/lang/String;
	//    .param p1, "offset16"    # I
	ch = source->charAt(offset16);
	//    .local v0, "ch":C
	if ( !(android::icu::text::UTF16::isSurrogate(ch)) )  
		goto label_cond_34;
	if ( !(android::icu::text::UTF16::isLeadSurrogate(ch)) )  
		goto label_cond_24;
	cVar0 = ( offset16 + 0x1);
	if ( cVar0 >= source->length() )
		goto label_cond_34;
	if ( !(android::icu::text::UTF16::isTrailSurrogate(source->charAt(cVar0))) )  
		goto label_cond_34;
	return 0x2;
	// 455    .line 483
label_cond_24:
	cVar1 = ( offset16 + -0x1);
	if ( cVar1 < 0 ) 
		goto label_cond_34;
	if ( !(android::icu::text::UTF16::isLeadSurrogate(source->charAt(cVar1))) )  
		goto label_cond_34;
	return 0x5;
	// 477    .line 489
label_cond_34:
	return 0x1;

}
// .method public static bounds(Ljava/lang/StringBuffer;I)I
int android::icu::text::UTF16::bounds(std::shared_ptr<java::lang::StringBuffer> source,int offset16)
{
	
	char ch;
	int cVar0;
	int cVar1;
	
	//    .param p0, "source"    # Ljava/lang/StringBuffer;
	//    .param p1, "offset16"    # I
	ch = source->charAt(offset16);
	//    .local v0, "ch":C
	if ( !(android::icu::text::UTF16::isSurrogate(ch)) )  
		goto label_cond_34;
	if ( !(android::icu::text::UTF16::isLeadSurrogate(ch)) )  
		goto label_cond_24;
	cVar0 = ( offset16 + 0x1);
	if ( cVar0 >= source->length() )
		goto label_cond_34;
	if ( !(android::icu::text::UTF16::isTrailSurrogate(source->charAt(cVar0))) )  
		goto label_cond_34;
	return 0x2;
	// 534    .line 518
label_cond_24:
	cVar1 = ( offset16 + -0x1);
	if ( cVar1 < 0 ) 
		goto label_cond_34;
	if ( !(android::icu::text::UTF16::isLeadSurrogate(source->charAt(cVar1))) )  
		goto label_cond_34;
	return 0x5;
	// 556    .line 524
label_cond_34:
	return 0x1;

}
// .method public static bounds([CIII)I
int android::icu::text::UTF16::bounds(std::shared_ptr<char[]> source,int start,int limit,int offset16)
{
	
	int cVar0;
	std::shared_ptr<java::lang::ArrayIndexOutOfBoundsException> cVar1;
	char ch;
	int cVar2;
	int cVar3;
	
	//    .param p0, "source"    # [C
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	//    .param p3, "offset16"    # I
	cVar0 = (offset16 +  start);
	if ( cVar0 <  start )
		goto label_cond_5;
	if ( cVar0 <  limit )
		goto label_cond_b;
label_cond_5:
	cVar1 = std::make_shared<java::lang::ArrayIndexOutOfBoundsException>(cVar0);
	// throw
	throw cVar1;
	// 587    .line 553
label_cond_b:
	ch = source[cVar0];
	//    .local v0, "ch":C
	if ( !(android::icu::text::UTF16::isSurrogate(ch)) )  
		goto label_cond_35;
	if ( !(android::icu::text::UTF16::isLeadSurrogate(ch)) )  
		goto label_cond_27;
	cVar2 = ( cVar0 + 0x1);
	if ( cVar2 >= limit )
		goto label_cond_35;
	if ( !(android::icu::text::UTF16::isTrailSurrogate(source[cVar2])) )  
		goto label_cond_35;
	return 0x2;
	// 625    .line 561
label_cond_27:
	cVar3 = ( cVar0 + -0x1);
	if ( cVar3 <  start )
		goto label_cond_35;
	if ( !(android::icu::text::UTF16::isLeadSurrogate(source[cVar3])) )  
		goto label_cond_35;
	return 0x5;
	// 645    .line 567
label_cond_35:
	return 0x1;

}
// .method public static charAt(Landroid/icu/text/Replaceable;I)I
int android::icu::text::UTF16::charAt(std::shared_ptr<android::icu::text::Replaceable> source,int offset16)
{
	
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar0;
	char single;
	int cVar1;
	char trail;
	int cVar2;
	char lead;
	
	//    .param p0, "source"    # Landroid/icu/text/Replaceable;
	//    .param p1, "offset16"    # I
	if ( offset16 < 0 ) 
		goto label_cond_8;
	if ( offset16 <  source->length() )
		goto label_cond_e;
label_cond_8:
	cVar0 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(offset16);
	// throw
	throw cVar0;
	// 675    .line 413
label_cond_e:
	single = source->charAt(offset16);
	//    .local v1, "single":C
	if ( android::icu::text::UTF16::isSurrogate(single) )     
		goto label_cond_19;
	return single;
	// 692    .line 422
label_cond_19:
	if ( single >  0xdbff )
		goto label_cond_35;
	cVar1 = ( offset16 + 0x1);
	if ( source->length() == cVar1 )
		goto label_cond_48;
	trail = source->charAt(cVar1);
	//    .local v2, "trail":C
	if ( !(android::icu::text::UTF16::isTrailSurrogate(trail)) )  
		goto label_cond_48;
	return java::lang::Character::toCodePoint(single, trail);
	// 728    .line 430
	// 729    .end local v2    # "trail":C
label_cond_35:
	cVar2 = ( offset16 + -0x1);
	if ( cVar2 < 0 ) 
		goto label_cond_48;
	lead = source->charAt(cVar2);
	//    .local v0, "lead":C
	if ( !(android::icu::text::UTF16::isLeadSurrogate(lead)) )  
		goto label_cond_48;
	return java::lang::Character::toCodePoint(lead, single);
	// 756    .line 439
	// 757    .end local v0    # "lead":C
label_cond_48:
	return single;

}
// .method public static charAt(Ljava/lang/CharSequence;I)I
int android::icu::text::UTF16::charAt(std::shared_ptr<java::lang::CharSequence> source,int offset16)
{
	
	int single;
	
	//    .param p0, "source"    # Ljava/lang/CharSequence;
	//    .param p1, "offset16"    # I
	single = source->charAt(offset16);
	//    .local v0, "single":C
	if ( single >= 0xd800 )
		goto label_cond_a;
	return single;
	// 782    .line 257
label_cond_a:
	return android::icu::text::UTF16::_charAt(source, offset16, single);

}
// .method public static charAt(Ljava/lang/String;I)I
int android::icu::text::UTF16::charAt(std::shared_ptr<java::lang::String> source,int offset16)
{
	
	int single;
	
	//    .param p0, "source"    # Ljava/lang/String;
	//    .param p1, "offset16"    # I
	single = source->charAt(offset16);
	//    .local v0, "single":C
	if ( single >= 0xd800 )
		goto label_cond_a;
	return single;
	// 811    .line 204
label_cond_a:
	return android::icu::text::UTF16::_charAt(source, offset16, single);

}
// .method public static charAt(Ljava/lang/StringBuffer;I)I
int android::icu::text::UTF16::charAt(std::shared_ptr<java::lang::StringBuffer> source,int offset16)
{
	
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar0;
	char single;
	int cVar1;
	char trail;
	int cVar2;
	char lead;
	
	//    .param p0, "source"    # Ljava/lang/StringBuffer;
	//    .param p1, "offset16"    # I
	if ( offset16 < 0 ) 
		goto label_cond_8;
	if ( offset16 <  source->length() )
		goto label_cond_e;
label_cond_8:
	cVar0 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(offset16);
	// throw
	throw cVar0;
	// 843    .line 312
label_cond_e:
	single = source->charAt(offset16);
	//    .local v1, "single":C
	if ( android::icu::text::UTF16::isSurrogate(single) )     
		goto label_cond_19;
	return single;
	// 860    .line 321
label_cond_19:
	if ( single >  0xdbff )
		goto label_cond_35;
	cVar1 = ( offset16 + 0x1);
	if ( source->length() == cVar1 )
		goto label_cond_48;
	trail = source->charAt(cVar1);
	//    .local v2, "trail":C
	if ( !(android::icu::text::UTF16::isTrailSurrogate(trail)) )  
		goto label_cond_48;
	return java::lang::Character::toCodePoint(single, trail);
	// 896    .line 329
	// 897    .end local v2    # "trail":C
label_cond_35:
	cVar2 = ( offset16 + -0x1);
	if ( cVar2 < 0 ) 
		goto label_cond_48;
	lead = source->charAt(cVar2);
	//    .local v0, "lead":C
	if ( !(android::icu::text::UTF16::isLeadSurrogate(lead)) )  
		goto label_cond_48;
	return java::lang::Character::toCodePoint(lead, single);
	// 924    .line 338
	// 925    .end local v0    # "lead":C
label_cond_48:
	return single;

}
// .method public static charAt([CIII)I
int android::icu::text::UTF16::charAt(std::shared_ptr<char[]> source,int start,int limit,int offset16)
{
	
	int cVar0;
	std::shared_ptr<java::lang::ArrayIndexOutOfBoundsException> cVar1;
	char single;
	int cVar2;
	char trail;
	char lead;
	
	//    .param p0, "source"    # [C
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	//    .param p3, "offset16"    # I
	cVar0 = (offset16 +  start);
	if ( cVar0 <  start )
		goto label_cond_5;
	if ( cVar0 <  limit )
		goto label_cond_b;
label_cond_5:
	cVar1 = std::make_shared<java::lang::ArrayIndexOutOfBoundsException>(cVar0);
	// throw
	throw cVar1;
	// 954    .line 364
label_cond_b:
	single = source[cVar0];
	//    .local v1, "single":C
	if ( android::icu::text::UTF16::isSurrogate(single) )     
		goto label_cond_14;
	return single;
	// 969    .line 372
label_cond_14:
	if ( single >  0xdbff )
		goto label_cond_2b;
	cVar2 = ( cVar0 + 0x1);
	if ( cVar2 <  limit )
		goto label_cond_1e;
	return single;
	// 984    .line 377
label_cond_1e:
	trail = source[cVar2];
	//    .local v2, "trail":C
	if ( !(android::icu::text::UTF16::isTrailSurrogate(trail)) )  
		goto label_cond_3d;
	return java::lang::Character::toCodePoint(single, trail);
	// 1003    .line 382
	// 1004    .end local v2    # "trail":C
label_cond_2b:
	if ( cVar0 != start )
		goto label_cond_2e;
	return single;
	// 1011    .line 385
label_cond_2e:
	lead = source[( cVar0 + -0x1)];
	//    .local v0, "lead":C
	if ( !(android::icu::text::UTF16::isLeadSurrogate(lead)) )  
		goto label_cond_3d;
	return java::lang::Character::toCodePoint(lead, single);
	// 1033    .line 390
	// 1034    .end local v0    # "lead":C
label_cond_3d:
	return single;

}
// .method public static compareCodePoint(ILjava/lang/CharSequence;)I
int android::icu::text::UTF16::compareCodePoint(int codePoint,std::shared_ptr<java::lang::CharSequence> s)
{
	
	int cVar0;
	int cVar1;
	int strLen;
	int diff;
	
	//    .param p0, "codePoint"    # I
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( s )     
		goto label_cond_5;
	return cVar0;
	// 1055    .line 2565
label_cond_5:
	strLen = s->length();
	//    .local v2, "strLen":I
	if ( strLen )     
		goto label_cond_c;
	return cVar0;
	// 1068    .line 2569
label_cond_c:
	//    .local v1, "second":I
	diff = (codePoint - java::lang::Character::codePointAt(s, cVar1));
	//    .local v0, "diff":I
	if ( !(diff) )  
		goto label_cond_15;
	return diff;
	// 1085    .line 2574
label_cond_15:
	if ( strLen != java::lang::Character::charCount(codePoint) )
		goto label_cond_1c;
label_goto_1b:
	return cVar1;
label_cond_1c:
	cVar1 = -0x1;
	goto label_goto_1b;

}
// .method public static countCodePoint(Ljava/lang/String;)I
int android::icu::text::UTF16::countCodePoint(std::shared_ptr<java::lang::String> source)
{
	
	//    .param p0, "source"    # Ljava/lang/String;
	if ( !(source) )  
		goto label_cond_9;
	if ( source->length() )     
		goto label_cond_a;
label_cond_9:
	return 0x0;
	// 1122    .line 1042
label_cond_a:
	return android::icu::text::UTF16::findCodePointOffset(source, source->length());

}
// .method public static countCodePoint(Ljava/lang/StringBuffer;)I
int android::icu::text::UTF16::countCodePoint(std::shared_ptr<java::lang::StringBuffer> source)
{
	
	//    .param p0, "source"    # Ljava/lang/StringBuffer;
	if ( !(source) )  
		goto label_cond_9;
	if ( source->length() )     
		goto label_cond_a;
label_cond_9:
	return 0x0;
	// 1155    .line 1055
label_cond_a:
	return android::icu::text::UTF16::findCodePointOffset(source, source->length());

}
// .method public static countCodePoint([CII)I
int android::icu::text::UTF16::countCodePoint(std::shared_ptr<char[]> source,int start,int limit)
{
	
	//    .param p0, "source"    # [C
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	if ( !(source) )  
		goto label_cond_6;
	if ( source->size() )     
		goto label_cond_7;
label_cond_6:
	return 0x0;
	// 1188    .line 1071
label_cond_7:
	return android::icu::text::UTF16::findCodePointOffset(source, start, limit, (limit - start));

}
// .method public static delete([CII)I
int android::icu::text::UTF16::_delete_(std::shared_ptr<char[]> target,int limit,int offset16)
{
	
	int cVar0;
	int count;
	int offset16;
	
	//    .param p0, "target"    # [C
	//    .param p1, "limit"    # I
	//    .param p2, "offset16"    # I
	cVar0 = 0x0;
	count = 0x1;
	//    .local v0, "count":I
	// switch
	{
	auto item = ( android::icu::text::UTF16::bounds(target, cVar0, limit, offset16) );
	if (item == 2) goto label_pswitch_19;
	if (item == 3) goto label_pswitch_9;
	if (item == 4) goto label_pswitch_9;
	if (item == 5) goto label_pswitch_1b;
	}
label_goto_9:
label_pswitch_9:
	java::lang::System::arraycopy(target, (offset16 + count), target, offset16, (limit - (offset16 + count)));
	target[(limit - count)] = cVar0;
	return (limit - count);
	// 1240    .line 1442
label_pswitch_19:
	count = 0x2;
	goto label_goto_9;
	// 1247    .line 1445
label_pswitch_1b:
	count = 0x2;
	offset16 = ( offset16 + -0x1);
	goto label_goto_9;
	// 1257    .line 1440
	// 1258    nop
	// 1260    :pswitch_data_20
	// 1261    .packed-switch 0x2
	// 1262        :pswitch_19
	// 1263        :pswitch_9
	// 1264        :pswitch_9
	// 1265        :pswitch_1b
	// 1266    .end packed-switch

}
// .method public static delete(Ljava/lang/StringBuffer;I)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::UTF16::_delete_(std::shared_ptr<java::lang::StringBuffer> target,int offset16)
{
	
	int count;
	int offset16;
	
	//    .param p0, "target"    # Ljava/lang/StringBuffer;
	//    .param p1, "offset16"    # I
	count = 0x1;
	//    .local v0, "count":I
	// switch
	{
	auto item = ( android::icu::text::UTF16::bounds(target, offset16) );
	if (item == 2) goto label_pswitch_e;
	if (item == 3) goto label_pswitch_8;
	if (item == 4) goto label_pswitch_8;
	if (item == 5) goto label_pswitch_10;
	}
label_goto_8:
label_pswitch_8:
	target->delete(offset16, (offset16 + count));
	return target;
	// 1296    .line 1417
label_pswitch_e:
	count = 0x2;
	goto label_goto_8;
	// 1303    .line 1420
label_pswitch_10:
	count = 0x2;
	offset16 = ( offset16 + -0x1);
	goto label_goto_8;
	// 1313    .line 1415
	// 1314    :pswitch_data_14
	// 1315    .packed-switch 0x2
	// 1316        :pswitch_e
	// 1317        :pswitch_8
	// 1318        :pswitch_8
	// 1319        :pswitch_10
	// 1320    .end packed-switch

}
// .method public static findCodePointOffset(Ljava/lang/String;I)I
int android::icu::text::UTF16::findCodePointOffset(std::shared_ptr<java::lang::String> source,int offset16)
{
	
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar0;
	int result;
	int hadLeadSurrogate;
	int i;
	char ch;
	
	//    .param p0, "source"    # Ljava/lang/String;
	//    .param p1, "offset16"    # I
	if ( offset16 < 0 ) 
		goto label_cond_8;
	if ( offset16 <= source->length() )
		goto label_cond_e;
label_cond_8:
	cVar0 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(offset16);
	// throw
	throw cVar0;
	// 1346    .line 838
label_cond_e:
	result = 0x0;
	//    .local v3, "result":I
	hadLeadSurrogate = 0x0;
	//    .local v1, "hadLeadSurrogate":Z
	i = 0x0;
	//    .end local v1    # "hadLeadSurrogate":Z
	//    .local v2, "i":I
label_goto_11:
	if ( i >= offset16 )
		goto label_cond_2a;
	ch = source->charAt(i);
	//    .local v0, "ch":C
	if ( !(hadLeadSurrogate) )  
		goto label_cond_23;
	if ( !(android::icu::text::UTF16::isTrailSurrogate(ch)) )  
		goto label_cond_23;
	hadLeadSurrogate = 0x0;
label_goto_20:
	i = ( i + 0x1);
	goto label_goto_11;
	// 1387    .line 847
label_cond_23:
	hadLeadSurrogate = android::icu::text::UTF16::isLeadSurrogate(ch);
	//    .local v1, "hadLeadSurrogate":Z
	result = ( result + 0x1);
	goto label_goto_20;
	// 1399    .line 852
	// 1400    .end local v0    # "ch":C
	// 1401    .end local v1    # "hadLeadSurrogate":Z
label_cond_2a:
	if ( offset16 != source->length() )
		goto label_cond_31;
	return result;
	// 1412    .line 858
label_cond_31:
	if ( !(hadLeadSurrogate) )  
		goto label_cond_3f;
	if ( !(android::icu::text::UTF16::isTrailSurrogate(source->charAt(offset16))) )  
		goto label_cond_3f;
	result = ( result + -0x1);
label_cond_3f:
	return result;

}
// .method public static findCodePointOffset(Ljava/lang/StringBuffer;I)I
int android::icu::text::UTF16::findCodePointOffset(std::shared_ptr<java::lang::StringBuffer> source,int offset16)
{
	
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar0;
	int result;
	int hadLeadSurrogate;
	int i;
	char ch;
	
	//    .param p0, "source"    # Ljava/lang/StringBuffer;
	//    .param p1, "offset16"    # I
	if ( offset16 < 0 ) 
		goto label_cond_8;
	if ( offset16 <= source->length() )
		goto label_cond_e;
label_cond_8:
	cVar0 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(offset16);
	// throw
	throw cVar0;
	// 1457    .line 888
label_cond_e:
	result = 0x0;
	//    .local v3, "result":I
	hadLeadSurrogate = 0x0;
	//    .local v1, "hadLeadSurrogate":Z
	i = 0x0;
	//    .end local v1    # "hadLeadSurrogate":Z
	//    .local v2, "i":I
label_goto_11:
	if ( i >= offset16 )
		goto label_cond_2a;
	ch = source->charAt(i);
	//    .local v0, "ch":C
	if ( !(hadLeadSurrogate) )  
		goto label_cond_23;
	if ( !(android::icu::text::UTF16::isTrailSurrogate(ch)) )  
		goto label_cond_23;
	hadLeadSurrogate = 0x0;
label_goto_20:
	i = ( i + 0x1);
	goto label_goto_11;
	// 1498    .line 897
label_cond_23:
	hadLeadSurrogate = android::icu::text::UTF16::isLeadSurrogate(ch);
	//    .local v1, "hadLeadSurrogate":Z
	result = ( result + 0x1);
	goto label_goto_20;
	// 1510    .line 902
	// 1511    .end local v0    # "ch":C
	// 1512    .end local v1    # "hadLeadSurrogate":Z
label_cond_2a:
	if ( offset16 != source->length() )
		goto label_cond_31;
	return result;
	// 1523    .line 908
label_cond_31:
	if ( !(hadLeadSurrogate) )  
		goto label_cond_3f;
	if ( !(android::icu::text::UTF16::isTrailSurrogate(source->charAt(offset16))) )  
		goto label_cond_3f;
	result = ( result + -0x1);
label_cond_3f:
	return result;

}
// .method public static findCodePointOffset([CIII)I
int android::icu::text::UTF16::findCodePointOffset(std::shared_ptr<char[]> source,int start,int limit,int offset16)
{
	
	int cVar0;
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar1;
	int result;
	int hadLeadSurrogate;
	int i;
	char ch;
	
	//    .param p0, "source"    # [C
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	//    .param p3, "offset16"    # I
	cVar0 = (offset16 +  start);
	if ( cVar0 <= limit )
		goto label_cond_9;
	cVar1 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(cVar0);
	// throw
	throw cVar1;
	// 1566    .line 941
label_cond_9:
	result = 0x0;
	//    .local v3, "result":I
	hadLeadSurrogate = 0x0;
	//    .local v1, "hadLeadSurrogate":Z
	i = start;
	//    .end local v1    # "hadLeadSurrogate":Z
	//    .local v2, "i":I
label_goto_c:
	if ( i >= cVar0 )
		goto label_cond_23;
	ch = source[i];
	//    .local v0, "ch":C
	if ( !(hadLeadSurrogate) )  
		goto label_cond_1c;
	if ( !(android::icu::text::UTF16::isTrailSurrogate(ch)) )  
		goto label_cond_1c;
	hadLeadSurrogate = 0x0;
label_goto_19:
	i = ( i + 0x1);
	goto label_goto_c;
	// 1605    .line 950
label_cond_1c:
	hadLeadSurrogate = android::icu::text::UTF16::isLeadSurrogate(ch);
	//    .local v1, "hadLeadSurrogate":Z
	result = ( result + 0x1);
	goto label_goto_19;
	// 1617    .line 955
	// 1618    .end local v0    # "ch":C
	// 1619    .end local v1    # "hadLeadSurrogate":Z
label_cond_23:
	if ( cVar0 != limit )
		goto label_cond_26;
	return result;
	// 1626    .line 961
label_cond_26:
	if ( !(hadLeadSurrogate) )  
		goto label_cond_32;
	if ( !(android::icu::text::UTF16::isTrailSurrogate(source[cVar0])) )  
		goto label_cond_32;
	result = ( result + -0x1);
label_cond_32:
	return result;

}
// .method public static findOffsetFromCodePoint(Ljava/lang/String;I)I
int android::icu::text::UTF16::findOffsetFromCodePoint(std::shared_ptr<java::lang::String> source,int offset32)
{
	
	int size;
	int result;
	int count;
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar0;
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar1;
	
	//    .param p0, "source"    # Ljava/lang/String;
	//    .param p1, "offset32"    # I
	size = source->length();
	//    .local v3, "size":I
	result = 0x0;
	//    .local v2, "result":I
	count = offset32;
	//    .local v1, "count":I
	if ( offset32 < 0 ) 
		goto label_cond_a;
	if ( offset32 <= size )
		goto label_cond_10;
label_cond_a:
	cVar0 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(offset32);
	// throw
	throw cVar0;
	// 1677    .line 735
label_cond_10:
label_goto_10:
	if ( result >= size )
		goto label_cond_35;
	if ( count <= 0 )
		goto label_cond_35;
	//    .local v0, "ch":C
	if ( !(android::icu::text::UTF16::isLeadSurrogate(source->charAt(result))) )  
		goto label_cond_30;
	if ( ( result + 0x1) >= size )
		goto label_cond_30;
	if ( !(android::icu::text::UTF16::isTrailSurrogate(source->charAt(( result + 0x1)))) )  
		goto label_cond_30;
	result = ( result + 0x1);
label_cond_30:
	count = ( count + -0x1);
	result = ( result + 0x1);
	goto label_goto_10;
	// 1727    .line 745
	// 1728    .end local v0    # "ch":C
label_cond_35:
	if ( !(count) )  
		goto label_cond_3d;
	cVar1 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(offset32);
	// throw
	throw cVar1;
	// 1739    .line 748
label_cond_3d:
	return result;

}
// .method public static findOffsetFromCodePoint(Ljava/lang/StringBuffer;I)I
int android::icu::text::UTF16::findOffsetFromCodePoint(std::shared_ptr<java::lang::StringBuffer> source,int offset32)
{
	
	int size;
	int result;
	int count;
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar0;
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar1;
	
	//    .param p0, "source"    # Ljava/lang/StringBuffer;
	//    .param p1, "offset32"    # I
	size = source->length();
	//    .local v3, "size":I
	result = 0x0;
	//    .local v2, "result":I
	count = offset32;
	//    .local v1, "count":I
	if ( offset32 < 0 ) 
		goto label_cond_a;
	if ( offset32 <= size )
		goto label_cond_10;
label_cond_a:
	cVar0 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(offset32);
	// throw
	throw cVar0;
	// 1775    .line 766
label_cond_10:
label_goto_10:
	if ( result >= size )
		goto label_cond_35;
	if ( count <= 0 )
		goto label_cond_35;
	//    .local v0, "ch":C
	if ( !(android::icu::text::UTF16::isLeadSurrogate(source->charAt(result))) )  
		goto label_cond_30;
	if ( ( result + 0x1) >= size )
		goto label_cond_30;
	if ( !(android::icu::text::UTF16::isTrailSurrogate(source->charAt(( result + 0x1)))) )  
		goto label_cond_30;
	result = ( result + 0x1);
label_cond_30:
	count = ( count + -0x1);
	result = ( result + 0x1);
	goto label_goto_10;
	// 1825    .line 776
	// 1826    .end local v0    # "ch":C
label_cond_35:
	if ( !(count) )  
		goto label_cond_3d;
	cVar1 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(offset32);
	// throw
	throw cVar1;
	// 1837    .line 779
label_cond_3d:
	return result;

}
// .method public static findOffsetFromCodePoint([CIII)I
int android::icu::text::UTF16::findOffsetFromCodePoint(std::shared_ptr<char[]> source,int start,int limit,int offset32)
{
	
	int result;
	int count;
	std::shared_ptr<java::lang::ArrayIndexOutOfBoundsException> cVar0;
	std::shared_ptr<java::lang::ArrayIndexOutOfBoundsException> cVar1;
	
	//    .param p0, "source"    # [C
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	//    .param p3, "offset32"    # I
	result = start;
	//    .local v2, "result":I
	count = offset32;
	//    .local v1, "count":I
	if ( offset32 <= (limit - start) )
		goto label_cond_c;
	cVar0 = std::make_shared<java::lang::ArrayIndexOutOfBoundsException>(offset32);
	// throw
	throw cVar0;
	// 1869    .line 799
label_cond_c:
label_goto_c:
	if ( result >= limit )
		goto label_cond_2d;
	if ( count <= 0 )
		goto label_cond_2d;
	//    .local v0, "ch":C
	if ( !(android::icu::text::UTF16::isLeadSurrogate(source[result])) )  
		goto label_cond_28;
	if ( ( result + 0x1) >= limit )
		goto label_cond_28;
	if ( !(android::icu::text::UTF16::isTrailSurrogate(source[( result + 0x1)])) )  
		goto label_cond_28;
	result = ( result + 0x1);
label_cond_28:
	count = ( count + -0x1);
	result = ( result + 0x1);
	goto label_goto_c;
	// 1915    .line 809
	// 1916    .end local v0    # "ch":C
label_cond_2d:
	if ( !(count) )  
		goto label_cond_35;
	cVar1 = std::make_shared<java::lang::ArrayIndexOutOfBoundsException>(offset32);
	// throw
	throw cVar1;
	// 1927    .line 812
label_cond_35:
	return (result - start);

}
// .method public static getCharCount(I)I
int android::icu::text::UTF16::getCharCount(int char32)
{
	
	//    .param p0, "char32"    # I
	if ( char32 >= 0x10000 )
		goto label_cond_6;
	return 0x1;
	// 1949    .line 454
label_cond_6:
	return 0x2;

}
// .method public static getLeadSurrogate(I)C
char android::icu::text::UTF16::getLeadSurrogate(int char32)
{
	
	//    .param p0, "char32"    # I
	if ( char32 <  0x10000 )
		goto label_cond_c;
	return (char)((_shri(char32,0xa) +  0xd7c0));
	// 1977    .line 613
label_cond_c:
	return 0x0;

}
// .method public static getSingleCodePoint(Ljava/lang/CharSequence;)I
int android::icu::text::UTF16::getSingleCodePoint(std::shared_ptr<java::lang::CharSequence> s)
{
	
	int cVar0;
	int cVar1;
	int cp;
	
	//    .param p0, "s"    # Ljava/lang/CharSequence;
	cVar0 = 0x0;
	cVar1 = -0x1;
	if ( !(s) )  
		goto label_cond_a;
	if ( s->length() )     
		goto label_cond_b;
label_cond_a:
	return cVar1;
	// 2006    .line 2531
label_cond_b:
	if ( s->length() != 0x1 )
		goto label_cond_17;
	return s->charAt(cVar0);
	// 2023    .line 2533
label_cond_17:
	if ( s->length() <= 0x2 )
		goto label_cond_1f;
	return cVar1;
	// 2036    .line 2538
label_cond_1f:
	cp = java::lang::Character::codePointAt(s, cVar0);
	//    .local v0, "cp":I
	if ( cp <= 0xffff )
		goto label_cond_29;
	return cp;
	// 2051    .line 2542
label_cond_29:
	return cVar1;

}
// .method public static getTrailSurrogate(I)C
char android::icu::text::UTF16::getTrailSurrogate(int char32)
{
	
	//    .param p0, "char32"    # I
	if ( char32 <  0x10000 )
		goto label_cond_c;
	return (char)((( char32 & 0x3ff) +  0xdc00));
	// 2077    .line 629
label_cond_c:
	return (char)(char32);

}
// .method public static hasMoreCodePointsThan(Ljava/lang/String;I)Z
bool android::icu::text::UTF16::hasMoreCodePointsThan(std::shared_ptr<java::lang::String> source,int number)
{
	
	bool cVar0;
	bool cVar1;
	int length;
	int maxsupplementary;
	int start;
	int number;
	
	//    .param p0, "source"    # Ljava/lang/String;
	//    .param p1, "number"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( number >= 0 )
		goto label_cond_5;
	return cVar0;
	// 2100    .line 2026
label_cond_5:
	if ( source )     
		goto label_cond_8;
	return cVar1;
	// 2107    .line 2029
label_cond_8:
	length = source->length();
	//    .local v0, "length":I
	if ( _shri(( length + 0x1),0x1) <= number )
		goto label_cond_13;
	return cVar0;
	// 2124    .line 2039
label_cond_13:
	maxsupplementary = (length - number);
	//    .local v1, "maxsupplementary":I
	if ( maxsupplementary > 0 ) 
		goto label_cond_18;
	return cVar1;
	// 2135    .line 2049
label_cond_18:
	//    .local v2, "start":I
	start = 0x0;
	//    .end local v2    # "start":I
	//    .local v3, "start":I
label_goto_1a:
	if ( length )     
		goto label_cond_1d;
	return cVar1;
	// 2151    .line 2054
label_cond_1d:
	if ( number )     
		goto label_cond_20;
	return cVar0;
	// 2158    .line 2057
label_cond_20:
	start = ( start + 0x1);
	//    .end local v3    # "start":I
	//    .restart local v2    # "start":I
	if ( !(android::icu::text::UTF16::isLeadSurrogate(source->charAt(start))) )  
		goto label_cond_3f;
	if ( start == length )
		goto label_cond_3f;
	if ( !(android::icu::text::UTF16::isTrailSurrogate(source->charAt(start))) )  
		goto label_cond_3f;
	maxsupplementary = ( maxsupplementary + -0x1);
	if ( maxsupplementary > 0 ) 
		goto label_cond_3f;
	return cVar1;
	// 2199    .line 2065
label_cond_3f:
	number = ( number + -0x1);
	start = start;
	//    .end local v2    # "start":I
	//    .restart local v3    # "start":I
	goto label_goto_1a;

}
// .method public static hasMoreCodePointsThan(Ljava/lang/StringBuffer;I)Z
bool android::icu::text::UTF16::hasMoreCodePointsThan(std::shared_ptr<java::lang::StringBuffer> source,int number)
{
	
	bool cVar0;
	bool cVar1;
	int length;
	int maxsupplementary;
	int start;
	int number;
	
	//    .param p0, "source"    # Ljava/lang/StringBuffer;
	//    .param p1, "number"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( number >= 0 )
		goto label_cond_5;
	return cVar0;
	// 2226    .line 2154
label_cond_5:
	if ( source )     
		goto label_cond_8;
	return cVar1;
	// 2233    .line 2157
label_cond_8:
	length = source->length();
	//    .local v0, "length":I
	if ( _shri(( length + 0x1),0x1) <= number )
		goto label_cond_13;
	return cVar0;
	// 2250    .line 2167
label_cond_13:
	maxsupplementary = (length - number);
	//    .local v1, "maxsupplementary":I
	if ( maxsupplementary > 0 ) 
		goto label_cond_18;
	return cVar1;
	// 2261    .line 2177
label_cond_18:
	//    .local v2, "start":I
	start = 0x0;
	//    .end local v2    # "start":I
	//    .local v3, "start":I
label_goto_1a:
	if ( length )     
		goto label_cond_1d;
	return cVar1;
	// 2277    .line 2182
label_cond_1d:
	if ( number )     
		goto label_cond_20;
	return cVar0;
	// 2284    .line 2185
label_cond_20:
	start = ( start + 0x1);
	//    .end local v3    # "start":I
	//    .restart local v2    # "start":I
	if ( !(android::icu::text::UTF16::isLeadSurrogate(source->charAt(start))) )  
		goto label_cond_3f;
	if ( start == length )
		goto label_cond_3f;
	if ( !(android::icu::text::UTF16::isTrailSurrogate(source->charAt(start))) )  
		goto label_cond_3f;
	maxsupplementary = ( maxsupplementary + -0x1);
	if ( maxsupplementary > 0 ) 
		goto label_cond_3f;
	return cVar1;
	// 2325    .line 2193
label_cond_3f:
	number = ( number + -0x1);
	start = start;
	//    .end local v2    # "start":I
	//    .restart local v3    # "start":I
	goto label_goto_1a;

}
// .method public static hasMoreCodePointsThan([CIII)Z
bool android::icu::text::UTF16::hasMoreCodePointsThan(std::shared_ptr<char[]> source,int start,int limit,int number)
{
	
	bool cVar0;
	bool cVar1;
	int length;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar2;
	int maxsupplementary;
	int start;
	int number;
	
	//    .param p0, "source"    # [C
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	//    .param p3, "number"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	length = (limit - start);
	//    .local v0, "length":I
	if ( length < 0 ) 
		goto label_cond_8;
	if ( start >= 0 )
		goto label_cond_11;
label_cond_8:
	cVar2 = std::make_shared<java::lang::IndexOutOfBoundsException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Start and limit indexes should be non-negative and start <= limit")));
	// throw
	throw cVar2;
	// 2369    .line 2088
label_cond_11:
	if ( limit < 0 ) 
		goto label_cond_8;
	if ( number >= 0 )
		goto label_cond_16;
	return cVar0;
	// 2379    .line 2095
label_cond_16:
	if ( source )     
		goto label_cond_19;
	return cVar1;
	// 2386    .line 2102
label_cond_19:
	if ( _shri(( length + 0x1),0x1) <= number )
		goto label_cond_20;
	return cVar0;
	// 2397    .line 2107
label_cond_20:
	maxsupplementary = (length - number);
	//    .local v1, "maxsupplementary":I
	if ( maxsupplementary > 0 ) 
		goto label_cond_49;
	return cVar1;
	// 2408    .line 2132
label_cond_25:
	number = ( number + -0x1);
	start = start;
	//    .end local p1    # "start":I
	//    .local v2, "start":I
label_goto_28:
	if ( length )     
		goto label_cond_2b;
	return cVar1;
	// 2423    .line 2121
label_cond_2b:
	if ( number )     
		goto label_cond_2e;
	return cVar0;
	// 2430    .line 2124
label_cond_2e:
	start = ( start + 0x1);
	//    .end local v2    # "start":I
	//    .restart local p1    # "start":I
	if ( !(android::icu::text::UTF16::isLeadSurrogate(source[start])) )  
		goto label_cond_25;
	if ( start == limit )
		goto label_cond_25;
	if ( !(android::icu::text::UTF16::isTrailSurrogate(source[start])) )  
		goto label_cond_25;
	maxsupplementary = ( maxsupplementary + -0x1);
	if ( maxsupplementary > 0 ) 
		goto label_cond_25;
	return cVar1;
label_cond_49:
	start = start;
	//    .end local p1    # "start":I
	//    .restart local v2    # "start":I
	goto label_goto_28;

}
// .method public static indexOf(Ljava/lang/String;I)I
int android::icu::text::UTF16::indexOf(std::shared_ptr<java::lang::String> source,int char32)
{
	
	int cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	int result;
	
	//    .param p0, "source"    # Ljava/lang/String;
	//    .param p1, "char32"    # I
	cVar0 = 0x10000;
	if ( char32 < 0 ) 
		goto label_cond_9;
	if ( char32 <= 0x10ffff )
		goto label_cond_12;
label_cond_9:
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Argument char32 is not a valid codepoint")));
	// throw
	throw cVar1;
	// 2500    .line 1481
label_cond_12:
	if ( char32 <  0xd800 )
		goto label_cond_1e;
	if ( char32 <= 0xdfff )
		goto label_cond_24;
	if ( char32 >= cVar0 )
		goto label_cond_24;
label_cond_1e:
	return source->indexOf((char)(char32));
	// 2523    .line 1486
label_cond_24:
	if ( char32 >= cVar0 )
		goto label_cond_65;
	result = source->indexOf((char)(char32));
	//    .local v1, "result":I
	if ( result < 0 ) 
		goto label_cond_64;
	if ( !(android::icu::text::UTF16::isLeadSurrogate((char)(char32))) )  
		goto label_cond_4f;
	if ( result >= ( source->length() + -0x1) )
		goto label_cond_4f;
	if ( !(android::icu::text::UTF16::isTrailSurrogate(source->charAt(( result + 0x1)))) )  
		goto label_cond_4f;
	return android::icu::text::UTF16::indexOf(source, char32, ( result + 0x1));
	// 2578    .line 1494
label_cond_4f:
	if ( result <= 0 )
		goto label_cond_64;
	if ( !(android::icu::text::UTF16::isLeadSurrogate(source->charAt(( result + -0x1)))) )  
		goto label_cond_64;
	return android::icu::text::UTF16::indexOf(source, char32, ( result + 0x1));
	// 2603    .line 1498
label_cond_64:
	return result;
	// 2607    .line 1501
	// 2608    .end local v1    # "result":I
label_cond_65:
	//    .local v0, "char32str":Ljava/lang/String;
	return source->indexOf(android::icu::text::UTF16::toString(char32));

}
// .method public static indexOf(Ljava/lang/String;II)I
int android::icu::text::UTF16::indexOf(std::shared_ptr<java::lang::String> source,int char32,int fromIndex)
{
	
	int cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	int result;
	
	//    .param p0, "source"    # Ljava/lang/String;
	//    .param p1, "char32"    # I
	//    .param p2, "fromIndex"    # I
	cVar0 = 0x10000;
	if ( char32 < 0 ) 
		goto label_cond_9;
	if ( char32 <= 0x10ffff )
		goto label_cond_12;
label_cond_9:
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Argument char32 is not a valid codepoint")));
	// throw
	throw cVar1;
	// 2649    .line 1580
label_cond_12:
	if ( char32 <  0xd800 )
		goto label_cond_1e;
	if ( char32 <= 0xdfff )
		goto label_cond_24;
	if ( char32 >= cVar0 )
		goto label_cond_24;
label_cond_1e:
	return source->indexOf((char)(char32), fromIndex);
	// 2672    .line 1585
label_cond_24:
	if ( char32 >= cVar0 )
		goto label_cond_65;
	result = source->indexOf((char)(char32), fromIndex);
	//    .local v1, "result":I
	if ( result < 0 ) 
		goto label_cond_64;
	if ( !(android::icu::text::UTF16::isLeadSurrogate((char)(char32))) )  
		goto label_cond_4f;
	if ( result >= ( source->length() + -0x1) )
		goto label_cond_4f;
	if ( !(android::icu::text::UTF16::isTrailSurrogate(source->charAt(( result + 0x1)))) )  
		goto label_cond_4f;
	return android::icu::text::UTF16::indexOf(source, char32, ( result + 0x1));
	// 2727    .line 1593
label_cond_4f:
	if ( result <= 0 )
		goto label_cond_64;
	if ( !(android::icu::text::UTF16::isLeadSurrogate(source->charAt(( result + -0x1)))) )  
		goto label_cond_64;
	return android::icu::text::UTF16::indexOf(source, char32, ( result + 0x1));
	// 2752    .line 1597
label_cond_64:
	return result;
	// 2756    .line 1600
	// 2757    .end local v1    # "result":I
label_cond_65:
	//    .local v0, "char32str":Ljava/lang/String;
	return source->indexOf(android::icu::text::UTF16::toString(char32), fromIndex);

}
// .method public static indexOf(Ljava/lang/String;Ljava/lang/String;)I
int android::icu::text::UTF16::indexOf(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::lang::String> str)
{
	
	int cVar0;
	int strLength;
	int result;
	int resultEnd;
	
	//    .param p0, "source"    # Ljava/lang/String;
	//    .param p1, "str"    # Ljava/lang/String;
	cVar0 = 0x0;
	strLength = str->length();
	//    .local v2, "strLength":I
	if ( android::icu::text::UTF16::isTrailSurrogate(str->charAt(cVar0)) )     
		goto label_cond_22;
	if ( !(( android::icu::text::UTF16::isLeadSurrogate(str->charAt(( strLength + -0x1))) ^ 0x1)) )  
		goto label_cond_22;
	return source->indexOf(str);
	// 2818    .line 1536
label_cond_22:
	result = source->indexOf(str);
	//    .local v0, "result":I
	resultEnd = (result + strLength);
	//    .local v1, "resultEnd":I
	if ( result < 0 ) 
		goto label_cond_70;
	if ( !(android::icu::text::UTF16::isLeadSurrogate(str->charAt(( strLength + -0x1)))) )  
		goto label_cond_51;
	if ( result >= ( source->length() + -0x1) )
		goto label_cond_51;
	if ( !(android::icu::text::UTF16::isTrailSurrogate(source->charAt(( resultEnd + 0x1)))) )  
		goto label_cond_51;
	return android::icu::text::UTF16::indexOf(source, str, ( resultEnd + 0x1));
	// 2876    .line 1545
label_cond_51:
	if ( !(android::icu::text::UTF16::isTrailSurrogate(str->charAt(cVar0))) )  
		goto label_cond_70;
	if ( result <= 0 )
		goto label_cond_70;
	if ( !(android::icu::text::UTF16::isLeadSurrogate(source->charAt(( result + -0x1)))) )  
		goto label_cond_70;
	return android::icu::text::UTF16::indexOf(source, str, ( resultEnd + 0x1));
	// 2913    .line 1550
label_cond_70:
	return result;

}
// .method public static indexOf(Ljava/lang/String;Ljava/lang/String;I)I
int android::icu::text::UTF16::indexOf(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::lang::String> str,int fromIndex)
{
	
	int cVar0;
	int strLength;
	int result;
	int resultEnd;
	
	//    .param p0, "source"    # Ljava/lang/String;
	//    .param p1, "str"    # Ljava/lang/String;
	//    .param p2, "fromIndex"    # I
	cVar0 = 0x0;
	strLength = str->length();
	//    .local v2, "strLength":I
	if ( android::icu::text::UTF16::isTrailSurrogate(str->charAt(cVar0)) )     
		goto label_cond_22;
	if ( !(( android::icu::text::UTF16::isLeadSurrogate(str->charAt(( strLength + -0x1))) ^ 0x1)) )  
		goto label_cond_22;
	return source->indexOf(str, fromIndex);
	// 2965    .line 1637
label_cond_22:
	result = source->indexOf(str, fromIndex);
	//    .local v0, "result":I
	resultEnd = (result + strLength);
	//    .local v1, "resultEnd":I
	if ( result < 0 ) 
		goto label_cond_6e;
	if ( !(android::icu::text::UTF16::isLeadSurrogate(str->charAt(( strLength + -0x1)))) )  
		goto label_cond_4f;
	if ( result >= ( source->length() + -0x1) )
		goto label_cond_4f;
	if ( !(android::icu::text::UTF16::isTrailSurrogate(source->charAt(resultEnd))) )  
		goto label_cond_4f;
	return android::icu::text::UTF16::indexOf(source, str, ( resultEnd + 0x1));
	// 3021    .line 1646
label_cond_4f:
	if ( !(android::icu::text::UTF16::isTrailSurrogate(str->charAt(cVar0))) )  
		goto label_cond_6e;
	if ( result <= 0 )
		goto label_cond_6e;
	if ( !(android::icu::text::UTF16::isLeadSurrogate(source->charAt(( result + -0x1)))) )  
		goto label_cond_6e;
	return android::icu::text::UTF16::indexOf(source, str, ( resultEnd + 0x1));
	// 3058    .line 1651
label_cond_6e:
	return result;

}
// .method public static insert([CIII)I
int android::icu::text::UTF16::insert(std::shared_ptr<char[]> target,int limit,int cVar1,int char32)
{
	
	int cVar0;
	std::shared_ptr<java::lang::String> str;
	int cVar1;
	int size;
	std::shared_ptr<java::lang::ArrayIndexOutOfBoundsException> cVar2;
	
	//    .param p0, "target"    # [C
	//    .param p1, "limit"    # I
	//    .param p2, "offset16"    # I
	//    .param p3, "char32"    # I
	cVar0 = 0x0;
	str = android::icu::text::UTF16::valueOf(char32);
	//    .local v1, "str":Ljava/lang/String;
	if ( cVar1 == limit )
		goto label_cond_10;
	if ( android::icu::text::UTF16::bounds(target, cVar0, limit, cVar1) != 0x5 )
		goto label_cond_10;
	cVar1 = ( cVar1 + 0x1);
label_cond_10:
	size = str->length();
	//    .local v0, "size":I
	if ( (limit + size) <= target->size() )
		goto label_cond_21;
	cVar2 = std::make_shared<java::lang::ArrayIndexOutOfBoundsException>((cVar1 + size));
	// throw
	throw cVar2;
	// 3116    .line 1396
label_cond_21:
	java::lang::System::arraycopy(target, cVar1, target, (cVar1 + size), (limit - cVar1));
	target[cVar1] = str->charAt(cVar0);
	if ( size != 0x2 )
		goto label_cond_3a;
	target[( cVar1 + 0x1)] = str->charAt(0x1);
label_cond_3a:
	return (limit + size);

}
// .method public static insert(Ljava/lang/StringBuffer;II)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::UTF16::insert(std::shared_ptr<java::lang::StringBuffer> target,int cVar0,int char32)
{
	
	int cVar0;
	
	//    .param p0, "target"    # Ljava/lang/StringBuffer;
	//    .param p1, "offset16"    # I
	//    .param p2, "char32"    # I
	//    .local v0, "str":Ljava/lang/String;
	if ( cVar0 == target->length() )
		goto label_cond_13;
	if ( android::icu::text::UTF16::bounds(target, cVar0) != 0x5 )
		goto label_cond_13;
	cVar0 = ( cVar0 + 0x1);
label_cond_13:
	target->insert(cVar0, android::icu::text::UTF16::valueOf(char32));
	return target;

}
// .method public static isLeadSurrogate(C)Z
bool android::icu::text::UTF16::isLeadSurrogate(char char16)
{
	
	bool cVar0;
	
	//    .param p0, "char16"    # C
	if ( ( char16 & -0x400) != 0xd800 )
		goto label_cond_9;
	cVar0 = 0x1;
label_goto_8:
	return cVar0;
label_cond_9:
	cVar0 = 0x0;
	goto label_goto_8;

}
// .method public static isSurrogate(C)Z
bool android::icu::text::UTF16::isSurrogate(char char16)
{
	
	bool cVar0;
	
	//    .param p0, "char16"    # C
	if ( ( char16 & -0x800) != 0xd800 )
		goto label_cond_9;
	cVar0 = 0x1;
label_goto_8:
	return cVar0;
label_cond_9:
	cVar0 = 0x0;
	goto label_goto_8;

}
// .method public static isTrailSurrogate(C)Z
bool android::icu::text::UTF16::isTrailSurrogate(char char16)
{
	
	bool cVar0;
	
	//    .param p0, "char16"    # C
	if ( ( char16 & -0x400) != 0xdc00 )
		goto label_cond_9;
	cVar0 = 0x1;
label_goto_8:
	return cVar0;
label_cond_9:
	cVar0 = 0x0;
	goto label_goto_8;

}
// .method public static lastIndexOf(Ljava/lang/String;I)I
int android::icu::text::UTF16::lastIndexOf(std::shared_ptr<java::lang::String> source,int char32)
{
	
	int cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	int result;
	
	//    .param p0, "source"    # Ljava/lang/String;
	//    .param p1, "char32"    # I
	cVar0 = 0x10000;
	if ( char32 < 0 ) 
		goto label_cond_9;
	if ( char32 <= 0x10ffff )
		goto label_cond_12;
label_cond_9:
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Argument char32 is not a valid codepoint")));
	// throw
	throw cVar1;
	// 3287    .line 1680
label_cond_12:
	if ( char32 <  0xd800 )
		goto label_cond_1e;
	if ( char32 <= 0xdfff )
		goto label_cond_24;
	if ( char32 >= cVar0 )
		goto label_cond_24;
label_cond_1e:
	return source->lastIndexOf((char)(char32));
	// 3310    .line 1685
label_cond_24:
	if ( char32 >= cVar0 )
		goto label_cond_65;
	result = source->lastIndexOf((char)(char32));
	//    .local v1, "result":I
	if ( result < 0 ) 
		goto label_cond_64;
	if ( !(android::icu::text::UTF16::isLeadSurrogate((char)(char32))) )  
		goto label_cond_4f;
	if ( result >= ( source->length() + -0x1) )
		goto label_cond_4f;
	if ( !(android::icu::text::UTF16::isTrailSurrogate(source->charAt(( result + 0x1)))) )  
		goto label_cond_4f;
	return android::icu::text::UTF16::lastIndexOf(source, char32, ( result + -0x1));
	// 3365    .line 1693
label_cond_4f:
	if ( result <= 0 )
		goto label_cond_64;
	if ( !(android::icu::text::UTF16::isLeadSurrogate(source->charAt(( result + -0x1)))) )  
		goto label_cond_64;
	return android::icu::text::UTF16::lastIndexOf(source, char32, ( result + -0x1));
	// 3390    .line 1697
label_cond_64:
	return result;
	// 3394    .line 1700
	// 3395    .end local v1    # "result":I
label_cond_65:
	//    .local v0, "char32str":Ljava/lang/String;
	return source->lastIndexOf(android::icu::text::UTF16::toString(char32));

}
// .method public static lastIndexOf(Ljava/lang/String;II)I
int android::icu::text::UTF16::lastIndexOf(std::shared_ptr<java::lang::String> source,int char32,int fromIndex)
{
	
	int cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	int result;
	
	//    .param p0, "source"    # Ljava/lang/String;
	//    .param p1, "char32"    # I
	//    .param p2, "fromIndex"    # I
	cVar0 = 0x10000;
	if ( char32 < 0 ) 
		goto label_cond_9;
	if ( char32 <= 0x10ffff )
		goto label_cond_12;
label_cond_9:
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Argument char32 is not a valid codepoint")));
	// throw
	throw cVar1;
	// 3436    .line 1789
label_cond_12:
	if ( char32 <  0xd800 )
		goto label_cond_1e;
	if ( char32 <= 0xdfff )
		goto label_cond_24;
	if ( char32 >= cVar0 )
		goto label_cond_24;
label_cond_1e:
	return source->lastIndexOf((char)(char32), fromIndex);
	// 3459    .line 1794
label_cond_24:
	if ( char32 >= cVar0 )
		goto label_cond_65;
	result = source->lastIndexOf((char)(char32), fromIndex);
	//    .local v1, "result":I
	if ( result < 0 ) 
		goto label_cond_64;
	if ( !(android::icu::text::UTF16::isLeadSurrogate((char)(char32))) )  
		goto label_cond_4f;
	if ( result >= ( source->length() + -0x1) )
		goto label_cond_4f;
	if ( !(android::icu::text::UTF16::isTrailSurrogate(source->charAt(( result + 0x1)))) )  
		goto label_cond_4f;
	return android::icu::text::UTF16::lastIndexOf(source, char32, ( result + -0x1));
	// 3514    .line 1802
label_cond_4f:
	if ( result <= 0 )
		goto label_cond_64;
	if ( !(android::icu::text::UTF16::isLeadSurrogate(source->charAt(( result + -0x1)))) )  
		goto label_cond_64;
	return android::icu::text::UTF16::lastIndexOf(source, char32, ( result + -0x1));
	// 3539    .line 1806
label_cond_64:
	return result;
	// 3543    .line 1809
	// 3544    .end local v1    # "result":I
label_cond_65:
	//    .local v0, "char32str":Ljava/lang/String;
	return source->lastIndexOf(android::icu::text::UTF16::toString(char32), fromIndex);

}
// .method public static lastIndexOf(Ljava/lang/String;Ljava/lang/String;)I
int android::icu::text::UTF16::lastIndexOf(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::lang::String> str)
{
	
	int cVar0;
	int strLength;
	int result;
	
	//    .param p0, "source"    # Ljava/lang/String;
	//    .param p1, "str"    # Ljava/lang/String;
	cVar0 = 0x0;
	strLength = str->length();
	//    .local v1, "strLength":I
	if ( android::icu::text::UTF16::isTrailSurrogate(str->charAt(cVar0)) )     
		goto label_cond_22;
	if ( !(( android::icu::text::UTF16::isLeadSurrogate(str->charAt(( strLength + -0x1))) ^ 0x1)) )  
		goto label_cond_22;
	return source->lastIndexOf(str);
	// 3605    .line 1735
label_cond_22:
	result = source->lastIndexOf(str);
	//    .local v0, "result":I
	if ( result < 0 ) 
		goto label_cond_70;
	if ( !(android::icu::text::UTF16::isLeadSurrogate(str->charAt(( strLength + -0x1)))) )  
		goto label_cond_51;
	if ( result >= ( source->length() + -0x1) )
		goto label_cond_51;
	if ( !(android::icu::text::UTF16::isTrailSurrogate(source->charAt(( (result + strLength) + 0x1)))) )  
		goto label_cond_51;
	return android::icu::text::UTF16::lastIndexOf(source, str, ( result + -0x1));
	// 3661    .line 1743
label_cond_51:
	if ( !(android::icu::text::UTF16::isTrailSurrogate(str->charAt(cVar0))) )  
		goto label_cond_70;
	if ( result <= 0 )
		goto label_cond_70;
	if ( !(android::icu::text::UTF16::isLeadSurrogate(source->charAt(( result + -0x1)))) )  
		goto label_cond_70;
	return android::icu::text::UTF16::lastIndexOf(source, str, ( result + -0x1));
	// 3698    .line 1748
label_cond_70:
	return result;

}
// .method public static lastIndexOf(Ljava/lang/String;Ljava/lang/String;I)I
int android::icu::text::UTF16::lastIndexOf(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::lang::String> str,int fromIndex)
{
	
	int cVar0;
	int strLength;
	int result;
	
	//    .param p0, "source"    # Ljava/lang/String;
	//    .param p1, "str"    # Ljava/lang/String;
	//    .param p2, "fromIndex"    # I
	cVar0 = 0x0;
	strLength = str->length();
	//    .local v1, "strLength":I
	if ( android::icu::text::UTF16::isTrailSurrogate(str->charAt(cVar0)) )     
		goto label_cond_22;
	if ( !(( android::icu::text::UTF16::isLeadSurrogate(str->charAt(( strLength + -0x1))) ^ 0x1)) )  
		goto label_cond_22;
	return source->lastIndexOf(str, fromIndex);
	// 3750    .line 1856
label_cond_22:
	result = source->lastIndexOf(str, fromIndex);
	//    .local v0, "result":I
	if ( result < 0 ) 
		goto label_cond_6e;
	if ( !(android::icu::text::UTF16::isLeadSurrogate(str->charAt(( strLength + -0x1)))) )  
		goto label_cond_4f;
	if ( result >= ( source->length() + -0x1) )
		goto label_cond_4f;
	if ( !(android::icu::text::UTF16::isTrailSurrogate(source->charAt((result + strLength)))) )  
		goto label_cond_4f;
	return android::icu::text::UTF16::lastIndexOf(source, str, ( result + -0x1));
	// 3804    .line 1864
label_cond_4f:
	if ( !(android::icu::text::UTF16::isTrailSurrogate(str->charAt(cVar0))) )  
		goto label_cond_6e;
	if ( result <= 0 )
		goto label_cond_6e;
	if ( !(android::icu::text::UTF16::isLeadSurrogate(source->charAt(( result + -0x1)))) )  
		goto label_cond_6e;
	return android::icu::text::UTF16::lastIndexOf(source, str, ( result + -0x1));
	// 3841    .line 1869
label_cond_6e:
	return result;

}
// .method public static moveCodePointOffset(Ljava/lang/String;II)I
int android::icu::text::UTF16::moveCodePointOffset(std::shared_ptr<java::lang::String> source,int offset16,int shift32)
{
	
	int result;
	int size;
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar0;
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar1;
	int count;
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar3;
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar2;
	
	//    .param p0, "source"    # Ljava/lang/String;
	//    .param p1, "offset16"    # I
	//    .param p2, "shift32"    # I
	result = offset16;
	//    .local v2, "result":I
	size = source->length();
	//    .local v3, "size":I
	if ( offset16 < 0 ) 
		goto label_cond_9;
	if ( offset16 <= size )
		goto label_cond_f;
label_cond_9:
	cVar0 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(offset16);
	// throw
	throw cVar0;
	// 3876    .line 1187
label_cond_f:
	if ( shift32 <= 0 )
		goto label_cond_41;
	if ( (shift32 + offset16) <= size )
		goto label_cond_1b;
	cVar1 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(offset16);
	// throw
	throw cVar1;
	// 3892    .line 1191
label_cond_1b:
	count = shift32;
	//    .local v1, "count":I
label_goto_1c:
	if ( result >= size )
		goto label_cond_52;
	if ( count <= 0 )
		goto label_cond_52;
	//    .local v0, "ch":C
	if ( !(android::icu::text::UTF16::isLeadSurrogate(source->charAt(result))) )  
		goto label_cond_3c;
	if ( ( result + 0x1) >= size )
		goto label_cond_3c;
	if ( !(android::icu::text::UTF16::isTrailSurrogate(source->charAt(( result + 0x1)))) )  
		goto label_cond_3c;
	result = ( result + 0x1);
label_cond_3c:
	count = ( count + -0x1);
	result = ( result + 0x1);
	goto label_goto_1c;
	// 3946    .line 1202
	// 3947    .end local v0    # "ch":C
	// 3948    .end local v1    # "count":I
label_cond_41:
	if ( (offset16 + shift32) >= 0 )
		goto label_cond_4b;
	cVar2 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(offset16);
	// throw
	throw cVar2;
	// 3961    .line 1205
label_cond_4b:
	count = (0 - shift32);
	//    .restart local v1    # "count":I
label_goto_4c:
	if ( count <= 0 )
		goto label_cond_52;
	result = ( result + -0x1);
	if ( result >= 0 )
		goto label_cond_5a;
label_cond_52:
	if ( !(count) )  
		goto label_cond_77;
	cVar3 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(shift32);
	// throw
	throw cVar3;
	// 3986    .line 1210
label_cond_5a:
	//    .restart local v0    # "ch":C
	if ( !(android::icu::text::UTF16::isTrailSurrogate(source->charAt(result))) )  
		goto label_cond_74;
	if ( result <= 0 )
		goto label_cond_74;
	if ( !(android::icu::text::UTF16::isLeadSurrogate(source->charAt(( result + -0x1)))) )  
		goto label_cond_74;
	result = ( result + -0x1);
label_cond_74:
	count = ( count + -0x1);
	goto label_goto_4c;
	// 4025    .line 1220
	// 4026    .end local v0    # "ch":C
label_cond_77:
	return result;

}
// .method public static moveCodePointOffset(Ljava/lang/StringBuffer;II)I
int android::icu::text::UTF16::moveCodePointOffset(std::shared_ptr<java::lang::StringBuffer> source,int offset16,int shift32)
{
	
	int result;
	int size;
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar0;
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar1;
	int count;
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar3;
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar2;
	
	//    .param p0, "source"    # Ljava/lang/StringBuffer;
	//    .param p1, "offset16"    # I
	//    .param p2, "shift32"    # I
	result = offset16;
	//    .local v2, "result":I
	size = source->length();
	//    .local v3, "size":I
	if ( offset16 < 0 ) 
		goto label_cond_9;
	if ( offset16 <= size )
		goto label_cond_f;
label_cond_9:
	cVar0 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(offset16);
	// throw
	throw cVar0;
	// 4061    .line 1240
label_cond_f:
	if ( shift32 <= 0 )
		goto label_cond_41;
	if ( (shift32 + offset16) <= size )
		goto label_cond_1b;
	cVar1 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(offset16);
	// throw
	throw cVar1;
	// 4077    .line 1244
label_cond_1b:
	count = shift32;
	//    .local v1, "count":I
label_goto_1c:
	if ( result >= size )
		goto label_cond_52;
	if ( count <= 0 )
		goto label_cond_52;
	//    .local v0, "ch":C
	if ( !(android::icu::text::UTF16::isLeadSurrogate(source->charAt(result))) )  
		goto label_cond_3c;
	if ( ( result + 0x1) >= size )
		goto label_cond_3c;
	if ( !(android::icu::text::UTF16::isTrailSurrogate(source->charAt(( result + 0x1)))) )  
		goto label_cond_3c;
	result = ( result + 0x1);
label_cond_3c:
	count = ( count + -0x1);
	result = ( result + 0x1);
	goto label_goto_1c;
	// 4131    .line 1255
	// 4132    .end local v0    # "ch":C
	// 4133    .end local v1    # "count":I
label_cond_41:
	if ( (offset16 + shift32) >= 0 )
		goto label_cond_4b;
	cVar2 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(offset16);
	// throw
	throw cVar2;
	// 4146    .line 1258
label_cond_4b:
	count = (0 - shift32);
	//    .restart local v1    # "count":I
label_goto_4c:
	if ( count <= 0 )
		goto label_cond_52;
	result = ( result + -0x1);
	if ( result >= 0 )
		goto label_cond_5a;
label_cond_52:
	if ( !(count) )  
		goto label_cond_77;
	cVar3 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(shift32);
	// throw
	throw cVar3;
	// 4171    .line 1263
label_cond_5a:
	//    .restart local v0    # "ch":C
	if ( !(android::icu::text::UTF16::isTrailSurrogate(source->charAt(result))) )  
		goto label_cond_74;
	if ( result <= 0 )
		goto label_cond_74;
	if ( !(android::icu::text::UTF16::isLeadSurrogate(source->charAt(( result + -0x1)))) )  
		goto label_cond_74;
	result = ( result + -0x1);
label_cond_74:
	count = ( count + -0x1);
	goto label_goto_4c;
	// 4210    .line 1273
	// 4211    .end local v0    # "ch":C
label_cond_77:
	return result;

}
// .method public static moveCodePointOffset([CIIII)I
int android::icu::text::UTF16::moveCodePointOffset(std::shared_ptr<char[]> source,int start,int limit,int offset16,int shift32)
{
	
	int size;
	int result;
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar0;
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar1;
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar2;
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar3;
	int count;
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar5;
	std::shared_ptr<java::lang::StringIndexOutOfBoundsException> cVar4;
	
	//    .param p0, "source"    # [C
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	//    .param p3, "offset16"    # I
	//    .param p4, "shift32"    # I
	size = source->size();
	//    .local v3, "size":I
	result = (offset16 + start);
	//    .local v2, "result":I
	if ( start < 0 ) 
		goto label_cond_7;
	if ( limit >= start )
		goto label_cond_d;
label_cond_7:
	cVar0 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(start);
	// throw
	throw cVar0;
	// 4246    .line 1297
label_cond_d:
	if ( limit <= size )
		goto label_cond_15;
	cVar1 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(limit);
	// throw
	throw cVar1;
	// 4257    .line 1300
label_cond_15:
	if ( offset16 < 0 ) 
		goto label_cond_19;
	if ( result <= limit )
		goto label_cond_1f;
label_cond_19:
	cVar2 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(offset16);
	// throw
	throw cVar2;
	// 4271    .line 1303
label_cond_1f:
	if ( shift32 <= 0 )
		goto label_cond_4d;
	if ( (shift32 + result) <= size )
		goto label_cond_2b;
	cVar3 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(result);
	// throw
	throw cVar3;
	// 4287    .line 1307
label_cond_2b:
	count = shift32;
	//    .local v1, "count":I
label_goto_2c:
	if ( result >= limit )
		goto label_cond_5e;
	if ( count <= 0 )
		goto label_cond_5e;
	//    .local v0, "ch":C
	if ( !(android::icu::text::UTF16::isLeadSurrogate(source[result])) )  
		goto label_cond_48;
	if ( ( result + 0x1) >= limit )
		goto label_cond_48;
	if ( !(android::icu::text::UTF16::isTrailSurrogate(source[( result + 0x1)])) )  
		goto label_cond_48;
	result = ( result + 0x1);
label_cond_48:
	count = ( count + -0x1);
	result = ( result + 0x1);
	goto label_goto_2c;
	// 4337    .line 1318
	// 4338    .end local v0    # "ch":C
	// 4339    .end local v1    # "count":I
label_cond_4d:
	if ( (result + shift32) >= start )
		goto label_cond_57;
	cVar4 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(result);
	// throw
	throw cVar4;
	// 4352    .line 1321
label_cond_57:
	count = (0 - shift32);
	//    .restart local v1    # "count":I
label_goto_58:
	if ( count <= 0 )
		goto label_cond_5e;
	result = ( result + -0x1);
	if ( result >= start )
		goto label_cond_66;
label_cond_5e:
	if ( !(count) )  
		goto label_cond_7f;
	cVar5 = std::make_shared<java::lang::StringIndexOutOfBoundsException>(shift32);
	// throw
	throw cVar5;
	// 4377    .line 1326
label_cond_66:
	//    .restart local v0    # "ch":C
	if ( !(android::icu::text::UTF16::isTrailSurrogate(source[result])) )  
		goto label_cond_7c;
	if ( result <= start )
		goto label_cond_7c;
	if ( !(android::icu::text::UTF16::isLeadSurrogate(source[( result + -0x1)])) )  
		goto label_cond_7c;
	result = ( result + -0x1);
label_cond_7c:
	count = ( count + -0x1);
	goto label_goto_58;
	// 4410    .line 1335
	// 4411    .end local v0    # "ch":C
label_cond_7f:
	result = (result -  start);
	return result;

}
// .method public static newString([III)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::UTF16::newString(std::shared_ptr<int[]> codePoints,int offset,int count)
{
	
	int cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared<std::vector<char[]>> chars;
	int w;
	int r;
	int cp;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared<std::vector<char[]>> temp;
	std::shared_ptr<char[]> chars;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::String> cVar3;
	
	//    .param p0, "codePoints"    # [I
	//    .param p1, "offset"    # I
	//    .param p2, "count"    # I
	cVar0 = 0x0;
	if ( count >= 0 )
		goto label_cond_9;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar1;
	// 4438    .line 2211
label_cond_9:
	chars = std::make_shared<std::vector<char[]>>(count);
	//    .local v0, "chars":[C
	w = 0x0;
	//    .local v7, "w":I
	r = offset;
	//    .local v5, "r":I
	//    .local v2, "e":I
label_goto_f:
	if ( r >= (offset + count) )
		goto label_cond_5b;
	cp = codePoints[r];
	//    .local v1, "cp":I
	if ( cp < 0 ) 
		goto label_cond_1a;
	if ( cp <= 0x10ffff )
		goto label_cond_38;
label_cond_1a:
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar2;
	// 4476    .line 2229
label_catch_20:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v3, "ex":Ljava/lang/IndexOutOfBoundsException;
	//    .local v4, "newlen":I
	temp = std::make_shared<std::vector<char[]>>((int)(java::lang::Math::ceil(( ( (double)(codePoints->size()) * (double)(( w + 0x2))) / (double)(( (r - offset) + 0x1))))));
	//    .local v6, "temp":[C
	java::lang::System::arraycopy(chars, cVar0, temp, cVar0, w);
	chars = temp;
	//    .end local v3    # "ex":Ljava/lang/IndexOutOfBoundsException;
	//    .end local v4    # "newlen":I
	//    .end local v6    # "temp":[C
label_cond_38:
	if ( cp >= 0x10000 )
		goto label_cond_44;
	try {
	//label_try_start_3d:
	chars[w] = (char)(cp);
	w = ( w + 0x1);
label_goto_41:
	r = ( r + 0x1);
	goto label_goto_f;
	// 4543    .line 2224
label_cond_44:
	chars[w] = (char)((_shri(cp,0xa) +  0xd7c0));
	chars[( w + 0x1)] = (char)((( cp & 0x3ff) +  0xdc00));
	//label_try_end_58:
	}
	catch (java::lang::IndexOutOfBoundsException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_20;
	}
	//    .catch Ljava/lang/IndexOutOfBoundsException; {:try_start_3d .. :try_end_58} :catch_20
	w = ( w + 0x2);
	goto label_goto_41;
	// 4575    .line 2238
	// 4576    .end local v1    # "cp":I
label_cond_5b:
	cVar3 = std::make_shared<java::lang::String>(chars, cVar0, w);
	return cVar3;

}
// .method public static replace(Ljava/lang/String;II)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::UTF16::replace(std::shared_ptr<java::lang::String> source,int oldChar32,int newChar32)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	int index;
	std::shared_ptr<java::lang::String> newChar32Str;
	std::shared_ptr<java::lang::StringBuffer> result;
	int resultIndex;
	int oldChar32Size;
	int lastEndIndex;
	
	//    .param p0, "source"    # Ljava/lang/String;
	//    .param p1, "oldChar32"    # I
	//    .param p2, "newChar32"    # I
	cVar0 = 0x10ffff;
	cVar1 = -0x1;
	if ( oldChar32 <= 0 )
		goto label_cond_8;
	if ( oldChar32 <= cVar0 )
		goto label_cond_11;
label_cond_8:
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Argument oldChar32 is not a valid codepoint")));
	// throw
	throw cVar2;
	// 4611    .line 1903
label_cond_11:
	if ( newChar32 <= 0 )
		goto label_cond_15;
	if ( newChar32 <= cVar0 )
		goto label_cond_1e;
label_cond_15:
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Argument newChar32 is not a valid codepoint")));
	// throw
	throw cVar3;
	// 4627    .line 1907
label_cond_1e:
	index = android::icu::text::UTF16::indexOf(source, oldChar32);
	//    .local v1, "index":I
	if ( index != cVar1 )
		goto label_cond_25;
	return source;
	// 4640    .line 1911
label_cond_25:
	newChar32Str = android::icu::text::UTF16::toString(newChar32);
	//    .local v4, "newChar32Str":Ljava/lang/String;
	0x1;
	//    .local v5, "oldChar32Size":I
	//    .local v3, "newChar32Size":I
	result = std::make_shared<java::lang::StringBuffer>(source);
	//    .local v6, "result":Ljava/lang/StringBuffer;
	resultIndex = index;
	//    .local v7, "resultIndex":I
	if ( oldChar32 <  0x10000 )
		goto label_cond_39;
	oldChar32Size = 0x2;
label_cond_39:
label_goto_39:
	if ( index == cVar1 )
		goto label_cond_4b;
	//    .local v0, "endResultIndex":I
	result->replace(resultIndex, (resultIndex + oldChar32Size), newChar32Str);
	lastEndIndex = (index + oldChar32Size);
	//    .local v2, "lastEndIndex":I
	index = android::icu::text::UTF16::indexOf(source, oldChar32, lastEndIndex);
	resultIndex = (resultIndex +  ((newChar32Str->length() + index) -  lastEndIndex));
	goto label_goto_39;
	// 4705    .line 1928
	// 4706    .end local v0    # "endResultIndex":I
	// 4707    .end local v2    # "lastEndIndex":I
label_cond_4b:
	return result->toString();

}
// .method public static replace(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::UTF16::replace(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::lang::String> oldStr,std::shared_ptr<java::lang::String> newStr)
{
	
	int cVar0;
	int index;
	int oldStrSize;
	std::shared_ptr<java::lang::StringBuffer> result;
	int resultIndex;
	int lastEndIndex;
	
	//    .param p0, "source"    # Ljava/lang/String;
	//    .param p1, "oldStr"    # Ljava/lang/String;
	//    .param p2, "newStr"    # Ljava/lang/String;
	cVar0 = -0x1;
	index = android::icu::text::UTF16::indexOf(source, oldStr);
	//    .local v1, "index":I
	if ( index != cVar0 )
		goto label_cond_8;
	return source;
	// 4737    .line 1964
label_cond_8:
	oldStrSize = oldStr->length();
	//    .local v4, "oldStrSize":I
	//    .local v3, "newStrSize":I
	result = std::make_shared<java::lang::StringBuffer>(source);
	//    .local v5, "result":Ljava/lang/StringBuffer;
	resultIndex = index;
	//    .local v6, "resultIndex":I
label_goto_16:
	if ( index == cVar0 )
		goto label_cond_28;
	//    .local v0, "endResultIndex":I
	result->replace(resultIndex, (resultIndex + oldStrSize), newStr);
	lastEndIndex = (index + oldStrSize);
	//    .local v2, "lastEndIndex":I
	index = android::icu::text::UTF16::indexOf(source, oldStr, lastEndIndex);
	resultIndex = (resultIndex +  ((newStr->length() + index) -  lastEndIndex));
	goto label_goto_16;
	// 4789    .line 1976
	// 4790    .end local v0    # "endResultIndex":I
	// 4791    .end local v2    # "lastEndIndex":I
label_cond_28:
	return result->toString();

}
// .method public static reverse(Ljava/lang/StringBuffer;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::UTF16::reverse(std::shared_ptr<java::lang::StringBuffer> source)
{
	
	int length;
	std::shared_ptr<java::lang::StringBuffer> result;
	int i;
	char ch;
	char ch2;
	
	//    .param p0, "source"    # Ljava/lang/StringBuffer;
	length = source->length();
	//    .local v4, "length":I
	result = std::make_shared<java::lang::StringBuffer>(length);
	//    .local v5, "result":Ljava/lang/StringBuffer;
	//    .local v2, "i":I
	i = length;
	//    .end local v2    # "i":I
	//    .local v3, "i":I
label_goto_b:
	i = ( i + -0x1);
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	if ( i <= 0 )
		goto label_cond_35;
	ch = source->charAt(i);
	//    .local v0, "ch":C
	if ( !(android::icu::text::UTF16::isTrailSurrogate(ch)) )  
		goto label_cond_31;
	if ( i <= 0 )
		goto label_cond_31;
	ch2 = source->charAt(( i + -0x1));
	//    .local v1, "ch2":C
	if ( !(android::icu::text::UTF16::isLeadSurrogate(ch2)) )  
		goto label_cond_31;
	result->append(ch2);
	result->append(ch);
	//    .end local v1    # "ch2":C
label_goto_2f:
	i = i;
	//    .end local v2    # "i":I
	//    .restart local v3    # "i":I
	goto label_goto_b;
	// 4879    .line 2004
	// 4880    .end local v3    # "i":I
	// 4881    .restart local v2    # "i":I
label_cond_31:
	result->append(ch);
	goto label_goto_2f;
	// 4887    .line 2006
	// 4888    .end local v0    # "ch":C
label_cond_35:
	return result;

}
// .method public static setCharAt([CIII)I
int android::icu::text::UTF16::setCharAt(std::shared_ptr<char[]> target,int limit,int offset16,int char32)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::lang::ArrayIndexOutOfBoundsException> cVar2;
	int count;
	char single;
	std::shared_ptr<java::lang::String> str;
	int strlength;
	int result;
	int offset16;
	
	//    .param p0, "target"    # [C
	//    .param p1, "limit"    # I
	//    .param p2, "offset16"    # I
	//    .param p3, "char32"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( offset16 <  limit )
		goto label_cond_a;
	cVar2 = std::make_shared<java::lang::ArrayIndexOutOfBoundsException>(offset16);
	// throw
	throw cVar2;
	// 4915    .line 1120
label_cond_a:
	count = 0x1;
	//    .local v0, "count":I
	single = target[offset16];
	//    .local v2, "single":C
	if ( !(android::icu::text::UTF16::isSurrogate(single)) )  
		goto label_cond_29;
	if ( !(android::icu::text::UTF16::isLeadSurrogate(single)) )  
		goto label_cond_46;
	if ( target->size() <= ( offset16 + 0x1) )
		goto label_cond_46;
	if ( !(android::icu::text::UTF16::isTrailSurrogate(target[( offset16 + 0x1)])) )  
		goto label_cond_46;
	count = 0x2;
label_cond_29:
label_goto_29:
	str = android::icu::text::UTF16::valueOf(char32);
	//    .local v3, "str":Ljava/lang/String;
	//    .local v1, "result":I
	strlength = str->length();
	//    .local v4, "strlength":I
	target[offset16] = str->charAt(cVar1);
	if ( count != strlength )
		goto label_cond_5c;
	if ( count != 0x2 )
		goto label_cond_45;
	target[( offset16 + 0x1)] = str->charAt(cVar0);
label_cond_45:
label_goto_45:
	return result;
	// 5006    .line 1131
	// 5007    .end local v1    # "result":I
	// 5008    .end local v3    # "str":Ljava/lang/String;
	// 5009    .end local v4    # "strlength":I
label_cond_46:
	if ( !(android::icu::text::UTF16::isTrailSurrogate(single)) )  
		goto label_cond_29;
	if ( offset16 <= 0 )
		goto label_cond_29;
	if ( !(android::icu::text::UTF16::isLeadSurrogate(target[( offset16 + -0x1)])) )  
		goto label_cond_29;
	offset16 = ( offset16 + -0x1);
	count = 0x2;
	goto label_goto_29;
	// 5039    .line 1150
	// 5040    .restart local v1    # "result":I
	// 5041    .restart local v3    # "str":Ljava/lang/String;
	// 5042    .restart local v4    # "strlength":I
label_cond_5c:
	java::lang::System::arraycopy(target, (offset16 + count), target, (offset16 + strlength), (limit - (offset16 + count)));
	if ( count >= strlength )
		goto label_cond_79;
	target[( offset16 + 0x1)] = str->charAt(cVar0);
	result = ( limit + 0x1);
	if ( result >= target->size() )
		goto label_cond_45;
	target[result] = cVar1;
	goto label_goto_45;
	// 5081    .line 1163
label_cond_79:
	result = ( limit + -0x1);
	target[result] = cVar1;
	goto label_goto_45;

}
// .method public static setCharAt(Ljava/lang/StringBuffer;II)V
void android::icu::text::UTF16::setCharAt(std::shared_ptr<java::lang::StringBuffer> target,int offset16,int char32)
{
	
	int count;
	char single;
	int offset16;
	
	//    .param p0, "target"    # Ljava/lang/StringBuffer;
	//    .param p1, "offset16"    # I
	//    .param p2, "char32"    # I
	count = 0x1;
	//    .local v0, "count":I
	single = target->charAt(offset16);
	//    .local v1, "single":C
	if ( !(android::icu::text::UTF16::isSurrogate(single)) )  
		goto label_cond_26;
	if ( !(android::icu::text::UTF16::isLeadSurrogate(single)) )  
		goto label_cond_30;
	if ( target->length() <= ( offset16 + 0x1) )
		goto label_cond_30;
	if ( !(android::icu::text::UTF16::isTrailSurrogate(target->charAt(( offset16 + 0x1)))) )  
		goto label_cond_30;
	count = 0x2;
label_cond_26:
label_goto_26:
	target->replace(offset16, (offset16 + count), android::icu::text::UTF16::valueOf(char32));
	return;
	// 5161    .line 1094
label_cond_30:
	if ( !(android::icu::text::UTF16::isTrailSurrogate(single)) )  
		goto label_cond_26;
	if ( offset16 <= 0 )
		goto label_cond_26;
	if ( !(android::icu::text::UTF16::isLeadSurrogate(target->charAt(( offset16 + -0x1)))) )  
		goto label_cond_26;
	offset16 = ( offset16 + -0x1);
	count = 0x2;
	goto label_goto_26;

}
// .method private static toString(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::UTF16::toString(int ch)
{
	
	std::shared_ptr<java::lang::StringBuilder> result;
	
	//    .param p0, "ch"    # I
	if ( ch >= 0x10000 )
		goto label_cond_a;
	return java::lang::String::valueOf((char)(ch));
	// 5213    .line 2619
label_cond_a:
	result = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "result":Ljava/lang/StringBuilder;
	result->append(android::icu::text::UTF16::getLeadSurrogate(ch));
	result->append(android::icu::text::UTF16::getTrailSurrogate(ch));
	return result->toString();

}
// .method public static valueOf(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::UTF16::valueOf(int char32)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p0, "char32"    # I
	if ( char32 < 0 ) 
		goto label_cond_7;
	if ( char32 <= 0x10ffff )
		goto label_cond_10;
label_cond_7:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal codepoint")));
	// throw
	throw cVar0;
	// 5264    .line 645
label_cond_10:
	return android::icu::text::UTF16::toString(char32);

}
// .method public static valueOf(Ljava/lang/String;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::UTF16::valueOf(std::shared_ptr<java::lang::String> source,int offset16)
{
	
	//    .param p0, "source"    # Ljava/lang/String;
	//    .param p1, "offset16"    # I
	// switch
	{
	auto item = ( android::icu::text::UTF16::bounds(source, offset16) );
	if (item == 2) goto label_pswitch_e;
	if (item == 3) goto label_pswitch_7;
	if (item == 4) goto label_pswitch_7;
	if (item == 5) goto label_pswitch_15;
	}
label_pswitch_7:
	return source->substring(offset16, ( offset16 + 0x1));
	// 5296    .line 663
label_pswitch_e:
	return source->substring(offset16, ( offset16 + 0x2));
	// 5306    .line 665
label_pswitch_15:
	return source->substring(( offset16 + -0x1), ( offset16 + 0x1));
	// 5318    .line 661
	// 5319    :pswitch_data_1e
	// 5320    .packed-switch 0x2
	// 5321        :pswitch_e
	// 5322        :pswitch_7
	// 5323        :pswitch_7
	// 5324        :pswitch_15
	// 5325    .end packed-switch

}
// .method public static valueOf(Ljava/lang/StringBuffer;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::UTF16::valueOf(std::shared_ptr<java::lang::StringBuffer> source,int offset16)
{
	
	//    .param p0, "source"    # Ljava/lang/StringBuffer;
	//    .param p1, "offset16"    # I
	// switch
	{
	auto item = ( android::icu::text::UTF16::bounds(source, offset16) );
	if (item == 2) goto label_pswitch_e;
	if (item == 3) goto label_pswitch_7;
	if (item == 4) goto label_pswitch_7;
	if (item == 5) goto label_pswitch_15;
	}
label_pswitch_7:
	return source->substring(offset16, ( offset16 + 0x1));
	// 5351    .line 686
label_pswitch_e:
	return source->substring(offset16, ( offset16 + 0x2));
	// 5361    .line 688
label_pswitch_15:
	return source->substring(( offset16 + -0x1), ( offset16 + 0x1));
	// 5373    .line 684
	// 5374    :pswitch_data_1e
	// 5375    .packed-switch 0x2
	// 5376        :pswitch_e
	// 5377        :pswitch_7
	// 5378        :pswitch_7
	// 5379        :pswitch_15
	// 5380    .end packed-switch

}
// .method public static valueOf([CIII)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::UTF16::valueOf(std::shared_ptr<char[]> source,int start,int limit,int offset16)
{
	
	int cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	std::shared_ptr<java::lang::String> cVar2;
	std::shared_ptr<java::lang::String> cVar3;
	
	//    .param p0, "source"    # [C
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	//    .param p3, "offset16"    # I
	cVar0 = 0x2;
	// switch
	{
	auto item = ( android::icu::text::UTF16::bounds(source, start, limit, offset16) );
	if (item == 2) goto label_pswitch_11;
	if (item == 3) goto label_pswitch_8;
	if (item == 4) goto label_pswitch_8;
	if (item == 5) goto label_pswitch_19;
	}
label_pswitch_8:
	cVar1 = std::make_shared<java::lang::String>(source, (start + offset16), 0x1);
	return cVar1;
	// 5412    .line 713
label_pswitch_11:
	cVar2 = std::make_shared<java::lang::String>(source, (start + offset16), cVar0);
	return cVar2;
	// 5422    .line 715
label_pswitch_19:
	cVar3 = std::make_shared<java::lang::String>(source, ( (start + offset16) + -0x1), cVar0);
	return cVar3;
	// 5434    .line 711
	// 5435    nop
	// 5437    :pswitch_data_24
	// 5438    .packed-switch 0x2
	// 5439        :pswitch_11
	// 5440        :pswitch_8
	// 5441        :pswitch_8
	// 5442        :pswitch_19
	// 5443    .end packed-switch

}


