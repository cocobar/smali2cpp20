// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\DistributionPointFetcher.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.Boolean.h"
#include "java.lang.Exception.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.math.BigInteger.h"
#include "java.net.URI.h"
#include "java.security.GeneralSecurityException.h"
#include "java.security.InvalidAlgorithmParameterException.h"
#include "java.security.NoSuchAlgorithmException.h"
#include "java.security.Principal.h"
#include "java.security.PublicKey.h"
#include "java.security.cert.CRL.h"
#include "java.security.cert.CRLException.h"
#include "java.security.cert.CRLSelector.h"
#include "java.security.cert.CertPathBuilder.h"
#include "java.security.cert.CertPathBuilderResult.h"
#include "java.security.cert.CertPathParameters.h"
#include "java.security.cert.CertPathValidatorException.h"
#include "java.security.cert.CertStore.h"
#include "java.security.cert.CertStoreException.h"
#include "java.security.cert.CertificateException.h"
#include "java.security.cert.PKIXBuilderParameters.h"
#include "java.security.cert.PKIXCertPathBuilderResult.h"
#include "java.security.cert.TrustAnchor.h"
#include "java.security.cert.X509CRL.h"
#include "java.security.cert.X509CRLSelector.h"
#include "java.security.cert.X509CertSelector.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.ArrayList.h"
#include "java.util.Arrays.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.Date.h"
#include "java.util.HashSet.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "java.util.Set.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.security.provider.certpath.AdaptableX509CertSelector.h"
#include "sun.security.provider.certpath.AlgorithmChecker.h"
#include "sun.security.provider.certpath.DistributionPointFetcher.h"
#include "sun.security.provider.certpath.PKIX_S_CertStoreTypeException.h"
#include "sun.security.provider.certpath.URICertStore_S_URICertStoreParameters.h"
#include "sun.security.provider.certpath.URICertStore.h"
#include "sun.security.util.Debug.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AuthorityKeyIdentifierExtension.h"
#include "sun.security.x509.CRLDistributionPointsExtension.h"
#include "sun.security.x509.DistributionPoint.h"
#include "sun.security.x509.DistributionPointName.h"
#include "sun.security.x509.GeneralName.h"
#include "sun.security.x509.GeneralNameInterface.h"
#include "sun.security.x509.GeneralNames.h"
#include "sun.security.x509.IssuingDistributionPointExtension.h"
#include "sun.security.x509.KeyIdentifier.h"
#include "sun.security.x509.PKIXExtensions.h"
#include "sun.security.x509.RDN.h"
#include "sun.security.x509.ReasonFlags.h"
#include "sun.security.x509.SerialNumber.h"
#include "sun.security.x509.URIName.h"
#include "sun.security.x509.X500Name.h"
#include "sun.security.x509.X509CRLImpl.h"
#include "sun.security.x509.X509CertImpl.h"

