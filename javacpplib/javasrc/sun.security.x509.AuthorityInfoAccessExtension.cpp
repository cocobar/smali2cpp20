// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\AuthorityInfoAccessExtension.smali
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
#include "sun.security.x509.AccessDescription.h"
#include "sun.security.x509.AttributeNameEnumeration.h"
#include "sun.security.x509.AuthorityInfoAccessExtension.h"
#include "sun.security.x509.PKIXExtensions.h"

static sun::security::x509::AuthorityInfoAccessExtension::DESCRIPTIONS = std::make_shared<java::lang::String>("descriptions");
static sun::security::x509::AuthorityInfoAccessExtension::IDENT = std::make_shared<java::lang::String>("x509.info.extensions.AuthorityInfoAccess");
static sun::security::x509::AuthorityInfoAccessExtension::NAME = std::make_shared<java::lang::String>("AuthorityInfoAccess");
// .method public constructor <init>(Ljava/lang/Boolean;Ljava/lang/Object;)V
sun::security::x509::AuthorityInfoAccessExtension::AuthorityInfoAccessExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<sun::security::util::DerValue> val;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::util::ArrayList> cVar2;
	std::shared_ptr<sun::security::x509::AccessDescription> accessDescription;
	
	//    .param p1, "critical"    # Ljava/lang/Boolean;
	//    .param p2, "value"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 048        value = {
	// 049            Ljava/io/IOException;
	// 050        }
	// 051    .end annotation
	// 055    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->extensionId = sun::security::x509::PKIXExtensions::AuthInfoAccess_Id;
	this->critical = critical->booleanValue();
	if ( value->instanceOf("unsigned char[]") )     
		goto label_cond_1a;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal argument type")));
	// throw
	throw cVar0;
	// 083    .line 118
label_cond_1a:
	value->checkCast("unsigned char[]");
	//    .end local p2    # "value":Ljava/lang/Object;
	this->extensionValue = value;
	val = std::make_shared<sun::security::util::DerValue>(this->extensionValue);
	//    .local v2, "val":Lsun/security/util/DerValue;
	if ( val->tag == 0x30 )
		goto label_cond_34;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding for AuthorityInfoAccessExtension.")));
	// throw
	throw cVar1;
	// 114    .line 124
label_cond_34:
	cVar2 = std::make_shared<java::util::ArrayList>();
	this->accessDescriptions = cVar2;
label_goto_3b:
	if ( !(val->data->available()) )  
		goto label_cond_54;
	//    .local v1, "seq":Lsun/security/util/DerValue;
	accessDescription = std::make_shared<sun::security::x509::AccessDescription>(val->data->getDerValue());
	//    .local v0, "accessDescription":Lsun/security/x509/AccessDescription;
	this->accessDescriptions->add(accessDescription);
	goto label_goto_3b;
	// 153    .line 130
	// 154    .end local v0    # "accessDescription":Lsun/security/x509/AccessDescription;
	// 155    .end local v1    # "seq":Lsun/security/util/DerValue;
