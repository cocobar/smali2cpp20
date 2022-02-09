// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\CertificateValidity.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.OutputStream.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.security.cert.CertificateExpiredException.h"
#include "java.security.cert.CertificateNotYetValidException.h"
#include "java.util.Date.h"
#include "java.util.Enumeration.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.AttributeNameEnumeration.h"
#include "sun.security.x509.CertificateValidity.h"

static sun::security::x509::CertificateValidity::IDENT = std::make_shared<java::lang::String>("x509.info.validity");
static sun::security::x509::CertificateValidity::NAME = std::make_shared<java::lang::String>("validity");
static sun::security::x509::CertificateValidity::NOT_AFTER = std::make_shared<java::lang::String>("notAfter");
static sun::security::x509::CertificateValidity::NOT_BEFORE = std::make_shared<java::lang::String>("notBefore");
static sun::security::x509::CertificateValidity::YR_2050 = 0x24bd0146400L;
// .method public constructor <init>()V
sun::security::x509::CertificateValidity::CertificateValidity()
{
	
	// 045    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/util/Date;Ljava/util/Date;)V
sun::security::x509::CertificateValidity::CertificateValidity(std::shared_ptr<java::util::Date> notBefore,std::shared_ptr<java::util::Date> notAfter)
{
	
	//    .param p1, "notBefore"    # Ljava/util/Date;
	//    .param p2, "notAfter"    # Ljava/util/Date;
	// 057    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->notBefore = notBefore;
	this->notAfter = notAfter;
	return;

}
// .method public constructor <init>(Lsun/security/util/DerInputStream;)V
sun::security::x509::CertificateValidity::CertificateValidity(std::shared_ptr<sun::security::util::DerInputStream> in)
{
	
	//    .param p1, "in"    # Lsun/security/util/DerInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 073        value = {
	// 074            Ljava/io/IOException;
	// 075        }
	// 076    .end annotation
	// 080    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	//    .local v0, "derVal":Lsun/security/util/DerValue;
	this->construct(in->getDerValue());
	return;

}
// .method private construct(Lsun/security/util/DerValue;)V
void sun::security::x509::CertificateValidity::construct(std::shared_ptr<sun::security::util::DerValue> derVal)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<java::io::IOException> cVar5;
	std::shared_ptr<java::io::IOException> cVar6;
	std::shared_ptr<sun::security::util::DerInputStream> derIn;
	auto seq;
	std::shared_ptr<java::io::IOException> cVar7;
	std::shared_ptr<java::io::IOException> cVar9;
	std::shared_ptr<java::io::IOException> cVar8;
	
	//    .param p1, "derVal"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 099        value = {
	// 100            Ljava/io/IOException;
	// 101        }
	// 102    .end annotation
	cVar0 = 0x18;
	cVar1 = 0x17;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	if ( derVal->tag == 0x30 )
		goto label_cond_16;
	cVar5 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoded CertificateValidity, starting sequence tag missing.")));
	// throw
	throw cVar5;
	// 131    .line 77
label_cond_16:
	if ( derVal->data->available() )     
		goto label_cond_27;
	cVar6 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("No data encoded for CertificateValidity")));
	// throw
	throw cVar6;
	// 150    .line 80
label_cond_27:
	derIn = std::make_shared<sun::security::util::DerInputStream>(derVal->toByteArray());
	//    .local v0, "derIn":Lsun/security/util/DerInputStream;
	seq = derIn->getSequence(cVar2);
	//    .local v1, "seq":[Lsun/security/util/DerValue;
	if ( seq->size() == cVar2 )
		goto label_cond_40;
	cVar7 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding for CertificateValidity")));
	// throw
	throw cVar7;
	// 181    .line 85
label_cond_40:
	if ( seq[cVar4]->tag != cVar1 )
		goto label_cond_5d;
	this->notBefore = derVal->data->getUTCTime();
label_goto_4e:
	if ( seq[cVar3]->tag != cVar1 )
		goto label_cond_75;
	this->notAfter = derVal->data->getUTCTime();