static sun::security::provider::certpath::DistributionPointFetcher::ALL_REASONS;
static sun::security::provider::certpath::DistributionPointFetcher::debug;
// .method static constructor <clinit>()V
void sun::security::provider::certpath::DistributionPointFetcher::static_cinit()
{
	
	std::shared<std::vector<bool[]>> cVar0;
	
	sun::security::provider::certpath::DistributionPointFetcher::debug = sun::security::util::Debug::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("certpath")));
	cVar0 = std::make_shared<std::vector<bool[]>>(0x9);
	?;
	sun::security::provider::certpath::DistributionPointFetcher::ALL_REASONS = cVar0;
	return;
	// 039    .line 57
	// 040    nop
	// 042    :array_14
	// 043    .array-data 1
	// 044        0x1t
	// 045        0x1t
	// 046        0x1t
	// 047        0x1t
	// 048        0x1t
	// 049        0x1t
	// 050        0x1t
	// 051        0x1t
	// 052        0x1t
	// 053    .end array-data

}
// .method private constructor <init>()V
sun::security::provider::certpath::DistributionPointFetcher::DistributionPointFetcher()
{
	
	// 061    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method private static getCRL(Lsun/security/x509/URIName;)Ljava/security/cert/X509CRL;
std::shared_ptr<java::security::cert::X509CRL> sun::security::provider::certpath::DistributionPointFetcher::getCRL(std::shared_ptr<sun::security::x509::URIName> name)
{
	
	std::shared_ptr<java::security::cert::CRLSelector> cVar0;
	std::shared_ptr<java::lang::Object> uri;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<sun::security::provider::certpath::URICertStore_S_URICertStoreParameters> cVar2;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::util::Collection> crls;
	std::shared_ptr<java::security::cert::X509CRL> cVar4;
	
	//    .param p0, "name"    # Lsun/security/x509/URIName;
	//    .annotation system Ldalvik/annotation/Throws;
	// 070        value = {
	// 071            Ljava/security/cert/CertStoreException;
	// 072        }
	// 073    .end annotation
	cVar0 = 0x0;
	uri = name->getURI();
	//    .local v3, "uri":Ljava/net/URI;
	if ( !(sun::security::provider::certpath::DistributionPointFetcher::debug) )  
		goto label_cond_22;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::DistributionPointFetcher::debug->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Trying to fetch CRL from DP ")))->append(uri)->toString());
label_cond_22:
	0x0;
	//    .local v2, "ucs":Ljava/security/cert/CertStore;
	try {
	//label_try_start_23:
	cVar2 = std::make_shared<sun::security::provider::certpath::URICertStore_S_URICertStoreParameters>(uri);
	//label_try_end_2b:
	}
	catch (java::security::InvalidAlgorithmParameterException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_37;
	}
	catch (java::security::NoSuchAlgorithmException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_37;
	}
	//    .catch Ljava/security/InvalidAlgorithmParameterException; {:try_start_23 .. :try_end_2b} :catch_37
	//    .catch Ljava/security/NoSuchAlgorithmException; {:try_start_23 .. :try_end_2b} :catch_37
	//    .local v2, "ucs":Ljava/security/cert/CertStore;
	crls = sun::security::provider::certpath::URICertStore::getInstance(cVar2)->getCRLs(cVar0);
	//    .local v0, "crls":Ljava/util/Collection;, "Ljava/util/Collection<+Ljava/security/cert/CRL;>;"
	if ( !(crls->isEmpty()) )  
		goto label_cond_5a;
	return cVar0;
	// 148    .line 238
	// 149    .end local v0    # "crls":Ljava/util/Collection;, "Ljava/util/Collection<+Ljava/security/cert/CRL;>;"
	// 150    .local v2, "ucs":Ljava/security/cert/CertStore;
label_catch_37:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/security/GeneralSecurityException;
	if ( !(sun::security::provider::certpath::DistributionPointFetcher::debug) )  
		goto label_cond_59;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	sun::security::provider::certpath::DistributionPointFetcher::debug->println(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Can\'t create URICertStore: ")))->append(getCatchExcetionFromList->getMessage())->toString());
label_cond_59:
	return cVar0;
	// 191    .line 249
	// 192    .end local v1    # "e":Ljava/security/GeneralSecurityException;
	// 193    .restart local v0    # "crls":Ljava/util/Collection;, "Ljava/util/Collection<+Ljava/security/cert/CRL;>;"
	// 194    .local v2, "ucs":Ljava/security/cert/CertStore;
label_cond_5a:
	cVar4 = crls->iterator()->next();
	cVar4->checkCast("java::security::cert::X509CRL");
	return cVar4;

}
// .method private static getCRLs(Ljava/security/cert/X509CRLSelector;Lsun/security/x509/X509CertImpl;Lsun/security/x509/DistributionPoint;[ZZLjava/security/PublicKey;Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljava/util/List;Ljava/util/Set;Ljava/util/Date;)Ljava/util/Collection;
std::shared_ptr<java::util::Collection<java::security::cert::X509CRL>> sun::security::provider::certpath::DistributionPointFetcher::getCRLs(std::shared_ptr<java::security::cert::X509CRLSelector> selector,std::shared_ptr<sun::security::x509::X509CertImpl> certImpl,std::shared_ptr<sun::security::x509::DistributionPoint> point,std::shared_ptr<bool[]> reasonsMask,bool signFlag,std::shared_ptr<java::security::PublicKey> prevKey,std::shared_ptr<java::security::cert::X509Certificate> prevCert,std::shared_ptr<java::lang::String> provider,std::shared_ptr<java::util::List<java::security::cert::CertStore>> certStores,std::shared_ptr<java::util::Set<java::security::cert::TrustAnchor>> trustAnchors,std::shared_ptr<java::util::Date> validity)
{
	
	std::shared_ptr<sun::security::x509::GeneralNames> fullName;
	auto relativeName;
	std::shared_ptr<sun::security::x509::GeneralNames> crlIssuers;
	std::shared_ptr<sun::security::x509::X500Name> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::util::ArrayList> possibleCRLs;
	int savedCSE;
	std::shared_ptr<java::util::Iterator> t;
	std::shared_ptr<sun::security::x509::GeneralName> name;
	std::shared_ptr<sun::security::x509::X500Name> x500Name;
	std::shared_ptr<sun::security::x509::URIName> uriName;
	std::shared_ptr<java::lang::Object> crl;
	std::shared_ptr<java::util::ArrayList> crls;
	std::shared_ptr<java::util::Iterator> crl_S_iterator;
	std::shared_ptr<java::security::cert::X509CRL> crl;
	std::shared_ptr<java::lang::Exception> e;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<sun::security::x509::X500Name> cVar1;
	
	//    .param p0, "selector"    # Ljava/security/cert/X509CRLSelector;
	//    .param p1, "certImpl"    # Lsun/security/x509/X509CertImpl;
	//    .param p2, "point"    # Lsun/security/x509/DistributionPoint;
	//    .param p3, "reasonsMask"    # [Z
	//    .param p4, "signFlag"    # Z
	//    .param p5, "prevKey"    # Ljava/security/PublicKey;
	//    .param p6, "prevCert"    # Ljava/security/cert/X509Certificate;
	//    .param p7, "provider"    # Ljava/lang/String;
	//    .param p10, "validity"    # Ljava/util/Date;
	//    .annotation system Ldalvik/annotation/Signature;
	// 221        value = {
	// 222            "(",
	// 223            "Ljava/security/cert/X509CRLSelector;",
	// 224            "Lsun/security/x509/X509CertImpl;",
	// 225            "Lsun/security/x509/DistributionPoint;",
	// 226            "[ZZ",
	// 227            "Ljava/security/PublicKey;",
	// 228            "Ljava/security/cert/X509Certificate;",
	// 229            "Ljava/lang/String;",
	// 230            "Ljava/util/List",
	// 231            "<",
	// 232            "Ljava/security/cert/CertStore;",
	// 233            ">;",
	// 234            "Ljava/util/Set",
	// 235            "<",
	// 236            "Ljava/security/cert/TrustAnchor;",
	// 237            ">;",
	// 238            "Ljava/util/Date;",
	// 239            ")",
	// 240            "Ljava/util/Collection",
	// 241            "<",
	// 242            "Ljava/security/cert/X509CRL;",
	// 243            ">;"
	// 244        }
	// 245    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 248        value = {
	// 249            Ljava/security/cert/CertStoreException;
	// 250        }
	// 251    .end annotation
	//    .local p8, "certStores":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/CertStore;>;"
	//    .local p9, "trustAnchors":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/TrustAnchor;>;"
	fullName = point->getFullName();
	//    .local v18, "fullName":Lsun/security/x509/GeneralNames;
	if ( fullName )     
		goto label_cond_23;
	relativeName = point->getRelativeName();
	//    .local v22, "relativeName":Lsun/security/x509/RDN;
	if ( relativeName )     
		goto label_cond_11;
	return java::util::Collections::emptySet({const[class].FS-Param});
	// 281    .line 160
label_cond_11:
	try {
	//label_try_start_11:
	crlIssuers = point->getCRLIssuer();
	//    .local v14, "crlIssuers":Lsun/security/x509/GeneralNames;
	if ( crlIssuers )     
		goto label_cond_5d;
	cVar0 = certImpl->getIssuerDN();
	cVar0->checkCast("sun::security::x509::X500Name");
	//label_try_end_22:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_7b;
	}
	//    .catch Ljava/io/IOException; {:try_start_11 .. :try_end_22} :catch_7b
	fullName = sun::security::provider::certpath::DistributionPointFetcher::getFullNames(cVar0, relativeName);
	//    .end local v14    # "crlIssuers":Lsun/security/x509/GeneralNames;
	//    .end local v22    # "relativeName":Lsun/security/x509/RDN;
label_cond_23:
label_goto_23:
	possibleCRLs = std::make_shared<java::util::ArrayList>();
	//    .local v21, "possibleCRLs":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/security/cert/X509CRL;>;"
	savedCSE = 0x0;
	//    .local v23, "savedCSE":Ljava/security/cert/CertStoreException;
	t = fullName->iterator();
	//    .end local v23    # "savedCSE":Ljava/security/cert/CertStoreException;
	//    .local v24, "t":Ljava/util/Iterator;, "Ljava/util/Iterator<Lsun/security/x509/GeneralName;>;"
label_cond_2e:
label_goto_2e:
	if ( !(t->hasNext()) )  
		goto label_cond_9a;
	try {
	//label_try_start_34:
	name = t->next();
	name->checkCast("sun::security::x509::GeneralName");
	//    .local v20, "name":Lsun/security/x509/GeneralName;
	if ( name->getType() != 0x4 )
		goto label_cond_81;
	x500Name = name->getName();
	x500Name->checkCast("sun::security::x509::X500Name");
	//    .local v26, "x500Name":Lsun/security/x509/X500Name;
	possibleCRLs->addAll(sun::security::provider::certpath::DistributionPointFetcher::getCRLs(x500Name, certImpl->getIssuerX500Principal(), certStores));
	//label_try_end_58:
	}
	catch (java::security::cert::CertStoreException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_59;
	}
	//    .catch Ljava/security/cert/CertStoreException; {:try_start_34 .. :try_end_58} :catch_59
	goto label_goto_2e;
	// 385    .line 194
	// 386    .end local v20    # "name":Lsun/security/x509/GeneralName;
	// 387    .end local v26    # "x500Name":Lsun/security/x509/X500Name;
label_catch_59:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v16, "cse":Ljava/security/cert/CertStoreException;
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v23, "savedCSE":Ljava/security/cert/CertStoreException;
	goto label_goto_2e;
	// 398    .line 166
	// 399    .end local v16    # "cse":Ljava/security/cert/CertStoreException;
	// 400    .end local v21    # "possibleCRLs":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/security/cert/X509CRL;>;"
	// 401    .end local v23    # "savedCSE":Ljava/security/cert/CertStoreException;
	// 402    .end local v24    # "t":Ljava/util/Iterator;, "Ljava/util/Iterator<Lsun/security/x509/GeneralName;>;"
	// 403    .restart local v14    # "crlIssuers":Lsun/security/x509/GeneralNames;
	// 404    .restart local v22    # "relativeName":Lsun/security/x509/RDN;
label_cond_5d:
	try {
	//label_try_start_5d:
	if ( crlIssuers->size() == 0x1 )
		goto label_cond_69;
	return java::util::Collections::emptySet({const[class].FS-Param});
	// 422    .line 170
label_cond_69:
	cVar1 = crlIssuers->get(0x0)->getName();
	cVar1->checkCast("sun::security::x509::X500Name");
	//label_try_end_79:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_7b;
	}
	//    .catch Ljava/io/IOException; {:try_start_5d .. :try_end_79} :catch_7b
	fullName = sun::security::provider::certpath::DistributionPointFetcher::getFullNames(cVar1, relativeName);
	goto label_goto_23;
	// 447    .line 173
	// 448    .end local v14    # "crlIssuers":Lsun/security/x509/GeneralNames;
label_catch_7b:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v19, "ioe":Ljava/io/IOException;
	return java::util::Collections::emptySet({const[class].FS-Param});
	// 460    .line 187
	// 461    .end local v19    # "ioe":Ljava/io/IOException;
	// 462    .end local v22    # "relativeName":Lsun/security/x509/RDN;
	// 463    .restart local v20    # "name":Lsun/security/x509/GeneralName;
	// 464    .restart local v21    # "possibleCRLs":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/security/cert/X509CRL;>;"
	// 465    .restart local v24    # "t":Ljava/util/Iterator;, "Ljava/util/Iterator<Lsun/security/x509/GeneralName;>;"
label_cond_81:
	try {
	//label_try_start_81:
	if ( name->getType() != 0x6 )
		goto label_cond_2e;
	uriName = name->getName();
	uriName->checkCast("sun::security::x509::URIName");
	//    .local v25, "uriName":Lsun/security/x509/URIName;
	crl = sun::security::provider::certpath::DistributionPointFetcher::getCRL(uriName);
	//    .local v4, "crl":Ljava/security/cert/X509CRL;
	if ( !(crl) )  
		goto label_cond_2e;
	possibleCRLs->add(crl);
	//label_try_end_99:
	}
	catch (java::security::cert::CertStoreException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_59;
	}
	//    .catch Ljava/security/cert/CertStoreException; {:try_start_81 .. :try_end_99} :catch_59
	goto label_goto_2e;
	// 502    .line 199
	// 503    .end local v4    # "crl":Ljava/security/cert/X509CRL;
	// 504    .end local v20    # "name":Lsun/security/x509/GeneralName;
	// 505    .end local v25    # "uriName":Lsun/security/x509/URIName;
label_cond_9a:
	if ( !(possibleCRLs->isEmpty()) )  
		goto label_cond_a3;
	if ( !(savedCSE) )  
		goto label_cond_a3;
	// throw
	throw savedCSE;
	// 518    .line 203
label_cond_a3:
	crls = std::make_shared<java::util::ArrayList>(0x2);
	//    .local v15, "crls":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/security/cert/X509CRL;>;"
	crl_S_iterator = possibleCRLs->iterator();
	//    .local v13, "crl$iterator":Ljava/util/Iterator;
label_cond_ad:
label_goto_ad:
	if ( !(crl_S_iterator->hasNext()) )  
		goto label_cond_10b;
	crl = crl_S_iterator->next();
	crl->checkCast("java::security::cert::X509CRL");
	//    .restart local v4    # "crl":Ljava/security/cert/X509CRL;
	try {
	//label_try_start_ba:
	selector->setIssuerNames(0x0);
	if ( !(selector->match(crl)) )  
		goto label_cond_ad;
	if ( !(sun::security::provider::certpath::DistributionPointFetcher::verifyCRL(certImpl, point, crl, reasonsMask, signFlag, prevKey, prevCert, provider, trustAnchors, certStores, validity)) )  
		goto label_cond_ad;
	crls->add(crl);
	//label_try_end_e4:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_e5;
	}
	catch (java::security::cert::CRLException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_e5;
	}
	//    .catch Ljava/io/IOException; {:try_start_ba .. :try_end_e4} :catch_e5
	//    .catch Ljava/security/cert/CRLException; {:try_start_ba .. :try_end_e4} :catch_e5
	goto label_goto_ad;
	// 599    .line 214
label_catch_e5:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v17, "e":Ljava/lang/Exception;
	if ( !(sun::security::provider::certpath::DistributionPointFetcher::debug) )  
		goto label_cond_ad;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::DistributionPointFetcher::debug->println(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Exception verifying CRL: ")))->append(e->getMessage())->toString());
	e->printStackTrace();
	goto label_goto_ad;
	// 641    .line 222
	// 642    .end local v4    # "crl":Ljava/security/cert/X509CRL;
	// 643    .end local v17    # "e":Ljava/lang/Exception;
label_cond_10b:
	return crls;

}
// .method public static getCRLs(Ljava/security/cert/X509CRLSelector;ZLjava/security/PublicKey;Ljava/lang/String;Ljava/util/List;[ZLjava/util/Set;Ljava/util/Date;)Ljava/util/Collection;
std::shared_ptr<java::util::Collection<java::security::cert::X509CRL>> sun::security::provider::certpath::DistributionPointFetcher::getCRLs(std::shared_ptr<java::security::cert::X509CRLSelector> selector,bool signFlag,std::shared_ptr<java::security::PublicKey> prevKey,std::shared_ptr<java::lang::String> provider,std::shared_ptr<java::util::List<java::security::cert::CertStore>> certStores,std::shared_ptr<bool[]> reasonsMask,std::shared_ptr<java::util::Set<java::security::cert::TrustAnchor>> trustAnchors,std::shared_ptr<java::util::Date> validity)
{
	
	//    .param p0, "selector"    # Ljava/security/cert/X509CRLSelector;
	//    .param p1, "signFlag"    # Z
	//    .param p2, "prevKey"    # Ljava/security/PublicKey;
	//    .param p3, "provider"    # Ljava/lang/String;
	//    .param p5, "reasonsMask"    # [Z
	//    .param p7, "validity"    # Ljava/util/Date;
	//    .annotation system Ldalvik/annotation/Signature;
	// 657        value = {
	// 658            "(",
	// 659            "Ljava/security/cert/X509CRLSelector;",
	// 660            "Z",
	// 661            "Ljava/security/PublicKey;",
	// 662            "Ljava/lang/String;",
	// 663            "Ljava/util/List",
	// 664            "<",
	// 665            "Ljava/security/cert/CertStore;",
	// 666            ">;[Z",
	// 667            "Ljava/util/Set",
	// 668            "<",
	// 669            "Ljava/security/cert/TrustAnchor;",
	// 670            ">;",
	// 671            "Ljava/util/Date;",
	// 672            ")",
	// 673            "Ljava/util/Collection",
	// 674            "<",
	// 675            "Ljava/security/cert/X509CRL;",
	// 676            ">;"
	// 677        }
	// 678    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 681        value = {
	// 682            Ljava/security/cert/CertStoreException;
	// 683        }
	// 684    .end annotation
	//    .local p4, "certStores":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/CertStore;>;"
	//    .local p6, "trustAnchors":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/TrustAnchor;>;"
	return sun::security::provider::certpath::DistributionPointFetcher::getCRLs(selector, signFlag, prevKey, 0x0, provider, certStores, reasonsMask, trustAnchors, validity);

}
// .method public static getCRLs(Ljava/security/cert/X509CRLSelector;ZLjava/security/PublicKey;Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljava/util/List;[ZLjava/util/Set;Ljava/util/Date;)Ljava/util/Collection;
std::shared_ptr<java::util::Collection<java::security::cert::X509CRL>> sun::security::provider::certpath::DistributionPointFetcher::getCRLs(std::shared_ptr<java::security::cert::X509CRLSelector> selector,bool signFlag,std::shared_ptr<java::security::PublicKey> prevKey,std::shared_ptr<java::security::cert::X509Certificate> prevCert,std::shared_ptr<java::lang::String> provider,std::shared_ptr<java::util::List<java::security::cert::CertStore>> certStores,std::shared_ptr<bool[]> reasonsMask,std::shared_ptr<java::util::Set<java::security::cert::TrustAnchor>> trustAnchors,std::shared_ptr<java::util::Date> validity)
{
	
	std::shared_ptr<java::security::cert::X509Certificate> cert;
	std::shared_ptr<sun::security::x509::X509CertImpl> certImpl;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<sun::security::x509::CRLDistributionPointsExtension> ext;
	std::shared_ptr<java::util::HashSet> results;
	std::shared_ptr<java::util::Iterator> t;
	std::shared_ptr<sun::security::x509::DistributionPoint> point;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "selector"    # Ljava/security/cert/X509CRLSelector;
	//    .param p1, "signFlag"    # Z
	//    .param p2, "prevKey"    # Ljava/security/PublicKey;
	//    .param p3, "prevCert"    # Ljava/security/cert/X509Certificate;
	//    .param p4, "provider"    # Ljava/lang/String;
	//    .param p6, "reasonsMask"    # [Z
	//    .param p8, "validity"    # Ljava/util/Date;
	//    .annotation system Ldalvik/annotation/Signature;
	// 725        value = {
	// 726            "(",
	// 727            "Ljava/security/cert/X509CRLSelector;",
	// 728            "Z",
	// 729            "Ljava/security/PublicKey;",
	// 730            "Ljava/security/cert/X509Certificate;",
	// 731            "Ljava/lang/String;",
	// 732            "Ljava/util/List",
	// 733            "<",
	// 734            "Ljava/security/cert/CertStore;",
	// 735            ">;[Z",
	// 736            "Ljava/util/Set",
	// 737            "<",
	// 738            "Ljava/security/cert/TrustAnchor;",
	// 739            ">;",
	// 740            "Ljava/util/Date;",
	// 741            ")",
	// 742            "Ljava/util/Collection",
	// 743            "<",
	// 744            "Ljava/security/cert/X509CRL;",
	// 745            ">;"
	// 746        }
	// 747    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 750        value = {
	// 751            Ljava/security/cert/CertStoreException;
	// 752        }
	// 753    .end annotation
	//    .local p5, "certStores":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/CertStore;>;"
	//    .local p7, "trustAnchors":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/TrustAnchor;>;"
	cert = selector->getCertificateChecking();
	//    .local v12, "cert":Ljava/security/cert/X509Certificate;
	if ( cert )     
		goto label_cond_b;
	return java::util::Collections::emptySet({const[class].FS-Param});
	// 774    .line 102
label_cond_b:
	try {
	//label_try_start_b:
	certImpl = sun::security::x509::X509CertImpl::toImpl(cert);
	//    .local v2, "certImpl":Lsun/security/x509/X509CertImpl;
	if ( !(sun::security::provider::certpath::DistributionPointFetcher::debug) )  
		goto label_cond_30;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::DistributionPointFetcher::debug->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("DistributionPointFetcher.getCRLs: Checking CRLDPs for ")))->append(certImpl->getSubjectX500Principal())->toString());
label_cond_30:
	ext = certImpl->getCRLDistributionPointsExtension();
	//    .local v15, "ext":Lsun/security/x509/CRLDistributionPointsExtension;
	if ( ext )     
		goto label_cond_47;
	if ( !(sun::security::provider::certpath::DistributionPointFetcher::debug) )  
		goto label_cond_42;
	sun::security::provider::certpath::DistributionPointFetcher::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("No CRLDP ext")));
