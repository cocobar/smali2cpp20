// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\PKIX$BuilderParams.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.security.InvalidAlgorithmParameterException.h"
#include "java.security.cert.CertSelector.h"
#include "java.security.cert.CertStore.h"
#include "java.security.cert.CertStoreException.h"
#include "java.security.cert.PKIXBuilderParameters.h"
#include "java.security.cert.X509CertSelector.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.ArrayList.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.security.provider.certpath.PKIX_S_BuilderParams.h"
#include "sun.security.provider.certpath.PKIX_S_CertStoreComparator.h"
#include "sun.security.provider.certpath.PKIX_S_ValidatorParams.h"
#include "sun.security.provider.certpath.PKIX.h"
#include "sun.security.util.Debug.h"

// .method constructor <init>(Ljava/security/cert/PKIXBuilderParameters;)V
sun::security::provider::certpath::PKIX_S_BuilderParams::PKIX_S_BuilderParams(std::shared_ptr<java::security::cert::PKIXBuilderParameters> params)
{
	
	//    .param p1, "params"    # Ljava/security/cert/PKIXBuilderParameters;
	//    .annotation system Ldalvik/annotation/Throws;
	// 039        value = {
	// 040            Ljava/security/InvalidAlgorithmParameterException;
	// 041        }
	// 042    .end annotation
	sun::security::provider::certpath::PKIX_S_ValidatorParams::(params);
	this->checkParams(params);
	return;

}
// .method private checkParams(Ljava/security/cert/PKIXBuilderParameters;)V
void sun::security::provider::certpath::PKIX_S_BuilderParams::checkParams(std::shared_ptr<java::security::cert::PKIXBuilderParameters> params)
{
	
	std::shared_ptr<java::security::InvalidAlgorithmParameterException> cVar0;
	std::shared_ptr<java::security::cert::X509CertSelector> cVar1;
	
	//    .param p1, "params"    # Ljava/security/cert/PKIXBuilderParameters;
	//    .annotation system Ldalvik/annotation/Throws;
	// 059        value = {
	// 060            Ljava/security/InvalidAlgorithmParameterException;
	// 061        }
	// 062    .end annotation
	//    .local v0, "sel":Ljava/security/cert/CertSelector;
	if ( this->targetCertConstraints()->instanceOf("java::security::cert::X509CertSelector") )     
		goto label_cond_11;
	cVar0 = std::make_shared<java::security::InvalidAlgorithmParameterException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("the targetCertConstraints parameter must be an X509CertSelector")));
	// throw
	throw cVar0;
	// 085    .line 214
