// CPP L:\smali2cpp20\x64\Release\out\java\lang\Long.smali
#include "java2ctype.h"
#include "java.lang.Character.h"
#include "java.lang.Class.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Integer.h"
#include "java.lang.Long_S_LongCache.h"
#include "java.lang.Long.h"
#include "java.lang.Math.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.NumberFormatException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.math.BigInteger.h"

static java::lang::Long::BYTES = 0x8;
static java::lang::Long::MAX_VALUE = 0x7fffffffffffffffL;
static java::lang::Long::MIN_VALUE = -0x8000000000000000L;
static java::lang::Long::SIZE = 0x40;
static java::lang::Long::TYPE;
static java::lang::Long::serialVersionUID = 0x3b8be490cc8f23dfL;
// .method static constructor <clinit>()V
void java::lang::Long::static_cinit()
{
	
	java::lang::Long::TYPE = long long[]()->getComponentType();
	return;

}
// .method public constructor <init>(J)V
java::lang::Long::Long(long long value)
{
	
	//    .param p1, "value"    # J
	// 078    invoke-direct {p0}, Ljava/lang/Number;-><init>()V
	this->value = value;
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::lang::Long::Long(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 091        value = {
	// 092            Ljava/lang/NumberFormatException;
	// 093        }
	// 094    .end annotation
	// 098    invoke-direct {p0}, Ljava/lang/Number;-><init>()V
	this->value = java::lang::Long::parseLong(s, 0xa);
	return;

}
// .method public static bitCount(J)I
int java::lang::Long::bitCount(long long i)
{
	
	long long cVar0;
	long long cVar1;
	long long cVar2;
	long long cVar3;
	long long cVar4;
	long long cVar5;
	
	//    .param p0, "i"    # J
	cVar0 = 0x3333333333333333L;
	cVar1 = (i -  (_ushrll(i,0x1) &  0x5555555555555555L));
	cVar2 = ((cVar1 & cVar0) + (_ushrll(cVar1,0x2) &  cVar0));
	cVar3 = ((_ushrll(cVar2,0x4) +  cVar2) & 0xf0f0f0f0f0f0f0fL);
	cVar4 = (cVar3 +  _ushrll(cVar3,0x8));
	cVar5 = (cVar4 +  _ushrll(cVar4,0x10));
	return ( (int)((cVar5 +  _ushrll(cVar5,0x20))) & 0x7f);

}
// .method public static compare(JJ)I
int java::lang::Long::compare(long long x,long long y)
{
	
	int cVar0;
	
	//    .param p0, "x"    # J
	//    .param p2, "y"    # J
	if ( (x > y) >= 0 )
		goto label_cond_6;
	cVar0 = -0x1;
label_goto_5:
	return cVar0;
label_cond_6:
	if ( (x > y) )     
		goto label_cond_c;
	cVar0 = 0x0;
	goto label_goto_5;
label_cond_c:
	cVar0 = 0x1;
	goto label_goto_5;

}
// .method public static compareUnsigned(JJ)I
int java::lang::Long::compareUnsigned(long long x,long long y)
{
	
	long long cVar0;
	
	//    .param p0, "x"    # J
	//    .param p2, "y"    # J
	cVar0 = -0x8000000000000000L;
	return java::lang::Long::compare((x + cVar0), (cVar0 +  y));

}
// .method public static decode(Ljava/lang/String;)Ljava/lang/Long;
std::shared_ptr<java::lang::Long> java::lang::Long::decode(std::shared_ptr<java::lang::String> nm)
{
	
	int index;
	std::shared_ptr<java::lang::NumberFormatException> cVar0;
	int firstChar;
	int negative;
	int radix;
	std::shared_ptr<java::lang::NumberFormatException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::Long> result;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "nm"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 237        value = {
	// 238            Ljava/lang/NumberFormatException;
	// 239        }
	// 240    .end annotation
	0xa;
	//    .local v5, "radix":I
	index = 0x0;
	//    .local v3, "index":I
	0x0;
	//    .local v4, "negative":Z
	if ( nm->length() )     
		goto label_cond_14;
	cVar0 = std::make_shared<java::lang::NumberFormatException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Zero length string")));
	// throw
	throw cVar0;
	// 273    .line 895
label_cond_14:
	firstChar = nm->charAt(0x0);
	//    .local v2, "firstChar":C
	if ( firstChar != 0x2d )
		goto label_cond_4f;
	negative = 0x1;
	index = 0x1;
label_cond_1e:
label_goto_1e:
	if ( nm->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("0x")), index) )     
		goto label_cond_30;
	if ( !(nm->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("0X")), index)) )  
		goto label_cond_55;
label_cond_30:
	index = ( index + 0x2);
	radix = 0x10;
label_cond_34:
label_goto_34:
	if ( nm->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")), index) )     
		goto label_cond_46;
	if ( !(nm->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("+")), index)) )  
		goto label_cond_79;
label_cond_46:
	cVar1 = std::make_shared<java::lang::NumberFormatException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Sign character in wrong position")));
	// throw
	throw cVar1;
	// 346    .line 900
label_cond_4f:
	if ( firstChar != 0x2b )
		goto label_cond_1e;
	index = 0x1;
	goto label_goto_1e;
	// 357    .line 908
label_cond_55:
	if ( !(nm->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("#")), index)) )  
		goto label_cond_63;
	index = ( index + 0x1);
	0x10;
	goto label_goto_34;
	// 375    .line 912
