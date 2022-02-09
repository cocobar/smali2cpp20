// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\OCSPNoCheckExtension.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.Boolean.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Enumeration.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AttributeNameEnumeration.h"
#include "sun.security.x509.OCSPNoCheckExtension.h"
#include "sun.security.x509.PKIXExtensions.h"

static sun::security::x509::OCSPNoCheckExtension::IDENT = std::make_shared<java::lang::String>("x509.info.extensions.OCSPNoCheck");
static sun::security::x509::OCSPNoCheckExtension::NAME = std::make_shared<java::lang::String>("OCSPNoCheck");
// .method public constructor <init>()V
sun::security::x509::OCSPNoCheckExtension::OCSPNoCheckExtension()
{
	
	bool cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 031        value = {
	// 032            Ljava/io/IOException;
	// 033        }
	// 034    .end annotation
	cVar0 = 0x0;
	// 040    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->extensionId = sun::security::x509::PKIXExtensions::OCSPNoCheck_Id;
	this->critical = cVar0;
	this->extensionValue = std::make_shared<std::vector<unsigned char[]>>(cVar0);
	return;

}
// .method public constructor <init>(Ljava/lang/Boolean;Ljava/lang/Object;)V
sun::security::x509::OCSPNoCheckExtension::OCSPNoCheckExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value)
{
	
	//    .param p1, "critical"    # Ljava/lang/Boolean;
	//    .param p2, "value"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 064        value = {
	// 065            Ljava/io/IOException;
	// 066        }
	// 067    .end annotation
	// 071    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->extensionId = sun::security::x509::PKIXExtensions::OCSPNoCheck_Id;
	this->critical = critical->booleanValue();
	this->extensionValue = std::make_shared<std::vector<unsigned char[]>>(0x0);
	return;

}
// .method public delete(Ljava/lang/String;)V
void sun::security::x509::OCSPNoCheckExtension::_delete_(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 102        value = {
	// 103            Ljava/io/IOException;
	// 104        }
	// 105    .end annotation
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("No attribute is allowed by CertAttrSet:OCSPNoCheckExtension.")));
	// throw
	throw cVar0;

}
// .method public get(Ljava/lang/String;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> sun::security::x509::OCSPNoCheckExtension::get(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 122        value = {
	// 123            Ljava/io/IOException;
	// 124        }
	// 125    .end annotation
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("No attribute is allowed by CertAttrSet:OCSPNoCheckExtension.")));
	// throw
	throw cVar0;

}
// .method public getElements()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> sun::security::x509::OCSPNoCheckExtension::getElements()
{
	
	std::shared_ptr<sun::security::x509::AttributeNameEnumeration> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 141        value = {
	// 142            "()",
	// 143            "Ljava/util/Enumeration",
	// 144            "<",
	// 145            "Ljava/lang/String;",
	// 146            ">;"
	// 147        }
	// 148    .end annotation
	cVar0 = std::make_shared<sun::security::x509::AttributeNameEnumeration>();
	return cVar0->elements();

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::OCSPNoCheckExtension::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("OCSPNoCheck"));

}
// .method public set(Ljava/lang/String;Ljava/lang/Object;)V
void sun::security::x509::OCSPNoCheckExtension::set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 178        value = {
	// 179            Ljava/io/IOException;
	// 180        }
	// 181    .end annotation
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("No attribute is allowed by CertAttrSet:OCSPNoCheckExtension.")));
	// throw
	throw cVar0;

}


