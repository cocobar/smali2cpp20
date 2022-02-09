// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\URICertStore.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.InputStream.h"
#include "java.lang.Exception.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.Throwable.h"
#include "java.net.HttpURLConnection.h"
#include "java.net.URI.h"
#include "java.net.URL.h"
#include "java.net.URLConnection.h"
#include "java.security.AccessController.h"
#include "java.security.InvalidAlgorithmParameterException.h"
#include "java.security.Provider.h"
#include "java.security.cert.CRL.h"
#include "java.security.cert.CRLException.h"
#include "java.security.cert.CRLSelector.h"
#include "java.security.cert.CertSelector.h"
#include "java.security.cert.CertStore.h"
#include "java.security.cert.CertStoreException.h"
#include "java.security.cert.CertStoreParameters.h"
#include "java.security.cert.CertStoreSpi.h"
#include "java.security.cert.CertificateException.h"
#include "java.security.cert.CertificateFactory.h"
#include "java.security.cert.X509CRL.h"
#include "java.security.cert.X509CRLSelector.h"
#include "java.security.cert.X509CertSelector.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.ArrayList.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "java.util.Locale.h"
#include "java.util.Set.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.security.action.GetIntegerAction.h"
#include "sun.security.provider.certpath.CertStoreHelper.h"
#include "sun.security.provider.certpath.PKIX_S_CertStoreTypeException.h"
#include "sun.security.provider.certpath.URICertStore_S_UCS.h"
#include "sun.security.provider.certpath.URICertStore_S_URICertStoreParameters.h"
#include "sun.security.provider.certpath.URICertStore.h"
#include "sun.security.util.Cache.h"
#include "sun.security.util.Debug.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AccessDescription.h"
#include "sun.security.x509.GeneralName.h"
#include "sun.security.x509.GeneralNameInterface.h"
#include "sun.security.x509.URIName.h"

static sun::security::provider::certpath::URICertStore::CACHE_SIZE = 0xb9;
static sun::security::provider::certpath::URICertStore::CHECK_INTERVAL = 0x7530;
static sun::security::provider::certpath::URICertStore::CRL_CONNECT_TIMEOUT;
static sun::security::provider::certpath::URICertStore::DEFAULT_CRL_CONNECT_TIMEOUT = 0x3a98;
static sun::security::provider::certpath::URICertStore::certStoreCache;
static sun::security::provider::certpath::URICertStore::debug;
// .method static constructor <clinit>()V
void sun::security::provider::certpath::URICertStore::static_cinit()
{
	
	sun::security::provider::certpath::URICertStore::debug = sun::security::util::Debug::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("certpath")));
	sun::security::provider::certpath::URICertStore::CRL_CONNECT_TIMEOUT = sun::security::provider::certpath::URICertStore::initializeTimeout({const[class].FS-Param});
	sun::security::provider::certpath::URICertStore::certStoreCache = sun::security::util::Cache::newSoftMemoryCache(0xb9);
	return;

}
// .method constructor <init>(Ljava/security/cert/CertStoreParameters;)V
sun::security::provider::certpath::URICertStore::URICertStore(std::shared_ptr<java::security::cert::CertStoreParameters> params)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<java::security::InvalidAlgorithmParameterException> cVar2;
	std::shared_ptr<java::lang::RuntimeException> cVar3;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "params"    # Ljava/security/cert/CertStoreParameters;
	//    .annotation system Ldalvik/annotation/Throws;
	// 108        value = {
	// 109            Ljava/security/InvalidAlgorithmParameterException;,
	// 110            Ljava/security/NoSuchAlgorithmException;
	// 111        }
	// 112    .end annotation
	cVar0 = 0x1;
	cVar1 = 0x0;
	java::security::cert::CertStoreSpi::(params);
	this->certs = java::util::Collections::emptySet({const[class].FS-Param});
	this->ldap = cVar1;
	if ( params->instanceOf("sun::security::provider::certpath::URICertStore_S_URICertStoreParameters") )     
		goto label_cond_1a;
	cVar2 = std::make_shared<java::security::InvalidAlgorithmParameterException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("params must be instanceof URICertStoreParameters")));
	// throw
	throw cVar2;
	// 148    .line 164
label_cond_1a:
	params->checkCast("sun::security::provider::certpath::URICertStore_S_URICertStoreParameters");
	//    .end local p1    # "params":Ljava/security/cert/CertStoreParameters;
	this->uri = sun::security::provider::certpath::URICertStore_S_URICertStoreParameters::-get0(params);
	if ( !(this->uri->getScheme()->toLowerCase(java::util::Locale::ENGLISH)->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("ldap")))) )  
		goto label_cond_66;
	this->ldap = cVar0;
	this->ldapHelper = sun::security::provider::certpath::CertStoreHelper::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("LDAP")));
	this->ldapCertStore = this->ldapHelper->getCertStore(this->uri);
	this->ldapPath = this->uri->getPath();
	if ( this->ldapPath->charAt(cVar1) != 0x2f )
		goto label_cond_66;
	this->ldapPath = this->ldapPath->substring(cVar0);
label_cond_66:
	try {
	//label_try_start_66:
	this->factory = java::security::cert::CertificateFactory::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("X.509")));
	//label_try_end_6f:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_70;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_66 .. :try_end_6f} :catch_70
	return;
	// 248    .line 178
