// CPP L:\smali2cpp20\x64\Release\out\java\lang\Double.smali
#include "java2ctype.h"
#include "java.lang.Class.h"
#include "java.lang.Double.h"
#include "java.lang.Long.h"
#include "java.lang.Math.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "sun.misc.FloatingDecimal.h"

static java::lang::Double::BYTES = 0x8;
static java::lang::Double::MAX_EXPONENT = 0x3ff;
static java::lang::Double::MAX_VALUE = 1.7976931348623157E308;
static java::lang::Double::MIN_EXPONENT = -0x3fe;
static java::lang::Double::MIN_NORMAL = 2.2250738585072014E-308;
static java::lang::Double::MIN_VALUE = 4.9E-324;
static java::lang::Double::NEGATIVE_INFINITY = -Infinity;
static java::lang::Double::NaN = NaN;
static java::lang::Double::POSITIVE_INFINITY = Infinity;
static java::lang::Double::SIZE = 0x40;
static java::lang::Double::TYPE;
static java::lang::Double::serialVersionUID = -0x7f4c3db5d69404fcL;
// .method static constructor <clinit>()V
void java::lang::Double::static_cinit()
{
	
	java::lang::Double::TYPE = double[]()->getComponentType();
	return;

}
// .method public constructor <init>(D)V
java::lang::Double::Double(double value)
{
	
	//    .param p1, "value"    # D
	// 084    invoke-direct {p0}, Ljava/lang/Number;-><init>()V
	this->value = value;
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::lang::Double::Double(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 097        value = {
	// 098            Ljava/lang/NumberFormatException;
	// 099        }
	// 100    .end annotation
	// 104    invoke-direct {p0}, Ljava/lang/Number;-><init>()V
	this->value = java::lang::Double::parseDouble(s);
	return;

}
// .method public static compare(DD)I
int java::lang::Double::compare(double d1,double d2)
{
	
	int cVar0;
	int cVar2;
	auto thisBits;
	auto anotherBits;
	
	//    .param p0, "d1"    # D
	//    .param p2, "d2"    # D
	cVar0 = 0x1;
	cVar2 = -0x1;
	if ( (d1 > d2) >= 0 )
		goto label_cond_7;
	return cVar2;
	// 135    .line 1003
label_cond_7:
	if ( (d1 < d2) <= 0 )
		goto label_cond_c;
	return cVar0;
	// 144    .line 1007
label_cond_c:
	thisBits = java::lang::Double::doubleToLongBits(d1);
	//    .local v2, "thisBits":J
	anotherBits = java::lang::Double::doubleToLongBits(d2);
	//    .local v0, "anotherBits":J
	if ( (thisBits > anotherBits) )     
		goto label_cond_1a;
	cVar2 = 0x0;
label_cond_19:
label_goto_19:
	return cVar2;
	// 168    .line 1011
label_cond_1a:
	if ( (thisBits > anotherBits) < 0 ) 
		goto label_cond_19;
	cVar2 = cVar0;
	goto label_goto_19;

}
// .method public static doubleToLongBits(D)J
long long java::lang::Double::doubleToLongBits(double value)
{
	
	long long cVar0;
	long long result;
	
	//    .param p0, "value"    # D
	cVar0 = 0x7ff0000000000000L;
	result = java::lang::Double::doubleToRawLongBits(value);
	//    .local v0, "result":J
	if ( ((result & cVar0) > cVar0) )     
		goto label_cond_1a;
	if ( !(((0xfffffffffffffL &  result) > 0x0)) )  
		goto label_cond_1a;
label_cond_1a:
	return result;

}
// .method public static hashCode(D)I
int java::lang::Double::hashCode(double value)
{
	
	auto bits;
	
	//    .param p0, "value"    # D
	bits = java::lang::Double::doubleToLongBits(value);
	//    .local v0, "bits":J
	return (int)((_ushrll(bits,0x20) ^  bits));

}
// .method public static isFinite(D)Z
bool java::lang::Double::isFinite(double d)
{
	
	bool cVar0;
	
	//    .param p0, "d"    # D
	if ( (java::lang::Math::abs(d) > 0x7fefffffffffffffL) > 0 ) 
		goto label_cond_f;
	cVar0 = 0x1;
label_goto_e:
	return cVar0;
label_cond_f:
	cVar0 = 0x0;
	goto label_goto_e;

}
// .method public static isInfinite(D)Z
bool java::lang::Double::isInfinite(double v)
{
	
	bool cVar0;
	
	//    .param p0, "v"    # D
	cVar0 = 0x1;
	if ( !((v < 0x7ff0000000000000L)) )  
		goto label_cond_d;
	if ( (v < -0x10000000000000L) )     
		goto label_cond_e;
label_cond_d:
label_goto_d:
	return cVar0;
label_cond_e:
	cVar0 = 0x0;
	goto label_goto_d;

}
// .method public static isNaN(D)Z
bool java::lang::Double::isNaN(double v)
{
	
	bool cVar0;
	
	//    .param p0, "v"    # D
	if ( !((v < v)) )  
		goto label_cond_6;
	cVar0 = 0x1;
label_goto_5:
	return cVar0;
label_cond_6:
	cVar0 = 0x0;
	goto label_goto_5;

}
// .method public static max(DD)D
double java::lang::Double::max(double a,double b)
{
	
	//    .param p0, "a"    # D
	//    .param p2, "b"    # D
	return java::lang::Math::max(a, b);

}
// .method public static min(DD)D
double java::lang::Double::min(double a,double b)
{
	
	//    .param p0, "a"    # D
	//    .param p2, "b"    # D
	return java::lang::Math::min(a, b);

}
// .method public static parseDouble(Ljava/lang/String;)D
double java::lang::Double::parseDouble(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 358        value = {
	// 359            Ljava/lang/NumberFormatException;
	// 360        }
	// 361    .end annotation
	return sun::misc::FloatingDecimal::parseDouble(s);

}
// .method public static sum(DD)D
double java::lang::Double::sum(double a,double b)
{
	
	//    .param p0, "a"    # D
	//    .param p2, "b"    # D
	return (a +  b);

}
// .method public static toHexString(D)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::lang::Double::toHexString(double d)
{
	
	std::shared_ptr<java::lang::StringBuilder> answer;
	double cVar0;
	int subnormal;
	std::shared_ptr<java::lang::String> cVar1;
	std::shared_ptr<java::lang::String> signif;
	std::shared_ptr<java::lang::String> cVar2;
	int cVar3;
	
	//    .param p0, "d"    # D
	if ( java::lang::Double::isFinite(d) )     
		goto label_cond_b;
	return java::lang::Double::toString(d);
	// 403    .line 293
label_cond_b:
	answer = std::make_shared<java::lang::StringBuilder>(0x18);
	//    .local v0, "answer":Ljava/lang/StringBuilder;
	if ( (java::lang::Math::copySign(0x3ff0000000000000L, d) < -0x4010000000000000L) )     
		goto label_cond_24;
	answer->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")));
label_cond_24:
	answer->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("0x")));
	cVar0 = java::lang::Math::abs(d);
	if ( (cVar0 < 0x0) )     
		goto label_cond_3f;
	answer->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("0.0p0")));
