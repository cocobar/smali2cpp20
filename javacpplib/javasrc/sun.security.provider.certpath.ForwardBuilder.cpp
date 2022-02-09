// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\ForwardBuilder.smali
#include "java2ctype.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.math.BigInteger.h"
#include "java.security.GeneralSecurityException.h"
#include "java.security.InvalidKeyException.h"
#include "java.security.PublicKey.h"
#include "java.security.cert.CertPath.h"
#include "java.security.cert.CertPathValidatorException.h"
#include "java.security.cert.CertStore.h"
#include "java.security.cert.CertStoreException.h"
#include "java.security.cert.CertificateException.h"
#include "java.security.cert.PKIXCertPathChecker.h"
#include "java.security.cert.PKIXReason.h"
#include "java.security.cert.TrustAnchor.h"
#include "java.security.cert.X509CertSelector.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.ArrayList.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.Date.h"
#include "java.util.HashSet.h"
#include "java.util.Iterator.h"
#include "java.util.LinkedList.h"
#include "java.util.List.h"
#include "java.util.Set.h"
#include "java.util.TreeSet.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.security.provider.certpath.AdaptableX509CertSelector.h"
#include "sun.security.provider.certpath.Builder.h"
#include "sun.security.provider.certpath.CertPathHelper.h"
#include "sun.security.provider.certpath.ForwardBuilder_S_PKIXCertComparator.h"
#include "sun.security.provider.certpath.ForwardBuilder.h"
#include "sun.security.provider.certpath.ForwardState.h"
#include "sun.security.provider.certpath.KeyChecker.h"
#include "sun.security.provider.certpath.PKIX_S_BuilderParams.h"
#include "sun.security.provider.certpath.PKIX.h"
#include "sun.security.provider.certpath.State.h"
#include "sun.security.provider.certpath.URICertStore.h"
#include "sun.security.util.Debug.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AccessDescription.h"
#include "sun.security.x509.AuthorityInfoAccessExtension.h"
#include "sun.security.x509.PKIXExtensions.h"
#include "sun.security.x509.X509CertImpl.h"

