// CPP L:\smali2cpp20\x64\Release\out\java\lang\Math.smali
#include "java2ctype.h"
#include "java.lang.ArithmeticException.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Double.h"
#include "java.lang.Float.h"
#include "java.lang.Math_S_RandomNumberGeneratorHolder.h"
#include "java.lang.Math.h"
#include "java.lang.String.h"
#include "java.util.Random.h"

static java::lang::Math::_assertionsDisabled;
static java::lang::Math::E = 2.718281828459045;
static java::lang::Math::PI = 3.141592653589793;
static java::lang::Math::negativeZeroDoubleBits;
static java::lang::Math::negativeZeroFloatBits;
static java::lang::Math::twoToTheDoubleScaleDown;
static java::lang::Math::twoToTheDoubleScaleUp;
// .method static constructor <clinit>()V
void java::lang::Math::static_cinit()
{
	
	java::lang::Math::_assertionsDisabled = ( java::lang::Math()->desiredAssertionStatus() ^ 0x1);
	java::lang::Math::negativeZeroFloatBits = (long long)(java::lang::Float::floatToRawIntBits(-0x80000000));
	java::lang::Math::negativeZeroDoubleBits = java::lang::Double::doubleToRawLongBits(-0x8000000000000000L);
	java::lang::Math::twoToTheDoubleScaleUp = java::lang::Math::powerOfTwoD(0x200);
	java::lang::Math::twoToTheDoubleScaleDown = java::lang::Math::powerOfTwoD(-0x200);
	return;

}
// .method private constructor <init>()V
java::lang::Math::Math()
{
	
	// 092    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static native IEEEremainder(DD)D
double java::lang::Math::IEEEremainder(double var0,double var1)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 099    .end annotation

}
// .method public static abs(D)D
double java::lang::Math::abs(double a)
{
	
	//    .param p0, "a"    # D
	return java::lang::Double::longBitsToDouble((java::lang::Double::doubleToRawLongBits(a) &  0x7fffffffffffffffL));

}
// .method public static abs(F)F
float java::lang::Math::abs(float a)
{
	
	//    .param p0, "a"    # F
	return java::lang::Float::intBitsToFloat((java::lang::Float::floatToRawIntBits(a) &  0x7fffffff));

}
// .method public static abs(I)I
int java::lang::Math::abs(int cVar0)
{
	
	int cVar0;
	
	//    .param p0, "a"    # I
	if ( cVar0 >= 0 )
		goto label_cond_3;
	cVar0 = (0 - cVar0);
	//    .end local p0    # "a":I
label_cond_3:
	return cVar0;

}
// .method public static abs(J)J
long long java::lang::Math::abs(long long cVar0)
{
	
	long long cVar0;
	
	//    .param p0, "a"    # J
	if ( (cVar0 > 0x0) >= 0 )
		goto label_cond_7;
	cVar0 = (0 - cVar0);
	//    .end local p0    # "a":J
label_cond_7:
	return cVar0;

}
// .method public static native acos(D)D
double java::lang::Math::acos(double var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 180    .end annotation

}
// .method public static addExact(II)I
int java::lang::Math::addExact(int x,int y)
{
	
	int r;
	std::shared_ptr<java::lang::ArithmeticException> cVar0;
	
	//    .param p0, "x"    # I
	//    .param p1, "y"    # I
	r = (x + y);
	//    .local v0, "r":I
	if ( ((x ^ r) &  (y ^ r)) >= 0 )
		goto label_cond_12;
	cVar0 = std::make_shared<java::lang::ArithmeticException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("integer overflow")));
	// throw
	throw cVar0;
	// 211    .line 797
label_cond_12:
	return r;

}
// .method public static addExact(JJ)J
long long java::lang::Math::addExact(long long x,long long y)
{
	
	long long r;
	std::shared_ptr<java::lang::ArithmeticException> cVar0;
	
	//    .param p0, "x"    # J
	//    .param p2, "y"    # J
	r = (x + y);
	//    .local v0, "r":J
	if ( (((x ^ r) &  (y ^ r)) > 0x0) >= 0 )
		goto label_cond_16;
	cVar0 = std::make_shared<java::lang::ArithmeticException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("long overflow")));
	// throw
	throw cVar0;
	// 248    .line 816
