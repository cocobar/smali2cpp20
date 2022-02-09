// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\CertificateSerialNumber.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.InputStream.h"
#include "java.io.OutputStream.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.math.BigInteger.h"
#include "java.util.Enumeration.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.AttributeNameEnumeration.h"
#include "sun.security.x509.CertificateSerialNumber.h"
#include "sun.security.x509.SerialNumber.h"

static sun::security::x509::CertificateSerialNumber::IDENT = std::make_shared<java::lang::String>("x509.info.serialNumber");
static sun::security::x509::CertificateSerialNumber::NAME = std::make_shared<java::lang::String>("serialNumber");
static sun::security::x509::CertificateSerialNumber::NUMBER = std::make_shared<java::lang::String>("number");
// .method public constructor <init>(I)V
sun::security::x509::CertificateSerialNumber::CertificateSerialNumber(int num)
{
	
	std::shared_ptr<sun::security::x509::SerialNumber> cVar0;
	
	//    .param p1, "num"    # I
	// 040    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<sun::security::x509::SerialNumber>(num);
	this->serial = cVar0;
	return;

}
// .method public constructor <init>(Ljava/io/InputStream;)V
sun::security::x509::CertificateSerialNumber::CertificateSerialNumber(std::shared_ptr<java::io::InputStream> in)
{
	
	std::shared_ptr<sun::security::x509::SerialNumber> cVar0;
	
	//    .param p1, "in"    # Ljava/io/InputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 057        value = {
	// 058            Ljava/io/IOException;
	// 059        }
	// 060    .end annotation
	// 064    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<sun::security::x509::SerialNumber>(in);
	this->serial = cVar0;
	return;

}
// .method public constructor <init>(Ljava/math/BigInteger;)V
sun::security::x509::CertificateSerialNumber::CertificateSerialNumber(std::shared_ptr<java::math::BigInteger> num)
{
	
	std::shared_ptr<sun::security::x509::SerialNumber> cVar0;
	
	//    .param p1, "num"    # Ljava/math/BigInteger;
	// 083    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<sun::security::x509::SerialNumber>(num);
	this->serial = cVar0;
	return;

}
// .method public constructor <init>(Lsun/security/util/DerInputStream;)V
sun::security::x509::CertificateSerialNumber::CertificateSerialNumber(std::shared_ptr<sun::security::util::DerInputStream> in)
{
	
	std::shared_ptr<sun::security::x509::SerialNumber> cVar0;
	
	//    .param p1, "in"    # Lsun/security/util/DerInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 100        value = {
	// 101            Ljava/io/IOException;
	// 102        }
	// 103    .end annotation
	// 107    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<sun::security::x509::SerialNumber>(in);
	this->serial = cVar0;
	return;

}
// .method public constructor <init>(Lsun/security/util/DerValue;)V
sun::security::x509::CertificateSerialNumber::CertificateSerialNumber(std::shared_ptr<sun::security::util::DerValue> val)
{
	
	std::shared_ptr<sun::security::x509::SerialNumber> cVar0;
	
	//    .param p1, "val"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 124        value = {
	// 125            Ljava/io/IOException;
	// 126        }
	// 127    .end annotation
	// 131    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<sun::security::x509::SerialNumber>(val);
	this->serial = cVar0;
	return;

}
// .method public delete(Ljava/lang/String;)V
void sun::security::x509::CertificateSerialNumber::_delete_(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 150        value = {
	// 151            Ljava/io/IOException;
	// 152        }
	// 153    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("number")))) )  
		goto label_cond_d;
	this->serial = 0x0;
	return;
	// 173    .line 160
label_cond_d:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:CertificateSerialNumber.")));
	// throw
	throw cVar0;

}
// .method public encode(Ljava/io/OutputStream;)V
void sun::security::x509::CertificateSerialNumber::encode(std::shared_ptr<java::io::OutputStream> out)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 188        value = {
	// 189            Ljava/io/IOException;
	// 190        }
	// 191    .end annotation
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "tmp":Lsun/security/util/DerOutputStream;
	this->serial->encode(tmp);
	out->write(tmp->toByteArray());
	return;

}
// .method public get(Ljava/lang/String;)Lsun/security/x509/SerialNumber;
std::shared_ptr<sun::security::x509::SerialNumber> sun::security::x509::CertificateSerialNumber::get(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 238        value = {
	// 239            Ljava/io/IOException;
	// 240        }
	// 241    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("number")))) )  
		goto label_cond_c;
	return this->serial;
	// 258    .line 148
label_cond_c:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:CertificateSerialNumber.")));
	// throw
	throw cVar0;

}
// .method public getElements()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> sun::security::x509::CertificateSerialNumber::getElements()
{
	
	std::shared_ptr<sun::security::x509::AttributeNameEnumeration> elements;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 272        value = {
	// 273            "()",
	// 274            "Ljava/util/Enumeration",
	// 275            "<",
	// 276            "Ljava/lang/String;",
	// 277            ">;"
	// 278        }
	// 279    .end annotation
	elements = std::make_shared<sun::security::x509::AttributeNameEnumeration>();
	//    .local v0, "elements":Lsun/security/x509/AttributeNameEnumeration;
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("number")));
	return elements->elements();

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::CertificateSerialNumber::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("serialNumber"));

}
// .method public set(Ljava/lang/String;Ljava/lang/Object;)V
void sun::security::x509::CertificateSerialNumber::set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 316        value = {
	// 317            Ljava/io/IOException;
	// 318        }
	// 319    .end annotation
	if ( obj->instanceOf("sun::security::x509::SerialNumber") )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute must be of type SerialNumber.")));
	// throw
	throw cVar0;
	// 336    .line 133
label_cond_d:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("number")))) )  
		goto label_cond_1b;
	obj->checkCast("sun::security::x509::SerialNumber");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->serial = obj;
	return;
	// 355    .line 136
	// 356    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_1b:
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:CertificateSerialNumber.")));
	// throw
	throw cVar1;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::CertificateSerialNumber::toString()
{
	
	if ( this->serial )     
		goto label_cond_8;
	return std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	// 380    .line 110
label_cond_8:
	return this->serial->toString();

}