label_cond_54:
	return;

}
// .method public constructor <init>(Ljava/util/List;)V
sun::security::x509::AuthorityInfoAccessExtension::AuthorityInfoAccessExtension(std::shared_ptr<java::util::List<sun::security::x509::AccessDescription>> accessDescriptions)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 163        value = {
	// 164            "(",
	// 165            "Ljava/util/List",
	// 166            "<",
	// 167            "Lsun/security/x509/AccessDescription;",
	// 168            ">;)V"
	// 169        }
	// 170    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 173        value = {
	// 174            Ljava/io/IOException;
	// 175        }
	// 176    .end annotation
	//    .local p1, "accessDescriptions":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/AccessDescription;>;"
	// 181    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->extensionId = sun::security::x509::PKIXExtensions::AuthInfoAccess_Id;
	this->critical = 0x0;
	this->accessDescriptions = accessDescriptions;
	this->encodeThis();
	return;

}
// .method private encodeThis()V
void sun::security::x509::AuthorityInfoAccessExtension::encodeThis()
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> ads;
	std::shared_ptr<java::util::Iterator> accessDescription_S_iterator;
	std::shared_ptr<sun::security::x509::AccessDescription> accessDescription;
	std::shared_ptr<sun::security::util::DerOutputStream> seq;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 206        value = {
	// 207            Ljava/io/IOException;
	// 208        }
	// 209    .end annotation
	if ( !(this->accessDescriptions->isEmpty()) )  
		goto label_cond_c;
	this->extensionValue = 0x0;
label_goto_b:
	return;
	// 230    .line 223
label_cond_c:
	ads = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v2, "ads":Lsun/security/util/DerOutputStream;
	accessDescription_S_iterator = this->accessDescriptions->iterator();
	//    .local v1, "accessDescription$iterator":Ljava/util/Iterator;
label_goto_17:
	if ( !(accessDescription_S_iterator->hasNext()) )  
		goto label_cond_27;
	accessDescription = accessDescription_S_iterator->next();
	accessDescription->checkCast("sun::security::x509::AccessDescription");
	//    .local v0, "accessDescription":Lsun/security/x509/AccessDescription;
	accessDescription->encode(ads);
	goto label_goto_17;
	// 264    .line 227
	// 265    .end local v0    # "accessDescription":Lsun/security/x509/AccessDescription;
label_cond_27:
	seq = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v3, "seq":Lsun/security/util/DerOutputStream;
	seq->write(0x30, ads);
	this->extensionValue = seq->toByteArray();
	goto label_goto_b;

}
// .method public delete(Ljava/lang/String;)V
void sun::security::x509::AuthorityInfoAccessExtension::_delete_(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::util::ArrayList> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 293        value = {
	// 294            Ljava/io/IOException;
	// 295        }
	// 296    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("descriptions")))) )  
		goto label_cond_14;
	cVar0 = std::make_shared<java::util::ArrayList>();
	this->accessDescriptions = cVar0;
	this->encodeThis();
	return;
	// 321    .line 201
label_cond_14:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::io::IOException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name [")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("] not recognized by ")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("CertAttrSet:AuthorityInfoAccessExtension.")))->toString());
	// throw
	throw cVar1;

}
// .method public encode(Ljava/io/OutputStream;)V
void sun::security::x509::AuthorityInfoAccessExtension::encode(std::shared_ptr<java::io::OutputStream> out)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 368        value = {
	// 369            Ljava/io/IOException;
	// 370        }
	// 371    .end annotation
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "tmp":Lsun/security/util/DerOutputStream;
	if ( this->extensionValue )     
		goto label_cond_13;
	this->extensionId = sun::security::x509::PKIXExtensions::AuthInfoAccess_Id;
	this->critical = 0x0;
	this->encodeThis();
label_cond_13:
	this->encode(tmp);
	out->write(tmp->toByteArray());
	return;

}
// .method public get(Ljava/lang/String;)Ljava/util/List;
std::shared_ptr<java::util::List<sun::security::x509::AccessDescription>> sun::security::x509::AuthorityInfoAccessExtension::get(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 435        value = {
	// 436            "(",
	// 437            "Ljava/lang/String;",
	// 438            ")",
	// 439            "Ljava/util/List",
	// 440            "<",
	// 441            "Lsun/security/x509/AccessDescription;",
	// 442            ">;"
	// 443        }
	// 444    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 447        value = {
	// 448            Ljava/io/IOException;
	// 449        }
	// 450    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("descriptions")))) )  
		goto label_cond_c;
	return this->accessDescriptions;
	// 467    .line 188
label_cond_c:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name [")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("] not recognized by ")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("CertAttrSet:AuthorityInfoAccessExtension.")))->toString());
	// throw
	throw cVar0;

}
// .method public getAccessDescriptions()Ljava/util/List;
std::shared_ptr<java::util::List<sun::security::x509::AccessDescription>> sun::security::x509::AuthorityInfoAccessExtension::getAccessDescriptions()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 513        value = {
	// 514            "()",
	// 515            "Ljava/util/List",
	// 516            "<",
	// 517            "Lsun/security/x509/AccessDescription;",
	// 518            ">;"
	// 519        }
	// 520    .end annotation
	return this->accessDescriptions;

}
// .method public getElements()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> sun::security::x509::AuthorityInfoAccessExtension::getElements()
{
	
	std::shared_ptr<sun::security::x509::AttributeNameEnumeration> elements;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 532        value = {
	// 533            "()",
	// 534            "Ljava/util/Enumeration",
	// 535            "<",
	// 536            "Ljava/lang/String;",
	// 537            ">;"
	// 538        }
	// 539    .end annotation
	elements = std::make_shared<sun::security::x509::AttributeNameEnumeration>();
	//    .local v0, "elements":Lsun/security/x509/AttributeNameEnumeration;
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("descriptions")));
	return elements->elements();

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::AuthorityInfoAccessExtension::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("AuthorityInfoAccess"));

}
// .method public set(Ljava/lang/String;Ljava/lang/Object;)V
void sun::security::x509::AuthorityInfoAccessExtension::set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 576        value = {
	// 577            Ljava/io/IOException;
	// 578        }
	// 579    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("descriptions")))) )  
		goto label_cond_1e;
	if ( obj->instanceOf("java::util::List") )     
		goto label_cond_16;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute value should be of type List.")));
	// throw
	throw cVar0;
	// 605    .line 172
label_cond_16:
	obj->checkCast("java::util::List");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->accessDescriptions = obj;
	this->encodeThis();
	return;
	// 618    .line 174
	// 619    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_1e:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::io::IOException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name [")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("] not recognized by ")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("CertAttrSet:AuthorityInfoAccessExtension.")))->toString());
	// throw
	throw cVar1;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::AuthorityInfoAccessExtension::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(this->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("AuthorityInfoAccess [\n  ")))->append(this->accessDescriptions)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n]\n")))->toString();

}