label_cond_16:
	return r;

}
// .method public static native asin(D)D
double java::lang::Math::asin(double var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 255    .end annotation

}
// .method public static native atan(D)D
double java::lang::Math::atan(double var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 260    .end annotation

}
// .method public static native atan2(DD)D
double java::lang::Math::atan2(double var0,double var1)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 265    .end annotation

}
// .method public static native cbrt(D)D
double java::lang::Math::cbrt(double var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 270    .end annotation

}
// .method public static native ceil(D)D
double java::lang::Math::ceil(double var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 275    .end annotation

}
// .method public static copySign(DD)D
double java::lang::Math::copySign(double magnitude,double sign)
{
	
	//    .param p0, "magnitude"    # D
	//    .param p2, "sign"    # D
	return java::lang::Double::longBitsToDouble(((java::lang::Double::doubleToRawLongBits(sign) &  -0x8000000000000000L) |  (java::lang::Double::doubleToRawLongBits(magnitude) &  0x7fffffffffffffffL)));

}
// .method public static copySign(FF)F
float java::lang::Math::copySign(float magnitude,float sign)
{
	
	//    .param p0, "magnitude"    # F
	//    .param p1, "sign"    # F
	return java::lang::Float::intBitsToFloat(((java::lang::Float::floatToRawIntBits(sign) &  -0x80000000) |  (java::lang::Float::floatToRawIntBits(magnitude) &  0x7fffffff)));

}
// .method public static native cos(D)D
double java::lang::Math::cos(double var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 356    .end annotation

}
// .method public static native cosh(D)D
double java::lang::Math::cosh(double var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 361    .end annotation

}
// .method public static decrementExact(I)I
int java::lang::Math::decrementExact(int a)
{
	
	std::shared_ptr<java::lang::ArithmeticException> cVar0;
	
	//    .param p0, "a"    # I
	if ( a != -0x80000000 )
		goto label_cond_d;
	cVar0 = std::make_shared<java::lang::ArithmeticException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("integer overflow")));
	// throw
	throw cVar0;
	// 383    .line 951
label_cond_d:
	return ( a + -0x1);

}
// .method public static decrementExact(J)J
long long java::lang::Math::decrementExact(long long a)
{
	
	std::shared_ptr<java::lang::ArithmeticException> cVar0;
	
	//    .param p0, "a"    # J
	if ( (a > -0x8000000000000000L) )     
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::ArithmeticException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("long overflow")));
	// throw
	throw cVar0;
	// 411    .line 968
label_cond_f:
	return (a - 0x1);

}
// .method public static native exp(D)D
double java::lang::Math::exp(double var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 422    .end annotation

}
// .method public static native expm1(D)D
double java::lang::Math::expm1(double var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 427    .end annotation

}
// .method public static native floor(D)D
double java::lang::Math::floor(double var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 432    .end annotation

}
// .method public static floorDiv(II)I
int java::lang::Math::floorDiv(int x,int y)
{
	
	int r;
	
	//    .param p0, "x"    # I
	//    .param p1, "y"    # I
	r = (x / y);
	//    .local v0, "r":I
	if ( (x ^ y) >= 0 )
		goto label_cond_c;
	if ( (r * y) == x )
		goto label_cond_c;
label_cond_c:
	return r;

}
// .method public static floorDiv(JJ)J
long long java::lang::Math::floorDiv(long long x,long long y)
{
	
	long long r;
	
	//    .param p0, "x"    # J
	//    .param p2, "y"    # J
	r = (x / y);
	//    .local v0, "r":J
	if ( ((x ^ y) > 0x0) >= 0 )
		goto label_cond_13;
	if ( !(((r * y) > x)) )  
		goto label_cond_13;
label_cond_13:
	return r;

}
// .method public static floorMod(II)I
int java::lang::Math::floorMod(int x,int y)
{
	
	//    .param p0, "x"    # I
	//    .param p1, "y"    # I
	//    .local v0, "r":I
	return (x - (java::lang::Math::floorDiv(x, y) *  y));

}
// .method public static floorMod(JJ)J
long long java::lang::Math::floorMod(long long x,long long y)
{
	
	//    .param p0, "x"    # J
	//    .param p2, "y"    # J
	return (x - (java::lang::Math::floorDiv(x, y) *  y));

}
// .method public static getExponent(D)I
int java::lang::Math::getExponent(double d)
{
	
	//    .param p0, "d"    # D
	return (int)((_shrll((java::lang::Double::doubleToRawLongBits(d) &  0x7ff0000000000000L),0x34) -  0x3ff));

}
// .method public static getExponent(F)I
int java::lang::Math::getExponent(float f)
{
	
	//    .param p0, "f"    # F
	return ( _shri((java::lang::Float::floatToRawIntBits(f) &  0x7f800000),0x17) + -0x7f);

}
// .method public static native hypot(DD)D
double java::lang::Math::hypot(double var0,double var1)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 589    .end annotation

}
// .method public static incrementExact(I)I
int java::lang::Math::incrementExact(int a)
{
	
	std::shared_ptr<java::lang::ArithmeticException> cVar0;
	
	//    .param p0, "a"    # I
	if ( a != 0x7fffffff )
		goto label_cond_e;
	cVar0 = std::make_shared<java::lang::ArithmeticException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("integer overflow")));
	// throw
	throw cVar0;
	// 611    .line 917
label_cond_e:
	return ( a + 0x1);

}
// .method public static incrementExact(J)J
long long java::lang::Math::incrementExact(long long a)
{
	
	std::shared_ptr<java::lang::ArithmeticException> cVar0;
	
	//    .param p0, "a"    # J
	if ( (a > 0x7fffffffffffffffL) )     
		goto label_cond_12;
	cVar0 = std::make_shared<java::lang::ArithmeticException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("long overflow")));
	// throw
	throw cVar0;
	// 639    .line 934
