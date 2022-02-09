// CPP L:\smali2cpp20\x64\Release\out\java\lang\Float.smali
#include "java2ctype.h"
#include "java.lang.Class.h"
#include "java.lang.Double.h"
#include "java.lang.Float.h"
#include "java.lang.Math.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "sun.misc.FloatingDecimal.h"

static java::lang::Float::BYTES = 0x4;
static java::lang::Float::MAX_EXPONENT = 0x7f;
static java::lang::Float::MAX_VALUE = 3.4028235E38f;
static java::lang::Float::MIN_EXPONENT = -0x7e;
static java::lang::Float::MIN_NORMAL = 1.17549435E-38f;
static java::lang::Float::MIN_VALUE = 1.4E-45f;
static java::lang::Float::NEGATIVE_INFINITY = -Infinityf;
static java::lang::Float::NaN = NaNf;
static java::lang::Float::POSITIVE_INFINITY = Infinityf;
static java::lang::Float::SIZE = 0x20;
static java::lang::Float::TYPE;
static java::lang::Float::serialVersionUID = -0x2512365d24c30f14L;
// .method static constructor <clinit>()V
void java::lang::Float::static_cinit()
{
	
	java::lang::Float::TYPE = float[]()->getComponentType();
	return;

}
// .method public constructor <init>(D)V
java::lang::Float::Float(double value)
{
	
	//    .param p1, "value"    # D
	// 084    invoke-direct {p0}, Ljava/lang/Number;-><init>()V
	this->value = (float)(value);
	return;

}
// .method public constructor <init>(F)V
java::lang::Float::Float(float value)
{
	
	//    .param p1, "value"    # F
	// 101    invoke-direct {p0}, Ljava/lang/Number;-><init>()V
	this->value = value;
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::lang::Float::Float(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 114        value = {
	// 115            Ljava/lang/NumberFormatException;
	// 116        }
	// 117    .end annotation
	// 121    invoke-direct {p0}, Ljava/lang/Number;-><init>()V
	this->value = java::lang::Float::parseFloat(s);
	return;

}
// .method public static compare(FF)I
int java::lang::Float::compare(float f1,float f2)
{
	
	int cVar0;
	int cVar2;
	int thisBits;
	int anotherBits;
	
	//    .param p0, "f1"    # F
	//    .param p1, "f2"    # F
	cVar0 = 0x1;
	cVar2 = -0x1;
	if ( (f1 > f2) >= 0 )
		goto label_cond_7;
	return cVar2;
	// 152    .line 910
label_cond_7:
	if ( (f1 < f2) <= 0 )
		goto label_cond_c;
	return cVar0;
	// 161    .line 914
label_cond_c:
	thisBits = java::lang::Float::floatToIntBits(f1);
	//    .local v1, "thisBits":I
	anotherBits = java::lang::Float::floatToIntBits(f2);
	//    .local v0, "anotherBits":I
	if ( thisBits != anotherBits )
		goto label_cond_18;
	cVar2 = 0x0;
label_cond_17:
label_goto_17:
	return cVar2;
	// 183    .line 918
label_cond_18:
	if ( thisBits <  anotherBits )
		goto label_cond_17;
	cVar2 = cVar0;
	goto label_goto_17;

}
// .method public static floatToIntBits(F)I
int java::lang::Float::floatToIntBits(float value)
{
	
	int cVar0;
	int result;
	
	//    .param p0, "value"    # F
	cVar0 = 0x7f800000;
	result = java::lang::Float::floatToRawIntBits(value);
	//    .local v0, "result":I
	if ( (result & cVar0) != cVar0 )
		goto label_cond_12;
	if ( !((0x7fffff &  result)) )  
		goto label_cond_12;
label_cond_12:
	return result;

}
// .method public static hashCode(F)I
int java::lang::Float::hashCode(float value)
{
	
	//    .param p0, "value"    # F
	return java::lang::Float::floatToIntBits(value);

}
// .method public static isFinite(F)Z
bool java::lang::Float::isFinite(float f)
{
	
	bool cVar0;
	
	//    .param p0, "f"    # F
	if ( (java::lang::Math::abs(f) > 0x7f7fffff) > 0 ) 
		goto label_cond_d;
	cVar0 = 0x1;
label_goto_c:
	return cVar0;
label_cond_d:
	cVar0 = 0x0;
	goto label_goto_c;

}
// .method public static isInfinite(F)Z
bool java::lang::Float::isInfinite(float v)
{
	
	bool cVar0;
	
	//    .param p0, "v"    # F
	cVar0 = 0x1;
	if ( !((v < 0x7f800000)) )  
		goto label_cond_d;
	if ( (v < -0x800000) )     
		goto label_cond_e;
label_cond_d:
label_goto_d:
	return cVar0;
label_cond_e:
	cVar0 = 0x0;
	goto label_goto_d;

}
// .method public static isNaN(F)Z
bool java::lang::Float::isNaN(float v)
{
	
	bool cVar0;
	
	//    .param p0, "v"    # F
	if ( !((v < v)) )  
		goto label_cond_6;
	cVar0 = 0x1;
label_goto_5:
	return cVar0;
label_cond_6:
	cVar0 = 0x0;
	goto label_goto_5;

}
// .method public static max(FF)F
float java::lang::Float::max(float a,float b)
{
	
	//    .param p0, "a"    # F
	//    .param p1, "b"    # F
	return java::lang::Math::max(a, b);

}
// .method public static min(FF)F
float java::lang::Float::min(float a,float b)
{
	
	//    .param p0, "a"    # F
	//    .param p1, "b"    # F
	return java::lang::Math::min(a, b);

}
// .method public static parseFloat(Ljava/lang/String;)F
float java::lang::Float::parseFloat(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 355        value = {
	// 356            Ljava/lang/NumberFormatException;
	// 357        }
	// 358    .end annotation
	return sun::misc::FloatingDecimal::parseFloat(s);

}
// .method public static sum(FF)F
float java::lang::Float::sum(float a,float b)
{
	
	//    .param p0, "a"    # F
	//    .param p1, "b"    # F
	return (a +  b);

}
// .method public static toHexString(F)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::lang::Float::toHexString(float f)
{
	
	//    .param p0, "f"    # F
	if ( (java::lang::Math::abs(f) > 0x800000) >= 0 )
		goto label_cond_25;
	if ( !((f < 0x0)) )  
		goto label_cond_25;
	//    .local v0, "s":Ljava/lang/String;
	return java::lang::Double::toHexString(java::lang::Math::scalb((double)(f), -0x380))->replaceFirst(std::make_shared<java::lang::String>(std::make_shared<char[]>("p-1022$")), std::make_shared<java::lang::String>(std::make_shared<char[]>("p-126")));
	// 431    .line 297
	// 432    .end local v0    # "s":Ljava/lang/String;
label_cond_25:
	return java::lang::Double::toHexString((double)(f));

}
// .method public static toString(F)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::lang::Float::toString(float f)
{
	
	//    .param p0, "f"    # F
	return sun::misc::FloatingDecimal::toJavaFormatString(f);

}
// .method public static valueOf(F)Ljava/lang/Float;
std::shared_ptr<java::lang::Float> java::lang::Float::valueOf(float f)
{
	
	std::shared_ptr<java::lang::Float> cVar0;
	
	//    .param p0, "f"    # F
	cVar0 = std::make_shared<java::lang::Float>(f);
	return cVar0;

}
// .method public static valueOf(Ljava/lang/String;)Ljava/lang/Float;
std::shared_ptr<java::lang::Float> java::lang::Float::valueOf(std::shared_ptr<java::lang::String> s)
{
	
	std::shared_ptr<java::lang::Float> cVar0;
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 473        value = {
	// 474            Ljava/lang/NumberFormatException;
	// 475        }
	// 476    .end annotation
	cVar0 = std::make_shared<java::lang::Float>(java::lang::Float::parseFloat(s));
	return cVar0;

}
// .method public byteValue()B
unsigned char java::lang::Float::byteValue()
{
	
	return (unsigned char)((int)(this->value));

}
// .method public compareTo(Ljava/lang/Float;)I
int java::lang::Float::compareTo(std::shared_ptr<java::lang::Float> anotherFloat)
{
	
	//    .param p1, "anotherFloat"    # Ljava/lang/Float;
	return java::lang::Float::compare(this->value, anotherFloat->value);

}
// .method public doubleValue()D
double java::lang::Float::doubleValue()
{
	
	return (double)(this->value);

}
// .method public equals(Ljava/lang/Object;)Z
bool java::lang::Float::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar1;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( !(obj->instanceOf("java::lang::Float")) )  
		goto label_cond_16;
	obj->checkCast("java::lang::Float");
	//    .end local p1    # "obj":Ljava/lang/Object;
	if ( java::lang::Float::floatToIntBits(obj->value) != java::lang::Float::floatToIntBits(this->value) )
		goto label_cond_16;
	cVar1 = 0x1;
label_cond_16:
	return cVar1;

}
// .method public floatValue()F
float java::lang::Float::floatValue()
{
	
	return this->value;

}
// .method public hashCode()I
int java::lang::Float::hashCode()
{
	
	return java::lang::Float::hashCode(this->value);

}
// .method public intValue()I
int java::lang::Float::intValue()
{
	
	return (int)(this->value);

}
// .method public isInfinite()Z
bool java::lang::Float::isInfinite()
{
	
	return java::lang::Float::isInfinite(this->value);

}
// .method public isNaN()Z
bool java::lang::Float::isNaN()
{
	
	return java::lang::Float::isNaN(this->value);

}
// .method public longValue()J
long long java::lang::Float::longValue()
{
	
	return (long long)(this->value);

}
// .method public shortValue()S
short java::lang::Float::shortValue()
{
	
	return (short)((int)(this->value));

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::lang::Float::toString()
{
	
	return java::lang::Float::toString(this->value);

}