label_cond_63:
	if ( !(nm->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("0")), index)) )  
		goto label_cond_34;
	if ( nm->length() <= ( index + 0x1) )
		goto label_cond_34;
	index = ( index + 0x1);
	0x8;
	goto label_goto_34;
	// 401    .line 921
label_cond_79:
	try {
	//label_try_start_79:
	result = java::lang::Long::valueOf(nm->substring(index), radix);
	//    .local v6, "result":Ljava/lang/Long;
	if ( !(negative) )  
		goto label_cond_8c;
	//label_try_end_8b:
	}
	catch (java::lang::NumberFormatException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_8d;
	}
	//    .catch Ljava/lang/NumberFormatException; {:try_start_79 .. :try_end_8b} :catch_8d
	result = java::lang::Long::valueOf((0 - result->longValue()));
label_cond_8c:
label_goto_8c:
	return result;
	// 433    .line 923
	// 434    .end local v6    # "result":Ljava/lang/Long;
label_catch_8d:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/NumberFormatException;
	if ( !(negative) )  
		goto label_cond_ad;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "constant":Ljava/lang/String;
label_goto_a8:
	result = java::lang::Long::valueOf(constant, radix);
	//    .restart local v6    # "result":Ljava/lang/Long;
	goto label_goto_8c;
	// 474    .line 928
	// 475    .end local v0    # "constant":Ljava/lang/String;
	// 476    .end local v6    # "result":Ljava/lang/Long;