label_cond_12:
	return (0x1 +  a);

}
// .method public static native log(D)D
double java::lang::Math::log(double var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 650    .end annotation

}
// .method public static native log10(D)D
double java::lang::Math::log10(double var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 655    .end annotation

}
// .method public static native log1p(D)D
double java::lang::Math::log1p(double var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 660    .end annotation

}
// .method public static max(DD)D
double java::lang::Math::max(double a,double b)
{
	
	double cVar0;
	double a;
	
	//    .param p0, "a"    # D
	//    .param p2, "b"    # D
	cVar0 = 0x0;
	if ( !((a < a)) )  
		goto label_cond_7;
	return a;
	// 679    .line 1327
label_cond_7:
	if ( (a < cVar0) )     
		goto label_cond_1a;
	if ( (b < cVar0) )     
		goto label_cond_1a;
	if ( (java::lang::Double::doubleToRawLongBits(a) > java::lang::Math::negativeZeroDoubleBits) )     
		goto label_cond_1a;
	return b;
	// 704    .line 1333
label_cond_1a:
	if ( (a < b) < 0 ) 
		goto label_cond_1f;
	//    .end local p0    # "a":D
label_goto_1e:
	return a;
	// 714    .restart local p0    # "a":D
label_cond_1f:
	a = b;
	goto label_goto_1e;

}
// .method public static max(FF)F
float java::lang::Math::max(float a,float b)
{
	
	float cVar0;
	float a;
	
	//    .param p0, "a"    # F
	//    .param p1, "b"    # F
	cVar0 = 0x0;
	if ( !((a < a)) )  
		goto label_cond_6;
	return a;
	// 737    .line 1301
label_cond_6:
	if ( (a < cVar0) )     
		goto label_cond_1a;
	if ( (b < cVar0) )     
		goto label_cond_1a;
	if ( ((long long)(java::lang::Float::floatToRawIntBits(a)) > java::lang::Math::negativeZeroFloatBits) )     
		goto label_cond_1a;
	return b;
	// 764    .line 1307
label_cond_1a:
	if ( (a < b) < 0 ) 
		goto label_cond_1f;
	//    .end local p0    # "a":F
label_goto_1e:
	return a;
	// 774    .restart local p0    # "a":F
label_cond_1f:
	a = b;
	goto label_goto_1e;

}
// .method public static max(II)I
int java::lang::Math::max(int a,int b)
{
	
	int a;
	
	//    .param p0, "a"    # I
	//    .param p1, "b"    # I
	if ( a <  b )
		goto label_cond_3;
	//    .end local p0    # "a":I
label_goto_2:
	return a;
	// 794    .restart local p0    # "a":I
label_cond_3:
	a = b;
	goto label_goto_2;

}
// .method public static max(JJ)J
long long java::lang::Math::max(long long a,long long b)
{
	
	long long a;
	
	//    .param p0, "a"    # J
	//    .param p2, "b"    # J
	if ( (a > b) < 0 ) 
		goto label_cond_5;
	//    .end local p0    # "a":J
label_goto_4:
	return a;
	// 816    .restart local p0    # "a":J
label_cond_5:
	a = b;
	goto label_goto_4;

}
// .method public static min(DD)D
double java::lang::Math::min(double a,double b)
{
	
	double cVar0;
	double a;
	
	//    .param p0, "a"    # D
	//    .param p2, "b"    # D
	cVar0 = 0x0;
	if ( !((a < a)) )  
		goto label_cond_7;
	return a;
	// 839    .line 1407
label_cond_7:
	if ( (a < cVar0) )     
		goto label_cond_1a;
	if ( (b < cVar0) )     
		goto label_cond_1a;
	if ( (java::lang::Double::doubleToRawLongBits(b) > java::lang::Math::negativeZeroDoubleBits) )     
		goto label_cond_1a;
	return b;
	// 864    .line 1413
label_cond_1a:
	if ( (a > b) > 0 ) 
		goto label_cond_1f;
	//    .end local p0    # "a":D
label_goto_1e:
	return a;
	// 874    .restart local p0    # "a":D
label_cond_1f:
	a = b;
	goto label_goto_1e;

}
// .method public static min(FF)F
float java::lang::Math::min(float a,float b)
{
	
	float cVar0;
	float a;
	
	//    .param p0, "a"    # F
	//    .param p1, "b"    # F
	cVar0 = 0x0;
	if ( !((a < a)) )  
		goto label_cond_6;
	return a;
	// 897    .line 1381
label_cond_6:
	if ( (a < cVar0) )     
		goto label_cond_1a;
	if ( (b < cVar0) )     
		goto label_cond_1a;
	if ( ((long long)(java::lang::Float::floatToRawIntBits(b)) > java::lang::Math::negativeZeroFloatBits) )     
		goto label_cond_1a;
	return b;
	// 924    .line 1387
label_cond_1a:
	if ( (a > b) > 0 ) 
		goto label_cond_1f;
	//    .end local p0    # "a":F
label_goto_1e:
	return a;
	// 934    .restart local p0    # "a":F
label_cond_1f:
	a = b;
	goto label_goto_1e;

}
// .method public static min(II)I
int java::lang::Math::min(int a,int b)
{
	
	int a;
	
	//    .param p0, "a"    # I
	//    .param p1, "b"    # I
	if ( a >  b )
		goto label_cond_3;
	//    .end local p0    # "a":I
label_goto_2:
	return a;
	// 954    .restart local p0    # "a":I
label_cond_3:
	a = b;
	goto label_goto_2;

}
// .method public static min(JJ)J
long long java::lang::Math::min(long long a,long long b)
{
	
	long long a;
	
	//    .param p0, "a"    # J
	//    .param p2, "b"    # J
	if ( (a > b) > 0 ) 
		goto label_cond_5;
	//    .end local p0    # "a":J
label_goto_4:
	return a;
	// 976    .restart local p0    # "a":J
label_cond_5:
	a = b;
	goto label_goto_4;

}
// .method public static multiplyExact(II)I
int java::lang::Math::multiplyExact(int x,int y)
{
	
	long long r;
	std::shared_ptr<java::lang::ArithmeticException> cVar0;
	
	//    .param p0, "x"    # I
	//    .param p1, "y"    # I
	r = ((long long)(x) * (long long)(y));
	//    .local v0, "r":J
	if ( !(((long long)((int)(r)) > r)) )  
		goto label_cond_13;
	cVar0 = std::make_shared<java::lang::ArithmeticException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("integer overflow")));
	// throw
	throw cVar0;
	// 1015    .line 874
