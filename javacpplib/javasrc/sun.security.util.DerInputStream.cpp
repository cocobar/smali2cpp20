// CPP L:\smali2cpp20\x64\Release\out\sun\security\util\DerInputStream.smali
#include "java2ctype.h"
#include "java.io.DataInputStream.h"
#include "java.io.IOException.h"
#include "java.io.InputStream.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.math.BigInteger.h"
#include "java.util.Date.h"
#include "java.util.Vector.h"
#include "sun.security.util.BitArray.h"
#include "sun.security.util.DerIndefLenConverter.h"
#include "sun.security.util.DerInputBuffer.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"

// .method constructor <init>(Lsun/security/util/DerInputBuffer;)V
sun::security::util::DerInputStream::DerInputStream(std::shared_ptr<sun::security::util::DerInputBuffer> buf)
{
	
	//    .param p1, "buf"    # Lsun/security/util/DerInputBuffer;
	// 019    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->buffer = buf;
	this->buffer->mark(0x7fffffff);
	return;

}
// .method public constructor <init>([B)V
sun::security::util::DerInputStream::DerInputStream(std::shared_ptr<unsigned char[]> data)
{
	
	//    .param p1, "data"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 039        value = {
	// 040            Ljava/io/IOException;
	// 041        }
	// 042    .end annotation
	// 046    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->init(data, 0x0, data->size(), 0x1);
	return;

}
// .method public constructor <init>([BII)V
sun::security::util::DerInputStream::DerInputStream(std::shared_ptr<unsigned char[]> data,int offset,int len)
{
	
	//    .param p1, "data"    # [B
	//    .param p2, "offset"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 067        value = {
	// 068            Ljava/io/IOException;
	// 069        }
	// 070    .end annotation
	// 074    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->init(data, offset, len, 0x1);
	return;

}
// .method public constructor <init>([BIIZ)V
sun::security::util::DerInputStream::DerInputStream(std::shared_ptr<unsigned char[]> data,int offset,int len,bool allowIndefiniteLength)
{
	
	//    .param p1, "data"    # [B
	//    .param p2, "offset"    # I
	//    .param p3, "len"    # I
	//    .param p4, "allowIndefiniteLength"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 092        value = {
	// 093            Ljava/io/IOException;
	// 094        }
	// 095    .end annotation
	// 099    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->init(data, offset, len, allowIndefiniteLength);
	return;

}
// .method static getLength(ILjava/io/InputStream;)I
int sun::security::util::DerInputStream::getLength(int lenByte,std::shared_ptr<java::io::InputStream> in)
{
	
	int cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::lang::String> mdName;
	int value;
	int tmp;
	std::shared_ptr<java::io::IOException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::lang::String> cVar4;
	std::shared_ptr<java::io::IOException> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	std::shared_ptr<java::io::IOException> cVar8;
	std::shared_ptr<java::lang::StringBuilder> cVar9;
	std::shared_ptr<java::io::IOException> cVar10;
	std::shared_ptr<java::lang::StringBuilder> cVar11;
	
	//    .param p0, "lenByte"    # I
	//    .param p1, "in"    # Ljava/io/InputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 113        value = {
	// 114            Ljava/io/IOException;
	// 115        }
	// 116    .end annotation
	cVar0 = -0x1;
	if ( lenByte != cVar0 )
		goto label_cond_c;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Short read of DER length")));
	// throw
	throw cVar1;
	// 133    .line 630
label_cond_c:
	mdName = std::make_shared<java::lang::String>(std::make_shared<char[]>("DerInputStream.getLength(): "));
	//    .local v0, "mdName":Ljava/lang/String;
	lenByte;
	//    .local v1, "tmp":I
	if ( ( lenByte & 0x80) )     
		goto label_cond_16;
	value = lenByte;
	//    .local v3, "value":I
label_cond_15:
	return value;
	// 155    .line 635
	// 156    .end local v3    # "value":I
label_cond_16:
	tmp = ( lenByte & 0x7f);
	if ( tmp )     
		goto label_cond_1b;
	return cVar0;
	// 166    .line 643
label_cond_1b:
	if ( tmp < 0 ) 
		goto label_cond_20;
	if ( tmp <= 0x4 )
		goto label_cond_52;
label_cond_20:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	if ( tmp >= 0 )
		goto label_cond_4e;
	cVar4 = std::make_shared<java::lang::String>(std::make_shared<char[]>("incorrect DER encoding."));
label_goto_42:
	cVar2 = std::make_shared<java::io::IOException>(cVar3->append(mdName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("lengthTag=")))->append(tmp)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")))->append(cVar4)->toString());
	// throw
	throw cVar2;
	// 221    .line 645
label_cond_4e:
	cVar4 = std::make_shared<java::lang::String>(std::make_shared<char[]>("too big."));
	goto label_goto_42;
	// 227    .line 647
label_cond_52:
	value = ( in->read() & 0xff);
	//    .restart local v3    # "value":I
	if ( value )     
		goto label_cond_bf;
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	cVar6 = std::make_shared<java::io::IOException>(cVar7->append(mdName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Redundant length bytes found")))->toString());
	// throw
	throw cVar6;
	// 267    .line 653
	// 268    .end local v1    # "tmp":I
	// 269    .local v2, "tmp":I
label_goto_76:
	//    .end local v2    # "tmp":I
	//    .restart local v1    # "tmp":I
	if ( tmp <= 0 )
		goto label_cond_85;
	value = ( value << 0x8);
	value = (value +  ( in->read() & 0xff));
	tmp = ( tmp + -0x1);
	//    .end local v1    # "tmp":I
	//    .restart local v2    # "tmp":I
	goto label_goto_76;
	// 295    .line 657
	// 296    .end local v2    # "tmp":I
	// 297    .restart local v1    # "tmp":I
label_cond_85:
	if ( value >= 0 )
		goto label_cond_a1;
	cVar9 = std::make_shared<java::lang::StringBuilder>();
	cVar8 = std::make_shared<java::io::IOException>(cVar9->append(mdName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid length bytes")))->toString());
	// throw
	throw cVar8;
	// 326    .line 659
label_cond_a1:
	if ( value >  0x7f )
		goto label_cond_15;
	cVar11 = std::make_shared<java::lang::StringBuilder>();
	cVar10 = std::make_shared<java::io::IOException>(cVar11->append(mdName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Should use short form for length")))->toString());
	// throw
	throw cVar10;
label_cond_bf:
	tmp = ( tmp + -0x1);
	//    .end local v1    # "tmp":I
	//    .restart local v2    # "tmp":I
	goto label_goto_76;

}
// .method static getLength(Ljava/io/InputStream;)I
int sun::security::util::DerInputStream::getLength(std::shared_ptr<java::io::InputStream> in)
{
	
	//    .param p0, "in"    # Ljava/io/InputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 369        value = {
	// 370            Ljava/io/IOException;
	// 371        }
	// 372    .end annotation
	return sun::security::util::DerInputStream::getLength(in->read(), in);

}
// .method private init([BIIZ)V
void sun::security::util::DerInputStream::init(std::shared_ptr<unsigned char[]> data,int offset,int len,bool allowIndefiniteLength)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared<std::vector<unsigned char[]>> inData;
	std::shared_ptr<sun::security::util::DerIndefLenConverter> derIn;
	std::shared_ptr<sun::security::util::DerInputBuffer> cVar2;
	std::shared_ptr<sun::security::util::DerInputBuffer> cVar3;
	
	//    .param p1, "data"    # [B
	//    .param p2, "offset"    # I
	//    .param p3, "len"    # I
	//    .param p4, "allowIndefiniteLength"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 394        value = {
	// 395            Ljava/io/IOException;
	// 396        }
	// 397    .end annotation
	if ( ( offset + 0x2) >  data->size() )
		goto label_cond_a;
	if ( (offset + len) <= data->size() )
		goto label_cond_13;
label_cond_a:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Encoding bytes too short")));
	// throw
	throw cVar0;
	// 423    .line 127
label_cond_13:
	if ( !(sun::security::util::DerIndefLenConverter::isIndefinite(data[( offset + 0x1)])) )  
		goto label_cond_47;
	if ( allowIndefiniteLength )     
		goto label_cond_28;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Indefinite length BER encoding found")));
	// throw
	throw cVar1;
	// 447    .line 131
label_cond_28:
	inData = std::make_shared<std::vector<unsigned char[]>>(len);
	//    .local v1, "inData":[B
	java::lang::System::arraycopy(data, offset, inData, 0x0, len);
	derIn = std::make_shared<sun::security::util::DerIndefLenConverter>();
	//    .local v0, "derIn":Lsun/security/util/DerIndefLenConverter;
	cVar2 = std::make_shared<sun::security::util::DerInputBuffer>(derIn->convert(inData));
	this->buffer = cVar2;
	//    .end local v0    # "derIn":Lsun/security/util/DerIndefLenConverter;
	//    .end local v1    # "inData":[B
label_goto_3e:
	this->buffer->mark(0x7fffffff);
	return;
	// 487    .line 138
label_cond_47:
	cVar3 = std::make_shared<sun::security::util::DerInputBuffer>(data, offset, len);
	this->buffer = cVar3;
	goto label_goto_3e;

}
// .method private readString(BLjava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::util::DerInputStream::readString(unsigned char stringTag,std::shared_ptr<java::lang::String> stringName,std::shared_ptr<java::lang::String> enc)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	int length;
	std::shared<std::vector<unsigned char[]>> retval;
	std::shared_ptr<java::io::IOException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::lang::String> cVar4;
	
	//    .param p1, "stringTag"    # B
	//    .param p2, "stringName"    # Ljava/lang/String;
	//    .param p3, "enc"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 504        value = {
	// 505            Ljava/io/IOException;
	// 506        }
	// 507    .end annotation
	if ( this->buffer->read() == stringTag )
		goto label_cond_29;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("DER input not a ")))->append(stringName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" string")))->toString());
	// throw
	throw cVar0;
	// 552    .line 562