label_cond_ad:
	//    .restart local v0    # "constant":Ljava/lang/String;
	goto label_goto_a8;

}
// .method public static divideUnsigned(JJ)J
long long java::lang::Long::divideUnsigned(long long dividend,long long divisor)
{
	
	long long cVar0;
	
	//    .param p0, "dividend"    # J
	//    .param p2, "divisor"    # J
	cVar0 = 0x0;
	if ( (divisor > cVar0) >= 0 )
		goto label_cond_10;
	if ( java::lang::Long::compareUnsigned(dividend, divisor) >= 0 )
		goto label_cond_d;
label_goto_c:
	return cVar0;
label_cond_d:
	cVar0 = 0x1;
	goto label_goto_c;
	// 514    .line 1298
label_cond_10:
	if ( (dividend > cVar0) <= 0 )
		goto label_cond_17;
	return (dividend / divisor);
	// 525    .line 1307
label_cond_17:
	return java::lang::Long::toUnsignedBigInteger(dividend)->divide(java::lang::Long::toUnsignedBigInteger(divisor))->longValue();

}
// .method static formatUnsignedLong(JI[CII)I
int java::lang::Long::formatUnsignedLong(long long val,int shift,std::shared_ptr<char[]> buf,int offset,int len)
{
	
	int charPos;
	long long val;
	
	//    .param p0, "val"    # J
	//    .param p2, "shift"    # I
	//    .param p3, "buf"    # [C
	//    .param p4, "offset"    # I
	//    .param p5, "len"    # I
	//    .local v0, "charPos":I
	//    .local v2, "radix":I
	//    .local v1, "mask":I
label_cond_6:
	charPos = ( charPos + -0x1);
	buf[(offset + charPos)] = java::lang::Integer::digits[((int)(val) &  ( (0x1 << shift) + -0x1))];
	val = _ushrll(val,shift);
	if ( !((val > 0x0)) )  
		goto label_cond_1b;
	if ( charPos > 0 ) 
		goto label_cond_6;
label_cond_1b:
	return charPos;

}
// .method static getChars(JI[C)V
void java::lang::Long::getChars(long long cVar0,int index,std::shared_ptr<char[]> buf)
{
	
	int charPos;
	int sign;
	long long cVar0;
	long long q;
	int r;
	int i2;
	int q2;
	
	//    .param p0, "i"    # J
	//    .param p2, "index"    # I
	//    .param p3, "buf"    # [C
	charPos = index;
	//    .local v0, "charPos":I
	0x0;
	//    .local v6, "sign":C
	if ( (cVar0 > 0x0) >= 0 )
		goto label_cond_b;
	sign = 0x2d;
	cVar0 = (0 - cVar0);
label_cond_b:
label_goto_b:
	if ( (cVar0 > 0x7fffffff) <= 0 )
		goto label_cond_36;
	q = (cVar0 / 0x64);
	//    .local v2, "q":J
	r = (int)((cVar0 - (((q << 0x6) +  (q << 0x5)) +  (q << 0x2))));
	//    .local v5, "r":I
	cVar0 = q;
	charPos = ( charPos + -0x1);
	buf[charPos] = java::lang::Integer::DigitOnes[r];
	charPos = ( charPos + -0x1);
	buf[charPos] = java::lang::Integer::DigitTens[r];
	goto label_goto_b;
	// 692    .line 453
	// 693    .end local v2    # "q":J
	// 694    .end local v5    # "r":I
label_cond_36:
	i2 = (int)(cVar0);
	//    .local v1, "i2":I
label_goto_37:
	if ( i2 <  0x10000 )
		goto label_cond_59;
	q2 = ( i2 / 0x64);
	//    .local v4, "q2":I
	r = (i2 - ((( q2 << 0x6) +  ( q2 << 0x5)) +  ( q2 << 0x2)));
	//    .restart local v5    # "r":I
	i2 = q2;
	charPos = ( charPos + -0x1);
	buf[charPos] = java::lang::Integer::DigitOnes[r];
	charPos = ( charPos + -0x1);
	buf[charPos] = java::lang::Integer::DigitTens[r];
	goto label_goto_37;
	// 746    .line 466
	// 747    .end local v4    # "q2":I
	// 748    .end local v5    # "r":I
label_cond_59:
	q2 = _ushri((0xcccd *  i2),0x13);
	//    .restart local v4    # "q2":I
	//    .restart local v5    # "r":I
	charPos = ( charPos + -0x1);
	buf[charPos] = java::lang::Integer::digits[(i2 - (( q2 << 0x3) +  ( q2 << 0x1)))];
	i2 = q2;
	if ( q2 )     
		goto label_cond_59;
	if ( !(sign) )  
		goto label_cond_77;
	buf[( charPos + -0x1)] = sign;
label_cond_77:
	return;

}
// .method public static getLong(Ljava/lang/String;)Ljava/lang/Long;
std::shared_ptr<java::lang::Long> java::lang::Long::getLong(std::shared_ptr<java::lang::String> nm)
{
	
	//    .param p0, "nm"    # Ljava/lang/String;
	return java::lang::Long::getLong(nm, 0x0);

}
// .method public static getLong(Ljava/lang/String;J)Ljava/lang/Long;
std::shared_ptr<java::lang::Long> java::lang::Long::getLong(std::shared_ptr<java::lang::String> nm,long long val)
{
	
	std::shared_ptr<java::lang::Long> result;
	
	//    .param p0, "nm"    # Ljava/lang/String;
	//    .param p1, "val"    # J
	result = java::lang::Long::getLong(nm, 0x0);
	//    .local v0, "result":Ljava/lang/Long;
	if ( result )     
		goto label_cond_b;
	//    .end local v0    # "result":Ljava/lang/Long;
label_cond_b:
	return result;

}
// .method public static getLong(Ljava/lang/String;Ljava/lang/Long;)Ljava/lang/Long;
std::shared_ptr<java::lang::Long> java::lang::Long::getLong(std::shared_ptr<java::lang::String> nm,std::shared_ptr<java::lang::Long> val)
{
	
	std::shared_ptr<java::lang::String> v;
	std::vector<std::any> tryCatchExcetionList;
	auto v;
	
	//    .param p0, "nm"    # Ljava/lang/String;
	//    .param p1, "val"    # Ljava/lang/Long;
	v = 0x0;
	//    .local v2, "v":Ljava/lang/String;
	try {
	//label_try_start_1:
	//label_try_end_4:
	}
	catch (java::lang::IllegalArgumentException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_c;
	}
	catch (java::lang::NullPointerException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_c;
	}
	//    .catch Ljava/lang/IllegalArgumentException; {:try_start_1 .. :try_end_4} :catch_c
	//    .catch Ljava/lang/NullPointerException; {:try_start_1 .. :try_end_4} :catch_c
	v = java::lang::System::getProperty(nm);
	//    .end local v2    # "v":Ljava/lang/String;
label_goto_5:
	if ( !(v) )  
		goto label_cond_f;
	try {
	//label_try_start_7:
	//label_try_end_a:
	}
	catch (java::lang::NumberFormatException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_e;
	}
	//    .catch Ljava/lang/NumberFormatException; {:try_start_7 .. :try_end_a} :catch_e
	return java::lang::Long::decode(v);
	// 870    .line 1210
	// 871    .restart local v2    # "v":Ljava/lang/String;
label_catch_c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/RuntimeException;
	goto label_goto_5;
	// 878    .line 1215
	// 879    .end local v1    # "e":Ljava/lang/RuntimeException;
	// 880    .end local v2    # "v":Ljava/lang/String;
label_catch_e:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
label_cond_f:
	return val;

}
// .method public static hashCode(J)I
int java::lang::Long::hashCode(long long value)
{
	
	//    .param p0, "value"    # J
	return (int)((_ushrll(value,0x20) ^  value));

}
// .method public static highestOneBit(J)J
long long java::lang::Long::highestOneBit(long long i)
{
	
	int cVar0;
	long long cVar1;
	long long cVar2;
	long long cVar3;
	long long cVar4;
	long long cVar5;
	long long cVar6;
	
	//    .param p0, "i"    # J
	cVar0 = 0x1;
	cVar1 = (i |  _shrll(i,cVar0));
	cVar2 = (cVar1 |  _shrll(cVar1,0x2));
	cVar3 = (cVar2 |  _shrll(cVar2,0x4));
	cVar4 = (cVar3 |  _shrll(cVar3,0x8));
	cVar5 = (cVar4 |  _shrll(cVar4,0x10));
	cVar6 = (cVar5 |  _shrll(cVar5,0x20));
	return (cVar6 - _ushrll(cVar6,cVar0));

}
// .method public static lowestOneBit(J)J
long long java::lang::Long::lowestOneBit(long long i)
{
	
	//    .param p0, "i"    # J
	return ((0 - i) &  i);

}
// .method public static max(JJ)J
long long java::lang::Long::max(long long a,long long b)
{
	
	//    .param p0, "a"    # J
	//    .param p2, "b"    # J
	return java::lang::Math::max(a, b);

}
// .method public static min(JJ)J
long long java::lang::Long::min(long long a,long long b)
{
	
	//    .param p0, "a"    # J
	//    .param p2, "b"    # J
	return java::lang::Math::min(a, b);

}
// .method public static numberOfLeadingZeros(J)I
int java::lang::Long::numberOfLeadingZeros(long long i)
{
	
	int x;
	int n;
	
	//    .param p0, "i"    # J
	if ( (i > 0x0) )     
		goto label_cond_9;
	return 0x40;
	// 1019    .line 1421
label_cond_9:
	//    .local v0, "n":I
	x = (int)(_ushrll(i,0x20));
	//    .local v1, "x":I
	if ( x )     
		goto label_cond_14;
	n = 0x21;
	x = (int)(i);
label_cond_14:
	if ( _ushri(x,0x10) )     
		goto label_cond_1c;
	n = ( n + 0x10);
	x = ( x << 0x10);
label_cond_1c:
	if ( _ushri(x,0x18) )     
		goto label_cond_24;
	n = ( n + 0x8);
	x = ( x << 0x8);
label_cond_24:
	if ( _ushri(x,0x1c) )     
		goto label_cond_2c;
	n = ( n + 0x4);
	x = ( x << 0x4);
label_cond_2c:
	if ( _ushri(x,0x1e) )     
		goto label_cond_34;
label_cond_34:
	return (0x1 -  _ushri(x,0x1f));

}
// .method public static numberOfTrailingZeros(J)I
int java::lang::Long::numberOfTrailingZeros(long long i)
{
	
	int y;
	int n;
	int x;
	
	//    .param p0, "i"    # J
	if ( (i > 0x0) )     
		goto label_cond_9;
	return 0x40;
	// 1105    .line 1450
label_cond_9:
	//    .local v0, "n":I
	y = (int)(i);
	//    .local v2, "y":I
	if ( !(y) )  
		goto label_cond_34;
	n = 0x1f;
	x = y;
	//    .local v1, "x":I
label_goto_11:
	y = ( x << 0x10);
	if ( !(y) )  
		goto label_cond_18;
	n = ( n + -0x10);
	x = y;
label_cond_18:
	y = ( x << 0x8);
	if ( !(y) )  
		goto label_cond_1f;
	n = ( n + -0x8);
	x = y;
label_cond_1f:
	y = ( x << 0x4);
	if ( !(y) )  
		goto label_cond_26;
	n = ( n + -0x4);
	x = y;
label_cond_26:
	y = ( x << 0x2);
	if ( !(y) )  
		goto label_cond_2d;
label_cond_2d:
	return (0x3f - _ushri(( x << 0x1),0x1f));
	// 1171    .line 1451
	// 1172    .end local v1    # "x":I
label_cond_34:
	x = (int)(_ushrll(i,0x20));
	//    .restart local v1    # "x":I
	goto label_goto_11;

}
// .method public static parseLong(Ljava/lang/String;)J
long long java::lang::Long::parseLong(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1188        value = {
	// 1189            Ljava/lang/NumberFormatException;
	// 1190        }
	// 1191    .end annotation
	return java::lang::Long::parseLong(s, 0xa);

}
// .method public static parseLong(Ljava/lang/String;I)J
long long java::lang::Long::parseLong(std::shared_ptr<java::lang::String> s,int radix)
{
	
	std::shared_ptr<java::lang::NumberFormatException> cVar0;
	std::shared_ptr<java::lang::NumberFormatException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::NumberFormatException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	long long result;
	int len;
	int firstChar;
	auto limit;
	int i;
	int digit;
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .param p1, "radix"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1209        value = {
	// 1210            Ljava/lang/NumberFormatException;
	// 1211        }
	// 1212    .end annotation
	if ( s )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::NumberFormatException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("null")));
	// throw
	throw cVar0;
	// 1227    .line 556
label_cond_b:
	if ( radix >= 0x2 )
		goto label_cond_33;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::NumberFormatException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("radix ")))->append(radix)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" less than Character.MIN_RADIX")))->toString());
	// throw
	throw cVar1;
	// 1270    .line 560