label_cond_11:
	this->params = params;
	cVar1 = this->targetCertConstraints();
	cVar1->checkCast("java::security::cert::X509CertSelector");
	this->targetSubject = sun::security::provider::certpath::PKIX_S_BuilderParams::getTargetSubject(this->certStores(), cVar1);
	return;

}
// .method private static getTargetSubject(Ljava/util/List;Ljava/security/cert/X509CertSelector;)Ljavax/security/auth/x500/X500Principal;
std::shared_ptr<javax::security::auth::x500::X500Principal> sun::security::provider::certpath::PKIX_S_BuilderParams::getTargetSubject(std::shared_ptr<java::util::List<java::security::cert::CertStore>> stores,std::shared_ptr<java::security::cert::X509CertSelector> sel)
{
	
	std::shared_ptr<javax::security::auth::x500::X500Principal> subject;
	std::shared_ptr<java::security::cert::X509Certificate> cert;
	std::shared_ptr<java::util::Iterator> store_S_iterator;
	std::shared_ptr<java::security::cert::CertStore> store;
	std::shared_ptr<java::lang::Object> e;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::util::Collection> certs;
	std::shared_ptr<java::security::cert::X509Certificate> xc;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::security::InvalidAlgorithmParameterException> cVar1;
	
	//    .param p1, "sel"    # Ljava/security/cert/X509CertSelector;
	//    .annotation system Ldalvik/annotation/Signature;
	// 115        value = {
	// 116            "(",
	// 117            "Ljava/util/List",
	// 118            "<",
	// 119            "Ljava/security/cert/CertStore;",
	// 120            ">;",
	// 121            "Ljava/security/cert/X509CertSelector;",
	// 122            ")",
	// 123            "Ljavax/security/auth/x500/X500Principal;"
	// 124        }
	// 125    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 128        value = {
	// 129            Ljava/security/InvalidAlgorithmParameterException;
	// 130        }
	// 131    .end annotation
	//    .local p0, "stores":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/CertStore;>;"
	subject = sel->getSubject();
	//    .local v5, "subject":Ljavax/security/auth/x500/X500Principal;
	if ( !(subject) )  
		goto label_cond_7;
	return subject;
	// 147    .line 242
label_cond_7:
	cert = sel->getCertificate();
	//    .local v0, "cert":Ljava/security/cert/X509Certificate;
	if ( !(cert) )  
		goto label_cond_11;
	subject = cert->getSubjectX500Principal();
label_cond_11:
	if ( !(subject) )  
		goto label_cond_14;
	return subject;
	// 169    .line 249
label_cond_14:
	store_S_iterator = stores->iterator();
	//    .local v4, "store$iterator":Ljava/util/Iterator;
label_cond_18:
label_goto_18:
	if ( !(store_S_iterator->hasNext()) )  
		goto label_cond_63;
	store = store_S_iterator->next();
	store->checkCast("java::security::cert::CertStore");
	//    .local v3, "store":Ljava/security/cert/CertStore;
	try {
	//label_try_start_24:
	certs = store->getCertificates(sel);
	//    .local v1, "certs":Ljava/util/Collection;, "Ljava/util/Collection<+Ljava/security/cert/Certificate;>;"
	if ( certs->isEmpty() )     
		goto label_cond_18;
	xc = certs->iterator()->next();
	xc->checkCast("java::security::cert::X509Certificate");
	//    .local v6, "xc":Ljava/security/cert/X509Certificate;
	//label_try_end_3b:
	}
	catch (java::security::cert::CertStoreException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3d;
	}
	//    .catch Ljava/security/cert/CertStoreException; {:try_start_24 .. :try_end_3b} :catch_3d
	return xc->getSubjectX500Principal();
	// 226    .line 259
	// 227    .end local v1    # "certs":Ljava/util/Collection;, "Ljava/util/Collection<+Ljava/security/cert/Certificate;>;"
	// 228    .end local v6    # "xc":Ljava/security/cert/X509Certificate;
label_catch_3d:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/security/cert/CertStoreException;
	if ( !(sun::security::provider::certpath::PKIX::-get0({const[class].FS-Param})) )  
		goto label_cond_18;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::PKIX::-get0({const[class].FS-Param})->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("BuilderParams.getTargetSubjectDN: non-fatal exception retrieving certs: ")))->append(e)->toString());
	e->printStackTrace();
	goto label_goto_18;
	// 270    .line 268
	// 271    .end local v2    # "e":Ljava/security/cert/CertStoreException;
	// 272    .end local v3    # "store":Ljava/security/cert/CertStore;
label_cond_63:
	cVar1 = std::make_shared<java::security::InvalidAlgorithmParameterException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Could not determine unique target subject")));
	// throw
	throw cVar1;

}
// .method certStores()Ljava/util/List;
std::shared_ptr<java::util::List<java::security::cert::CertStore>> sun::security::provider::certpath::PKIX_S_BuilderParams::certStores()
{
	
	std::shared_ptr<java::util::ArrayList> cVar0;
	std::shared_ptr<sun::security::provider::certpath::PKIX_S_CertStoreComparator> cVar1;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 290        value = {
	// 291            "()",
	// 292            "Ljava/util/List",
	// 293            "<",
	// 294            "Ljava/security/cert/CertStore;",
	// 295            ">;"
	// 296        }
	// 297    .end annotation
	if ( this->stores )     
		goto label_cond_1c;
	cVar0 = std::make_shared<java::util::ArrayList>(this->params->getCertStores());
	this->stores = cVar0;
	cVar1 = std::make_shared<sun::security::provider::certpath::PKIX_S_CertStoreComparator>(0x0);
	java::util::Collections::sort(this->stores, cVar1);
label_cond_1c:
	return this->stores;

}
// .method maxPathLength()I
int sun::security::provider::certpath::PKIX_S_BuilderParams::maxPathLength()
{
	
	return this->params->getMaxPathLength();

}
// .method params()Ljava/security/cert/PKIXBuilderParameters;
std::shared_ptr<java::security::cert::PKIXBuilderParameters> sun::security::provider::certpath::PKIX_S_BuilderParams::params()
{
	
	return this->params;

}
// .method targetSubject()Ljavax/security/auth/x500/X500Principal;
std::shared_ptr<javax::security::auth::x500::X500Principal> sun::security::provider::certpath::PKIX_S_BuilderParams::targetSubject()
{
	
	return this->targetSubject;

}


