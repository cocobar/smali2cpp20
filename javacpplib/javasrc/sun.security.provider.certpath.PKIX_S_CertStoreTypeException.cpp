// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\PKIX$CertStoreTypeException.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"
#include "java.security.cert.CertStoreException.h"
#include "sun.security.provider.certpath.PKIX_S_CertStoreTypeException.h"

static sun::security::provider::certpath::PKIX_S_CertStoreTypeException::serialVersionUID = 0x679327aecf46397cL;
// .method constructor <init>(Ljava/lang/String;Ljava/security/cert/CertStoreException;)V
sun::security::provider::certpath::PKIX_S_CertStoreTypeException::PKIX_S_CertStoreTypeException(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::security::cert::CertStoreException> cse)
{
	
	//    .param p1, "type"    # Ljava/lang/String;
	//    .param p2, "cse"    # Ljava/security/cert/CertStoreException;
	java::security::cert::CertStoreException::(cse->getMessage(), cse->getCause());
	this->type = type;
	return;

}
// .method getType()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::provider::certpath::PKIX_S_CertStoreTypeException::getType()
{
	
	return this->type;

}