static sun::security::provider::certpath::ForwardBuilder::debug;
// .method static synthetic -get0()Lsun/security/util/Debug;
std::shared_ptr<sun::security::util::Debug> sun::security::provider::certpath::ForwardBuilder::_get0()
{
	
	return sun::security::provider::certpath::ForwardBuilder::debug;

}
// .method static constructor <clinit>()V
void sun::security::provider::certpath::ForwardBuilder::static_cinit()
{
	
	sun::security::provider::certpath::ForwardBuilder::debug = sun::security::util::Debug::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("certpath")));
	return;

}
// .method constructor <init>(Lsun/security/provider/certpath/PKIX$BuilderParams;Z)V
sun::security::provider::certpath::ForwardBuilder::ForwardBuilder(std::shared_ptr<sun::security::provider::certpath::PKIX_S_BuilderParams> buildParams,bool searchAllCertStores)
{
	
	std::shared_ptr<java::util::HashSet> cVar0;
	std::shared_ptr<java::util::HashSet> cVar1;
	std::shared_ptr<java::util::Iterator> anchor_S_iterator;
	std::shared_ptr<java::security::cert::TrustAnchor> anchor;
	std::shared_ptr<java::lang::Object> trustedCert;
	
	//    .param p1, "buildParams"    # Lsun/security/provider/certpath/PKIX$BuilderParams;
	//    .param p2, "searchAllCertStores"    # Z
	sun::security::provider::certpath::Builder::(buildParams);
	this->searchAllCertStores = 0x1;
	this->trustAnchors = buildParams->trustAnchors();
	cVar0 = std::make_shared<java::util::HashSet>(this->trustAnchors->size());
	this->trustedCerts = cVar0;
	cVar1 = std::make_shared<java::util::HashSet>(this->trustAnchors->size());
	this->trustedSubjectDNs = cVar1;
	anchor_S_iterator = this->trustAnchors->iterator();
	//    .local v1, "anchor$iterator":Ljava/util/Iterator;
label_goto_2c:
	if ( !(anchor_S_iterator->hasNext()) )  
		goto label_cond_57;
	anchor = anchor_S_iterator->next();
	anchor->checkCast("java::security::cert::TrustAnchor");
	//    .local v0, "anchor":Ljava/security/cert/TrustAnchor;
	trustedCert = anchor->getTrustedCert();
	//    .local v2, "trustedCert":Ljava/security/cert/X509Certificate;
	if ( !(trustedCert) )  
		goto label_cond_4d;
	this->trustedCerts->add(trustedCert);
	this->trustedSubjectDNs->add(trustedCert->getSubjectX500Principal());
	goto label_goto_2c;
	// 183    .line 93
label_cond_4d:
	this->trustedSubjectDNs->add(anchor->getCA());
	goto label_goto_2c;
	// 195    .line 96
	// 196    .end local v0    # "anchor":Ljava/security/cert/TrustAnchor;
	// 197    .end local v2    # "trustedCert":Ljava/security/cert/X509Certificate;
label_cond_57:
	this->searchAllCertStores = searchAllCertStores;
	return;

}
// .method private getCerts(Lsun/security/x509/AuthorityInfoAccessExtension;Ljava/util/Collection;)Z
bool sun::security::provider::certpath::ForwardBuilder::getCerts(std::shared_ptr<sun::security::x509::AuthorityInfoAccessExtension> aiaExt,std::shared_ptr<java::util::Collection<java::security::cert::X509Certificate>> certs)
{
	
	bool cVar0;
	std::shared_ptr<java::util::List> adList;
	std::shared_ptr<java::util::Iterator> ad_S_iterator;
	std::shared_ptr<sun::security::x509::AccessDescription> ad;
	std::shared_ptr<java::security::cert::CertStore> cs;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "aiaExt"    # Lsun/security/x509/AuthorityInfoAccessExtension;
	//    .annotation system Ldalvik/annotation/Signature;
	// 209        value = {
	// 210            "(",
	// 211            "Lsun/security/x509/AuthorityInfoAccessExtension;",
	// 212            "Ljava/util/Collection",
	// 213            "<",
	// 214            "Ljava/security/cert/X509Certificate;",
	// 215            ">;)Z"
	// 216        }
	// 217    .end annotation
	//    .local p2, "certs":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/security/cert/X509Certificate;>;"
	cVar0 = 0x0;
	if ( sun::security::provider::certpath::Builder::USE_AIA )     
		goto label_cond_6;
	return cVar0;
	// 231    .line 362
label_cond_6:
	adList = aiaExt->getAccessDescriptions();
	//    .local v2, "adList":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/AccessDescription;>;"
	if ( !(adList) )  
		goto label_cond_12;
	if ( !(adList->isEmpty()) )  
		goto label_cond_13;
label_cond_12:
	return cVar0;
	// 251    .line 367
label_cond_13:
	//    .local v3, "add":Z
	ad_S_iterator = adList->iterator();
	//    .local v1, "ad$iterator":Ljava/util/Iterator;
label_cond_18:
label_goto_18:
	if ( !(ad_S_iterator->hasNext()) )  
		goto label_cond_4e;
	ad = ad_S_iterator->next();
	ad->checkCast("sun::security::x509::AccessDescription");
	//    .local v0, "ad":Lsun/security/x509/AccessDescription;
	cs = sun::security::provider::certpath::URICertStore::getInstance(ad);
	//    .local v4, "cs":Ljava/security/cert/CertStore;
	if ( !(cs) )  
		goto label_cond_18;
	try {
	//label_try_start_2a:
	if ( !(certs->addAll(cs->getCertificates(this->caSelector))) )  
		goto label_cond_18;
	0x1;
	//label_try_end_39:
	}
	catch (java::security::cert::CertStoreException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3d;
	}
	//    .catch Ljava/security/cert/CertStoreException; {:try_start_2a .. :try_end_39} :catch_3d
	if ( this->searchAllCertStores )     
		goto label_cond_18;
	return 0x1;
	// 316    .line 379
label_catch_3d:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v5, "cse":Ljava/security/cert/CertStoreException;
	if ( !(sun::security::provider::certpath::ForwardBuilder::debug) )  
		goto label_cond_18;
	sun::security::provider::certpath::ForwardBuilder::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("exception getting certs from CertStore:")));
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_18;
	// 338    .line 387
	// 339    .end local v0    # "ad":Lsun/security/x509/AccessDescription;
	// 340    .end local v4    # "cs":Ljava/security/cert/CertStore;
	// 341    .end local v5    # "cse":Ljava/security/cert/CertStoreException;