label_cond_33:
	if ( radix <= 0x24 )
		goto label_cond_5c;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::lang::NumberFormatException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("radix ")))->append(radix)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" greater than Character.MAX_RADIX")))->toString());
	// throw
	throw cVar3;
	// 1313    .line 565
label_cond_5c:
	result = 0x0;
	//    .local v12, "result":J
	//    .local v7, "negative":Z
	//    .local v4, "i":I
	len = s->length();
	//    .local v6, "len":I
	//    .local v8, "limit":J
	if ( len <= 0 )
		goto label_cond_c8;
	firstChar = s->charAt(0x0);
	//    .local v3, "firstChar":C
	if ( firstChar >= 0x30 )
		goto label_cond_8f;
	if ( firstChar != 0x2d )
		goto label_cond_85;
	limit = -0x8000000000000000L;
label_cond_7d:
	if ( len != 0x1 )
		goto label_cond_8e;
	// throw
	throw java::lang::NumberFormatException::forInputString(s);
	// 1377    .line 578
label_cond_85:
	if ( firstChar == 0x2b )
		goto label_cond_7d;
	// throw
	throw java::lang::NumberFormatException::forInputString(s);
	// 1390    .line 583
label_cond_8e:
label_cond_8f:
	//    .local v10, "multmin":J
	i = 0x0;
	//    .end local v4    # "i":I
	//    .local v5, "i":I
label_goto_95:
	if ( i >= len )
		goto label_cond_cd;
	//    .end local v5    # "i":I
	//    .restart local v4    # "i":I
	digit = java::lang::Character::digit(s->charAt(i), radix);
	//    .local v2, "digit":I
	if ( digit >= 0 )
		goto label_cond_ac;
	// throw
	throw java::lang::NumberFormatException::forInputString(s);
	// 1439    .line 592