label_cond_42:
	return java::util::Collections::emptySet({const[class].FS-Param});
	// 846    .line 116
label_cond_47:
	//    .local v16, "points":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/DistributionPoint;>;"
	results = std::make_shared<java::util::HashSet>();
	//    .local v17, "results":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/X509CRL;>;"
	t = ext->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("points")))->iterator();
	//    .local v18, "t":Ljava/util/Iterator;, "Ljava/util/Iterator<Lsun/security/x509/DistributionPoint;>;"
label_goto_57:
	if ( !(t->hasNext()) )  
		goto label_cond_91;
	if ( !(( java::util::Arrays::equals(reasonsMask, sun::security::provider::certpath::DistributionPointFetcher::ALL_REASONS) ^ 0x1)) )  
		goto label_cond_91;
	point = t->next();
	point->checkCast("sun::security::x509::DistributionPoint");
	//    .local v3, "point":Lsun/security/x509/DistributionPoint;
	//    .local v13, "crls":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/security/cert/X509CRL;>;"
	results->addAll(sun::security::provider::certpath::DistributionPointFetcher::getCRLs(selector, certImpl, point, reasonsMask, signFlag, prevKey, prevCert, provider, certStores, trustAnchors, validity));
	//label_try_end_8a:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_8b;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_8b;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_b .. :try_end_8a} :catch_8b
	//    .catch Ljava/io/IOException; {:try_start_b .. :try_end_8a} :catch_8b
	goto label_goto_57;
	// 930    .line 130
	// 931    .end local v2    # "certImpl":Lsun/security/x509/X509CertImpl;
	// 932    .end local v3    # "point":Lsun/security/x509/DistributionPoint;
	// 933    .end local v13    # "crls":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/security/cert/X509CRL;>;"
	// 934    .end local v15    # "ext":Lsun/security/x509/CRLDistributionPointsExtension;
	// 935    .end local v16    # "points":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/DistributionPoint;>;"
	// 936    .end local v17    # "results":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/X509CRL;>;"
	// 937    .end local v18    # "t":Ljava/util/Iterator;, "Ljava/util/Iterator<Lsun/security/x509/DistributionPoint;>;"
label_catch_8b:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v14, "e":Ljava/lang/Exception;
	return java::util::Collections::emptySet({const[class].FS-Param});
	// 949    .line 126
	// 950    .end local v14    # "e":Ljava/lang/Exception;
	// 951    .restart local v2    # "certImpl":Lsun/security/x509/X509CertImpl;
	// 952    .restart local v15    # "ext":Lsun/security/x509/CRLDistributionPointsExtension;
	// 953    .restart local v16    # "points":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/DistributionPoint;>;"
	// 954    .restart local v17    # "results":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/X509CRL;>;"
	// 955    .restart local v18    # "t":Ljava/util/Iterator;, "Ljava/util/Iterator<Lsun/security/x509/DistributionPoint;>;"
