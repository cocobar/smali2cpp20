// CPP L:\smali2cpp20\x64\Release\out\java\lang\Character.smali
#include "java2ctype.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character_S_CharacterCache.h"
#include "java.lang.Character_S_UnicodeBlock.h"
#include "java.lang.Character.h"
#include "java.lang.Class.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Locale.h"

static java::lang::Character::BYTES = 0x2;
static java::lang::Character::COMBINING_SPACING_MARK = 0x8t;
static java::lang::Character::CONNECTOR_PUNCTUATION = 0x17t;
static java::lang::Character::CONTROL = 0xft;
static java::lang::Character::CURRENCY_SYMBOL = 0x1at;
static java::lang::Character::DASH_PUNCTUATION = 0x14t;
static java::lang::Character::DECIMAL_DIGIT_NUMBER = 0x9t;
static java::lang::Character::DIRECTIONALITY;
static java::lang::Character::DIRECTIONALITY_ARABIC_NUMBER = 0x6t;
static java::lang::Character::DIRECTIONALITY_BOUNDARY_NEUTRAL = 0x9t;
static java::lang::Character::DIRECTIONALITY_COMMON_NUMBER_SEPARATOR = 0x7t;
static java::lang::Character::DIRECTIONALITY_EUROPEAN_NUMBER = 0x3t;
static java::lang::Character::DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR = 0x4t;
static java::lang::Character::DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR = 0x5t;
static java::lang::Character::DIRECTIONALITY_LEFT_TO_RIGHT = 0x0t;
static java::lang::Character::DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING = 0xet;
static java::lang::Character::DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE = 0xft;
static java::lang::Character::DIRECTIONALITY_NONSPACING_MARK = 0x8t;
static java::lang::Character::DIRECTIONALITY_OTHER_NEUTRALS = 0xdt;
static java::lang::Character::DIRECTIONALITY_PARAGRAPH_SEPARATOR = 0xat;
static java::lang::Character::DIRECTIONALITY_POP_DIRECTIONAL_FORMAT = 0x12t;
static java::lang::Character::DIRECTIONALITY_RIGHT_TO_LEFT = 0x1t;
static java::lang::Character::DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC = 0x2t;
static java::lang::Character::DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING = 0x10t;
static java::lang::Character::DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE = 0x11t;
static java::lang::Character::DIRECTIONALITY_SEGMENT_SEPARATOR = 0xbt;
static java::lang::Character::DIRECTIONALITY_UNDEFINED = -0x1t;
static java::lang::Character::DIRECTIONALITY_WHITESPACE = 0xct;
static java::lang::Character::ENCLOSING_MARK = 0x7t;
static java::lang::Character::END_PUNCTUATION = 0x16t;
static java::lang::Character::ERROR = -0x1;
static java::lang::Character::FINAL_QUOTE_PUNCTUATION = 0x1et;
static java::lang::Character::FORMAT = 0x10t;
static java::lang::Character::INITIAL_QUOTE_PUNCTUATION = 0x1dt;
static java::lang::Character::LETTER_NUMBER = 0xat;
static java::lang::Character::LINE_SEPARATOR = 0xdt;
static java::lang::Character::LOWERCASE_LETTER = 0x2t;
static java::lang::Character::MATH_SYMBOL = 0x19t;
static java::lang::Character::MAX_CODE_POINT = 0x10ffff;
static java::lang::Character::MAX_HIGH_SURROGATE = '\udbff';
static java::lang::Character::MAX_LOW_SURROGATE = '\udfff';
static java::lang::Character::MAX_RADIX = 0x24;
static java::lang::Character::MAX_SURROGATE = '\udfff';
static java::lang::Character::MAX_VALUE = '\uffff';
static java::lang::Character::MIN_CODE_POINT = 0x0;
static java::lang::Character::MIN_HIGH_SURROGATE = '\ud800';
static java::lang::Character::MIN_LOW_SURROGATE = '\udc00';
static java::lang::Character::MIN_RADIX = 0x2;
static java::lang::Character::MIN_SUPPLEMENTARY_CODE_POINT = 0x10000;
static java::lang::Character::MIN_SURROGATE = '\ud800';
static java::lang::Character::MIN_VALUE = '\u0000';
static java::lang::Character::MODIFIER_LETTER = 0x4t;
static java::lang::Character::MODIFIER_SYMBOL = 0x1bt;
static java::lang::Character::NON_SPACING_MARK = 0x6t;
static java::lang::Character::OTHER_LETTER = 0x5t;
static java::lang::Character::OTHER_NUMBER = 0xbt;
static java::lang::Character::OTHER_PUNCTUATION = 0x18t;
static java::lang::Character::OTHER_SYMBOL = 0x1ct;
static java::lang::Character::PARAGRAPH_SEPARATOR = 0xet;
static java::lang::Character::PRIVATE_USE = 0x12t;
static java::lang::Character::SIZE = 0x10;
static java::lang::Character::SPACE_SEPARATOR = 0xct;
static java::lang::Character::START_PUNCTUATION = 0x15t;
static java::lang::Character::SURROGATE = 0x13t;
static java::lang::Character::TITLECASE_LETTER = 0x3t;
static java::lang::Character::TYPE;
static java::lang::Character::UNASSIGNED = 0x0t;
static java::lang::Character::UPPERCASE_LETTER = 0x1t;
static java::lang::Character::serialVersionUID = 0x348b47d96b1a2678L;
// .method static constructor <clinit>()V
void java::lang::Character::static_cinit()
{
	
	std::shared<std::vector<unsigned char[]>> cVar0;
	
	java::lang::Character::TYPE = char[]()->getComponentType();
	cVar0 = std::make_shared<std::vector<unsigned char[]>>(0x13);
	?;
	java::lang::Character::DIRECTIONALITY = cVar0;
	return;
	// 211    .line 580
	// 212    :array_12
	// 213    .array-data 1
	// 214        0x0t
	// 215        0x1t
	// 216        0x3t
	// 217        0x4t
	// 218        0x5t
	// 219        0x6t
	// 220        0x7t
	// 221        0xat
	// 222        0xbt
	// 223        0xct
	// 224        0xdt
	// 225        0xet
	// 226        0xft
	// 227        0x2t
	// 228        0x10t
	// 229        0x11t
	// 230        0x12t
	// 231        0x8t
	// 232        0x9t
	// 233    .end array-data

}
// .method public constructor <init>(C)V
java::lang::Character::Character(char value)
{
	
	//    .param p1, "value"    # C
	// 242    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->value = value;
	return;

}
// .method public static charCount(I)I
int java::lang::Character::charCount(int codePoint)
{
	
	int cVar0;
	
	//    .param p0, "codePoint"    # I
	if ( codePoint <  0x10000 )
		goto label_cond_6;
	cVar0 = 0x2;
label_goto_5:
	return cVar0;
label_cond_6:
	cVar0 = 0x1;
	goto label_goto_5;

}
// .method public static codePointAt(Ljava/lang/CharSequence;I)I
int java::lang::Character::codePointAt(std::shared_ptr<java::lang::CharSequence> seq,int index)
{
	
	char c1;
	int cVar0;
	char c2;
	
	//    .param p0, "seq"    # Ljava/lang/CharSequence;
	//    .param p1, "index"    # I
	c1 = seq->charAt(index);
	//    .local v0, "c1":C
	if ( !(java::lang::Character::isHighSurrogate(c1)) )  
		goto label_cond_21;
	cVar0 = ( index + 0x1);
	if ( cVar0 >= seq->length() )
		goto label_cond_21;
	c2 = seq->charAt(cVar0);
	//    .local v1, "c2":C
	if ( !(java::lang::Character::isLowSurrogate(c2)) )  
		goto label_cond_21;
	return java::lang::Character::toCodePoint(c1, c2);
	// 319    .line 4897
	// 320    .end local v1    # "c2":C
label_cond_21:
	return c1;

}
// .method public static codePointAt([CI)I
int java::lang::Character::codePointAt(std::shared_ptr<char[]> a,int index)
{
	
	//    .param p0, "a"    # [C
	//    .param p1, "index"    # I
	return java::lang::Character::codePointAtImpl(a, index, a->size());

}
// .method public static codePointAt([CII)I
int java::lang::Character::codePointAt(std::shared_ptr<char[]> a,int index,int limit)
{
	
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar0;
	
	//    .param p0, "a"    # [C
	//    .param p1, "index"    # I
	//    .param p2, "limit"    # I
	if ( index >= limit )
		goto label_cond_4;
	if ( limit >= 0 )
		goto label_cond_a;
label_cond_4:
	cVar0 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar0;
	// 361    .line 4951
label_cond_a:
	if ( limit >  a->size() )
		goto label_cond_4;
	return java::lang::Character::codePointAtImpl(a, index, limit);

}
// .method static codePointAtImpl([CII)I
int java::lang::Character::codePointAtImpl(std::shared_ptr<char[]> a,int index,int limit)
{
	
	char c1;
	int cVar0;
	char c2;
	
	//    .param p0, "a"    # [C
	//    .param p1, "index"    # I
	//    .param p2, "limit"    # I
	c1 = a[index];
	//    .local v0, "c1":C
	if ( !(java::lang::Character::isHighSurrogate(c1)) )  
		goto label_cond_19;
	cVar0 = ( index + 0x1);
	if ( cVar0 >= limit )
		goto label_cond_19;
	c2 = a[cVar0];
	//    .local v1, "c2":C
	if ( !(java::lang::Character::isLowSurrogate(c2)) )  
		goto label_cond_19;
	return java::lang::Character::toCodePoint(c1, c2);
	// 415    .line 4966
	// 416    .end local v1    # "c2":C
label_cond_19:
	return c1;

}
// .method public static codePointBefore(Ljava/lang/CharSequence;I)I
int java::lang::Character::codePointBefore(std::shared_ptr<java::lang::CharSequence> seq,int index)
{
	
	int cVar0;
	char c2;
	char c1;
	
	//    .param p0, "seq"    # Ljava/lang/CharSequence;
	//    .param p1, "index"    # I
	cVar0 = ( index + -0x1);
	c2 = seq->charAt(cVar0);
	//    .local v1, "c2":C
	if ( !(java::lang::Character::isLowSurrogate(c2)) )  
		goto label_cond_1f;
	if ( cVar0 <= 0 )
		goto label_cond_1f;
	c1 = seq->charAt(( cVar0 + -0x1));
	//    .local v0, "c1":C
	if ( !(java::lang::Character::isHighSurrogate(c1)) )  
		goto label_cond_1f;
	return java::lang::Character::toCodePoint(c1, c2);
	// 466    .line 4998
	// 467    .end local v0    # "c1":C
label_cond_1f:
	return c2;

}
// .method public static codePointBefore([CI)I
int java::lang::Character::codePointBefore(std::shared_ptr<char[]> a,int index)
{
	
	//    .param p0, "a"    # [C
	//    .param p1, "index"    # I
	return java::lang::Character::codePointBeforeImpl(a, index, 0x0);

}
// .method public static codePointBefore([CII)I
int java::lang::Character::codePointBefore(std::shared_ptr<char[]> a,int index,int start)
{
	
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar0;
	
	//    .param p0, "a"    # [C
	//    .param p1, "index"    # I
	//    .param p2, "start"    # I
	if ( index <= start )
		goto label_cond_4;
	if ( start >= 0 )
		goto label_cond_a;
label_cond_4:
	cVar0 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar0;
	// 508    .line 5054
label_cond_a:
	if ( start >= a->size() )
		goto label_cond_4;
	return java::lang::Character::codePointBeforeImpl(a, index, start);

}
// .method static codePointBeforeImpl([CII)I
int java::lang::Character::codePointBeforeImpl(std::shared_ptr<char[]> a,int index,int start)
{
	
	int cVar0;
	char c2;
	char c1;
	
	//    .param p0, "a"    # [C
	//    .param p1, "index"    # I
	//    .param p2, "start"    # I
	cVar0 = ( index + -0x1);
	c2 = a[cVar0];
	//    .local v1, "c2":C
	if ( !(java::lang::Character::isLowSurrogate(c2)) )  
		goto label_cond_1b;
	if ( cVar0 <= start )
		goto label_cond_1b;
	c1 = a[( cVar0 + -0x1)];
	//    .local v0, "c1":C
	if ( !(java::lang::Character::isHighSurrogate(c1)) )  
		goto label_cond_1b;
	return java::lang::Character::toCodePoint(c1, c2);
	// 564    .line 5069
	// 565    .end local v0    # "c1":C
label_cond_1b:
	return c2;

}
// .method public static codePointCount(Ljava/lang/CharSequence;II)I
int java::lang::Character::codePointCount(std::shared_ptr<java::lang::CharSequence> seq,int beginIndex,int endIndex)
{
	
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar0;
	int n;
	int i;
	
	//    .param p0, "seq"    # Ljava/lang/CharSequence;
	//    .param p1, "beginIndex"    # I
	//    .param p2, "endIndex"    # I
	//    .local v2, "length":I
	if ( beginIndex < 0 ) 
		goto label_cond_8;
	if ( endIndex <= seq->length() )
		goto label_cond_e;
label_cond_8:
	cVar0 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar0;
	// 596    .line 5231
label_cond_e:
	if ( beginIndex >  endIndex )
		goto label_cond_8;
	n = (endIndex - beginIndex);
	//    .local v3, "n":I
	//    .local v0, "i":I
	i = beginIndex;
	//    .end local v0    # "i":I
	//    .local v1, "i":I
label_goto_14:
	if ( i >= endIndex )
		goto label_cond_34;
	i = ( i + 0x1);
	//    .end local v1    # "i":I
	//    .restart local v0    # "i":I
	if ( !(java::lang::Character::isHighSurrogate(seq->charAt(i))) )  
		goto label_cond_32;
	if ( i >= endIndex )
		goto label_cond_32;
	if ( !(java::lang::Character::isLowSurrogate(seq->charAt(i))) )  
		goto label_cond_32;
	n = ( n + -0x1);
label_cond_32:
	i = i;
	//    .end local v0    # "i":I
	//    .restart local v1    # "i":I
	goto label_goto_14;
	// 657    .line 5242
label_cond_34:
	return n;

}
// .method public static codePointCount([CII)I
int java::lang::Character::codePointCount(std::shared_ptr<char[]> a,int offset,int count)
{
	
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar0;
	
	//    .param p0, "a"    # [C
	//    .param p1, "offset"    # I
	//    .param p2, "count"    # I
	if ( count >  (a->size() -  offset) )
		goto label_cond_6;
	if ( offset >= 0 )
		goto label_cond_c;
label_cond_6:
	cVar0 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar0;
	// 686    .line 5265
label_cond_c:
	if ( count < 0 ) 
		goto label_cond_6;
	return java::lang::Character::codePointCountImpl(a, offset, count);

}
// .method static codePointCountImpl([CII)I
int java::lang::Character::codePointCountImpl(std::shared_ptr<char[]> a,int offset,int count)
{
	
	int endIndex;
	int n;
	int i;
	
	//    .param p0, "a"    # [C
	//    .param p1, "offset"    # I
	//    .param p2, "count"    # I
	endIndex = (offset + count);
	//    .local v0, "endIndex":I
	n = count;
	//    .local v3, "n":I
	//    .local v1, "i":I
	i = offset;
	//    .end local v1    # "i":I
	//    .local v2, "i":I
label_goto_5:
	if ( i >= endIndex )
		goto label_cond_21;
	i = ( i + 0x1);
	//    .end local v2    # "i":I
	//    .restart local v1    # "i":I
	if ( !(java::lang::Character::isHighSurrogate(a[i])) )  
		goto label_cond_1f;
	if ( i >= endIndex )
		goto label_cond_1f;
	if ( !(java::lang::Character::isLowSurrogate(a[i])) )  
		goto label_cond_1f;
	n = ( n + -0x1);
label_cond_1f:
	i = i;
	//    .end local v1    # "i":I
	//    .restart local v2    # "i":I
	goto label_goto_5;
	// 762    .line 5281
label_cond_21:
	return n;

}
// .method public static compare(CC)I
int java::lang::Character::compare(char x,char y)
{
	
	//    .param p0, "x"    # C
	//    .param p1, "y"    # C
	return (x - y);

}
// .method public static digit(CI)I
int java::lang::Character::digit(char ch,int radix)
{
	
	//    .param p0, "ch"    # C
	//    .param p1, "radix"    # I
	return java::lang::Character::digit(ch, radix);

}
// .method public static digit(II)I
int java::lang::Character::digit(int codePoint,int radix)
{
	
	int cVar0;
	int result;
	
	//    .param p0, "codePoint"    # I
	//    .param p1, "radix"    # I
	cVar0 = -0x1;
	if ( radix <  0x2 )
		goto label_cond_8;
	if ( radix <= 0x24 )
		goto label_cond_9;
label_cond_8:
	return cVar0;
	// 814    .line 6669
label_cond_9:
	if ( codePoint >= 0x80 )
		goto label_cond_37;
	result = -0x1;
	//    .local v0, "result":I
	if ( 0x30 >  codePoint )
		goto label_cond_1b;
	if ( codePoint >  0x39 )
		goto label_cond_1b;
	result = ( codePoint + -0x30);
label_cond_18:
label_goto_18:
	if ( result >= radix )
		goto label_cond_35;
	//    .end local v0    # "result":I
label_goto_1a:
	return result;
	// 845    .line 6674
	// 846    .restart local v0    # "result":I
label_cond_1b:
	if ( 0x61 >  codePoint )
		goto label_cond_28;
	if ( codePoint >  0x7a )
		goto label_cond_28;
	result = ( ( codePoint + -0x61) + 0xa);
	goto label_goto_18;
	// 864    .line 6676
label_cond_28:
	if ( 0x41 >  codePoint )
		goto label_cond_18;
	if ( codePoint >  0x5a )
		goto label_cond_18;
	result = ( ( codePoint + -0x41) + 0xa);
	goto label_goto_18;
label_cond_35:
	result = cVar0;
	goto label_goto_1a;
	// 887    .line 6681
	// 888    .end local v0    # "result":I
label_cond_37:
	return java::lang::Character::digitImpl(codePoint, radix);

}
// .method static native digitImpl(II)I
int java::lang::Character::digitImpl(int var0,int var1)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 899    .end annotation

}
// .method public static forDigit(II)C
char java::lang::Character::forDigit(int digit,int radix)
{
	
	char cVar0;
	
	//    .param p0, "digit"    # I
	//    .param p1, "radix"    # I
	cVar0 = 0x0;
	if ( digit >= radix )
		goto label_cond_5;
	if ( digit >= 0 )
		goto label_cond_6;
label_cond_5:
	return cVar0;
	// 919    .line 7157
label_cond_6:
	if ( radix <  0x2 )
		goto label_cond_d;
	if ( radix <= 0x24 )
		goto label_cond_e;
label_cond_d:
	return cVar0;
	// 933    .line 7160
label_cond_e:
	if ( digit >= 0xa )
		goto label_cond_16;
	return (char)(( digit + 0x30));
	// 946    .line 7163
label_cond_16:
	return (char)(( digit + 0x57));

}
// .method public static getDirectionality(C)B
unsigned char java::lang::Character::getDirectionality(char ch)
{
	
	//    .param p0, "ch"    # C
	return java::lang::Character::getDirectionality(ch);

}
// .method public static getDirectionality(I)B
unsigned char java::lang::Character::getDirectionality(int codePoint)
{
	
	unsigned char cVar0;
	int directionality;
	
	//    .param p0, "codePoint"    # I
	cVar0 = -0x1;
	if ( java::lang::Character::getType(codePoint) )     
		goto label_cond_8;
	return cVar0;
	// 985    .line 7245
label_cond_8:
	directionality = java::lang::Character::getDirectionalityImpl(codePoint);
	//    .local v0, "directionality":B
	if ( directionality < 0 ) 
		goto label_cond_18;
	if ( directionality >= java::lang::Character::DIRECTIONALITY->size() )
		goto label_cond_18;
	return java::lang::Character::DIRECTIONALITY[directionality];
	// 1008    .line 7249
label_cond_18:
	return cVar0;

}
// .method static native getDirectionalityImpl(I)B
unsigned char java::lang::Character::getDirectionalityImpl(int var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 1015    .end annotation

}
// .method public static getName(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::lang::Character::getName(int codePoint)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::String> name;
	std::shared_ptr<java::lang::Character_S_UnicodeBlock> block;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "codePoint"    # I
	if ( java::lang::Character::isValidCodePoint(codePoint) )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar0;
	// 1039    .line 7396