label_cond_29:
	length = sun::security::util::DerInputStream::getLength(this->buffer);
	//    .local v0, "length":I
	retval = std::make_shared<std::vector<unsigned char[]>>(length);
	//    .local v1, "retval":[B
	if ( !(length) )  
		goto label_cond_5c;
	if ( this->buffer->read(retval) == length )
		goto label_cond_5c;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::io::IOException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Short read of DER ")))->append(stringName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" string")))->toString());
	// throw
	throw cVar2;
	// 609    .line 568
label_cond_5c:
	cVar4 = std::make_shared<java::lang::String>(retval, enc);
	return cVar4;

}
// .method public available()I
int sun::security::util::DerInputStream::available()
{
	
	return this->buffer->available();

}
// .method public getBMPString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::util::DerInputStream::getBMPString()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 637        value = {
	// 638            Ljava/io/IOException;
	// 639        }
	// 640    .end annotation
	return this->readString(0x1e, std::make_shared<java::lang::String>(std::make_shared<char[]>("BMP")), std::make_shared<java::lang::String>(std::make_shared<char[]>("UnicodeBigUnmarked")));

}
// .method public getBigInteger()Ljava/math/BigInteger;
std::shared_ptr<java::math::BigInteger> sun::security::util::DerInputStream::getBigInteger()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 662        value = {
	// 663            Ljava/io/IOException;
	// 664        }
	// 665    .end annotation
	if ( this->buffer->read() == 0x2 )
		goto label_cond_12;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DER input, Integer tag error")));
	// throw
	throw cVar0;
	// 688    .line 207
label_cond_12:
	return this->buffer->getBigInteger(sun::security::util::DerInputStream::getLength(this->buffer), 0x0);

}
// .method public getBitString()[B
unsigned char sun::security::util::DerInputStream::getBitString()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 710        value = {
	// 711            Ljava/io/IOException;
	// 712        }
	// 713    .end annotation
	if ( this->buffer->read() == 0x3 )
		goto label_cond_12;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DER input not an bit string")));
	// throw
	throw cVar0;
	// 736    .line 244
label_cond_12:
	return this->buffer->getBitString(sun::security::util::DerInputStream::getLength(this->buffer));

}
// .method getByte()I
int sun::security::util::DerInputStream::getByte()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 756        value = {
	// 757            Ljava/io/IOException;
	// 758        }
	// 759    .end annotation
	return ( this->buffer->read() & 0xff);

}
// .method public getBytes([B)V
void sun::security::util::DerInputStream::getBytes(std::shared_ptr<unsigned char[]> val)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "val"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 778        value = {
	// 779            Ljava/io/IOException;
	// 780        }
	// 781    .end annotation
	if ( !(val->size()) )  
		goto label_cond_15;
	if ( this->buffer->read(val) == val->size() )
		goto label_cond_15;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Short read of DER octet string")));
	// throw
	throw cVar0;
	// 808    .line 301
label_cond_15:
	return;

}
// .method public getDerValue()Lsun/security/util/DerValue;
std::shared_ptr<sun::security::util::DerValue> sun::security::util::DerInputStream::getDerValue()
{
	
	std::shared_ptr<sun::security::util::DerValue> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 816        value = {
	// 817            Ljava/io/IOException;
	// 818        }
	// 819    .end annotation
	cVar0 = std::make_shared<sun::security::util::DerValue>(this->buffer);
	return cVar0;

}
// .method public getEnumerated()I
int sun::security::util::DerInputStream::getEnumerated()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 835        value = {
	// 836            Ljava/io/IOException;
	// 837        }
	// 838    .end annotation
	if ( this->buffer->read() == 0xa )
		goto label_cond_13;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DER input, Enumerated tag error")));
	// throw
	throw cVar0;
	// 861    .line 233
label_cond_13:
	return this->buffer->getInteger(sun::security::util::DerInputStream::getLength(this->buffer));

}
// .method public getGeneralString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::util::DerInputStream::getGeneralString()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 881        value = {
	// 882            Ljava/io/IOException;
	// 883        }
	// 884    .end annotation
	return this->readString(0x1b, std::make_shared<java::lang::String>(std::make_shared<char[]>("General")), std::make_shared<java::lang::String>(std::make_shared<char[]>("ASCII")));

}
// .method public getGeneralizedTime()Ljava/util/Date;
std::shared_ptr<java::util::Date> sun::security::util::DerInputStream::getGeneralizedTime()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 906        value = {
	// 907            Ljava/io/IOException;
	// 908        }
	// 909    .end annotation
	if ( this->buffer->read() == 0x18 )
		goto label_cond_13;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DER input, GeneralizedTime tag invalid ")));
	// throw
	throw cVar0;
	// 932    .line 586
label_cond_13:
	return this->buffer->getGeneralizedTime(sun::security::util::DerInputStream::getLength(this->buffer));

}
// .method public getIA5String()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::util::DerInputStream::getIA5String()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 952        value = {
	// 953            Ljava/io/IOException;
	// 954        }
	// 955    .end annotation
	return this->readString(0x16, std::make_shared<java::lang::String>(std::make_shared<char[]>("IA5")), std::make_shared<java::lang::String>(std::make_shared<char[]>("ASCII")));

}
// .method public getInteger()I
int sun::security::util::DerInputStream::getInteger()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 975        value = {
	// 976            Ljava/io/IOException;
	// 977        }
	// 978    .end annotation
	if ( this->buffer->read() == 0x2 )
		goto label_cond_12;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DER input, Integer tag error")));
	// throw
	throw cVar0;
	// 1001    .line 195
label_cond_12:
	return this->buffer->getInteger(sun::security::util::DerInputStream::getLength(this->buffer));

}
// .method getLength()I
int sun::security::util::DerInputStream::getLength()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1021        value = {
	// 1022            Ljava/io/IOException;
	// 1023        }
	// 1024    .end annotation
	return sun::security::util::DerInputStream::getLength(this->buffer);

}
// .method public getNull()V
void sun::security::util::DerInputStream::getNull()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1040        value = {
	// 1041            Ljava/io/IOException;
	// 1042        }
	// 1043    .end annotation
	if ( this->buffer->read() != 0x5 )
		goto label_cond_11;
	if ( !(this->buffer->read()) )  
		goto label_cond_1a;
label_cond_11:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("getNull, bad data")));
	// throw
	throw cVar0;
	// 1075    .line 309