label_cond_4e:
	return 0x0;

}
// .method private getMatchingCACerts(Lsun/security/provider/certpath/ForwardState;Ljava/util/List;Ljava/util/Collection;)V
void sun::security::provider::certpath::ForwardBuilder::getMatchingCACerts(std::shared_ptr<sun::security::provider::certpath::ForwardState> currentState,std::shared_ptr<java::util::List<java::security::cert::CertStore>> certStores,std::shared_ptr<java::util::Collection<java::security::cert::X509Certificate>> caCerts)
{
	
	int cVar0;
	std::shared_ptr<java::security::cert::X509CertSelector> cVar1;
	std::shared_ptr<java::security::cert::X509CertSelector> sel;
	std::shared_ptr<java::util::Iterator> trustedCert_S_iterator;
	std::shared_ptr<java::security::cert::X509Certificate> trustedCert;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<sun::security::x509::AuthorityInfoAccessExtension> aiaExt;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<sun::security::provider::certpath::AdaptableX509CertSelector> cVar3;
	std::shared_ptr<sun::security::provider::certpath::AdaptableX509CertSelector> sel;
	
	//    .param p1, "currentState"    # Lsun/security/provider/certpath/ForwardState;
	//    .annotation system Ldalvik/annotation/Signature;
	// 350        value = {
	// 351            "(",
	// 352            "Lsun/security/provider/certpath/ForwardState;",
	// 353            "Ljava/util/List",
	// 354            "<",
	// 355            "Ljava/security/cert/CertStore;",
	// 356            ">;",
	// 357            "Ljava/util/Collection",
	// 358            "<",
	// 359            "Ljava/security/cert/X509Certificate;",
	// 360            ">;)V"
	// 361        }
	// 362    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 365        value = {
	// 366            Ljava/io/IOException;
	// 367        }
	// 368    .end annotation
	//    .local p2, "certStores":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/CertStore;>;"
	//    .local p3, "caCerts":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/security/cert/X509Certificate;>;"
	cVar0 = -0x1;
	if ( !(sun::security::provider::certpath::ForwardBuilder::debug) )  
		goto label_cond_d;
	sun::security::provider::certpath::ForwardBuilder::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("ForwardBuilder.getMatchingCACerts()...")));
label_cond_d:
	//    .local v1, "initialSize":I
	0x0;
	//    .local v3, "sel":Ljava/security/cert/X509CertSelector;
	if ( !(currentState->isInitial()) )  
		goto label_cond_ba;
	if ( this->targetCertConstraints->getBasicConstraints() != -0x2 )
		goto label_cond_22;
	return;
	// 419    .line 212
label_cond_22:
	if ( !(sun::security::provider::certpath::ForwardBuilder::debug) )  
		goto label_cond_2e;
	sun::security::provider::certpath::ForwardBuilder::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("ForwardBuilder.getMatchingCACerts(): the target is a CA")));
label_cond_2e:
	if ( this->caTargetSelector )     
		goto label_cond_4d;
	cVar1 = this->targetCertConstraints->clone();
	cVar1->checkCast("java::security::cert::X509CertSelector");
	this->caTargetSelector = cVar1;
	if ( !(this->buildParams->explicitPolicyRequired()) )  
		goto label_cond_4d;
	this->caTargetSelector->setPolicy(this->getMatchingPolicies());
label_cond_4d:
	sel = this->caTargetSelector;
	//    .local v3, "sel":Ljava/security/cert/X509CertSelector;
label_goto_4f:
	sel->setBasicConstraints(cVar0);
	trustedCert_S_iterator = this->trustedCerts->iterator();
	//    .local v5, "trustedCert$iterator":Ljava/util/Iterator;
label_cond_58:
	if ( !(trustedCert_S_iterator->hasNext()) )  
		goto label_cond_f9;
	trustedCert = trustedCert_S_iterator->next();
	trustedCert->checkCast("java::security::cert::X509Certificate");
	//    .local v4, "trustedCert":Ljava/security/cert/X509Certificate;
	if ( !(sel->match(trustedCert)) )  
		goto label_cond_58;
	if ( !(sun::security::provider::certpath::ForwardBuilder::debug) )  
		goto label_cond_ad;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::ForwardBuilder::debug->println(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("ForwardBuilder.getMatchingCACerts: found matching trust anchor.\n  SN: ")))->append(sun::security::util::Debug::toHexString(trustedCert->getSerialNumber()))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n  Subject: ")))->append(trustedCert->getSubjectX500Principal())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n  Issuer: ")))->append(trustedCert->getIssuerX500Principal())->toString());
label_cond_ad:
	if ( !(caCerts->add(trustedCert)) )  
		goto label_cond_58;
	if ( !(( this->searchAllCertStores ^ 0x1)) )  
		goto label_cond_58;
	return;
	// 597    .line 238
	// 598    .end local v4    # "trustedCert":Ljava/security/cert/X509Certificate;
	// 599    .end local v5    # "trustedCert$iterator":Ljava/util/Iterator;
	// 600    .local v3, "sel":Ljava/security/cert/X509CertSelector;
label_cond_ba:
	if ( this->caSelector )     
		goto label_cond_d6;
	cVar3 = std::make_shared<sun::security::provider::certpath::AdaptableX509CertSelector>();
	this->caSelector = cVar3;
	if ( !(this->buildParams->explicitPolicyRequired()) )  
		goto label_cond_d6;
	this->caSelector->setPolicy(this->getMatchingPolicies());
