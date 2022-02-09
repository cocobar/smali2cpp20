// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\RevocationChecker$1.smali
#include "java2ctype.h"
#include "java.lang.Boolean.h"
#include "java.lang.String.h"
#include "java.security.Security.h"
#include "sun.security.provider.certpath.RevocationChecker_S_1.h"
#include "sun.security.provider.certpath.RevocationChecker_S_RevocationProperties.h"

// .method constructor <init>()V
sun::security::provider::certpath::RevocationChecker_S_1::RevocationChecker_S_1()
{
	
	// 036    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public run()Lsun/security/provider/certpath/RevocationChecker$RevocationProperties;
std::shared_ptr<sun::security::provider::certpath::RevocationChecker_S_RevocationProperties> sun::security::provider::certpath::RevocationChecker_S_1::run()
{
	
	bool cVar2;
	std::shared_ptr<sun::security::provider::certpath::RevocationChecker_S_RevocationProperties> rp;
	std::shared_ptr<java::lang::String> onlyEE;
	bool cVar1;
	std::shared_ptr<java::lang::String> ocspEnabled;
	
	cVar2 = 0x0;
	rp = std::make_shared<sun::security::provider::certpath::RevocationChecker_S_RevocationProperties>(0x0);
	//    .local v2, "rp":Lsun/security/provider/certpath/RevocationChecker$RevocationProperties;
	onlyEE = java::security::Security::getProperty(std::make_shared<java::lang::String>(std::make_shared<char[]>("com.sun.security.onlyCheckRevocationOfEECert")));
	//    .local v1, "onlyEE":Ljava/lang/String;
	if ( !(onlyEE) )  
		goto label_cond_59;
	cVar1 = onlyEE->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("true")));
label_goto_17:
	rp->onlyEE = cVar1;
	ocspEnabled = java::security::Security::getProperty(std::make_shared<java::lang::String>(std::make_shared<char[]>("ocsp.enable")));
	//    .local v0, "ocspEnabled":Ljava/lang/String;
	if ( !(ocspEnabled) )  
		goto label_cond_29;
	cVar2 = ocspEnabled->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("true")));
label_cond_29:
	rp->ocspEnabled = cVar2;
	rp->ocspUrl = java::security::Security::getProperty(std::make_shared<java::lang::String>(std::make_shared<char[]>("ocsp.responderURL")));
	rp->ocspSubject = java::security::Security::getProperty(std::make_shared<java::lang::String>(std::make_shared<char[]>("ocsp.responderCertSubjectName")));
	rp->ocspIssuer = java::security::Security::getProperty(std::make_shared<java::lang::String>(std::make_shared<char[]>("ocsp.responderCertIssuerName")));
	rp->ocspSerial = java::security::Security::getProperty(std::make_shared<java::lang::String>(std::make_shared<char[]>("ocsp.responderCertSerialNumber")));
	rp->crlDPEnabled = java::lang::Boolean::getBoolean(std::make_shared<java::lang::String>(std::make_shared<char[]>("com.sun.security.enableCRLDP")));
	return rp;
	// 167    .end local v0    # "ocspEnabled":Ljava/lang/String;
label_cond_59:
	cVar1 = cVar2;
	goto label_goto_17;

}