label_cond_91:
	try {
	//label_try_start_91:
	if ( !(sun::security::provider::certpath::DistributionPointFetcher::debug) )  
		goto label_cond_b9;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::DistributionPointFetcher::debug->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Returning ")))->append(results->size())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" CRLs")))->toString());
	//label_try_end_b9:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_8b;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_8b;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_91 .. :try_end_b9} :catch_8b
	//    .catch Ljava/io/IOException; {:try_start_91 .. :try_end_b9} :catch_8b
label_cond_b9:
	return results;

}
// .method private static getCRLs(Lsun/security/x509/X500Name;Ljavax/security/auth/x500/X500Principal;Ljava/util/List;)Ljava/util/Collection;
std::shared_ptr<java::util::Collection<java::security::cert::X509CRL>> sun::security::provider::certpath::DistributionPointFetcher::getCRLs(std::shared_ptr<sun::security::x509::X500Name> name,std::shared_ptr<javax::security::auth::x500::X500Principal> certIssuer,std::shared_ptr<java::util::List<java::security::cert::CertStore>> certStores)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::security::cert::X509CRLSelector> xcs;
	std::shared_ptr<java::util::ArrayList> crls;
	int savedCSE;
	std::shared_ptr<java::util::Iterator> store_S_iterator;
	std::shared_ptr<java::security::cert::CertStore> store;
	std::shared_ptr<java::lang::Object> cse;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::util::Iterator> crl_S_iterator;
	std::shared_ptr<java::security::cert::CRL> crl;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "name"    # Lsun/security/x509/X500Name;
	//    .param p1, "certIssuer"    # Ljavax/security/auth/x500/X500Principal;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1008        value = {
	// 1009            "(",
	// 1010            "Lsun/security/x509/X500Name;",
	// 1011            "Ljavax/security/auth/x500/X500Principal;",
	// 1012            "Ljava/util/List",
	// 1013            "<",
	// 1014            "Ljava/security/cert/CertStore;",
	// 1015            ">;)",
	// 1016            "Ljava/util/Collection",
	// 1017            "<",
	// 1018            "Ljava/security/cert/X509CRL;",
	// 1019            ">;"
	// 1020        }
	// 1021    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 1024        value = {
	// 1025            Ljava/security/cert/CertStoreException;
	// 1026        }
	// 1027    .end annotation
	//    .local p2, "certStores":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/CertStore;>;"
	if ( !(sun::security::provider::certpath::DistributionPointFetcher::debug) )  
		goto label_cond_1d;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::DistributionPointFetcher::debug->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Trying to fetch CRL from DP ")))->append(name)->toString());
label_cond_1d:
	xcs = std::make_shared<java::security::cert::X509CRLSelector>();
	//    .local v7, "xcs":Ljava/security/cert/X509CRLSelector;
	xcs->addIssuer(name->asX500Principal());
	xcs->addIssuer(certIssuer);
	crls = std::make_shared<java::util::ArrayList>();
	//    .local v2, "crls":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/security/cert/X509CRL;>;"
	savedCSE = 0x0;
	//    .local v4, "savedCSE":Ljava/security/cert/CertStoreException;
	store_S_iterator = certStores->iterator();
	//    .end local v4    # "savedCSE":Ljava/security/cert/CertStoreException;
	//    .local v6, "store$iterator":Ljava/util/Iterator;
label_cond_36:
label_goto_36:
	if ( !(store_S_iterator->hasNext()) )  
		goto label_cond_87;
	store = store_S_iterator->next();
	store->checkCast("java::security::cert::CertStore");
	//    .local v5, "store":Ljava/security/cert/CertStore;
	try {
	//label_try_start_42:
	crl_S_iterator = store->getCRLs(xcs)->iterator();
	//    .local v1, "crl$iterator":Ljava/util/Iterator;
label_goto_4a:
	if ( !(crl_S_iterator->hasNext()) )  
		goto label_cond_36;
	crl = crl_S_iterator->next();
	crl->checkCast("java::security::cert::CRL");
	//    .local v0, "crl":Ljava/security/cert/CRL;
	crl->checkCast("java::security::cert::X509CRL");
	//    .end local v0    # "crl":Ljava/security/cert/CRL;
	crls->add(crl);
	//label_try_end_5b:
	}
	catch (java::security::cert::CertStoreException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5c;
	}
	//    .catch Ljava/security/cert/CertStoreException; {:try_start_42 .. :try_end_5b} :catch_5c
	goto label_goto_4a;
	// 1143    .line 279
	// 1144    .end local v1    # "crl$iterator":Ljava/util/Iterator;
label_catch_5c:
	// move-exception
	cse = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v3, "cse":Ljava/security/cert/CertStoreException;
	if ( !(sun::security::provider::certpath::DistributionPointFetcher::debug) )  
		goto label_cond_7d;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::DistributionPointFetcher::debug->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Exception while retrieving CRLs: ")))->append(cse)->toString());
	cse->printStackTrace();
label_cond_7d:
	savedCSE = new sun::security::provider::certpath::PKIX_S_CertStoreTypeException(store->getType(), cse);
	//    .local v4, "savedCSE":Ljava/security/cert/CertStoreException;
	goto label_goto_36;
	// 1193    .line 289
	// 1194    .end local v3    # "cse":Ljava/security/cert/CertStoreException;
	// 1195    .end local v4    # "savedCSE":Ljava/security/cert/CertStoreException;
	// 1196    .end local v5    # "store":Ljava/security/cert/CertStore;
label_cond_87:
	if ( !(crls->isEmpty()) )  
		goto label_cond_90;
	if ( !(savedCSE) )  
		goto label_cond_90;
	// throw
	throw savedCSE;
	// 1209    .line 292
