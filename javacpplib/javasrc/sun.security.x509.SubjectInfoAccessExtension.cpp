// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\SubjectInfoAccessExtension.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.ArrayList.h"
#include "java.util.Collections.h"
#include "java.util.Enumeration.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AccessDescription.h"
#include "sun.security.x509.AttributeNameEnumeration.h"
#include "sun.security.x509.PKIXExtensions.h"
#include "sun.security.x509.SubjectInfoAccessExtension.h"

static sun::security::x509::SubjectInfoAccessExtension::DESCRIPTIONS = std::make_shared<java::lang::String>("descriptions");
static sun::security::x509::SubjectInfoAccessExtension::IDENT = std::make_shared<java::lang::String>("x509.info.extensions.SubjectInfoAccess");
static sun::security::x509::SubjectInfoAccessExtension::NAME = std::make_shared<java::lang::String>("SubjectInfoAccess");
// .method public constructor <init>(Ljava/lang/Boolean;Ljava/lang/Object;)V
sun::security::x509::SubjectInfoAccessExtension::SubjectInfoAccessExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value)
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
	this->extensionId = sun::security::x509::PKIXExtensions::SubjectInfoAccess_Id;
	this->critical = critical->booleanValue();
	if ( value->instanceOf("unsigned char[]") )     
		goto label_cond_1a;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal argument type")));
	// throw
	throw cVar0;
	// 083    .line 123
label_cond_1a:
	value->checkCast("unsigned char[]");
	//    .end local p2    # "value":Ljava/lang/Object;
	this->extensionValue = value;
	val = std::make_shared<sun::security::util::DerValue>(this->extensionValue);
	//    .local v2, "val":Lsun/security/util/DerValue;
	if ( val->tag == 0x30 )
		goto label_cond_34;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding for SubjectInfoAccessExtension.")));
	// throw
	throw cVar1;
	// 114    .line 129
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
	// 153    .line 135
	// 154    .end local v0    # "accessDescription":Lsun/security/x509/AccessDescription;
	// 155    .end local v1    # "seq":Lsun/security/util/DerValue;
label_cond_54:
	return;

}
// .method public constructor <init>(Ljava/util/List;)V
sun::security::x509::SubjectInfoAccessExtension::SubjectInfoAccessExtension(std::shared_ptr<java::util::List<sun::security::x509::AccessDescription>> accessDescriptions)
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
	this->extensionId = sun::security::x509::PKIXExtensions::SubjectInfoAccess_Id;
	this->critical = 0x0;
	this->accessDescriptions = accessDescriptions;
	this->encodeThis();
	return;

}
// .method private encodeThis()V
void sun::security::x509::SubjectInfoAccessExtension::encodeThis()
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
	// 230    .line 229
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
	// 264    .line 233
	// 265    .end local v0    # "accessDescription":Lsun/security/x509/AccessDescription;
label_cond_27:
	seq = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v3, "seq":Lsun/security/util/DerOutputStream;
	seq->write(0x30, ads);
	this->extensionValue = seq->toByteArray();
	goto label_goto_b;

}
// .method public delete(Ljava/lang/String;)V
void sun::security::x509::SubjectInfoAccessExtension::_delete_(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 293        value = {
	// 294            Ljava/io/IOException;
	// 295        }
	// 296    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("descriptions")))) )  
		goto label_cond_13;
	this->accessDescriptions = java::util::Collections::emptyList({const[class].FS-Param});
	this->encodeThis();
	return;
	// 322    .line 207
label_cond_13:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name [")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("] not recognized by ")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("CertAttrSet:SubjectInfoAccessExtension.")))->toString());
	// throw
	throw cVar0;

}
// .method public encode(Ljava/io/OutputStream;)V
void sun::security::x509::SubjectInfoAccessExtension::encode(std::shared_ptr<java::io::OutputStream> out)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 369        value = {
	// 370            Ljava/io/IOException;
	// 371        }
	// 372    .end annotation
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "tmp":Lsun/security/util/DerOutputStream;
	if ( this->extensionValue )     
		goto label_cond_13;
	this->extensionId = sun::security::x509::PKIXExtensions::SubjectInfoAccess_Id;
	this->critical = 0x0;
	this->encodeThis();
label_cond_13:
	this->encode(tmp);
	out->write(tmp->toByteArray());
	return;

}
// .method public get(Ljava/lang/String;)Ljava/util/List;
std::shared_ptr<java::util::List<sun::security::x509::AccessDescription>> sun::security::x509::SubjectInfoAccessExtension::get(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 436        value = {
	// 437            "(",
	// 438            "Ljava/lang/String;",
	// 439            ")",
	// 440            "Ljava/util/List",
	// 441            "<",
	// 442            "Lsun/security/x509/AccessDescription;",
	// 443            ">;"
	// 444        }
	// 445    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 448        value = {
	// 449            Ljava/io/IOException;
	// 450        }
	// 451    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("descriptions")))) )  
		goto label_cond_c;
	return this->accessDescriptions;
	// 468    .line 193
label_cond_c:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name [")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("] not recognized by ")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("CertAttrSet:SubjectInfoAccessExtension.")))->toString());
	// throw
	throw cVar0;

}
// .method public getAccessDescriptions()Ljava/util/List;
std::shared_ptr<java::util::List<sun::security::x509::AccessDescription>> sun::security::x509::SubjectInfoAccessExtension::getAccessDescriptions()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 514        value = {
	// 515            "()",
	// 516            "Ljava/util/List",
	// 517            "<",
	// 518            "Lsun/security/x509/AccessDescription;",
	// 519            ">;"
	// 520        }
	// 521    .end annotation
	return this->accessDescriptions;

}
// .method public getElements()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> sun::security::x509::SubjectInfoAccessExtension::getElements()
{
	
	std::shared_ptr<sun::security::x509::AttributeNameEnumeration> elements;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 533        value = {
	// 534            "()",
	// 535            "Ljava/util/Enumeration",
	// 536            "<",
	// 537            "Ljava/lang/String;",
	// 538            ">;"
	// 539        }
	// 540    .end annotation
	elements = std::make_shared<sun::security::x509::AttributeNameEnumeration>();
	//    .local v0, "elements":Lsun/security/x509/AttributeNameEnumeration;
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("descriptions")));
	return elements->elements();

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::SubjectInfoAccessExtension::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("SubjectInfoAccess"));

}
// .method public set(Ljava/lang/String;Ljava/lang/Object;)V
void sun::security::x509::SubjectInfoAccessExtension::set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 577        value = {
	// 578            Ljava/io/IOException;
	// 579        }
	// 580    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("descriptions")))) )  
		goto label_cond_1e;
	if ( obj->instanceOf("java::util::List") )     
		goto label_cond_16;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute value should be of type List.")));
	// throw
	throw cVar0;
	// 606    .line 177
label_cond_16:
	obj->checkCast("java::util::List");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->accessDescriptions = obj;
	this->encodeThis();
	return;
	// 619    .line 179
	// 620    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_1e:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::io::IOException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name [")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("] not recognized by ")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("CertAttrSet:SubjectInfoAccessExtension.")))->toString());
	// throw
	throw cVar1;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::SubjectInfoAccessExtension::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(this->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("SubjectInfoAccess [\n  ")))->append(this->accessDescriptions)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n]\n")))->toString();

}


