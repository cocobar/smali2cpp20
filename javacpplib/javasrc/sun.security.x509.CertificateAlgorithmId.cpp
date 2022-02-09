// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\CertificateAlgorithmId.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.InputStream.h"
#include "java.io.OutputStream.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Enumeration.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AlgorithmId.h"
#include "sun.security.x509.AttributeNameEnumeration.h"
#include "sun.security.x509.CertificateAlgorithmId.h"

static sun::security::x509::CertificateAlgorithmId::ALGORITHM = std::make_shared<java::lang::String>("algorithm");
static sun::security::x509::CertificateAlgorithmId::IDENT = std::make_shared<java::lang::String>("x509.info.algorithmID");
static sun::security::x509::CertificateAlgorithmId::NAME = std::make_shared<java::lang::String>("algorithmID");
// .method public constructor <init>(Ljava/io/InputStream;)V
sun::security::x509::CertificateAlgorithmId::CertificateAlgorithmId(std::shared_ptr<java::io::InputStream> in)
{
	
	std::shared_ptr<sun::security::util::DerValue> val;
	
	//    .param p1, "in"    # Ljava/io/InputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 038        value = {
	// 039            Ljava/io/IOException;
	// 040        }
	// 041    .end annotation
	// 045    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	val = std::make_shared<sun::security::util::DerValue>(in);
	//    .local v0, "val":Lsun/security/util/DerValue;
	this->algId = sun::security::x509::AlgorithmId::parse(val);
	return;

}
// .method public constructor <init>(Lsun/security/util/DerInputStream;)V
sun::security::x509::CertificateAlgorithmId::CertificateAlgorithmId(std::shared_ptr<sun::security::util::DerInputStream> in)
{
	
	//    .param p1, "in"    # Lsun/security/util/DerInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 068        value = {
	// 069            Ljava/io/IOException;
	// 070        }
	// 071    .end annotation
	// 075    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	//    .local v0, "val":Lsun/security/util/DerValue;
	this->algId = sun::security::x509::AlgorithmId::parse(in->getDerValue());
	return;

}
// .method public constructor <init>(Lsun/security/x509/AlgorithmId;)V
sun::security::x509::CertificateAlgorithmId::CertificateAlgorithmId(std::shared_ptr<sun::security::x509::AlgorithmId> algId)
{
	
	//    .param p1, "algId"    # Lsun/security/x509/AlgorithmId;
	// 100    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->algId = algId;
	return;

}
// .method public delete(Ljava/lang/String;)V
void sun::security::x509::CertificateAlgorithmId::_delete_(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 115        value = {
	// 116            Ljava/io/IOException;
	// 117        }
	// 118    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("algorithm")))) )  
		goto label_cond_d;
	this->algId = 0x0;
	return;
	// 138    .line 149
label_cond_d:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:CertificateAlgorithmId.")));
	// throw
	throw cVar0;

}
// .method public encode(Ljava/io/OutputStream;)V
void sun::security::x509::CertificateAlgorithmId::encode(std::shared_ptr<java::io::OutputStream> out)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 153        value = {
	// 154            Ljava/io/IOException;
	// 155        }
	// 156    .end annotation
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "tmp":Lsun/security/util/DerOutputStream;
	this->algId->encode(tmp);
	out->write(tmp->toByteArray());
	return;

}
// .method public get(Ljava/lang/String;)Lsun/security/x509/AlgorithmId;
std::shared_ptr<sun::security::x509::AlgorithmId> sun::security::x509::CertificateAlgorithmId::get(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 203        value = {
	// 204            Ljava/io/IOException;
	// 205        }
	// 206    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("algorithm")))) )  
		goto label_cond_c;
	return this->algId;
	// 223    .line 137
label_cond_c:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:CertificateAlgorithmId.")));
	// throw
	throw cVar0;

}
// .method public getElements()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> sun::security::x509::CertificateAlgorithmId::getElements()
{
	
	std::shared_ptr<sun::security::x509::AttributeNameEnumeration> elements;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 237        value = {
	// 238            "()",
	// 239            "Ljava/util/Enumeration",
	// 240            "<",
	// 241            "Ljava/lang/String;",
	// 242            ">;"
	// 243        }
	// 244    .end annotation
	elements = std::make_shared<sun::security::x509::AttributeNameEnumeration>();
	//    .local v0, "elements":Lsun/security/x509/AttributeNameEnumeration;
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("algorithm")));
	return elements->elements();

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::CertificateAlgorithmId::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("algorithmID"));

}
// .method public set(Ljava/lang/String;Ljava/lang/Object;)V
void sun::security::x509::CertificateAlgorithmId::set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 281        value = {
	// 282            Ljava/io/IOException;
	// 283        }
	// 284    .end annotation
	if ( obj->instanceOf("sun::security::x509::AlgorithmId") )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute must be of type AlgorithmId.")));
	// throw
	throw cVar0;
	// 301    .line 122
label_cond_d:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("algorithm")))) )  
		goto label_cond_1b;
	obj->checkCast("sun::security::x509::AlgorithmId");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->algId = obj;
	return;
	// 320    .line 125
	// 321    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_1b:
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:CertificateAlgorithmId.")));
	// throw
	throw cVar1;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::CertificateAlgorithmId::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	if ( this->algId )     
		goto label_cond_8;
	return std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	// 345    .line 98
label_cond_8:
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(this->algId->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", OID = ")))->append(this->algId->getOID()->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")))->toString();

}