label_cond_d6:
	this->caSelector->setSubject(currentState->issuerDN);
	sun::security::provider::certpath::CertPathHelper::setPathToNames(this->caSelector, currentState->subjectNamesTraversed);
	this->caSelector->setValidityPeriod(currentState->cert->getNotBefore(), currentState->cert->getNotAfter());
	sel = this->caSelector;
	//    .local v3, "sel":Ljava/security/cert/X509CertSelector;
	goto label_goto_4f;
	// 672    .line 307
	// 673    .restart local v5    # "trustedCert$iterator":Ljava/util/Iterator;
label_cond_f9:
	sel->setCertificateValid(this->buildParams->date());
	sel->setBasicConstraints(currentState->traversedCACerts);
	if ( currentState->isInitial() )     
		goto label_cond_115;
	if ( this->buildParams->maxPathLength() != cVar0 )
		goto label_cond_124;
label_cond_115:
	if ( !(this->addMatchingCerts(sel, certStores, caCerts, this->searchAllCertStores)) )  
		goto label_cond_12e;
	if ( !(( this->searchAllCertStores ^ 0x1)) )  
		goto label_cond_12e;
	return;
	// 726    .line 324
label_cond_124:
	if ( this->buildParams->maxPathLength() >  currentState->traversedCACerts )
		goto label_cond_115;
label_cond_12e:
	if ( currentState->isInitial() )     
		goto label_cond_143;
	if ( !(sun::security::provider::certpath::Builder::USE_AIA) )  
		goto label_cond_143;
	aiaExt = currentState->cert->getAuthorityInfoAccessExtension();
	//    .local v0, "aiaExt":Lsun/security/x509/AuthorityInfoAccessExtension;
	if ( !(aiaExt) )  
		goto label_cond_143;
	this->getCerts(aiaExt, caCerts);
	//    .end local v0    # "aiaExt":Lsun/security/x509/AuthorityInfoAccessExtension;
label_cond_143:
	if ( !(sun::security::provider::certpath::ForwardBuilder::debug) )  
		goto label_cond_16d;
	//    .local v2, "numCerts":I
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::ForwardBuilder::debug->println(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("ForwardBuilder.getMatchingCACerts: found ")))->append((caCerts->size() - caCerts->size()))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" CA certs")))->toString());
	//    .end local v2    # "numCerts":I
label_cond_16d:
	return;

}
// .method private getMatchingEECerts(Lsun/security/provider/certpath/ForwardState;Ljava/util/List;Ljava/util/Collection;)V
void sun::security::provider::certpath::ForwardBuilder::getMatchingEECerts(std::shared_ptr<sun::security::provider::certpath::ForwardState> currentState,std::shared_ptr<java::util::List<java::security::cert::CertStore>> certStores,std::shared_ptr<java::util::Collection<java::security::cert::X509Certificate>> eeCerts)
{
	
	std::shared_ptr<java::security::cert::X509CertSelector> cVar0;
	
	//    .param p1, "currentState"    # Lsun/security/provider/certpath/ForwardState;
	//    .annotation system Ldalvik/annotation/Signature;
	// 820        value = {
	// 821            "(",
	// 822            "Lsun/security/provider/certpath/ForwardState;",
	// 823            "Ljava/util/List",
	// 824            "<",
	// 825            "Ljava/security/cert/CertStore;",
	// 826            ">;",
	// 827            "Ljava/util/Collection",
	// 828            "<",
	// 829            "Ljava/security/cert/X509Certificate;",
	// 830            ">;)V"
	// 831        }
	// 832    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 835        value = {
	// 836            Ljava/io/IOException;
	// 837        }
	// 838    .end annotation
	//    .local p2, "certStores":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/CertStore;>;"
	//    .local p3, "eeCerts":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/security/cert/X509Certificate;>;"
	if ( !(sun::security::provider::certpath::ForwardBuilder::debug) )  
		goto label_cond_c;
	sun::security::provider::certpath::ForwardBuilder::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("ForwardBuilder.getMatchingEECerts()...")));
label_cond_c:
	if ( this->eeSelector )     
		goto label_cond_3c;
	cVar0 = this->targetCertConstraints->clone();
	cVar0->checkCast("java::security::cert::X509CertSelector");
	this->eeSelector = cVar0;
	this->eeSelector->setCertificateValid(this->buildParams->date());
	if ( !(this->buildParams->explicitPolicyRequired()) )  
		goto label_cond_36;
	this->eeSelector->setPolicy(this->getMatchingPolicies());
label_cond_36:
	this->eeSelector->setBasicConstraints(-0x2);