label_goto_5c:
	return;
	// 219    .line 87
label_cond_5d:
	if ( seq[cVar4]->tag != cVar0 )
		goto label_cond_6c;
	this->notBefore = derVal->data->getGeneralizedTime();
	goto label_goto_4e;
	// 238    .line 90
label_cond_6c:
	cVar8 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding for CertificateValidity")));
	// throw
	throw cVar8;
	// 248    .line 95
label_cond_75:
	if ( seq[cVar3]->tag != cVar0 )
		goto label_cond_84;
	this->notAfter = derVal->data->getGeneralizedTime();
	goto label_goto_5c;
	// 267    .line 98
label_cond_84:
	cVar9 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding for CertificateValidity")));
	// throw
	throw cVar9;

}
// .method private getNotAfter()Ljava/util/Date;
std::shared_ptr<java::util::Date> sun::security::x509::CertificateValidity::getNotAfter()
{
	
	std::shared_ptr<java::util::Date> cVar0;
	
	cVar0 = std::make_shared<java::util::Date>(this->notAfter->getTime());
	return cVar0;

}
// .method private getNotBefore()Ljava/util/Date;
std::shared_ptr<java::util::Date> sun::security::x509::CertificateValidity::getNotBefore()
{
	
	std::shared_ptr<java::util::Date> cVar0;
	
	cVar0 = std::make_shared<java::util::Date>(this->notBefore->getTime());
	return cVar0;

}
// .method public delete(Ljava/lang/String;)V
void sun::security::x509::CertificateValidity::_delete_(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::util::Date> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 320        value = {
	// 321            Ljava/io/IOException;
	// 322        }
	// 323    .end annotation
	cVar0 = 0x0;
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("notBefore")))) )  
		goto label_cond_d;
	this->notBefore = cVar0;
label_goto_c:
	return;
	// 344    .line 210
label_cond_d:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("notAfter")))) )  
		goto label_cond_19;
	this->notAfter = cVar0;
	goto label_goto_c;
	// 359    .line 213
label_cond_19:
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet: CertificateValidity.")));
	// throw
	throw cVar1;

}
// .method public encode(Ljava/io/OutputStream;)V
void sun::security::x509::CertificateValidity::encode(std::shared_ptr<java::io::OutputStream> out)
{
	
	long long cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<sun::security::util::DerOutputStream> pair;
	std::shared_ptr<sun::security::util::DerOutputStream> seq;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 374        value = {
	// 375            Ljava/io/IOException;
	// 376        }
	// 377    .end annotation
	cVar0 = 0x24bd0146400L;
	if ( !(this->notBefore) )  
		goto label_cond_d;
	if ( this->notAfter )     
		goto label_cond_16;
label_cond_d:
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("CertAttrSet:CertificateValidity: null values to encode.\n")));
	// throw
	throw cVar1;
	// 401    .line 155
label_cond_16:
	pair = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "pair":Lsun/security/util/DerOutputStream;
	if ( (this->notBefore->getTime() > cVar0) >= 0 )
		goto label_cond_4b;
	pair->putUTCTime(this->notBefore);
label_goto_2a:
	if ( (this->notAfter->getTime() > cVar0) >= 0 )
		goto label_cond_51;
	pair->putUTCTime(this->notAfter);
label_goto_39:
	seq = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v1, "seq":Lsun/security/util/DerOutputStream;
	seq->write(0x30, pair);
	out->write(seq->toByteArray());
	return;
	// 463    .line 160
	// 464    .end local v1    # "seq":Lsun/security/util/DerOutputStream;
label_cond_4b:
	pair->putGeneralizedTime(this->notBefore);
	goto label_goto_2a;
	// 472    .line 165