label_goto_3a:
	return answer->toString();
	// 461    .line 305
label_cond_3f:
	if ( (cVar0 > 0x10000000000000L) >= 0 )
		goto label_cond_83;
	subnormal = 0x1;
	//    .local v4, "subnormal":Z
label_goto_46:
	//    .local v2, "signifBits":J
	if ( !(subnormal) )  
		goto label_cond_85;
	cVar1 = std::make_shared<java::lang::String>(std::make_shared<char[]>("0."));
label_goto_59:
	answer->append(cVar1);
	signif = java::lang::Long::toHexString(((java::lang::Double::doubleToLongBits(cVar0) &  0xfffffffffffffL) | 0x1000000000000000L))->substring(0x3, 0x10);
	//    .local v1, "signif":Ljava/lang/String;
	if ( !(signif->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("0000000000000")))) )  
		goto label_cond_89;
	cVar2 = std::make_shared<java::lang::String>(std::make_shared<char[]>("0"));
label_goto_73:
	answer->append(cVar2);
	answer->append(0x70);
	if ( !(subnormal) )  
		goto label_cond_94;
	cVar3 = -0x3fe;
label_goto_7f:
	answer->append(cVar3);
	goto label_goto_3a;
	// 546    .line 305
	// 547    .end local v1    # "signif":Ljava/lang/String;
	// 548    .end local v2    # "signifBits":J
	// 549    .end local v4    # "subnormal":Z