label_cond_90:
	return crls;

}
// .method private static getFullNames(Lsun/security/x509/X500Name;Lsun/security/x509/RDN;)Lsun/security/x509/GeneralNames;
std::shared_ptr<sun::security::x509::GeneralNames> sun::security::provider::certpath::DistributionPointFetcher::getFullNames(std::shared_ptr<sun::security::x509::X500Name> issuer,std::shared_ptr<sun::security::x509::RDN> rdn)
{
	
	std::shared_ptr<java::util::ArrayList> rdns;
	std::shared_ptr<sun::security::x509::X500Name> fullName;
	std::shared_ptr<std::vector<sun::security::x509::RDN>> cVar0;
	std::shared_ptr<sun::security::x509::GeneralNames> fullNames;
	std::shared_ptr<sun::security::x509::GeneralName> cVar1;
	
	//    .param p0, "issuer"    # Lsun/security/x509/X500Name;
	//    .param p1, "rdn"    # Lsun/security/x509/RDN;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1219        value = {
	// 1220            Ljava/io/IOException;
	// 1221        }
	// 1222    .end annotation
	rdns = std::make_shared<java::util::ArrayList>(issuer->rdns());
	//    .local v2, "rdns":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/RDN;>;"
	rdns->add(rdn);
	cVar0 = rdns->toArray(std::make_shared<std::vector<std::vector<sun::security::x509::RDN>>>(0x0));
	cVar0->checkCast("std::vector<sun::security::x509::RDN>");
	fullName = std::make_shared<sun::security::x509::X500Name>(cVar0);
	//    .local v0, "fullName":Lsun/security/x509/X500Name;
	fullNames = std::make_shared<sun::security::x509::GeneralNames>();
	//    .local v1, "fullNames":Lsun/security/x509/GeneralNames;
	cVar1 = std::make_shared<sun::security::x509::GeneralName>(fullName);
	fullNames->add(cVar1);
	return fullNames;

}
// .method private static issues(Lsun/security/x509/X509CertImpl;Lsun/security/x509/X509CRLImpl;Ljava/lang/String;)Z
bool sun::security::provider::certpath::DistributionPointFetcher::issues(std::shared_ptr<sun::security::x509::X509CertImpl> cert,std::shared_ptr<sun::security::x509::X509CRLImpl> crl,std::shared_ptr<java::lang::String> provider)
{
	
	int matched;
	std::shared_ptr<sun::security::provider::certpath::AdaptableX509CertSelector> issuerSelector;
	std::shared_ptr<bool[]> usages;
	std::shared_ptr<sun::security::x509::AuthorityKeyIdentifierExtension> crlAKID;
	bool matched;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "cert"    # Lsun/security/x509/X509CertImpl;
	//    .param p1, "crl"    # Lsun/security/x509/X509CRLImpl;
	//    .param p2, "provider"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1277        value = {
	// 1278            Ljava/io/IOException;
	// 1279        }
	// 1280    .end annotation
	matched = 0x0;
	//    .local v4, "matched":Z
	issuerSelector = std::make_shared<sun::security::provider::certpath::AdaptableX509CertSelector>();
	//    .local v3, "issuerSelector":Lsun/security/provider/certpath/AdaptableX509CertSelector;
	usages = cert->getKeyUsage();
	//    .local v5, "usages":[Z
	if ( !(usages) )  
		goto label_cond_13;
	usages[0x6] = 0x1;
	issuerSelector->setKeyUsage(usages);
label_cond_13:
	//    .local v1, "crlIssuer":Ljavax/security/auth/x500/X500Principal;
	issuerSelector->setSubject(crl->getIssuerX500Principal());
	crlAKID = crl->getAuthKeyIdExtension();
	//    .local v0, "crlAKID":Lsun/security/x509/AuthorityKeyIdentifierExtension;
	issuerSelector->setSkiAndSerialNumber(crlAKID);
	matched = issuerSelector->match(cert);
	//    .local v4, "matched":Z
	if ( !(matched) )  
		goto label_cond_37;
	if ( !(crlAKID) )  
		goto label_cond_2f;
	if ( cert->getAuthorityKeyIdentifierExtension() )     
		goto label_cond_37;
label_cond_2f:
	try {
	//label_try_start_2f:
	crl->verify(cert->getPublicKey(), provider);
	//label_try_end_36:
	}
	catch (java::security::GeneralSecurityException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_38;
	}
	//    .catch Ljava/security/GeneralSecurityException; {:try_start_2f .. :try_end_36} :catch_38
	matched = 0x1;
	//    .end local v4    # "matched":Z
label_cond_37:
label_goto_37:
	return matched;
	// 1369    .line 770
	// 1370    .restart local v4    # "matched":Z
label_catch_38:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/security/GeneralSecurityException;
	matched = 0x0;
	//    .local v4, "matched":Z
	goto label_goto_37;

}
// .method static verifyCRL(Lsun/security/x509/X509CertImpl;Lsun/security/x509/DistributionPoint;Ljava/security/cert/X509CRL;[ZZLjava/security/PublicKey;Ljava/security/cert/X509Certificate;Ljava/lang/String;Ljava/util/Set;Ljava/util/List;Ljava/util/Date;)Z
bool sun::security::provider::certpath::DistributionPointFetcher::verifyCRL(std::shared_ptr<sun::security::x509::X509CertImpl> certImpl,std::shared_ptr<sun::security::x509::DistributionPoint> point,std::shared_ptr<java::security::cert::X509CRL> crl,std::shared_ptr<bool[]> reasonsMask,bool signFlag,std::shared_ptr<java::security::PublicKey> cVar20,std::shared_ptr<java::security::cert::X509Certificate> prevCert,std::shared_ptr<java::lang::String> provider,std::shared_ptr<java::util::Set<java::security::cert::TrustAnchor>> trustAnchors,std::shared_ptr<java::util::List<java::security::cert::CertStore>> certStores,std::shared_ptr<java::util::Date> validity)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	int indirectCRL;
	std::shared_ptr<sun::security::x509::X509CRLImpl> crlImpl;
	auto idpExt;
	std::shared_ptr<sun::security::x509::X500Name> certIssuer;
	std::shared_ptr<sun::security::x509::X500Name> crlIssuer;
	std::shared_ptr<sun::security::x509::GeneralNames> pointCrlIssuers;
	std::shared_ptr<java::lang::Boolean> cVar1;
	int match;
	std::shared_ptr<java::util::Iterator> t;
	std::shared_ptr<sun::security::x509::GeneralName> cVar2;
	auto name;
	std::shared_ptr<java::lang::Object> cVar20;
	std::shared_ptr<sun::security::x509::DistributionPointName> idpPoint;
	std::shared_ptr<sun::security::x509::GeneralNames> idpNames;
	auto relativeName;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	std::shared_ptr<java::lang::StringBuilder> cVar8;
	std::shared_ptr<java::util::Iterator> i;
	std::shared_ptr<sun::security::x509::GeneralName> cVar9;
	auto idpName;
	std::shared_ptr<java::lang::StringBuilder> cVar10;
	std::shared_ptr<java::util::Iterator> p;
	std::shared_ptr<sun::security::x509::GeneralName> cVar11;
	auto pointName;
	std::shared_ptr<java::lang::StringBuilder> cVar12;
	std::shared_ptr<java::lang::Boolean> b;
	auto interimReasonsMask;
	std::shared_ptr<sun::security::x509::ReasonFlags> reasons;
	std::shared_ptr<java::lang::Object> pointReasonFlags;
	auto idpReasonFlags;
	int i;
	bool cVar15;
	int oneOrMore;
	int cVar18;
	std::shared_ptr<java::security::cert::X509CertSelector> certSel;
	auto crlSign;
	std::shared_ptr<sun::security::x509::AuthorityKeyIdentifierExtension> akidext;
	auto kid;
	std::shared_ptr<sun::security::x509::SerialNumber> asn;
	std::shared_ptr<java::util::HashSet> newTrustAnchors;
	std::shared_ptr<java::security::cert::TrustAnchor> temporary;
	std::shared_ptr<java::security::cert::CRLException> cVar22;
	std::shared_ptr<java::security::cert::PKIXBuilderParameters> params;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::security::cert::CRLException> cVar23;
	std::shared_ptr<java::security::cert::PKIXCertPathBuilderResult> result;
	std::shared_ptr<java::lang::StringBuilder> cVar24;
	std::shared_ptr<java::util::Set> unresCritExts;
	std::shared_ptr<java::lang::StringBuilder> cVar21;
	std::shared_ptr<java::util::Iterator> ext_S_iterator;
	std::shared_ptr<java::lang::String> ext;
	bool cVar25;
	std::shared_ptr<bool[]> interimReasonsMask;
	std::shared_ptr<sun::security::x509::GeneralName> cVar13;
	std::shared_ptr<sun::security::x509::GeneralName> cVar14;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<sun::security::x509::KeyIdentifier> certAKID;
	std::shared_ptr<java::lang::Object> crlAKID;
	
	//    .param p0, "certImpl"    # Lsun/security/x509/X509CertImpl;
	//    .param p1, "point"    # Lsun/security/x509/DistributionPoint;
	//    .param p2, "crl"    # Ljava/security/cert/X509CRL;
	//    .param p3, "reasonsMask"    # [Z
	//    .param p4, "signFlag"    # Z
	//    .param p5, "prevKey"    # Ljava/security/PublicKey;
	//    .param p6, "prevCert"    # Ljava/security/cert/X509Certificate;
	//    .param p7, "provider"    # Ljava/lang/String;
	//    .param p10, "validity"    # Ljava/util/Date;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1394        value = {
	// 1395            "(",
	// 1396            "Lsun/security/x509/X509CertImpl;",
	// 1397            "Lsun/security/x509/DistributionPoint;",
	// 1398            "Ljava/security/cert/X509CRL;",
	// 1399            "[ZZ",
	// 1400            "Ljava/security/PublicKey;",
	// 1401            "Ljava/security/cert/X509Certificate;",
	// 1402            "Ljava/lang/String;",
	// 1403            "Ljava/util/Set",
	// 1404            "<",
	// 1405            "Ljava/security/cert/TrustAnchor;",
	// 1406            ">;",
	// 1407            "Ljava/util/List",
	// 1408            "<",
	// 1409            "Ljava/security/cert/CertStore;",
	// 1410            ">;",
	// 1411            "Ljava/util/Date;",
	// 1412            ")Z"
	// 1413        }
	// 1414    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 1417        value = {
	// 1418            Ljava/security/cert/CRLException;,
	// 1419            Ljava/io/IOException;
	// 1420        }
	// 1421    .end annotation
	//    .local p8, "trustAnchors":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/TrustAnchor;>;"
	//    .local p9, "certStores":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/CertStore;>;"
	if ( !(sun::security::provider::certpath::DistributionPointFetcher::debug) )  
		goto label_cond_43;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::DistributionPointFetcher::debug->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("DistributionPointFetcher.verifyCRL: checking revocation status for\n  SN: ")))->append(sun::security::util::Debug::toHexString(certImpl->getSerialNumber()))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n  Subject: ")))->append(certImpl->getSubjectX500Principal())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n  Issuer: ")))->append(certImpl->getIssuerX500Principal())->toString());
label_cond_43:
	indirectCRL = 0x0;
	//    .local v28, "indirectCRL":Z
	crlImpl = sun::security::x509::X509CRLImpl::toImpl(crl);
	//    .local v13, "crlImpl":Lsun/security/x509/X509CRLImpl;
	idpExt = crlImpl->getIssuingDistributionPointExtension();
	//    .local v23, "idpExt":Lsun/security/x509/IssuingDistributionPointExtension;
	certIssuer = certImpl->getIssuerDN();
	certIssuer->checkCast("sun::security::x509::X500Name");
	//    .local v9, "certIssuer":Lsun/security/x509/X500Name;
	crlIssuer = crlImpl->getIssuerDN();
	crlIssuer->checkCast("sun::security::x509::X500Name");
	//    .local v14, "crlIssuer":Lsun/security/x509/X500Name;
	pointCrlIssuers = point->getCRLIssuer();
	//    .local v38, "pointCrlIssuers":Lsun/security/x509/GeneralNames;
	//    .local v37, "pointCrlIssuer":Lsun/security/x509/X500Name;
	if ( !(pointCrlIssuers) )  
		goto label_cond_c1;
	if ( !(idpExt) )  
		goto label_cond_78;
	cVar1 = idpExt->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("indirect_crl")));
	cVar1->checkCast("java::lang::Boolean");
	if ( !(cVar1->equals(java::lang::Boolean::FALSE)) )  
		goto label_cond_7b;
label_cond_78:
	return 0x0;
	// 1580    .line 350
label_cond_7b:
	match = 0x0;
	//    .local v31, "match":Z
	t = pointCrlIssuers->iterator();
	//    .end local v37    # "pointCrlIssuer":Lsun/security/x509/X500Name;
	//    .local v46, "t":Ljava/util/Iterator;, "Ljava/util/Iterator<Lsun/security/x509/GeneralName;>;"