label_cond_3c:
	this->addMatchingCerts(this->eeSelector, certStores, eeCerts, this->searchAllCertStores);
	return;

}
// .method addCertToPath(Ljava/security/cert/X509Certificate;Ljava/util/LinkedList;)V
void sun::security::provider::certpath::ForwardBuilder::addCertToPath(std::shared_ptr<java::security::cert::X509Certificate> cert,std::shared_ptr<java::util::LinkedList<java::security::cert::X509Certificate>> certPathList)
{
	
	//    .param p1, "cert"    # Ljava/security/cert/X509Certificate;
	//    .annotation system Ldalvik/annotation/Signature;
	// 927        value = {
	// 928            "(",
	// 929            "Ljava/security/cert/X509Certificate;",
	// 930            "Ljava/util/LinkedList",
	// 931            "<",
	// 932            "Ljava/security/cert/X509Certificate;",
	// 933            ">;)V"
	// 934        }
	// 935    .end annotation
	//    .local p2, "certPathList":Ljava/util/LinkedList;, "Ljava/util/LinkedList<Ljava/security/cert/X509Certificate;>;"
	certPathList->addFirst(cert);
	return;

}
// .method getMatchingCerts(Lsun/security/provider/certpath/State;Ljava/util/List;)Ljava/util/Collection;
std::shared_ptr<java::util::Collection<java::security::cert::X509Certificate>> sun::security::provider::certpath::ForwardBuilder::getMatchingCerts(std::shared_ptr<sun::security::provider::certpath::State> currentState,std::shared_ptr<java::util::List<java::security::cert::CertStore>> certStores)
{
	
	std::shared_ptr<sun::security::provider::certpath::ForwardState> currState;
	std::shared_ptr<sun::security::provider::certpath::ForwardBuilder_S_PKIXCertComparator> comparator;
	std::shared_ptr<java::util::TreeSet> certs;
	
	//    .param p1, "currentState"    # Lsun/security/provider/certpath/State;
	//    .annotation system Ldalvik/annotation/Signature;
	// 950        value = {
	// 951            "(",
	// 952            "Lsun/security/provider/certpath/State;",
	// 953            "Ljava/util/List",
	// 954            "<",
	// 955            "Ljava/security/cert/CertStore;",
	// 956            ">;)",
	// 957            "Ljava/util/Collection",
	// 958            "<",
	// 959            "Ljava/security/cert/X509Certificate;",
	// 960            ">;"
	// 961        }
	// 962    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 965        value = {
	// 966            Ljava/security/cert/CertStoreException;,
	// 967            Ljava/security/cert/CertificateException;,
	// 968            Ljava/io/IOException;
	// 969        }
	// 970    .end annotation
	//    .local p2, "certStores":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/CertStore;>;"
	if ( !(sun::security::provider::certpath::ForwardBuilder::debug) )  
		goto label_cond_c;
	sun::security::provider::certpath::ForwardBuilder::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("ForwardBuilder.getMatchingCerts()...")));
label_cond_c:
	currState = currentState;
	currState->checkCast("sun::security::provider::certpath::ForwardState");
	//    .local v2, "currState":Lsun/security/provider/certpath/ForwardState;
	comparator = std::make_shared<sun::security::provider::certpath::ForwardBuilder_S_PKIXCertComparator>(this->trustedSubjectDNs, currState->cert);
	//    .local v1, "comparator":Ljava/util/Comparator;, "Ljava/util/Comparator<Ljava/security/cert/X509Certificate;>;"
	certs = std::make_shared<java::util::TreeSet>(comparator);
	//    .local v0, "certs":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/X509Certificate;>;"
	if ( !(currState->isInitial()) )  
		goto label_cond_26;
	this->getMatchingEECerts(currState, certStores, certs);
