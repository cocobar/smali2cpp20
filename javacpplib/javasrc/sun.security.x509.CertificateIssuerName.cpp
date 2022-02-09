// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\CertificateIssuerName.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.InputStream.h"
#include "java.io.OutputStream.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Enumeration.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.AttributeNameEnumeration.h"
#include "sun.security.x509.CertificateIssuerName.h"
#include "sun.security.x509.X500Name.h"

static sun::security::x509::CertificateIssuerName::DN_NAME = std::make_shared<java::lang::String>("dname");
static sun::security::x509::CertificateIssuerName::DN_PRINCIPAL = std::make_shared<java::lang::String>("x500principal");
static sun::security::x509::CertificateIssuerName::IDENT = std::make_shared<java::lang::String>("x509.info.issuer");
static sun::security::x509::CertificateIssuerName::NAME = std::make_shared<java::lang::String>("issuer");
// .method public constructor <init>(Ljava/io/InputStream;)V
sun::security::x509::CertificateIssuerName::CertificateIssuerName(std::shared_ptr<java::io::InputStream> in)
{
	
	std::shared_ptr<sun::security::util::DerValue> derVal;
	std::shared_ptr<sun::security::x509::X500Name> cVar0;
	
	//    .param p1, "in"    # Ljava/io/InputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 042        value = {
	// 043            Ljava/io/IOException;
	// 044        }
	// 045    .end annotation
	// 049    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	derVal = std::make_shared<sun::security::util::DerValue>(in);
	//    .local v0, "derVal":Lsun/security/util/DerValue;
	cVar0 = std::make_shared<sun::security::x509::X500Name>(derVal);
	this->dnName = cVar0;
	return;

}
// .method public constructor <init>(Lsun/security/util/DerInputStream;)V
sun::security::x509::CertificateIssuerName::CertificateIssuerName(std::shared_ptr<sun::security::util::DerInputStream> in)
{
	
	std::shared_ptr<sun::security::x509::X500Name> cVar0;
	
	//    .param p1, "in"    # Lsun/security/util/DerInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 072        value = {
	// 073            Ljava/io/IOException;
	// 074        }
	// 075    .end annotation
	// 079    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<sun::security::x509::X500Name>(in);
	this->dnName = cVar0;
	return;

}
// .method public constructor <init>(Lsun/security/x509/X500Name;)V
sun::security::x509::CertificateIssuerName::CertificateIssuerName(std::shared_ptr<sun::security::x509::X500Name> name)
{
	
	//    .param p1, "name"    # Lsun/security/x509/X500Name;
	// 098    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->dnName = name;
	return;

}
// .method public delete(Ljava/lang/String;)V
void sun::security::x509::CertificateIssuerName::_delete_(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<sun::security::x509::X500Name> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 113        value = {
	// 114            Ljava/io/IOException;
	// 115        }
	// 116    .end annotation
	cVar0 = 0x0;
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("dname")))) )  
		goto label_cond_f;
	this->dnName = cVar0;
	this->dnPrincipal = cVar0;
	return;
	// 139    .line 158
label_cond_f:
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:CertificateIssuerName.")));
	// throw
	throw cVar1;

}
// .method public encode(Ljava/io/OutputStream;)V
void sun::security::x509::CertificateIssuerName::encode(std::shared_ptr<java::io::OutputStream> out)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 154        value = {
	// 155            Ljava/io/IOException;
	// 156        }
	// 157    .end annotation
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "tmp":Lsun/security/util/DerOutputStream;
	this->dnName->encode(tmp);
	out->write(tmp->toByteArray());
	return;

}
// .method public get(Ljava/lang/String;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> sun::security::x509::CertificateIssuerName::get(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 186        value = {
	// 187            Ljava/io/IOException;
	// 188        }
	// 189    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("dname")))) )  
		goto label_cond_c;
	return this->dnName;
	// 206    .line 139
label_cond_c:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("x500principal")))) )  
		goto label_cond_28;
	if ( this->dnPrincipal )     
		goto label_cond_25;
	if ( !(this->dnName) )  
		goto label_cond_25;
	this->dnPrincipal = this->dnName->asX500Principal();
label_cond_25:
	return this->dnPrincipal;
	// 240    .line 145
label_cond_28:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:CertificateIssuerName.")));
	// throw
	throw cVar0;

}
// .method public getElements()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> sun::security::x509::CertificateIssuerName::getElements()
{
	
	std::shared_ptr<sun::security::x509::AttributeNameEnumeration> elements;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 254        value = {
	// 255            "()",
	// 256            "Ljava/util/Enumeration",
	// 257            "<",
	// 258            "Ljava/lang/String;",
	// 259            ">;"
	// 260        }
	// 261    .end annotation
	elements = std::make_shared<sun::security::x509::AttributeNameEnumeration>();
	//    .local v0, "elements":Lsun/security/x509/AttributeNameEnumeration;
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("dname")));
	return elements->elements();

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::CertificateIssuerName::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("issuer"));

}
// .method public set(Ljava/lang/String;Ljava/lang/Object;)V
void sun::security::x509::CertificateIssuerName::set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 298        value = {
	// 299            Ljava/io/IOException;
	// 300        }
	// 301    .end annotation
	if ( obj->instanceOf("sun::security::x509::X500Name") )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute must be of type X500Name.")));
	// throw
	throw cVar0;
	// 318    .line 124
label_cond_d:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("dname")))) )  
		goto label_cond_1e;
	obj->checkCast("sun::security::x509::X500Name");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->dnName = obj;
	this->dnPrincipal = 0x0;
	return;
	// 342    .line 128
	// 343    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_1e:
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:CertificateIssuerName.")));
	// throw
	throw cVar1;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::CertificateIssuerName::toString()
{
	
	if ( this->dnName )     
		goto label_cond_8;
	return std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	// 367    .line 101
label_cond_8:
	return this->dnName->toString();

}