label_cond_81:
label_goto_81:
	if ( match )     
		goto label_cond_a2;
	if ( !(t->hasNext()) )  
		goto label_cond_a2;
	cVar2 = t->next();
	cVar2->checkCast("sun::security::x509::GeneralName");
	name = cVar2->getName();
	//    .local v32, "name":Lsun/security/x509/GeneralNameInterface;
	if ( !(crlIssuer->equals(name)) )  
		goto label_cond_81;
	name->checkCast("sun::security::x509::X500Name");
	//    .local v37, "pointCrlIssuer":Lsun/security/x509/X500Name;
	match = 0x1;
	goto label_goto_81;
	// 1636    .line 359
	// 1637    .end local v32    # "name":Lsun/security/x509/GeneralNameInterface;
	// 1638    .end local v37    # "pointCrlIssuer":Lsun/security/x509/X500Name;
label_cond_a2:
	if ( match )     
		goto label_cond_a7;
	return 0x0;
	// 1647    .line 365
label_cond_a7:
	if ( !(sun::security::provider::certpath::DistributionPointFetcher::issues(certImpl, crlImpl, provider)) )  
		goto label_cond_be;
	cVar20 = certImpl->getPublicKey();
	//    .end local v31    # "match":Z
	//    .end local v46    # "t":Ljava/util/Iterator;, "Ljava/util/Iterator<Lsun/security/x509/GeneralName;>;"
label_cond_b5:
label_goto_b5:
	if ( indirectCRL )     
		goto label_cond_130;
	if ( !(( signFlag ^ 0x1)) )  
		goto label_cond_130;
	return 0x0;
	// 1680    .line 369
	// 1681    .restart local v31    # "match":Z
	// 1682    .restart local v46    # "t":Ljava/util/Iterator;, "Ljava/util/Iterator<Lsun/security/x509/GeneralName;>;"
label_cond_be:
	indirectCRL = 0x1;
	goto label_goto_b5;
	// 1688    .line 371
	// 1689    .end local v31    # "match":Z
	// 1690    .end local v46    # "t":Ljava/util/Iterator;, "Ljava/util/Iterator<Lsun/security/x509/GeneralName;>;"
	// 1691    .local v37, "pointCrlIssuer":Lsun/security/x509/X500Name;
label_cond_c1:
	if ( crlIssuer->equals(certIssuer) )     
		goto label_cond_fd;
	if ( !(sun::security::provider::certpath::DistributionPointFetcher::debug) )  
		goto label_cond_fa;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::DistributionPointFetcher::debug->println(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("crl issuer does not equal cert issuer.\ncrl issuer: ")))->append(crlIssuer)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("cert issuer: ")))->append(certIssuer)->toString());
label_cond_fa:
	return 0x0;
	// 1757    .line 380
label_cond_fd:
	certAKID = certImpl->getAuthKeyId();
	//    .local v8, "certAKID":Lsun/security/x509/KeyIdentifier;
	crlAKID = crlImpl->getAuthKeyId();
	//    .local v12, "crlAKID":Lsun/security/x509/KeyIdentifier;
	if ( !(certAKID) )  
		goto label_cond_109;
	if ( crlAKID )     
		goto label_cond_118;
label_cond_109:
	if ( !(sun::security::provider::certpath::DistributionPointFetcher::issues(certImpl, crlImpl, provider)) )  
		goto label_cond_b5;
	cVar20 = certImpl->getPublicKey();
	goto label_goto_b5;
	// 1794    .line 392
label_cond_118:
	if ( certAKID->equals(crlAKID) )     
		goto label_cond_b5;
	if ( !(sun::security::provider::certpath::DistributionPointFetcher::issues(certImpl, crlImpl, provider)) )  
		goto label_cond_12d;
	cVar20 = certImpl->getPublicKey();
	goto label_goto_b5;
	// 1820    .line 399
label_cond_12d:
	indirectCRL = 0x1;
	goto label_goto_b5;
	// 1826    .line 409
	// 1827    .end local v8    # "certAKID":Lsun/security/x509/KeyIdentifier;
	// 1828    .end local v12    # "crlAKID":Lsun/security/x509/KeyIdentifier;
	// 1829    .end local v37    # "pointCrlIssuer":Lsun/security/x509/X500Name;
label_cond_130:
	if ( !(idpExt) )  
		goto label_cond_345;
	idpPoint = idpExt->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("point")));
	idpPoint->checkCast("sun::security::x509::DistributionPointName");
	//    .local v26, "idpPoint":Lsun/security/x509/DistributionPointName;
	if ( !(idpPoint) )  
		goto label_cond_2bb;
	idpNames = idpPoint->getFullName();
	//    .local v25, "idpNames":Lsun/security/x509/GeneralNames;
	if ( idpNames )     
		goto label_cond_183;
	relativeName = idpPoint->getRelativeName();
	//    .local v44, "relativeName":Lsun/security/x509/RDN;
	if ( relativeName )     
		goto label_cond_15c;
	if ( !(sun::security::provider::certpath::DistributionPointFetcher::debug) )  
		goto label_cond_159;
	sun::security::provider::certpath::DistributionPointFetcher::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("IDP must be relative or full DN")));
label_cond_159:
	return 0x0;
	// 1887    .line 422
label_cond_15c:
	if ( !(sun::security::provider::certpath::DistributionPointFetcher::debug) )  
		goto label_cond_17d;
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::DistributionPointFetcher::debug->println(cVar7->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("IDP relativeName:")))->append(relativeName)->toString());
label_cond_17d:
	idpNames = sun::security::provider::certpath::DistributionPointFetcher::getFullNames(crlIssuer, relativeName);
	//    .end local v44    # "relativeName":Lsun/security/x509/RDN;
label_cond_183:
	if ( point->getFullName() )     
		goto label_cond_18f;
	if ( !(point->getRelativeName()) )  
		goto label_cond_281;
label_cond_18f:
	//    .local v40, "pointNames":Lsun/security/x509/GeneralNames;
	if ( point->getFullName() )     
		goto label_cond_1f0;
	relativeName = point->getRelativeName();
	//    .restart local v44    # "relativeName":Lsun/security/x509/RDN;
	if ( relativeName )     
		goto label_cond_1aa;
	if ( !(sun::security::provider::certpath::DistributionPointFetcher::debug) )  
		goto label_cond_1a7;
	sun::security::provider::certpath::DistributionPointFetcher::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("DP must be relative or full DN")));
label_cond_1a7:
	return 0x0;
	// 1981    .line 441
label_cond_1aa:
	if ( !(sun::security::provider::certpath::DistributionPointFetcher::debug) )  
		goto label_cond_1cb;
	cVar8 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::DistributionPointFetcher::debug->println(cVar8->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("DP relativeName:")))->append(relativeName)->toString());
label_cond_1cb:
	if ( !(indirectCRL) )  
		goto label_cond_269;
	if ( pointCrlIssuers->size() == 0x1 )
		goto label_cond_1e8;
	if ( !(sun::security::provider::certpath::DistributionPointFetcher::debug) )  
		goto label_cond_1e5;
	sun::security::provider::certpath::DistributionPointFetcher::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("must only be one CRL issuer when relative name present")));
label_cond_1e5:
	return 0x0;
	// 2049    .line 454
label_cond_1e8:
	//    .end local v44    # "relativeName":Lsun/security/x509/RDN;
label_cond_1f0:
label_goto_1f0:
	match = 0x0;
	//    .restart local v31    # "match":Z
	i = idpNames->iterator();
	//    .end local v31    # "match":Z
	//    .local v21, "i":Ljava/util/Iterator;, "Ljava/util/Iterator<Lsun/security/x509/GeneralName;>;"
label_cond_1f6:
	if ( match )     
		goto label_cond_270;
	if ( !(i->hasNext()) )  
		goto label_cond_270;
	cVar9 = i->next();
	cVar9->checkCast("sun::security::x509::GeneralName");
	idpName = cVar9->getName();
	//    .local v24, "idpName":Lsun/security/x509/GeneralNameInterface;
	if ( !(sun::security::provider::certpath::DistributionPointFetcher::debug) )  
		goto label_cond_229;
	cVar10 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::DistributionPointFetcher::debug->println(cVar10->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("idpName: ")))->append(idpName)->toString());
label_cond_229:
	p = sun::security::provider::certpath::DistributionPointFetcher::getFullNames(0x0, relativeName)->iterator();
	//    .local v35, "p":Ljava/util/Iterator;, "Ljava/util/Iterator<Lsun/security/x509/GeneralName;>;"
label_goto_22d:
	if ( match )     
		goto label_cond_1f6;
	if ( !(p->hasNext()) )  
		goto label_cond_1f6;
	cVar11 = p->next();
	cVar11->checkCast("sun::security::x509::GeneralName");
	pointName = cVar11->getName();
	//    .local v39, "pointName":Lsun/security/x509/GeneralNameInterface;
	if ( !(sun::security::provider::certpath::DistributionPointFetcher::debug) )  
		goto label_cond_260;
	cVar12 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::DistributionPointFetcher::debug->println(cVar12->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("pointName: ")))->append(pointName)->toString());
label_cond_260:
	match = idpName->equals(pointName);
	//    .local v31, "match":Z
	goto label_goto_22d;
	// 2203    .line 457
	// 2204    .end local v21    # "i":Ljava/util/Iterator;, "Ljava/util/Iterator<Lsun/security/x509/GeneralName;>;"
	// 2205    .end local v24    # "idpName":Lsun/security/x509/GeneralNameInterface;
	// 2206    .end local v31    # "match":Z
	// 2207    .end local v35    # "p":Ljava/util/Iterator;, "Ljava/util/Iterator<Lsun/security/x509/GeneralName;>;"
	// 2208    .end local v39    # "pointName":Lsun/security/x509/GeneralNameInterface;
	// 2209    .restart local v44    # "relativeName":Lsun/security/x509/RDN;