label_cond_13:
	return (int)(r);

}
// .method public static multiplyExact(JJ)J
long long java::lang::Math::multiplyExact(long long x,long long y)
{
	
	long long cVar0;
	long long r;
	std::shared_ptr<java::lang::ArithmeticException> cVar1;
	
	//    .param p0, "x"    # J
	//    .param p2, "y"    # J
	cVar0 = 0x0;
	r = (x * y);
	//    .local v4, "r":J
	//    .local v0, "ax":J
	//    .local v2, "ay":J
	if ( !((_ushrll((java::lang::Math::abs(x) | java::lang::Math::abs(y)),0x1f) > cVar0)) )  
		goto label_cond_34;
	if ( !((y > cVar0)) )  
		goto label_cond_28;
	if ( !(((r / y) > x)) )  
		goto label_cond_28;
label_cond_1f:
	cVar1 = std::make_shared<java::lang::ArithmeticException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("long overflow")));
	// throw
	throw cVar1;
	// 1078    .line 896
label_cond_28:
	if ( (x > -0x8000000000000000L) )     
		goto label_cond_34;
	if ( !((y > -0x1)) )  
		goto label_cond_1f;
label_cond_34:
	return r;

}
// .method public static negateExact(I)I
int java::lang::Math::negateExact(int a)
{
	
	std::shared_ptr<java::lang::ArithmeticException> cVar0;
	
	//    .param p0, "a"    # I
	if ( a != -0x80000000 )
		goto label_cond_d;
	cVar0 = std::make_shared<java::lang::ArithmeticException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("integer overflow")));
	// throw
	throw cVar0;
	// 1116    .line 985
label_cond_d:
	return (0 - a);

}
// .method public static negateExact(J)J
long long java::lang::Math::negateExact(long long a)
{
	
	std::shared_ptr<java::lang::ArithmeticException> cVar0;
	
	//    .param p0, "a"    # J
	if ( (a > -0x8000000000000000L) )     
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::ArithmeticException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("long overflow")));
	// throw
	throw cVar0;
	// 1144    .line 1002