label_cond_d:
	name = java::lang::Character::getNameImpl(codePoint);
	//    .local v1, "name":Ljava/lang/String;
	if ( !(name) )  
		goto label_cond_14;
	return name;
	// 1052    .line 7399
label_cond_14:
	if ( java::lang::Character::getType(codePoint) )     
		goto label_cond_1b;
	return 0x0;
	// 1063    .line 7401
label_cond_1b:
	block = java::lang::Character_S_UnicodeBlock::of(codePoint);
	//    .local v0, "block":Ljava/lang/Character$UnicodeBlock;
	if ( !(block) )  
		goto label_cond_50;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	return cVar1->append(block->toString()->replace(0x5f, 0x20))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")))->append(java::lang::Integer::toHexString(codePoint)->toUpperCase(java::util::Locale::ENGLISH))->toString();
	// 1122    .line 7406
label_cond_50:
	return java::lang::Integer::toHexString(codePoint)->toUpperCase(java::util::Locale::ENGLISH);

}
// .method public static getNumericValue(C)I
int java::lang::Character::getNumericValue(char ch)
{
	
	//    .param p0, "ch"    # C
	return java::lang::Character::getNumericValue(ch);

}
// .method public static getNumericValue(I)I
int java::lang::Character::getNumericValue(int codePoint)
{
	
	//    .param p0, "codePoint"    # I
	if ( codePoint >= 0x80 )
		goto label_cond_27;
	if ( codePoint <  0x30 )
		goto label_cond_f;
	if ( codePoint >  0x39 )
		goto label_cond_f;
	return ( codePoint + -0x30);
	// 1177    .line 6760
label_cond_f:
	if ( codePoint <  0x61 )
		goto label_cond_1a;
	if ( codePoint >  0x7a )
		goto label_cond_1a;
	return ( codePoint + -0x57);
	// 1192    .line 6763
label_cond_1a:
	if ( codePoint <  0x41 )
		goto label_cond_25;
	if ( codePoint >  0x5a )
		goto label_cond_25;
	return ( codePoint + -0x37);
	// 1207    .line 6766
label_cond_25:
	return -0x1;
	// 1213    .line 6769
label_cond_27:
	if ( codePoint <  0xff21 )
		goto label_cond_37;
	if ( codePoint >  0xff3a )
		goto label_cond_37;
	return (codePoint - 0xff17);
	// 1230    .line 6773
label_cond_37:
	if ( codePoint <  0xff41 )
		goto label_cond_47;
	if ( codePoint >  0xff5a )
		goto label_cond_47;
	return (codePoint - 0xff37);
	// 1247    .line 6776
label_cond_47:
	return java::lang::Character::getNumericValueImpl(codePoint);

}
// .method static native getNumericValueImpl(I)I
int java::lang::Character::getNumericValueImpl(int var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 1258    .end annotation

}
// .method public static getType(C)I
int java::lang::Character::getType(char ch)
{
	
	//    .param p0, "ch"    # C
	return java::lang::Character::getType(ch);

}
// .method public static getType(I)I
int java::lang::Character::getType(int codePoint)
{
	
	int type;
	
	//    .param p0, "codePoint"    # I
	type = java::lang::Character::getTypeImpl(codePoint);
	//    .local v0, "type":I
	if ( type >  0x10 )
		goto label_cond_9;
	return type;
	// 1293    .line 7123
label_cond_9:
	return ( type + 0x1);

}
// .method static native getTypeImpl(I)I
int java::lang::Character::getTypeImpl(int var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 1302    .end annotation

}
// .method public static hashCode(C)I
int java::lang::Character::hashCode(char value)
{
	
	//    .param p0, "value"    # C
	return value;

}
// .method public static highSurrogate(I)C
char java::lang::Character::highSurrogate(int codePoint)
{
	
	//    .param p0, "codePoint"    # I
	return (char)((_ushri(codePoint,0xa) +  0xd7c0));

}
// .method public static isAlphabetic(I)Z
bool java::lang::Character::isAlphabetic(int codePoint)
{
	
	//    .param p0, "codePoint"    # I
	return java::lang::Character::isAlphabeticImpl(codePoint);

}
// .method static native isAlphabeticImpl(I)Z
bool java::lang::Character::isAlphabeticImpl(int var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 1348    .end annotation

}
// .method public static isBmpCodePoint(I)Z
bool java::lang::Character::isBmpCodePoint(int codePoint)
{
	
	bool cVar1;
	
	//    .param p0, "codePoint"    # I
	cVar1 = 0x0;
	if ( _ushri(codePoint,0x10) )     
		goto label_cond_6;
	cVar1 = 0x1;
label_cond_6:
	return cVar1;

}
// .method public static isDefined(C)Z
bool java::lang::Character::isDefined(char ch)
{
	
	//    .param p0, "ch"    # C
	return java::lang::Character::isDefined(ch);

}
// .method public static isDefined(I)Z
bool java::lang::Character::isDefined(int codePoint)
{
	
	//    .param p0, "codePoint"    # I
	return java::lang::Character::isDefinedImpl(codePoint);

}
// .method static native isDefinedImpl(I)Z
bool java::lang::Character::isDefinedImpl(int var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 1397    .end annotation

}
// .method public static isDigit(C)Z
bool java::lang::Character::isDigit(char ch)
{
	
	//    .param p0, "ch"    # C
	return java::lang::Character::isDigit(ch);

}
// .method public static isDigit(I)Z
bool java::lang::Character::isDigit(int codePoint)
{
	
	//    .param p0, "codePoint"    # I
	return java::lang::Character::isDigitImpl(codePoint);

}
// .method static native isDigitImpl(I)Z
bool java::lang::Character::isDigitImpl(int var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 1428    .end annotation

}
// .method public static isHighSurrogate(C)Z
bool java::lang::Character::isHighSurrogate(char ch)
{
	
	bool cVar1;
	
	//    .param p0, "ch"    # C
	cVar1 = 0x0;
	if ( ch <  0xd800 )
		goto label_cond_c;
	if ( ch >= 0xdc00 )
		goto label_cond_c;
	cVar1 = 0x1;
label_cond_c:
	return cVar1;

}
// .method public static isISOControl(C)Z
bool java::lang::Character::isISOControl(char ch)
{
	
	//    .param p0, "ch"    # C
	return java::lang::Character::isISOControl(ch);

}
// .method public static isISOControl(I)Z
bool java::lang::Character::isISOControl(int codePoint)
{
	
	bool cVar0;
	int cVar1;
	
	//    .param p0, "codePoint"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( codePoint >  0x9f )
		goto label_cond_11;
	if ( codePoint >= 0x7f )
		goto label_cond_e;
	if ( _ushri(codePoint,0x5) )     
		goto label_cond_f;
label_cond_e:
label_goto_e:
	return cVar0;
label_cond_f:
	cVar0 = cVar1;
	goto label_goto_e;
label_cond_11:
	cVar0 = cVar1;
	goto label_goto_e;

}
// .method public static isIdentifierIgnorable(C)Z
bool java::lang::Character::isIdentifierIgnorable(char ch)
{
	
	//    .param p0, "ch"    # C
	return java::lang::Character::isIdentifierIgnorable(ch);

}
// .method public static isIdentifierIgnorable(I)Z
bool java::lang::Character::isIdentifierIgnorable(int codePoint)
{
	
	//    .param p0, "codePoint"    # I
	return java::lang::Character::isIdentifierIgnorableImpl(codePoint);

}
// .method static native isIdentifierIgnorableImpl(I)Z
bool java::lang::Character::isIdentifierIgnorableImpl(int var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 1535    .end annotation

}
// .method public static isIdeographic(I)Z
bool java::lang::Character::isIdeographic(int codePoint)
{
	
	//    .param p0, "codePoint"    # I
	return java::lang::Character::isIdeographicImpl(codePoint);

}
// .method static native isIdeographicImpl(I)Z
bool java::lang::Character::isIdeographicImpl(int var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 1553    .end annotation

}
// .method public static isJavaIdentifierPart(C)Z
bool java::lang::Character::isJavaIdentifierPart(char ch)
{
	
	//    .param p0, "ch"    # C
	return java::lang::Character::isJavaIdentifierPart(ch);

}
// .method public static isJavaIdentifierPart(I)Z
bool java::lang::Character::isJavaIdentifierPart(int codePoint)
{
	
	long long cVar0;
	long long cVar1;
	bool cVar2;
	int cVar3;
	
	//    .param p0, "codePoint"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = 0x1;
	cVar3 = 0x0;
	if ( codePoint >= 0x40 )
		goto label_cond_19;
	if ( !((((cVar0 << codePoint) &  0x3ff00100fffc1ffL) > cVar1)) )  
		goto label_cond_17;
label_goto_16:
	return cVar2;
label_cond_17:
	cVar2 = cVar3;
	goto label_goto_16;
	// 1606    .line 6146
label_cond_19:
	if ( codePoint >= 0x80 )
		goto label_cond_2e;
	if ( !((((cVar0 << ( codePoint + -0x40)) &  -0x7800000178000002L) > cVar1)) )  
		goto label_cond_2c;
label_goto_2b:
	return cVar2;
label_cond_2c:
	cVar2 = cVar3;
	goto label_goto_2b;
	// 1633    .line 6149
label_cond_2e:
	if ( ((cVar2 << java::lang::Character::getType(codePoint)) &  0x481077e) )     
		goto label_cond_40;
	if ( codePoint < 0 ) 
		goto label_cond_41;
	if ( codePoint >  0x8 )
		goto label_cond_41;
label_cond_40:
label_goto_40:
	return cVar2;
	// 1661    .line 6162
label_cond_41:
	if ( codePoint <  0xe )
		goto label_cond_49;
	if ( codePoint <= 0x1b )
		goto label_cond_40;
label_cond_49:
	if ( codePoint <  0x7f )
		goto label_cond_51;
	if ( codePoint <= 0x9f )
		goto label_cond_40;
label_cond_51:
	cVar2 = cVar3;
	goto label_goto_40;

}
// .method public static isJavaIdentifierStart(C)Z
bool java::lang::Character::isJavaIdentifierStart(char ch)
{
	
	//    .param p0, "ch"    # C
	return java::lang::Character::isJavaIdentifierStart(ch);

}
// .method public static isJavaIdentifierStart(I)Z
bool java::lang::Character::isJavaIdentifierStart(int codePoint)
{
	
	bool cVar0;
	int cVar1;
	
	//    .param p0, "codePoint"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( codePoint >= 0x40 )
		goto label_cond_d;
	if ( codePoint != 0x24 )
		goto label_cond_b;
label_goto_a:
	return cVar0;
label_cond_b:
	cVar0 = cVar1;
	goto label_goto_a;
	// 1727    .line 6062
label_cond_d:
	if ( codePoint >= 0x80 )
		goto label_cond_26;
	if ( !((((0x1 << ( codePoint + -0x40)) &  0x7fffffe87fffffeL) > 0x0)) )  
		goto label_cond_24;
label_goto_23:
	return cVar0;
label_cond_24:
	cVar0 = cVar1;
	goto label_goto_23;
	// 1758    .line 6065
label_cond_26:
	if ( !(((cVar0 << java::lang::Character::getType(codePoint)) &  0x480043e)) )  
		goto label_cond_33;
label_goto_32:
	return cVar0;
label_cond_33:
	cVar0 = cVar1;
	goto label_goto_32;

}
// .method public static isJavaLetter(C)Z
bool java::lang::Character::isJavaLetter(char ch)
{
	
	//    .param p0, "ch"    # C
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1787    .end annotation
	return java::lang::Character::isJavaIdentifierStart(ch);

}
// .method public static isJavaLetterOrDigit(C)Z
bool java::lang::Character::isJavaLetterOrDigit(char ch)
{
	
	//    .param p0, "ch"    # C
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1802    .end annotation
	return java::lang::Character::isJavaIdentifierPart(ch);

}
// .method public static isLetter(C)Z
bool java::lang::Character::isLetter(char ch)
{
	
	//    .param p0, "ch"    # C
	return java::lang::Character::isLetter(ch);

}
// .method public static isLetter(I)Z
bool java::lang::Character::isLetter(int codePoint)
{
	
	//    .param p0, "codePoint"    # I
	return java::lang::Character::isLetterImpl(codePoint);

}
// .method static native isLetterImpl(I)Z
bool java::lang::Character::isLetterImpl(int var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 1841    .end annotation

}
// .method public static isLetterOrDigit(C)Z
bool java::lang::Character::isLetterOrDigit(char ch)
{
	
	//    .param p0, "ch"    # C
	return java::lang::Character::isLetterOrDigit(ch);

}
// .method public static isLetterOrDigit(I)Z
bool java::lang::Character::isLetterOrDigit(int codePoint)
{
	
	//    .param p0, "codePoint"    # I
	return java::lang::Character::isLetterOrDigitImpl(codePoint);

}
// .method static native isLetterOrDigitImpl(I)Z
bool java::lang::Character::isLetterOrDigitImpl(int var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 1872    .end annotation

}
// .method public static isLowSurrogate(C)Z
bool java::lang::Character::isLowSurrogate(char ch)
{
	
	bool cVar1;
	
	//    .param p0, "ch"    # C
	cVar1 = 0x0;
	if ( ch <  0xdc00 )
		goto label_cond_c;
	if ( ch >= 0xe000 )
		goto label_cond_c;
	cVar1 = 0x1;
label_cond_c:
	return cVar1;

}
// .method public static isLowerCase(C)Z
bool java::lang::Character::isLowerCase(char ch)
{
	
	//    .param p0, "ch"    # C
	return java::lang::Character::isLowerCase(ch);

}
// .method public static isLowerCase(I)Z
bool java::lang::Character::isLowerCase(int codePoint)
{
	
	//    .param p0, "codePoint"    # I
	return java::lang::Character::isLowerCaseImpl(codePoint);

}
// .method static native isLowerCaseImpl(I)Z
bool java::lang::Character::isLowerCaseImpl(int var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 1925    .end annotation

}
// .method public static isMirrored(C)Z
bool java::lang::Character::isMirrored(char ch)
{
	
	//    .param p0, "ch"    # C
	return java::lang::Character::isMirrored(ch);

}
// .method public static isMirrored(I)Z
bool java::lang::Character::isMirrored(int codePoint)
{
	
	//    .param p0, "codePoint"    # I
	return java::lang::Character::isMirroredImpl(codePoint);

}
// .method static native isMirroredImpl(I)Z
bool java::lang::Character::isMirroredImpl(int var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 1956    .end annotation

}
// .method public static isSpace(C)Z
bool java::lang::Character::isSpace(char ch)
{
	
	bool cVar1;
	
	//    .param p0, "ch"    # C
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1963    .end annotation
	cVar1 = 0x0;
	if ( ch >  0x20 )
		goto label_cond_15;
	if ( !(((_shrll(0x100003600L,ch) &  0x1) > 0x0)) )  
		goto label_cond_15;
	cVar1 = 0x1;
label_cond_15:
	return cVar1;

}
// .method public static isSpaceChar(C)Z
bool java::lang::Character::isSpaceChar(char ch)
{
	
	//    .param p0, "ch"    # C
	return java::lang::Character::isSpaceChar(ch);

}
// .method public static isSpaceChar(I)Z
bool java::lang::Character::isSpaceChar(int codePoint)
{
	
	bool cVar0;
	bool cVar1;
	
	//    .param p0, "codePoint"    # I
	cVar0 = 0x0;
	cVar1 = 0x1;
	if ( codePoint == 0x20 )
		goto label_cond_a;
	if ( codePoint != 0xa0 )
		goto label_cond_b;
label_cond_a:
	return cVar1;
	// 2034    .line 6869
label_cond_b:
	if ( codePoint >= 0x1000 )
		goto label_cond_10;
	return cVar0;
	// 2043    .line 6873
label_cond_10:
	if ( codePoint == 0x1680 )
		goto label_cond_18;
	if ( codePoint != 0x180e )
		goto label_cond_19;
label_cond_18:
	return cVar1;
	// 2057    .line 6876
label_cond_19:
	if ( codePoint >= 0x2000 )
		goto label_cond_1e;
	return cVar0;
	// 2066    .line 6879
label_cond_1e:
	if ( codePoint >  0xffff )
		goto label_cond_3e;
	if ( codePoint <= 0x200a )
		goto label_cond_2b;
	if ( codePoint != 0x2028 )
		goto label_cond_2c;
label_cond_2b:
label_goto_2b:
	return cVar1;
label_cond_2c:
	if ( codePoint == 0x2029 )
		goto label_cond_2b;
	if ( codePoint == 0x202f )
		goto label_cond_2b;
	if ( codePoint == 0x205f )
		goto label_cond_2b;
	if ( codePoint == 0x3000 )
		goto label_cond_2b;
	cVar1 = cVar0;
	goto label_goto_2b;
	// 2107    .line 6885
label_cond_3e:
	return java::lang::Character::isSpaceCharImpl(codePoint);

}
// .method static native isSpaceCharImpl(I)Z
bool java::lang::Character::isSpaceCharImpl(int var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 2118    .end annotation

}
// .method public static isSupplementaryCodePoint(I)Z
bool java::lang::Character::isSupplementaryCodePoint(int codePoint)
{
	
	bool cVar1;
	
	//    .param p0, "codePoint"    # I
	cVar1 = 0x0;
	if ( codePoint <  0x10000 )
		goto label_cond_a;
	if ( codePoint >= 0x110000 )
		goto label_cond_a;
	cVar1 = 0x1;
label_cond_a:
	return cVar1;

}
// .method public static isSurrogate(C)Z
bool java::lang::Character::isSurrogate(char ch)
{
	
	bool cVar1;
	
	//    .param p0, "ch"    # C
	cVar1 = 0x0;
	if ( ch <  0xd800 )
		goto label_cond_c;
	if ( ch >= 0xe000 )
		goto label_cond_c;
	cVar1 = 0x1;
label_cond_c:
	return cVar1;

}
// .method public static isSurrogatePair(CC)Z
bool java::lang::Character::isSurrogatePair(char high,char low)
{
	
	bool cVar0;
	
	//    .param p0, "high"    # C
	//    .param p1, "low"    # C
	if ( !(java::lang::Character::isHighSurrogate(high)) )  
		goto label_cond_b;
	cVar0 = java::lang::Character::isLowSurrogate(low);
label_goto_a:
	return cVar0;
label_cond_b:
	cVar0 = 0x0;
	goto label_goto_a;

}
// .method public static isTitleCase(C)Z
bool java::lang::Character::isTitleCase(char ch)
{
	
	//    .param p0, "ch"    # C
	return java::lang::Character::isTitleCase(ch);

}
// .method public static isTitleCase(I)Z
bool java::lang::Character::isTitleCase(int codePoint)
{
	
	//    .param p0, "codePoint"    # I
	return java::lang::Character::isTitleCaseImpl(codePoint);

}
// .method static native isTitleCaseImpl(I)Z
bool java::lang::Character::isTitleCaseImpl(int var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 2221    .end annotation

}
// .method public static isUnicodeIdentifierPart(C)Z
bool java::lang::Character::isUnicodeIdentifierPart(char ch)
{
	
	//    .param p0, "ch"    # C
	return java::lang::Character::isUnicodeIdentifierPart(ch);

}
// .method public static isUnicodeIdentifierPart(I)Z
bool java::lang::Character::isUnicodeIdentifierPart(int codePoint)
{
	
	//    .param p0, "codePoint"    # I
	return java::lang::Character::isUnicodeIdentifierPartImpl(codePoint);

}
// .method static native isUnicodeIdentifierPartImpl(I)Z
bool java::lang::Character::isUnicodeIdentifierPartImpl(int var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 2252    .end annotation

}
// .method public static isUnicodeIdentifierStart(C)Z
bool java::lang::Character::isUnicodeIdentifierStart(char ch)
{
	
	//    .param p0, "ch"    # C
	return java::lang::Character::isUnicodeIdentifierStart(ch);

}
// .method public static isUnicodeIdentifierStart(I)Z
bool java::lang::Character::isUnicodeIdentifierStart(int codePoint)
{
	
	//    .param p0, "codePoint"    # I
	return java::lang::Character::isUnicodeIdentifierStartImpl(codePoint);

}
// .method static native isUnicodeIdentifierStartImpl(I)Z
bool java::lang::Character::isUnicodeIdentifierStartImpl(int var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 2283    .end annotation

}
// .method public static isUpperCase(C)Z
bool java::lang::Character::isUpperCase(char ch)
{
	
	//    .param p0, "ch"    # C
	return java::lang::Character::isUpperCase(ch);

}
// .method public static isUpperCase(I)Z
bool java::lang::Character::isUpperCase(int codePoint)
{
	
	//    .param p0, "codePoint"    # I
	return java::lang::Character::isUpperCaseImpl(codePoint);

}
// .method static native isUpperCaseImpl(I)Z
bool java::lang::Character::isUpperCaseImpl(int var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 2314    .end annotation

}
// .method public static isValidCodePoint(I)Z
bool java::lang::Character::isValidCodePoint(int codePoint)
{
	
	bool cVar0;
	
	//    .param p0, "codePoint"    # I
	//    .local v0, "plane":I
	if ( _ushri(codePoint,0x10) >= 0x11 )
		goto label_cond_8;
	cVar0 = 0x1;
label_goto_7:
	return cVar0;
label_cond_8:
	cVar0 = 0x0;
	goto label_goto_7;

}
// .method public static isWhitespace(C)Z
bool java::lang::Character::isWhitespace(char ch)
{
	
	//    .param p0, "ch"    # C
	return java::lang::Character::isWhitespace(ch);

}
// .method public static isWhitespace(I)Z
bool java::lang::Character::isWhitespace(int codePoint)
{
	
	bool cVar0;
	bool cVar1;
	
	//    .param p0, "codePoint"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( codePoint <  0x1c )
		goto label_cond_b;
	if ( codePoint >  0x20 )
		goto label_cond_b;
label_cond_a:
	return cVar0;
	// 2377    .line 6957
label_cond_b:
	if ( codePoint <  0x9 )
		goto label_cond_13;
	if ( codePoint <= 0xd )
		goto label_cond_a;
label_cond_13:
	if ( codePoint >= 0x1000 )
		goto label_cond_18;
	return cVar1;
	// 2396    .line 6964
label_cond_18:
	if ( codePoint == 0x1680 )
		goto label_cond_20;
	if ( codePoint != 0x180e )
		goto label_cond_21;
label_cond_20:
	return cVar0;
	// 2410    .line 6967
label_cond_21:
	if ( codePoint >= 0x2000 )
		goto label_cond_26;
	return cVar1;
	// 2419    .line 6971
label_cond_26:
	if ( codePoint == 0x2007 )
		goto label_cond_2e;
	if ( codePoint != 0x202f )
		goto label_cond_2f;
label_cond_2e:
	return cVar1;
	// 2433    .line 6974
label_cond_2f:
	if ( codePoint >  0xffff )
		goto label_cond_4b;
	if ( codePoint <= 0x200a )
		goto label_cond_3c;
	if ( codePoint != 0x2028 )
		goto label_cond_3d;
label_cond_3c:
label_goto_3c:
	return cVar0;
label_cond_3d:
	if ( codePoint == 0x2029 )
		goto label_cond_3c;
	if ( codePoint == 0x205f )
		goto label_cond_3c;
	if ( codePoint == 0x3000 )
		goto label_cond_3c;
	cVar0 = cVar1;
	goto label_goto_3c;
	// 2470    .line 6980
label_cond_4b:
	return java::lang::Character::isWhitespaceImpl(codePoint);

}
// .method static native isWhitespaceImpl(I)Z
bool java::lang::Character::isWhitespaceImpl(int var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 2481    .end annotation

}
// .method public static lowSurrogate(I)C
char java::lang::Character::lowSurrogate(int codePoint)
{
	
	//    .param p0, "codePoint"    # I
	return (char)((( codePoint & 0x3ff) +  0xdc00));

}
// .method public static offsetByCodePoints(Ljava/lang/CharSequence;II)I
int java::lang::Character::offsetByCodePoints(std::shared_ptr<java::lang::CharSequence> seq,int index,int codePointOffset)
{
	
	int length;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar0;
	int x;
	int i;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar1;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar2;
	
	//    .param p0, "seq"    # Ljava/lang/CharSequence;
	//    .param p1, "index"    # I
	//    .param p2, "codePointOffset"    # I
	length = seq->length();
	//    .local v1, "length":I
	if ( index < 0 ) 
		goto label_cond_8;
	if ( index <= length )
		goto label_cond_e;
label_cond_8:
	cVar0 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar0;
	// 2527    .line 5313
label_cond_e:
	x = index;
	//    .local v2, "x":I
	if ( codePointOffset < 0 ) 
		goto label_cond_3d;
	i = 0x0;
	//    .local v0, "i":I
	x = x;
	//    .end local v2    # "x":I
	//    .local v3, "x":I
label_goto_13:
	if ( x >= length )
		goto label_cond_35;
	if ( i >= codePointOffset )
		goto label_cond_35;
	x = ( x + 0x1);
	//    .end local v3    # "x":I
	//    .restart local v2    # "x":I
	if ( !(java::lang::Character::isHighSurrogate(seq->charAt(x))) )  
		goto label_cond_31;
	if ( x >= length )
		goto label_cond_31;
	if ( !(java::lang::Character::isLowSurrogate(seq->charAt(x))) )  
		goto label_cond_31;
	x = ( x + 0x1);
label_cond_31:
	i = ( i + 0x1);
	x = x;
	//    .end local v2    # "x":I
	//    .restart local v3    # "x":I
	goto label_goto_13;
	// 2590    .line 5322
label_cond_35:
	if ( i >= codePointOffset )
		goto label_cond_69;
	cVar1 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar1;
	// 2601    .line 5327
	// 2602    .end local v0    # "i":I
	// 2603    .end local v3    # "x":I
	// 2604    .restart local v2    # "x":I
label_cond_3d:
	i = codePointOffset;
	//    .restart local v0    # "i":I
label_goto_3e:
	if ( x <= 0 )
		goto label_cond_61;
	if ( i >= 0 )
		goto label_cond_61;
	x = ( x + -0x1);
	if ( !(java::lang::Character::isLowSurrogate(seq->charAt(x))) )  
		goto label_cond_5e;
	if ( x <= 0 )
		goto label_cond_5e;
	if ( !(java::lang::Character::isHighSurrogate(seq->charAt(( x + -0x1)))) )  
		goto label_cond_5e;
	x = ( x + -0x1);
label_cond_5e:
	i = ( i + 0x1);
	goto label_goto_3e;
	// 2652    .line 5333
label_cond_61:
	if ( i >= 0 )
		goto label_cond_6a;
	cVar2 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar2;
	// 2663    .end local v2    # "x":I
	// 2664    .restart local v3    # "x":I
label_cond_69:
	x = x;
	//    .end local v3    # "x":I
	//    .restart local v2    # "x":I
label_cond_6a:
	return x;

}
// .method public static offsetByCodePoints([CIIII)I
int java::lang::Character::offsetByCodePoints(std::shared_ptr<char[]> a,int start,int count,int index,int codePointOffset)
{
	
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar0;
	
	//    .param p0, "a"    # [C
	//    .param p1, "start"    # I
	//    .param p2, "count"    # I
	//    .param p3, "index"    # I
	//    .param p4, "codePointOffset"    # I
	if ( count >  (a->size() -  start) )
		goto label_cond_6;
	if ( start >= 0 )
		goto label_cond_c;
label_cond_6:
	cVar0 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar0;
	// 2701    .line 5375
label_cond_c:
	if ( count < 0 ) 
		goto label_cond_6;
	if ( index <  start )
		goto label_cond_6;
	if ( index >  (start + count) )
		goto label_cond_6;
	return java::lang::Character::offsetByCodePointsImpl(a, start, count, index, codePointOffset);

}
// .method static offsetByCodePointsImpl([CIIII)I
int java::lang::Character::offsetByCodePointsImpl(std::shared_ptr<char[]> a,int start,int count,int index,int codePointOffset)
{
	
	int x;
	int limit;
	int i;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar0;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar1;
	
	//    .param p0, "a"    # [C
	//    .param p1, "start"    # I
	//    .param p2, "count"    # I
	//    .param p3, "index"    # I
	//    .param p4, "codePointOffset"    # I
	x = index;
	//    .local v2, "x":I
	if ( codePointOffset < 0 ) 
		goto label_cond_2d;
	limit = (start + count);
	//    .local v1, "limit":I
	i = 0x0;
	//    .local v0, "i":I
	x = x;
	//    .end local v2    # "x":I
	//    .local v3, "x":I
label_goto_7:
	if ( x >= limit )
		goto label_cond_25;
	if ( i >= codePointOffset )
		goto label_cond_25;
	x = ( x + 0x1);
	//    .end local v3    # "x":I
	//    .restart local v2    # "x":I
	if ( !(java::lang::Character::isHighSurrogate(a[x])) )  
		goto label_cond_21;
	if ( x >= limit )
		goto label_cond_21;
	if ( !(java::lang::Character::isLowSurrogate(a[x])) )  
		goto label_cond_21;
	x = ( x + 0x1);
label_cond_21:
	i = ( i + 0x1);
	x = x;
	//    .end local v2    # "x":I
	//    .restart local v3    # "x":I
	goto label_goto_7;
	// 2791    .line 5394
label_cond_25:
	if ( i >= codePointOffset )
		goto label_cond_55;
	cVar0 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar0;
	// 2802    .line 5399
	// 2803    .end local v0    # "i":I
	// 2804    .end local v1    # "limit":I
	// 2805    .end local v3    # "x":I
	// 2806    .restart local v2    # "x":I
label_cond_2d:
	i = codePointOffset;
	//    .restart local v0    # "i":I
label_goto_2e:
	if ( x <= start )
		goto label_cond_4d;
	if ( i >= 0 )
		goto label_cond_4d;
	x = ( x + -0x1);
	if ( !(java::lang::Character::isLowSurrogate(a[x])) )  
		goto label_cond_4a;
	if ( x <= start )
		goto label_cond_4a;
	if ( !(java::lang::Character::isHighSurrogate(a[( x + -0x1)])) )  
		goto label_cond_4a;
	x = ( x + -0x1);
label_cond_4a:
	i = ( i + 0x1);
	goto label_goto_2e;
	// 2850    .line 5405
label_cond_4d:
	if ( i >= 0 )
		goto label_cond_56;
	cVar1 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar1;
	// 2861    .end local v2    # "x":I
	// 2862    .restart local v1    # "limit":I
	// 2863    .restart local v3    # "x":I
label_cond_55:
	x = x;
	//    .end local v1    # "limit":I
	//    .end local v3    # "x":I
	//    .restart local v2    # "x":I
label_cond_56:
	return x;

}
// .method public static reverseBytes(C)C
char java::lang::Character::reverseBytes(char ch)
{
	
	//    .param p0, "ch"    # C
	return (char)((_shri((0xff00 &  ch),0x8) |  ( ch << 0x8)));

}
// .method public static toChars(I[CI)I
int java::lang::Character::toChars(int codePoint,std::shared_ptr<char[]> dst,int dstIndex)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p0, "codePoint"    # I
	//    .param p1, "dst"    # [C
	//    .param p2, "dstIndex"    # I
	if ( !(java::lang::Character::isBmpCodePoint(codePoint)) )  
		goto label_cond_b;
	dst[dstIndex] = (char)(codePoint);
	return 0x1;
	// 2920    .line 5164
