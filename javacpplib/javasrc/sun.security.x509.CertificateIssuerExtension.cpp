// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\CertificateIssuerExtension.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Enumeration.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AttributeNameEnumeration.h"
#include "sun.security.x509.CertificateIssuerExtension.h"
#include "sun.security.x509.GeneralNames.h"
#include "sun.security.x509.PKIXExtensions.h"

static sun::security::x509::CertificateIssuerExtension::ISSUER = std::make_shared<java::lang::String>("issuer");
static sun::security::x509::CertificateIssuerExtension::NAME = std::make_shared<java::lang::String>("CertificateIssuer");
// .method public constructor <init>(Ljava/lang/Boolean;Ljava/lang/Object;)V
sun::security::x509::CertificateIssuerExtension::CertificateIssuerExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value)
{
	
	std::shared_ptr<sun::security::util::DerValue> val;
	std::shared_ptr<sun::security::x509::GeneralNames> cVar0;
	
	//    .param p1, "critical"    # Ljava/lang/Boolean;
	//    .param p2, "value"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 037        value = {
	// 038            Ljava/io/IOException;
	// 039        }
	// 040    .end annotation
	// 044    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->extensionId = sun::security::x509::PKIXExtensions::CertificateIssuer_Id;
	this->critical = critical->booleanValue();
	value->checkCast("unsigned char[]");
	//    .end local p2    # "value":Ljava/lang/Object;
	this->extensionValue = value;
	val = std::make_shared<sun::security::util::DerValue>(this->extensionValue);
	//    .local v0, "val":Lsun/security/util/DerValue;
	cVar0 = std::make_shared<sun::security::x509::GeneralNames>(val);
	this->names = cVar0;
	return;

}
// .method public constructor <init>(Lsun/security/x509/GeneralNames;)V
sun::security::x509::CertificateIssuerExtension::CertificateIssuerExtension(std::shared_ptr<sun::security::x509::GeneralNames> issuer)
{
	
	//    .param p1, "issuer"    # Lsun/security/x509/GeneralNames;
	//    .annotation system Ldalvik/annotation/Throws;
	// 087        value = {
	// 088            Ljava/io/IOException;
	// 089        }
	// 090    .end annotation
	// 094    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->extensionId = sun::security::x509::PKIXExtensions::CertificateIssuer_Id;
	this->critical = 0x1;
	this->names = issuer;
	this->encodeThis();
	return;

}
// .method private encodeThis()V
void sun::security::x509::CertificateIssuerExtension::encodeThis()
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> os;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 119        value = {
	// 120            Ljava/io/IOException;
	// 121        }
	// 122    .end annotation
	if ( !(this->names) )  
		goto label_cond_d;
	if ( !(this->names->isEmpty()) )  
		goto label_cond_10;
label_cond_d:
	this->extensionValue = 0x0;
	return;
	// 147    .line 82
label_cond_10:
	os = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "os":Lsun/security/util/DerOutputStream;
	this->names->encode(os);
	this->extensionValue = os->toByteArray();
	return;

}
// .method public delete(Ljava/lang/String;)V
void sun::security::x509::CertificateIssuerExtension::_delete_(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 176        value = {
	// 177            Ljava/io/IOException;
	// 178        }
	// 179    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("issuer")))) )  
		goto label_cond_10;
	this->names = 0x0;
	this->encodeThis();
	return;
	// 202    .line 162
label_cond_10:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:CertificateIssuer")));
	// throw
	throw cVar0;

}
// .method public encode(Ljava/io/OutputStream;)V
void sun::security::x509::CertificateIssuerExtension::encode(std::shared_ptr<java::io::OutputStream> out)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 217        value = {
	// 218            Ljava/io/IOException;
	// 219        }
	// 220    .end annotation
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "tmp":Lsun/security/util/DerOutputStream;
	if ( this->extensionValue )     
		goto label_cond_13;
	this->extensionId = sun::security::x509::PKIXExtensions::CertificateIssuer_Id;
	this->critical = 0x1;
	this->encodeThis();
label_cond_13:
	this->encode(tmp);
	out->write(tmp->toByteArray());
	return;

}
// .method public get(Ljava/lang/String;)Lsun/security/x509/GeneralNames;
std::shared_ptr<sun::security::x509::GeneralNames> sun::security::x509::CertificateIssuerExtension::get(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 284        value = {
	// 285            Ljava/io/IOException;
	// 286        }
	// 287    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("issuer")))) )  
		goto label_cond_c;
	return this->names;
	// 304    .line 148
label_cond_c:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:CertificateIssuer")));
	// throw
	throw cVar0;

}
// .method public getElements()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> sun::security::x509::CertificateIssuerExtension::getElements()
{
	
	std::shared_ptr<sun::security::x509::AttributeNameEnumeration> elements;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 318        value = {
	// 319            "()",
	// 320            "Ljava/util/Enumeration",
	// 321            "<",
	// 322            "Ljava/lang/String;",
	// 323            ">;"
	// 324        }
	// 325    .end annotation
	elements = std::make_shared<sun::security::x509::AttributeNameEnumeration>();
	//    .local v0, "elements":Lsun/security/x509/AttributeNameEnumeration;
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("issuer")));
	return elements->elements();

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::CertificateIssuerExtension::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("CertificateIssuer"));

}
// .method public set(Ljava/lang/String;Ljava/lang/Object;)V
void sun::security::x509::CertificateIssuerExtension::set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 362        value = {
	// 363            Ljava/io/IOException;
	// 364        }
	// 365    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("issuer")))) )  
		goto label_cond_1e;
	if ( obj->instanceOf("sun::security::x509::GeneralNames") )     
		goto label_cond_16;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute value must be of type GeneralNames")));
	// throw
	throw cVar0;
	// 391    .line 131
label_cond_16:
	obj->checkCast("sun::security::x509::GeneralNames");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->names = obj;
	this->encodeThis();
	return;
	// 404    .line 133
	// 405    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_1e:
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:CertificateIssuer")));
	// throw
	throw cVar1;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::CertificateIssuerExtension::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(this->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Certificate Issuer [\n")))->append(java::lang::String::valueOf(this->names))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]\n")))->toString();

}


