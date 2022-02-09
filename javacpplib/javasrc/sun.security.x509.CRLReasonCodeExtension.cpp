// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\CRLReasonCodeExtension.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.security.cert.CRLReason.h"
#include "java.util.Enumeration.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AttributeNameEnumeration.h"
#include "sun.security.x509.CRLReasonCodeExtension.h"
#include "sun.security.x509.PKIXExtensions.h"

static sun::security::x509::CRLReasonCodeExtension::NAME = std::make_shared<java::lang::String>("CRLReasonCode");
static sun::security::x509::CRLReasonCodeExtension::REASON = std::make_shared<java::lang::String>("reason");
static sun::security::x509::CRLReasonCodeExtension::values;
// .method static constructor <clinit>()V
void sun::security::x509::CRLReasonCodeExtension::static_cinit()
{
	
	sun::security::x509::CRLReasonCodeExtension::values = java::security::cert::CRLReason::values({const[class].FS-Param});
	return;

}
// .method public constructor <init>(I)V
sun::security::x509::CRLReasonCodeExtension::CRLReasonCodeExtension(int reason)
{
	
	//    .param p1, "reason"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 053        value = {
	// 054            Ljava/io/IOException;
	// 055        }
	// 056    .end annotation
	sun::security::x509::CRLReasonCodeExtension::(0x0, reason);
	return;

}
// .method public constructor <init>(Ljava/lang/Boolean;Ljava/lang/Object;)V
sun::security::x509::CRLReasonCodeExtension::CRLReasonCodeExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value)
{
	
	std::shared_ptr<sun::security::util::DerValue> val;
	
	//    .param p1, "critical"    # Ljava/lang/Boolean;
	//    .param p2, "value"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 073        value = {
	// 074            Ljava/io/IOException;
	// 075        }
	// 076    .end annotation
	// 080    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->reasonCode = 0x0;
	this->extensionId = sun::security::x509::PKIXExtensions::ReasonCode_Id;
	this->critical = critical->booleanValue();
	value->checkCast("unsigned char[]");
	//    .end local p2    # "value":Ljava/lang/Object;
	this->extensionValue = value;
	val = std::make_shared<sun::security::util::DerValue>(this->extensionValue);
	//    .local v0, "val":Lsun/security/util/DerValue;
	this->reasonCode = val->getEnumerated();
	return;

}
// .method public constructor <init>(ZI)V
sun::security::x509::CRLReasonCodeExtension::CRLReasonCodeExtension(bool critical,int reason)
{
	
	//    .param p1, "critical"    # Z
	//    .param p2, "reason"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 129        value = {
	// 130            Ljava/io/IOException;
	// 131        }
	// 132    .end annotation
	// 136    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->reasonCode = 0x0;
	this->extensionId = sun::security::x509::PKIXExtensions::ReasonCode_Id;
	this->critical = critical;
	this->reasonCode = reason;
	this->encodeThis();
	return;

}
// .method private encodeThis()V
void sun::security::x509::CRLReasonCodeExtension::encodeThis()
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> dos;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 164        value = {
	// 165            Ljava/io/IOException;
	// 166        }
	// 167    .end annotation
	if ( this->reasonCode )     
		goto label_cond_8;
	this->extensionValue = 0x0;
	return;
	// 183    .line 61
label_cond_8:
	dos = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "dos":Lsun/security/util/DerOutputStream;
	dos->putEnumerated(this->reasonCode);
	this->extensionValue = dos->toByteArray();
	return;

}
// .method public delete(Ljava/lang/String;)V
void sun::security::x509::CRLReasonCodeExtension::_delete_(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 212        value = {
	// 213            Ljava/io/IOException;
	// 214        }
	// 215    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("reason")))) )  
		goto label_cond_10;
	this->reasonCode = 0x0;
	this->encodeThis();
	return;
	// 238    .line 142
label_cond_10:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Name not supported by CRLReasonCodeExtension")));
	// throw
	throw cVar0;

}
// .method public encode(Ljava/io/OutputStream;)V
void sun::security::x509::CRLReasonCodeExtension::encode(std::shared_ptr<java::io::OutputStream> out)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 255        value = {
	// 256            Ljava/io/IOException;
	// 257        }
	// 258    .end annotation
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "tmp":Lsun/security/util/DerOutputStream;
	if ( this->extensionValue )     
		goto label_cond_13;
	this->extensionId = sun::security::x509::PKIXExtensions::ReasonCode_Id;
	this->critical = 0x0;
	this->encodeThis();
label_cond_13:
	this->encode(tmp);
	out->write(tmp->toByteArray());
	return;

}
// .method public get(Ljava/lang/String;)Ljava/lang/Integer;
std::shared_ptr<java::lang::Integer> sun::security::x509::CRLReasonCodeExtension::get(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::lang::Integer> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 304        value = {
	// 305            Ljava/io/IOException;
	// 306        }
	// 307    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("reason")))) )  
		goto label_cond_11;
	cVar0 = std::make_shared<java::lang::Integer>(this->reasonCode);
	return cVar0;
	// 328    .line 130
label_cond_11:
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Name not supported by CRLReasonCodeExtension")));
	// throw
	throw cVar1;

}
// .method public getElements()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> sun::security::x509::CRLReasonCodeExtension::getElements()
{
	
	std::shared_ptr<sun::security::x509::AttributeNameEnumeration> elements;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 362        value = {
	// 363            "()",
	// 364            "Ljava/util/Enumeration",
	// 365            "<",
	// 366            "Ljava/lang/String;",
	// 367            ">;"
	// 368        }
	// 369    .end annotation
	elements = std::make_shared<sun::security::x509::AttributeNameEnumeration>();
	//    .local v0, "elements":Lsun/security/x509/AttributeNameEnumeration;
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("reason")));
	return elements->elements();

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::CRLReasonCodeExtension::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("CRLReasonCode"));

}
// .method public getReasonCode()Ljava/security/cert/CRLReason;
std::shared_ptr<java::security::cert::CRLReason> sun::security::x509::CRLReasonCodeExtension::getReasonCode()
{
	
	if ( this->reasonCode <= 0 )
		goto label_cond_12;
	if ( this->reasonCode >= sun::security::x509::CRLReasonCodeExtension::values->size() )
		goto label_cond_12;
	return sun::security::x509::CRLReasonCodeExtension::values[this->reasonCode];
	// 427    .line 199
label_cond_12:
	return java::security::cert::CRLReason::UNSPECIFIED;

}
// .method public set(Ljava/lang/String;Ljava/lang/Object;)V
void sun::security::x509::CRLReasonCodeExtension::set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj)
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
	if ( obj->instanceOf("java::lang::Integer") )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute must be of type Integer.")));
	// throw
	throw cVar0;
	// 459    .line 114
label_cond_d:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("reason")))) )  
		goto label_cond_22;
	obj->checkCast("java::lang::Integer");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->reasonCode = obj->intValue();
	this->encodeThis();
	return;
	// 485    .line 117
	// 486    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_22:
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Name not supported by CRLReasonCodeExtension")));
	// throw
	throw cVar1;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::CRLReasonCodeExtension::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(this->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("    Reason Code: ")))->append(this->getReasonCode())->toString();

}


