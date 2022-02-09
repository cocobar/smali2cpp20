// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\CertificateX509Key.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.InputStream.h"
#include "java.io.OutputStream.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.security.PublicKey.h"
#include "java.util.Enumeration.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.AttributeNameEnumeration.h"
#include "sun.security.x509.CertificateX509Key.h"
#include "sun.security.x509.X509Key.h"

static sun::security::x509::CertificateX509Key::IDENT = std::make_shared<java::lang::String>("x509.info.key");
static sun::security::x509::CertificateX509Key::KEY = std::make_shared<java::lang::String>("value");
static sun::security::x509::CertificateX509Key::NAME = std::make_shared<java::lang::String>("key");
// .method public constructor <init>(Ljava/io/InputStream;)V
sun::security::x509::CertificateX509Key::CertificateX509Key(std::shared_ptr<java::io::InputStream> in)
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
	this->key = sun::security::x509::X509Key::parse(val);
	return;

}
// .method public constructor <init>(Ljava/security/PublicKey;)V
sun::security::x509::CertificateX509Key::CertificateX509Key(std::shared_ptr<java::security::PublicKey> key)
{
	
	//    .param p1, "key"    # Ljava/security/PublicKey;
	// 070    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->key = key;
	return;

}
// .method public constructor <init>(Lsun/security/util/DerInputStream;)V
sun::security::x509::CertificateX509Key::CertificateX509Key(std::shared_ptr<sun::security::util::DerInputStream> in)
{
	
	//    .param p1, "in"    # Lsun/security/util/DerInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 083        value = {
	// 084            Ljava/io/IOException;
	// 085        }
	// 086    .end annotation
	// 090    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	//    .local v0, "val":Lsun/security/util/DerValue;
	this->key = sun::security::x509::X509Key::parse(in->getDerValue());
	return;

}
// .method public delete(Ljava/lang/String;)V
void sun::security::x509::CertificateX509Key::_delete_(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 115        value = {
	// 116            Ljava/io/IOException;
	// 117        }
	// 118    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("value")))) )  
		goto label_cond_d;
	this->key = 0x0;
	return;
	// 138    .line 141
label_cond_d:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet: CertificateX509Key.")));
	// throw
	throw cVar0;

}
// .method public encode(Ljava/io/OutputStream;)V
void sun::security::x509::CertificateX509Key::encode(std::shared_ptr<java::io::OutputStream> out)
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
	tmp->write(this->key->getEncoded());
	out->write(tmp->toByteArray());
	return;

}
// .method public get(Ljava/lang/String;)Ljava/security/PublicKey;
std::shared_ptr<java::security::PublicKey> sun::security::x509::CertificateX509Key::get(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 207        value = {
	// 208            Ljava/io/IOException;
	// 209        }
	// 210    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("value")))) )  
		goto label_cond_c;
	return this->key;
	// 227    .line 129
label_cond_c:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet: CertificateX509Key.")));
	// throw
	throw cVar0;

}
// .method public getElements()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> sun::security::x509::CertificateX509Key::getElements()
{
	
	std::shared_ptr<sun::security::x509::AttributeNameEnumeration> elements;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 241        value = {
	// 242            "()",
	// 243            "Ljava/util/Enumeration",
	// 244            "<",
	// 245            "Ljava/lang/String;",
	// 246            ">;"
	// 247        }
	// 248    .end annotation
	elements = std::make_shared<sun::security::x509::AttributeNameEnumeration>();
	//    .local v0, "elements":Lsun/security/x509/AttributeNameEnumeration;
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("value")));
	return elements->elements();

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::CertificateX509Key::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("key"));

}
// .method public set(Ljava/lang/String;Ljava/lang/Object;)V
void sun::security::x509::CertificateX509Key::set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 285        value = {
	// 286            Ljava/io/IOException;
	// 287        }
	// 288    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("value")))) )  
		goto label_cond_e;
	obj->checkCast("java::security::PublicKey");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->key = obj;
	return;
	// 309    .line 117
	// 310    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_e:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet: CertificateX509Key.")));
	// throw
	throw cVar0;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::CertificateX509Key::toString()
{
	
	if ( this->key )     
		goto label_cond_8;
	return std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	// 334    .line 94
label_cond_8:
	return this->key->toString();

}


