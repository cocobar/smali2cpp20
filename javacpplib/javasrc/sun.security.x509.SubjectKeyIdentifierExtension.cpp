// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\SubjectKeyIdentifierExtension.smali
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
#include "sun.security.x509.KeyIdentifier.h"
#include "sun.security.x509.PKIXExtensions.h"
#include "sun.security.x509.SubjectKeyIdentifierExtension.h"

static sun::security::x509::SubjectKeyIdentifierExtension::IDENT = std::make_shared<java::lang::String>("x509.info.extensions.SubjectKeyIdentifier");
static sun::security::x509::SubjectKeyIdentifierExtension::KEY_ID = std::make_shared<java::lang::String>("key_id");
static sun::security::x509::SubjectKeyIdentifierExtension::NAME = std::make_shared<java::lang::String>("SubjectKeyIdentifier");
// .method public constructor <init>(Ljava/lang/Boolean;Ljava/lang/Object;)V
sun::security::x509::SubjectKeyIdentifierExtension::SubjectKeyIdentifierExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value)
{
	
	std::shared_ptr<sun::security::util::DerValue> val;
	std::shared_ptr<sun::security::x509::KeyIdentifier> cVar0;
	
	//    .param p1, "critical"    # Ljava/lang/Boolean;
	//    .param p2, "value"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 039        value = {
	// 040            Ljava/io/IOException;
	// 041        }
	// 042    .end annotation
	// 046    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->id = 0x0;
	this->extensionId = sun::security::x509::PKIXExtensions::SubjectKey_Id;
	this->critical = critical->booleanValue();
	value->checkCast("unsigned char[]");
	//    .end local p2    # "value":Ljava/lang/Object;
	this->extensionValue = value;
	val = std::make_shared<sun::security::util::DerValue>(this->extensionValue);
	//    .local v0, "val":Lsun/security/util/DerValue;
	cVar0 = std::make_shared<sun::security::x509::KeyIdentifier>(val);
	this->id = cVar0;
	return;

}
// .method public constructor <init>([B)V
sun::security::x509::SubjectKeyIdentifierExtension::SubjectKeyIdentifierExtension(std::shared_ptr<unsigned char[]> octetString)
{
	
	std::shared_ptr<sun::security::x509::KeyIdentifier> cVar0;
	
	//    .param p1, "octetString"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 094        value = {
	// 095            Ljava/io/IOException;
	// 096        }
	// 097    .end annotation
	// 101    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->id = 0x0;
	cVar0 = std::make_shared<sun::security::x509::KeyIdentifier>(octetString);
	this->id = cVar0;
	this->extensionId = sun::security::x509::PKIXExtensions::SubjectKey_Id;
	this->critical = 0x0;
	this->encodeThis();
	return;

}
// .method private encodeThis()V
void sun::security::x509::SubjectKeyIdentifierExtension::encodeThis()
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> os;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 135        value = {
	// 136            Ljava/io/IOException;
	// 137        }
	// 138    .end annotation
	if ( this->id )     
		goto label_cond_8;
	this->extensionValue = 0x0;
	return;
	// 154    .line 78
label_cond_8:
	os = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "os":Lsun/security/util/DerOutputStream;
	this->id->encode(os);
	this->extensionValue = os->toByteArray();
	return;

}
// .method public delete(Ljava/lang/String;)V
void sun::security::x509::SubjectKeyIdentifierExtension::_delete_(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 183        value = {
	// 184            Ljava/io/IOException;
	// 185        }
	// 186    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("key_id")))) )  
		goto label_cond_10;
	this->id = 0x0;
	this->encodeThis();
	return;
	// 209    .line 175
label_cond_10:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:SubjectKeyIdentifierExtension.")));
	// throw
	throw cVar0;

}
// .method public encode(Ljava/io/OutputStream;)V
void sun::security::x509::SubjectKeyIdentifierExtension::encode(std::shared_ptr<java::io::OutputStream> out)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 224        value = {
	// 225            Ljava/io/IOException;
	// 226        }
	// 227    .end annotation
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "tmp":Lsun/security/util/DerOutputStream;
	if ( this->extensionValue )     
		goto label_cond_13;
	this->extensionId = sun::security::x509::PKIXExtensions::SubjectKey_Id;
	this->critical = 0x0;
	this->encodeThis();
label_cond_13:
	this->encode(tmp);
	out->write(tmp->toByteArray());
	return;

}
// .method public get(Ljava/lang/String;)Lsun/security/x509/KeyIdentifier;
std::shared_ptr<sun::security::x509::KeyIdentifier> sun::security::x509::SubjectKeyIdentifierExtension::get(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 291        value = {
	// 292            Ljava/io/IOException;
	// 293        }
	// 294    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("key_id")))) )  
		goto label_cond_c;
	return this->id;
	// 311    .line 163
label_cond_c:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:SubjectKeyIdentifierExtension.")));
	// throw
	throw cVar0;

}
// .method public getElements()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> sun::security::x509::SubjectKeyIdentifierExtension::getElements()
{
	
	std::shared_ptr<sun::security::x509::AttributeNameEnumeration> elements;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 325        value = {
	// 326            "()",
	// 327            "Ljava/util/Enumeration",
	// 328            "<",
	// 329            "Ljava/lang/String;",
	// 330            ">;"
	// 331        }
	// 332    .end annotation
	elements = std::make_shared<sun::security::x509::AttributeNameEnumeration>();
	//    .local v0, "elements":Lsun/security/x509/AttributeNameEnumeration;
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("key_id")));
	return elements->elements();

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::SubjectKeyIdentifierExtension::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("SubjectKeyIdentifier"));

}
// .method public set(Ljava/lang/String;Ljava/lang/Object;)V
void sun::security::x509::SubjectKeyIdentifierExtension::set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 369        value = {
	// 370            Ljava/io/IOException;
	// 371        }
	// 372    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("key_id")))) )  
		goto label_cond_1e;
	if ( obj->instanceOf("sun::security::x509::KeyIdentifier") )     
		goto label_cond_16;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute value should be of type KeyIdentifier.")));
	// throw
	throw cVar0;
	// 398    .line 148
label_cond_16:
	obj->checkCast("sun::security::x509::KeyIdentifier");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->id = obj;
	this->encodeThis();
	return;
	// 411    .line 150
	// 412    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_1e:
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:SubjectKeyIdentifierExtension.")));
	// throw
	throw cVar1;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::SubjectKeyIdentifierExtension::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(this->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("SubjectKeyIdentifier [\n")))->append(java::lang::String::valueOf(this->id))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]\n")))->toString();

}