label_cond_1a:
	return;

}
// .method public getOID()Lsun/security/util/ObjectIdentifier;
std::shared_ptr<sun::security::util::ObjectIdentifier> sun::security::util::DerInputStream::getOID()
{
	
	std::shared_ptr<sun::security::util::ObjectIdentifier> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1083        value = {
	// 1084            Ljava/io/IOException;
	// 1085        }
	// 1086    .end annotation
	cVar0 = std::make_shared<sun::security::util::ObjectIdentifier>(this);
	return cVar0;

}
// .method public getOctetString()[B
unsigned char sun::security::util::DerInputStream::getOctetString()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	int length;
	std::shared<std::vector<unsigned char[]>> retval;
	std::shared_ptr<java::io::IOException> cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1100        value = {
	// 1101            Ljava/io/IOException;
	// 1102        }
	// 1103    .end annotation
	if ( this->buffer->read() == 0x4 )
		goto label_cond_12;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DER input not an octet string")));
	// throw
	throw cVar0;
	// 1126    .line 286
label_cond_12:
	length = sun::security::util::DerInputStream::getLength(this->buffer);
	//    .local v0, "length":I
	retval = std::make_shared<std::vector<unsigned char[]>>(length);
	//    .local v1, "retval":[B
	if ( !(length) )  
		goto label_cond_2d;
	if ( this->buffer->read(retval) == length )
		goto label_cond_2d;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Short read of DER octet string")));
	// throw
	throw cVar1;
	// 1159    .line 291
label_cond_2d:
	return retval;

}
// .method public getPositiveBigInteger()Ljava/math/BigInteger;
std::shared_ptr<java::math::BigInteger> sun::security::util::DerInputStream::getPositiveBigInteger()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1167        value = {
	// 1168            Ljava/io/IOException;
	// 1169        }
	// 1170    .end annotation
	if ( this->buffer->read() == 0x2 )
		goto label_cond_12;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DER input, Integer tag error")));
	// throw
	throw cVar0;
	// 1193    .line 221
label_cond_12:
	return this->buffer->getBigInteger(sun::security::util::DerInputStream::getLength(this->buffer), 0x1);

}
// .method public getPrintableString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::util::DerInputStream::getPrintableString()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1215        value = {
	// 1216            Ljava/io/IOException;
	// 1217        }
	// 1218    .end annotation
	return this->readString(0x13, std::make_shared<java::lang::String>(std::make_shared<char[]>("Printable")), std::make_shared<java::lang::String>(std::make_shared<char[]>("ASCII")));

}
// .method public getSequence(I)[Lsun/security/util/DerValue;
std::shared_ptr<sun::security::util::DerValue> sun::security::util::DerInputStream::getSequence(int startLen)
{
	
	//    .param p1, "startLen"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1241        value = {
	// 1242            Ljava/io/IOException;
	// 1243        }
	// 1244    .end annotation
	return this->getSequence(startLen, 0x0);

}
// .method public getSequence(IZ)[Lsun/security/util/DerValue;
std::shared_ptr<sun::security::util::DerValue> sun::security::util::DerInputStream::getSequence(int startLen,bool originalEncodedFormRetained)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "startLen"    # I
	//    .param p2, "originalEncodedFormRetained"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 1263        value = {
	// 1264            Ljava/io/IOException;
	// 1265        }
	// 1266    .end annotation
	this->tag = (unsigned char)(this->buffer->read());
	if ( this->tag == 0x30 )
		goto label_cond_18;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Sequence tag error")));
	// throw
	throw cVar0;
	// 1296    .line 334
