// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\InvalidityDateExtension.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.security.cert.Extension.h"
#include "java.util.Date.h"
#include "java.util.Enumeration.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AttributeNameEnumeration.h"
#include "sun.security.x509.InvalidityDateExtension.h"
#include "sun.security.x509.PKIXExtensions.h"

static sun::security::x509::InvalidityDateExtension::DATE = std::make_shared<java::lang::String>("date");
static sun::security::x509::InvalidityDateExtension::NAME = std::make_shared<java::lang::String>("InvalidityDate");
// .method public constructor <init>(Ljava/lang/Boolean;Ljava/lang/Object;)V
sun::security::x509::InvalidityDateExtension::InvalidityDateExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value)
{
	
	std::shared_ptr<sun::security::util::DerValue> val;
	
	//    .param p1, "critical"    # Ljava/lang/Boolean;
	//    .param p2, "value"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 037        value = {
	// 038            Ljava/io/IOException;
	// 039        }
	// 040    .end annotation
	// 044    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->extensionId = sun::security::x509::PKIXExtensions::InvalidityDate_Id;
	this->critical = critical->booleanValue();
	value->checkCast("unsigned char[]");
	//    .end local p2    # "value":Ljava/lang/Object;
	this->extensionValue = value;
	val = std::make_shared<sun::security::util::DerValue>(this->extensionValue);
	//    .local v0, "val":Lsun/security/util/DerValue;
	this->date = val->getGeneralizedTime();
	return;

}
// .method public constructor <init>(Ljava/util/Date;)V
sun::security::x509::InvalidityDateExtension::InvalidityDateExtension(std::shared_ptr<java::util::Date> date)
{
	
	//    .param p1, "date"    # Ljava/util/Date;
	//    .annotation system Ldalvik/annotation/Throws;
	// 087        value = {
	// 088            Ljava/io/IOException;
	// 089        }
	// 090    .end annotation
	sun::security::x509::InvalidityDateExtension::(0x0, date);
	return;

}
// .method public constructor <init>(ZLjava/util/Date;)V
sun::security::x509::InvalidityDateExtension::InvalidityDateExtension(bool critical,std::shared_ptr<java::util::Date> date)
{
	
	//    .param p1, "critical"    # Z
	//    .param p2, "date"    # Ljava/util/Date;
	//    .annotation system Ldalvik/annotation/Throws;
	// 107        value = {
	// 108            Ljava/io/IOException;
	// 109        }
	// 110    .end annotation
	// 114    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->extensionId = sun::security::x509::PKIXExtensions::InvalidityDate_Id;
	this->critical = critical;
	this->date = date;
	this->encodeThis();
	return;

}
// .method private encodeThis()V
void sun::security::x509::InvalidityDateExtension::encodeThis()
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> dos;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 137        value = {
	// 138            Ljava/io/IOException;
	// 139        }
	// 140    .end annotation
	if ( this->date )     
		goto label_cond_8;
	this->extensionValue = 0x0;
	return;
	// 156    .line 76
label_cond_8:
	dos = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "dos":Lsun/security/util/DerOutputStream;
	dos->putGeneralizedTime(this->date);
	this->extensionValue = dos->toByteArray();
	return;

}
// .method public static toImpl(Ljava/security/cert/Extension;)Lsun/security/x509/InvalidityDateExtension;
std::shared_ptr<sun::security::x509::InvalidityDateExtension> sun::security::x509::InvalidityDateExtension::toImpl(std::shared_ptr<java::security::cert::Extension> ext)
{
	
	std::shared_ptr<sun::security::x509::InvalidityDateExtension> cVar0;
	
	//    .param p0, "ext"    # Ljava/security/cert/Extension;
	//    .annotation system Ldalvik/annotation/Throws;
	// 183        value = {
	// 184            Ljava/io/IOException;
	// 185        }
	// 186    .end annotation
	if ( !(ext->instanceOf("sun::security::x509::InvalidityDateExtension")) )  
		goto label_cond_7;
	ext->checkCast("sun::security::x509::InvalidityDateExtension");
	//    .end local p0    # "ext":Ljava/security/cert/Extension;
	return ext;
	// 200    .line 215
	// 201    .restart local p0    # "ext":Ljava/security/cert/Extension;
label_cond_7:
	cVar0 = std::make_shared<sun::security::x509::InvalidityDateExtension>(java::lang::Boolean::valueOf(ext->isCritical()), ext->getValue());
	return cVar0;

}
// .method public delete(Ljava/lang/String;)V
void sun::security::x509::InvalidityDateExtension::_delete_(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 230        value = {
	// 231            Ljava/io/IOException;
	// 232        }
	// 233    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("date")))) )  
		goto label_cond_10;
	this->date = 0x0;
	this->encodeThis();
	return;
	// 256    .line 161
label_cond_10:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Name not supported by InvalidityDateExtension")));
	// throw
	throw cVar0;

}
// .method public encode(Ljava/io/OutputStream;)V
void sun::security::x509::InvalidityDateExtension::encode(std::shared_ptr<java::io::OutputStream> out)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 273        value = {
	// 274            Ljava/io/IOException;
	// 275        }
	// 276    .end annotation
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "tmp":Lsun/security/util/DerOutputStream;
	if ( this->extensionValue )     
		goto label_cond_13;
	this->extensionId = sun::security::x509::PKIXExtensions::InvalidityDate_Id;
	this->critical = 0x0;
	this->encodeThis();
label_cond_13:
	this->encode(tmp);
	out->write(tmp->toByteArray());
	return;

}
// .method public get(Ljava/lang/String;)Ljava/util/Date;
std::shared_ptr<java::util::Date> sun::security::x509::InvalidityDateExtension::get(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::util::Date> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 340        value = {
	// 341            Ljava/io/IOException;
	// 342        }
	// 343    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("date")))) )  
		goto label_cond_1b;
	if ( this->date )     
		goto label_cond_f;
	return 0x0;
	// 365    .line 146
label_cond_f:
	cVar0 = std::make_shared<java::util::Date>(this->date->getTime());
	return cVar0;
	// 379    .line 149
label_cond_1b:
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Name not supported by InvalidityDateExtension")));
	// throw
	throw cVar1;

}
// .method public getElements()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> sun::security::x509::InvalidityDateExtension::getElements()
{
	
	std::shared_ptr<sun::security::x509::AttributeNameEnumeration> elements;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 395        value = {
	// 396            "()",
	// 397            "Ljava/util/Enumeration",
	// 398            "<",
	// 399            "Ljava/lang/String;",
	// 400            ">;"
	// 401        }
	// 402    .end annotation
	elements = std::make_shared<sun::security::x509::AttributeNameEnumeration>();
	//    .local v0, "elements":Lsun/security/x509/AttributeNameEnumeration;
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("date")));
	return elements->elements();

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::InvalidityDateExtension::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("InvalidityDate"));

}
// .method public set(Ljava/lang/String;Ljava/lang/Object;)V
void sun::security::x509::InvalidityDateExtension::set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 439        value = {
	// 440            Ljava/io/IOException;
	// 441        }
	// 442    .end annotation
	if ( obj->instanceOf("java::util::Date") )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute must be of type Date.")));
	// throw
	throw cVar0;
	// 459    .line 129
label_cond_d:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("date")))) )  
		goto label_cond_1e;
	obj->checkCast("java::util::Date");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->date = obj;
	this->encodeThis();
	return;
	// 481    .line 132
	// 482    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_1e:
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Name not supported by InvalidityDateExtension")));
	// throw
	throw cVar1;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::InvalidityDateExtension::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(this->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("    Invalidity Date: ")))->append(java::lang::String::valueOf(this->date))->toString();

}


