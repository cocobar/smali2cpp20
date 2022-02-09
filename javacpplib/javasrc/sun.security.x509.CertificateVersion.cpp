// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\CertificateVersion.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.InputStream.h"
#include "java.io.OutputStream.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Enumeration.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.AttributeNameEnumeration.h"
#include "sun.security.x509.CertificateVersion.h"

static sun::security::x509::CertificateVersion::IDENT = std::make_shared<java::lang::String>("x509.info.version");
static sun::security::x509::CertificateVersion::NAME = std::make_shared<java::lang::String>("version");
static sun::security::x509::CertificateVersion::V1 = 0x0;
static sun::security::x509::CertificateVersion::V2 = 0x1;
static sun::security::x509::CertificateVersion::V3 = 0x2;
static sun::security::x509::CertificateVersion::VERSION = std::make_shared<java::lang::String>("number");
// .method public constructor <init>()V
sun::security::x509::CertificateVersion::CertificateVersion()
{
	
	int cVar0;
	
	cVar0 = 0x0;
	// 047    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->version = cVar0;
	this->version = cVar0;
	return;

}
// .method public constructor <init>(I)V
sun::security::x509::CertificateVersion::CertificateVersion(int version)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "version"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 063        value = {
	// 064            Ljava/io/IOException;
	// 065        }
	// 066    .end annotation
	// 072    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->version = 0x0;
	if ( !(version) )  
		goto label_cond_b;
	if ( version != 0x1 )
		goto label_cond_e;
label_cond_b:
	this->version = version;
	return;
	// 091    .line 102
label_cond_e:
	if ( version == 0x2 )
		goto label_cond_b;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("X.509 Certificate version ")))->append(version)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" not supported.\n")))->toString());
	// throw
	throw cVar0;

}
// .method public constructor <init>(Ljava/io/InputStream;)V
sun::security::x509::CertificateVersion::CertificateVersion(std::shared_ptr<java::io::InputStream> in)
{
	
	int cVar0;
	std::shared_ptr<sun::security::util::DerValue> derVal;
	
	//    .param p1, "in"    # Ljava/io/InputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 135        value = {
	// 136            Ljava/io/IOException;
	// 137        }
	// 138    .end annotation
	cVar0 = 0x0;
	// 144    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->version = cVar0;
	this->version = cVar0;
	derVal = std::make_shared<sun::security::util::DerValue>(in);
	//    .local v0, "derVal":Lsun/security/util/DerValue;
	this->construct(derVal);
	return;

}
// .method public constructor <init>(Lsun/security/util/DerInputStream;)V
sun::security::x509::CertificateVersion::CertificateVersion(std::shared_ptr<sun::security::util::DerInputStream> in)
{
	
	int cVar0;
	
	//    .param p1, "in"    # Lsun/security/util/DerInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 169        value = {
	// 170            Ljava/io/IOException;
	// 171        }
	// 172    .end annotation
	cVar0 = 0x0;
	// 178    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->version = cVar0;
	this->version = cVar0;
	//    .local v0, "derVal":Lsun/security/util/DerValue;
	this->construct(in->getDerValue());
	return;

}
// .method public constructor <init>(Lsun/security/util/DerValue;)V
sun::security::x509::CertificateVersion::CertificateVersion(std::shared_ptr<sun::security::util::DerValue> val)
{
	
	int cVar0;
	
	//    .param p1, "val"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 203        value = {
	// 204            Ljava/io/IOException;
	// 205        }
	// 206    .end annotation
	cVar0 = 0x0;
	// 212    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->version = cVar0;
	this->version = cVar0;
	this->construct(val);
	return;

}
// .method private construct(Lsun/security/util/DerValue;)V
void sun::security::x509::CertificateVersion::construct(std::shared_ptr<sun::security::util::DerValue> derVal)
{
	
	std::shared_ptr<sun::security::util::DerValue> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	
	//    .param p1, "derVal"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 231        value = {
	// 232            Ljava/io/IOException;
	// 233        }
	// 234    .end annotation
	if ( !(derVal->isConstructed()) )  
		goto label_cond_29;
	if ( !(derVal->isContextSpecific()) )  
		goto label_cond_29;
	cVar0 = derVal->data->getDerValue();
	this->version = cVar0->getInteger();
	if ( !(cVar0->data->available()) )  
		goto label_cond_29;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("X.509 version, bad format")));
	// throw
	throw cVar1;
	// 282    .line 83
