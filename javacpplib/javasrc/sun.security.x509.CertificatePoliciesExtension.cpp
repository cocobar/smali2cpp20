// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\CertificatePoliciesExtension.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.ArrayList.h"
#include "java.util.Enumeration.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AttributeNameEnumeration.h"
#include "sun.security.x509.CertificatePoliciesExtension.h"
#include "sun.security.x509.PKIXExtensions.h"
#include "sun.security.x509.PolicyInformation.h"

static sun::security::x509::CertificatePoliciesExtension::IDENT = std::make_shared<java::lang::String>("x509.info.extensions.CertificatePolicies");
static sun::security::x509::CertificatePoliciesExtension::NAME = std::make_shared<java::lang::String>("CertificatePolicies");
static sun::security::x509::CertificatePoliciesExtension::POLICIES = std::make_shared<java::lang::String>("policies");
// .method public constructor <init>(Ljava/lang/Boolean;Ljava/lang/Object;)V
sun::security::x509::CertificatePoliciesExtension::CertificatePoliciesExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value)
{
	
	std::shared_ptr<sun::security::util::DerValue> val;
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::util::ArrayList> cVar1;
	std::shared_ptr<sun::security::x509::PolicyInformation> policy;
	
	//    .param p1, "critical"    # Ljava/lang/Boolean;
	//    .param p2, "value"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 048        value = {
	// 049            Ljava/io/IOException;
	// 050        }
	// 051    .end annotation
	// 055    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->extensionId = sun::security::x509::PKIXExtensions::CertificatePolicies_Id;
	this->critical = critical->booleanValue();
	value->checkCast("unsigned char[]");
	//    .end local p2    # "value":Ljava/lang/Object;
	this->extensionValue = value;
	val = std::make_shared<sun::security::util::DerValue>(this->extensionValue);
	//    .local v2, "val":Lsun/security/util/DerValue;
	if ( val->tag == 0x30 )
		goto label_cond_27;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding for CertificatePoliciesExtension.")));
	// throw
	throw cVar0;
	// 099    .line 148
label_cond_27:
	cVar1 = std::make_shared<java::util::ArrayList>();
	this->certPolicies = cVar1;
label_goto_2e:
	if ( !(val->data->available()) )  
		goto label_cond_47;
	//    .local v1, "seq":Lsun/security/util/DerValue;
	policy = std::make_shared<sun::security::x509::PolicyInformation>(val->data->getDerValue());
	//    .local v0, "policy":Lsun/security/x509/PolicyInformation;
	this->certPolicies->add(policy);
	goto label_goto_2e;
	// 138    .line 154
	// 139    .end local v0    # "policy":Lsun/security/x509/PolicyInformation;
	// 140    .end local v1    # "seq":Lsun/security/util/DerValue;
label_cond_47:
	return;

}
// .method public constructor <init>(Ljava/lang/Boolean;Ljava/util/List;)V
sun::security::x509::CertificatePoliciesExtension::CertificatePoliciesExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::util::List<sun::security::x509::PolicyInformation>> certPolicies)
{
	
	//    .param p1, "critical"    # Ljava/lang/Boolean;
	//    .annotation system Ldalvik/annotation/Signature;
	// 149        value = {
	// 150            "(",
	// 151            "Ljava/lang/Boolean;",
	// 152            "Ljava/util/List",
	// 153            "<",
	// 154            "Lsun/security/x509/PolicyInformation;",
	// 155            ">;)V"
	// 156        }
	// 157    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 160        value = {
	// 161            Ljava/io/IOException;
	// 162        }
	// 163    .end annotation
	//    .local p2, "certPolicies":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/PolicyInformation;>;"
	// 168    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->certPolicies = certPolicies;
	this->extensionId = sun::security::x509::PKIXExtensions::CertificatePolicies_Id;
	this->critical = critical->booleanValue();
	this->encodeThis();
	return;

}
// .method public constructor <init>(Ljava/util/List;)V
sun::security::x509::CertificatePoliciesExtension::CertificatePoliciesExtension(std::shared_ptr<java::util::List<sun::security::x509::PolicyInformation>> certPolicies)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 195        value = {
	// 196            "(",
	// 197            "Ljava/util/List",
	// 198            "<",
	// 199            "Lsun/security/x509/PolicyInformation;",
	// 200            ">;)V"
	// 201        }
	// 202    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 205        value = {
	// 206            Ljava/io/IOException;
	// 207        }
	// 208    .end annotation
	//    .local p1, "certPolicies":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/PolicyInformation;>;"
	sun::security::x509::CertificatePoliciesExtension::(java::lang::Boolean::FALSE, certPolicies);
	return;

}
// .method private encodeThis()V
void sun::security::x509::CertificatePoliciesExtension::encodeThis()
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> os;
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	std::shared_ptr<java::util::Iterator> info_S_iterator;
	std::shared_ptr<sun::security::x509::PolicyInformation> info;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 224        value = {
	// 225            Ljava/io/IOException;
	// 226        }
	// 227    .end annotation
	if ( !(this->certPolicies) )  
		goto label_cond_d;
	if ( !(this->certPolicies->isEmpty()) )  
		goto label_cond_10;
label_cond_d:
	this->extensionValue = 0x0;
label_goto_f:
	return;
	// 253    .line 92
label_cond_10:
	os = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v2, "os":Lsun/security/util/DerOutputStream;
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v3, "tmp":Lsun/security/util/DerOutputStream;
	info_S_iterator = this->certPolicies->iterator();
	//    .local v1, "info$iterator":Ljava/util/Iterator;
label_goto_20:
	if ( !(info_S_iterator->hasNext()) )  
		goto label_cond_30;
	info = info_S_iterator->next();
	info->checkCast("sun::security::x509::PolicyInformation");
	//    .local v0, "info":Lsun/security/x509/PolicyInformation;
	info->encode(tmp);
	goto label_goto_20;
	// 293    .line 99
	// 294    .end local v0    # "info":Lsun/security/x509/PolicyInformation;
label_cond_30:
	os->write(0x30, tmp);
	this->extensionValue = os->toByteArray();
	goto label_goto_f;

}
// .method public delete(Ljava/lang/String;)V
void sun::security::x509::CertificatePoliciesExtension::_delete_(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 316        value = {
	// 317            Ljava/io/IOException;
	// 318        }
	// 319    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("policies")))) )  
		goto label_cond_10;
	this->certPolicies = 0x0;
	this->encodeThis();
	return;
	// 342    .line 228
label_cond_10:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name [")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("] not recognized by ")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("CertAttrSet:CertificatePoliciesExtension.")))->toString());
	// throw
	throw cVar0;

}
// .method public encode(Ljava/io/OutputStream;)V
void sun::security::x509::CertificatePoliciesExtension::encode(std::shared_ptr<java::io::OutputStream> out)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 389        value = {
	// 390            Ljava/io/IOException;
	// 391        }
	// 392    .end annotation
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "tmp":Lsun/security/util/DerOutputStream;
	if ( this->extensionValue )     
		goto label_cond_13;
	this->extensionId = sun::security::x509::PKIXExtensions::CertificatePolicies_Id;
	this->critical = 0x0;
	this->encodeThis();
label_cond_13:
	this->encode(tmp);
	out->write(tmp->toByteArray());
	return;

}
// .method public get(Ljava/lang/String;)Ljava/util/List;
std::shared_ptr<java::util::List<sun::security::x509::PolicyInformation>> sun::security::x509::CertificatePoliciesExtension::get(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 456        value = {
	// 457            "(",
	// 458            "Ljava/lang/String;",
	// 459            ")",
	// 460            "Ljava/util/List",
	// 461            "<",
	// 462            "Lsun/security/x509/PolicyInformation;",
	// 463            ">;"
	// 464        }
	// 465    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 468        value = {
	// 469            Ljava/io/IOException;
	// 470        }
	// 471    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("policies")))) )  
		goto label_cond_c;
	return this->certPolicies;
	// 488    .line 215
label_cond_c:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name [")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("] not recognized by ")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("CertAttrSet:CertificatePoliciesExtension.")))->toString());
	// throw
	throw cVar0;

}
// .method public getElements()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> sun::security::x509::CertificatePoliciesExtension::getElements()
{
	
	std::shared_ptr<sun::security::x509::AttributeNameEnumeration> elements;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 534        value = {
	// 535            "()",
	// 536            "Ljava/util/Enumeration",
	// 537            "<",
	// 538            "Ljava/lang/String;",
	// 539            ">;"
	// 540        }
	// 541    .end annotation
	elements = std::make_shared<sun::security::x509::AttributeNameEnumeration>();
	//    .local v0, "elements":Lsun/security/x509/AttributeNameEnumeration;
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("policies")));
	return elements->elements();

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::CertificatePoliciesExtension::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("CertificatePolicies"));

}
// .method public set(Ljava/lang/String;Ljava/lang/Object;)V
void sun::security::x509::CertificatePoliciesExtension::set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 578        value = {
	// 579            Ljava/io/IOException;
	// 580        }
	// 581    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("policies")))) )  
		goto label_cond_1e;
	if ( obj->instanceOf("java::util::List") )     
		goto label_cond_16;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute value should be of type List.")));
	// throw
	throw cVar0;
	// 607    .line 198
label_cond_16:
	obj->checkCast("java::util::List");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->certPolicies = obj;
	this->encodeThis();
	return;
	// 620    .line 200
	// 621    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_1e:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::io::IOException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name [")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("] not recognized by ")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("CertAttrSet:CertificatePoliciesExtension.")))->toString());
	// throw
	throw cVar1;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::CertificatePoliciesExtension::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	std::shared_ptr<java::util::Iterator> info_S_iterator;
	std::shared_ptr<sun::security::x509::PolicyInformation> info;
	
	if ( this->certPolicies )     
		goto label_cond_8;
	return std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	// 678    .line 163
label_cond_8:
	sb = std::make_shared<java::lang::StringBuilder>(this->toString());
	//    .local v2, "sb":Ljava/lang/StringBuilder;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("CertificatePolicies [\n")));
	info_S_iterator = this->certPolicies->iterator();
	//    .local v1, "info$iterator":Ljava/util/Iterator;
label_goto_1d:
	if ( !(info_S_iterator->hasNext()) )  
		goto label_cond_31;
	info = info_S_iterator->next();
	info->checkCast("sun::security::x509::PolicyInformation");
	//    .local v0, "info":Lsun/security/x509/PolicyInformation;
	sb->append(info->toString());
	goto label_goto_1d;
	// 725    .line 168
	// 726    .end local v0    # "info":Lsun/security/x509/PolicyInformation;
label_cond_31:
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]\n")));
	return sb->toString();

}


