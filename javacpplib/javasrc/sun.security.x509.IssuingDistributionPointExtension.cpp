// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\IssuingDistributionPointExtension.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Enumeration.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AttributeNameEnumeration.h"
#include "sun.security.x509.DistributionPointName.h"
#include "sun.security.x509.IssuingDistributionPointExtension.h"
#include "sun.security.x509.PKIXExtensions.h"
#include "sun.security.x509.ReasonFlags.h"

static sun::security::x509::IssuingDistributionPointExtension::IDENT = std::make_shared<java::lang::String>("x509.info.extensions.IssuingDistributionPoint");
static sun::security::x509::IssuingDistributionPointExtension::INDIRECT_CRL = std::make_shared<java::lang::String>("indirect_crl");
static sun::security::x509::IssuingDistributionPointExtension::NAME = std::make_shared<java::lang::String>("IssuingDistributionPoint");
static sun::security::x509::IssuingDistributionPointExtension::ONLY_ATTRIBUTE_CERTS = std::make_shared<java::lang::String>("only_attribute_certs");
static sun::security::x509::IssuingDistributionPointExtension::ONLY_CA_CERTS = std::make_shared<java::lang::String>("only_ca_certs");
static sun::security::x509::IssuingDistributionPointExtension::ONLY_USER_CERTS = std::make_shared<java::lang::String>("only_user_certs");
static sun::security::x509::IssuingDistributionPointExtension::POINT = std::make_shared<java::lang::String>("point");
static sun::security::x509::IssuingDistributionPointExtension::REASONS = std::make_shared<java::lang::String>("reasons");
static sun::security::x509::IssuingDistributionPointExtension::TAG_DISTRIBUTION_POINT = 0x0t;
static sun::security::x509::IssuingDistributionPointExtension::TAG_INDIRECT_CRL = 0x4t;
static sun::security::x509::IssuingDistributionPointExtension::TAG_ONLY_ATTRIBUTE_CERTS = 0x5t;
static sun::security::x509::IssuingDistributionPointExtension::TAG_ONLY_CA_CERTS = 0x2t;
static sun::security::x509::IssuingDistributionPointExtension::TAG_ONLY_SOME_REASONS = 0x3t;
static sun::security::x509::IssuingDistributionPointExtension::TAG_ONLY_USER_CERTS = 0x1t;
// .method public constructor <init>(Ljava/lang/Boolean;Ljava/lang/Object;)V
sun::security::x509::IssuingDistributionPointExtension::IssuingDistributionPointExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value)
{
	
	std::shared_ptr<sun::security::x509::DistributionPointName> cVar0;
	unsigned char cVar1;
	bool cVar2;
	std::shared_ptr<java::io::IOException> cVar3;
	std::shared_ptr<sun::security::util::DerValue> val;
	std::shared_ptr<java::io::IOException> cVar4;
	std::shared_ptr<sun::security::util::DerInputStream> in;
	std::shared_ptr<sun::security::util::DerValue> opt;
	std::shared_ptr<sun::security::x509::DistributionPointName> cVar5;
	std::shared_ptr<sun::security::x509::ReasonFlags> cVar6;
	std::shared_ptr<java::io::IOException> cVar7;
	
	//    .param p1, "critical"    # Ljava/lang/Boolean;
	//    .param p2, "value"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 071        value = {
	// 072            Ljava/io/IOException;
	// 073        }
	// 074    .end annotation
	cVar0 = 0x0;
	cVar1 = 0x1;
	cVar2 = 0x0;
	// 084    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->distributionPoint = cVar0;
	this->revocationReasons = cVar0;
	this->hasOnlyUserCerts = cVar2;
	this->hasOnlyCACerts = cVar2;
	this->hasOnlyAttributeCerts = cVar2;
	this->isIndirectCRL = cVar2;
	this->extensionId = sun::security::x509::PKIXExtensions::IssuingDistributionPoint_Id;
	this->critical = critical->booleanValue();
	if ( value->instanceOf("unsigned char[]") )     
		goto label_cond_29;
	cVar3 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal argument type")));
	// throw
	throw cVar3;
	// 130    .line 177
label_cond_29:
	value->checkCast("unsigned char[]");
	//    .end local p2    # "value":Ljava/lang/Object;
	this->extensionValue = value;
	val = std::make_shared<sun::security::util::DerValue>(this->extensionValue);
	//    .local v2, "val":Lsun/security/util/DerValue;
	if ( val->tag == 0x30 )
		goto label_cond_43;
	cVar4 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding for IssuingDistributionPointExtension.")));
	// throw
	throw cVar4;
	// 161    .line 185
label_cond_43:
	if ( !(val->data) )  
		goto label_cond_4f;
	if ( val->data->available() )     
		goto label_cond_50;
label_cond_4f:
	return;
	// 179    .line 189
label_cond_50:
	in = val->data;
	//    .local v0, "in":Lsun/security/util/DerInputStream;
label_goto_52:
	if ( !(in) )  
		goto label_cond_fd;
	if ( !(in->available()) )  
		goto label_cond_fd;
	opt = in->getDerValue();
	//    .local v1, "opt":Lsun/security/util/DerValue;
	if ( !(opt->isContextSpecific(cVar2)) )  
		goto label_cond_78;
	if ( !(opt->isConstructed()) )  
		goto label_cond_78;
	cVar5 = std::make_shared<sun::security::x509::DistributionPointName>(opt->data->getDerValue());
	this->distributionPoint = cVar5;
	goto label_goto_52;
	// 231    .line 197
label_cond_78:
	if ( !(opt->isContextSpecific(cVar1)) )  
		goto label_cond_90;
	if ( !(( opt->isConstructed() ^ 0x1)) )  
		goto label_cond_90;
	opt->resetTag(cVar1);
	this->hasOnlyUserCerts = opt->getBoolean();
	goto label_goto_52;
	// 261    .line 201
label_cond_90:
	if ( !(opt->isContextSpecific(0x2)) )  
		goto label_cond_a9;
	if ( !(( opt->isConstructed() ^ 0x1)) )  
		goto label_cond_a9;
	opt->resetTag(cVar1);
	this->hasOnlyCACerts = opt->getBoolean();
	goto label_goto_52;
	// 293    .line 205
label_cond_a9:
	if ( !(opt->isContextSpecific(0x3)) )  
		goto label_cond_c0;
	if ( !(( opt->isConstructed() ^ 0x1)) )  
		goto label_cond_c0;
	cVar6 = std::make_shared<sun::security::x509::ReasonFlags>(opt);
	this->revocationReasons = cVar6;
	goto label_goto_52;
	// 322    .line 208
label_cond_c0:
	if ( !(opt->isContextSpecific(0x4)) )  
		goto label_cond_da;
	if ( !(( opt->isConstructed() ^ 0x1)) )  
		goto label_cond_da;
	opt->resetTag(cVar1);
	this->isIndirectCRL = opt->getBoolean();
	goto label_goto_52;
	// 354    .line 212
label_cond_da:
	if ( !(opt->isContextSpecific(0x5)) )  
		goto label_cond_f4;
	if ( !(( opt->isConstructed() ^ 0x1)) )  
		goto label_cond_f4;
	opt->resetTag(cVar1);
	this->hasOnlyAttributeCerts = opt->getBoolean();
	goto label_goto_52;
	// 386    .line 217
label_cond_f4:
	cVar7 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding of IssuingDistributionPoint")));
	// throw
	throw cVar7;
	// 398    .line 221
	// 399    .end local v1    # "opt":Lsun/security/util/DerValue;
label_cond_fd:
	return;

}
// .method public constructor <init>(Lsun/security/x509/DistributionPointName;Lsun/security/x509/ReasonFlags;ZZZZ)V
sun::security::x509::IssuingDistributionPointExtension::IssuingDistributionPointExtension(std::shared_ptr<sun::security::x509::DistributionPointName> distributionPoint,std::shared_ptr<sun::security::x509::ReasonFlags> revocationReasons,bool hasOnlyUserCerts,bool hasOnlyCACerts,bool hasOnlyAttributeCerts,bool isIndirectCRL)
{
	
	std::shared_ptr<sun::security::x509::DistributionPointName> cVar0;
	bool cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	
	//    .param p1, "distributionPoint"    # Lsun/security/x509/DistributionPointName;
	//    .param p2, "revocationReasons"    # Lsun/security/x509/ReasonFlags;
	//    .param p3, "hasOnlyUserCerts"    # Z
	//    .param p4, "hasOnlyCACerts"    # Z
	//    .param p5, "hasOnlyAttributeCerts"    # Z
	//    .param p6, "isIndirectCRL"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 413        value = {
	// 414            Ljava/io/IOException;
	// 415        }
	// 416    .end annotation
	cVar0 = 0x0;
	cVar1 = 0x0;
	// 424    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->distributionPoint = cVar0;
	this->revocationReasons = cVar0;
	this->hasOnlyUserCerts = cVar1;
	this->hasOnlyCACerts = cVar1;
	this->hasOnlyAttributeCerts = cVar1;
	this->isIndirectCRL = cVar1;
	if ( !(hasOnlyUserCerts) )  
		goto label_cond_17;
	if ( hasOnlyCACerts )     
		goto label_cond_23;
	if ( hasOnlyAttributeCerts )     
		goto label_cond_23;
label_cond_17:
	if ( !(hasOnlyCACerts) )  
		goto label_cond_1d;
	if ( hasOnlyUserCerts )     
		goto label_cond_23;
	if ( hasOnlyAttributeCerts )     
		goto label_cond_23;
label_cond_1d:
	if ( !(hasOnlyAttributeCerts) )  
		goto label_cond_2c;
	if ( hasOnlyUserCerts )     
		goto label_cond_23;
	if ( !(hasOnlyCACerts) )  
		goto label_cond_2c;
label_cond_23:
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Only one of hasOnlyUserCerts, hasOnlyCACerts, hasOnlyAttributeCerts may be set to true")));
	// throw
	throw cVar2;
	// 481    .line 149
label_cond_2c:
	this->extensionId = sun::security::x509::PKIXExtensions::IssuingDistributionPoint_Id;
	this->critical = 0x1;
	this->distributionPoint = distributionPoint;
	this->revocationReasons = revocationReasons;
	this->hasOnlyUserCerts = hasOnlyUserCerts;
	this->hasOnlyCACerts = hasOnlyCACerts;
	this->hasOnlyAttributeCerts = hasOnlyAttributeCerts;
	this->isIndirectCRL = isIndirectCRL;
	this->encodeThis();
	return;

}
// .method private encodeThis()V
void sun::security::x509::IssuingDistributionPointExtension::encodeThis()
{
	
	bool cVar0;
	unsigned char cVar1;
	unsigned char cVar2;
	std::shared_ptr<sun::security::util::DerOutputStream> tagged;
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	std::shared_ptr<sun::security::util::DerOutputStream> seq;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 520        value = {
	// 521            Ljava/io/IOException;
	// 522        }
	// 523    .end annotation
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = -0x80;
	if ( this->distributionPoint )     
		goto label_cond_28;
	if ( this->revocationReasons )     
		goto label_cond_28;
	if ( !(( this->hasOnlyUserCerts ^ 0x1)) )  
		goto label_cond_28;
	if ( !(( this->hasOnlyCACerts ^ 0x1)) )  
		goto label_cond_28;
	if ( !(( this->hasOnlyAttributeCerts ^ 0x1)) )  
		goto label_cond_28;
	if ( !(( this->isIndirectCRL ^ 0x1)) )  
		goto label_cond_28;
	this->extensionValue = 0x0;
	return;
	// 582    .line 391
label_cond_28:
	tagged = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v1, "tagged":Lsun/security/util/DerOutputStream;
	if ( !(this->distributionPoint) )  
		goto label_cond_42;
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v2, "tmp":Lsun/security/util/DerOutputStream;
	this->distributionPoint->encode(tmp);
	tagged->writeImplicit(sun::security::util::DerValue::createTag(cVar2, cVar0, cVar1), tmp);
	//    .end local v2    # "tmp":Lsun/security/util/DerOutputStream;
label_cond_42:
	if ( !(this->hasOnlyUserCerts) )  
		goto label_cond_57;
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .restart local v2    # "tmp":Lsun/security/util/DerOutputStream;
	tmp->putBoolean(this->hasOnlyUserCerts);
	tagged->writeImplicit(sun::security::util::DerValue::createTag(cVar2, cVar1, cVar0), tmp);
	//    .end local v2    # "tmp":Lsun/security/util/DerOutputStream;
label_cond_57:
	if ( !(this->hasOnlyCACerts) )  
		goto label_cond_6d;
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .restart local v2    # "tmp":Lsun/security/util/DerOutputStream;
	tmp->putBoolean(this->hasOnlyCACerts);
	tagged->writeImplicit(sun::security::util::DerValue::createTag(cVar2, cVar1, 0x2), tmp);
	//    .end local v2    # "tmp":Lsun/security/util/DerOutputStream;
label_cond_6d:
	if ( !(this->revocationReasons) )  
		goto label_cond_83;
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .restart local v2    # "tmp":Lsun/security/util/DerOutputStream;
	this->revocationReasons->encode(tmp);
	tagged->writeImplicit(sun::security::util::DerValue::createTag(cVar2, cVar1, 0x3), tmp);
	//    .end local v2    # "tmp":Lsun/security/util/DerOutputStream;
label_cond_83:
	if ( !(this->isIndirectCRL) )  
		goto label_cond_99;
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .restart local v2    # "tmp":Lsun/security/util/DerOutputStream;
	tmp->putBoolean(this->isIndirectCRL);
	tagged->writeImplicit(sun::security::util::DerValue::createTag(cVar2, cVar1, 0x4), tmp);
	//    .end local v2    # "tmp":Lsun/security/util/DerOutputStream;
label_cond_99:
	if ( !(this->hasOnlyAttributeCerts) )  
		goto label_cond_af;
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .restart local v2    # "tmp":Lsun/security/util/DerOutputStream;
	tmp->putBoolean(this->hasOnlyAttributeCerts);
	tagged->writeImplicit(sun::security::util::DerValue::createTag(cVar2, cVar1, 0x5), tmp);
	//    .end local v2    # "tmp":Lsun/security/util/DerOutputStream;
label_cond_af:
	seq = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "seq":Lsun/security/util/DerOutputStream;
	seq->write(0x30, tagged);
	this->extensionValue = seq->toByteArray();
	return;

}
// .method public delete(Ljava/lang/String;)V
void sun::security::x509::IssuingDistributionPointExtension::_delete_(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<sun::security::x509::DistributionPointName> cVar0;
	bool cVar1;
	std::shared_ptr<java::io::IOException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 779        value = {
	// 780            Ljava/io/IOException;
	// 781        }
	// 782    .end annotation
	cVar0 = 0x0;
	cVar1 = 0x0;
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("point")))) )  
		goto label_cond_11;
	this->distributionPoint = cVar0;