label_cond_269:
	sun::security::provider::certpath::DistributionPointFetcher::getFullNames(certIssuer, relativeName);
	goto label_goto_1f0;
	// 2219    .line 476
	// 2220    .end local v44    # "relativeName":Lsun/security/x509/RDN;
	// 2221    .restart local v21    # "i":Ljava/util/Iterator;, "Ljava/util/Iterator<Lsun/security/x509/GeneralName;>;"
label_cond_270:
	if ( match )     
		goto label_cond_2bb;
	if ( !(sun::security::provider::certpath::DistributionPointFetcher::debug) )  
		goto label_cond_27e;
	sun::security::provider::certpath::DistributionPointFetcher::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("IDP name does not match DP name")));
label_cond_27e:
	return 0x0;
	// 2243    .line 489
	// 2244    .end local v21    # "i":Ljava/util/Iterator;, "Ljava/util/Iterator<Lsun/security/x509/GeneralName;>;"
	// 2245    .end local v40    # "pointNames":Lsun/security/x509/GeneralNames;
label_cond_281:
	match = 0x0;
	//    .local v31, "match":Z
	t = pointCrlIssuers->iterator();
	//    .end local v31    # "match":Z
	//    .restart local v46    # "t":Ljava/util/Iterator;, "Ljava/util/Iterator<Lsun/security/x509/GeneralName;>;"
label_cond_287:
	if ( match )     
		goto label_cond_2b6;
	if ( !(t->hasNext()) )  
		goto label_cond_2b6;
	cVar13 = t->next();
	cVar13->checkCast("sun::security::x509::GeneralName");
	//    .local v15, "crlIssuerName":Lsun/security/x509/GeneralNameInterface;
	i = idpNames->iterator();
	//    .restart local v21    # "i":Ljava/util/Iterator;, "Ljava/util/Iterator<Lsun/security/x509/GeneralName;>;"
label_goto_29d:
	if ( match )     
		goto label_cond_287;
	if ( !(i->hasNext()) )  
		goto label_cond_287;
	cVar14 = i->next();
	cVar14->checkCast("sun::security::x509::GeneralName");
	//    .restart local v24    # "idpName":Lsun/security/x509/GeneralNameInterface;
	match = cVar13->getName()->equals(cVar14->getName());
	//    .local v31, "match":Z
	goto label_goto_29d;
	// 2319    .line 499
	// 2320    .end local v15    # "crlIssuerName":Lsun/security/x509/GeneralNameInterface;
	// 2321    .end local v21    # "i":Ljava/util/Iterator;, "Ljava/util/Iterator<Lsun/security/x509/GeneralName;>;"
	// 2322    .end local v24    # "idpName":Lsun/security/x509/GeneralNameInterface;
	// 2323    .end local v31    # "match":Z
label_cond_2b6:
	if ( match )     
		goto label_cond_2bb;
	return 0x0;
	// 2332    .line 508
	// 2333    .end local v25    # "idpNames":Lsun/security/x509/GeneralNames;
	// 2334    .end local v46    # "t":Ljava/util/Iterator;, "Ljava/util/Iterator<Lsun/security/x509/GeneralName;>;"
label_cond_2bb:
	b = idpExt->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("only_user_certs")));
	b->checkCast("java::lang::Boolean");
	//    .local v6, "b":Ljava/lang/Boolean;
	if ( !(b->equals(java::lang::Boolean::TRUE)) )  
		goto label_cond_2ed;
	if ( certImpl->getBasicConstraints() == -0x1 )
		goto label_cond_2ed;
	if ( !(sun::security::provider::certpath::DistributionPointFetcher::debug) )  
		goto label_cond_2ea;
	sun::security::provider::certpath::DistributionPointFetcher::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("cert must be a EE cert")));
label_cond_2ea:
	return 0x0;
	// 2391    .line 519
label_cond_2ed:
	b = idpExt->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("only_ca_certs")));
	//    .end local v6    # "b":Ljava/lang/Boolean;
	b->checkCast("java::lang::Boolean");
	//    .restart local v6    # "b":Ljava/lang/Boolean;
	if ( !(b->equals(java::lang::Boolean::TRUE)) )  
		goto label_cond_31f;
	if ( certImpl->getBasicConstraints() != -0x1 )
		goto label_cond_31f;
	if ( !(sun::security::provider::certpath::DistributionPointFetcher::debug) )  
		goto label_cond_31c;
	sun::security::provider::certpath::DistributionPointFetcher::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("cert must be a CA cert")));
label_cond_31c:
	return 0x0;
	// 2449    .line 530
label_cond_31f:
	b = idpExt->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("only_attribute_certs")));
	//    .end local v6    # "b":Ljava/lang/Boolean;
	b->checkCast("java::lang::Boolean");
	//    .restart local v6    # "b":Ljava/lang/Boolean;
	if ( !(b->equals(java::lang::Boolean::TRUE)) )  
		goto label_cond_345;
	if ( !(sun::security::provider::certpath::DistributionPointFetcher::debug) )  
		goto label_cond_342;
	sun::security::provider::certpath::DistributionPointFetcher::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("cert must not be an AA cert")));
label_cond_342:
	return 0x0;
	// 2495    .line 540
	// 2496    .end local v6    # "b":Ljava/lang/Boolean;
	// 2497    .end local v26    # "idpPoint":Lsun/security/x509/DistributionPointName;
label_cond_345:
	interimReasonsMask = std::make_shared<std::vector<bool[]>>(0x9);
	//    .local v29, "interimReasonsMask":[Z
	//    .local v43, "reasons":Lsun/security/x509/ReasonFlags;
	if ( !(idpExt) )  
		goto label_cond_35e;
	reasons = idpExt->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("reasons")));
	//    .end local v43    # "reasons":Lsun/security/x509/ReasonFlags;
	reasons->checkCast("sun::security::x509::ReasonFlags");
label_cond_35e:
	pointReasonFlags = point->getReasonFlags();
	//    .local v41, "pointReasonFlags":[Z
	if ( !(0x0) )  
		goto label_cond_3d5;
	if ( !(pointReasonFlags) )  
		goto label_cond_39e;
	idpReasonFlags = reasons->getFlags();
	//    .local v27, "idpReasonFlags":[Z
	i = 0x0;
	//    .local v20, "i":I
label_goto_36c:
	if ( i >= interimReasonsMask->size() )
		goto label_cond_3a8;
	if ( i >= idpReasonFlags->size() )
		goto label_cond_39b;
	if ( !(idpReasonFlags[i]) )  
		goto label_cond_39b;
	if ( i >= pointReasonFlags->size() )
		goto label_cond_398;
	cVar15 = pointReasonFlags[i];
label_goto_393:
	interimReasonsMask[i] = cVar15;
	i = ( i + 0x1);
	goto label_goto_36c;
	// 2607    .line 556
label_cond_398:
	cVar15 = 0x0;
	goto label_goto_393;
	// 2613    .line 555
label_cond_39b:
	cVar15 = 0x0;
	goto label_goto_393;
	// 2619    .line 562
	// 2620    .end local v20    # "i":I
	// 2621    .end local v27    # "idpReasonFlags":[Z
label_cond_39e:
	interimReasonsMask = reasons->getFlags()->clone();
	//    .end local v29    # "interimReasonsMask":[Z
	interimReasonsMask->checkCast("bool[]");
	//    .restart local v29    # "interimReasonsMask":[Z
label_cond_3a8:
label_goto_3a8:
	oneOrMore = 0x0;
	//    .local v34, "oneOrMore":Z
	i = 0x0;
	//    .restart local v20    # "i":I
label_goto_3ac:
	if ( i >= interimReasonsMask->size() )
		goto label_cond_3ef;
	if ( !(( oneOrMore ^ 0x1)) )  
		goto label_cond_3ef;
	if ( !(interimReasonsMask[i]) )  
		goto label_cond_3d2;
	if ( i >= reasonsMask->size() )
		goto label_cond_3ec;
	cVar18 = reasonsMask[i];
label_goto_3cc:
	if ( !(( cVar18 ^ 0x1)) )  
		goto label_cond_3d2;
	oneOrMore = 0x1;
label_cond_3d2:
	i = ( i + 0x1);
	goto label_goto_3ac;
	// 2697    .line 564
	// 2698    .end local v20    # "i":I
	// 2699    .end local v34    # "oneOrMore":Z
label_cond_3d5:
	if ( !(idpExt) )  
		goto label_cond_3d9;
	if ( reasons )     
		goto label_cond_3a8;
label_cond_3d9:
	if ( !(pointReasonFlags) )  
		goto label_cond_3e2;
	interimReasonsMask = pointReasonFlags->clone();
	//    .end local v29    # "interimReasonsMask":[Z
	interimReasonsMask->checkCast("bool[]");
	//    .restart local v29    # "interimReasonsMask":[Z
	goto label_goto_3a8;
	// 2720    .line 570
label_cond_3e2:
	java::util::Arrays::fill(interimReasonsMask, 0x1);
	goto label_goto_3a8;
	// 2732    .line 579
	// 2733    .restart local v20    # "i":I
	// 2734    .restart local v34    # "oneOrMore":Z
label_cond_3ec:
	cVar18 = 0x0;
	goto label_goto_3cc;
	// 2740    .line 584
label_cond_3ef:
	if ( oneOrMore )     
		goto label_cond_3f4;
	return 0x0;
	// 2749    .line 591
label_cond_3f4:
	if ( !(indirectCRL) )  
		goto label_cond_48f;
	certSel = std::make_shared<java::security::cert::X509CertSelector>();
	//    .local v10, "certSel":Ljava/security/cert/X509CertSelector;
	certSel->setSubject(crlIssuer->asX500Principal());
	crlSign = std::make_shared<std::vector<bool[]>>(0x7);
	//    .local v16, "crlSign":[Z
	?;
	certSel->setKeyUsage(crlSign);
	akidext = crlImpl->getAuthKeyIdExtension();
	//    .local v4, "akidext":Lsun/security/x509/AuthorityKeyIdentifierExtension;
	if ( !(akidext) )  
		goto label_cond_43b;
	kid = akidext->getEncodedKeyIdentifier();
	//    .local v30, "kid":[B
	if ( !(kid) )  
		goto label_cond_425;
	certSel->setSubjectKeyIdentifier(kid);