label_cond_29:
	return;

}
// .method private getVersion()I
int sun::security::x509::CertificateVersion::getVersion()
{
	
	return this->version;

}
// .method public compare(I)I
int sun::security::x509::CertificateVersion::compare(int vers)
{
	
	//    .param p1, "vers"    # I
	return (this->version -  vers);

}
// .method public delete(Ljava/lang/String;)V
void sun::security::x509::CertificateVersion::_delete_(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 316        value = {
	// 317            Ljava/io/IOException;
	// 318        }
	// 319    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("number")))) )  
		goto label_cond_d;
	this->version = 0x0;
	return;
	// 339    .line 210
label_cond_d:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet: CertificateVersion.")));
	// throw
	throw cVar0;

}
// .method public encode(Ljava/io/OutputStream;)V
void sun::security::x509::CertificateVersion::encode(std::shared_ptr<java::io::OutputStream> out)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	std::shared_ptr<sun::security::util::DerOutputStream> seq;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 354        value = {
	// 355            Ljava/io/IOException;
	// 356        }
	// 357    .end annotation
	if ( this->version )     
		goto label_cond_6;
	return;
	// 370    .line 166
label_cond_6:
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v1, "tmp":Lsun/security/util/DerOutputStream;
	tmp->putInteger(this->version);
	seq = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "seq":Lsun/security/util/DerOutputStream;
	seq->write(sun::security::util::DerValue::createTag(-0x80, 0x1, 0x0), tmp);
	out->write(seq->toByteArray());
	return;

}
// .method public get(Ljava/lang/String;)Ljava/lang/Integer;
std::shared_ptr<java::lang::Integer> sun::security::x509::CertificateVersion::get(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::lang::Integer> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 414        value = {
	// 415            Ljava/io/IOException;
	// 416        }
	// 417    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("number")))) )  
		goto label_cond_13;
	cVar0 = std::make_shared<java::lang::Integer>(this->getVersion());
	return cVar0;
	// 440    .line 198
label_cond_13:
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet: CertificateVersion.")));
	// throw
	throw cVar1;

}
// .method public getElements()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> sun::security::x509::CertificateVersion::getElements()
{
	
	std::shared_ptr<sun::security::x509::AttributeNameEnumeration> elements;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 472        value = {
	// 473            "()",
	// 474            "Ljava/util/Enumeration",
	// 475            "<",
	// 476            "Ljava/lang/String;",
	// 477            ">;"
	// 478        }
	// 479    .end annotation
	elements = std::make_shared<sun::security::x509::AttributeNameEnumeration>();
	//    .local v0, "elements":Lsun/security/x509/AttributeNameEnumeration;
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("number")));
	return elements->elements();

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::CertificateVersion::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("version"));

}
// .method public set(Ljava/lang/String;Ljava/lang/Object;)V
void sun::security::x509::CertificateVersion::set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 516        value = {
	// 517            Ljava/io/IOException;
	// 518        }
	// 519    .end annotation
	if ( obj->instanceOf("java::lang::Integer") )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute must be of type Integer.")));
	// throw
	throw cVar0;
	// 536    .line 183
label_cond_d:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("number")))) )  
		goto label_cond_1f;
	obj->checkCast("java::lang::Integer");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->version = obj->intValue();
	return;
	// 559    .line 186
	// 560    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_1f:
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet: CertificateVersion.")));
	// throw
	throw cVar1;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::CertificateVersion::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Version: V")))->append(( this->version + 0x1))->toString();

}