label_cond_83:
	subnormal = 0x0;
	//    .restart local v4    # "subnormal":Z
	goto label_goto_46;
	// 556    .line 316
	// 557    .restart local v2    # "signifBits":J
label_cond_85:
	cVar1 = std::make_shared<java::lang::String>(std::make_shared<char[]>("1."));
	goto label_goto_59;
	// 563    .line 325
	// 564    .restart local v1    # "signif":Ljava/lang/String;
label_cond_89:
	cVar2 = signif->replaceFirst(std::make_shared<java::lang::String>(std::make_shared<char[]>("0{1,12}$")), std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	goto label_goto_73;
	// 576    .line 334
label_cond_94:
	cVar3 = java::lang::Math::getExponent(cVar0);
	goto label_goto_7f;

}
// .method public static toString(D)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::lang::Double::toString(double d)
{
	
	//    .param p0, "d"    # D
	return sun::misc::FloatingDecimal::toJavaFormatString(d);

}
// .method public static valueOf(D)Ljava/lang/Double;
std::shared_ptr<java::lang::Double> java::lang::Double::valueOf(double d)
{
	
	std::shared_ptr<java::lang::Double> cVar0;
	
	//    .param p0, "d"    # D
	cVar0 = std::make_shared<java::lang::Double>(d);
	return cVar0;

}
// .method public static valueOf(Ljava/lang/String;)Ljava/lang/Double;
std::shared_ptr<java::lang::Double> java::lang::Double::valueOf(std::shared_ptr<java::lang::String> s)
{
	
	std::shared_ptr<java::lang::Double> cVar0;
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 615        value = {
	// 616            Ljava/lang/NumberFormatException;
	// 617        }
	// 618    .end annotation
	cVar0 = std::make_shared<java::lang::Double>(java::lang::Double::parseDouble(s));
	return cVar0;

}
// .method public byteValue()B
unsigned char java::lang::Double::byteValue()
{
	
	return (unsigned char)((int)(this->value));

}
// .method public compareTo(Ljava/lang/Double;)I
int java::lang::Double::compareTo(std::shared_ptr<java::lang::Double> anotherDouble)
{
	
	//    .param p1, "anotherDouble"    # Ljava/lang/Double;
	return java::lang::Double::compare(this->value, anotherDouble->value);

}
// .method public doubleValue()D
double java::lang::Double::doubleValue()
{
	
	return this->value;

}
// .method public equals(Ljava/lang/Object;)Z
bool java::lang::Double::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar1;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( !(obj->instanceOf("java::lang::Double")) )  
		goto label_cond_18;
	obj->checkCast("java::lang::Double");
	//    .end local p1    # "obj":Ljava/lang/Object;
	if ( (java::lang::Double::doubleToLongBits(obj->value) > java::lang::Double::doubleToLongBits(this->value)) )     
		goto label_cond_18;
	cVar1 = 0x1;
label_cond_18:
	return cVar1;

}
// .method public floatValue()F
float java::lang::Double::floatValue()
{
	
	return (float)(this->value);

}
// .method public hashCode()I
int java::lang::Double::hashCode()
{
	
	return java::lang::Double::hashCode(this->value);

}
// .method public intValue()I
int java::lang::Double::intValue()
{
	
	return (int)(this->value);

}
// .method public isInfinite()Z
bool java::lang::Double::isInfinite()
{
	
	return java::lang::Double::isInfinite(this->value);

}
// .method public isNaN()Z
bool java::lang::Double::isNaN()
{
	
	return java::lang::Double::isNaN(this->value);

}
// .method public longValue()J
long long java::lang::Double::longValue()
{
	
	return (long long)(this->value);

}
// .method public shortValue()S
short java::lang::Double::shortValue()
{
	
	return (short)((int)(this->value));

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::lang::Double::toString()
{
	
	return java::lang::Double::toString(this->value);

}


