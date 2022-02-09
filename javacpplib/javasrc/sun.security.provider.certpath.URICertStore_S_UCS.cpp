// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\URICertStore$UCS.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.security.Provider.h"
#include "java.security.cert.CertStore.h"
#include "java.security.cert.CertStoreParameters.h"
#include "java.security.cert.CertStoreSpi.h"
#include "sun.security.provider.certpath.URICertStore_S_UCS.h"

// .method protected constructor <init>(Ljava/security/cert/CertStoreSpi;Ljava/security/Provider;Ljava/lang/String;Ljava/security/cert/CertStoreParameters;)V
sun::security::provider::certpath::URICertStore_S_UCS::URICertStore_S_UCS(std::shared_ptr<java::security::cert::CertStoreSpi> spi,std::shared_ptr<java::security::Provider> p,std::shared_ptr<java::lang::String> type,std::shared_ptr<java::security::cert::CertStoreParameters> params)
{
	
	//    .param p1, "spi"    # Ljava/security/cert/CertStoreSpi;
	//    .param p2, "p"    # Ljava/security/Provider;
	//    .param p3, "type"    # Ljava/lang/String;
	//    .param p4, "params"    # Ljava/security/cert/CertStoreParameters;
	java::security::cert::CertStore::(spi, p, type, params);
	return;

}


