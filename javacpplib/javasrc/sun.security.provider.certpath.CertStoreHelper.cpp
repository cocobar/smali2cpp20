// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\CertStoreHelper.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.Exception.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.net.URI.h"
#include "java.security.AccessController.h"
#include "java.security.NoSuchAlgorithmException.h"
#include "java.security.PrivilegedActionException.h"
#include "java.security.cert.CertStore.h"
#include "java.security.cert.CertStoreException.h"
#include "java.security.cert.X509CRLSelector.h"
#include "java.security.cert.X509CertSelector.h"
#include "java.util.Collection.h"
#include "java.util.HashMap.h"
#include "java.util.Map.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.security.provider.certpath.CertStoreHelper_S_1.h"
#include "sun.security.provider.certpath.CertStoreHelper.h"
#include "sun.security.util.Cache.h"

static sun::security::provider::certpath::CertStoreHelper::NUM_TYPES = 0x2;
static sun::security::provider::certpath::CertStoreHelper::cache;
static sun::security::provider::certpath::CertStoreHelper::classMap;
// .method static synthetic -get0()Lsun/security/util/Cache;
std::shared_ptr<sun::security::util::Cache> sun::security::provider::certpath::CertStoreHelper::_get0()
{
	
	return sun::security::provider::certpath::CertStoreHelper::cache;

}
// .method static constructor <clinit>()V
void sun::security::provider::certpath::CertStoreHelper::static_cinit()
{
	
	int cVar0;
	std::shared_ptr<java::util::HashMap> cVar1;
	
	cVar0 = 0x2;
	cVar1 = std::make_shared<java::util::HashMap>(cVar0);
	sun::security::provider::certpath::CertStoreHelper::classMap = cVar1;
	sun::security::provider::certpath::CertStoreHelper::classMap->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("LDAP")), std::make_shared<java::lang::String>(std::make_shared<char[]>("sun.security.provider.certpath.ldap.LDAPCertStoreHelper")));
	sun::security::provider::certpath::CertStoreHelper::classMap->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("SSLServer")), std::make_shared<java::lang::String>(std::make_shared<char[]>("sun.security.provider.certpath.ssl.SSLServerCertStoreHelper")));
	sun::security::provider::certpath::CertStoreHelper::cache = sun::security::util::Cache::newSoftMemoryCache(cVar0);
	return;

}
// .method public constructor <init>()V
sun::security::provider::certpath::CertStoreHelper::CertStoreHelper()
{
	
	// 097    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static getInstance(Ljava/lang/String;)Lsun/security/provider/certpath/CertStoreHelper;
std::shared_ptr<sun::security::provider::certpath::CertStoreHelper> sun::security::provider::certpath::CertStoreHelper::getInstance(std::shared_ptr<java::lang::String> type)
{
	
	std::shared_ptr<sun::security::provider::certpath::CertStoreHelper> helper;
	std::shared_ptr<java::lang::String> cl;
	std::shared_ptr<java::security::NoSuchAlgorithmException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::security::NoSuchAlgorithmException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<sun::security::provider::certpath::CertStoreHelper_S_1> cVar2;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "type"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 106        value = {
	// 107            Ljava/security/NoSuchAlgorithmException;
	// 108        }
	// 109    .end annotation
	helper = sun::security::provider::certpath::CertStoreHelper::cache->get(type);
	helper->checkCast("sun::security::provider::certpath::CertStoreHelper");
	//    .local v2, "helper":Lsun/security/provider/certpath/CertStoreHelper;
	if ( !(helper) )  
		goto label_cond_b;
	return helper;
	// 128    .line 73
label_cond_b:
	cl = sun::security::provider::certpath::CertStoreHelper::classMap->get(type);
	cl->checkCast("java::lang::String");
	//    .local v0, "cl":Ljava/lang/String;
	if ( cl )     
		goto label_cond_2f;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::security::NoSuchAlgorithmException>(cVar1->append(type)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" not available")))->toString());
	// throw
	throw cVar0;
	// 167    .line 79
label_cond_2f:
	try {
	//label_try_start_2f:
	cVar2 = std::make_shared<sun::security::provider::certpath::CertStoreHelper_S_1>(cl, type);
	helper = java::security::AccessController::doPrivileged(cVar2);
	//    .end local v2    # "helper":Lsun/security/provider/certpath/CertStoreHelper;
	helper->checkCast("sun::security::provider::certpath::CertStoreHelper");
	//label_try_end_3a:
	}
	catch (java::security::PrivilegedActionException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3b;
	}
	//    .catch Ljava/security/PrivilegedActionException; {:try_start_2f .. :try_end_3a} :catch_3b
	//    .restart local v2    # "helper":Lsun/security/provider/certpath/CertStoreHelper;
	return helper;
	// 188    .line 94
	// 189    .end local v2    # "helper":Lsun/security/provider/certpath/CertStoreHelper;