label_goto_d:
	this->encodeThis();
	return;
	// 808    .line 338
label_cond_11:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("indirect_crl")))) )  
		goto label_cond_1d;
	this->isIndirectCRL = cVar1;
	goto label_goto_d;
	// 823    .line 341
label_cond_1d:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("reasons")))) )  
		goto label_cond_29;
	this->revocationReasons = cVar0;
	goto label_goto_d;
	// 838    .line 344
label_cond_29:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("only_user_certs")))) )  
		goto label_cond_35;
	this->hasOnlyUserCerts = cVar1;
	goto label_goto_d;
	// 853    .line 347
label_cond_35:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("only_ca_certs")))) )  
		goto label_cond_41;
	this->hasOnlyCACerts = cVar1;
	goto label_goto_d;
	// 868    .line 350
label_cond_41:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("only_attribute_certs")))) )  
		goto label_cond_4d;
	this->hasOnlyAttributeCerts = cVar1;
	goto label_goto_d;
	// 883    .line 354
label_cond_4d:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::io::IOException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name [")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("] not recognized by ")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("CertAttrSet:IssuingDistributionPointExtension.")))->toString());
	// throw
	throw cVar2;

}
// .method public encode(Ljava/io/OutputStream;)V
void sun::security::x509::IssuingDistributionPointExtension::encode(std::shared_ptr<java::io::OutputStream> out)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 930        value = {
	// 931            Ljava/io/IOException;
	// 932        }
	// 933    .end annotation
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "tmp":Lsun/security/util/DerOutputStream;
	if ( this->extensionValue )     
		goto label_cond_13;
	this->extensionId = sun::security::x509::PKIXExtensions::IssuingDistributionPoint_Id;
	this->critical = 0x0;
	this->encodeThis();
label_cond_13:
	this->encode(tmp);
	out->write(tmp->toByteArray());
	return;

}
// .method public get(Ljava/lang/String;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> sun::security::x509::IssuingDistributionPointExtension::get(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 979        value = {
	// 980            Ljava/io/IOException;
	// 981        }
	// 982    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("point")))) )  
		goto label_cond_c;
	return this->distributionPoint;
	// 999    .line 309