label_cond_26:
	this->getMatchingCACerts(currState, certStores, certs);
	return certs;

}
// .method isPathCompleted(Ljava/security/cert/X509Certificate;)Z
bool sun::security::provider::certpath::ForwardBuilder::isPathCompleted(std::shared_ptr<java::security::cert::X509Certificate> cert)
{
	
	bool cVar0;
	std::shared_ptr<java::util::ArrayList> otherAnchors;
	std::shared_ptr<java::util::Iterator> anchor_S_iterator;
	std::shared_ptr<java::security::cert::TrustAnchor> anchor;
	std::shared_ptr<javax::security::auth::x500::X500Principal> principal;
	std::shared_ptr<java::lang::Object> publicKey;
	std::shared_ptr<java::security::PublicKey> publicKey;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "cert"    # Ljava/security/cert/X509Certificate;
	cVar0 = 0x1;
	otherAnchors = std::make_shared<java::util::ArrayList>();
	//    .local v4, "otherAnchors":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/TrustAnchor;>;"
	anchor_S_iterator = this->trustAnchors->iterator();
	//    .local v1, "anchor$iterator":Ljava/util/Iterator;
label_cond_c:
label_goto_c:
	if ( !(anchor_S_iterator->hasNext()) )  
		goto label_cond_52;
	anchor = anchor_S_iterator->next();
	anchor->checkCast("java::security::cert::TrustAnchor");
	//    .local v0, "anchor":Ljava/security/cert/TrustAnchor;
	if ( !(anchor->getTrustedCert()) )  
		goto label_cond_2b;
	if ( !(cert->equals(anchor->getTrustedCert())) )  
		goto label_cond_c;
	this->trustAnchor = anchor;
	return cVar0;
	// 1087    .line 849
label_cond_2b:
	principal = anchor->getCA();
	//    .local v5, "principal":Ljavax/security/auth/x500/X500Principal;
	publicKey = anchor->getCAPublicKey();
	//    .local v6, "publicKey":Ljava/security/PublicKey;
	if ( !(principal) )  
		goto label_cond_4e;
	if ( !(publicKey) )  
		goto label_cond_4e;
	if ( !(principal->equals(cert->getSubjectX500Principal())) )  
		goto label_cond_4e;
	if ( !(publicKey->equals(cert->getPublicKey())) )  
		goto label_cond_4e;
	this->trustAnchor = anchor;
	return cVar0;
	// 1134    .line 861
label_cond_4e:
	otherAnchors->add(anchor);
	goto label_goto_c;
	// 1140    .line 864
	// 1141    .end local v0    # "anchor":Ljava/security/cert/TrustAnchor;
	// 1142    .end local v5    # "principal":Ljavax/security/auth/x500/X500Principal;
	// 1143    .end local v6    # "publicKey":Ljava/security/PublicKey;
label_cond_52:
	anchor_S_iterator = otherAnchors->iterator();
label_cond_56:
label_goto_56:
	if ( !(anchor_S_iterator->hasNext()) )  
		goto label_cond_b5;
	anchor = anchor_S_iterator->next();
	anchor->checkCast("java::security::cert::TrustAnchor");
	//    .restart local v0    # "anchor":Ljava/security/cert/TrustAnchor;
	principal = anchor->getCA();
	//    .restart local v5    # "principal":Ljavax/security/auth/x500/X500Principal;
	publicKey = anchor->getCAPublicKey();
	//    .restart local v6    # "publicKey":Ljava/security/PublicKey;
	if ( !(principal) )  
		goto label_cond_56;
	if ( ( principal->equals(cert->getIssuerX500Principal()) ^ 0x1) )     
		goto label_cond_56;
	if ( sun::security::provider::certpath::PKIX::isDSAPublicKeyWithoutParams(publicKey) )     
		goto label_cond_56;
	try {
	//label_try_start_7e:
	if ( !(this->buildParams->sigProvider()) )  
		goto label_cond_92;
	cert->verify(publicKey, this->buildParams->sigProvider());
	//label_try_end_8f:
	}
	catch (java::security::InvalidKeyException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_96;
	}
	catch (java::security::GeneralSecurityException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_a4;
	}
	//    .catch Ljava/security/InvalidKeyException; {:try_start_7e .. :try_end_8f} :catch_96
	//    .catch Ljava/security/GeneralSecurityException; {:try_start_7e .. :try_end_8f} :catch_a4
label_goto_8f:
	this->trustAnchor = anchor;
	return cVar0;
	// 1229    .line 886
label_cond_92:
	try {
	//label_try_start_92:
	cert->verify(publicKey);
	//label_try_end_95:
	}
	catch (java::security::InvalidKeyException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_96;
	}
	catch (java::security::GeneralSecurityException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_a4;
	}
	//    .catch Ljava/security/InvalidKeyException; {:try_start_92 .. :try_end_95} :catch_96
	//    .catch Ljava/security/GeneralSecurityException; {:try_start_92 .. :try_end_95} :catch_a4
	goto label_goto_8f;
	// 1239    .line 888
label_catch_96:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v3, "ike":Ljava/security/InvalidKeyException;
	if ( !(sun::security::provider::certpath::ForwardBuilder::debug) )  
		goto label_cond_56;
	sun::security::provider::certpath::ForwardBuilder::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("ForwardBuilder.isPathCompleted() invalid DSA key found")));
	goto label_goto_56;
	// 1258    .line 894
	// 1259    .end local v3    # "ike":Ljava/security/InvalidKeyException;
