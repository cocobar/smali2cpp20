// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\OIDMap$OIDInfo.smali
#include "java2ctype.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.OIDMap_S_OIDInfo.h"

// .method constructor <init>(Ljava/lang/String;Lsun/security/util/ObjectIdentifier;Ljava/lang/Class;)V
sun::security::x509::OIDMap_S_OIDInfo::OIDMap_S_OIDInfo(std::shared_ptr<java::lang::String> name,std::shared_ptr<sun::security::util::ObjectIdentifier> oid,std::shared_ptr<java::lang::Class<java::lang::Object>> clazz)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "oid"    # Lsun/security/util/ObjectIdentifier;
	//    .annotation system Ldalvik/annotation/Signature;
	// 038        value = {
	// 039            "(",
	// 040            "Ljava/lang/String;",
	// 041            "Lsun/security/util/ObjectIdentifier;",
	// 042            "Ljava/lang/Class",
	// 043            "<*>;)V"
	// 044        }
	// 045    .end annotation
	//    .local p3, "clazz":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	// 050    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->name = name;
	this->oid = oid;
	this->clazz = clazz;
	return;

}
// .method getClazz()Ljava/lang/Class;
std::shared_ptr<java::lang::Class<java::lang::Object>> sun::security::x509::OIDMap_S_OIDInfo::getClazz()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 070        value = {
	// 071            "()",
	// 072            "Ljava/lang/Class",
	// 073            "<*>;"
	// 074        }
	// 075    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 078        value = {
	// 079            Ljava/security/cert/CertificateException;
	// 080        }
	// 081    .end annotation
	return this->clazz;

}