label_cond_18:
	return this->readVector(startLen, originalEncodedFormRetained);

}
// .method public getSet(I)[Lsun/security/util/DerValue;
std::shared_ptr<sun::security::util::DerValue> sun::security::util::DerInputStream::getSet(int startLen)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "startLen"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1309        value = {
	// 1310            Ljava/io/IOException;
	// 1311        }
	// 1312    .end annotation
	this->tag = (unsigned char)(this->buffer->read());
	if ( this->tag == 0x31 )
		goto label_cond_18;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Set tag error")));
	// throw
	throw cVar0;
	// 1342    .line 368
label_cond_18:
	return this->readVector(startLen);

}
// .method public getSet(IZ)[Lsun/security/util/DerValue;
std::shared_ptr<sun::security::util::DerValue> sun::security::util::DerInputStream::getSet(int startLen,bool implicit)
{
	
	//    .param p1, "startLen"    # I
	//    .param p2, "implicit"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 1356        value = {
	// 1357            Ljava/io/IOException;
	// 1358        }
	// 1359    .end annotation
	return this->getSet(startLen, implicit, 0x0);

}
// .method public getSet(IZZ)[Lsun/security/util/DerValue;
std::shared_ptr<sun::security::util::DerValue> sun::security::util::DerInputStream::getSet(int startLen,bool implicit,bool originalEncodedFormRetained)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "startLen"    # I
	//    .param p2, "implicit"    # Z
	//    .param p3, "originalEncodedFormRetained"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 1379        value = {
	// 1380            Ljava/io/IOException;
	// 1381        }
	// 1382    .end annotation
	this->tag = (unsigned char)(this->buffer->read());
	if ( implicit )     
		goto label_cond_1a;
	if ( this->tag == 0x31 )
		goto label_cond_1a;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Set tag error")));
	// throw
	throw cVar0;
	// 1415    .line 400
