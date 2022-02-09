// CPP L:\smali2cpp20\x64\Release\out\java\lang\Byte.smali
#include "java2ctype.h"
#include "java.lang.Byte_S_ByteCache.h"
#include "java.lang.Byte.h"
#include "java.lang.Class.h"
#include "java.lang.Integer.h"
#include "java.lang.NumberFormatException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

static java::lang::Byte::BYTES = 0x1;
static java::lang::Byte::DIGITS;
static java::lang::Byte::MAX_VALUE = 0x7ft;
static java::lang::Byte::MIN_VALUE = -0x80t;
static java::lang::Byte::SIZE = 0x8;
static java::lang::Byte::TYPE;
static java::lang::Byte::UPPER_CASE_DIGITS;
static java::lang::Byte::serialVersionUID = -0x63b19f7b11af0ae4L;
// .method static constructor <clinit>()V
void java::lang::Byte::static_cinit()
{
	
	int cVar0;
	std::shared<std::vector<char[]>> cVar1;
	std::shared<std::vector<char[]>> cVar2;
	
	cVar0 = 0x24;
	java::lang::Byte::TYPE = unsigned char[]()->getComponentType();
	cVar1 = std::make_shared<std::vector<char[]>>(cVar0);
	?;
	java::lang::Byte::DIGITS = cVar1;
	cVar2 = std::make_shared<std::vector<char[]>>(cVar0);
	?;
	java::lang::Byte::UPPER_CASE_DIGITS = cVar2;
	return;
	// 091    .line 532
	// 092    nop
	// 094    :array_1a
	// 095    .array-data 2
	// 096        0x30s
	// 097        0x31s
	// 098        0x32s
	// 099        0x33s
	// 100        0x34s
	// 101        0x35s
	// 102        0x36s
	// 103        0x37s
	// 104        0x38s
	// 105        0x39s
	// 106        0x61s
	// 107        0x62s
	// 108        0x63s
	// 109        0x64s
	// 110        0x65s
	// 111        0x66s
	// 112        0x67s
	// 113        0x68s
	// 114        0x69s
	// 115        0x6as
	// 116        0x6bs
	// 117        0x6cs
	// 118        0x6ds
	// 119        0x6es
	// 120        0x6fs
	// 121        0x70s
	// 122        0x71s
	// 123        0x72s
	// 124        0x73s
	// 125        0x74s
	// 126        0x75s
	// 127        0x76s
	// 128        0x77s
	// 129        0x78s
	// 130        0x79s
	// 131        0x7as
	// 132    .end array-data
	// 134    .line 539
	// 135    :array_42
	// 136    .array-data 2
	// 137        0x30s
	// 138        0x31s
	// 139        0x32s
	// 140        0x33s
	// 141        0x34s
	// 142        0x35s
	// 143        0x36s
	// 144        0x37s
	// 145        0x38s
	// 146        0x39s
	// 147        0x41s
	// 148        0x42s
	// 149        0x43s
	// 150        0x44s
	// 151        0x45s
	// 152        0x46s
	// 153        0x47s
	// 154        0x48s
	// 155        0x49s
	// 156        0x4as
	// 157        0x4bs
	// 158        0x4cs
	// 159        0x4ds
	// 160        0x4es
	// 161        0x4fs
	// 162        0x50s
	// 163        0x51s
	// 164        0x52s
	// 165        0x53s
	// 166        0x54s
	// 167        0x55s
	// 168        0x56s
	// 169        0x57s
	// 170        0x58s
	// 171        0x59s
	// 172        0x5as
	// 173    .end array-data

}
// .method public constructor <init>(B)V
java::lang::Byte::Byte(unsigned char value)
{
	
	//    .param p1, "value"    # B
	// 182    invoke-direct {p0}, Ljava/lang/Number;-><init>()V
	this->value = value;
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::lang::Byte::Byte(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 195        value = {
	// 196            Ljava/lang/NumberFormatException;
	// 197        }
	// 198    .end annotation
	// 202    invoke-direct {p0}, Ljava/lang/Number;-><init>()V
	this->value = java::lang::Byte::parseByte(s, 0xa);
	return;

}
// .method public static compare(BB)I
int java::lang::Byte::compare(unsigned char x,unsigned char y)
{
	
	//    .param p0, "x"    # B
	//    .param p1, "y"    # B
	return (x - y);

}
// .method public static decode(Ljava/lang/String;)Ljava/lang/Byte;
std::shared_ptr<java::lang::Byte> java::lang::Byte::decode(std::shared_ptr<java::lang::String> nm)
{
	
	int i;
	std::shared_ptr<java::lang::NumberFormatException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "nm"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 233        value = {
	// 234            Ljava/lang/NumberFormatException;
	// 235        }
	// 236    .end annotation
	i = java::lang::Integer::decode(nm)->intValue();
	//    .local v0, "i":I
	if ( i <  -0x80 )
		goto label_cond_10;
	if ( i <= 0x7f )
		goto label_cond_35;
label_cond_10:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::NumberFormatException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Value ")))->append(i)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" out of range from input ")))->append(nm)->toString());
	// throw
	throw cVar0;
	// 296    .line 281
label_cond_35:
	return java::lang::Byte::valueOf((unsigned char)(i));

}
// .method public static hashCode(B)I
int java::lang::Byte::hashCode(unsigned char value)
{
	
	//    .param p0, "value"    # B
	return value;

}
// .method public static parseByte(Ljava/lang/String;)B
unsigned char java::lang::Byte::parseByte(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 320        value = {
	// 321            Ljava/lang/NumberFormatException;
	// 322        }
	// 323    .end annotation
	return java::lang::Byte::parseByte(s, 0xa);

}
// .method public static parseByte(Ljava/lang/String;I)B
unsigned char java::lang::Byte::parseByte(std::shared_ptr<java::lang::String> s,int radix)
{
	
	int i;
	std::shared_ptr<java::lang::NumberFormatException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .param p1, "radix"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 341        value = {
	// 342            Ljava/lang/NumberFormatException;
	// 343        }
	// 344    .end annotation
	i = java::lang::Integer::parseInt(s, radix);
	//    .local v0, "i":I
	if ( i <  -0x80 )
		goto label_cond_c;
	if ( i <= 0x7f )
		goto label_cond_31;
label_cond_c:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::NumberFormatException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Value out of range. Value:\")))->append(s)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")))->append(radix)->toString());
	// throw
	throw cVar0;
	// 400    .line 153
label_cond_31:
	return (unsigned char)(i);

}
// .method public static toHexString(BZ)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::lang::Byte::toHexString(unsigned char b,bool upperCase)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<char[]> digits;
	std::shared<std::vector<char[]>> buf;
	std::shared_ptr<java::lang::String> cVar2;
	
	//    .param p0, "b"    # B
	//    .param p1, "upperCase"    # Z
	cVar0 = 0x2;
	cVar1 = 0x0;
	if ( !(upperCase) )  
		goto label_cond_1d;
	digits = java::lang::Byte::UPPER_CASE_DIGITS;
	//    .local v1, "digits":[C
label_goto_6:
	buf = std::make_shared<std::vector<char[]>>(cVar0);
	//    .local v0, "buf":[C
	buf[cVar1] = digits[( _shri(b,0x4) & 0xf)];
	buf[0x1] = digits[( b & 0xf)];
	cVar2 = std::make_shared<java::lang::String>(cVar1, cVar0, buf);
	return cVar2;
	// 453    .line 526
	// 454    .end local v0    # "buf":[C
	// 455    .end local v1    # "digits":[C
label_cond_1d:
	digits = java::lang::Byte::DIGITS;
	//    .restart local v1    # "digits":[C
	goto label_goto_6;

}
// .method public static toString(B)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::lang::Byte::toString(unsigned char b)
{
	
	//    .param p0, "b"    # B
	return java::lang::Integer::toString(b, 0xa);

}
// .method public static toUnsignedInt(B)I
int java::lang::Byte::toUnsignedInt(unsigned char x)
{
	
	//    .param p0, "x"    # B
	return ( x & 0xff);

}
// .method public static toUnsignedLong(B)J
long long java::lang::Byte::toUnsignedLong(unsigned char x)
{
	
	//    .param p0, "x"    # B
	return ((long long)(x) &  0xff);

}
// .method public static valueOf(B)Ljava/lang/Byte;
std::shared_ptr<java::lang::Byte> java::lang::Byte::valueOf(unsigned char b)
{
	
	//    .param p0, "b"    # B
	0x80;
	//    .local v0, "offset":I
	return java::lang::Byte_S_ByteCache::cache[( b + 0x80)];

}
// .method public static valueOf(Ljava/lang/String;)Ljava/lang/Byte;
std::shared_ptr<java::lang::Byte> java::lang::Byte::valueOf(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 527        value = {
	// 528            Ljava/lang/NumberFormatException;
	// 529        }
	// 530    .end annotation
	return java::lang::Byte::valueOf(s, 0xa);

}
// .method public static valueOf(Ljava/lang/String;I)Ljava/lang/Byte;
std::shared_ptr<java::lang::Byte> java::lang::Byte::valueOf(std::shared_ptr<java::lang::String> s,int radix)
{
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .param p1, "radix"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 548        value = {
	// 549            Ljava/lang/NumberFormatException;
	// 550        }
	// 551    .end annotation
	return java::lang::Byte::valueOf(java::lang::Byte::parseByte(s, radix));

}
// .method public byteValue()B
unsigned char java::lang::Byte::byteValue()
{
	
	return this->value;

}
// .method public compareTo(Ljava/lang/Byte;)I
int java::lang::Byte::compareTo(std::shared_ptr<java::lang::Byte> anotherByte)
{
	
	//    .param p1, "anotherByte"    # Ljava/lang/Byte;
	return java::lang::Byte::compare(this->value, anotherByte->value);

}
// .method public doubleValue()D
double java::lang::Byte::doubleValue()
{
	
	return (double)(this->value);

}
// .method public equals(Ljava/lang/Object;)Z
bool java::lang::Byte::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar1;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( !(obj->instanceOf("java::lang::Byte")) )  
		goto label_cond_11;
	obj->checkCast("java::lang::Byte");
	//    .end local p1    # "obj":Ljava/lang/Object;
	if ( this->value != obj->byteValue() )
		goto label_cond_10;
	cVar1 = 0x1;
label_cond_10:
	return cVar1;
	// 650    .line 423
	// 651    .restart local p1    # "obj":Ljava/lang/Object;
label_cond_11:
	return cVar1;

}
// .method public floatValue()F
float java::lang::Byte::floatValue()
{
	
	return (float)(this->value);

}
// .method public hashCode()I
int java::lang::Byte::hashCode()
{
	
	return java::lang::Byte::hashCode(this->value);

}
// .method public intValue()I
int java::lang::Byte::intValue()
{
	
	return this->value;

}
// .method public longValue()J
long long java::lang::Byte::longValue()
{
	
	return (long long)(this->value);

}
// .method public shortValue()S
short java::lang::Byte::shortValue()
{
	
	return (short)(this->value);

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::lang::Byte::toString()
{
	
	return java::lang::Integer::toString(this->value);

}