label_cond_f:
	return (0 - a);

}
// .method public static nextAfter(DD)D
double java::lang::Math::nextAfter(double start,double direction)
{
	
	long long cVar0;
	long long cVar1;
	auto transducer;
	long long transducer;
	int cVar3;
	std::shared_ptr<java::lang::AssertionError> cVar4;
	
	//    .param p0, "start"    # D
	//    .param p2, "direction"    # D
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( java::lang::Double::isNaN(start) )     
		goto label_cond_10;
	if ( !(java::lang::Double::isNaN(direction)) )  
		goto label_cond_13;
label_cond_10:
	return (start +  direction);
	// 1180    .line 1905
label_cond_13:
	if ( (start < direction) )     
		goto label_cond_18;
	return direction;
	// 1189    .line 1910
label_cond_18:
	transducer = java::lang::Double::doubleToRawLongBits(( 0x0 + start));
	//    .local v0, "transducer":J
	if ( (direction < start) <= 0 )
		goto label_cond_30;
	if ( (transducer > cVar1) < 0 ) 
		goto label_cond_2d;
label_goto_27:
	transducer = (transducer +  cVar0);
label_goto_28:
	return java::lang::Double::longBitsToDouble(transducer);
	// 1221    .line 1925
label_cond_2d:
	cVar0 = -0x1;
	goto label_goto_27;
	// 1227    .line 1927
label_cond_30:
	if ( java::lang::Math::_assertionsDisabled )     
		goto label_cond_43;
	if ( (direction > start) >= 0 )
		goto label_cond_41;
	cVar3 = 0x1;
label_goto_39:
	if ( cVar3 )     
		goto label_cond_43;
	cVar4 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar4;
label_cond_41:
	cVar3 = 0x0;
	goto label_goto_39;
	// 1253    .line 1928
label_cond_43:
	if ( (transducer > cVar1) <= 0 )
		goto label_cond_49;
	transducer = (transducer -  cVar0);
	goto label_goto_28;
	// 1264    .line 1931
label_cond_49:
	if ( (transducer > cVar1) >= 0 )
		goto label_cond_4f;
	transducer = (transducer +  cVar0);
	goto label_goto_28;
	// 1275    .line 1942
label_cond_4f:
	transducer = -0x7fffffffffffffffL;
	goto label_goto_28;

}
// .method public static nextAfter(FD)F
float java::lang::Math::nextAfter(float start,double direction)
{
	
	int cVar0;
	int transducer;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	
	//    .param p0, "start"    # F
	//    .param p1, "direction"    # D
	cVar0 = 0x1;
	if ( java::lang::Float::isNaN(start) )     
		goto label_cond_e;
	if ( !(java::lang::Double::isNaN(direction)) )  
		goto label_cond_11;
label_cond_e:
	return ( (float)(direction) + start);
	// 1313    .line 2004
label_cond_11:
	if ( ((double)(start) < direction) )     
		goto label_cond_18;
	return (float)(direction);
	// 1326    .line 2009
label_cond_18:
	transducer = java::lang::Float::floatToRawIntBits(( 0x0 + start));
	//    .local v0, "transducer":I
	if ( (direction < (double)(start)) <= 0 )
		goto label_cond_2d;
	if ( transducer < 0 ) 
		goto label_cond_2b;
label_goto_25:
	transducer = (transducer +  cVar0);
label_goto_26:
	return java::lang::Float::intBitsToFloat(transducer);
	// 1358    .line 2024
label_cond_2b:
	cVar0 = -0x1;
	goto label_goto_25;
	// 1364    .line 2026
label_cond_2d:
	if ( java::lang::Math::_assertionsDisabled )     
		goto label_cond_40;
	if ( (direction > (double)(start)) >= 0 )
		goto label_cond_3e;
label_goto_36:
	if ( cVar0 )     
		goto label_cond_40;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
label_cond_3e:
	cVar0 = 0x0;
	goto label_goto_36;
	// 1390    .line 2027
label_cond_40:
	if ( transducer <= 0 )
		goto label_cond_45;
	transducer = ( transducer + -0x1);
	goto label_goto_26;
	// 1399    .line 2030
label_cond_45:
	if ( transducer >= 0 )
		goto label_cond_4a;
	transducer = ( transducer + 0x1);
	goto label_goto_26;
	// 1408    .line 2041
label_cond_4a:
	transducer = -0x7fffffff;
	goto label_goto_26;

}
// .method public static nextDown(D)D
double java::lang::Math::nextDown(double d)
{
	
	double cVar0;
	long long cVar1;
	
	//    .param p0, "d"    # D
	cVar0 = 0x0;
	if ( java::lang::Double::isNaN(d) )     
		goto label_cond_e;
	if ( (d < -0x10000000000000L) )     
		goto label_cond_f;
label_cond_e:
	return d;
	// 1439    .line 2147
label_cond_f:
	if ( (d < cVar0) )     
		goto label_cond_19;
	return -0x7fffffffffffffffL;
	// 1450    .line 2150
label_cond_19:
	if ( (d < cVar0) <= 0 )
		goto label_cond_29;
	cVar1 = -0x1;
label_goto_23:
	return java::lang::Double::longBitsToDouble((cVar1 +  java::lang::Double::doubleToRawLongBits(d)));
	// 1473    .line 2151
label_cond_29:
	cVar1 = 0x1;
	goto label_goto_23;

}
// .method public static nextDown(F)F
float java::lang::Math::nextDown(float f)
{
	
	float cVar0;
	int cVar1;
	
	//    .param p0, "f"    # F
	cVar0 = 0x0;
	if ( java::lang::Float::isNaN(f) )     
		goto label_cond_d;
	if ( (f < -0x800000) )     
		goto label_cond_e;
label_cond_d:
	return f;
	// 1504    .line 2184
label_cond_e:
	if ( (f < cVar0) )     
		goto label_cond_16;
	return -0x7fffffff;
	// 1515    .line 2187
label_cond_16:
	if ( (f < cVar0) <= 0 )
		goto label_cond_25;
	cVar1 = -0x1;
label_goto_1f:
	return java::lang::Float::intBitsToFloat((cVar1 +  java::lang::Float::floatToRawIntBits(f)));
	// 1538    .line 2188
label_cond_25:
	cVar1 = 0x1;
	goto label_goto_1f;

}
// .method public static nextUp(D)D
double java::lang::Math::nextUp(double d)
{
	
	double cVar0;
	double cVar1;
	long long cVar2;
	
	//    .param p0, "d"    # D
	cVar0 = 0x0;
	if ( java::lang::Double::isNaN(d) )     
		goto label_cond_e;
	if ( (d < 0x7ff0000000000000L) )     
		goto label_cond_f;
label_cond_e:
	return d;
	// 1569    .line 2077
label_cond_f:
	cVar1 = ( d + cVar0);
	if ( (cVar1 < cVar0) < 0 ) 
		goto label_cond_20;
	cVar2 = 0x1;
label_goto_1a:
	return java::lang::Double::longBitsToDouble((cVar2 +  java::lang::Double::doubleToRawLongBits(cVar1)));
	// 1595    .line 2079
label_cond_20:
	cVar2 = -0x1;
	goto label_goto_1a;

}
// .method public static nextUp(F)F
float java::lang::Math::nextUp(float f)
{
	
	float cVar0;
	float cVar1;
	int cVar2;
	
	//    .param p0, "f"    # F
	cVar0 = 0x0;
	if ( java::lang::Float::isNaN(f) )     
		goto label_cond_d;
	if ( (f < 0x7f800000) )     
		goto label_cond_e;
label_cond_d:
	return f;
	// 1626    .line 2112
label_cond_e:
	cVar1 = ( f + cVar0);
	if ( (cVar1 < cVar0) < 0 ) 
		goto label_cond_1e;
	cVar2 = 0x1;
label_goto_18:
	return java::lang::Float::intBitsToFloat((cVar2 +  java::lang::Float::floatToRawIntBits(cVar1)));
	// 1652    .line 2114
label_cond_1e:
	cVar2 = -0x1;
	goto label_goto_18;

}
// .method public static native pow(DD)D
double java::lang::Math::pow(double var0,double var1)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 1661    .end annotation

}
// .method static powerOfTwoD(I)D
double java::lang::Math::powerOfTwoD(int n)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p0, "n"    # I
	if ( java::lang::Math::_assertionsDisabled )     
		goto label_cond_12;
	if ( n <  -0x3fe )
		goto label_cond_c;
	if ( n <= 0x3ff )
		goto label_cond_12;