label_cond_51:
	pair->putGeneralizedTime(this->notAfter);
	goto label_goto_39;

}
// .method public get(Ljava/lang/String;)Ljava/util/Date;
std::shared_ptr<java::util::Date> sun::security::x509::CertificateValidity::get(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 503        value = {
	// 504            Ljava/io/IOException;
	// 505        }
	// 506    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("notBefore")))) )  
		goto label_cond_e;
	return this->getNotBefore();
	// 525    .line 196
label_cond_e:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("notAfter")))) )  
		goto label_cond_1c;
	return this->getNotAfter();
	// 542    .line 199
label_cond_1c:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet: CertificateValidity.")));
	// throw
	throw cVar0;

}
// .method public getElements()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> sun::security::x509::CertificateValidity::getElements()
{
	
	std::shared_ptr<sun::security::x509::AttributeNameEnumeration> elements;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 556        value = {
	// 557            "()",
	// 558            "Ljava/util/Enumeration",
	// 559            "<",
	// 560            "Ljava/lang/String;",
	// 561            ">;"
	// 562        }
	// 563    .end annotation
	elements = std::make_shared<sun::security::x509::AttributeNameEnumeration>();
	//    .local v0, "elements":Lsun/security/x509/AttributeNameEnumeration;
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("notBefore")));
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("notAfter")));
	return elements->elements();

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::CertificateValidity::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("validity"));

}
// .method public set(Ljava/lang/String;Ljava/lang/Object;)V
void sun::security::x509::CertificateValidity::set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 605        value = {
	// 606            Ljava/io/IOException;
	// 607        }
	// 608    .end annotation
	if ( obj->instanceOf("java::util::Date") )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute must be of type Date.")));
	// throw
	throw cVar0;
	// 625    .line 180
label_cond_d:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("notBefore")))) )  
		goto label_cond_1b;
	obj->checkCast("java::util::Date");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->notBefore = obj;
label_goto_1a:
	return;
	// 645    .line 182
	// 646    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_1b:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("notAfter")))) )  
		goto label_cond_29;
	obj->checkCast("java::util::Date");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->notAfter = obj;
	goto label_goto_1a;
	// 664    .line 185
	// 665    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_29:
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet: CertificateValidity.")));
	// throw
	throw cVar1;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::CertificateValidity::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	if ( !(this->notBefore) )  
		goto label_cond_8;
	if ( this->notAfter )     
		goto label_cond_c;
label_cond_8:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	// 695    .line 137
label_cond_c:
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Validity: [From: ")))->append(this->notBefore->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(",\n               To: ")))->append(this->notAfter->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]")))->toString();

}
// .method public valid()V
void sun::security::x509::CertificateValidity::valid()
{
	
	std::shared_ptr<java::util::Date> now;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 755        value = {
	// 756            Ljava/security/cert/CertificateNotYetValidException;,
	// 757            Ljava/security/cert/CertificateExpiredException;
	// 758        }
	// 759    .end annotation
	now = std::make_shared<java::util::Date>();
	//    .local v0, "now":Ljava/util/Date;
	this->valid(now);
	return;

}
// .method public valid(Ljava/util/Date;)V
void sun::security::x509::CertificateValidity::valid(std::shared_ptr<java::util::Date> now)
{
	
	std::shared_ptr<java::security::cert::CertificateNotYetValidException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::security::cert::CertificateExpiredException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	//    .param p1, "now"    # Ljava/util/Date;
	//    .annotation system Ldalvik/annotation/Throws;
	// 779        value = {
	// 780            Ljava/security/cert/CertificateNotYetValidException;,
	// 781            Ljava/security/cert/CertificateExpiredException;
	// 782        }
	// 783    .end annotation
	if ( !(this->notBefore->after(now)) )  
		goto label_cond_28;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::security::cert::CertificateNotYetValidException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("NotBefore: ")))->append(this->notBefore->toString())->toString());
	// throw
	throw cVar0;
	// 828    .line 272
label_cond_28:
	if ( !(this->notAfter->before(now)) )  
		goto label_cond_50;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::security::cert::CertificateExpiredException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("NotAfter: ")))->append(this->notAfter->toString())->toString());
	// throw
	throw cVar2;
	// 871    .line 276
label_cond_50:
	return;

}


