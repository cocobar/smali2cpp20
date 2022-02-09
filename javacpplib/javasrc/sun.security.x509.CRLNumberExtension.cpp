// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\CRLNumberExtension.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.math.BigInteger.h"
#include "java.util.Enumeration.h"
#include "sun.security.util.Debug.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AttributeNameEnumeration.h"
#include "sun.security.x509.CRLNumberExtension.h"
#include "sun.security.x509.PKIXExtensions.h"

static sun::security::x509::CRLNumberExtension::LABEL = std::make_shared<java::lang::String>("CRL Number");
static sun::security::x509::CRLNumberExtension::NAME = std::make_shared<java::lang::String>("CRLNumber");
static sun::security::x509::CRLNumberExtension::NUMBER = std::make_shared<java::lang::String>("value");
// .method public constructor <init>(I)V
sun::security::x509::CRLNumberExtension::CRLNumberExtension(int crlNum)
{
	
	//    .param p1, "crlNum"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 042        value = {
	// 043            Ljava/io/IOException;
	// 044        }
	// 045    .end annotation
	sun::security::x509::CRLNumberExtension::(sun::security::x509::PKIXExtensions::CRLNumber_Id, 0x0, java::math::BigInteger::valueOf((long long)(crlNum)), std::make_shared<java::lang::String>(std::make_shared<char[]>("CRLNumber")), std::make_shared<java::lang::String>(std::make_shared<char[]>("CRL Number")));
	return;

}
// .method public constructor <init>(Ljava/lang/Boolean;Ljava/lang/Object;)V
sun::security::x509::CRLNumberExtension::CRLNumberExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value)
{
	
	//    .param p1, "critical"    # Ljava/lang/Boolean;
	//    .param p2, "value"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 078        value = {
	// 079            Ljava/io/IOException;
	// 080        }
	// 081    .end annotation
	sun::security::x509::CRLNumberExtension::(sun::security::x509::PKIXExtensions::CRLNumber_Id, critical, value, std::make_shared<java::lang::String>(std::make_shared<char[]>("CRLNumber")), std::make_shared<java::lang::String>(std::make_shared<char[]>("CRL Number")));
	return;

}
// .method public constructor <init>(Ljava/math/BigInteger;)V
sun::security::x509::CRLNumberExtension::CRLNumberExtension(std::shared_ptr<java::math::BigInteger> crlNum)
{
	
	//    .param p1, "crlNum"    # Ljava/math/BigInteger;
	//    .annotation system Ldalvik/annotation/Throws;
	// 107        value = {
	// 108            Ljava/io/IOException;
	// 109        }
	// 110    .end annotation
	sun::security::x509::CRLNumberExtension::(sun::security::x509::PKIXExtensions::CRLNumber_Id, 0x0, crlNum, std::make_shared<java::lang::String>(std::make_shared<char[]>("CRLNumber")), std::make_shared<java::lang::String>(std::make_shared<char[]>("CRL Number")));
	return;

}
// .method protected constructor <init>(Lsun/security/util/ObjectIdentifier;Ljava/lang/Boolean;Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V
sun::security::x509::CRLNumberExtension::CRLNumberExtension(std::shared_ptr<sun::security::util::ObjectIdentifier> extensionId,std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value,std::shared_ptr<java::lang::String> extensionName,std::shared_ptr<java::lang::String> extensionLabel)
{
	
	std::shared_ptr<sun::security::util::DerValue> val;
	
	//    .param p1, "extensionId"    # Lsun/security/util/ObjectIdentifier;
	//    .param p2, "critical"    # Ljava/lang/Boolean;
	//    .param p3, "value"    # Ljava/lang/Object;
	//    .param p4, "extensionName"    # Ljava/lang/String;
	//    .param p5, "extensionLabel"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 140        value = {
	// 141            Ljava/io/IOException;
	// 142        }
	// 143    .end annotation
	// 147    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->crlNumber = 0x0;
	this->extensionId = extensionId;
	this->critical = critical->booleanValue();
	value->checkCast("unsigned char[]");
	//    .end local p3    # "value":Ljava/lang/Object;
	this->extensionValue = value;
	val = std::make_shared<sun::security::util::DerValue>(this->extensionValue);
	//    .local v0, "val":Lsun/security/util/DerValue;
	this->crlNumber = val->getBigInteger();
	this->extensionName = extensionName;
	this->extensionLabel = extensionLabel;
	return;

}
// .method protected constructor <init>(Lsun/security/util/ObjectIdentifier;ZLjava/math/BigInteger;Ljava/lang/String;Ljava/lang/String;)V
sun::security::x509::CRLNumberExtension::CRLNumberExtension(std::shared_ptr<sun::security::util::ObjectIdentifier> extensionId,bool isCritical,std::shared_ptr<java::math::BigInteger> crlNum,std::shared_ptr<java::lang::String> extensionName,std::shared_ptr<java::lang::String> extensionLabel)
{
	
	//    .param p1, "extensionId"    # Lsun/security/util/ObjectIdentifier;
	//    .param p2, "isCritical"    # Z
	//    .param p3, "crlNum"    # Ljava/math/BigInteger;
	//    .param p4, "extensionName"    # Ljava/lang/String;
	//    .param p5, "extensionLabel"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 203        value = {
	// 204            Ljava/io/IOException;
	// 205        }
	// 206    .end annotation
	// 210    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->crlNumber = 0x0;
	this->extensionId = extensionId;
	this->critical = isCritical;
	this->crlNumber = crlNum;
	this->extensionName = extensionName;
	this->extensionLabel = extensionLabel;
	this->encodeThis();
	return;

}
// .method private encodeThis()V
void sun::security::x509::CRLNumberExtension::encodeThis()
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> os;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 242        value = {
	// 243            Ljava/io/IOException;
	// 244        }
	// 245    .end annotation
	if ( this->crlNumber )     
		goto label_cond_8;
	this->extensionValue = 0x0;
	return;
	// 261    .line 69
label_cond_8:
	os = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "os":Lsun/security/util/DerOutputStream;
	os->putInteger(this->crlNumber);
	this->extensionValue = os->toByteArray();
	return;

}
// .method public delete(Ljava/lang/String;)V
void sun::security::x509::CRLNumberExtension::_delete_(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 290        value = {
	// 291            Ljava/io/IOException;
	// 292        }
	// 293    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("value")))) )  
		goto label_cond_10;
	this->crlNumber = 0x0;
	this->encodeThis();
	return;
	// 316    .line 174
label_cond_10:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:")))->append(this->extensionName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(".")))->toString());
	// throw
	throw cVar0;

}
// .method public encode(Ljava/io/OutputStream;)V
void sun::security::x509::CRLNumberExtension::encode(std::shared_ptr<java::io::OutputStream> out)
{
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 359        value = {
	// 360            Ljava/io/IOException;
	// 361        }
	// 362    .end annotation
	tmp = new sun::security::util::DerOutputStream();
	//    .local v0, "tmp":Lsun/security/util/DerOutputStream;
	this->encode(out, sun::security::x509::PKIXExtensions::CRLNumber_Id, 0x1);
	return;

}
// .method protected encode(Ljava/io/OutputStream;Lsun/security/util/ObjectIdentifier;Z)V
void sun::security::x509::CRLNumberExtension::encode(std::shared_ptr<java::io::OutputStream> out,std::shared_ptr<sun::security::util::ObjectIdentifier> extensionId,bool isCritical)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .param p2, "extensionId"    # Lsun/security/util/ObjectIdentifier;
	//    .param p3, "isCritical"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 388        value = {
	// 389            Ljava/io/IOException;
	// 390        }
	// 391    .end annotation
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "tmp":Lsun/security/util/DerOutputStream;
	if ( this->extensionValue )     
		goto label_cond_10;
	this->extensionId = extensionId;
	this->critical = isCritical;
	this->encodeThis();
label_cond_10:
	this->encode(tmp);
	out->write(tmp->toByteArray());
	return;

}
// .method public get(Ljava/lang/String;)Ljava/math/BigInteger;
std::shared_ptr<java::math::BigInteger> sun::security::x509::CRLNumberExtension::get(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 451        value = {
	// 452            Ljava/io/IOException;
	// 453        }
	// 454    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("value")))) )  
		goto label_cond_c;
	return this->crlNumber;
	// 471    .line 162
label_cond_c:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:")))->append(this->extensionName)->append(0x2e)->toString());
	// throw
	throw cVar0;

}
// .method public getElements()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> sun::security::x509::CRLNumberExtension::getElements()
{
	
	std::shared_ptr<sun::security::x509::AttributeNameEnumeration> elements;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 513        value = {
	// 514            "()",
	// 515            "Ljava/util/Enumeration",
	// 516            "<",
	// 517            "Ljava/lang/String;",
	// 518            ">;"
	// 519        }
	// 520    .end annotation
	elements = std::make_shared<sun::security::x509::AttributeNameEnumeration>();
	//    .local v0, "elements":Lsun/security/x509/AttributeNameEnumeration;
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("value")));
	return elements->elements();

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::CRLNumberExtension::getName()
{
	
	return this->extensionName;

}
// .method public set(Ljava/lang/String;Ljava/lang/Object;)V
void sun::security::x509::CRLNumberExtension::set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 557        value = {
	// 558            Ljava/io/IOException;
	// 559        }
	// 560    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("value")))) )  
		goto label_cond_1e;
	if ( obj->instanceOf("java::math::BigInteger") )     
		goto label_cond_16;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute must be of type BigInteger.")));
	// throw
	throw cVar0;
	// 586    .line 147
label_cond_16:
	obj->checkCast("java::math::BigInteger");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->crlNumber = obj;
	this->encodeThis();
	return;
	// 599    .line 149
	// 600    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_1e:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::io::IOException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:")))->append(this->extensionName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(".")))->toString());
	// throw
	throw cVar1;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::CRLNumberExtension::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	if ( this->crlNumber )     
		goto label_cond_31;
	cVar1 = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
label_goto_21:
	//    .local v0, "s":Ljava/lang/String;
	return cVar0->append(this->toString())->append(this->extensionLabel)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(": ")))->append(cVar1)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")))->toString();
	// 697    .line 185
	// 698    .end local v0    # "s":Ljava/lang/String;
label_cond_31:
	cVar1 = sun::security::util::Debug::toHexString(this->crlNumber);
	goto label_goto_21;

}