label_cond_c:
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 1689    .line 2361
label_cond_12:
	return java::lang::Double::longBitsToDouble(((((long long)(n) +  0x3ff) << 0x34) &  0x7ff0000000000000L));

}
// .method static powerOfTwoF(I)F
float java::lang::Math::powerOfTwoF(int n)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p0, "n"    # I
	if ( java::lang::Math::_assertionsDisabled )     
		goto label_cond_12;
	if ( n <  -0x7e )
		goto label_cond_c;
	if ( n <= 0x7f )
		goto label_cond_12;
label_cond_c:
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 1741    .line 2371
label_cond_12:
	return java::lang::Float::intBitsToFloat((( ( n + 0x7f) << 0x17) &  0x7f800000));

}
// .method public static random()D
double java::lang::Math::random()
{
	
	return java::lang::Math_S_RandomNumberGeneratorHolder::randomNumberGenerator->nextDouble();

}
// .method public static randomIntInternal()I
int java::lang::Math::randomIntInternal()
{
	
	return java::lang::Math_S_RandomNumberGeneratorHolder::randomNumberGenerator->nextInt();

}
// .method public static randomLongInternal()J
long long java::lang::Math::randomLongInternal()
{
	
	return java::lang::Math_S_RandomNumberGeneratorHolder::randomNumberGenerator->nextLong();

}
// .method public static native rint(D)D
double java::lang::Math::rint(double var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 1804    .end annotation

}
// .method public static round(F)I
int java::lang::Math::round(float a)
{
	
	int intBits;
	int shift;
	int r;
	
	//    .param p0, "a"    # F
	intBits = java::lang::Float::floatToRawIntBits(a);
	//    .local v1, "intBits":I
	//    .local v0, "biasedExp":I
	shift = ( _shri((0x7f800000 &  intBits),0x17) - 0x95);
	//    .local v3, "shift":I
	if ( ( shift & -0x20) )     
		goto label_cond_21;
	r = ((0x7fffff &  intBits) | 0x800000);
	//    .local v2, "r":I
	if ( intBits >= 0 )
		goto label_cond_1a;
label_cond_1a:
	return _shri(( _shri(r,shift) + 0x1),0x1);
	// 1863    .line 673
	// 1864    .end local v2    # "r":I
label_cond_21:
	return (int)(a);

}
// .method public static round(D)J
long long java::lang::Math::round(double a)
{
	
	long long cVar0;
	auto longBits;
	long long shift;
	long long r;
	
	//    .param p0, "a"    # D
	cVar0 = 0x0;
	longBits = java::lang::Double::doubleToRawLongBits(a);
	//    .local v2, "longBits":J
	//    .local v0, "biasedExp":J
	shift = (0x432 - _shrll((0x7ff0000000000000L &  longBits),0x34));
	//    .local v6, "shift":J
	if ( ((-0x40 &  shift) > cVar0) )     
		goto label_cond_30;
	r = ((0xfffffffffffffL &  longBits) | 0x10000000000000L);
	//    .local v4, "r":J
	if ( (longBits > cVar0) >= 0 )
		goto label_cond_27;
label_cond_27:
	return _shrll((_shrll(r,(int)(shift)) +  0x1),0x1);
	// 1947    .line 722
	// 1948    .end local v4    # "r":J
label_cond_30:
	return (long long)(a);

}
// .method public static scalb(DI)D
double java::lang::Math::scalb(double d,int scaleFactor)
{
	
	int cVar0;
	int t;
	int exp_adjust;
	double cVar1;
	int cVar2;
	
	//    .param p0, "d"    # D
	//    .param p2, "scaleFactor"    # I
	0x833;
	//    .local v0, "MAX_SCALE":I
	0x0;
	//    .local v1, "exp_adjust":I
	0x0;
	//    .local v4, "scale_increment":I
	0x7ff8000000000000L;
	//    .local v2, "exp_delta":D
	if ( scaleFactor >= 0 )
		goto label_cond_27;
	cVar0 = java::lang::Math::max(scaleFactor, -0x833);
label_goto_12:
	t = _ushri(_shri(cVar0,0x8),0x17);
	//    .local v5, "t":I
	exp_adjust = (( (cVar0 + t) & 0x1ff) - t);
	cVar1 = ( d * java::lang::Math::powerOfTwoD(exp_adjust));
	cVar2 = (cVar0 -  exp_adjust);
label_goto_22:
	if ( !(cVar2) )  
		goto label_cond_32;
	cVar1 = ( cVar1 * java::lang::Math::twoToTheDoubleScaleDown);
	cVar2 = (cVar2 -  -0x200);
	goto label_goto_22;
	// 2029    .line 2279
	// 2030    .end local v5    # "t":I
label_cond_27:
	cVar0 = java::lang::Math::min(scaleFactor, 0x833);
	0x200;
	java::lang::Math::twoToTheDoubleScaleUp;
	goto label_goto_12;
	// 2046    .line 2296
	// 2047    .restart local v5    # "t":I
label_cond_32:
	return cVar1;

}
// .method public static scalb(FI)F
float java::lang::Math::scalb(float f,int scaleFactor)
{
	
	//    .param p0, "f"    # F
	//    .param p1, "scaleFactor"    # I
	0x116;
	//    .local v0, "MAX_SCALE":I
	return (float)(( (double)(f) * java::lang::Math::powerOfTwoD(java::lang::Math::max(java::lang::Math::min(scaleFactor, 0x116), -0x116))));

}
// .method public static setRandomSeedInternal(J)V
void java::lang::Math::setRandomSeedInternal(long long seed)
{
	
	//    .param p0, "seed"    # J
	java::lang::Math_S_RandomNumberGeneratorHolder::randomNumberGenerator->setSeed(seed);
	return;

}
// .method public static signum(D)D
double java::lang::Math::signum(double d)
{
	
	double d;
	
	//    .param p0, "d"    # D
	if ( !((d < 0x0)) )  
		goto label_cond_c;
	if ( !(java::lang::Double::isNaN(d)) )  
		goto label_cond_d;
	//    .end local p0    # "d":D
label_cond_c:
label_goto_c:
	return d;
	// 2126    .restart local p0    # "d":D
label_cond_d:
	d = java::lang::Math::copySign(0x3ff0000000000000L, d);
	goto label_goto_c;

}
// .method public static signum(F)F
float java::lang::Math::signum(float f)
{
	
	float f;
	
	//    .param p0, "f"    # F
	if ( !((f < 0x0)) )  
		goto label_cond_b;
	if ( !(java::lang::Float::isNaN(f)) )  
		goto label_cond_c;
	//    .end local p0    # "f":F
label_cond_b:
label_goto_b:
	return f;
	// 2160    .restart local p0    # "f":F
label_cond_c:
	f = java::lang::Math::copySign(0x3f800000, f);
	goto label_goto_b;

}
// .method public static native sin(D)D
double java::lang::Math::sin(double var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 2173    .end annotation

}
// .method public static native sinh(D)D
double java::lang::Math::sinh(double var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 2178    .end annotation

}
// .method public static native sqrt(D)D
double java::lang::Math::sqrt(double var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 2183    .end annotation

}
// .method public static subtractExact(II)I
int java::lang::Math::subtractExact(int x,int y)
{
	
	int r;
	std::shared_ptr<java::lang::ArithmeticException> cVar0;
	
	//    .param p0, "x"    # I
	//    .param p1, "y"    # I
	r = (x - y);
	//    .local v0, "r":I
	if ( ((x ^ y) &  (x ^ r)) >= 0 )
		goto label_cond_12;
	cVar0 = std::make_shared<java::lang::ArithmeticException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("integer overflow")));
	// throw
	throw cVar0;
	// 2214    .line 836