label_cond_c:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("indirect_crl")))) )  
		goto label_cond_1c;
	return java::lang::Boolean::valueOf(this->isIndirectCRL);
	// 1018    .line 312
label_cond_1c:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("reasons")))) )  
		goto label_cond_28;
	return this->revocationReasons;
	// 1033    .line 315
label_cond_28:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("only_user_certs")))) )  
		goto label_cond_38;
	return java::lang::Boolean::valueOf(this->hasOnlyUserCerts);
	// 1052    .line 318
label_cond_38:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("only_ca_certs")))) )  
		goto label_cond_48;
	return java::lang::Boolean::valueOf(this->hasOnlyCACerts);
	// 1071    .line 321
label_cond_48:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("only_attribute_certs")))) )  
		goto label_cond_58;
	return java::lang::Boolean::valueOf(this->hasOnlyAttributeCerts);
	// 1090    .line 325
label_cond_58:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name [")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("] not recognized by ")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("CertAttrSet:IssuingDistributionPointExtension.")))->toString());
	// throw
	throw cVar0;

}
// .method public getElements()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> sun::security::x509::IssuingDistributionPointExtension::getElements()
{
	
	std::shared_ptr<sun::security::x509::AttributeNameEnumeration> elements;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1136        value = {
	// 1137            "()",
	// 1138            "Ljava/util/Enumeration",
	// 1139            "<",
	// 1140            "Ljava/lang/String;",
	// 1141            ">;"
	// 1142        }
	// 1143    .end annotation
	elements = std::make_shared<sun::security::x509::AttributeNameEnumeration>();
	//    .local v0, "elements":Lsun/security/x509/AttributeNameEnumeration;
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("point")));
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("reasons")));
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("only_user_certs")));
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("only_ca_certs")));
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("only_attribute_certs")));
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("indirect_crl")));
	return elements->elements();

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::IssuingDistributionPointExtension::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("IssuingDistributionPoint"));

}
// .method public set(Ljava/lang/String;Ljava/lang/Object;)V
void sun::security::x509::IssuingDistributionPointExtension::set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::io::IOException> cVar2;
	std::shared_ptr<java::io::IOException> cVar3;
	std::shared_ptr<java::io::IOException> cVar4;
	std::shared_ptr<java::io::IOException> cVar5;
	std::shared_ptr<java::io::IOException> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1205        value = {
	// 1206            Ljava/io/IOException;
	// 1207        }
	// 1208    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("point")))) )  
		goto label_cond_1e;
	if ( obj->instanceOf("sun::security::x509::DistributionPointName") )     
		goto label_cond_16;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute value should be of type DistributionPointName.")));
	// throw
	throw cVar0;
	// 1236    .line 257
label_cond_16:
	obj->checkCast("sun::security::x509::DistributionPointName");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->distributionPoint = obj;
label_goto_1a:
	this->encodeThis();
	return;
	// 1250    .line 259
	// 1251    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_1e:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("reasons")))) )  
		goto label_cond_39;
	if ( obj->instanceOf("sun::security::x509::ReasonFlags") )     
		goto label_cond_34;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute value should be of type ReasonFlags.")));
	// throw
	throw cVar1;
	// 1277    .line 264
label_cond_34:
	obj->checkCast("sun::security::x509::ReasonFlags");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->revocationReasons = obj;
	goto label_goto_1a;
	// 1286    .line 266
	// 1287    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_39:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("indirect_crl")))) )  
		goto label_cond_58;
	if ( obj->instanceOf("java::lang::Boolean") )     
		goto label_cond_4f;
	cVar2 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute value should be of type Boolean.")));
	// throw
	throw cVar2;
	// 1313    .line 271
label_cond_4f:
	obj->checkCast("java::lang::Boolean");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->isIndirectCRL = obj->booleanValue();
	goto label_goto_1a;
	// 1326    .line 273
	// 1327    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_58:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("only_user_certs")))) )  
		goto label_cond_77;
	if ( obj->instanceOf("java::lang::Boolean") )     
		goto label_cond_6e;
	cVar3 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute value should be of type Boolean.")));
	// throw
	throw cVar3;
	// 1353    .line 278
label_cond_6e:
	obj->checkCast("java::lang::Boolean");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->hasOnlyUserCerts = obj->booleanValue();
	goto label_goto_1a;
	// 1366    .line 280
	// 1367    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_77:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("only_ca_certs")))) )  
		goto label_cond_96;
	if ( obj->instanceOf("java::lang::Boolean") )     
		goto label_cond_8d;
	cVar4 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute value should be of type Boolean.")));
	// throw
	throw cVar4;
	// 1393    .line 285
label_cond_8d:
	obj->checkCast("java::lang::Boolean");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->hasOnlyCACerts = obj->booleanValue();
	goto label_goto_1a;
	// 1406    .line 287
	// 1407    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_96:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("only_attribute_certs")))) )  
		goto label_cond_b6;
	if ( obj->instanceOf("java::lang::Boolean") )     
		goto label_cond_ac;
	cVar5 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute value should be of type Boolean.")));
	// throw
	throw cVar5;
	// 1433    .line 292
label_cond_ac:
	obj->checkCast("java::lang::Boolean");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->hasOnlyAttributeCerts = obj->booleanValue();
	goto label_goto_1a;
	// 1446    .line 295
	// 1447    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_b6:
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	cVar6 = std::make_shared<java::io::IOException>(cVar7->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name [")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("] not recognized by ")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("CertAttrSet:IssuingDistributionPointExtension.")))->toString());
	// throw
	throw cVar6;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::IssuingDistributionPointExtension::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	std::shared_ptr<java::lang::String> cVar2;
	std::shared_ptr<java::lang::String> cVar3;
	
	sb = std::make_shared<java::lang::StringBuilder>(this->toString());
	//    .local v0, "sb":Ljava/lang/StringBuilder;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("IssuingDistributionPoint [\n  ")));
	if ( !(this->distributionPoint) )  
		goto label_cond_18;
	sb->append(this->distributionPoint);
label_cond_18:
	if ( !(this->revocationReasons) )  
		goto label_cond_21;
	sb->append(this->revocationReasons);
label_cond_21:
	if ( !(this->hasOnlyUserCerts) )  
		goto label_cond_70;
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("  Only contains user certs: true"));
label_goto_28:
	sb->append(cVar0)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	if ( !(this->hasOnlyCACerts) )  
		goto label_cond_74;
	cVar1 = std::make_shared<java::lang::String>(std::make_shared<char[]>("  Only contains CA certs: true"));
label_goto_39:
	sb->append(cVar1)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	if ( !(this->hasOnlyAttributeCerts) )  
		goto label_cond_78;
	cVar2 = std::make_shared<java::lang::String>(std::make_shared<char[]>("  Only contains attribute certs: true"));
label_goto_4a:
	sb->append(cVar2)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	if ( !(this->isIndirectCRL) )  
		goto label_cond_7c;
	cVar3 = std::make_shared<java::lang::String>(std::make_shared<char[]>("  Indirect CRL: true"));
label_goto_5b:
	sb->append(cVar3)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]\n")));
	return sb->toString();
	// 1623    .line 458
label_cond_70:
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("  Only contains user certs: false"));
	goto label_goto_28;
	// 1629    .line 462
label_cond_74:
	cVar1 = std::make_shared<java::lang::String>(std::make_shared<char[]>("  Only contains CA certs: false"));
	goto label_goto_39;
	// 1635    .line 466
label_cond_78:
	cVar2 = std::make_shared<java::lang::String>(std::make_shared<char[]>("  Only contains attribute certs: false"));
	goto label_goto_4a;
	// 1641    .line 470
label_cond_7c:
	cVar3 = std::make_shared<java::lang::String>(std::make_shared<char[]>("  Indirect CRL: false"));
	goto label_goto_5b;

}