label_catch_70:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/security/cert/CertificateException;
	cVar3 = std::make_shared<java::lang::RuntimeException>();
	// throw
	throw cVar3;

}
// .method static declared-synchronized getInstance(Lsun/security/provider/certpath/URICertStore$URICertStoreParameters;)Ljava/security/cert/CertStore;
std::shared_ptr<java::security::cert::CertStore> sun::security::provider::certpath::URICertStore::getInstance(std::shared_ptr<sun::security::provider::certpath::URICertStore_S_URICertStoreParameters> params)
{
	
	std::shared_ptr<sun::security::provider::certpath::URICertStore> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::security::cert::CertStore> ucs;
	std::shared_ptr<sun::security::provider::certpath::URICertStore_S_UCS> ucs;
	std::shared_ptr<sun::security::provider::certpath::URICertStore> cVar2;
	
	//    .param p0, "params"    # Lsun/security/provider/certpath/URICertStore$URICertStoreParameters;
	//    .annotation system Ldalvik/annotation/Throws;
	// 265        value = {
	// 266            Ljava/security/NoSuchAlgorithmException;,
	// 267            Ljava/security/InvalidAlgorithmParameterException;
	// 268        }
	// 269    .end annotation
	cVar0 = sun::security::provider::certpath::URICertStore();
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	if ( !(sun::security::provider::certpath::URICertStore::debug) )  
		goto label_cond_24;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::URICertStore::debug->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("CertStore URI:")))->append(sun::security::provider::certpath::URICertStore_S_URICertStoreParameters::-get0(params))->toString());
label_cond_24:
	ucs = sun::security::provider::certpath::URICertStore::certStoreCache->get(params);
	ucs->checkCast("java::security::cert::CertStore");
	//    .local v0, "ucs":Ljava/security/cert/CertStore;
	if ( ucs )     
		goto label_cond_43;
	//    .end local v0    # "ucs":Ljava/security/cert/CertStore;
	cVar2 = std::make_shared<sun::security::provider::certpath::URICertStore>(params);
	ucs = std::make_shared<sun::security::provider::certpath::URICertStore_S_UCS>(cVar2, 0x0, std::make_shared<java::lang::String>(std::make_shared<char[]>("URI")), params);
	//    .restart local v0    # "ucs":Ljava/security/cert/CertStore;
	sun::security::provider::certpath::URICertStore::certStoreCache->put(params, ucs);
	//label_try_end_41:
	}
	catch (...){
		goto label_catchall_50;
	}
	//    .catchall {:try_start_3 .. :try_end_41} :catchall_50
label_cond_41:
label_goto_41:
	cVar0->monitor_exit();
	return ucs;
	// 352    .line 199
label_cond_43:
	try {
	//label_try_start_43:
	if ( !(sun::security::provider::certpath::URICertStore::debug) )  
		goto label_cond_41;
	sun::security::provider::certpath::URICertStore::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("URICertStore.getInstance: cache hit")));
	//label_try_end_4f:
	}
	catch (...){
		goto label_catchall_50;
	}
	//    .catchall {:try_start_43 .. :try_end_4f} :catchall_50
	goto label_goto_41;
	// 370    .end local v0    # "ucs":Ljava/security/cert/CertStore;
label_catchall_50:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method static getInstance(Lsun/security/x509/AccessDescription;)Ljava/security/cert/CertStore;
std::shared_ptr<java::security::cert::CertStore> sun::security::provider::certpath::URICertStore::getInstance(std::shared_ptr<sun::security::x509::AccessDescription> ad)
{
	
	std::shared_ptr<java::security::cert::CertStore> cVar0;
	std::shared_ptr<sun::security::x509::URIName> gn;
	std::shared_ptr<java::lang::Object> ex;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<sun::security::provider::certpath::URICertStore_S_URICertStoreParameters> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "ad"    # Lsun/security/x509/AccessDescription;
	cVar0 = 0x0;
	if ( ad->getAccessMethod()->equals(sun::security::x509::AccessDescription::Ad_CAISSUERS_Id) )     
		goto label_cond_e;
	return cVar0;
	// 404    .line 215
label_cond_e:
	gn = ad->getAccessLocation()->getName();
	//    .local v1, "gn":Lsun/security/x509/GeneralNameInterface;
	if ( gn->instanceOf("sun::security::x509::URIName") )     
		goto label_cond_1b;
	return cVar0;
	// 423    .line 219
label_cond_1b:
	gn->checkCast("sun::security::x509::URIName");
	//    .end local v1    # "gn":Lsun/security/x509/GeneralNameInterface;
	//    .local v2, "uri":Ljava/net/URI;
	try {
	//label_try_start_21:
	cVar1 = std::make_shared<sun::security::provider::certpath::URICertStore_S_URICertStoreParameters>(gn->getURI());
	//label_try_end_29:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2b;
	}
	//    .catch Ljava/lang/Exception; {:try_start_21 .. :try_end_29} :catch_2b
	return sun::security::provider::certpath::URICertStore::getInstance(cVar1);
	// 448    .line 223
label_catch_2b:
	// move-exception
	ex = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "ex":Ljava/lang/Exception;
	if ( !(sun::security::provider::certpath::URICertStore::debug) )  
		goto label_cond_4c;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::URICertStore::debug->println(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("exception creating CertStore: ")))->append(ex)->toString());
	ex->printStackTrace();