label_catch_a4:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/security/GeneralSecurityException;
	if ( !(sun::security::provider::certpath::ForwardBuilder::debug) )  
		goto label_cond_56;
	sun::security::provider::certpath::ForwardBuilder::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("ForwardBuilder.isPathCompleted() unexpected exception")));
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_56;
	// 1281    .line 907
	// 1282    .end local v0    # "anchor":Ljava/security/cert/TrustAnchor;
	// 1283    .end local v2    # "e":Ljava/security/GeneralSecurityException;
	// 1284    .end local v5    # "principal":Ljavax/security/auth/x500/X500Principal;
	// 1285    .end local v6    # "publicKey":Ljava/security/PublicKey;
label_cond_b5:
	return 0x0;

}
// .method removeFinalCertFromPath(Ljava/util/LinkedList;)V
void sun::security::provider::certpath::ForwardBuilder::removeFinalCertFromPath(std::shared_ptr<java::util::LinkedList<java::security::cert::X509Certificate>> certPathList)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1295        value = {
	// 1296            "(",
	// 1297            "Ljava/util/LinkedList",
	// 1298            "<",
	// 1299            "Ljava/security/cert/X509Certificate;",
	// 1300            ">;)V"
	// 1301        }
	// 1302    .end annotation
	//    .local p1, "certPathList":Ljava/util/LinkedList;, "Ljava/util/LinkedList<Ljava/security/cert/X509Certificate;>;"
	certPathList->removeFirst();
	return;

}
// .method verifyCert(Ljava/security/cert/X509Certificate;Lsun/security/provider/certpath/State;Ljava/util/List;)V
void sun::security::provider::certpath::ForwardBuilder::verifyCert(std::shared_ptr<java::security::cert::X509Certificate> cert,std::shared_ptr<sun::security::provider::certpath::State> currentState,std::shared_ptr<java::util::List<java::security::cert::X509Certificate>> certPathList)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<sun::security::provider::certpath::ForwardState> currState;
	std::shared_ptr<java::util::Iterator> cpListCert_S_iterator;
	std::shared_ptr<java::security::cert::X509Certificate> cpListCert;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar1;
	int isTrustedCert;
	std::shared_ptr<java::util::Set> unresCritExts;
	std::shared_ptr<java::util::Collection> unresCritExts;
	std::shared_ptr<java::util::Iterator> checker_S_iterator;
	std::shared_ptr<java::security::cert::PKIXCertPathChecker> checker;
	std::shared_ptr<java::util::Collection> supportedExts;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar2;
	std::shared_ptr<java::security::cert::CertificateException> cVar3;
	
	//    .param p1, "cert"    # Ljava/security/cert/X509Certificate;
	//    .param p2, "currentState"    # Lsun/security/provider/certpath/State;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1318        value = {
	// 1319            "(",
	// 1320            "Ljava/security/cert/X509Certificate;",
	// 1321            "Lsun/security/provider/certpath/State;",
	// 1322            "Ljava/util/List",
	// 1323            "<",
	// 1324            "Ljava/security/cert/X509Certificate;",
	// 1325            ">;)V"
	// 1326        }
	// 1327    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 1330        value = {
	// 1331            Ljava/security/GeneralSecurityException;
	// 1332        }
	// 1333    .end annotation
	//    .local p3, "certPathList":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/X509Certificate;>;"
	if ( !(sun::security::provider::certpath::ForwardBuilder::debug) )  
		goto label_cond_51;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::ForwardBuilder::debug->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("ForwardBuilder.verifyCert(SN: ")))->append(sun::security::util::Debug::toHexString(cert->getSerialNumber()))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n  Issuer: ")))->append(cert->getIssuerX500Principal())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(")")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n  Subject: ")))->append(cert->getSubjectX500Principal())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(")")))->toString());
label_cond_51:
	currState = currentState;
	currState->checkCast("sun::security::provider::certpath::ForwardState");
	//    .local v10, "currState":Lsun/security/provider/certpath/ForwardState;
	if ( !(certPathList) )  
		goto label_cond_82;
	cpListCert_S_iterator = certPathList->iterator();
	//    .local v9, "cpListCert$iterator":Ljava/util/Iterator;
label_cond_5b:
	if ( !(cpListCert_S_iterator->hasNext()) )  
		goto label_cond_82;
	cpListCert = cpListCert_S_iterator->next();
	cpListCert->checkCast("java::security::cert::X509Certificate");
	//    .local v8, "cpListCert":Ljava/security/cert/X509Certificate;
	if ( !(cert->equals(cpListCert)) )  
		goto label_cond_5b;
	if ( !(sun::security::provider::certpath::ForwardBuilder::debug) )  
		goto label_cond_79;
	sun::security::provider::certpath::ForwardBuilder::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("loop detected!!")));
label_cond_79:
	cVar1 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("loop detected")));
	// throw
	throw cVar1;
	// 1486    .line 728
	// 1487    .end local v8    # "cpListCert":Ljava/security/cert/X509Certificate;
	// 1488    .end local v9    # "cpListCert$iterator":Ljava/util/Iterator;
