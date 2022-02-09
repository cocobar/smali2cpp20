// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\InhibitAnyPolicyExtension.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Enumeration.h"
#include "sun.security.util.Debug.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AttributeNameEnumeration.h"
#include "sun.security.x509.InhibitAnyPolicyExtension.h"
#include "sun.security.x509.PKIXExtensions.h"

static sun::security::x509::InhibitAnyPolicyExtension::AnyPolicy_Id = nullptr;
static sun::security::x509::InhibitAnyPolicyExtension::IDENT = std::make_shared<java::lang::String>("x509.info.extensions.InhibitAnyPolicy");
static sun::security::x509::InhibitAnyPolicyExtension::NAME = std::make_shared<java::lang::String>("InhibitAnyPolicy");
static sun::security::x509::InhibitAnyPolicyExtension::SKIP_CERTS = std::make_shared<java::lang::String>("skip_certs");
static sun::security::x509::InhibitAnyPolicyExtension::debug;
// .method static constructor <clinit>()V
void sun::security::x509::InhibitAnyPolicyExtension::static_cinit()
{
	
	std::shared_ptr<sun::security::util::ObjectIdentifier> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	sun::security::x509::InhibitAnyPolicyExtension::debug = sun::security::util::Debug::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("certpath")));
	try {
	//label_try_start_9:
	cVar0 = std::make_shared<sun::security::util::ObjectIdentifier>(std::make_shared<java::lang::String>(std::make_shared<char[]>("2.5.29.32.0")));
	sun::security::x509::InhibitAnyPolicyExtension::AnyPolicy_Id = cVar0;
	//label_try_end_13:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_14;
	}
	//    .catch Ljava/io/IOException; {:try_start_9 .. :try_end_13} :catch_14
	//    .local v0, "ioe":Ljava/io/IOException;
label_goto_13:
	return;
	// 068    .line 82
	// 069    .end local v0    # "ioe":Ljava/io/IOException;
label_catch_14:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v0    # "ioe":Ljava/io/IOException;
	goto label_goto_13;

}
// .method public constructor <init>(I)V
sun::security::x509::InhibitAnyPolicyExtension::InhibitAnyPolicyExtension(int skipCerts)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::io::IOException> cVar2;
	
	//    .param p1, "skipCerts"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 081        value = {
	// 082            Ljava/io/IOException;
	// 083        }
	// 084    .end annotation
	cVar0 = 0x7fffffff;
	cVar1 = -0x1;
	// 092    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->skipCerts = cVar0;
	if ( skipCerts >= cVar1 )
		goto label_cond_14;
	cVar2 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid value for skipCerts")));
	// throw
	throw cVar2;
	// 109    .line 112
label_cond_14:
	if ( skipCerts != cVar1 )
		goto label_cond_23;
	this->skipCerts = cVar0;
label_goto_18:
	this->extensionId = sun::security::x509::PKIXExtensions::InhibitAnyPolicy_Id;
	this->critical = 0x1;
	this->encodeThis();
	return;
	// 133    .line 115
label_cond_23:
	this->skipCerts = skipCerts;
	goto label_goto_18;

}
// .method public constructor <init>(Ljava/lang/Boolean;Ljava/lang/Object;)V
sun::security::x509::InhibitAnyPolicyExtension::InhibitAnyPolicyExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::io::IOException> cVar2;
	std::shared_ptr<sun::security::util::DerValue> val;
	std::shared_ptr<java::io::IOException> cVar3;
	std::shared_ptr<java::io::IOException> cVar4;
	int skipCertsValue;
	std::shared_ptr<java::io::IOException> cVar5;
	
	//    .param p1, "critical"    # Ljava/lang/Boolean;
	//    .param p2, "value"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 145        value = {
	// 146            Ljava/io/IOException;
	// 147        }
	// 148    .end annotation
	cVar0 = 0x7fffffff;
	cVar1 = -0x1;
	// 156    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->skipCerts = cVar0;
	this->extensionId = sun::security::x509::PKIXExtensions::InhibitAnyPolicy_Id;
	if ( critical->booleanValue() )     
		goto label_cond_1c;
	cVar2 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Criticality cannot be false for InhibitAnyPolicy")));
	// throw
	throw cVar2;
	// 182    .line 138
label_cond_1c:
	this->critical = critical->booleanValue();
	value->checkCast("unsigned char[]");
	//    .end local p2    # "value":Ljava/lang/Object;
	this->extensionValue = value;
	val = std::make_shared<sun::security::util::DerValue>(this->extensionValue);
	//    .local v1, "val":Lsun/security/util/DerValue;
	if ( val->tag == 0x2 )
		goto label_cond_3b;
	cVar3 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding of InhibitAnyPolicy: data not integer")));
	// throw
	throw cVar3;
	// 220    .line 146
label_cond_3b:
	if ( val->data )     
		goto label_cond_48;
	cVar4 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding of InhibitAnyPolicy: null data")));
	// throw
	throw cVar4;
	// 235    .line 149