label_cond_425:
	asn = akidext->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("serial_number")));
	asn->checkCast("sun::security::x509::SerialNumber");
	//    .local v5, "asn":Lsun/security/x509/SerialNumber;
	if ( !(asn) )  
		goto label_cond_43b;
	certSel->setSerialNumber(asn->getNumber());
	//    .end local v5    # "asn":Lsun/security/x509/SerialNumber;
	//    .end local v30    # "kid":[B
label_cond_43b:
	var424 = newTrustAnchors(trustAnchors);
	//    .local v33, "newTrustAnchors":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/TrustAnchor;>;"
	if ( !(cVar20) )  
		goto label_cond_45c;
	if ( !(prevCert) )  
		goto label_cond_4ef;
	var429 = temporary(prevCert, 0x0);
	//    .local v47, "temporary":Ljava/security/cert/TrustAnchor;
label_goto_455:
	newTrustAnchors->add(temporary);
	//    .end local v47    # "temporary":Ljava/security/cert/TrustAnchor;
label_cond_45c:
	0x0;
	//    .local v36, "params":Ljava/security/cert/PKIXBuilderParameters;
	try {
	//label_try_start_45e:
	//    .end local v36    # "params":Ljava/security/cert/PKIXBuilderParameters;
	var438 = params(newTrustAnchors, certSel);
	//label_try_end_467:
	}
	catch (java::security::InvalidAlgorithmParameterException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_504;
	}
	//    .catch Ljava/security/InvalidAlgorithmParameterException; {:try_start_45e .. :try_end_467} :catch_504
	//    .local v36, "params":Ljava/security/cert/PKIXBuilderParameters;
	params->setCertStores(certStores);
	params->setSigProvider(provider);
	params->setDate(validity);
	try {
	//label_try_start_47c:
	//    .local v7, "builder":Ljava/security/cert/CertPathBuilder;
	result = java::security::cert::CertPathBuilder::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKIX")))->build(params);
	result->checkCast("java::security::cert::PKIXCertPathBuilderResult");
	//    .local v45, "result":Ljava/security/cert/PKIXCertPathBuilderResult;
	//label_try_end_48e:
	}
	catch (java::security::GeneralSecurityException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_50f;
	}
	//    .catch Ljava/security/GeneralSecurityException; {:try_start_47c .. :try_end_48e} :catch_50f
	cVar20 = result->getPublicKey();
	//    .end local v4    # "akidext":Lsun/security/x509/AuthorityKeyIdentifierExtension;
	//    .end local v7    # "builder":Ljava/security/cert/CertPathBuilder;
	//    .end local v10    # "certSel":Ljava/security/cert/X509CertSelector;
	//    .end local v16    # "crlSign":[Z
	//    .end local v33    # "newTrustAnchors":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/TrustAnchor;>;"
	//    .end local v36    # "params":Ljava/security/cert/PKIXBuilderParameters;
	//    .end local v45    # "result":Ljava/security/cert/PKIXCertPathBuilderResult;
label_cond_48f:
	try {
	//label_try_start_48f:
	sun::security::provider::certpath::AlgorithmChecker::check(cVar20, crl);
	//label_try_end_496:
	}
	catch (java::security::cert::CertPathValidatorException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_51a;
	}
	//    .catch Ljava/security/cert/CertPathValidatorException; {:try_start_48f .. :try_end_496} :catch_51a
	try {
	//label_try_start_496:
	crl->verify(cVar20, provider);
	//label_try_end_49f:
	}
	catch (java::security::GeneralSecurityException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_53d;
	}
	//    .catch Ljava/security/GeneralSecurityException; {:try_start_496 .. :try_end_49f} :catch_53d
	unresCritExts = crl->getCriticalExtensionOIDs();
	//    .local v48, "unresCritExts":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	if ( !(unresCritExts) )  
		goto label_cond_550;
	unresCritExts->remove(sun::security::x509::PKIXExtensions::IssuingDistributionPoint_Id->toString());
	if ( unresCritExts->isEmpty() )     
		goto label_cond_550;
	if ( !(sun::security::provider::certpath::DistributionPointFetcher::debug) )  
		goto label_cond_54d;
	cVar21 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::DistributionPointFetcher::debug->println(cVar21->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unrecognized critical extension(s) in CRL: ")))->append(unresCritExts)->toString());
	ext_S_iterator = unresCritExts->iterator();
	//    .local v19, "ext$iterator":Ljava/util/Iterator;
label_goto_4d9:
	if ( !(ext_S_iterator->hasNext()) )  
		goto label_cond_54d;
	ext = ext_S_iterator->next();
	ext->checkCast("java::lang::String");
	//    .local v18, "ext":Ljava/lang/String;
	sun::security::provider::certpath::DistributionPointFetcher::debug->println(ext);
	goto label_goto_4d9;
	// 3060    .line 640
	// 3061    .end local v18    # "ext":Ljava/lang/String;
	// 3062    .end local v19    # "ext$iterator":Ljava/util/Iterator;
	// 3063    .end local v48    # "unresCritExts":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 3064    .restart local v4    # "akidext":Lsun/security/x509/AuthorityKeyIdentifierExtension;
	// 3065    .restart local v10    # "certSel":Ljava/security/cert/X509CertSelector;
	// 3066    .restart local v16    # "crlSign":[Z
	// 3067    .restart local v33    # "newTrustAnchors":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/TrustAnchor;>;"
label_cond_4ef:
	//    .local v42, "principal":Ljavax/security/auth/x500/X500Principal;
	var501 = temporary(certImpl->getIssuerX500Principal(), cVar20, 0x0);
	//    .restart local v47    # "temporary":Ljava/security/cert/TrustAnchor;
	goto label_goto_455;
	// 3092    .line 649
	// 3093    .end local v42    # "principal":Ljavax/security/auth/x500/X500Principal;
	// 3094    .end local v47    # "temporary":Ljava/security/cert/TrustAnchor;
label_catch_504:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v22, "iape":Ljava/security/InvalidAlgorithmParameterException;
	tryCatchExcetionList.pop_back();
	var508 = cVar22(getCatchExcetionFromList);
	// throw
	throw cVar22;
	// 3110    .line 660
	// 3111    .end local v22    # "iape":Ljava/security/InvalidAlgorithmParameterException;
	// 3112    .restart local v36    # "params":Ljava/security/cert/PKIXBuilderParameters;
label_catch_50f:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v17, "e":Ljava/security/GeneralSecurityException;
	tryCatchExcetionList.pop_back();
	var513 = cVar23(getCatchExcetionFromList);
	// throw
	throw cVar23;
	// 3128    .line 668
	// 3129    .end local v4    # "akidext":Lsun/security/x509/AuthorityKeyIdentifierExtension;
	// 3130    .end local v10    # "certSel":Ljava/security/cert/X509CertSelector;
	// 3131    .end local v16    # "crlSign":[Z
	// 3132    .end local v17    # "e":Ljava/security/GeneralSecurityException;
	// 3133    .end local v33    # "newTrustAnchors":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/TrustAnchor;>;"
	// 3134    .end local v36    # "params":Ljava/security/cert/PKIXBuilderParameters;
label_catch_51a:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v11, "cpve":Ljava/security/cert/CertPathValidatorException;
	if ( !(sun::security::provider::certpath::DistributionPointFetcher::debug) )  
		goto label_cond_53a;
	cVar24 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::DistributionPointFetcher::debug->println(cVar24->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("CRL signature algorithm check failed: ")))->append(getCatchExcetionFromList)->toString());
label_cond_53a:
	return 0x0;
	// 3175    .line 678
	// 3176    .end local v11    # "cpve":Ljava/security/cert/CertPathValidatorException;
label_catch_53d:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v17    # "e":Ljava/security/GeneralSecurityException;
	if ( !(sun::security::provider::certpath::DistributionPointFetcher::debug) )  
		goto label_cond_54a;
	sun::security::provider::certpath::DistributionPointFetcher::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("CRL signature failed to verify")));
label_cond_54a:
	return 0x0;
	// 3199    .line 698
	// 3200    .end local v17    # "e":Ljava/security/GeneralSecurityException;
	// 3201    .restart local v48    # "unresCritExts":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_cond_54d:
	return 0x0;
	// 3207    .line 703
label_cond_550:
	i = 0x0;
label_goto_552:
	if ( i >= reasonsMask->size() )
		goto label_cond_579;
	if ( reasonsMask[i] )     
		goto label_cond_573;
	if ( i >= interimReasonsMask->size() )
		goto label_cond_576;
	cVar25 = interimReasonsMask[i];
label_goto_56e:
	reasonsMask[i] = cVar25;
	i = ( i + 0x1);
	goto label_goto_552;
	// 3253    .line 704
label_cond_573:
	cVar25 = 0x1;
	goto label_goto_56e;
	// 3259    .line 705
label_cond_576:
	cVar25 = 0x0;
	goto label_goto_56e;
	// 3265    .line 707
label_cond_579:
	return 0x1;
	// 3271    .line 594
	// 3272    :array_57c
	// 3273    .array-data 1
	// 3274        0x0t
	// 3275        0x0t
	// 3276        0x0t
	// 3277        0x0t
	// 3278        0x0t
	// 3279        0x0t
	// 3280        0x1t
	// 3281    .end array-data

}