label_cond_ac:
	if ( (result > (-0x7fffffffffffffffL / (long long)(radix))) >= 0 )
		goto label_cond_b5;
	// throw
	throw java::lang::NumberFormatException::forInputString(s);
	// 1452    .line 595
label_cond_b5:
	result = (result *  (long long)(radix));
	if ( (result > ((long long)(digit) +  limit)) >= 0 )
		goto label_cond_c4;
	// throw
	throw java::lang::NumberFormatException::forInputString(s);
	// 1476    .line 599
label_cond_c4:
	result = (result -  (long long)(digit));
	i = ( i + 0x1);
	//    .end local v4    # "i":I
	//    .restart local v5    # "i":I
	goto label_goto_95;
	// 1488    .line 602
	// 1489    .end local v2    # "digit":I
	// 1490    .end local v3    # "firstChar":C
	// 1491    .end local v5    # "i":I
	// 1492    .end local v10    # "multmin":J
	// 1493    .restart local v4    # "i":I
label_cond_c8:
	// throw
	throw java::lang::NumberFormatException::forInputString(s);
	// 1501    .line 604
	// 1502    .end local v4    # "i":I
	// 1503    .restart local v3    # "firstChar":C
	// 1504    .restart local v5    # "i":I
	// 1505    .restart local v10    # "multmin":J
label_cond_cd:
	if ( !(0x0) )  
		goto label_cond_d0;
	//    .end local v12    # "result":J
label_goto_cf:
	return result;
	// 1513    .restart local v12    # "result":J
label_cond_d0:
	result = (0 - result);
	goto label_goto_cf;

}
// .method public static parseUnsignedLong(Ljava/lang/String;)J
long long java::lang::Long::parseUnsignedLong(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1524        value = {
	// 1525            Ljava/lang/NumberFormatException;
	// 1526        }
	// 1527    .end annotation
	return java::lang::Long::parseUnsignedLong(s, 0xa);

}
// .method public static parseUnsignedLong(Ljava/lang/String;I)J
long long java::lang::Long::parseUnsignedLong(std::shared_ptr<java::lang::String> s,int radix)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::lang::NumberFormatException> cVar2;
	int len;
	std::shared_ptr<java::lang::NumberFormatException> cVar3;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar4;
	long long first;
	int second;
	std::shared_ptr<java::lang::NumberFormatException> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	long long result;
	std::shared_ptr<java::lang::NumberFormatException> cVar7;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar8;
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .param p1, "radix"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1545        value = {
	// 1546            Ljava/lang/NumberFormatException;
	// 1547        }
	// 1548    .end annotation
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( s )     
		goto label_cond_d;
	cVar2 = std::make_shared<java::lang::NumberFormatException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("null")));
	// throw
	throw cVar2;
	// 1567    .line 684
