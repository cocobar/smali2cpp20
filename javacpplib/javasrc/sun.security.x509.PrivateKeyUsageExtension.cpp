// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\PrivateKeyUsageExtension.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.security.cert.CertificateException.h"
#include "java.security.cert.CertificateExpiredException.h"
#include "java.security.cert.CertificateNotYetValidException.h"
#include "java.security.cert.CertificateParsingException.h"
#include "java.util.Date.h"
#include "java.util.Enumeration.h"
#include "java.util.Objects.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AttributeNameEnumeration.h"
#include "sun.security.x509.PKIXExtensions.h"
#include "sun.security.x509.PrivateKeyUsageExtension.h"

static sun::security::x509::PrivateKeyUsageExtension::IDENT = std::make_shared<java::lang::String>("x509.info.extensions.PrivateKeyUsage");
static sun::security::x509::PrivateKeyUsageExtension::NAME = std::make_shared<java::lang::String>("PrivateKeyUsage");
static sun::security::x509::PrivateKeyUsageExtension::NOT_AFTER = std::make_shared<java::lang::String>("not_after");
static sun::security::x509::PrivateKeyUsageExtension::NOT_BEFORE = std::make_shared<java::lang::String>("not_before");
static sun::security::x509::PrivateKeyUsageExtension::TAG_AFTER = 0x1t;
static sun::security::x509::PrivateKeyUsageExtension::TAG_BEFORE;
// .method public constructor <init>(Ljava/lang/Boolean;Ljava/lang/Object;)V
sun::security::x509::PrivateKeyUsageExtension::PrivateKeyUsageExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value)
{
	
	unsigned char cVar0;
	std::shared_ptr<java::util::Date> cVar1;
	std::shared_ptr<sun::security::util::DerInputStream> str;
	auto seq;
	int i;
	std::shared_ptr<sun::security::util::DerValue> opt;
	std::shared_ptr<java::security::cert::CertificateParsingException> cVar2;
	std::shared_ptr<java::security::cert::CertificateParsingException> cVar3;
	std::shared_ptr<java::io::IOException> cVar4;
	
	//    .param p1, "critical"    # Ljava/lang/Boolean;
	//    .param p2, "value"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 047        value = {
	// 048            Ljava/security/cert/CertificateException;,
	// 049            Ljava/io/IOException;
	// 050        }
	// 051    .end annotation
	cVar0 = 0x18;
	cVar1 = 0x0;
	// 059    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->notBefore = cVar1;
	this->notAfter = cVar1;
	this->extensionId = sun::security::x509::PKIXExtensions::PrivateKeyUsage_Id;
	this->critical = critical->booleanValue();
	value->checkCast("unsigned char[]");
	//    .end local p2    # "value":Ljava/lang/Object;
	this->extensionValue = value;
	str = std::make_shared<sun::security::util::DerInputStream>(this->extensionValue);
	//    .local v3, "str":Lsun/security/util/DerInputStream;
	seq = str->getSequence(0x2);
	//    .local v2, "seq":[Lsun/security/util/DerValue;
	i = 0x0;
	//    .local v0, "i":I
label_goto_25:
	if ( i >= seq->size() )
		goto label_cond_93;
	opt = seq[i];
	//    .local v1, "opt":Lsun/security/util/DerValue;
	if ( !(opt->isContextSpecific(0x0)) )  
		goto label_cond_5b;
	if ( !(( opt->isConstructed() ^ 0x1)) )  
		goto label_cond_5b;
	if ( !(this->notBefore) )  
		goto label_cond_46;
	cVar2 = std::make_shared<java::security::cert::CertificateParsingException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Duplicate notBefore in PrivateKeyUsage.")));
	// throw
	throw cVar2;
	// 149    .line 156
label_cond_46:
	opt->resetTag(cVar0);
	//    .end local v3    # "str":Lsun/security/util/DerInputStream;
	str = std::make_shared<sun::security::util::DerInputStream>(opt->toByteArray());
	//    .restart local v3    # "str":Lsun/security/util/DerInputStream;
	this->notBefore = str->getGeneralizedTime();
label_goto_58:
	i = ( i + 0x1);
	goto label_goto_25;
	// 177    .line 160
label_cond_5b:
	if ( !(opt->isContextSpecific(0x1)) )  
		goto label_cond_8a;
	if ( !(( opt->isConstructed() ^ 0x1)) )  
		goto label_cond_8a;
	if ( !(this->notAfter) )  
		goto label_cond_77;
	cVar3 = std::make_shared<java::security::cert::CertificateParsingException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Duplicate notAfter in PrivateKeyUsage.")));
	// throw
	throw cVar3;
	// 213    .line 166
label_cond_77:
	opt->resetTag(cVar0);
	//    .end local v3    # "str":Lsun/security/util/DerInputStream;
	str = std::make_shared<sun::security::util::DerInputStream>(opt->toByteArray());
	//    .restart local v3    # "str":Lsun/security/util/DerInputStream;
	this->notAfter = str->getGeneralizedTime();
	goto label_goto_58;
	// 237    .line 170
label_cond_8a:
	cVar4 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding of PrivateKeyUsageExtension")));
	// throw
	throw cVar4;
	// 247    .line 173
	// 248    .end local v1    # "opt":Lsun/security/util/DerValue;
label_cond_93:
	return;

}
// .method public constructor <init>(Ljava/util/Date;Ljava/util/Date;)V
sun::security::x509::PrivateKeyUsageExtension::PrivateKeyUsageExtension(std::shared_ptr<java::util::Date> notBefore,std::shared_ptr<java::util::Date> notAfter)
{
	
	std::shared_ptr<java::util::Date> cVar0;
	
	//    .param p1, "notBefore"    # Ljava/util/Date;
	//    .param p2, "notAfter"    # Ljava/util/Date;
	//    .annotation system Ldalvik/annotation/Throws;
	// 258        value = {
	// 259            Ljava/io/IOException;
	// 260        }
	// 261    .end annotation
	cVar0 = 0x0;
	// 267    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->notBefore = cVar0;
	this->notAfter = cVar0;
	this->notBefore = notBefore;
	this->notAfter = notAfter;
	this->extensionId = sun::security::x509::PKIXExtensions::PrivateKeyUsage_Id;
	this->critical = 0x0;
	this->encodeThis();
	return;

}
// .method private encodeThis()V
void sun::security::x509::PrivateKeyUsageExtension::encodeThis()
{
	
	unsigned char cVar0;
	bool cVar1;
	std::shared_ptr<sun::security::util::DerOutputStream> seq;
	std::shared_ptr<sun::security::util::DerOutputStream> tagged;
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 301        value = {
	// 302            Ljava/io/IOException;
	// 303        }
	// 304    .end annotation
	cVar0 = -0x80;
	cVar1 = 0x0;
	if ( this->notBefore )     
		goto label_cond_f;
	if ( this->notAfter )     
		goto label_cond_f;
	this->extensionValue = 0x0;
	return;
	// 328    .line 89
label_cond_f:
	seq = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "seq":Lsun/security/util/DerOutputStream;
	tagged = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v1, "tagged":Lsun/security/util/DerOutputStream;
	if ( !(this->notBefore) )  
		goto label_cond_2e;
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v2, "tmp":Lsun/security/util/DerOutputStream;
	tmp->putGeneralizedTime(this->notBefore);
	tagged->writeImplicit(sun::security::util::DerValue::createTag(cVar0, cVar1, cVar1), tmp);
	//    .end local v2    # "tmp":Lsun/security/util/DerOutputStream;
label_cond_2e:
	if ( !(this->notAfter) )  
		goto label_cond_44;
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .restart local v2    # "tmp":Lsun/security/util/DerOutputStream;
	tmp->putGeneralizedTime(this->notAfter);
	tagged->writeImplicit(sun::security::util::DerValue::createTag(cVar0, cVar1, 0x1), tmp);
	//    .end local v2    # "tmp":Lsun/security/util/DerOutputStream;
label_cond_44:
	seq->write(0x30, tagged);
	this->extensionValue = seq->toByteArray();
	return;

}
// .method public delete(Ljava/lang/String;)V
void sun::security::x509::PrivateKeyUsageExtension::_delete_(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::util::Date> cVar0;
	std::shared_ptr<java::security::cert::CertificateException> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 416        value = {
	// 417            Ljava/security/cert/CertificateException;,
	// 418            Ljava/io/IOException;
	// 419        }
	// 420    .end annotation
	cVar0 = 0x0;
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("not_before")))) )  
		goto label_cond_10;
	this->notBefore = cVar0;