label_cond_4c:
	return cVar0;

}
// .method private static getMatchingCRLs(Ljava/security/cert/X509CRL;Ljava/security/cert/CRLSelector;)Ljava/util/Collection;
std::shared_ptr<java::util::Collection<java::security::cert::X509CRL>> sun::security::provider::certpath::URICertStore::getMatchingCRLs(std::shared_ptr<java::security::cert::X509CRL> crl,std::shared_ptr<java::security::cert::CRLSelector> selector)
{
	
	//    .param p0, "crl"    # Ljava/security/cert/X509CRL;
	//    .param p1, "selector"    # Ljava/security/cert/CRLSelector;
	//    .annotation system Ldalvik/annotation/Signature;
	// 494        value = {
	// 495            "(",
	// 496            "Ljava/security/cert/X509CRL;",
	// 497            "Ljava/security/cert/CRLSelector;",
	// 498            ")",
	// 499            "Ljava/util/Collection",
	// 500            "<",
	// 501            "Ljava/security/cert/X509CRL;",
	// 502            ">;"
	// 503        }
	// 504    .end annotation
	if ( !(selector) )  
		goto label_cond_a;
	if ( !(crl) )  
		goto label_cond_f;
	if ( !(selector->match(crl)) )  
		goto label_cond_f;
label_cond_a:
	return java::util::Collections::singletonList(crl);
	// 526    .line 444
label_cond_f:
	return java::util::Collections::emptyList({const[class].FS-Param});

}
// .method private static getMatchingCerts(Ljava/util/Collection;Ljava/security/cert/CertSelector;)Ljava/util/Collection;
std::shared_ptr<java::util::Collection<java::security::cert::X509Certificate>> sun::security::provider::certpath::URICertStore::getMatchingCerts(std::shared_ptr<java::util::Collection<java::security::cert::X509Certificate>> certs,std::shared_ptr<java::security::cert::CertSelector> selector)
{
	
	std::shared_ptr<java::util::ArrayList> matchedCerts;
	std::shared_ptr<java::util::Iterator> cert_S_iterator;
	std::shared_ptr<java::security::cert::X509Certificate> cert;
	
	//    .param p1, "selector"    # Ljava/security/cert/CertSelector;
	//    .annotation system Ldalvik/annotation/Signature;
	// 539        value = {
	// 540            "(",
	// 541            "Ljava/util/Collection",
	// 542            "<",
	// 543            "Ljava/security/cert/X509Certificate;",
	// 544            ">;",
	// 545            "Ljava/security/cert/CertSelector;",
	// 546            ")",
	// 547            "Ljava/util/Collection",
	// 548            "<",
	// 549            "Ljava/security/cert/X509Certificate;",
	// 550            ">;"
	// 551        }
	// 552    .end annotation
	//    .local p0, "certs":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/security/cert/X509Certificate;>;"
	if ( selector )     
		goto label_cond_3;
	return certs;
	// 562    .line 333
label_cond_3:
	matchedCerts = std::make_shared<java::util::ArrayList>(certs->size());
	//    .local v2, "matchedCerts":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/X509Certificate;>;"
	cert_S_iterator = certs->iterator();
	//    .local v1, "cert$iterator":Ljava/util/Iterator;
label_cond_10:
label_goto_10:
	if ( !(cert_S_iterator->hasNext()) )  
		goto label_cond_26;
	cert = cert_S_iterator->next();
	cert->checkCast("java::security::cert::X509Certificate");
	//    .local v0, "cert":Ljava/security/cert/X509Certificate;
	if ( !(selector->match(cert)) )  
		goto label_cond_10;
	matchedCerts->add(cert);
	goto label_goto_10;
	// 606    .line 339
	// 607    .end local v0    # "cert":Ljava/security/cert/X509Certificate;
label_cond_26:
	return matchedCerts;

}
// .method private static initializeTimeout()I
int sun::security::provider::certpath::URICertStore::initializeTimeout()
{
	
	std::shared_ptr<sun::security::action::GetIntegerAction> cVar0;
	std::shared_ptr<java::lang::Integer> tmp;
	
	cVar0 = std::make_shared<sun::security::action::GetIntegerAction>(std::make_shared<java::lang::String>(std::make_shared<char[]>("com.sun.security.crl.timeout")));
	tmp = java::security::AccessController::doPrivileged(cVar0);
	tmp->checkCast("java::lang::Integer");
	//    .local v0, "tmp":Ljava/lang/Integer;
	if ( !(tmp) )  
		goto label_cond_16;
	if ( tmp->intValue() >= 0 )
		goto label_cond_19;
label_cond_16:
	return 0x3a98;
	// 646    .line 149
label_cond_19:
	return ( tmp->intValue() * 0x3e8);

}
// .method public declared-synchronized engineGetCRLs(Ljava/security/cert/CRLSelector;)Ljava/util/Collection;
std::shared_ptr<java::util::Collection<java::security::cert::X509CRL>> sun::security::provider::certpath::URICertStore::engineGetCRLs(std::shared_ptr<java::security::cert::CRLSelector> selector)
{
	
	std::shared_ptr<java::security::cert::X509CRLSelector> cVar0;
	std::shared_ptr<java::security::cert::CertStoreException> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<sun::security::provider::certpath::PKIX_S_CertStoreTypeException> cVar2;
	long long time;
	std::shared_ptr<java::lang::Exception> e;
	std::shared_ptr<sun::security::provider::certpath::PKIX_S_CertStoreTypeException> cVar4;
	std::shared_ptr<java::security::cert::CertStoreException> cVar5;
	std::shared_ptr<java::net::URLConnection> connection;
	long long oldLastModified;
	int cVar15;
	std::shared_ptr<java::io::InputStream> in;
	std::shared_ptr<java::lang::Object> cVar11;
	std::shared_ptr<java::lang::Object> cVar13;
	std::shared_ptr<java::lang::Throwable> cVar14;
	std::shared_ptr<java::lang::Object> catchall;
	std::shared_ptr<java::net::HttpURLConnection> cVar7;
	std::shared_ptr<java::security::cert::X509CRL> cVar9;
	
	//    .param p1, "selector"    # Ljava/security/cert/CRLSelector;
	//    .annotation system Ldalvik/annotation/Signature;
	// 663        value = {
	// 664            "(",
	// 665            "Ljava/security/cert/CRLSelector;",
	// 666            ")",
	// 667            "Ljava/util/Collection",
	// 668            "<",
	// 669            "Ljava/security/cert/X509CRL;",
	// 670            ">;"
	// 671        }
	// 672    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 675        value = {
	// 676            Ljava/security/cert/CertStoreException;
	// 677        }
	// 678    .end annotation
	this->monitor_enter();
	try {
	//label_try_start_1:
	if ( !(this->ldap) )  
		goto label_cond_40;
	cVar0 = selector;
	cVar0->checkCast("java::security::cert::X509CRLSelector");
	//label_try_end_c:
	}
	catch (...){
		goto label_catchall_31;
	}
	//    .catchall {:try_start_1 .. :try_end_c} :catchall_31
	//    .local v14, "xsel":Ljava/security/cert/X509CRLSelector;
	try {
	//label_try_start_c:
	//label_try_end_1f:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2a;
	}
	catch (...){
		goto label_catchall_31;
	}
	//    .catch Ljava/io/IOException; {:try_start_c .. :try_end_1f} :catch_2a
	//    .catchall {:try_start_c .. :try_end_1f} :catchall_31
	try {
	//label_try_start_20:
	//label_try_end_27:
	}
	catch (java::security::cert::CertStoreException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_34;
	}
	catch (...){
		goto label_catchall_31;
	}
	//    .catch Ljava/security/cert/CertStoreException; {:try_start_20 .. :try_end_27} :catch_34
	//    .catchall {:try_start_20 .. :try_end_27} :catchall_31
	this->monitor_exit();
	return this->ldapCertStore->getCRLs(this->ldapHelper->wrap(cVar0, 0x0, this->ldapPath));
	// 743    .line 365
label_catch_2a:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v9, "ioe":Ljava/io/IOException;
	try {
	//label_try_start_2b:
	cVar1 = std::make_shared<java::security::cert::CertStoreException>(getCatchExcetionFromList);
	// throw
	throw cVar1;
	// 755    :try_end_31
	// 756    .catchall {:try_start_2b .. :try_end_31} :catchall_31
	// 758    .end local v9    # "ioe":Ljava/io/IOException;
	// 759    .end local v14    # "xsel":Ljava/security/cert/X509CRLSelector;
label_catchall_31:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 767    .line 373
	// 768    .restart local v14    # "xsel":Ljava/security/cert/X509CRLSelector;
label_catch_34:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v5, "cse":Ljava/security/cert/CertStoreException;
	try {
	//label_try_start_35:
	cVar2 = std::make_shared<sun::security::provider::certpath::PKIX_S_CertStoreTypeException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LDAP")), getCatchExcetionFromList);
	// throw
	throw cVar2;
	// 785    .line 381
	// 786    .end local v5    # "cse":Ljava/security/cert/CertStoreException;
	// 787    .end local v14    # "xsel":Ljava/security/cert/X509CRLSelector;
label_cond_40:
	time = java::lang::System::currentTimeMillis({const[class].FS-Param});
	//    .local v12, "time":J
	if ( ((time - this->lastChecked) > 0x7530) >= 0 )
		goto label_cond_6a;
	if ( !(sun::security::provider::certpath::URICertStore::debug) )  
		goto label_cond_5e;
	sun::security::provider::certpath::URICertStore::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Returning CRL from cache")));
label_cond_5e:
	//label_try_end_67:
	}
	catch (...){
		goto label_catchall_31;
	}
	//    .catchall {:try_start_35 .. :try_end_67} :catchall_31
	this->monitor_exit();
	return sun::security::provider::certpath::URICertStore::getMatchingCRLs(this->crl, selector);
	// 839    .line 388
label_cond_6a:
	try {
	//label_try_start_6a:
	this->lastChecked = time;
	//label_try_end_6e:
	}
	catch (...){
		goto label_catchall_31;
	}
	//    .catchall {:try_start_6a .. :try_end_6e} :catchall_31
	try {
	//label_try_start_6e:
	connection = this->uri->toURL()->openConnection();
	//    .local v4, "connection":Ljava/net/URLConnection;
	if ( !((this->lastModified > 0x0)) )  
		goto label_cond_91;
	connection->setIfModifiedSince(this->lastModified);
label_cond_91:
	oldLastModified = this->lastModified;
	//    .local v10, "oldLastModified":J
	connection->setConnectTimeout(sun::security::provider::certpath::URICertStore::CRL_CONNECT_TIMEOUT);
	//label_try_end_9a:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_db;
	}
	catch (java::security::cert::CRLException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_db;
	}
	catch (...){
		goto label_catchall_31;
	}
	//    .catch Ljava/io/IOException; {:try_start_6e .. :try_end_9a} :catch_db
	//    .catch Ljava/security/cert/CRLException; {:try_start_6e .. :try_end_9a} :catch_db
	//    .catchall {:try_start_6e .. :try_end_9a} :catchall_31
	cVar15 = 0x0;
	in = 0x0;
	//    .local v8, "in":Ljava/io/InputStream;
	try {
	//label_try_start_9d:
	in = connection->getInputStream();
	//    .local v8, "in":Ljava/io/InputStream;
	this->lastModified = connection->getLastModified();
	if ( !((oldLastModified > 0x0)) )  
		goto label_cond_142;
	if ( (oldLastModified > this->lastModified) )     
		goto label_cond_10c;
	if ( !(sun::security::provider::certpath::URICertStore::debug) )  
		goto label_cond_c9;
	sun::security::provider::certpath::URICertStore::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Not modified, using cached copy")));
label_cond_c9:
	//label_try_end_d2:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_168;
	}
	catch (...){
		goto label_catchall_196;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_9d .. :try_end_d2} :catch_168
	//    .catchall {:try_start_9d .. :try_end_d2} :catchall_196
	if ( !(in) )  
		goto label_cond_d8;
	try {
	//label_try_start_d5:
	in->close();
	//label_try_end_d8:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_108;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_db;
	}
	catch (java::security::cert::CRLException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_db;
	}
	catch (...){
		goto label_catchall_31;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_d5 .. :try_end_d8} :catch_108
	//    .catch Ljava/io/IOException; {:try_start_d5 .. :try_end_d8} :catch_db
	//    .catch Ljava/security/cert/CRLException; {:try_start_d5 .. :try_end_d8} :catch_db
	//    .catchall {:try_start_d5 .. :try_end_d8} :catchall_31
label_cond_d8:
label_goto_d8:
	if ( !(cVar15) )  
		goto label_cond_10a;
	try {
	//label_try_start_da:
	// throw
	throw cVar15;
	// 990    :try_end_db
	// 991    .catch Ljava/io/IOException; {:try_start_da .. :try_end_db} :catch_db
	// 992    .catch Ljava/security/cert/CRLException; {:try_start_da .. :try_end_db} :catch_db
	// 993    .catchall {:try_start_da .. :try_end_db} :catchall_31
	// 995    .line 422
	// 996    .end local v4    # "connection":Ljava/net/URLConnection;
	// 997    .end local v8    # "in":Ljava/io/InputStream;
	// 998    .end local v10    # "oldLastModified":J
label_catch_db:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v6, "e":Ljava/lang/Exception;
	try {
	//label_try_start_dc:
	if ( !(sun::security::provider::certpath::URICertStore::debug) )  
		goto label_cond_eb;
	sun::security::provider::certpath::URICertStore::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Exception fetching CRL:")));
	e->printStackTrace();
label_cond_eb:
	this->lastModified = 0x0;
	this->crl = 0x0;
	var105 = cVar5(e);
	cVar4 = std::make_shared<sun::security::provider::certpath::PKIX_S_CertStoreTypeException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("URI")), cVar5);
	// throw
	throw cVar4;
	// 1052    :try_end_108
	// 1053    .catchall {:try_start_dc .. :try_end_108} :catchall_31
	// 1055    .line 420
	// 1056    .end local v6    # "e":Ljava/lang/Exception;
	// 1057    .restart local v4    # "connection":Ljava/net/URLConnection;
	// 1058    .restart local v8    # "in":Ljava/io/InputStream;
	// 1059    .restart local v10    # "oldLastModified":J
label_catch_108:
	// move-exception
	cVar15 = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_d8;
label_cond_10a:
	this->monitor_exit();
	return sun::security::provider::certpath::URICertStore::getMatchingCRLs(this->crl, selector);
	// 1071    .line 404
label_cond_10c:
	try {
	//label_try_start_10c:
	if ( !(connection->instanceOf("java::net::HttpURLConnection")) )  
		goto label_cond_142;
	cVar7 = connection;
	cVar7->checkCast("java::net::HttpURLConnection");
	//    .local v7, "hconn":Ljava/net/HttpURLConnection;
	if ( cVar7->getResponseCode() != 0x130 )
		goto label_cond_142;
	if ( !(sun::security::provider::certpath::URICertStore::debug) )  
		goto label_cond_12c;
	sun::security::provider::certpath::URICertStore::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Not modified, using cached copy")));
label_cond_12c:
	//label_try_end_135:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_168;
	}
	catch (...){
		goto label_catchall_196;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_10c .. :try_end_135} :catch_168
	//    .catchall {:try_start_10c .. :try_end_135} :catchall_196
	if ( !(in) )  
		goto label_cond_13b;
	try {
	//label_try_start_138:
	in->close();
	//label_try_end_13b:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_13e;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_db;
	}
	catch (java::security::cert::CRLException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_db;
	}
	catch (...){
		goto label_catchall_31;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_138 .. :try_end_13b} :catch_13e
	//    .catch Ljava/io/IOException; {:try_start_138 .. :try_end_13b} :catch_db
	//    .catch Ljava/security/cert/CRLException; {:try_start_138 .. :try_end_13b} :catch_db
	//    .catchall {:try_start_138 .. :try_end_13b} :catchall_31
label_cond_13b:
label_goto_13b:
	if ( !(cVar15) )  
		goto label_cond_140;
	try {
	//label_try_start_13d:
	// throw
	throw cVar15;
	// 1145    :try_end_13e
	// 1146    .catch Ljava/io/IOException; {:try_start_13d .. :try_end_13e} :catch_db
	// 1147    .catch Ljava/security/cert/CRLException; {:try_start_13d .. :try_end_13e} :catch_db
	// 1148    .catchall {:try_start_13d .. :try_end_13e} :catchall_31
label_catch_13e:
	// move-exception
	cVar15 = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_13b;
label_cond_140:
	this->monitor_exit();
	return sun::security::provider::certpath::URICertStore::getMatchingCRLs(this->crl, selector);
	// 1161    .line 416
	// 1162    .end local v7    # "hconn":Ljava/net/HttpURLConnection;
label_cond_142:
	try {
	//label_try_start_142:
	if ( !(sun::security::provider::certpath::URICertStore::debug) )  
		goto label_cond_150;
	sun::security::provider::certpath::URICertStore::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Downloading new CRL...")));
label_cond_150:
	cVar9 = this->factory->generateCRL(in);
	cVar9->checkCast("java::security::cert::X509CRL");
	this->crl = cVar9;
	//label_try_end_15e:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_168;
	}
	catch (...){
		goto label_catchall_196;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_142 .. :try_end_15e} :catch_168
	//    .catchall {:try_start_142 .. :try_end_15e} :catchall_196
	if ( !(in) )  
		goto label_cond_163;
	try {
	//label_try_start_160:
	in->close();
	//label_try_end_163:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_166;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_db;
	}
	catch (java::security::cert::CRLException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_db;
	}
	catch (...){
		goto label_catchall_31;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_160 .. :try_end_163} :catch_166
	//    .catch Ljava/io/IOException; {:try_start_160 .. :try_end_163} :catch_db
	//    .catch Ljava/security/cert/CRLException; {:try_start_160 .. :try_end_163} :catch_db
	//    .catchall {:try_start_160 .. :try_end_163} :catchall_31
label_cond_163:
label_goto_163:
	if ( !(cVar15) )  
		goto label_cond_18a;
	try {
	//label_try_start_165:
	// throw
	throw cVar15;
	// 1214    :try_end_166
	// 1215    .catch Ljava/io/IOException; {:try_start_165 .. :try_end_166} :catch_db
	// 1216    .catch Ljava/security/cert/CRLException; {:try_start_165 .. :try_end_166} :catch_db
	// 1217    .catchall {:try_start_165 .. :try_end_166} :catchall_31
label_catch_166:
	// move-exception
	cVar15 = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_163;
	// 1224    .end local v8    # "in":Ljava/io/InputStream;
label_catch_168:
	// move-exception
	cVar11 = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	try {
	//label_try_start_169:
	// throw
	throw cVar11;
	// 1230    :try_end_16a
	// 1231    .catchall {:try_start_169 .. :try_end_16a} :catchall_16a
label_catchall_16a:
	// move-exception
	
	tryCatchExcetionList.pop_back();
	cVar15 = cVar11;
	cVar13 = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
label_goto_171:
	if ( !(in) )  
		goto label_cond_176;
	try {
	//label_try_start_173:
	in->close();
	//label_try_end_176:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_179;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_db;
	}
	catch (java::security::cert::CRLException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_db;
	}
	catch (...){
		goto label_catchall_31;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_173 .. :try_end_176} :catch_179
	//    .catch Ljava/io/IOException; {:try_start_173 .. :try_end_176} :catch_db
	//    .catch Ljava/security/cert/CRLException; {:try_start_173 .. :try_end_176} :catch_db
	//    .catchall {:try_start_173 .. :try_end_176} :catchall_31
label_cond_176:
label_goto_176:
	if ( !(cVar15) )  
		goto label_cond_189;
	try {
	//label_try_start_178:
	// throw
	throw cVar15;
label_catch_179:
	// move-exception
	cVar14 = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	if ( cVar15 )     
		goto label_cond_17f;
	cVar15 = cVar14;
	goto label_goto_176;
label_cond_17f:
	if ( cVar15 == cVar14 )
		goto label_cond_176;
	cVar15->addSuppressed(cVar14);
	goto label_goto_176;
label_cond_189:
	// throw
	throw cVar13;
	// 1283    .line 421
	// 1284    .restart local v8    # "in":Ljava/io/InputStream;
label_cond_18a:
	//label_try_end_193:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_db;
	}
	catch (java::security::cert::CRLException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_db;
	}
	catch (...){
		goto label_catchall_31;
	}
	//    .catch Ljava/io/IOException; {:try_start_178 .. :try_end_193} :catch_db
	//    .catch Ljava/security/cert/CRLException; {:try_start_178 .. :try_end_193} :catch_db
	//    .catchall {:try_start_178 .. :try_end_193} :catchall_31
	this->monitor_exit();
	return sun::security::provider::certpath::URICertStore::getMatchingCRLs(this->crl, selector);
	// 1304    .line 420
	// 1305    .end local v8    # "in":Ljava/io/InputStream;
label_catchall_196:
	// move-exception
	catchall = tryCatchExcetionList.back();
	goto label_goto_171;

}
// .method public declared-synchronized engineGetCertificates(Ljava/security/cert/CertSelector;)Ljava/util/Collection;
std::shared_ptr<java::util::Collection<java::security::cert::X509Certificate>> sun::security::provider::certpath::URICertStore::engineGetCertificates(std::shared_ptr<java::security::cert::CertSelector> selector)
{
	
	std::shared_ptr<java::security::cert::X509CertSelector> cVar0;
	std::shared_ptr<java::security::cert::X509CertSelector> xsel;
	std::shared_ptr<java::security::cert::CertStoreException> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	long long time;
	std::shared_ptr<java::net::URLConnection> connection;
	long long oldLastModified;
	int cVar11;
	std::shared_ptr<java::io::InputStream> in;
	std::shared_ptr<java::lang::Object> cVar7;
	std::shared_ptr<java::lang::Object> cVar9;
	std::shared_ptr<java::lang::Throwable> cVar10;
	std::shared_ptr<java::lang::Object> catchall;
	std::shared_ptr<java::net::HttpURLConnection> cVar4;
	
	//    .param p1, "selector"    # Ljava/security/cert/CertSelector;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1316        value = {
	// 1317            "(",
	// 1318            "Ljava/security/cert/CertSelector;",
	// 1319            ")",
	// 1320            "Ljava/util/Collection",
	// 1321            "<",
	// 1322            "Ljava/security/cert/X509Certificate;",
	// 1323            ">;"
	// 1324        }
	// 1325    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 1328        value = {
	// 1329            Ljava/security/cert/CertStoreException;
	// 1330        }
	// 1331    .end annotation
	this->monitor_enter();
	try {
	//label_try_start_1:
	if ( !(this->ldap) )  
		goto label_cond_30;
	cVar0 = selector;
	cVar0->checkCast("java::security::cert::X509CertSelector");
	xsel = cVar0;
	//label_try_end_c:
	}
	catch (...){
		goto label_catchall_2d;
	}
	//    .catchall {:try_start_1 .. :try_end_c} :catchall_2d
	//    .local v7, "xsel":Ljava/security/cert/X509CertSelector;
	try {
	//label_try_start_c:
	//label_try_end_1b:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_26;
	}
	catch (...){
		goto label_catchall_2d;
	}
	//    .catch Ljava/io/IOException; {:try_start_c .. :try_end_1b} :catch_26
	//    .catchall {:try_start_c .. :try_end_1b} :catchall_2d
	try {
	//label_try_start_1c:
	//label_try_end_23:
	}
	catch (...){
		goto label_catchall_2d;
	}
	//    .catchall {:try_start_1c .. :try_end_23} :catchall_2d
	this->monitor_exit();
	return this->ldapCertStore->getCertificates(this->ldapHelper->wrap(xsel, xsel->getSubject(), this->ldapPath));
	// 1392    .line 255
label_catch_26:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v6, "ioe":Ljava/io/IOException;
	try {
	//label_try_start_27:
	cVar1 = std::make_shared<java::security::cert::CertStoreException>(getCatchExcetionFromList);
	// throw
	throw cVar1;
	// 1404    :try_end_2d
	// 1405    .catchall {:try_start_27 .. :try_end_2d} :catchall_2d
	// 1407    .end local v6    # "ioe":Ljava/io/IOException;
	// 1408    .end local v7    # "xsel":Ljava/security/cert/X509CertSelector;
label_catchall_2d:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 1416    .line 268
label_cond_30:
	try {
	//label_try_start_30:
	time = java::lang::System::currentTimeMillis({const[class].FS-Param});
	//    .local v10, "time":J
	if ( ((time - this->lastChecked) > 0x7530) >= 0 )
		goto label_cond_58;
	if ( !(sun::security::provider::certpath::URICertStore::debug) )  
		goto label_cond_4c;
	sun::security::provider::certpath::URICertStore::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Returning certificates from cache")));
label_cond_4c:
	//label_try_end_55:
	}
	catch (...){
		goto label_catchall_2d;
	}
	//    .catchall {:try_start_30 .. :try_end_55} :catchall_2d
	this->monitor_exit();
	return sun::security::provider::certpath::URICertStore::getMatchingCerts(this->certs, selector);
	// 1467    .line 275
label_cond_58:
	try {
	//label_try_start_58:
	this->lastChecked = time;
	//label_try_end_5c:
	}
	catch (...){
		goto label_catchall_2d;
	}
	//    .catchall {:try_start_58 .. :try_end_5c} :catchall_2d
	try {
	//label_try_start_5c:
	connection = this->uri->toURL()->openConnection();
	//    .local v2, "connection":Ljava/net/URLConnection;
	if ( !((this->lastModified > 0x0)) )  
		goto label_cond_79;
	connection->setIfModifiedSince(this->lastModified);
label_cond_79:
	oldLastModified = this->lastModified;
	//label_try_end_7d:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_b7;
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_b7;
	}
	catch (...){
		goto label_catchall_2d;
	}
	//    .catch Ljava/io/IOException; {:try_start_5c .. :try_end_7d} :catch_b7
	//    .catch Ljava/security/cert/CertificateException; {:try_start_5c .. :try_end_7d} :catch_b7
	//    .catchall {:try_start_5c .. :try_end_7d} :catchall_2d
	//    .local v8, "oldLastModified":J
	cVar11 = 0x0;
	in = 0x0;
	//    .local v5, "in":Ljava/io/InputStream;
	try {
	//label_try_start_7f:
	in = connection->getInputStream();
	//    .local v5, "in":Ljava/io/InputStream;
	this->lastModified = connection->getLastModified();
	if ( !((oldLastModified > 0x0)) )  
		goto label_cond_111;
	if ( (oldLastModified > this->lastModified) )     
		goto label_cond_df;
	if ( !(sun::security::provider::certpath::URICertStore::debug) )  
		goto label_cond_a5;
	sun::security::provider::certpath::URICertStore::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Not modified, using cached copy")));
label_cond_a5:
	//label_try_end_ae:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_133;
	}
	catch (...){
		goto label_catchall_15b;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_7f .. :try_end_ae} :catch_133
	//    .catchall {:try_start_7f .. :try_end_ae} :catchall_15b
	if ( !(in) )  
		goto label_cond_b4;
	try {
	//label_try_start_b1:
	in->close();
	//label_try_end_b4:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_db;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_b7;
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_b7;
	}
	catch (...){
		goto label_catchall_2d;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_b1 .. :try_end_b4} :catch_db
	//    .catch Ljava/io/IOException; {:try_start_b1 .. :try_end_b4} :catch_b7
	//    .catch Ljava/security/cert/CertificateException; {:try_start_b1 .. :try_end_b4} :catch_b7
	//    .catchall {:try_start_b1 .. :try_end_b4} :catchall_2d
label_cond_b4:
label_goto_b4:
	if ( !(cVar11) )  
		goto label_cond_dd;
	try {
	//label_try_start_b6:
	// throw
	throw cVar11;
	// 1601    :try_end_b7
	// 1602    .catch Ljava/io/IOException; {:try_start_b6 .. :try_end_b7} :catch_b7
	// 1603    .catch Ljava/security/cert/CertificateException; {:try_start_b6 .. :try_end_b7} :catch_b7
	// 1604    .catchall {:try_start_b6 .. :try_end_b7} :catchall_2d
	// 1606    .line 310
	// 1607    .end local v2    # "connection":Ljava/net/URLConnection;
	// 1608    .end local v5    # "in":Ljava/io/InputStream;
	// 1609    .end local v8    # "oldLastModified":J
label_catch_b7:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v3, "e":Ljava/lang/Exception;
	try {
	//label_try_start_b8:
	if ( !(sun::security::provider::certpath::URICertStore::debug) )  
		goto label_cond_c7;
	sun::security::provider::certpath::URICertStore::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Exception fetching certificates:")));
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
label_cond_c7:
	this->lastModified = 0x0;
	this->certs = java::util::Collections::emptySet({const[class].FS-Param});
	//label_try_end_d9:
	}
	catch (...){
		goto label_catchall_2d;
	}
	//    .catchall {:try_start_b8 .. :try_end_d9} :catchall_2d
	this->monitor_exit();
	return this->certs;
	// 1658    .line 308
	// 1659    .end local v3    # "e":Ljava/lang/Exception;
	// 1660    .restart local v2    # "connection":Ljava/net/URLConnection;
	// 1661    .restart local v5    # "in":Ljava/io/InputStream;
	// 1662    .restart local v8    # "oldLastModified":J
label_catch_db:
	// move-exception
	cVar11 = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_b4;
label_cond_dd:
	this->monitor_exit();
	return sun::security::provider::certpath::URICertStore::getMatchingCerts(this->certs, selector);
	// 1674    .line 290
label_cond_df:
	try {
	//label_try_start_df:
	if ( !(connection->instanceOf("java::net::HttpURLConnection")) )  
		goto label_cond_111;
	cVar4 = connection;
	cVar4->checkCast("java::net::HttpURLConnection");
	//    .local v4, "hconn":Ljava/net/HttpURLConnection;
	if ( cVar4->getResponseCode() != 0x130 )
		goto label_cond_111;
	if ( !(sun::security::provider::certpath::URICertStore::debug) )  
		goto label_cond_fb;
	sun::security::provider::certpath::URICertStore::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Not modified, using cached copy")));
label_cond_fb:
	//label_try_end_104:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_133;
	}
	catch (...){
		goto label_catchall_15b;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_df .. :try_end_104} :catch_133
	//    .catchall {:try_start_df .. :try_end_104} :catchall_15b
	if ( !(in) )  
		goto label_cond_10a;
	try {
	//label_try_start_107:
	in->close();
	//label_try_end_10a:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_10d;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_b7;
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_b7;
	}
	catch (...){
		goto label_catchall_2d;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_107 .. :try_end_10a} :catch_10d
	//    .catch Ljava/io/IOException; {:try_start_107 .. :try_end_10a} :catch_b7
	//    .catch Ljava/security/cert/CertificateException; {:try_start_107 .. :try_end_10a} :catch_b7
	//    .catchall {:try_start_107 .. :try_end_10a} :catchall_2d
label_cond_10a:
label_goto_10a:
	if ( !(cVar11) )  
		goto label_cond_10f;
	try {
	//label_try_start_10c:
	// throw
	throw cVar11;
	// 1744    :try_end_10d
	// 1745    .catch Ljava/io/IOException; {:try_start_10c .. :try_end_10d} :catch_b7
	// 1746    .catch Ljava/security/cert/CertificateException; {:try_start_10c .. :try_end_10d} :catch_b7
	// 1747    .catchall {:try_start_10c .. :try_end_10d} :catchall_2d
label_catch_10d:
	// move-exception
	cVar11 = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_10a;
label_cond_10f:
	this->monitor_exit();
	return sun::security::provider::certpath::URICertStore::getMatchingCerts(this->certs, selector);
	// 1760    .line 302
	// 1761    .end local v4    # "hconn":Ljava/net/HttpURLConnection;
label_cond_111:
	try {
	//label_try_start_111:
	if ( !(sun::security::provider::certpath::URICertStore::debug) )  
		goto label_cond_11d;
	sun::security::provider::certpath::URICertStore::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Downloading new certificates...")));
label_cond_11d:
	this->certs = this->factory->generateCertificates(in);
	//label_try_end_129:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_133;
	}
	catch (...){
		goto label_catchall_15b;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_111 .. :try_end_129} :catch_133
	//    .catchall {:try_start_111 .. :try_end_129} :catchall_15b
	if ( !(in) )  
		goto label_cond_12e;
	try {
	//label_try_start_12b:
	in->close();
	//label_try_end_12e:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_131;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_b7;
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_b7;
	}
	catch (...){
		goto label_catchall_2d;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_12b .. :try_end_12e} :catch_131
	//    .catch Ljava/io/IOException; {:try_start_12b .. :try_end_12e} :catch_b7
	//    .catch Ljava/security/cert/CertificateException; {:try_start_12b .. :try_end_12e} :catch_b7
	//    .catchall {:try_start_12b .. :try_end_12e} :catchall_2d
label_cond_12e:
label_goto_12e:
	if ( !(cVar11) )  
		goto label_cond_14f;
	try {
	//label_try_start_130:
	// throw
	throw cVar11;
	// 1810    :try_end_131
	// 1811    .catch Ljava/io/IOException; {:try_start_130 .. :try_end_131} :catch_b7
	// 1812    .catch Ljava/security/cert/CertificateException; {:try_start_130 .. :try_end_131} :catch_b7
	// 1813    .catchall {:try_start_130 .. :try_end_131} :catchall_2d
label_catch_131:
	// move-exception
	cVar11 = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_12e;
	// 1820    .end local v5    # "in":Ljava/io/InputStream;
label_catch_133:
	// move-exception
	cVar7 = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	try {
	//label_try_start_134:
	// throw
	throw cVar7;
	// 1826    :try_end_135
	// 1827    .catchall {:try_start_134 .. :try_end_135} :catchall_135
label_catchall_135:
	// move-exception
	
	tryCatchExcetionList.pop_back();
	cVar11 = cVar7;
	cVar9 = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
label_goto_13b:
	if ( !(in) )  
		goto label_cond_140;
	try {
	//label_try_start_13d:
	in->close();
	//label_try_end_140:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_143;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_b7;
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_b7;
	}
	catch (...){
		goto label_catchall_2d;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_13d .. :try_end_140} :catch_143
	//    .catch Ljava/io/IOException; {:try_start_13d .. :try_end_140} :catch_b7
	//    .catch Ljava/security/cert/CertificateException; {:try_start_13d .. :try_end_140} :catch_b7
	//    .catchall {:try_start_13d .. :try_end_140} :catchall_2d
label_cond_140:
label_goto_140:
	if ( !(cVar11) )  
		goto label_cond_14e;
	try {
	//label_try_start_142:
	// throw
	throw cVar11;
label_catch_143:
	// move-exception
	cVar10 = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	if ( cVar11 )     
		goto label_cond_148;
	cVar11 = cVar10;
	goto label_goto_140;
label_cond_148:
	if ( cVar11 == cVar10 )
		goto label_cond_140;
	cVar11->addSuppressed(cVar10);
	goto label_goto_140;
label_cond_14e:
	// throw
	throw cVar9;
	// 1875    .line 309
	// 1876    .restart local v5    # "in":Ljava/io/InputStream;
label_cond_14f:
	//label_try_end_158:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_b7;
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_b7;
	}
	catch (...){
		goto label_catchall_2d;
	}
	//    .catch Ljava/io/IOException; {:try_start_142 .. :try_end_158} :catch_b7
	//    .catch Ljava/security/cert/CertificateException; {:try_start_142 .. :try_end_158} :catch_b7
	//    .catchall {:try_start_142 .. :try_end_158} :catchall_2d
	this->monitor_exit();
	return sun::security::provider::certpath::URICertStore::getMatchingCerts(this->certs, selector);
	// 1896    .line 308
	// 1897    .end local v5    # "in":Ljava/io/InputStream;
label_catchall_15b:
	// move-exception
	catchall = tryCatchExcetionList.back();
	goto label_goto_13b;

}