label_cond_1a:
	return this->readVector(startLen, originalEncodedFormRetained);

}
// .method public getT61String()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::util::DerInputStream::getT61String()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1427        value = {
	// 1428            Ljava/io/IOException;
	// 1429        }
	// 1430    .end annotation
	return this->readString(0x14, std::make_shared<java::lang::String>(std::make_shared<char[]>("T61")), std::make_shared<java::lang::String>(std::make_shared<char[]>("ISO-8859-1")));

}
// .method public getUTCTime()Ljava/util/Date;
std::shared_ptr<java::util::Date> sun::security::util::DerInputStream::getUTCTime()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1450        value = {
	// 1451            Ljava/io/IOException;
	// 1452        }
	// 1453    .end annotation
	if ( this->buffer->read() == 0x17 )
		goto label_cond_13;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DER input, UTCtime tag invalid ")));
	// throw
	throw cVar0;
	// 1476    .line 577
label_cond_13:
	return this->buffer->getUTCTime(sun::security::util::DerInputStream::getLength(this->buffer));

}
// .method public getUTF8String()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::util::DerInputStream::getUTF8String()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1496        value = {
	// 1497            Ljava/io/IOException;
	// 1498        }
	// 1499    .end annotation
	return this->readString(0xc, std::make_shared<java::lang::String>(std::make_shared<char[]>("UTF-8")), std::make_shared<java::lang::String>(std::make_shared<char[]>("UTF8")));

}
// .method public getUnalignedBitString()Lsun/security/util/BitArray;
std::shared_ptr<sun::security::util::BitArray> sun::security::util::DerInputStream::getUnalignedBitString()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	int length;
	int excessBits;
	std::shared_ptr<java::io::IOException> cVar1;
	int validBits;
	std::shared_ptr<java::io::IOException> cVar2;
	std::shared<std::vector<unsigned char[]>> repn;
	std::shared_ptr<java::io::IOException> cVar3;
	std::shared_ptr<sun::security::util::BitArray> cVar4;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1519        value = {
	// 1520            Ljava/io/IOException;
	// 1521        }
	// 1522    .end annotation
	if ( this->buffer->read() == 0x3 )
		goto label_cond_12;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DER input not a bit string")));
	// throw
	throw cVar0;
	// 1545    .line 255
label_cond_12:
	length = ( sun::security::util::DerInputStream::getLength(this->buffer) + -0x1);
	//    .local v1, "length":I
	excessBits = this->buffer->read();
	//    .local v0, "excessBits":I
	if ( excessBits >= 0 )
		goto label_cond_2b;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unused bits of bit string invalid")));
	// throw
	throw cVar1;
	// 1576    .line 265
label_cond_2b:
	validBits = (( length * 0x8) - excessBits);
	//    .local v3, "validBits":I
	if ( validBits >= 0 )
		goto label_cond_3a;
	cVar2 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Valid bits of bit string invalid")));
	// throw
	throw cVar2;
	// 1595    .line 270
label_cond_3a:
	repn = std::make_shared<std::vector<unsigned char[]>>(length);
	//    .local v2, "repn":[B
	if ( !(length) )  
		goto label_cond_4f;
	if ( this->buffer->read(repn) == length )
		goto label_cond_4f;
	cVar3 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Short read of DER bit string")));
	// throw
	throw cVar3;
	// 1620    .line 276
label_cond_4f:
	cVar4 = std::make_shared<sun::security::util::BitArray>(validBits, repn);
	return cVar4;

}
// .method public mark(I)V
void sun::security::util::DerInputStream::mark(int value)
{
	
	//    .param p1, "value"    # I
	this->buffer->mark(value);
	return;

}
// .method public peekByte()I
int sun::security::util::DerInputStream::peekByte()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1645        value = {
	// 1646            Ljava/io/IOException;
	// 1647        }
	// 1648    .end annotation
	return this->buffer->peek();

}
// .method protected readVector(I)[Lsun/security/util/DerValue;
std::shared_ptr<sun::security::util::DerValue> sun::security::util::DerInputStream::readVector(int startLen)
{
	
	//    .param p1, "startLen"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1665        value = {
	// 1666            Ljava/io/IOException;
	// 1667        }
	// 1668    .end annotation
	return this->readVector(startLen, 0x0);

}
// .method protected readVector(IZ)[Lsun/security/util/DerValue;
std::shared_ptr<sun::security::util::DerValue> sun::security::util::DerInputStream::readVector(int startLen,bool originalEncodedFormRetained)
{
	
	int lenByte;
	int len;
	int readLen;
	std::shared<std::vector<unsigned char[]>> indefData;
	std::shared_ptr<java::io::DataInputStream> dis;
	std::shared_ptr<sun::security::util::DerIndefLenConverter> derIn;
	std::shared_ptr<sun::security::util::DerInputBuffer> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<sun::security::util::DerInputBuffer> newstr;
	std::shared_ptr<java::util::Vector> vec;
	std::shared_ptr<sun::security::util::DerValue> value;
	std::shared_ptr<java::io::IOException> cVar2;
	int max;
	std::shared<std::vector<std::vector<sun::security::util::DerValue>>> retval;
	int i;
	std::shared_ptr<sun::security::util::DerValue> cVar3;
	
	//    .param p1, "startLen"    # I
	//    .param p2, "originalEncodedFormRetained"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 1687        value = {
	// 1688            Ljava/io/IOException;
	// 1689        }
	// 1690    .end annotation
	lenByte = (unsigned char)(this->buffer->read());
	//    .local v6, "lenByte":B
	len = sun::security::util::DerInputStream::getLength(lenByte, this->buffer);
	//    .local v5, "len":I
	if ( len != -0x1 )
		goto label_cond_6b;
	readLen = this->buffer->available();
	//    .local v10, "readLen":I
	//    .local v9, "offset":I
	indefData = std::make_shared<std::vector<unsigned char[]>>(( readLen + 0x2));
	//    .local v4, "indefData":[B
	indefData[0x0] = this->tag;
	indefData[0x1] = lenByte;
	dis = std::make_shared<java::io::DataInputStream>(this->buffer);
	//    .local v2, "dis":Ljava/io/DataInputStream;
	dis->readFully(indefData, 0x2, readLen);
	dis->close();
	derIn = std::make_shared<sun::security::util::DerIndefLenConverter>();
	//    .local v1, "derIn":Lsun/security/util/DerIndefLenConverter;
	cVar0 = std::make_shared<sun::security::util::DerInputBuffer>(derIn->convert(indefData));
	this->buffer = cVar0;
	if ( this->tag == this->buffer->read() )
		goto label_cond_63;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Indefinite length encoding not supported")));
	// throw
	throw cVar1;
	// 1813    .line 444
label_cond_63:
	len = sun::security::util::DerInputStream::getLength(this->buffer);
	//    .end local v1    # "derIn":Lsun/security/util/DerIndefLenConverter;
	//    .end local v2    # "dis":Ljava/io/DataInputStream;
	//    .end local v4    # "indefData":[B
	//    .end local v9    # "offset":I
	//    .end local v10    # "readLen":I
label_cond_6b:
	if ( len )     
		goto label_cond_71;
	return std::make_shared<std::vector<std::vector<sun::security::util::DerValue>>>(0x0);
	// 1839    .line 456
label_cond_71:
	if ( this->buffer->available() != len )
		goto label_cond_a5;
	newstr = this;
	//    .local v8, "newstr":Lsun/security/util/DerInputStream;
label_goto_7d:
	vec = std::make_shared<java::util::Vector>(startLen);
	//    .local v13, "vec":Ljava/util/Vector;, "Ljava/util/Vector<Lsun/security/util/DerValue;>;"
label_cond_84:
	value = std::make_shared<sun::security::util::DerValue>(newstr->buffer, originalEncodedFormRetained);
	//    .local v12, "value":Lsun/security/util/DerValue;
	vec->addElement(value);
	if ( newstr->available() > 0 ) 
		goto label_cond_84;
	if ( !(newstr->available()) )  
		goto label_cond_ad;
	cVar2 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Extra data at end of vector")));
	// throw
	throw cVar2;
	// 1901    .line 459
	// 1902    .end local v8    # "newstr":Lsun/security/util/DerInputStream;
	// 1903    .end local v12    # "value":Lsun/security/util/DerValue;
	// 1904    .end local v13    # "vec":Ljava/util/Vector;, "Ljava/util/Vector<Lsun/security/util/DerValue;>;"
label_cond_a5:
	newstr = this->subStream(len, 0x1);
	//    .restart local v8    # "newstr":Lsun/security/util/DerInputStream;
	goto label_goto_7d;
	// 1917    .line 479
	// 1918    .restart local v12    # "value":Lsun/security/util/DerValue;
	// 1919    .restart local v13    # "vec":Ljava/util/Vector;, "Ljava/util/Vector<Lsun/security/util/DerValue;>;"
label_cond_ad:
	max = vec->size();
	//    .local v7, "max":I
	retval = std::make_shared<std::vector<std::vector<sun::security::util::DerValue>>>(max);
	//    .local v11, "retval":[Lsun/security/util/DerValue;
	i = 0x0;
	//    .local v3, "i":I
label_goto_b4:
	if ( i >= max )
		goto label_cond_c1;
	cVar3 = vec->elementAt(i);
	cVar3->checkCast("sun::security::util::DerValue");
	retval[i] = cVar3;
	i = ( i + 0x1);
	goto label_goto_b4;
	// 1951    .line 485
label_cond_c1:
	return retval;

}
// .method public reset()V
void sun::security::util::DerInputStream::reset()
{
	
	this->buffer->reset();
	return;

}
// .method public subStream(IZ)Lsun/security/util/DerInputStream;
std::shared_ptr<sun::security::util::DerInputStream> sun::security::util::DerInputStream::subStream(int len,bool do_skip)
{
	
	std::shared_ptr<sun::security::util::DerInputBuffer> newbuf;
	std::shared_ptr<sun::security::util::DerInputStream> cVar0;
	
	//    .param p1, "len"    # I
	//    .param p2, "do_skip"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 1973        value = {
	// 1974            Ljava/io/IOException;
	// 1975        }
	// 1976    .end annotation
	newbuf = this->buffer->dup();
	//    .local v0, "newbuf":Lsun/security/util/DerInputBuffer;
	newbuf->truncate(len);
	if ( !(do_skip) )  
		goto label_cond_11;
	this->buffer->skip((long long)(len));
label_cond_11:
	cVar0 = std::make_shared<sun::security::util::DerInputStream>(newbuf);
	return cVar0;

}
// .method public toByteArray()[B
unsigned char sun::security::util::DerInputStream::toByteArray()
{
	
	return this->buffer->toByteArray();

}