label_goto_c:
	this->encodeThis();
	return;
	// 444    .line 285
label_cond_10:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("not_after")))) )  
		goto label_cond_1c;
	this->notAfter = cVar0;
	goto label_goto_c;
	// 459    .line 288
label_cond_1c:
	cVar1 = std::make_shared<java::security::cert::CertificateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:PrivateKeyUsage.")));
	// throw
	throw cVar1;

}
// .method public encode(Ljava/io/OutputStream;)V
void sun::security::x509::PrivateKeyUsageExtension::encode(std::shared_ptr<java::io::OutputStream> out)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 474        value = {
	// 475            Ljava/io/IOException;
	// 476        }
	// 477    .end annotation
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "tmp":Lsun/security/util/DerOutputStream;
	if ( this->extensionValue )     
		goto label_cond_13;
	this->extensionId = sun::security::x509::PKIXExtensions::PrivateKeyUsage_Id;
	this->critical = 0x0;
	this->encodeThis();
label_cond_13:
	this->encode(tmp);
	out->write(tmp->toByteArray());
	return;

}
// .method public get(Ljava/lang/String;)Ljava/util/Date;
std::shared_ptr<java::util::Date> sun::security::x509::PrivateKeyUsageExtension::get(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::util::Date> cVar0;
	std::shared_ptr<java::util::Date> cVar1;
	std::shared_ptr<java::security::cert::CertificateException> cVar2;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 541        value = {
	// 542            Ljava/security/cert/CertificateException;
	// 543        }
	// 544    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("not_before")))) )  
		goto label_cond_15;
	cVar0 = std::make_shared<java::util::Date>(this->notBefore->getTime());
	return cVar0;
	// 569    .line 270
label_cond_15:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("not_after")))) )  
		goto label_cond_2a;
	cVar1 = std::make_shared<java::util::Date>(this->notAfter->getTime());
	return cVar1;
	// 592    .line 273