label_cond_82:
	isTrustedCert = this->trustedCerts->contains(cert);
	//    .local v11, "isTrustedCert":Z
	if ( isTrustedCert )     
		goto label_cond_13b;
	unresCritExts = cert->getCriticalExtensionOIDs();
	//    .local v13, "unresCritExts":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	if ( unresCritExts )     
		goto label_cond_94;
	unresCritExts = java::util::Collections::emptySet({const[class].FS-Param});
label_cond_94:
	checker_S_iterator = currState->forwardCheckers->iterator();
	//    .local v7, "checker$iterator":Ljava/util/Iterator;
label_goto_9a:
	if ( !(checker_S_iterator->hasNext()) )  
		goto label_cond_aa;
	checker = checker_S_iterator->next();
	checker->checkCast("java::security::cert::PKIXCertPathChecker");
	//    .local v6, "checker":Ljava/security/cert/PKIXCertPathChecker;
	checker->check(cert, unresCritExts);
	goto label_goto_9a;
	// 1542    .line 751
	// 1543    .end local v6    # "checker":Ljava/security/cert/PKIXCertPathChecker;
label_cond_aa:
	checker_S_iterator = this->buildParams->certPathCheckers()->iterator();
label_cond_b4:
label_goto_b4:
	if ( !(checker_S_iterator->hasNext()) )  
		goto label_cond_d0;
	checker = checker_S_iterator->next();
	checker->checkCast("java::security::cert::PKIXCertPathChecker");
	//    .restart local v6    # "checker":Ljava/security/cert/PKIXCertPathChecker;
	if ( checker->isForwardCheckingSupported() )     
		goto label_cond_b4;
	supportedExts = checker->getSupportedExtensions();
	//    .local v12, "supportedExts":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	if ( !(supportedExts) )  
		goto label_cond_b4;
	unresCritExts->removeAll(supportedExts);
	goto label_goto_b4;
	// 1591    .line 764
	// 1592    .end local v6    # "checker":Ljava/security/cert/PKIXCertPathChecker;
	// 1593    .end local v12    # "supportedExts":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_cond_d0:
	if ( unresCritExts->isEmpty() )     
		goto label_cond_13b;
	unresCritExts->remove(sun::security::x509::PKIXExtensions::BasicConstraints_Id->toString());
	unresCritExts->remove(sun::security::x509::PKIXExtensions::NameConstraints_Id->toString());
	unresCritExts->remove(sun::security::x509::PKIXExtensions::CertificatePolicies_Id->toString());
	unresCritExts->remove(sun::security::x509::PKIXExtensions::PolicyMappings_Id->toString());
	unresCritExts->remove(sun::security::x509::PKIXExtensions::PolicyConstraints_Id->toString());
	unresCritExts->remove(sun::security::x509::PKIXExtensions::InhibitAnyPolicy_Id->toString());
	unresCritExts->remove(sun::security::x509::PKIXExtensions::SubjectAlternativeName_Id->toString());
	unresCritExts->remove(sun::security::x509::PKIXExtensions::KeyUsage_Id->toString());
	unresCritExts->remove(sun::security::x509::PKIXExtensions::ExtendedKeyUsage_Id->toString());
	if ( unresCritExts->isEmpty() )     
		goto label_cond_13b;
	cVar2 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unrecognized critical extension(s)")), 0x0, 0x0, -0x1, java::security::cert::PKIXReason::UNRECOGNIZED_CRIT_EXT);
	// throw
	throw cVar2;
	// 1710    .line 786
	// 1711    .end local v7    # "checker$iterator":Ljava/util/Iterator;
	// 1712    .end local v13    # "unresCritExts":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_cond_13b:
	if ( !(currState->isInitial()) )  
		goto label_cond_142;
	return;
	// 1723    .line 791
label_cond_142:
	if ( isTrustedCert )     
		goto label_cond_157;
	if ( cert->getBasicConstraints() != -0x1 )
		goto label_cond_154;
	cVar3 = std::make_shared<java::security::cert::CertificateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("cert is NOT a CA cert")));
	// throw
	throw cVar3;
	// 1745    .line 800
label_cond_154:
	sun::security::provider::certpath::KeyChecker::verifyCAKeyUsage(cert);
label_cond_157:
	if ( currState->keyParamsNeeded() )     
		goto label_cond_174;
	if ( !(this->buildParams->sigProvider()) )  
		goto label_cond_175;
	currState->cert->verify(cert->getPublicKey(), this->buildParams->sigProvider());
label_cond_174:
label_goto_174:
	return;
	// 1788    .line 820
label_cond_175:
	currState->cert->verify(cert->getPublicKey());
	goto label_goto_174;

}