label_cond_12:
	return r;

}
// .method public static subtractExact(JJ)J
long long java::lang::Math::subtractExact(long long x,long long y)
{
	
	long long r;
	std::shared_ptr<java::lang::ArithmeticException> cVar0;
	
	//    .param p0, "x"    # J
	//    .param p2, "y"    # J
	r = (x - y);
	//    .local v0, "r":J
	if ( (((x ^ y) &  (x ^ r)) > 0x0) >= 0 )
		goto label_cond_16;
	cVar0 = std::make_shared<java::lang::ArithmeticException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("long overflow")));
	// throw
	throw cVar0;
	// 2251    .line 856
label_cond_16:
	return r;

}
// .method public static native tan(D)D
double java::lang::Math::tan(double var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 2258    .end annotation

}
// .method public static native tanh(D)D
double java::lang::Math::tanh(double var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 2263    .end annotation

}
// .method public static toDegrees(D)D
double java::lang::Math::toDegrees(double angrad)
{
	
	//    .param p0, "angrad"    # D
	return ( ( 0x4066800000000000L * angrad) / 0x400921fb54442d18L);

}
// .method public static toIntExact(J)I
int java::lang::Math::toIntExact(long long value)
{
	
	std::shared_ptr<java::lang::ArithmeticException> cVar0;
	
	//    .param p0, "value"    # J
	if ( !(((long long)((int)(value)) > value)) )  
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::ArithmeticException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("integer overflow")));
	// throw
	throw cVar0;
	// 2306    .line 1018
