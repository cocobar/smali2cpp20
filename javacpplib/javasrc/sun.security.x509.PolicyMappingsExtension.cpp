// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\PolicyMappingsExtension.smali
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
#include "sun.security.x509.AttributeNameEnumeration.h"
#include "sun.security.x509.CertificatePolicyMap.h"
#include "sun.security.x509.PKIXExtensions.h"
#include "sun.security.x509.PolicyMappingsExtension.h"

static sun::security::x509::PolicyMappingsExtension::IDENT = std::make_shared<java::lang::String>("x509.info.extensions.PolicyMappings");
static sun::security::x509::PolicyMappingsExtension::MAP = std::make_shared<java::lang::String>("map");
static sun::security::x509::PolicyMappingsExtension::NAME = std::make_shared<java::lang::String>("PolicyMappings");
// .method public constructor <init>()V
sun::security::x509::PolicyMappingsExtension::PolicyMappingsExtension()
{
	
	// 048    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->extensionId = sun::security::x509::PKIXExtensions::KeyUsage_Id;
	this->critical = 0x0;
	this->maps = java::util::Collections::emptyList({const[class].FS-Param});
	return;

}
// .method public constructor <init>(Ljava/lang/Boolean;Ljava/lang/Object;)V
sun::security::x509::PolicyMappingsExtension::PolicyMappingsExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value)
{
	
	std::shared_ptr<sun::security::util::DerValue> val;
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::util::ArrayList> cVar1;
	std::shared_ptr<sun::security::x509::CertificatePolicyMap> map;
	
	//    .param p1, "critical"    # Ljava/lang/Boolean;
	//    .param p2, "value"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 076        value = {
	// 077            Ljava/io/IOException;
	// 078        }
	// 079    .end annotation
	// 083    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->extensionId = sun::security::x509::PKIXExtensions::PolicyMappings_Id;
	this->critical = critical->booleanValue();
	value->checkCast("unsigned char[]");
	//    .end local p2    # "value":Ljava/lang/Object;
	this->extensionValue = value;
	val = std::make_shared<sun::security::util::DerValue>(this->extensionValue);
	//    .local v2, "val":Lsun/security/util/DerValue;
	if ( val->tag == 0x30 )
		goto label_cond_27;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding for PolicyMappingsExtension.")));
	// throw
	throw cVar0;
	// 127    .line 127
label_cond_27:
	cVar1 = std::make_shared<java::util::ArrayList>();
	this->maps = cVar1;
label_goto_2e:
	if ( !(val->data->available()) )  
		goto label_cond_47;
	//    .local v1, "seq":Lsun/security/util/DerValue;
	map = std::make_shared<sun::security::x509::CertificatePolicyMap>(val->data->getDerValue());
	//    .local v0, "map":Lsun/security/x509/CertificatePolicyMap;
	this->maps->add(map);
	goto label_goto_2e;
	// 166    .line 133
	// 167    .end local v0    # "map":Lsun/security/x509/CertificatePolicyMap;
	// 168    .end local v1    # "seq":Lsun/security/util/DerValue;
label_cond_47:
	return;

}
// .method public constructor <init>(Ljava/util/List;)V
sun::security::x509::PolicyMappingsExtension::PolicyMappingsExtension(std::shared_ptr<java::util::List<sun::security::x509::CertificatePolicyMap>> map)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 176        value = {
	// 177            "(",
	// 178            "Ljava/util/List",
	// 179            "<",
	// 180            "Lsun/security/x509/CertificatePolicyMap;",
	// 181            ">;)V"
	// 182        }
	// 183    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 186        value = {
	// 187            Ljava/io/IOException;
	// 188        }
	// 189    .end annotation
	//    .local p1, "map":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/CertificatePolicyMap;>;"
	// 194    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->maps = map;
	this->extensionId = sun::security::x509::PKIXExtensions::PolicyMappings_Id;
	this->critical = 0x0;
	this->encodeThis();
	return;

}
// .method private encodeThis()V
void sun::security::x509::PolicyMappingsExtension::encodeThis()
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> os;
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	std::shared_ptr<java::util::Iterator> map_S_iterator;
	std::shared_ptr<sun::security::x509::CertificatePolicyMap> map;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 219        value = {
	// 220            Ljava/io/IOException;
	// 221        }
	// 222    .end annotation
	if ( !(this->maps) )  
		goto label_cond_d;
	if ( !(this->maps->isEmpty()) )  
		goto label_cond_10;
label_cond_d:
	this->extensionValue = 0x0;
	return;
	// 247    .line 75
label_cond_10:
	os = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v2, "os":Lsun/security/util/DerOutputStream;
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v3, "tmp":Lsun/security/util/DerOutputStream;
	map_S_iterator = this->maps->iterator();
	//    .local v1, "map$iterator":Ljava/util/Iterator;
label_goto_20:
	if ( !(map_S_iterator->hasNext()) )  
		goto label_cond_30;
	map = map_S_iterator->next();
	map->checkCast("sun::security::x509::CertificatePolicyMap");
	//    .local v0, "map":Lsun/security/x509/CertificatePolicyMap;
	map->encode(tmp);
	goto label_goto_20;
	// 287    .line 82
	// 288    .end local v0    # "map":Lsun/security/x509/CertificatePolicyMap;
label_cond_30:
	os->write(0x30, tmp);
	this->extensionValue = os->toByteArray();
	return;

}
// .method public delete(Ljava/lang/String;)V
void sun::security::x509::PolicyMappingsExtension::_delete_(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 311        value = {
	// 312            Ljava/io/IOException;
	// 313        }
	// 314    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("map")))) )  
		goto label_cond_10;
	this->maps = 0x0;
	this->encodeThis();
	return;
	// 337    .line 200
label_cond_10:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:PolicyMappingsExtension.")));
	// throw
	throw cVar0;

}
// .method public encode(Ljava/io/OutputStream;)V
void sun::security::x509::PolicyMappingsExtension::encode(std::shared_ptr<java::io::OutputStream> out)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 352        value = {
	// 353            Ljava/io/IOException;
	// 354        }
	// 355    .end annotation
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "tmp":Lsun/security/util/DerOutputStream;
	if ( this->extensionValue )     
		goto label_cond_13;
	this->extensionId = sun::security::x509::PKIXExtensions::PolicyMappings_Id;
	this->critical = 0x0;
	this->encodeThis();
label_cond_13:
	this->encode(tmp);
	out->write(tmp->toByteArray());
	return;

}
// .method public get(Ljava/lang/String;)Ljava/util/List;
std::shared_ptr<java::util::List<sun::security::x509::CertificatePolicyMap>> sun::security::x509::PolicyMappingsExtension::get(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 419        value = {
	// 420            "(",
	// 421            "Ljava/lang/String;",
	// 422            ")",
	// 423            "Ljava/util/List",
	// 424            "<",
	// 425            "Lsun/security/x509/CertificatePolicyMap;",
	// 426            ">;"
	// 427        }
	// 428    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 431        value = {
	// 432            Ljava/io/IOException;
	// 433        }
	// 434    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("map")))) )  
		goto label_cond_c;
	return this->maps;
	// 451    .line 188
label_cond_c:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:PolicyMappingsExtension.")));
	// throw
	throw cVar0;

}
// .method public getElements()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> sun::security::x509::PolicyMappingsExtension::getElements()
{
	
	std::shared_ptr<sun::security::x509::AttributeNameEnumeration> elements;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 465        value = {
	// 466            "()",
	// 467            "Ljava/util/Enumeration",
	// 468            "<",
	// 469            "Ljava/lang/String;",
	// 470            ">;"
	// 471        }
	// 472    .end annotation
	elements = std::make_shared<sun::security::x509::AttributeNameEnumeration>();
	//    .local v0, "elements":Lsun/security/x509/AttributeNameEnumeration;
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("map")));
	return elements->elements();

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::PolicyMappingsExtension::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyMappings"));

}
// .method public set(Ljava/lang/String;Ljava/lang/Object;)V
void sun::security::x509::PolicyMappingsExtension::set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 509        value = {
	// 510            Ljava/io/IOException;
	// 511        }
	// 512    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("map")))) )  
		goto label_cond_1e;
	if ( obj->instanceOf("java::util::List") )     
		goto label_cond_16;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute value should be of type List.")));
	// throw
	throw cVar0;
	// 538    .line 173
label_cond_16:
	obj->checkCast("java::util::List");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->maps = obj;
	this->encodeThis();
	return;
	// 551    .line 175
	// 552    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_1e:
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:PolicyMappingsExtension.")));
	// throw
	throw cVar1;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::PolicyMappingsExtension::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	if ( this->maps )     
		goto label_cond_8;
	return std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	// 576    .line 140
label_cond_8:
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "s":Ljava/lang/String;
	return cVar0->append(this->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyMappings [\n")))->append(this->maps->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]\n")))->toString();

}