label_catch_3b:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/security/PrivilegedActionException;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar3 = std::make_shared<java::security::NoSuchAlgorithmException>(cVar4->append(type)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" not available")))->toString(), getCatchExcetionFromList->getException());
	// throw
	throw cVar3;

}
// .method static isCausedByNetworkIssue(Ljava/lang/String;Ljava/security/cert/CertStoreException;)Z
bool sun::security::provider::certpath::CertStoreHelper::isCausedByNetworkIssue(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::security::cert::CertStoreException> cse)
{
	
	bool cVar1;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::io::IOException> t;
	
	//    .param p0, "type"    # Ljava/lang/String;
	//    .param p1, "cse"    # Ljava/security/cert/CertStoreException;
	cVar1 = 0x0;
	if ( !(type->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("LDAP")))) )  
		goto label_cond_13;
label_cond_a:
	try {
	//label_try_start_a:
	//    .local v0, "csh":Lsun/security/provider/certpath/CertStoreHelper;
	//label_try_end_11:
	}
	catch (java::security::NoSuchAlgorithmException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2e;
	}
	//    .catch Ljava/security/NoSuchAlgorithmException; {:try_start_a .. :try_end_11} :catch_2e
	return sun::security::provider::certpath::CertStoreHelper::getInstance(type)->isCausedByNetworkIssue(cse);
	// 260    .line 101
	// 261    .end local v0    # "csh":Lsun/security/provider/certpath/CertStoreHelper;
label_cond_13:
	if ( type->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("SSLServer"))) )     
		goto label_cond_a;
	if ( !(type->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("URI")))) )  
		goto label_cond_30;
	t = cse->getCause();
	//    .local v2, "t":Ljava/lang/Throwable;
	if ( !(t) )  
		goto label_cond_2d;
	cVar1 = t->instanceOf("java::io::IOException");
label_cond_2d:
	return cVar1;
	// 293    .line 107
	// 294    .end local v2    # "t":Ljava/lang/Throwable;
label_catch_2e:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "nsae":Ljava/security/NoSuchAlgorithmException;
	return cVar1;
	// 302    .line 115
	// 303    .end local v1    # "nsae":Ljava/security/NoSuchAlgorithmException;
label_cond_30:
	return cVar1;

}
// .method public abstract getCertStore(Ljava/net/URI;)Ljava/security/cert/CertStore;
std::shared_ptr<java::security::cert::CertStore> sun::security::provider::certpath::CertStoreHelper::getCertStore(std::shared_ptr<java::net::URI> var0)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 312        value = {
	// 313            Ljava/security/NoSuchAlgorithmException;,
	// 314            Ljava/security/InvalidAlgorithmParameterException;
	// 315        }
	// 316    .end annotation

}
// .method public abstract wrap(Ljava/security/cert/X509CRLSelector;Ljava/util/Collection;Ljava/lang/String;)Ljava/security/cert/X509CRLSelector;
std::shared_ptr<java::security::cert::X509CRLSelector> sun::security::provider::certpath::CertStoreHelper::wrap(std::shared_ptr<java::security::cert::X509CRLSelector> var0,std::shared_ptr<java::util::Collection<javax::security::auth::x500::X500Principal>> var1,std::shared_ptr<java::lang::String> var2)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 324        value = {
	// 325            "(",
	// 326            "Ljava/security/cert/X509CRLSelector;",
	// 327            "Ljava/util/Collection",
	// 328            "<",
	// 329            "Ljavax/security/auth/x500/X500Principal;",
	// 330            ">;",
	// 331            "Ljava/lang/String;",
	// 332            ")",
	// 333            "Ljava/security/cert/X509CRLSelector;"
	// 334        }
	// 335    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 338        value = {
	// 339            Ljava/io/IOException;
	// 340        }
	// 341    .end annotation

}
// .method public abstract wrap(Ljava/security/cert/X509CertSelector;Ljavax/security/auth/x500/X500Principal;Ljava/lang/String;)Ljava/security/cert/X509CertSelector;
std::shared_ptr<java::security::cert::X509CertSelector> sun::security::provider::certpath::CertStoreHelper::wrap(std::shared_ptr<java::security::cert::X509CertSelector> var0,std::shared_ptr<javax::security::auth::x500::X500Principal> var1,std::shared_ptr<java::lang::String> var2)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 346        value = {
	// 347            Ljava/io/IOException;
	// 348        }
	// 349    .end annotation

}


