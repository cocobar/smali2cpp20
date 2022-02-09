// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\PKIX$CertStoreComparator.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.security.cert.CertStore.h"
#include "java.security.cert.CertStoreParameters.h"
#include "java.security.cert.CollectionCertStoreParameters.h"
#include "sun.security.provider.certpath.PKIX_S_CertStoreComparator.h"

// .method private constructor <init>()V
sun::security::provider::certpath::PKIX_S_CertStoreComparator::PKIX_S_CertStoreComparator()
{
	
	// 036    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method synthetic constructor <init>(Lsun/security/provider/certpath/PKIX$CertStoreComparator;)V
sun::security::provider::certpath::PKIX_S_CertStoreComparator::PKIX_S_CertStoreComparator(std::shared_ptr<sun::security::provider::certpath::PKIX_S_CertStoreComparator> _this0)
{
	
	//    .param p1, "-this0"    # Lsun/security/provider/certpath/PKIX$CertStoreComparator;
	// 046    invoke-direct {p0}, Lsun/security/provider/certpath/PKIX$CertStoreComparator;-><init>()V
	return;

}
// .method public compare(Ljava/security/cert/CertStore;Ljava/security/cert/CertStore;)I
int sun::security::provider::certpath::PKIX_S_CertStoreComparator::compare(std::shared_ptr<java::security::cert::CertStore> store1,std::shared_ptr<java::security::cert::CertStore> store2)
{
	
	//    .param p1, "store1"    # Ljava/security/cert/CertStore;
	//    .param p2, "store2"    # Ljava/security/cert/CertStore;
	if ( store1->getType()->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("Collection"))) )     
		goto label_cond_15;
	if ( !(store1->getCertStoreParameters()->instanceOf("java::security::cert::CollectionCertStoreParameters")) )  
		goto label_cond_17;
label_cond_15:
	return -0x1;
	// 104    .line 303
label_cond_17:
	return 0x1;

}