label_cond_b:
	if ( !(java::lang::Character::isValidCodePoint(codePoint)) )  
		goto label_cond_16;
	java::lang::Character::toSurrogates(codePoint, dst, dstIndex);
	return 0x2;
	// 2936    .line 5168
label_cond_16:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar0;

}
// .method public static toChars(I)[C
char java::lang::Character::toChars(int codePoint)
{
	
	int cVar0;
	std::shared<std::vector<char[]>> cVar1;
	std::shared<std::vector<char[]>> result;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	
	//    .param p0, "codePoint"    # I
	cVar0 = 0x0;
	if ( !(java::lang::Character::isBmpCodePoint(codePoint)) )  
		goto label_cond_e;
	cVar1 = std::make_shared<std::vector<char[]>>(0x1);
	cVar1[cVar0] = (char)(codePoint);
	return cVar1;
	// 2970    .line 5191
label_cond_e:
	if ( !(java::lang::Character::isValidCodePoint(codePoint)) )  
		goto label_cond_1b;
	result = std::make_shared<std::vector<char[]>>(0x2);
	//    .local v0, "result":[C
	java::lang::Character::toSurrogates(codePoint, result, cVar0);
	return result;
	// 2990    .line 5196
	// 2991    .end local v0    # "result":[C
label_cond_1b:
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar2;

}
// .method public static toCodePoint(CC)I
int java::lang::Character::toCodePoint(char high,char low)
{
	
	//    .param p0, "high"    # C
	//    .param p1, "low"    # C
	return ((( high << 0xa) +  low) +  -0x35fdc00);

}
// .method public static toLowerCase(C)C
char java::lang::Character::toLowerCase(char ch)
{
	
	//    .param p0, "ch"    # C
	return (char)(java::lang::Character::toLowerCase(ch));

}
// .method public static toLowerCase(I)I
int java::lang::Character::toLowerCase(int codePoint)
{
	
	//    .param p0, "codePoint"    # I
	if ( codePoint <  0x41 )
		goto label_cond_b;
	if ( codePoint >  0x5a )
		goto label_cond_b;
	return ( codePoint + 0x20);
	// 3052    .line 6419
label_cond_b:
	if ( codePoint >= 0x80 )
		goto label_cond_10;
	return codePoint;
	// 3061    .line 6423
label_cond_10:
	return java::lang::Character::toLowerCaseImpl(codePoint);

}
// .method static native toLowerCaseImpl(I)I
int java::lang::Character::toLowerCaseImpl(int var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 3072    .end annotation

}
// .method public static toString(C)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::lang::Character::toString(char c)
{
	
	//    .param p0, "c"    # C
	return java::lang::String::valueOf(c);

}
// .method static toSurrogates(I[CI)V
void java::lang::Character::toSurrogates(int codePoint,std::shared_ptr<char[]> dst,int index)
{
	
	//    .param p0, "codePoint"    # I
	//    .param p1, "dst"    # [C
	//    .param p2, "index"    # I
	dst[( index + 0x1)] = java::lang::Character::lowSurrogate(codePoint);
	dst[index] = java::lang::Character::highSurrogate(codePoint);
	return;

}
// .method public static toTitleCase(C)C
char java::lang::Character::toTitleCase(char ch)
{
	
	//    .param p0, "ch"    # C
	return (char)(java::lang::Character::toTitleCase(ch));

}
// .method public static toTitleCase(I)I
int java::lang::Character::toTitleCase(int codePoint)
{
	
	//    .param p0, "codePoint"    # I
	return java::lang::Character::toTitleCaseImpl(codePoint);

}
// .method static native toTitleCaseImpl(I)I
int java::lang::Character::toTitleCaseImpl(int var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 3145    .end annotation

}
// .method public static toUpperCase(C)C
char java::lang::Character::toUpperCase(char ch)
{
	
	//    .param p0, "ch"    # C
	return (char)(java::lang::Character::toUpperCase(ch));

}
// .method public static toUpperCase(I)I
int java::lang::Character::toUpperCase(int codePoint)
{
	
	//    .param p0, "codePoint"    # I
	if ( codePoint <  0x61 )
		goto label_cond_b;
	if ( codePoint >  0x7a )
		goto label_cond_b;
	return ( codePoint + -0x20);
	// 3182    .line 6491
label_cond_b:
	if ( codePoint >= 0x80 )
		goto label_cond_10;
	return codePoint;
	// 3191    .line 6495
label_cond_10:
	return java::lang::Character::toUpperCaseImpl(codePoint);

}
// .method static native toUpperCaseImpl(I)I
int java::lang::Character::toUpperCaseImpl(int var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 3202    .end annotation

}
// .method public static valueOf(C)Ljava/lang/Character;
std::shared_ptr<java::lang::Character> java::lang::Character::valueOf(char c)
{
	
	std::shared_ptr<java::lang::Character> cVar0;
	
	//    .param p0, "c"    # C
	if ( c >  0x7f )
		goto label_cond_9;
	return java::lang::Character_S_CharacterCache::cache[c];
	// 3222    .line 4597
label_cond_9:
	cVar0 = std::make_shared<java::lang::Character>(c);
	return cVar0;

}
// .method public charValue()C
char java::lang::Character::charValue()
{
	
	return this->value;

}
// .method public compareTo(Ljava/lang/Character;)I
int java::lang::Character::compareTo(std::shared_ptr<java::lang::Character> anotherCharacter)
{
	
	//    .param p1, "anotherCharacter"    # Ljava/lang/Character;
	return java::lang::Character::compare(this->value, anotherCharacter->value);

}
// .method public equals(Ljava/lang/Object;)Z
bool java::lang::Character::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar1;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( !(obj->instanceOf("java::lang::Character")) )  
		goto label_cond_11;
	obj->checkCast("java::lang::Character");
	//    .end local p1    # "obj":Ljava/lang/Object;
	if ( this->value != obj->charValue() )
		goto label_cond_10;
	cVar1 = 0x1;
label_cond_10:
	return cVar1;
	// 3303    .line 4647
	// 3304    .restart local p1    # "obj":Ljava/lang/Object;
label_cond_11:
	return cVar1;

}
// .method public hashCode()I
int java::lang::Character::hashCode()
{
	
	return java::lang::Character::hashCode(this->value);

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::lang::Character::toString()
{
	
	std::shared<std::vector<char[]>> buf;
	
	buf = std::make_shared<std::vector<char[]>>(0x1);
	buf[0x0] = this->value;
	//    .local v0, "buf":[C
	return java::lang::String::valueOf(buf);

}