label_cond_f:
	return (int)(value);

}
// .method public static toRadians(D)D
double java::lang::Math::toRadians(double angdeg)
{
	
	//    .param p0, "angdeg"    # D
	return ( (angdeg /  0x4066800000000000L) * 0x400921fb54442d18L);

}
// .method public static ulp(D)D
double java::lang::Math::ulp(double d)
{
	
	int cVar0;
	int exp;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	
	//    .param p0, "d"    # D
	cVar0 = -0x3fe;
	exp = java::lang::Math::getExponent(d);
	//    .local v0, "exp":I
	// switch
	{
	auto item = ( exp );
	if (item == -0x3ff) goto label_sswitch_1e;
	if (item == 0x400) goto label_sswitch_19;
	}
	if ( java::lang::Math::_assertionsDisabled )     
		goto label_cond_21;
	if ( exp >  0x3ff )
		goto label_cond_13;
	if ( exp >= cVar0 )
		goto label_cond_21;
label_cond_13:
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 2364    .line 1444
label_sswitch_19:
	return java::lang::Math::abs(d);
	// 2372    .line 1447
label_sswitch_1e:
	return 0x1;
	// 2378    .line 1453
label_cond_21:
	exp = ( exp + -0x34);
	if ( exp <  cVar0 )
		goto label_cond_2a;
	return java::lang::Math::powerOfTwoD(exp);
	// 2392    .line 1462
label_cond_2a:
	return java::lang::Double::longBitsToDouble((0x1 << ( exp + 0x432)));
	// 2407    .line 1442
	// 2408    :sswitch_data_34
	// 2409    .sparse-switch
	// 2410        -0x3ff -> :sswitch_1e
	// 2411        0x400 -> :sswitch_19
	// 2412    .end sparse-switch

}
// .method public static ulp(F)F
float java::lang::Math::ulp(float f)
{
	
	int cVar0;
	int exp;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	
	//    .param p0, "f"    # F
	cVar0 = -0x7e;
	exp = java::lang::Math::getExponent(f);
	//    .local v0, "exp":I
	// switch
	{
	auto item = ( exp );
	if (item == -0x7f) goto label_sswitch_1e;
	if (item == 0x80) goto label_sswitch_19;
	}
	if ( java::lang::Math::_assertionsDisabled )     
		goto label_cond_20;
	if ( exp >  0x7f )
		goto label_cond_13;
	if ( exp >= cVar0 )
		goto label_cond_20;
label_cond_13:
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 2449    .line 1495
label_sswitch_19:
	return java::lang::Math::abs(f);
	// 2457    .line 1498
label_sswitch_1e:
	return 0x1;
	// 2463    .line 1504
label_cond_20:
	exp = ( exp + -0x17);
	if ( exp <  cVar0 )
		goto label_cond_29;
	return java::lang::Math::powerOfTwoF(exp);
	// 2477    .line 1513
label_cond_29:
	return java::lang::Float::intBitsToFloat((0x1 << ( exp + 0x95)));
	// 2492    .line 1493
	// 2493    nop
	// 2495    :sswitch_data_34
	// 2496    .sparse-switch
	// 2497        -0x7f -> :sswitch_1e
	// 2498        0x80 -> :sswitch_19
	// 2499    .end sparse-switch

}