label_cond_48:
	skipCertsValue = val->getInteger();
	//    .local v0, "skipCertsValue":I
	if ( skipCertsValue >= cVar1 )
		goto label_cond_57;
	cVar5 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid value for skipCerts")));
	// throw
	throw cVar5;
	// 254    .line 152
label_cond_57:
	if ( skipCertsValue != cVar1 )
		goto label_cond_5c;
	this->skipCerts = cVar0;
label_goto_5b:
	return;
	// 265    .line 155
label_cond_5c:
	this->skipCerts = skipCertsValue;
	goto label_goto_5b;

}
// .method private encodeThis()V
void sun::security::x509::InhibitAnyPolicyExtension::encodeThis()
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> out;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 275        value = {
	// 276            Ljava/io/IOException;
	// 277        }
	// 278    .end annotation
	out = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "out":Lsun/security/util/DerOutputStream;
	out->putInteger(this->skipCerts);
	this->extensionValue = out->toByteArray();
	return;

}
// .method public delete(Ljava/lang/String;)V
void sun::security::x509::InhibitAnyPolicyExtension::_delete_(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 309        value = {
	// 310            Ljava/io/IOException;
	// 311        }
	// 312    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("skip_certs")))) )  
		goto label_cond_12;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute skip_certs may not be deleted.")));
	// throw
	throw cVar0;
	// 333    .line 239
label_cond_12:
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:InhibitAnyPolicy.")));
	// throw
	throw cVar1;

}
// .method public encode(Ljava/io/OutputStream;)V
void sun::security::x509::InhibitAnyPolicyExtension::encode(std::shared_ptr<java::io::OutputStream> out)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 348        value = {
	// 349            Ljava/io/IOException;
	// 350        }
	// 351    .end annotation
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "tmp":Lsun/security/util/DerOutputStream;
	if ( this->extensionValue )     
		goto label_cond_13;
	this->extensionId = sun::security::x509::PKIXExtensions::InhibitAnyPolicy_Id;
	this->critical = 0x1;
	this->encodeThis();
label_cond_13:
	this->encode(tmp);
	out->write(tmp->toByteArray());
	return;

}
// .method public get(Ljava/lang/String;)Ljava/lang/Integer;
std::shared_ptr<java::lang::Integer> sun::security::x509::InhibitAnyPolicyExtension::get(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::lang::Integer> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 397        value = {
	// 398            Ljava/io/IOException;
	// 399        }
	// 400    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("skip_certs")))) )  
		goto label_cond_11;
	cVar0 = std::make_shared<java::lang::Integer>(this->skipCerts);
	return cVar0;
	// 421    .line 222
label_cond_11:
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:InhibitAnyPolicy.")));
	// throw
	throw cVar1;

}
// .method public getElements()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> sun::security::x509::InhibitAnyPolicyExtension::getElements()
{
	
	std::shared_ptr<sun::security::x509::AttributeNameEnumeration> elements;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 453        value = {
	// 454            "()",
	// 455            "Ljava/util/Enumeration",
	// 456            "<",
	// 457            "Ljava/lang/String;",
	// 458            ">;"
	// 459        }
	// 460    .end annotation
	elements = std::make_shared<sun::security::x509::AttributeNameEnumeration>();
	//    .local v0, "elements":Lsun/security/x509/AttributeNameEnumeration;
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("skip_certs")));
	return elements->elements();

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::InhibitAnyPolicyExtension::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("InhibitAnyPolicy"));

}
// .method public set(Ljava/lang/String;Ljava/lang/Object;)V
void sun::security::x509::InhibitAnyPolicyExtension::set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj)
{
	
	int cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	int skipCertsValue;
	std::shared_ptr<java::io::IOException> cVar2;
	std::shared_ptr<java::io::IOException> cVar3;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 497        value = {
	// 498            Ljava/io/IOException;
	// 499        }
	// 500    .end annotation
	cVar0 = -0x1;
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("skip_certs")))) )  
		goto label_cond_36;
	if ( obj->instanceOf("java::lang::Integer") )     
		goto label_cond_17;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute value should be of type Integer.")));
	// throw
	throw cVar1;
	// 528    .line 196
label_cond_17:
	obj->checkCast("java::lang::Integer");
	//    .end local p2    # "obj":Ljava/lang/Object;
	skipCertsValue = obj->intValue();
	//    .local v0, "skipCertsValue":I
	if ( skipCertsValue >= cVar0 )
		goto label_cond_28;
	cVar2 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid value for skipCerts")));
	// throw
	throw cVar2;
	// 550    .line 199
label_cond_28:
	if ( skipCertsValue != cVar0 )
		goto label_cond_33;
	this->skipCerts = 0x7fffffff;
label_goto_2f:
	this->encodeThis();
	return;
	// 566    .line 202
label_cond_33:
	this->skipCerts = skipCertsValue;
	goto label_goto_2f;
	// 572    .line 205
	// 573    .end local v0    # "skipCertsValue":I
	// 574    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_36:
	cVar3 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:InhibitAnyPolicy.")));
	// throw
	throw cVar3;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::InhibitAnyPolicyExtension::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "s":Ljava/lang/String;
	return cVar0->append(this->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("InhibitAnyPolicy: ")))->append(this->skipCerts)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")))->toString();

}


