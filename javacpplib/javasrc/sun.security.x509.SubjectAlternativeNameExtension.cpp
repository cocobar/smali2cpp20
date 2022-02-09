// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\SubjectAlternativeNameExtension.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Enumeration.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AttributeNameEnumeration.h"
#include "sun.security.x509.GeneralName.h"
#include "sun.security.x509.GeneralNames.h"
#include "sun.security.x509.PKIXExtensions.h"
#include "sun.security.x509.SubjectAlternativeNameExtension.h"

static sun::security::x509::SubjectAlternativeNameExtension::IDENT = std::make_shared<java::lang::String>("x509.info.extensions.SubjectAlternativeName");
static sun::security::x509::SubjectAlternativeNameExtension::NAME = std::make_shared<java::lang::String>("SubjectAlternativeName");
static sun::security::x509::SubjectAlternativeNameExtension::SUBJECT_NAME = std::make_shared<java::lang::String>("subject_name");
// .method public constructor <init>()V
sun::security::x509::SubjectAlternativeNameExtension::SubjectAlternativeNameExtension()
{
	
	std::shared_ptr<sun::security::x509::GeneralNames> cVar0;
	
	// 039    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->names = 0x0;
	this->extensionId = sun::security::x509::PKIXExtensions::SubjectAlternativeName_Id;
	this->critical = 0x0;
	cVar0 = std::make_shared<sun::security::x509::GeneralNames>();
	this->names = cVar0;
	return;

}
// .method public constructor <init>(Ljava/lang/Boolean;Ljava/lang/Object;)V
sun::security::x509::SubjectAlternativeNameExtension::SubjectAlternativeNameExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value)
{
	
	std::shared_ptr<sun::security::util::DerValue> val;
	std::shared_ptr<sun::security::x509::GeneralNames> cVar0;
	std::shared_ptr<sun::security::x509::GeneralNames> cVar1;
	
	//    .param p1, "critical"    # Ljava/lang/Boolean;
	//    .param p2, "value"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 072        value = {
	// 073            Ljava/io/IOException;
	// 074        }
	// 075    .end annotation
	// 081    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->names = 0x0;
	this->extensionId = sun::security::x509::PKIXExtensions::SubjectAlternativeName_Id;
	this->critical = critical->booleanValue();
	value->checkCast("unsigned char[]");
	//    .end local p2    # "value":Ljava/lang/Object;
	this->extensionValue = value;
	val = std::make_shared<sun::security::util::DerValue>(this->extensionValue);
	//    .local v0, "val":Lsun/security/util/DerValue;
	if ( val->data )     
		goto label_cond_27;
	cVar0 = std::make_shared<sun::security::x509::GeneralNames>();
	this->names = cVar0;
	return;
	// 127    .line 141
label_cond_27:
	cVar1 = std::make_shared<sun::security::x509::GeneralNames>(val);
	this->names = cVar1;
	return;

}
// .method public constructor <init>(Ljava/lang/Boolean;Lsun/security/x509/GeneralNames;)V
sun::security::x509::SubjectAlternativeNameExtension::SubjectAlternativeNameExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<sun::security::x509::GeneralNames> names)
{
	
	//    .param p1, "critical"    # Ljava/lang/Boolean;
	//    .param p2, "names"    # Lsun/security/x509/GeneralNames;
	//    .annotation system Ldalvik/annotation/Throws;
	// 144        value = {
	// 145            Ljava/io/IOException;
	// 146        }
	// 147    .end annotation
	// 151    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->names = 0x0;
	this->names = names;
	this->extensionId = sun::security::x509::PKIXExtensions::SubjectAlternativeName_Id;
	this->critical = critical->booleanValue();
	this->encodeThis();
	return;

}
// .method public constructor <init>(Lsun/security/x509/GeneralNames;)V
sun::security::x509::SubjectAlternativeNameExtension::SubjectAlternativeNameExtension(std::shared_ptr<sun::security::x509::GeneralNames> names)
{
	
	//    .param p1, "names"    # Lsun/security/x509/GeneralNames;
	//    .annotation system Ldalvik/annotation/Throws;
	// 184        value = {
	// 185            Ljava/io/IOException;
	// 186        }
	// 187    .end annotation
	sun::security::x509::SubjectAlternativeNameExtension::(java::lang::Boolean::FALSE, names);
	return;

}
// .method private encodeThis()V
void sun::security::x509::SubjectAlternativeNameExtension::encodeThis()
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> os;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 202        value = {
	// 203            Ljava/io/IOException;
	// 204        }
	// 205    .end annotation
	if ( !(this->names) )  
		goto label_cond_d;
	if ( !(this->names->isEmpty()) )  
		goto label_cond_10;
label_cond_d:
	this->extensionValue = 0x0;
	return;
	// 230    .line 78
label_cond_10:
	os = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "os":Lsun/security/util/DerOutputStream;
	this->names->encode(os);
	this->extensionValue = os->toByteArray();
	return;

}
// .method public delete(Ljava/lang/String;)V
void sun::security::x509::SubjectAlternativeNameExtension::_delete_(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 259        value = {
	// 260            Ljava/io/IOException;
	// 261        }
	// 262    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("subject_name")))) )  
		goto label_cond_10;
	this->names = 0x0;
	this->encodeThis();
	return;
	// 285    .line 214
label_cond_10:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:SubjectAlternativeName.")));
	// throw
	throw cVar0;

}
// .method public encode(Ljava/io/OutputStream;)V
void sun::security::x509::SubjectAlternativeNameExtension::encode(std::shared_ptr<java::io::OutputStream> out)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 300        value = {
	// 301            Ljava/io/IOException;
	// 302        }
	// 303    .end annotation
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "tmp":Lsun/security/util/DerOutputStream;
	if ( this->extensionValue )     
		goto label_cond_13;
	this->extensionId = sun::security::x509::PKIXExtensions::SubjectAlternativeName_Id;
	this->critical = 0x0;
	this->encodeThis();
label_cond_13:
	this->encode(tmp);
	out->write(tmp->toByteArray());
	return;

}
// .method public get(Ljava/lang/String;)Lsun/security/x509/GeneralNames;
std::shared_ptr<sun::security::x509::GeneralNames> sun::security::x509::SubjectAlternativeNameExtension::get(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 367        value = {
	// 368            Ljava/io/IOException;
	// 369        }
	// 370    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("subject_name")))) )  
		goto label_cond_c;
	return this->names;
	// 387    .line 202
label_cond_c:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:SubjectAlternativeName.")));
	// throw
	throw cVar0;

}
// .method public getElements()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> sun::security::x509::SubjectAlternativeNameExtension::getElements()
{
	
	std::shared_ptr<sun::security::x509::AttributeNameEnumeration> elements;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 401        value = {
	// 402            "()",
	// 403            "Ljava/util/Enumeration",
	// 404            "<",
	// 405            "Ljava/lang/String;",
	// 406            ">;"
	// 407        }
	// 408    .end annotation
	elements = std::make_shared<sun::security::x509::AttributeNameEnumeration>();
	//    .local v0, "elements":Lsun/security/x509/AttributeNameEnumeration;
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("subject_name")));
	return elements->elements();

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::SubjectAlternativeNameExtension::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("SubjectAlternativeName"));

}
// .method public set(Ljava/lang/String;Ljava/lang/Object;)V
void sun::security::x509::SubjectAlternativeNameExtension::set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 445        value = {
	// 446            Ljava/io/IOException;
	// 447        }
	// 448    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("subject_name")))) )  
		goto label_cond_1e;
	if ( obj->instanceOf("sun::security::x509::GeneralNames") )     
		goto label_cond_16;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute value should be of type GeneralNames.")));
	// throw
	throw cVar0;
	// 474    .line 187
label_cond_16:
	obj->checkCast("sun::security::x509::GeneralNames");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->names = obj;
	this->encodeThis();
	return;
	// 487    .line 189
	// 488    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_1e:
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:SubjectAlternativeName.")));
	// throw
	throw cVar1;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::SubjectAlternativeNameExtension::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::String> result;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::util::Iterator> name_S_iterator;
	std::shared_ptr<sun::security::x509::GeneralName> name;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	result = cVar0->append(this->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("SubjectAlternativeName [\n")))->toString();
	//    .local v2, "result":Ljava/lang/String;
	if ( this->names )     
		goto label_cond_45;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	result = cVar1->append(result)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  null\n")))->toString();
label_cond_30:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	result = cVar2->append(result)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]\n")))->toString();
	return result;
	// 574    .line 153
label_cond_45:
	name_S_iterator = this->names->names()->iterator();
	//    .local v1, "name$iterator":Ljava/util/Iterator;
label_goto_4f:
	if ( !(name_S_iterator->hasNext()) )  
		goto label_cond_30;
	name = name_S_iterator->next();
	name->checkCast("sun::security::x509::GeneralName");
	//    .local v0, "name":Lsun/security/x509/GeneralName;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	result = cVar3->append(result)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  ")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")))->toString();
	goto label_goto_4f;

}