label_cond_d:
	len = s->length();
	//    .local v3, "len":I
	if ( len <= 0 )
		goto label_cond_8a;
	//    .local v2, "firstChar":C
	if ( s->charAt(cVar1) != 0x2d )
		goto label_cond_2c;
	cVar4 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar4[cVar1] = s;
	cVar3 = std::make_shared<java::lang::NumberFormatException>(java::lang::String::format(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal leading minus sign on unsigned string %s.")), cVar4));
	// throw
	throw cVar3;
	// 1609    .line 692
label_cond_2c:
	if ( len <= 0xc )
		goto label_cond_38;
	if ( radix != 0xa )
		goto label_cond_3d;
	if ( len >  0x12 )
		goto label_cond_3d;
label_cond_38:
	return java::lang::Long::parseLong(s, radix);
	// 1632    .line 698
label_cond_3d:
	first = java::lang::Long::parseLong(s->substring(cVar1, ( len + -0x1)), radix);
	//    .local v0, "first":J
	second = java::lang::Character::digit(s->charAt(( len + -0x1)), radix);
	//    .local v6, "second":I
	if ( second >= 0 )
		goto label_cond_6d;
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	cVar5 = std::make_shared<java::lang::NumberFormatException>(cVar6->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad digit at end of ")))->append(s)->toString());
	// throw
	throw cVar5;
	// 1685    .line 703
label_cond_6d:
	result = (((long long)(radix) *  first) + (long long)(second));
	//    .local v4, "result":J
	if ( java::lang::Long::compareUnsigned(result, first) >= 0 )
		goto label_cond_89;
	cVar8 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar8[cVar1] = s;
	cVar7 = std::make_shared<java::lang::NumberFormatException>(java::lang::String::format(std::make_shared<java::lang::String>(std::make_shared<char[]>("String value %s exceeds range of unsigned long.")), cVar8));
	// throw
	throw cVar7;
	// 1722    .line 723
label_cond_89:
	return result;
	// 1726    .line 726
	// 1727    .end local v0    # "first":J
	// 1728    .end local v2    # "firstChar":C
	// 1729    .end local v4    # "result":J
	// 1730    .end local v6    # "second":I
label_cond_8a:
	// throw
	throw java::lang::NumberFormatException::forInputString(s);

}
// .method public static remainderUnsigned(JJ)J
long long java::lang::Long::remainderUnsigned(long long dividend,long long divisor)
{
	
	long long cVar0;
	
	//    .param p0, "dividend"    # J
	//    .param p2, "divisor"    # J
	cVar0 = 0x0;
	if ( (dividend > cVar0) <= 0 )
		goto label_cond_d;
	if ( (divisor > cVar0) <= 0 )
		goto label_cond_d;
	return (dividend % divisor);
	// 1761    .line 1328
label_cond_d:
	if ( java::lang::Long::compareUnsigned(dividend, divisor) >= 0 )
		goto label_cond_14;
	return dividend;
	// 1772    .line 1331
label_cond_14:
	return java::lang::Long::toUnsignedBigInteger(dividend)->remainder(java::lang::Long::toUnsignedBigInteger(divisor))->longValue();

}
// .method public static reverse(J)J
long long java::lang::Long::reverse(long long i)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	long long cVar5;
	long long cVar6;
	long long cVar7;
	long long cVar8;
	
	//    .param p0, "i"    # J
	cVar0 = 0x10;
	cVar1 = 0x8;
	cVar2 = 0x4;
	cVar3 = 0x2;
	cVar4 = 0x1;
	cVar5 = (((0x5555555555555555L &  i) << cVar4) | (_ushrll(i,cVar4) &  0x5555555555555555L));
	cVar6 = (((0x3333333333333333L &  cVar5) << cVar3) | (_ushrll(cVar5,cVar3) &  0x3333333333333333L));
	cVar7 = (((0xf0f0f0f0f0f0f0fL &  cVar6) << cVar2) | (_ushrll(cVar6,cVar2) &  0xf0f0f0f0f0f0f0fL));
	cVar8 = (((0xff00ff00ff00ffL &  cVar7) << cVar1) | (_ushrll(cVar7,cVar1) &  0xff00ff00ff00ffL));
	return ((((cVar8 << 0x30) |  ((0xffff0000L &  cVar8) << cVar0)) |  (_ushrll(cVar8,cVar0) &  0xffff0000L)) | _ushrll(cVar8,0x30));

}
// .method public static reverseBytes(J)J
long long java::lang::Long::reverseBytes(long long i)
{
	
	long long cVar0;
	long long cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	long long cVar5;
	
	//    .param p0, "i"    # J
	cVar0 = 0xff00ff00ff00ffL;
	cVar1 = 0xffff0000L;
	cVar2 = 0x30;
	cVar3 = 0x10;
	cVar4 = 0x8;
	cVar5 = (((i & cVar0) << cVar4) | (_ushrll(i,cVar4) &  cVar0));
	return ((((cVar5 << cVar2) |  ((cVar5 & cVar1) << cVar3)) |  (_ushrll(cVar5,cVar3) &  cVar1)) |  _ushrll(cVar5,cVar2));

}
// .method public static rotateLeft(JI)J
long long java::lang::Long::rotateLeft(long long i,int distance)
{
	
	//    .param p0, "i"    # J
	//    .param p2, "distance"    # I
	return ((i << distance) |  _ushrll(i,(0 - distance)));

}
// .method public static rotateRight(JI)J
long long java::lang::Long::rotateRight(long long i,int distance)
{
	
	//    .param p0, "i"    # J
	//    .param p2, "distance"    # I
	return (_ushrll(i,distance) |  (i << (0 - distance)));

}
// .method public static signum(J)I
int java::lang::Long::signum(long long i)
{
	
	int cVar0;
	
	//    .param p0, "i"    # J
	cVar0 = 0x3f;
	return (int)((_shrll(i,cVar0) |  _ushrll((0 - i),cVar0)));

}
// .method static stringSize(J)I
int java::lang::Long::stringSize(long long x)
{
	
	int cVar0;
	auto p;
	int i;
	long long p;
	
	//    .param p0, "x"    # J
	cVar0 = 0x13;
	p = 0xa;
	//    .local v2, "p":J
	i = 0x1;
	//    .local v0, "i":I
label_goto_5:
	if ( i >= cVar0 )
		goto label_cond_12;
	if ( (x > p) >= 0 )
		goto label_cond_c;
	return i;
	// 2040    .line 483
label_cond_c:
	p = (p *  0xa);
	i = ( i + 0x1);
	goto label_goto_5;
	// 2051    .line 485
label_cond_12:
	return cVar0;

}
// .method public static sum(JJ)J
long long java::lang::Long::sum(long long a,long long b)
{
	
	//    .param p0, "a"    # J
	//    .param p2, "b"    # J
	return (a + b);

}
// .method public static toBinaryString(J)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::lang::Long::toBinaryString(long long i)
{
	
	//    .param p0, "i"    # J
	return java::lang::Long::toUnsignedString0(i, 0x1);

}
// .method public static toHexString(J)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::lang::Long::toHexString(long long i)
{
	
	//    .param p0, "i"    # J
	return java::lang::Long::toUnsignedString0(i, 0x4);

}
// .method public static toOctalString(J)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::lang::Long::toOctalString(long long i)
{
	
	//    .param p0, "i"    # J
	return java::lang::Long::toUnsignedString0(i, 0x3);

}
// .method public static toString(J)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::lang::Long::toString(long long i)
{
	
	int size;
	std::shared<std::vector<char[]>> buf;
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p0, "i"    # J
	if ( (i > -0x8000000000000000L) )     
		goto label_cond_a;
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("-9223372036854775808"));
	// 2130    .line 397
label_cond_a:
	if ( (i > 0x0) >= 0 )
		goto label_cond_22;
	size = ( java::lang::Long::stringSize((0 - i)) + 0x1);
	//    .local v1, "size":I
label_goto_17:
	buf = std::make_shared<std::vector<char[]>>(size);
	//    .local v0, "buf":[C
	java::lang::Long::getChars(i, size, buf);
	cVar0 = std::make_shared<java::lang::String>(buf);
	return cVar0;
	// 2162    .line 397
	// 2163    .end local v0    # "buf":[C
	// 2164    .end local v1    # "size":I
label_cond_22:
	size = java::lang::Long::stringSize(i);
	//    .restart local v1    # "size":I
	goto label_goto_17;

}
// .method public static toString(JI)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::lang::Long::toString(long long cVar1,int cVar0)
{
	
	int cVar0;
	std::shared<std::vector<char[]>> buf;
	int charPos;
	int negative;
	long long cVar1;
	std::shared_ptr<java::lang::String> cVar3;
	
	//    .param p0, "i"    # J
	//    .param p2, "radix"    # I
	if ( cVar0 <  0x2 )
		goto label_cond_7;
	if ( cVar0 <= 0x24 )
		goto label_cond_9;
label_cond_7:
	cVar0 = 0xa;
label_cond_9:
	if ( cVar0 != 0xa )
		goto label_cond_12;
	return java::lang::Long::toString(cVar1);
	// 2206    .line 126
label_cond_12:
	buf = std::make_shared<std::vector<char[]>>(0x41);
	//    .local v0, "buf":[C
	charPos = 0x40;
	//    .local v1, "charPos":I
	if ( (cVar1 > 0x0) >= 0 )
		goto label_cond_3a;
	negative = 0x1;
	//    .local v3, "negative":Z
label_goto_1f:
	if ( negative )     
		goto label_cond_38;
	cVar1 = (0 - cVar1);
	charPos = charPos;
	//    .end local v1    # "charPos":I
	//    .local v2, "charPos":I
label_goto_23:
	if ( (cVar1 > (long long)((0 - cVar0))) > 0 ) 
		goto label_cond_3c;
	//    .end local v2    # "charPos":I
	//    .restart local v1    # "charPos":I
	buf[charPos] = java::lang::Integer::digits[(int)((0 - (cVar1 % (long long)(cVar0))))];
	cVar1 = (cVar1 /  (long long)(cVar0));
label_cond_38:
	charPos = charPos;
	//    .end local v1    # "charPos":I
	//    .restart local v2    # "charPos":I
	goto label_goto_23;
	// 2279    .line 128
	// 2280    .end local v2    # "charPos":I
	// 2281    .end local v3    # "negative":Z
	// 2282    .restart local v1    # "charPos":I
label_cond_3a:
	negative = 0x0;
	//    .restart local v3    # "negative":Z
	goto label_goto_1f;
	// 2289    .line 138
	// 2290    .end local v1    # "charPos":I
	// 2291    .restart local v2    # "charPos":I
label_cond_3c:
	buf[charPos] = java::lang::Integer::digits[(int)((0 - cVar1))];
	if ( !(negative) )  
		goto label_cond_54;
	charPos = ( charPos + -0x1);
	//    .end local v2    # "charPos":I
	//    .restart local v1    # "charPos":I
	buf[charPos] = 0x2d;
label_goto_4c:
	cVar3 = std::make_shared<java::lang::String>(buf, charPos, ( charPos - 0x41));
	return cVar3;
	// 2325    .end local v1    # "charPos":I
	// 2326    .restart local v2    # "charPos":I
label_cond_54:
	charPos = charPos;
	//    .end local v2    # "charPos":I
	//    .restart local v1    # "charPos":I
	goto label_goto_4c;

}
// .method private static toUnsignedBigInteger(J)Ljava/math/BigInteger;
std::shared_ptr<java::math::BigInteger> java::lang::Long::toUnsignedBigInteger(long long i)
{
	
	int cVar0;
	
	//    .param p0, "i"    # J
	cVar0 = 0x20;
	if ( (i > 0x0) < 0 ) 
		goto label_cond_d;
	return java::math::BigInteger::valueOf(i);
	// 2356    .line 220
label_cond_d:
	//    .local v1, "upper":I
	//    .local v0, "lower":I
	return java::math::BigInteger::valueOf(java::lang::Integer::toUnsignedLong((int)(_ushrll(i,cVar0))))->shiftLeft(cVar0)->add(java::math::BigInteger::valueOf(java::lang::Integer::toUnsignedLong((int)(i))));

}
// .method public static toUnsignedString(J)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::lang::Long::toUnsignedString(long long i)
{
	
	//    .param p0, "i"    # J
	return java::lang::Long::toUnsignedString(i, 0xa);

}
// .method public static toUnsignedString(JI)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::lang::Long::toUnsignedString(long long i,int radix)
{
	
	long long quot;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p0, "i"    # J
	//    .param p2, "radix"    # I
	if ( (i > 0x0) < 0 ) 
		goto label_cond_b;
	return java::lang::Long::toString(i, radix);
	// 2432    .line 177
label_cond_b:
	// switch
	{
	auto item = ( radix );
	if (item == 0x2) goto label_sswitch_17;
	if (item == 0x4) goto label_sswitch_1c;
	if (item == 0x8) goto label_sswitch_22;
	if (item == 0xa) goto label_sswitch_27;
	if (item == 0x10) goto label_sswitch_49;
	if (item == 0x20) goto label_sswitch_4e;
	}
	return java::lang::Long::toUnsignedBigInteger(i)->toString(radix);
	// 2447    .line 179
label_sswitch_17:
	return java::lang::Long::toBinaryString(i);
	// 2455    .line 182
label_sswitch_1c:
	return java::lang::Long::toUnsignedString0(i, 0x2);
	// 2465    .line 185
label_sswitch_22:
	return java::lang::Long::toOctalString(i);
	// 2473    .line 196
label_sswitch_27:
	quot = (_ushrll(i,0x1) / 0x5);
	//    .local v0, "quot":J
	//    .local v2, "rem":J
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(java::lang::Long::toString(quot))->append((i - (0xa *  quot)))->toString();
	// 2515    .line 201
	// 2516    .end local v0    # "quot":J
	// 2517    .end local v2    # "rem":J
label_sswitch_49:
	return java::lang::Long::toHexString(i);
	// 2525    .line 204
label_sswitch_4e:
	return java::lang::Long::toUnsignedString0(i, 0x5);
	// 2535    .line 177
	// 2536    :sswitch_data_54
	// 2537    .sparse-switch
	// 2538        0x2 -> :sswitch_17
	// 2539        0x4 -> :sswitch_1c
	// 2540        0x8 -> :sswitch_22
	// 2541        0xa -> :sswitch_27
	// 2542        0x10 -> :sswitch_49
	// 2543        0x20 -> :sswitch_4e
	// 2544    .end sparse-switch

}
// .method static toUnsignedString0(JI)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::lang::Long::toUnsignedString0(long long val,int shift)
{
	
	int chars;
	std::shared<std::vector<char[]>> buf;
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p0, "val"    # J
	//    .param p2, "shift"    # I
	//    .local v6, "mag":I
	chars = java::lang::Math::max(((( shift + -0x1) +  ( java::lang::Long::numberOfLeadingZeros(val) - 0x40)) /  shift), 0x1);
	//    .local v5, "chars":I
	buf = std::make_shared<std::vector<char[]>>(chars);
	//    .local v3, "buf":[C
	java::lang::Long::formatUnsignedLong(val, shift, buf, 0x0, chars);
	cVar0 = std::make_shared<java::lang::String>(buf);
	return cVar0;

}
// .method public static valueOf(J)Ljava/lang/Long;
std::shared_ptr<java::lang::Long> java::lang::Long::valueOf(long long l)
{
	
	std::shared_ptr<java::lang::Long> cVar0;
	
	//    .param p0, "l"    # J
	0x80;
	//    .local v0, "offset":I
	if ( (l > -0x80) < 0 ) 
		goto label_cond_16;
	if ( (l > 0x7f) > 0 ) 
		goto label_cond_16;
	return java::lang::Long_S_LongCache::cache[( (int)(l) + 0x80)];
	// 2629    .line 841
label_cond_16:
	cVar0 = std::make_shared<java::lang::Long>(l);
	return cVar0;

}
// .method public static valueOf(Ljava/lang/String;)Ljava/lang/Long;
std::shared_ptr<java::lang::Long> java::lang::Long::valueOf(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2642        value = {
	// 2643            Ljava/lang/NumberFormatException;
	// 2644        }
	// 2645    .end annotation
	return java::lang::Long::valueOf(java::lang::Long::parseLong(s, 0xa));

}
// .method public static valueOf(Ljava/lang/String;I)Ljava/lang/Long;
std::shared_ptr<java::lang::Long> java::lang::Long::valueOf(std::shared_ptr<java::lang::String> s,int radix)
{
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .param p1, "radix"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 2667        value = {
	// 2668            Ljava/lang/NumberFormatException;
	// 2669        }
	// 2670    .end annotation
	return java::lang::Long::valueOf(java::lang::Long::parseLong(s, radix));

}
// .method public byteValue()B
unsigned char java::lang::Long::byteValue()
{
	
	return (unsigned char)((int)(this->value));

}
// .method public compareTo(Ljava/lang/Long;)I
int java::lang::Long::compareTo(std::shared_ptr<java::lang::Long> anotherLong)
{
	
	//    .param p1, "anotherLong"    # Ljava/lang/Long;
	return java::lang::Long::compare(this->value, anotherLong->value);

}
// .method public doubleValue()D
double java::lang::Long::doubleValue()
{
	
	return (double)(this->value);

}
// .method public equals(Ljava/lang/Object;)Z
bool java::lang::Long::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar1;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( !(obj->instanceOf("java::lang::Long")) )  
		goto label_cond_13;
	obj->checkCast("java::lang::Long");
	//    .end local p1    # "obj":Ljava/lang/Object;
	if ( (this->value > obj->longValue()) )     
		goto label_cond_12;
	cVar1 = 0x1;
label_cond_12:
	return cVar1;
	// 2775    .line 1079
	// 2776    .restart local p1    # "obj":Ljava/lang/Object;
label_cond_13:
	return cVar1;

}
// .method public floatValue()F
float java::lang::Long::floatValue()
{
	
	return (float)(this->value);

}
// .method public hashCode()I
int java::lang::Long::hashCode()
{
	
	return java::lang::Long::hashCode(this->value);

}
// .method public intValue()I
int java::lang::Long::intValue()
{
	
	return (int)(this->value);

}
// .method public longValue()J
long long java::lang::Long::longValue()
{
	
	return this->value;

}
// .method public shortValue()S
short java::lang::Long::shortValue()
{
	
	return (short)((int)(this->value));

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::lang::Long::toString()
{
	
	return java::lang::Long::toString(this->value);

}