label_cond_2a:
	cVar2 = std::make_shared<java::security::cert::CertificateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:PrivateKeyUsage.")));
	// throw
	throw cVar2;

}
// .method public getElements()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> sun::security::x509::PrivateKeyUsageExtension::getElements()
{
	
	std::shared_ptr<sun::security::x509::AttributeNameEnumeration> elements;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 606        value = {
	// 607            "()",
	// 608            "Ljava/util/Enumeration",
	// 609            "<",
	// 610            "Ljava/lang/String;",
	// 611            ">;"
	// 612        }
	// 613    .end annotation
	elements = std::make_shared<sun::security::x509::AttributeNameEnumeration>();
	//    .local v0, "elements":Lsun/security/x509/AttributeNameEnumeration;
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("not_before")));
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("not_after")));
	return elements->elements();

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::PrivateKeyUsageExtension::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("PrivateKeyUsage"));

}
// .method public set(Ljava/lang/String;Ljava/lang/Object;)V
void sun::security::x509::PrivateKeyUsageExtension::set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<java::security::cert::CertificateException> cVar0;
	std::shared_ptr<java::security::cert::CertificateException> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 655        value = {
	// 656            Ljava/security/cert/CertificateException;,
	// 657            Ljava/io/IOException;
	// 658        }
	// 659    .end annotation
	if ( obj->instanceOf("java::util::Date") )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::security::cert::CertificateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute must be of type Date.")));
	// throw
	throw cVar0;
	// 676    .line 252
label_cond_d:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("not_before")))) )  
		goto label_cond_1e;
	obj->checkCast("java::util::Date");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->notBefore = obj;
label_goto_1a:
	this->encodeThis();
	return;
	// 699    .line 254
	// 700    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_1e:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("not_after")))) )  
		goto label_cond_2c;
	obj->checkCast("java::util::Date");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->notAfter = obj;
	goto label_goto_1a;
	// 718    .line 257
	// 719    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_2c:
	cVar1 = std::make_shared<java::security::cert::CertificateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:PrivateKeyUsage.")));
	// throw
	throw cVar1;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::PrivateKeyUsageExtension::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	std::shared_ptr<java::lang::String> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	if ( this->notBefore )     
		goto label_cond_36;
	cVar1 = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
label_goto_1b:
	if ( this->notAfter )     
		goto label_cond_58;
	cVar2 = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
label_goto_26:
	return cVar0->append(this->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PrivateKeyUsage: [\n")))->append(cVar1)->append(cVar2)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]\n")))->toString();
	// 795    .line 181
label_cond_36:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("From: ")))->append(this->notBefore->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")))->toString();
	goto label_goto_1b;
	// 829    .line 182
label_cond_58:
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("To: ")))->append(this->notAfter->toString())->toString();
	goto label_goto_26;

}
// .method public valid()V
void sun::security::x509::PrivateKeyUsageExtension::valid()
{
	
	std::shared_ptr<java::util::Date> now;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 861        value = {
	// 862            Ljava/security/cert/CertificateNotYetValidException;,
	// 863            Ljava/security/cert/CertificateExpiredException;
	// 864        }
	// 865    .end annotation
	now = std::make_shared<java::util::Date>();
	//    .local v0, "now":Ljava/util/Date;
	this->valid(now);
	return;

}
// .method public valid(Ljava/util/Date;)V
void sun::security::x509::PrivateKeyUsageExtension::valid(std::shared_ptr<java::util::Date> now)
{
	
	std::shared_ptr<java::security::cert::CertificateNotYetValidException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::security::cert::CertificateExpiredException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	//    .param p1, "now"    # Ljava/util/Date;
	//    .annotation system Ldalvik/annotation/Throws;
	// 885        value = {
	// 886            Ljava/security/cert/CertificateNotYetValidException;,
	// 887            Ljava/security/cert/CertificateExpiredException;
	// 888        }
	// 889    .end annotation
	java::util::Objects::requireNonNull(now);
	if ( !(this->notBefore) )  
		goto label_cond_2f;
	if ( !(this->notBefore->after(now)) )  
		goto label_cond_2f;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::security::cert::CertificateNotYetValidException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("NotBefore: ")))->append(this->notBefore->toString())->toString());
	// throw
	throw cVar0;
	// 941    .line 220
label_cond_2f:
	if ( !(this->notAfter) )  
		goto label_cond_5b;
	if ( !(this->notAfter->before(now)) )  
		goto label_cond_5b;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::security::cert::CertificateExpiredException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("NotAfter: ")))->append(this->notAfter->toString())->toString());
	// throw
	throw cVar2;
	// 988    .line 224
label_cond_5b:
	return;

}


