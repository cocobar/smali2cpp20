// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\RevocationChecker.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.Exception.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Iterable.h"
#include "java.lang.NoSuchFieldError.h"
#include "java.lang.NumberFormatException.h"
#include "java.lang.Object.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.math.BigInteger.h"
#include "java.net.URI.h"
#include "java.net.URISyntaxException.h"
#include "java.security.AccessController.h"
#include "java.security.InvalidAlgorithmParameterException.h"
#include "java.security.NoSuchAlgorithmException.h"
#include "java.security.Principal.h"
#include "java.security.PublicKey.h"
#include "java.security.cert.CRL.h"
#include "java.security.cert.CRLException.h"
#include "java.security.cert.CRLReason.h"
#include "java.security.cert.CRLSelector.h"
#include "java.security.cert.CertPath.h"
#include "java.security.cert.CertPathBuilder.h"
#include "java.security.cert.CertPathBuilderException.h"
#include "java.security.cert.CertPathBuilderResult.h"
#include "java.security.cert.CertPathValidatorException_S_BasicReason.h"
#include "java.security.cert.CertPathValidatorException_S_Reason.h"
#include "java.security.cert.CertPathValidatorException.h"
#include "java.security.cert.CertSelector.h"
#include "java.security.cert.CertStore.h"
#include "java.security.cert.CertStoreException.h"
#include "java.security.cert.Certificate.h"
#include "java.security.cert.CertificateException.h"
#include "java.security.cert.CertificateRevokedException.h"
#include "java.security.cert.CollectionCertStoreParameters.h"
#include "java.security.cert.Extension.h"
#include "java.security.cert.PKIXBuilderParameters.h"
#include "java.security.cert.PKIXCertPathBuilderResult.h"
#include "java.security.cert.PKIXParameters.h"
#include "java.security.cert.PKIXRevocationChecker_S_Option.h"
#include "java.security.cert.PKIXRevocationChecker.h"
#include "java.security.cert.TrustAnchor.h"
#include "java.security.cert.X509CRL.h"
#include "java.security.cert.X509CRLEntry.h"
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
#include "java.util.LinkedList.h"
#include "java.util.List.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.security.provider.certpath.BasicChecker.h"
#include "sun.security.provider.certpath.Builder.h"
#include "sun.security.provider.certpath.CertId.h"
#include "sun.security.provider.certpath.CertPathHelper.h"
#include "sun.security.provider.certpath.CertStoreHelper.h"
#include "sun.security.provider.certpath.DistributionPointFetcher.h"
#include "sun.security.provider.certpath.OCSP_S_RevocationStatus_S_CertStatus.h"
#include "sun.security.provider.certpath.OCSP_S_RevocationStatus.h"
#include "sun.security.provider.certpath.OCSP.h"
#include "sun.security.provider.certpath.OCSPResponse_S_SingleResponse.h"
#include "sun.security.provider.certpath.OCSPResponse.h"
#include "sun.security.provider.certpath.PKIX_S_CertStoreTypeException.h"
#include "sun.security.provider.certpath.PKIX_S_ValidatorParams.h"
#include "sun.security.provider.certpath.PKIX.h"
#include "sun.security.provider.certpath.RevocationChecker_S_1.h"
#include "sun.security.provider.certpath.RevocationChecker_S_Mode.h"
#include "sun.security.provider.certpath.RevocationChecker_S_RejectKeySelector.h"
#include "sun.security.provider.certpath.RevocationChecker_S_RevocationProperties.h"
#include "sun.security.provider.certpath.RevocationChecker.h"
#include "sun.security.provider.certpath.URICertStore.h"
#include "sun.security.util.Debug.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AccessDescription.h"
#include "sun.security.x509.AuthorityInfoAccessExtension.h"
#include "sun.security.x509.CRLDistributionPointsExtension.h"
#include "sun.security.x509.DistributionPoint.h"
#include "sun.security.x509.GeneralName.h"
#include "sun.security.x509.GeneralNames.h"
#include "sun.security.x509.PKIXExtensions.h"
#include "sun.security.x509.SerialNumber.h"
#include "sun.security.x509.X500Name.h"
#include "sun.security.x509.X509CRLEntryImpl.h"
#include "sun.security.x509.X509CertImpl.h"

static sun::security::provider::certpath::RevocationChecker::_java_security_cert_PKIXRevocationChecker_S_OptionSwitchesValues = nullptr;
static sun::security::provider::certpath::RevocationChecker::_sun_security_provider_certpath_RevocationChecker_S_ModeSwitchesValues = nullptr;
static sun::security::provider::certpath::RevocationChecker::ALL_REASONS;
static sun::security::provider::certpath::RevocationChecker::CRL_SIGN_USAGE;
static sun::security::provider::certpath::RevocationChecker::HEX_DIGITS = std::make_shared<java::lang::String>("0123456789ABCDEFabcdef");
static sun::security::provider::certpath::RevocationChecker::MAX_CLOCK_SKEW = 0xdbba0L;
static sun::security::provider::certpath::RevocationChecker::debug;
// .method static synthetic -get0()Lsun/security/util/Debug;
std::shared_ptr<sun::security::util::Debug> sun::security::provider::certpath::RevocationChecker::_get0()
{
	
	return sun::security::provider::certpath::RevocationChecker::debug;

}
// .method private static synthetic -getjava-security-cert-PKIXRevocationChecker$OptionSwitchesValues()[I
int sun::security::provider::certpath::RevocationChecker::_getjava_security_cert_PKIXRevocationChecker_S_OptionSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(sun::security::provider::certpath::RevocationChecker::_java_security_cert_PKIXRevocationChecker_S_OptionSwitchesValues) )  
		goto label_cond_7;
	return sun::security::provider::certpath::RevocationChecker::_java_security_cert_PKIXRevocationChecker_S_OptionSwitchesValues;
label_cond_7:
	cVar0 = std::make_shared<std::vector<int[]>>(java::security::cert::PKIXRevocationChecker_S_Option::values({const[class].FS-Param})->size());
	try {
	//label_try_start_e:
	cVar0[java::security::cert::PKIXRevocationChecker_S_Option::NO_FALLBACK->ordinal()] = 0x1;
	//label_try_end_17:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3b;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_e .. :try_end_17} :catch_3b
label_goto_17:
	try {
	//label_try_start_17:
	cVar0[java::security::cert::PKIXRevocationChecker_S_Option::ONLY_END_ENTITY->ordinal()] = 0x2;
	//label_try_end_20:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_39;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_17 .. :try_end_20} :catch_39
label_goto_20:
	try {
	//label_try_start_20:
	cVar0[java::security::cert::PKIXRevocationChecker_S_Option::PREFER_CRLS->ordinal()] = 0x3;
	//label_try_end_29:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_37;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_20 .. :try_end_29} :catch_37
label_goto_29:
	try {
	//label_try_start_29:
	cVar0[java::security::cert::PKIXRevocationChecker_S_Option::SOFT_FAIL->ordinal()] = 0x4;
	//label_try_end_32:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_35;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_29 .. :try_end_32} :catch_35
label_goto_32:
	sun::security::provider::certpath::RevocationChecker::_java_security_cert_PKIXRevocationChecker_S_OptionSwitchesValues = cVar0;
	return cVar0;
label_catch_35:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_32;
label_catch_37:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_29;
label_catch_39:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_20;
label_catch_3b:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_17;

}
// .method private static synthetic -getsun-security-provider-certpath-RevocationChecker$ModeSwitchesValues()[I
int sun::security::provider::certpath::RevocationChecker::_getsun_security_provider_certpath_RevocationChecker_S_ModeSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(sun::security::provider::certpath::RevocationChecker::_sun_security_provider_certpath_RevocationChecker_S_ModeSwitchesValues) )  
		goto label_cond_7;
	return sun::security::provider::certpath::RevocationChecker::_sun_security_provider_certpath_RevocationChecker_S_ModeSwitchesValues;
label_cond_7:
	cVar0 = std::make_shared<std::vector<int[]>>(sun::security::provider::certpath::RevocationChecker_S_Mode::values({const[class].FS-Param})->size());
	try {
	//label_try_start_e:
	cVar0[sun::security::provider::certpath::RevocationChecker_S_Mode::ONLY_CRLS->ordinal()] = 0x1;
	//label_try_end_17:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3b;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_e .. :try_end_17} :catch_3b
label_goto_17:
	try {
	//label_try_start_17:
	cVar0[sun::security::provider::certpath::RevocationChecker_S_Mode::ONLY_OCSP->ordinal()] = 0x2;
	//label_try_end_20:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_39;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_17 .. :try_end_20} :catch_39
label_goto_20:
	try {
	//label_try_start_20:
	cVar0[sun::security::provider::certpath::RevocationChecker_S_Mode::PREFER_CRLS->ordinal()] = 0x3;
	//label_try_end_29:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_37;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_20 .. :try_end_29} :catch_37
label_goto_29:
	try {
	//label_try_start_29:
	cVar0[sun::security::provider::certpath::RevocationChecker_S_Mode::PREFER_OCSP->ordinal()] = 0x4;
	//label_try_end_32:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_35;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_29 .. :try_end_32} :catch_35
label_goto_32:
	sun::security::provider::certpath::RevocationChecker::_sun_security_provider_certpath_RevocationChecker_S_ModeSwitchesValues = cVar0;
	return cVar0;
label_catch_35:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_32;
label_catch_37:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_29;
label_catch_39:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_20;
label_catch_3b:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_17;

}
// .method static constructor <clinit>()V
void sun::security::provider::certpath::RevocationChecker::static_cinit()
{
	
	std::shared<std::vector<bool[]>> cVar0;
	std::shared<std::vector<bool[]>> cVar1;
	
	sun::security::provider::certpath::RevocationChecker::debug = sun::security::util::Debug::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("certpath")));
	cVar0 = std::make_shared<std::vector<bool[]>>(0x9);
	?;
	sun::security::provider::certpath::RevocationChecker::ALL_REASONS = cVar0;
	cVar1 = std::make_shared<std::vector<bool[]>>(0x7);
	?;
	sun::security::provider::certpath::RevocationChecker::CRL_SIGN_USAGE = cVar1;
	return;
	// 351    .line 799
	// 352    nop
	// 354    :array_1c
	// 355    .array-data 1
	// 356        0x1t
	// 357        0x1t
	// 358        0x1t
	// 359        0x1t
	// 360        0x1t
	// 361        0x1t
	// 362        0x1t
	// 363        0x1t
	// 364        0x1t
	// 365    .end array-data
	// 367    .line 929
	// 368    nop
	// 370    :array_26
	// 371    .array-data 1
	// 372        0x0t
	// 373        0x0t
	// 374        0x0t
	// 375        0x0t
	// 376        0x0t
	// 377        0x0t
	// 378        0x1t
	// 379    .end array-data

}
// .method constructor <init>()V
sun::security::provider::certpath::RevocationChecker::RevocationChecker()
{
	
	std::shared_ptr<java::util::LinkedList> cVar0;
	
	// 387    invoke-direct {p0}, Ljava/security/cert/PKIXRevocationChecker;-><init>()V
	cVar0 = std::make_shared<java::util::LinkedList>();
	this->softFailExceptions = cVar0;
	this->mode = sun::security::provider::certpath::RevocationChecker_S_Mode::PREFER_OCSP;
	this->legacy = 0x0;
	return;

}
// .method constructor <init>(Ljava/security/cert/TrustAnchor;Lsun/security/provider/certpath/PKIX$ValidatorParams;)V
sun::security::provider::certpath::RevocationChecker::RevocationChecker(std::shared_ptr<java::security::cert::TrustAnchor> anchor,std::shared_ptr<sun::security::provider::certpath::PKIX_S_ValidatorParams> params)
{
	
	std::shared_ptr<java::util::LinkedList> cVar0;
	
	//    .param p1, "anchor"    # Ljava/security/cert/TrustAnchor;
	//    .param p2, "params"    # Lsun/security/provider/certpath/PKIX$ValidatorParams;
	//    .annotation system Ldalvik/annotation/Throws;
	// 416        value = {
	// 417            Ljava/security/cert/CertPathValidatorException;
	// 418        }
	// 419    .end annotation
	// 423    invoke-direct {p0}, Ljava/security/cert/PKIXRevocationChecker;-><init>()V
	cVar0 = std::make_shared<java::util::LinkedList>();
	this->softFailExceptions = cVar0;
	this->mode = sun::security::provider::certpath::RevocationChecker_S_Mode::PREFER_OCSP;
	this->legacy = 0x1;
	this->init(anchor, params);
	return;

}
// .method private buildToNewKey(Ljava/security/cert/X509Certificate;Ljava/security/PublicKey;Ljava/util/Set;)V
void sun::security::provider::certpath::RevocationChecker::buildToNewKey(std::shared_ptr<java::security::cert::X509Certificate> currCert,std::shared_ptr<java::security::PublicKey> prevKey,std::shared_ptr<java::util::Set<java::security::cert::X509Certificate>> stackedCerts)
{
	
	std::shared_ptr<java::util::HashSet> badKeys;
	std::shared_ptr<sun::security::provider::certpath::RevocationChecker_S_RejectKeySelector> certSel;
	std::shared_ptr<java::util::Set> newAnchors;
	std::shared_ptr<java::lang::RuntimeException> cVar0;
	std::shared_ptr<java::security::cert::PKIXBuilderParameters> builderParams;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<sun::security::x509::X509CertImpl> currCertImpl;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<sun::security::x509::AuthorityInfoAccessExtension> aiaExt;
	std::shared_ptr<java::lang::Iterable> adList;
	std::shared_ptr<java::util::Iterator> ad_S_iterator;
	std::shared_ptr<sun::security::x509::AccessDescription> ad;
	auto cs;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar3;
	auto stackedCerts;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar6;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar7;
	std::shared_ptr<java::security::cert::PKIXCertPathBuilderResult> cpbr;
	std::shared_ptr<java::util::HashSet> stackedCerts;
	std::shared_ptr<java::security::cert::TrustAnchor> ta;
	auto prevKey2;
	std::shared_ptr<java::security::PublicKey> prevKey2;
	std::shared_ptr<java::util::List> cpList;
	int i;
	std::shared_ptr<java::security::cert::X509Certificate> cert;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::security::PublicKey> newKey;
	std::shared_ptr<java::security::cert::X509Certificate> cVar5;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cpve;
	auto currCertImpl;
	
	//    .param p1, "currCert"    # Ljava/security/cert/X509Certificate;
	//    .param p2, "prevKey"    # Ljava/security/PublicKey;
	//    .annotation system Ldalvik/annotation/Signature;
	// 455        value = {
	// 456            "(",
	// 457            "Ljava/security/cert/X509Certificate;",
	// 458            "Ljava/security/PublicKey;",
	// 459            "Ljava/util/Set",
	// 460            "<",
	// 461            "Ljava/security/cert/X509Certificate;",
	// 462            ">;)V"
	// 463        }
	// 464    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 467        value = {
	// 468            Ljava/security/cert/CertPathValidatorException;
	// 469        }
	// 470    .end annotation
	//    .local p3, "stackedCerts":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/X509Certificate;>;"
	if ( !(sun::security::provider::certpath::RevocationChecker::debug) )  
		goto label_cond_c;
	sun::security::provider::certpath::RevocationChecker::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("RevocationChecker.buildToNewKey() starting work")));
label_cond_c:
	badKeys = std::make_shared<java::util::HashSet>();
	//    .local v24, "badKeys":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/PublicKey;>;"
	if ( !(prevKey) )  
		goto label_cond_1a;
	badKeys->add(prevKey);
label_cond_1a:
	var13 = certSel(badKeys);
	//    .local v28, "certSel":Ljava/security/cert/X509CertSelector;
	certSel->setSubject(currCert->getIssuerX500Principal());
	certSel->setKeyUsage(sun::security::provider::certpath::RevocationChecker::CRL_SIGN_USAGE);
	if ( this->anchor )     
		goto label_cond_fc;
	newAnchors = this->params->trustAnchors();
	//    .local v9, "newAnchors":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/TrustAnchor;>;"
label_goto_41:
	try {
	//label_try_start_41:
	var30 = builderParams(newAnchors, certSel);
	//label_try_end_4a:
	}
	catch (java::security::InvalidAlgorithmParameterException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_106;
	}
	//    .catch Ljava/security/InvalidAlgorithmParameterException; {:try_start_41 .. :try_end_4a} :catch_106
	//    .local v26, "builderParams":Ljava/security/cert/PKIXBuilderParameters;
	builderParams->setInitialPolicies(this->params->initialPolicies());
	builderParams->setCertStores(this->certStores);
	builderParams->setExplicitPolicyRequired(this->params->explicitPolicyRequired());
	builderParams->setPolicyMappingInhibited(this->params->policyMappingInhibited());
	builderParams->setAnyPolicyInhibited(this->params->anyPolicyInhibited());
	builderParams->setDate(this->params->date());
	builderParams->setCertPathCheckers(this->params->getPKIXParameters()->getCertPathCheckers());
	builderParams->setSigProvider(this->params->sigProvider());
	builderParams->setRevocationEnabled(0x0);
	if ( !(sun::security::provider::certpath::Builder::USE_AIA) )  
		goto label_cond_130;
	currCertImpl = 0x0;
	//    .local v34, "currCertImpl":Lsun/security/x509/X509CertImpl;
	try {
	//label_try_start_be:
	//label_try_end_c1:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_10f;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_be .. :try_end_c1} :catch_10f
	currCertImpl = sun::security::x509::X509CertImpl::toImpl(currCert);
	//    .end local v34    # "currCertImpl":Lsun/security/x509/X509CertImpl;
label_cond_c2:
label_goto_c2:
	//    .local v23, "aiaExt":Lsun/security/x509/AuthorityInfoAccessExtension;
	if ( !(currCertImpl) )  
		goto label_cond_ca;
	aiaExt = currCertImpl->getAuthorityInfoAccessExtension();
	//    .end local v23    # "aiaExt":Lsun/security/x509/AuthorityInfoAccessExtension;
label_cond_ca:
	if ( !(0x0) )  
		goto label_cond_130;
	adList = aiaExt->getAccessDescriptions();
	//    .local v22, "adList":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/AccessDescription;>;"
	if ( !(adList) )  
		goto label_cond_130;
	ad_S_iterator = adList->iterator();
	//    .local v21, "ad$iterator":Ljava/util/Iterator;
label_cond_d6:
label_goto_d6:
	if ( !(ad_S_iterator->hasNext()) )  
		goto label_cond_130;
	ad = ad_S_iterator->next();
	ad->checkCast("sun::security::x509::AccessDescription");
	//    .local v20, "ad":Lsun/security/x509/AccessDescription;
	cs = sun::security::provider::certpath::URICertStore::getInstance(ad);
	//    .local v33, "cs":Ljava/security/cert/CertStore;
	if ( !(cs) )  
		goto label_cond_d6;
	if ( !(sun::security::provider::certpath::RevocationChecker::debug) )  
		goto label_cond_f4;
	sun::security::provider::certpath::RevocationChecker::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("adding AIAext CertStore")));
label_cond_f4:
	builderParams->addCertStore(cs);
	goto label_goto_d6;
	// 773    .line 950
	// 774    .end local v9    # "newAnchors":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/TrustAnchor;>;"
	// 775    .end local v20    # "ad":Lsun/security/x509/AccessDescription;
	// 776    .end local v21    # "ad$iterator":Ljava/util/Iterator;
	// 777    .end local v22    # "adList":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/AccessDescription;>;"
	// 778    .end local v26    # "builderParams":Ljava/security/cert/PKIXBuilderParameters;
	// 779    .end local v33    # "cs":Ljava/security/cert/CertStore;
label_cond_fc:
	//    .restart local v9    # "newAnchors":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/TrustAnchor;>;"
	goto label_goto_41;
	// 792    .line 955
label_catch_106:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v36, "iape":Ljava/security/InvalidAlgorithmParameterException;
	tryCatchExcetionList.pop_back();
	cVar0 = std::make_shared<java::lang::RuntimeException>(getCatchExcetionFromList);
	// throw
	throw cVar0;
	// 806    .line 984
	// 807    .end local v36    # "iape":Ljava/security/InvalidAlgorithmParameterException;
	// 808    .restart local v26    # "builderParams":Ljava/security/cert/PKIXBuilderParameters;
	// 809    .restart local v34    # "currCertImpl":Lsun/security/x509/X509CertImpl;
label_catch_10f:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v27, "ce":Ljava/security/cert/CertificateException;
	if ( !(sun::security::provider::certpath::RevocationChecker::debug) )  
		goto label_cond_c2;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	tryCatchExcetionList.pop_back();
	sun::security::provider::certpath::RevocationChecker::debug->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("RevocationChecker.buildToNewKey: error decoding cert: ")))->append(getCatchExcetionFromList)->toString());
	goto label_goto_c2;
	// 846    .line 1011
	// 847    .end local v27    # "ce":Ljava/security/cert/CertificateException;
	// 848    .end local v34    # "currCertImpl":Lsun/security/x509/X509CertImpl;
label_cond_130:
	0x0;
	//    .local v25, "builder":Ljava/security/cert/CertPathBuilder;
	try {
	//label_try_start_132:
	//label_try_end_138:
	}
	catch (java::security::NoSuchAlgorithmException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1d2;
	}
	//    .catch Ljava/security/NoSuchAlgorithmException; {:try_start_132 .. :try_end_138} :catch_1d2
	//    .local v25, "builder":Ljava/security/cert/CertPathBuilder;
label_goto_139:
	stackedCerts = stackedCerts;
	//    .end local p3    # "stackedCerts":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/X509Certificate;>;"
	//    .local v38, "stackedCerts":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/X509Certificate;>;"
label_goto_13b:
	try {
	//label_try_start_13b:
	if ( !(sun::security::provider::certpath::RevocationChecker::debug) )  
		goto label_cond_147;
	sun::security::provider::certpath::RevocationChecker::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("RevocationChecker.buildToNewKey() about to try build ...")));
label_cond_147:
	cpbr = java::security::cert::CertPathBuilder::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKIX")))->build(builderParams);
	cpbr->checkCast("java::security::cert::PKIXCertPathBuilderResult");
	//    .local v31, "cpbr":Ljava/security/cert/PKIXCertPathBuilderResult;
	if ( !(sun::security::provider::certpath::RevocationChecker::debug) )  
		goto label_cond_159;
	sun::security::provider::certpath::RevocationChecker::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("RevocationChecker.buildToNewKey() about to check revocation ...")));
label_cond_159:
	if ( stackedCerts )     
		goto label_cond_267;
	stackedCerts = std::make_shared<java::util::HashSet>();
	//label_try_end_160:
	}
	catch (java::security::InvalidAlgorithmParameterException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_25f;
	}
	catch (java::security::cert::CertPathBuilderException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_263;
	}
	//    .catch Ljava/security/InvalidAlgorithmParameterException; {:try_start_13b .. :try_end_160} :catch_25f
	//    .catch Ljava/security/cert/CertPathBuilderException; {:try_start_13b .. :try_end_160} :catch_263
	//    .end local v38    # "stackedCerts":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/X509Certificate;>;"
	//    .restart local p3    # "stackedCerts":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/X509Certificate;>;"
label_goto_160:
	try {
	//label_try_start_160:
	stackedCerts->add(currCert);
	ta = cpbr->getTrustAnchor();
	//    .local v39, "ta":Ljava/security/cert/TrustAnchor;
	prevKey2 = ta->getCAPublicKey();
	//    .local v4, "prevKey2":Ljava/security/PublicKey;
	if ( prevKey2 )     
		goto label_cond_179;
	prevKey2 = ta->getTrustedCert()->getPublicKey();
label_cond_179:
	//    .local v6, "signFlag":Z
	//label_try_end_181:
	}
	catch (java::security::InvalidAlgorithmParameterException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_23d;
	}
	catch (java::security::cert::CertPathBuilderException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_24d;
	}
	//    .catch Ljava/security/InvalidAlgorithmParameterException; {:try_start_160 .. :try_end_181} :catch_23d
	//    .catch Ljava/security/cert/CertPathBuilderException; {:try_start_160 .. :try_end_181} :catch_24d
	cpList = cpbr->getCertPath()->getCertificates();
	//    .local v29, "cpList":Ljava/util/List;, "Ljava/util/List<+Ljava/security/cert/Certificate;>;"
	try {
	//label_try_start_182:
	i = ( cpList->size() + -0x1);
	//    .end local v6    # "signFlag":Z
	//    .local v35, "i":I
label_goto_188:
	if ( i < 0 ) 
		goto label_cond_1e9;
	cert = cpList->get(i);
	cert->checkCast("java::security::cert::X509Certificate");
	//    .local v3, "cert":Ljava/security/cert/X509Certificate;
	if ( !(sun::security::provider::certpath::RevocationChecker::debug) )  
		goto label_cond_1be;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::RevocationChecker::debug->println(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("RevocationChecker.buildToNewKey() index ")))->append(i)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" checking ")))->append(cert)->toString());
label_cond_1be:
	this->checkCRLs(cert, prevKey2, 0x0, signFlag, 0x1, stackedCerts, newAnchors);
	//    .local v6, "signFlag":Z
	//label_try_end_1ce:
	}
	catch (java::security::cert::CertPathValidatorException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1db;
	}
	catch (java::security::InvalidAlgorithmParameterException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_23d;
	}
	catch (java::security::cert::CertPathBuilderException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_24d;
	}
	//    .catch Ljava/security/cert/CertPathValidatorException; {:try_start_182 .. :try_end_1ce} :catch_1db
	//    .catch Ljava/security/InvalidAlgorithmParameterException; {:try_start_182 .. :try_end_1ce} :catch_23d
	//    .catch Ljava/security/cert/CertPathBuilderException; {:try_start_182 .. :try_end_1ce} :catch_24d
	prevKey2 = cert->getPublicKey();
	i = ( i + -0x1);
	goto label_goto_188;
	// 1068    .line 1014
	// 1069    .end local v3    # "cert":Ljava/security/cert/X509Certificate;
	// 1070    .end local v4    # "prevKey2":Ljava/security/PublicKey;
	// 1071    .end local v6    # "signFlag":Z
	// 1072    .end local v29    # "cpList":Ljava/util/List;, "Ljava/util/List<+Ljava/security/cert/Certificate;>;"
	// 1073    .end local v31    # "cpbr":Ljava/security/cert/PKIXCertPathBuilderResult;
	// 1074    .end local v35    # "i":I
	// 1075    .end local v39    # "ta":Ljava/security/cert/TrustAnchor;
	// 1076    .local v25, "builder":Ljava/security/cert/CertPathBuilder;
label_catch_1d2:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v37, "nsae":Ljava/security/NoSuchAlgorithmException;
	tryCatchExcetionList.pop_back();
	cVar3 = std::make_shared<java::security::cert::CertPathValidatorException>(getCatchExcetionFromList);
	// throw
	throw cVar3;
	// 1090    .line 1058
	// 1091    .end local v37    # "nsae":Ljava/security/NoSuchAlgorithmException;
	// 1092    .restart local v4    # "prevKey2":Ljava/security/PublicKey;
	// 1093    .local v25, "builder":Ljava/security/cert/CertPathBuilder;
	// 1094    .restart local v29    # "cpList":Ljava/util/List;, "Ljava/util/List<+Ljava/security/cert/Certificate;>;"
	// 1095    .restart local v31    # "cpbr":Ljava/security/cert/PKIXCertPathBuilderResult;
	// 1096    .restart local v39    # "ta":Ljava/security/cert/TrustAnchor;
label_catch_1db:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v32, "cpve":Ljava/security/cert/CertPathValidatorException;
	try {
	//label_try_start_1dc:
	badKeys->add(cpbr->getPublicKey());
	//    .end local p3    # "stackedCerts":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/X509Certificate;>;"
	//    .restart local v38    # "stackedCerts":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/X509Certificate;>;"
	goto label_goto_13b;
	// 1118    .line 1064
	// 1119    .end local v32    # "cpve":Ljava/security/cert/CertPathValidatorException;
	// 1120    .end local v38    # "stackedCerts":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/X509Certificate;>;"
	// 1121    .restart local v35    # "i":I
	// 1122    .restart local p3    # "stackedCerts":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/X509Certificate;>;"
label_cond_1e9:
	if ( !(sun::security::provider::certpath::RevocationChecker::debug) )  
		goto label_cond_20a;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::RevocationChecker::debug->println(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("RevocationChecker.buildToNewKey() got key ")))->append(cpbr->getPublicKey())->toString());
label_cond_20a:
	newKey = cpbr->getPublicKey();
	//    .local v12, "newKey":Ljava/security/PublicKey;
	//label_try_end_211:
	}
	catch (java::security::InvalidAlgorithmParameterException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_23d;
	}
	catch (java::security::cert::CertPathBuilderException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_24d;
	}
	//    .catch Ljava/security/InvalidAlgorithmParameterException; {:try_start_1dc .. :try_end_211} :catch_23d
	//    .catch Ljava/security/cert/CertPathBuilderException; {:try_start_1dc .. :try_end_211} :catch_24d
	if ( !(cpList->isEmpty()) )  
		goto label_cond_229;
	cVar5 = 0x0;
label_goto_215:
	try {
	//label_try_start_215:
	this->checkCRLs(currCert, newKey, cVar5, 0x1, 0x0, 0x0, this->params->trustAnchors());
	//label_try_end_228:
	}
	catch (java::security::cert::CertPathValidatorException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_233;
	}
	catch (java::security::InvalidAlgorithmParameterException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_23d;
	}
	catch (java::security::cert::CertPathBuilderException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_24d;
	}
	//    .catch Ljava/security/cert/CertPathValidatorException; {:try_start_215 .. :try_end_228} :catch_233
	//    .catch Ljava/security/InvalidAlgorithmParameterException; {:try_start_215 .. :try_end_228} :catch_23d
	//    .catch Ljava/security/cert/CertPathBuilderException; {:try_start_215 .. :try_end_228} :catch_24d
	return;
	// 1208    .line 1074
label_cond_229:
	try {
	//label_try_start_22a:
	cVar5 = cpList->get(0x0);
	cVar5->checkCast("java::security::cert::X509Certificate");
	//    .local v13, "newCert":Ljava/security/cert/X509Certificate;
	goto label_goto_215;
	// 1224    .line 1080
	// 1225    .end local v13    # "newCert":Ljava/security/cert/X509Certificate;
label_catch_233:
	// move-exception
	cpve = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v32    # "cpve":Ljava/security/cert/CertPathValidatorException;
	if ( cpve->getReason() != java::security::cert::CertPathValidatorException_S_BasicReason::REVOKED )
		goto label_cond_246;
	// throw
	throw cpve;
	// 1241    :try_end_23d
	// 1242    .catch Ljava/security/InvalidAlgorithmParameterException; {:try_start_22a .. :try_end_23d} :catch_23d
	// 1243    .catch Ljava/security/cert/CertPathBuilderException; {:try_start_22a .. :try_end_23d} :catch_24d
	// 1245    .line 1089
	// 1246    .end local v4    # "prevKey2":Ljava/security/PublicKey;
	// 1247    .end local v12    # "newKey":Ljava/security/PublicKey;
	// 1248    .end local v29    # "cpList":Ljava/util/List;, "Ljava/util/List<+Ljava/security/cert/Certificate;>;"
	// 1249    .end local v32    # "cpve":Ljava/security/cert/CertPathValidatorException;
	// 1250    .end local v35    # "i":I
	// 1251    .end local v39    # "ta":Ljava/security/cert/TrustAnchor;
label_catch_23d:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .end local v31    # "cpbr":Ljava/security/cert/PKIXCertPathBuilderResult;
	//    .restart local v36    # "iape":Ljava/security/InvalidAlgorithmParameterException;
label_goto_23e:
	cVar6 = std::make_shared<java::security::cert::CertPathValidatorException>(iape);
	// throw
	throw cVar6;
	// 1267    .line 1088
	// 1268    .end local v36    # "iape":Ljava/security/InvalidAlgorithmParameterException;
	// 1269    .restart local v4    # "prevKey2":Ljava/security/PublicKey;
	// 1270    .restart local v12    # "newKey":Ljava/security/PublicKey;
	// 1271    .restart local v29    # "cpList":Ljava/util/List;, "Ljava/util/List<+Ljava/security/cert/Certificate;>;"
	// 1272    .restart local v31    # "cpbr":Ljava/security/cert/PKIXCertPathBuilderResult;
	// 1273    .restart local v32    # "cpve":Ljava/security/cert/CertPathValidatorException;
	// 1274    .restart local v35    # "i":I
	// 1275    .restart local v39    # "ta":Ljava/security/cert/TrustAnchor;
label_cond_246:
	try {
	//label_try_start_246:
	badKeys->add(newKey);
	//label_try_end_24b:
	}
	catch (java::security::InvalidAlgorithmParameterException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_23d;
	}
	catch (java::security::cert::CertPathBuilderException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_24d;
	}
	//    .catch Ljava/security/InvalidAlgorithmParameterException; {:try_start_246 .. :try_end_24b} :catch_23d
	//    .catch Ljava/security/cert/CertPathBuilderException; {:try_start_246 .. :try_end_24b} :catch_24d
	goto label_goto_139;
	// 1287    .line 1091
	// 1288    .end local v4    # "prevKey2":Ljava/security/PublicKey;
	// 1289    .end local v12    # "newKey":Ljava/security/PublicKey;
	// 1290    .end local v29    # "cpList":Ljava/util/List;, "Ljava/util/List<+Ljava/security/cert/Certificate;>;"
	// 1291    .end local v32    # "cpve":Ljava/security/cert/CertPathValidatorException;
	// 1292    .end local v35    # "i":I
	// 1293    .end local v39    # "ta":Ljava/security/cert/TrustAnchor;
label_catch_24d:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .end local v31    # "cpbr":Ljava/security/cert/PKIXCertPathBuilderResult;
	//    .local v30, "cpbe":Ljava/security/cert/CertPathBuilderException;
label_goto_24e:
	cVar7 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Could not determine revocation status")), 0x0, 0x0, -0x1, java::security::cert::CertPathValidatorException_S_BasicReason::UNDETERMINED_REVOCATION_STATUS);
	// throw
	throw cVar7;
	// 1322    .line 1089
	// 1323    .end local v30    # "cpbe":Ljava/security/cert/CertPathBuilderException;
	// 1324    .end local p3    # "stackedCerts":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/X509Certificate;>;"
	// 1325    .restart local v38    # "stackedCerts":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/X509Certificate;>;"
label_catch_25f:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v36    # "iape":Ljava/security/InvalidAlgorithmParameterException;
	stackedCerts;
	//    .end local v38    # "stackedCerts":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/X509Certificate;>;"
	//    .restart local p3    # "stackedCerts":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/X509Certificate;>;"
	goto label_goto_23e;
	// 1336    .line 1091
	// 1337    .end local v36    # "iape":Ljava/security/InvalidAlgorithmParameterException;
	// 1338    .end local p3    # "stackedCerts":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/X509Certificate;>;"
	// 1339    .restart local v38    # "stackedCerts":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/X509Certificate;>;"
label_catch_263:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v30    # "cpbe":Ljava/security/cert/CertPathBuilderException;
	stackedCerts;
	//    .end local v38    # "stackedCerts":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/X509Certificate;>;"
	//    .restart local p3    # "stackedCerts":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/X509Certificate;>;"
	goto label_goto_24e;
	// 1350    .end local v30    # "cpbe":Ljava/security/cert/CertPathBuilderException;
	// 1351    .end local p3    # "stackedCerts":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/X509Certificate;>;"
	// 1352    .restart local v31    # "cpbr":Ljava/security/cert/PKIXCertPathBuilderResult;
	// 1353    .restart local v38    # "stackedCerts":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/X509Certificate;>;"
label_cond_267:
	//    .end local v38    # "stackedCerts":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/X509Certificate;>;"
	//    .restart local p3    # "stackedCerts":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/X509Certificate;>;"
	goto label_goto_160;

}
// .method static certCanSignCrl(Ljava/security/cert/X509Certificate;)Z
bool sun::security::provider::certpath::RevocationChecker::certCanSignCrl(std::shared_ptr<java::security::cert::X509Certificate> cert)
{
	
	auto keyUsage;
	
	//    .param p0, "cert"    # Ljava/security/cert/X509Certificate;
	keyUsage = cert->getKeyUsage();
	//    .local v0, "keyUsage":[Z
	if ( !(keyUsage) )  
		goto label_cond_a;
	return keyUsage[0x6];
	// 1383    .line 783
label_cond_a:
	return 0x0;

}
// .method private check(Ljava/security/cert/X509Certificate;Ljava/util/Collection;Ljava/security/PublicKey;Z)V
void sun::security::provider::certpath::RevocationChecker::check(std::shared_ptr<java::security::cert::X509Certificate> xcert,std::shared_ptr<java::util::Collection<java::lang::String>> unresolvedCritExts,std::shared_ptr<java::security::PublicKey> pubKey,bool crlSignFlag)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::security::cert::CertPathValidatorException> e;
	int eSoftFail;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::security::cert::CertPathValidatorException> x;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "xcert"    # Ljava/security/cert/X509Certificate;
	//    .param p3, "pubKey"    # Ljava/security/PublicKey;
	//    .param p4, "crlSignFlag"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 1396        value = {
	// 1397            "(",
	// 1398            "Ljava/security/cert/X509Certificate;",
	// 1399            "Ljava/util/Collection",
	// 1400            "<",
	// 1401            "Ljava/lang/String;",
	// 1402            ">;",
	// 1403            "Ljava/security/PublicKey;",
	// 1404            "Z)V"
	// 1405        }
	// 1406    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 1409        value = {
	// 1410            Ljava/security/cert/CertPathValidatorException;
	// 1411        }
	// 1412    .end annotation
	//    .local p2, "unresolvedCritExts":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/lang/String;>;"
	if ( !(sun::security::provider::certpath::RevocationChecker::debug) )  
		goto label_cond_43;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::RevocationChecker::debug->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("RevocationChecker.check: checking cert\n  SN: ")))->append(sun::security::util::Debug::toHexString(xcert->getSerialNumber()))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n  Subject: ")))->append(xcert->getSubjectX500Principal())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n  Issuer: ")))->append(xcert->getIssuerX500Principal())->toString());
label_cond_43:
	try {
	//label_try_start_43:
	if ( !(this->onlyEE) )  
		goto label_cond_5e;
	if ( xcert->getBasicConstraints() == -0x1 )
		goto label_cond_5e;
	if ( !(sun::security::provider::certpath::RevocationChecker::debug) )  
		goto label_cond_5a;
	sun::security::provider::certpath::RevocationChecker::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Skipping revocation check; cert is not an end entity cert")));
	//label_try_end_5a:
	}
	catch (java::security::cert::CertPathValidatorException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_75;
	}
	catch (...){
		goto label_catchall_7f;
	}
	//    .catch Ljava/security/cert/CertPathValidatorException; {:try_start_43 .. :try_end_5a} :catch_75
	//    .catchall {:try_start_43 .. :try_end_5a} :catchall_7f
label_cond_5a:
	this->updateState(xcert);
	return;
	// 1527    .line 360
label_cond_5e:
	try {
	//label_try_start_5e:
	//label_try_end_6a:
	}
	catch (java::security::cert::CertPathValidatorException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_75;
	}
	catch (...){
		goto label_catchall_7f;
	}
	//    .catch Ljava/security/cert/CertPathValidatorException; {:try_start_5e .. :try_end_6a} :catch_75
	//    .catchall {:try_start_5e .. :try_end_6a} :catchall_7f
	// switch
	{
	auto item = ( sun::security::provider::certpath::RevocationChecker::-getsun-security-provider-certpath-RevocationChecker$ModeSwitchesValues({const[class].FS-Param})[this->mode->ordinal()] );
	if (item == 1) goto label_pswitch_84;
	if (item == 2) goto label_pswitch_71;
	if (item == 3) goto label_pswitch_84;
	if (item == 4) goto label_pswitch_71;
	}
label_goto_6d:
	this->updateState(xcert);
label_goto_70:
	return;
	// 1555    .line 363
label_pswitch_71:
	try {
	//label_try_start_71:
	this->checkOCSP(xcert, unresolvedCritExts);
	//label_try_end_74:
	}
	catch (java::security::cert::CertPathValidatorException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_75;
	}
	catch (...){
		goto label_catchall_7f;
	}
	//    .catch Ljava/security/cert/CertPathValidatorException; {:try_start_71 .. :try_end_74} :catch_75
	//    .catchall {:try_start_71 .. :try_end_74} :catchall_7f
	goto label_goto_6d;
	// 1565    .line 371
label_catch_75:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v7, "e":Ljava/security/cert/CertPathValidatorException;
	try {
	//label_try_start_76:
	if ( e->getReason() != java::security::cert::CertPathValidatorException_S_BasicReason::REVOKED )
		goto label_cond_8e;
	// throw
	throw e;
	// 1582    :try_end_7f
	// 1583    .catchall {:try_start_76 .. :try_end_7f} :catchall_7f
	// 1585    .line 419
	// 1586    .end local v7    # "e":Ljava/security/cert/CertPathValidatorException;
label_catchall_7f:
	// move-exception
	
	this->updateState(xcert);
	// throw
	throw;
	// 1596    .line 367
label_pswitch_84:
	try {
	//label_try_start_8a:
	this->checkCRLs(xcert, unresolvedCritExts, 0x0, pubKey, crlSignFlag);
	//label_try_end_8d:
	}
	catch (java::security::cert::CertPathValidatorException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_75;
	}
	catch (...){
		goto label_catchall_7f;
	}
	//    .catch Ljava/security/cert/CertPathValidatorException; {:try_start_8a .. :try_end_8d} :catch_75
	//    .catchall {:try_start_8a .. :try_end_8d} :catchall_7f
	goto label_goto_6d;
	// 1618    .line 375
	// 1619    .restart local v7    # "e":Ljava/security/cert/CertPathValidatorException;
label_cond_8e:
	try {
	//label_try_start_8e:
	eSoftFail = this->isSoftFailException(e);
	//    .local v8, "eSoftFail":Z
	if ( !(eSoftFail) )  
		goto label_cond_a4;
	if ( this->mode == sun::security::provider::certpath::RevocationChecker_S_Mode::ONLY_OCSP )
		goto label_cond_a0;
	//label_try_end_9e:
	}
	catch (...){
		goto label_catchall_7f;
	}
	//    .catchall {:try_start_8e .. :try_end_9e} :catchall_7f
	if ( this->mode != sun::security::provider::certpath::RevocationChecker_S_Mode::ONLY_CRLS )
		goto label_cond_b1;
label_cond_a0:
	this->updateState(xcert);
	return;
	// 1652    .line 381
label_cond_a4:
	try {
	//label_try_start_a4:
	if ( this->mode == sun::security::provider::certpath::RevocationChecker_S_Mode::ONLY_OCSP )
		goto label_cond_b0;
	if ( this->mode != sun::security::provider::certpath::RevocationChecker_S_Mode::ONLY_CRLS )
		goto label_cond_b1;
label_cond_b0:
	// throw
	throw e;
	// 1671    .line 385
label_cond_b1:
	e;
	//    .local v6, "cause":Ljava/security/cert/CertPathValidatorException;
	if ( !(sun::security::provider::certpath::RevocationChecker::debug) )  
		goto label_cond_db;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::RevocationChecker::debug->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("RevocationChecker.check() ")))->append(e->getMessage())->toString());
	sun::security::provider::certpath::RevocationChecker::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("RevocationChecker.check() preparing to failover")));
	//label_try_end_db:
	}
	catch (...){
		goto label_catchall_7f;
	}
	//    .catchall {:try_start_a4 .. :try_end_db} :catchall_7f
label_cond_db:
	try {
	//label_try_start_db:
	//label_try_end_e7:
	}
	catch (java::security::cert::CertPathValidatorException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_f8;
	}
	catch (...){
		goto label_catchall_7f;
	}
	//    .catch Ljava/security/cert/CertPathValidatorException; {:try_start_db .. :try_end_e7} :catch_f8
	//    .catchall {:try_start_db .. :try_end_e7} :catchall_7f
	// switch
	{
	auto item = ( sun::security::provider::certpath::RevocationChecker::-getsun-security-provider-certpath-RevocationChecker$ModeSwitchesValues({const[class].FS-Param})[this->mode->ordinal()] );
	if (item == 3) goto label_pswitch_12b;
	if (item == 4) goto label_pswitch_ee;
	}
label_cond_ea:
label_goto_ea:
	this->updateState(xcert);
	goto label_goto_70;
	// 1744    .line 394
label_pswitch_ee:
	try {
	//label_try_start_f4:
	this->checkCRLs(xcert, unresolvedCritExts, 0x0, pubKey, crlSignFlag);
	//label_try_end_f7:
	}
	catch (java::security::cert::CertPathValidatorException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_f8;
	}
	catch (...){
		goto label_catchall_7f;
	}
	//    .catch Ljava/security/cert/CertPathValidatorException; {:try_start_f4 .. :try_end_f7} :catch_f8
	//    .catchall {:try_start_f4 .. :try_end_f7} :catchall_7f
	goto label_goto_ea;
	// 1766    .line 401
label_catch_f8:
	// move-exception
	x = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v9, "x":Ljava/security/cert/CertPathValidatorException;
	try {
	//label_try_start_f9:
	if ( !(sun::security::provider::certpath::RevocationChecker::debug) )  
		goto label_cond_122;
	sun::security::provider::certpath::RevocationChecker::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("RevocationChecker.check() failover failed")));
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::RevocationChecker::debug->println(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("RevocationChecker.check() ")))->append(x->getMessage())->toString());
label_cond_122:
	if ( x->getReason() != java::security::cert::CertPathValidatorException_S_BasicReason::REVOKED )
		goto label_cond_12f;
	// throw
	throw x;
	// 1823    :try_end_12b
	// 1824    .catchall {:try_start_f9 .. :try_end_12b} :catchall_7f
	// 1826    .line 398
	// 1827    .end local v9    # "x":Ljava/security/cert/CertPathValidatorException;
label_pswitch_12b:
	try {
	//label_try_start_12b:
	this->checkOCSP(xcert, unresolvedCritExts);
	//label_try_end_12e:
	}
	catch (java::security::cert::CertPathValidatorException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_f8;
	}
	catch (...){
		goto label_catchall_7f;
	}
	//    .catch Ljava/security/cert/CertPathValidatorException; {:try_start_12b .. :try_end_12e} :catch_f8
	//    .catchall {:try_start_12b .. :try_end_12e} :catchall_7f
	goto label_goto_ea;
	// 1837    .line 409
	// 1838    .restart local v9    # "x":Ljava/security/cert/CertPathValidatorException;
label_cond_12f:
	try {
	//label_try_start_12f:
	if ( this->isSoftFailException(x) )     
		goto label_cond_139;
	e->addSuppressed(x);
	// throw
	throw e;
	// 1853    .line 414
label_cond_139:
	if ( eSoftFail )     
		goto label_cond_ea;
	// throw
	throw e;
	// 1859    :try_end_13c
	// 1860    .catchall {:try_start_12f .. :try_end_13c} :catchall_7f
	// 1862    .line 360
	// 1863    :pswitch_data_13c
	// 1864    .packed-switch 0x1
	// 1865        :pswitch_84
	// 1866        :pswitch_71
	// 1867        :pswitch_84
	// 1868        :pswitch_71
	// 1869    .end packed-switch
	// 1871    .line 392
	// 1872    :pswitch_data_148
	// 1873    .packed-switch 0x3
	// 1874        :pswitch_12b
	// 1875        :pswitch_ee
	// 1876    .end packed-switch

}
// .method private checkApprovedCRLs(Ljava/security/cert/X509Certificate;Ljava/util/Set;)V
void sun::security::provider::certpath::RevocationChecker::checkApprovedCRLs(std::shared_ptr<java::security::cert::X509Certificate> cert,std::shared_ptr<java::util::Set<java::security::cert::X509CRL>> approvedCRLs)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::util::Iterator> crl_S_iterator;
	std::shared_ptr<java::security::cert::X509CRL> crl;
	std::shared_ptr<java::security::cert::X509CRLEntry> e;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar3;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<sun::security::x509::X509CRLEntryImpl> entry;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::util::Set> unresCritExts;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar2;
	std::shared_ptr<java::util::Date> revocationDate;
	std::shared_ptr<java::security::cert::CertificateRevokedException> t;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar4;
	
	//    .param p1, "cert"    # Ljava/security/cert/X509Certificate;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1883        value = {
	// 1884            "(",
	// 1885            "Ljava/security/cert/X509Certificate;",
	// 1886            "Ljava/util/Set",
	// 1887            "<",
	// 1888            "Ljava/security/cert/X509CRL;",
	// 1889            ">;)V"
	// 1890        }
	// 1891    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 1894        value = {
	// 1895            Ljava/security/cert/CertPathValidatorException;
	// 1896        }
	// 1897    .end annotation
	//    .local p2, "approvedCRLs":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/X509CRL;>;"
	if ( !(sun::security::provider::certpath::RevocationChecker::debug) )  
		goto label_cond_2d;
	//    .local v14, "sn":Ljava/math/BigInteger;
	sun::security::provider::certpath::RevocationChecker::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("RevocationChecker.checkApprovedCRLs() starting the final sweep...")));
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::RevocationChecker::debug->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("RevocationChecker.checkApprovedCRLs() cert SN: ")))->append(cert->getSerialNumber()->toString())->toString());
	//    .end local v14    # "sn":Ljava/math/BigInteger;
label_cond_2d:
	java::security::cert::CRLReason::UNSPECIFIED;
	//    .local v12, "reasonCode":Ljava/security/cert/CRLReason;
	0x0;
	//    .local v11, "entry":Lsun/security/x509/X509CRLEntryImpl;
	crl_S_iterator = approvedCRLs->iterator();
	//    .end local v11    # "entry":Lsun/security/x509/X509CRLEntryImpl;
	//    .local v9, "crl$iterator":Ljava/util/Iterator;
label_cond_34:
	if ( !(crl_S_iterator->hasNext()) )  
		goto label_cond_d8;
	crl = crl_S_iterator->next();
	crl->checkCast("java::security::cert::X509CRL");
	//    .local v8, "crl":Ljava/security/cert/X509CRL;
	e = crl->getRevokedCertificate(cert);
	//    .local v10, "e":Ljava/security/cert/X509CRLEntry;
	if ( !(e) )  
		goto label_cond_34;
	try {
	//label_try_start_48:
	//label_try_end_4b:
	}
	catch (java::security::cert::CRLException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_9c;
	}
	//    .catch Ljava/security/cert/CRLException; {:try_start_48 .. :try_end_4b} :catch_9c
	entry = sun::security::x509::X509CRLEntryImpl::toImpl(e);
	//    .local v11, "entry":Lsun/security/x509/X509CRLEntryImpl;
	if ( !(sun::security::provider::certpath::RevocationChecker::debug) )  
		goto label_cond_6d;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::RevocationChecker::debug->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("RevocationChecker.checkApprovedCRLs() CRL entry: ")))->append(entry->toString())->toString());
label_cond_6d:
	unresCritExts = entry->getCriticalExtensionOIDs();
	//    .local v15, "unresCritExts":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	if ( !(unresCritExts) )  
		goto label_cond_a3;
	if ( !(( unresCritExts->isEmpty() ^ 0x1)) )  
		goto label_cond_a3;
	unresCritExts->remove(sun::security::x509::PKIXExtensions::ReasonCode_Id->toString());
	unresCritExts->remove(sun::security::x509::PKIXExtensions::CertificateIssuer_Id->toString());
	if ( unresCritExts->isEmpty() )     
		goto label_cond_a3;
	cVar2 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unrecognized critical extension(s) in revoked CRL entry")));
	// throw
	throw cVar2;
	// 2087    .line 626
	// 2088    .end local v11    # "entry":Lsun/security/x509/X509CRLEntryImpl;
	// 2089    .end local v15    # "unresCritExts":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_catch_9c:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v7, "ce":Ljava/security/cert/CRLException;
	cVar3 = std::make_shared<java::security::cert::CertPathValidatorException>(getCatchExcetionFromList);
	// throw
	throw cVar3;
	// 2101    .line 651
	// 2102    .end local v7    # "ce":Ljava/security/cert/CRLException;
	// 2103    .restart local v11    # "entry":Lsun/security/x509/X509CRLEntryImpl;
	// 2104    .restart local v15    # "unresCritExts":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_cond_a3:
	if ( entry->getRevocationReason() )     
		goto label_cond_ab;
label_cond_ab:
	revocationDate = entry->getRevocationDate();
	//    .local v13, "revocationDate":Ljava/util/Date;
	if ( !(revocationDate->before(this->params->date())) )  
		goto label_cond_34;
	t = std::make_shared<java::security::cert::CertificateRevokedException>(revocationDate, java::security::cert::CRLReason::UNSPECIFIED, crl->getIssuerX500Principal(), entry->getExtensions());
	//    .local v3, "t":Ljava/lang/Throwable;
	cVar4 = std::make_shared<java::security::cert::CertPathValidatorException>(t->getMessage(), t, 0x0, -0x1, java::security::cert::CertPathValidatorException_S_BasicReason::REVOKED);
	// throw
	throw cVar4;
	// 2173    .line 665
	// 2174    .end local v3    # "t":Ljava/lang/Throwable;
	// 2175    .end local v8    # "crl":Ljava/security/cert/X509CRL;
	// 2176    .end local v10    # "e":Ljava/security/cert/X509CRLEntry;
	// 2177    .end local v11    # "entry":Lsun/security/x509/X509CRLEntryImpl;
	// 2178    .end local v13    # "revocationDate":Ljava/util/Date;
	// 2179    .end local v15    # "unresCritExts":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_cond_d8:
	return;

}
// .method private checkCRLs(Ljava/security/cert/X509Certificate;Ljava/security/PublicKey;Ljava/security/cert/X509Certificate;ZZLjava/util/Set;Ljava/util/Set;)V
void sun::security::provider::certpath::RevocationChecker::checkCRLs(std::shared_ptr<java::security::cert::X509Certificate> cert,std::shared_ptr<java::security::PublicKey> prevKey,std::shared_ptr<java::security::cert::X509Certificate> prevCert,bool signFlag,bool allowSeparateKey,std::shared_ptr<java::util::Set<java::security::cert::X509Certificate>> stackedCerts,std::shared_ptr<java::util::Set<java::security::cert::TrustAnchor>> anchors)
{
	
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar0;
	std::shared_ptr<java::util::HashSet> possibleCRLs;
	std::shared_ptr<java::util::HashSet> approvedCRLs;
	std::shared_ptr<java::security::cert::X509CRLSelector> sel;
	int networkFailureException;
	std::shared_ptr<java::util::Iterator> store_S_iterator;
	std::shared_ptr<java::security::cert::CertStore> store;
	std::shared_ptr<java::security::cert::CertStoreException> e;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::security::cert::CertPathValidatorException> networkFailureException;
	std::shared_ptr<java::util::Iterator> crl_S_iterator;
	std::shared_ptr<java::security::cert::CRL> crl;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared<std::vector<bool[]>> reasonsMask;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<sun::security::provider::certpath::PKIX_S_CertStoreTypeException> e;
	std::shared_ptr<sun::security::provider::certpath::PKIX_S_CertStoreTypeException> cste;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar4;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar5;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar6;
	
	//    .param p1, "cert"    # Ljava/security/cert/X509Certificate;
	//    .param p2, "prevKey"    # Ljava/security/PublicKey;
	//    .param p3, "prevCert"    # Ljava/security/cert/X509Certificate;
	//    .param p4, "signFlag"    # Z
	//    .param p5, "allowSeparateKey"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 2192        value = {
	// 2193            "(",
	// 2194            "Ljava/security/cert/X509Certificate;",
	// 2195            "Ljava/security/PublicKey;",
	// 2196            "Ljava/security/cert/X509Certificate;",
	// 2197            "ZZ",
	// 2198            "Ljava/util/Set",
	// 2199            "<",
	// 2200            "Ljava/security/cert/X509Certificate;",
	// 2201            ">;",
	// 2202            "Ljava/util/Set",
	// 2203            "<",
	// 2204            "Ljava/security/cert/TrustAnchor;",
	// 2205            ">;)V"
	// 2206        }
	// 2207    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 2210        value = {
	// 2211            Ljava/security/cert/CertPathValidatorException;
	// 2212        }
	// 2213    .end annotation
	//    .local p6, "stackedCerts":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/X509Certificate;>;"
	//    .local p7, "anchors":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/TrustAnchor;>;"
	if ( !(sun::security::provider::certpath::RevocationChecker::debug) )  
		goto label_cond_c;
	sun::security::provider::certpath::RevocationChecker::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("RevocationChecker.checkCRLs() ---checking revocation status ...")));
label_cond_c:
	if ( !(stackedCerts) )  
		goto label_cond_32;
	if ( !(stackedCerts->contains(cert)) )  
		goto label_cond_32;
	if ( !(sun::security::provider::certpath::RevocationChecker::debug) )  
		goto label_cond_24;
	sun::security::provider::certpath::RevocationChecker::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("RevocationChecker.checkCRLs() circular dependency")));
label_cond_24:
	cVar0 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Could not determine revocation status")), 0x0, 0x0, -0x1, java::security::cert::CertPathValidatorException_S_BasicReason::UNDETERMINED_REVOCATION_STATUS);
	// throw
	throw cVar0;
	// 2278    .line 494
label_cond_32:
	possibleCRLs = std::make_shared<java::util::HashSet>();
	//    .local v29, "possibleCRLs":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/X509CRL;>;"
	approvedCRLs = std::make_shared<java::util::HashSet>();
	//    .local v24, "approvedCRLs":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/X509CRL;>;"
	sel = std::make_shared<java::security::cert::X509CRLSelector>();
	//    .local v30, "sel":Ljava/security/cert/X509CRLSelector;
	sel->setCertificateChecking(cert);
	sun::security::provider::certpath::CertPathHelper::setDateAndTime(sel, this->params->date(), 0xdbba0);
	networkFailureException = 0x0;
	//    .local v6, "networkFailureException":Ljava/security/cert/CertPathValidatorException;
	store_S_iterator = this->certStores->iterator();
	//    .end local v6    # "networkFailureException":Ljava/security/cert/CertPathValidatorException;
	//    .local v32, "store$iterator":Ljava/util/Iterator;
label_cond_61:
label_goto_61:
	if ( !(store_S_iterator->hasNext()) )  
		goto label_cond_ca;
	store = store_S_iterator->next();
	store->checkCast("java::security::cert::CertStore");
	//    .local v31, "store":Ljava/security/cert/CertStore;
	try {
	//label_try_start_6d:
	crl_S_iterator = store->getCRLs(sel)->iterator();
	//    .local v27, "crl$iterator":Ljava/util/Iterator;
label_goto_79:
	if ( !(crl_S_iterator->hasNext()) )  
		goto label_cond_61;
	crl = crl_S_iterator->next();
	crl->checkCast("java::security::cert::CRL");
	//    .local v26, "crl":Ljava/security/cert/CRL;
	crl->checkCast("java::security::cert::X509CRL");
	//    .end local v26    # "crl":Ljava/security/cert/CRL;
	possibleCRLs->add(crl);
	//label_try_end_8e:
	}
	catch (java::security::cert::CertStoreException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_8f;
	}
	//    .catch Ljava/security/cert/CertStoreException; {:try_start_6d .. :try_end_8e} :catch_8f
	goto label_goto_79;
	// 2392    .line 507
	// 2393    .end local v27    # "crl$iterator":Ljava/util/Iterator;
label_catch_8f:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v8, "e":Ljava/security/cert/CertStoreException;
	if ( !(sun::security::provider::certpath::RevocationChecker::debug) )  
		goto label_cond_b1;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::RevocationChecker::debug->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("RevocationChecker.checkCRLs() CertStoreException: ")))->append(e->getMessage())->toString());
label_cond_b1:
	if ( networkFailureException )     
		goto label_cond_61;
	if ( !(sun::security::provider::certpath::CertStoreHelper::isCausedByNetworkIssue(store->getType(), e)) )  
		goto label_cond_61;
	networkFailureException = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unable to determine revocation status due to network error")), e, 0x0, -0x1, java::security::cert::CertPathValidatorException_S_BasicReason::UNDETERMINED_REVOCATION_STATUS);
	//    .local v6, "networkFailureException":Ljava/security/cert/CertPathValidatorException;
	goto label_goto_61;
	// 2468    .line 523
	// 2469    .end local v6    # "networkFailureException":Ljava/security/cert/CertPathValidatorException;
	// 2470    .end local v8    # "e":Ljava/security/cert/CertStoreException;
	// 2471    .end local v31    # "store":Ljava/security/cert/CertStore;
label_cond_ca:
	if ( !(sun::security::provider::certpath::RevocationChecker::debug) )  
		goto label_cond_eb;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::RevocationChecker::debug->println(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("RevocationChecker.checkCRLs() possible crls.size() = ")))->append(possibleCRLs->size())->toString());
label_cond_eb:
	reasonsMask = std::make_shared<std::vector<bool[]>>(0x9);
	//    .local v14, "reasonsMask":[Z
	if ( possibleCRLs->isEmpty() )     
		goto label_cond_10a;
	approvedCRLs->addAll(this->verifyPossibleCRLs(possibleCRLs, cert, prevKey, signFlag, reasonsMask, anchors));
label_cond_10a:
	if ( !(sun::security::provider::certpath::RevocationChecker::debug) )  
		goto label_cond_12b;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::RevocationChecker::debug->println(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("RevocationChecker.checkCRLs() approved crls.size() = ")))->append(approvedCRLs->size())->toString());
label_cond_12b:
	if ( approvedCRLs->isEmpty() )     
		goto label_cond_143;
	if ( !(java::util::Arrays::equals(reasonsMask, sun::security::provider::certpath::RevocationChecker::ALL_REASONS)) )  
		goto label_cond_143;
	this->checkApprovedCRLs(cert, approvedCRLs);
label_goto_142:
	return;
	// 2607    .line 551
label_cond_143:
	try {
	//label_try_start_143:
	if ( !(this->crlDP) )  
		goto label_cond_16e;
	approvedCRLs->addAll(sun::security::provider::certpath::DistributionPointFetcher::getCRLs(sel, signFlag, prevKey, prevCert, this->params->sigProvider(), this->certStores, reasonsMask, anchors, 0x0));
	//label_try_end_16e:
	}
	catch (java::security::cert::CertStoreException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_186;
	}
	//    .catch Ljava/security/cert/CertStoreException; {:try_start_143 .. :try_end_16e} :catch_186
label_cond_16e:
	if ( approvedCRLs->isEmpty() )     
		goto label_cond_1b0;
	if ( !(java::util::Arrays::equals(reasonsMask, sun::security::provider::certpath::RevocationChecker::ALL_REASONS)) )  
		goto label_cond_1b0;
	this->checkApprovedCRLs(cert, approvedCRLs);
	goto label_goto_142;
	// 2686    .line 557
label_catch_186:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v8    # "e":Ljava/security/cert/CertStoreException;
	if ( !(e->instanceOf("sun::security::provider::certpath::PKIX_S_CertStoreTypeException")) )  
		goto label_cond_1aa;
	cste = e;
	cste->checkCast("sun::security::provider::certpath::PKIX_S_CertStoreTypeException");
	//    .local v28, "cste":Lsun/security/provider/certpath/PKIX$CertStoreTypeException;
	if ( !(sun::security::provider::certpath::CertStoreHelper::isCausedByNetworkIssue(cste->getType(), e)) )  
		goto label_cond_1aa;
	cVar4 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unable to determine revocation status due to network error")), e, 0x0, -0x1, java::security::cert::CertPathValidatorException_S_BasicReason::UNDETERMINED_REVOCATION_STATUS);
	// throw
	throw cVar4;
	// 2734    .line 568
	// 2735    .end local v28    # "cste":Lsun/security/provider/certpath/PKIX$CertStoreTypeException;
label_cond_1aa:
	cVar5 = std::make_shared<java::security::cert::CertPathValidatorException>(e);
	// throw
	throw cVar5;
	// 2743    .line 575
	// 2744    .end local v8    # "e":Ljava/security/cert/CertStoreException;
label_cond_1b0:
	if ( !(allowSeparateKey) )  
		goto label_cond_1c5;
	try {
	//label_try_start_1b2:
	this->verifyWithSeparateSigningKey(cert, prevKey, signFlag, stackedCerts);
	//label_try_end_1bf:
	}
	catch (java::security::cert::CertPathValidatorException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1c0;
	}
	//    .catch Ljava/security/cert/CertPathValidatorException; {:try_start_1b2 .. :try_end_1bf} :catch_1c0
	return;
	// 2767    .line 580
label_catch_1c0:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v25, "cpve":Ljava/security/cert/CertPathValidatorException;
	if ( !(networkFailureException) )  
		goto label_cond_1c4;
	// throw
	throw networkFailureException;
	// 2778    .line 588
label_cond_1c4:
	// throw
	throw;
	// 2782    .line 591
	// 2783    .end local v25    # "cpve":Ljava/security/cert/CertPathValidatorException;
label_cond_1c5:
	if ( !(networkFailureException) )  
		goto label_cond_1c8;
	// throw
	throw networkFailureException;
	// 2790    .line 598
label_cond_1c8:
	cVar6 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Could not determine revocation status")), 0x0, 0x0, -0x1, java::security::cert::CertPathValidatorException_S_BasicReason::UNDETERMINED_REVOCATION_STATUS);
	// throw
	throw cVar6;

}
// .method private checkCRLs(Ljava/security/cert/X509Certificate;Ljava/util/Collection;Ljava/util/Set;Ljava/security/PublicKey;Z)V
void sun::security::provider::certpath::RevocationChecker::checkCRLs(std::shared_ptr<java::security::cert::X509Certificate> cert,std::shared_ptr<java::util::Collection<java::lang::String>> unresolvedCritExts,std::shared_ptr<java::util::Set<java::security::cert::X509Certificate>> stackedCerts,std::shared_ptr<java::security::PublicKey> pubKey,bool signFlag)
{
	
	//    .param p1, "cert"    # Ljava/security/cert/X509Certificate;
	//    .param p4, "pubKey"    # Ljava/security/PublicKey;
	//    .param p5, "signFlag"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 2819        value = {
	// 2820            "(",
	// 2821            "Ljava/security/cert/X509Certificate;",
	// 2822            "Ljava/util/Collection",
	// 2823            "<",
	// 2824            "Ljava/lang/String;",
	// 2825            ">;",
	// 2826            "Ljava/util/Set",
	// 2827            "<",
	// 2828            "Ljava/security/cert/X509Certificate;",
	// 2829            ">;",
	// 2830            "Ljava/security/PublicKey;",
	// 2831            "Z)V"
	// 2832        }
	// 2833    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 2836        value = {
	// 2837            Ljava/security/cert/CertPathValidatorException;
	// 2838        }
	// 2839    .end annotation
	//    .local p2, "unresolvedCritExts":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/lang/String;>;"
	//    .local p3, "stackedCerts":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/X509Certificate;>;"
	this->checkCRLs(cert, pubKey, 0x0, signFlag, 0x1, stackedCerts, this->params->trustAnchors());
	return;

}
// .method private checkOCSP(Ljava/security/cert/X509Certificate;Ljava/util/Collection;)V
void sun::security::provider::certpath::RevocationChecker::checkOCSP(std::shared_ptr<java::security::cert::X509Certificate> cert,std::shared_ptr<java::util::Collection<java::lang::String>> unresolvedCritExts)
{
	
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<sun::security::x509::X509CertImpl> currCert;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar3;
	std::shared_ptr<sun::security::provider::certpath::CertId> certId;
	std::shared_ptr<java::lang::Object> certId;
	std::shared_ptr<unsigned char[]> responseBytes;
	std::shared_ptr<sun::security::provider::certpath::OCSPResponse> response;
	std::shared_ptr<java::util::Iterator> ext_S_iterator;
	std::shared_ptr<java::security::cert::Extension> ext;
	std::shared_ptr<sun::security::provider::certpath::OCSP_S_RevocationStatus> rs;
	auto certStatus;
	auto revocationTime;
	std::shared_ptr<java::security::cert::CertificateRevokedException> t;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar1;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar4;
	std::shared_ptr<java::net::URI> responderURI;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar2;
	
	//    .param p1, "cert"    # Ljava/security/cert/X509Certificate;
	//    .annotation system Ldalvik/annotation/Signature;
	// 2876        value = {
	// 2877            "(",
	// 2878            "Ljava/security/cert/X509Certificate;",
	// 2879            "Ljava/util/Collection",
	// 2880            "<",
	// 2881            "Ljava/lang/String;",
	// 2882            ">;)V"
	// 2883        }
	// 2884    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 2887        value = {
	// 2888            Ljava/security/cert/CertPathValidatorException;
	// 2889        }
	// 2890    .end annotation
	//    .local p2, "unresolvedCritExts":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/lang/String;>;"
	0x0;
	//    .local v25, "currCert":Lsun/security/x509/X509CertImpl;
	try {
	//label_try_start_2:
	//label_try_end_5:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_69;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_2 .. :try_end_5} :catch_69
	currCert = sun::security::x509::X509CertImpl::toImpl(cert);
	//    .local v25, "currCert":Lsun/security/x509/X509CertImpl;
	//    .local v28, "response":Lsun/security/provider/certpath/OCSPResponse;
	0x0;
	//    .local v22, "certId":Lsun/security/provider/certpath/CertId;
	try {
	//label_try_start_a:
	if ( !(this->issuerCert) )  
		goto label_cond_72;
	var14 = certId(this->issuerCert, currCert->getSerialNumberObject());
	//    .local v23, "certId":Lsun/security/provider/certpath/CertId;
	certId = certId;
	//    .end local v23    # "certId":Lsun/security/provider/certpath/CertId;
	//    .local v22, "certId":Lsun/security/provider/certpath/CertId;
label_goto_21:
	responseBytes = this->ocspResponses->get(cert);
	responseBytes->checkCast("unsigned char[]");
	//    .local v29, "responseBytes":[B
	if ( !(responseBytes) )  
		goto label_cond_f1;
	if ( !(sun::security::provider::certpath::RevocationChecker::debug) )  
		goto label_cond_3b;
	sun::security::provider::certpath::RevocationChecker::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Found cached OCSP response")));
label_cond_3b:
	response = std::make_shared<sun::security::provider::certpath::OCSPResponse>(responseBytes);
	//label_try_end_42:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_109;
	}
	//    .catch Ljava/io/IOException; {:try_start_a .. :try_end_42} :catch_109
	//    .local v1, "response":Lsun/security/provider/certpath/OCSPResponse;
	//    .local v6, "nonce":[B
	try {
	//label_try_start_43:
	//    .end local v28    # "response":Lsun/security/provider/certpath/OCSPResponse;
	ext_S_iterator = this->ocspExtensions->iterator();
	//    .end local v6    # "nonce":[B
	//    .local v27, "ext$iterator":Ljava/util/Iterator;
label_cond_4b:
label_goto_4b:
	if ( !(ext_S_iterator->hasNext()) )  
		goto label_cond_90;
	ext = ext_S_iterator->next();
	ext->checkCast("java::security::cert::Extension");
	//    .local v26, "ext":Ljava/security/cert/Extension;
	if ( !(ext->getId()->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("1.3.6.1.5.5.7.48.1.2")))) )  
		goto label_cond_4b;
	//label_try_end_67:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_153;
	}
	//    .catch Ljava/io/IOException; {:try_start_43 .. :try_end_67} :catch_153
	ext->getValue();
	//    .local v6, "nonce":[B
	goto label_goto_4b;
	// 3041    .line 674
	// 3042    .end local v1    # "response":Lsun/security/provider/certpath/OCSPResponse;
	// 3043    .end local v6    # "nonce":[B
	// 3044    .end local v22    # "certId":Lsun/security/provider/certpath/CertId;
	// 3045    .end local v26    # "ext":Ljava/security/cert/Extension;
	// 3046    .end local v27    # "ext$iterator":Ljava/util/Iterator;
	// 3047    .end local v29    # "responseBytes":[B
	// 3048    .local v25, "currCert":Lsun/security/x509/X509CertImpl;
label_catch_69:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v21, "ce":Ljava/security/cert/CertificateException;
	tryCatchExcetionList.pop_back();
	cVar0 = std::make_shared<java::security::cert::CertPathValidatorException>(getCatchExcetionFromList);
	// throw
	throw cVar0;
	// 3062    .line 690
	// 3063    .end local v21    # "ce":Ljava/security/cert/CertificateException;
	// 3064    .local v22, "certId":Lsun/security/provider/certpath/CertId;
	// 3065    .local v25, "currCert":Lsun/security/x509/X509CertImpl;
	// 3066    .restart local v28    # "response":Lsun/security/provider/certpath/OCSPResponse;
label_cond_72:
	try {
	//label_try_start_72:
	var60 = certId(this->anchor->getCA(), this->anchor->getCAPublicKey(), currCert->getSerialNumberObject());
	//label_try_end_8d:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_109;
	}
	//    .catch Ljava/io/IOException; {:try_start_72 .. :try_end_8d} :catch_109
	//    .restart local v23    # "certId":Lsun/security/provider/certpath/CertId;
	certId = certId;
	//    .end local v23    # "certId":Lsun/security/provider/certpath/CertId;
	//    .local v22, "certId":Lsun/security/provider/certpath/CertId;
	goto label_goto_21;
	// 3106    .line 709
	// 3107    .end local v28    # "response":Lsun/security/provider/certpath/OCSPResponse;
	// 3108    .restart local v1    # "response":Lsun/security/provider/certpath/OCSPResponse;
	// 3109    .restart local v27    # "ext$iterator":Ljava/util/Iterator;
	// 3110    .restart local v29    # "responseBytes":[B
label_cond_90:
	try {
	//label_try_start_90:
	response->verify(java::util::Collections::singletonList(certId), this->issuerCert, this->responderCert, this->params->date(), 0x0);
	//label_try_end_a7:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_153;
	}
	//    .catch Ljava/io/IOException; {:try_start_90 .. :try_end_a7} :catch_153
	//    .end local v27    # "ext$iterator":Ljava/util/Iterator;
label_goto_a7:
	rs = response->getSingleResponse(certId);
	//    .local v31, "rs":Lsun/security/provider/certpath/OCSP$RevocationStatus;
	certStatus = rs->getCertStatus();
	//    .local v24, "certStatus":Lsun/security/provider/certpath/OCSP$RevocationStatus$CertStatus;
	if ( certStatus != sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus::REVOKED )
		goto label_cond_135;
	revocationTime = rs->getRevocationTime();
	//    .local v30, "revocationTime":Ljava/util/Date;
	if ( !(revocationTime->before(this->params->date())) )  
		goto label_cond_152;
	t = std::make_shared<java::security::cert::CertificateRevokedException>(revocationTime, rs->getRevocationReason(), response->getSignerCertificate()->getSubjectX500Principal(), rs->getSingleExtensions());
	//    .local v14, "t":Ljava/lang/Throwable;
	cVar1 = std::make_shared<java::security::cert::CertPathValidatorException>(t->getMessage(), t, 0x0, -0x1, java::security::cert::CertPathValidatorException_S_BasicReason::REVOKED);
	// throw
	throw cVar1;
	// 3234    .line 713
	// 3235    .end local v1    # "response":Lsun/security/provider/certpath/OCSPResponse;
	// 3236    .end local v14    # "t":Ljava/lang/Throwable;
	// 3237    .end local v24    # "certStatus":Lsun/security/provider/certpath/OCSP$RevocationStatus$CertStatus;
	// 3238    .end local v30    # "revocationTime":Ljava/util/Date;
	// 3239    .end local v31    # "rs":Lsun/security/provider/certpath/OCSP$RevocationStatus;
	// 3240    .restart local v28    # "response":Lsun/security/provider/certpath/OCSPResponse;
label_cond_f1:
	try {
	//label_try_start_f1:
	if ( !(this->responderURI) )  
		goto label_cond_119;
	responderURI = this->responderURI;
	//    .local v8, "responderURI":Ljava/net/URI;
label_goto_fb:
	if ( responderURI )     
		goto label_cond_11e;
	cVar2 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Certificate does not specify OCSP responder")), 0x0, 0x0, -0x1);
	// throw
	throw cVar2;
	// 3276    :try_end_109
	// 3277    .catch Ljava/io/IOException; {:try_start_f1 .. :try_end_109} :catch_109
	// 3279    .line 726
	// 3280    .end local v8    # "responderURI":Ljava/net/URI;
	// 3281    .end local v22    # "certId":Lsun/security/provider/certpath/CertId;
	// 3282    .end local v29    # "responseBytes":[B
label_catch_109:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v11, "e":Ljava/io/IOException;
	0x0;
	//    .end local v28    # "response":Lsun/security/provider/certpath/OCSPResponse;
	//    .restart local v1    # "response":Lsun/security/provider/certpath/OCSPResponse;
label_goto_10c:
	cVar3 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unable to determine revocation status due to network error")), e, 0x0, -0x1, java::security::cert::CertPathValidatorException_S_BasicReason::UNDETERMINED_REVOCATION_STATUS);
	// throw
	throw cVar3;
	// 3310    .line 715
	// 3311    .end local v1    # "response":Lsun/security/provider/certpath/OCSPResponse;
	// 3312    .end local v11    # "e":Ljava/io/IOException;
	// 3313    .restart local v22    # "certId":Lsun/security/provider/certpath/CertId;
	// 3314    .restart local v28    # "response":Lsun/security/provider/certpath/OCSPResponse;
	// 3315    .restart local v29    # "responseBytes":[B
label_cond_119:
	try {
	//label_try_start_119:
	responderURI = sun::security::provider::certpath::OCSP::getResponderURI(currCert);
	//    .restart local v8    # "responderURI":Ljava/net/URI;
	goto label_goto_fb;
	// 3325    .line 722
label_cond_11e:
	//label_try_end_132:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_109;
	}
	//    .catch Ljava/io/IOException; {:try_start_119 .. :try_end_132} :catch_109
	//    .restart local v1    # "response":Lsun/security/provider/certpath/OCSPResponse;
	goto label_goto_a7;
	// 3357    .line 745
	// 3358    .end local v8    # "responderURI":Ljava/net/URI;
	// 3359    .end local v28    # "response":Lsun/security/provider/certpath/OCSPResponse;
	// 3360    .restart local v24    # "certStatus":Lsun/security/provider/certpath/OCSP$RevocationStatus$CertStatus;
	// 3361    .restart local v31    # "rs":Lsun/security/provider/certpath/OCSP$RevocationStatus;
label_cond_135:
	if ( certStatus != sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus::UNKNOWN )
		goto label_cond_152;
	cVar4 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Certificate\'s revocation status is unknown")), 0x0, this->params->certPath(), -0x1, java::security::cert::CertPathValidatorException_S_BasicReason::UNDETERMINED_REVOCATION_STATUS);
	// throw
	throw cVar4;
	// 3398    .line 751
label_cond_152:
	return;
	// 3402    .line 726
	// 3403    .end local v24    # "certStatus":Lsun/security/provider/certpath/OCSP$RevocationStatus$CertStatus;
	// 3404    .end local v31    # "rs":Lsun/security/provider/certpath/OCSP$RevocationStatus;
label_catch_153:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v11    # "e":Ljava/io/IOException;
	goto label_goto_10c;

}
// .method private static getResponderCert(Ljava/lang/String;Ljava/lang/String;Ljava/util/Set;Ljava/util/List;)Ljava/security/cert/X509Certificate;
std::shared_ptr<java::security::cert::X509Certificate> sun::security::provider::certpath::RevocationChecker::getResponderCert(std::shared_ptr<java::lang::String> issuer,std::shared_ptr<java::lang::String> serial,std::shared_ptr<java::util::Set<java::security::cert::TrustAnchor>> anchors,std::shared_ptr<java::util::List<java::security::cert::CertStore>> stores)
{
	
	std::shared_ptr<java::security::cert::X509CertSelector> sel;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar2;
	std::shared_ptr<javax::security::auth::x500::X500Principal> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar3;
	std::shared_ptr<java::math::BigInteger> cVar1;
	
	//    .param p0, "issuer"    # Ljava/lang/String;
	//    .param p1, "serial"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 3417        value = {
	// 3418            "(",
	// 3419            "Ljava/lang/String;",
	// 3420            "Ljava/lang/String;",
	// 3421            "Ljava/util/Set",
	// 3422            "<",
	// 3423            "Ljava/security/cert/TrustAnchor;",
	// 3424            ">;",
	// 3425            "Ljava/util/List",
	// 3426            "<",
	// 3427            "Ljava/security/cert/CertStore;",
	// 3428            ">;)",
	// 3429            "Ljava/security/cert/X509Certificate;"
	// 3430        }
	// 3431    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 3434        value = {
	// 3435            Ljava/security/cert/CertPathValidatorException;
	// 3436        }
	// 3437    .end annotation
	//    .local p2, "anchors":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/TrustAnchor;>;"
	//    .local p3, "stores":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/CertStore;>;"
	sel = std::make_shared<java::security::cert::X509CertSelector>();
	//    .local v2, "sel":Ljava/security/cert/X509CertSelector;
	try {
	//label_try_start_5:
	cVar0 = std::make_shared<javax::security::auth::x500::X500Principal>(issuer);
	sel->setIssuer(cVar0);
	//label_try_end_d:
	}
	catch (java::lang::IllegalArgumentException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_20;
	}
	//    .catch Ljava/lang/IllegalArgumentException; {:try_start_5 .. :try_end_d} :catch_20
	try {
	//label_try_start_d:
	cVar1 = std::make_shared<java::math::BigInteger>(sun::security::provider::certpath::RevocationChecker::stripOutSeparators(serial), 0x10);
	sel->setSerialNumber(cVar1);
	//label_try_end_1b:
	}
	catch (java::lang::NumberFormatException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2a;
	}
	//    .catch Ljava/lang/NumberFormatException; {:try_start_d .. :try_end_1b} :catch_2a
	return sun::security::provider::certpath::RevocationChecker::getResponderCert(sel, anchors, stores);
	// 3481    .line 249
label_catch_20:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/IllegalArgumentException;
	cVar2 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("cannot parse ocsp.responderCertIssuerName property")), getCatchExcetionFromList);
	// throw
	throw cVar2;
	// 3497    .line 255
	// 3498    .end local v0    # "e":Ljava/lang/IllegalArgumentException;
label_catch_2a:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/NumberFormatException;
	cVar3 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("cannot parse ocsp.responderCertSerialNumber property")), getCatchExcetionFromList);
	// throw
	throw cVar3;

}
// .method private static getResponderCert(Ljava/lang/String;Ljava/util/Set;Ljava/util/List;)Ljava/security/cert/X509Certificate;
std::shared_ptr<java::security::cert::X509Certificate> sun::security::provider::certpath::RevocationChecker::getResponderCert(std::shared_ptr<java::lang::String> subject,std::shared_ptr<java::util::Set<java::security::cert::TrustAnchor>> anchors,std::shared_ptr<java::util::List<java::security::cert::CertStore>> stores)
{
	
	std::shared_ptr<java::security::cert::X509CertSelector> sel;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar1;
	std::shared_ptr<javax::security::auth::x500::X500Principal> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "subject"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 3519        value = {
	// 3520            "(",
	// 3521            "Ljava/lang/String;",
	// 3522            "Ljava/util/Set",
	// 3523            "<",
	// 3524            "Ljava/security/cert/TrustAnchor;",
	// 3525            ">;",
	// 3526            "Ljava/util/List",
	// 3527            "<",
	// 3528            "Ljava/security/cert/CertStore;",
	// 3529            ">;)",
	// 3530            "Ljava/security/cert/X509Certificate;"
	// 3531        }
	// 3532    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 3535        value = {
	// 3536            Ljava/security/cert/CertPathValidatorException;
	// 3537        }
	// 3538    .end annotation
	//    .local p1, "anchors":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/TrustAnchor;>;"
	//    .local p2, "stores":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/CertStore;>;"
	sel = std::make_shared<java::security::cert::X509CertSelector>();
	//    .local v1, "sel":Ljava/security/cert/X509CertSelector;
	try {
	//label_try_start_5:
	cVar0 = std::make_shared<javax::security::auth::x500::X500Principal>(subject);
	sel->setSubject(cVar0);
	//label_try_end_d:
	}
	catch (java::lang::IllegalArgumentException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_12;
	}
	//    .catch Ljava/lang/IllegalArgumentException; {:try_start_5 .. :try_end_d} :catch_12
	return sun::security::provider::certpath::RevocationChecker::getResponderCert(sel, anchors, stores);
	// 3566    .line 233
label_catch_12:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/IllegalArgumentException;
	cVar1 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("cannot parse ocsp.responderCertSubjectName property")), getCatchExcetionFromList);
	// throw
	throw cVar1;

}
// .method private static getResponderCert(Ljava/security/cert/X509CertSelector;Ljava/util/Set;Ljava/util/List;)Ljava/security/cert/X509Certificate;
std::shared_ptr<java::security::cert::X509Certificate> sun::security::provider::certpath::RevocationChecker::getResponderCert(std::shared_ptr<java::security::cert::X509CertSelector> sel,std::shared_ptr<java::util::Set<java::security::cert::TrustAnchor>> anchors,std::shared_ptr<java::util::List<java::security::cert::CertStore>> stores)
{
	
	std::shared_ptr<java::util::Iterator> anchor_S_iterator;
	std::shared_ptr<java::security::cert::TrustAnchor> anchor;
	std::shared_ptr<java::security::cert::Certificate> cert;
	std::shared_ptr<java::util::Iterator> store_S_iterator;
	std::shared_ptr<java::security::cert::CertStore> store;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::util::Collection> certs;
	std::shared_ptr<java::security::cert::X509Certificate> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar2;
	
	//    .param p0, "sel"    # Ljava/security/cert/X509CertSelector;
	//    .annotation system Ldalvik/annotation/Signature;
	// 3587        value = {
	// 3588            "(",
	// 3589            "Ljava/security/cert/X509CertSelector;",
	// 3590            "Ljava/util/Set",
	// 3591            "<",
	// 3592            "Ljava/security/cert/TrustAnchor;",
	// 3593            ">;",
	// 3594            "Ljava/util/List",
	// 3595            "<",
	// 3596            "Ljava/security/cert/CertStore;",
	// 3597            ">;)",
	// 3598            "Ljava/security/cert/X509Certificate;"
	// 3599        }
	// 3600    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 3603        value = {
	// 3604            Ljava/security/cert/CertPathValidatorException;
	// 3605        }
	// 3606    .end annotation
	//    .local p1, "anchors":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/TrustAnchor;>;"
	//    .local p2, "stores":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/CertStore;>;"
	anchor_S_iterator = anchors->iterator();
	//    .local v1, "anchor$iterator":Ljava/util/Iterator;
label_cond_4:
	if ( !(anchor_S_iterator->hasNext()) )  
		goto label_cond_1d;
	anchor = anchor_S_iterator->next();
	anchor->checkCast("java::security::cert::TrustAnchor");
	//    .local v0, "anchor":Ljava/security/cert/TrustAnchor;
	cert = anchor->getTrustedCert();
	//    .local v2, "cert":Ljava/security/cert/X509Certificate;
	if ( !(cert) )  
		goto label_cond_4;
	if ( !(sel->match(cert)) )  
		goto label_cond_4;
	return cert;
	// 3650    .line 278
	// 3651    .end local v0    # "anchor":Ljava/security/cert/TrustAnchor;
	// 3652    .end local v2    # "cert":Ljava/security/cert/X509Certificate;
label_cond_1d:
	store_S_iterator = stores->iterator();
	//    .local v6, "store$iterator":Ljava/util/Iterator;
label_cond_21:
label_goto_21:
	if ( !(store_S_iterator->hasNext()) )  
		goto label_cond_61;
	store = store_S_iterator->next();
	store->checkCast("java::security::cert::CertStore");
	//    .local v5, "store":Ljava/security/cert/CertStore;
	try {
	//label_try_start_2d:
	certs = store->getCertificates(sel);
	//    .local v3, "certs":Ljava/util/Collection;, "Ljava/util/Collection<+Ljava/security/cert/Certificate;>;"
	if ( certs->isEmpty() )     
		goto label_cond_21;
	cVar0 = certs->iterator()->next();
	cVar0->checkCast("java::security::cert::X509Certificate");
	//label_try_end_41:
	}
	catch (java::security::cert::CertStoreException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_42;
	}
	//    .catch Ljava/security/cert/CertStoreException; {:try_start_2d .. :try_end_41} :catch_42
	return cVar0;
	// 3703    .line 285
	// 3704    .end local v3    # "certs":Ljava/util/Collection;, "Ljava/util/Collection<+Ljava/security/cert/Certificate;>;"
label_catch_42:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v4, "e":Ljava/security/cert/CertStoreException;
	if ( !(sun::security::provider::certpath::RevocationChecker::debug) )  
		goto label_cond_21;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::RevocationChecker::debug->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("CertStore exception:")))->append(getCatchExcetionFromList)->toString());
	goto label_goto_21;
	// 3739    .line 293
	// 3740    .end local v4    # "e":Ljava/security/cert/CertStoreException;
	// 3741    .end local v5    # "store":Ljava/security/cert/CertStore;
label_cond_61:
	cVar2 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Cannot find the responder\'s certificate (set using the OCSP security properties).")));
	// throw
	throw cVar2;

}
// .method private static getResponderCert(Lsun/security/provider/certpath/RevocationChecker$RevocationProperties;Ljava/util/Set;Ljava/util/List;)Ljava/security/cert/X509Certificate;
std::shared_ptr<java::security::cert::X509Certificate> sun::security::provider::certpath::RevocationChecker::getResponderCert(std::shared_ptr<sun::security::provider::certpath::RevocationChecker_S_RevocationProperties> rp,std::shared_ptr<java::util::Set<java::security::cert::TrustAnchor>> anchors,std::shared_ptr<java::util::List<java::security::cert::CertStore>> stores)
{
	
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar0;
	
	//    .param p0, "rp"    # Lsun/security/provider/certpath/RevocationChecker$RevocationProperties;
	//    .annotation system Ldalvik/annotation/Signature;
	// 3758        value = {
	// 3759            "(",
	// 3760            "Lsun/security/provider/certpath/RevocationChecker$RevocationProperties;",
	// 3761            "Ljava/util/Set",
	// 3762            "<",
	// 3763            "Ljava/security/cert/TrustAnchor;",
	// 3764            ">;",
	// 3765            "Ljava/util/List",
	// 3766            "<",
	// 3767            "Ljava/security/cert/CertStore;",
	// 3768            ">;)",
	// 3769            "Ljava/security/cert/X509Certificate;"
	// 3770        }
	// 3771    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 3774        value = {
	// 3775            Ljava/security/cert/CertPathValidatorException;
	// 3776        }
	// 3777    .end annotation
	//    .local p1, "anchors":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/TrustAnchor;>;"
	//    .local p2, "stores":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/CertStore;>;"
	if ( !(rp->ocspSubject) )  
		goto label_cond_c;
	return sun::security::provider::certpath::RevocationChecker::getResponderCert(rp->ocspSubject, anchors, stores);
	// 3798    .line 214
label_cond_c:
	if ( !(rp->ocspIssuer) )  
		goto label_cond_1d;
	if ( !(rp->ocspSerial) )  
		goto label_cond_1d;
	return sun::security::provider::certpath::RevocationChecker::getResponderCert(rp->ocspIssuer, rp->ocspSerial, anchors, stores);
	// 3819    .line 217
label_cond_1d:
	if ( rp->ocspIssuer )     
		goto label_cond_25;
	if ( !(rp->ocspSerial) )  
		goto label_cond_2e;
label_cond_25:
	cVar0 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Must specify both ocsp.responderCertIssuerName and ocsp.responderCertSerialNumber properties")));
	// throw
	throw cVar0;
	// 3841    .line 222
label_cond_2e:
	return 0x0;

}
// .method private static getRevocationProperties()Lsun/security/provider/certpath/RevocationChecker$RevocationProperties;
std::shared_ptr<sun::security::provider::certpath::RevocationChecker_S_RevocationProperties> sun::security::provider::certpath::RevocationChecker::getRevocationProperties()
{
	
	std::shared_ptr<sun::security::provider::certpath::RevocationChecker_S_1> cVar0;
	std::shared_ptr<sun::security::provider::certpath::RevocationChecker_S_RevocationProperties> cVar1;
	
	cVar0 = std::make_shared<sun::security::provider::certpath::RevocationChecker_S_1>();
	cVar1 = java::security::AccessController::doPrivileged(cVar0);
	cVar1->checkCast("sun::security::provider::certpath::RevocationChecker_S_RevocationProperties");
	return cVar1;

}
// .method private isSoftFailException(Ljava/security/cert/CertPathValidatorException;)Z
bool sun::security::provider::certpath::RevocationChecker::isSoftFailException(std::shared_ptr<java::security::cert::CertPathValidatorException> e)
{
	
	std::shared_ptr<java::security::cert::CertPathValidatorException> e2;
	
	//    .param p1, "e"    # Ljava/security/cert/CertPathValidatorException;
	if ( !(this->softFail) )  
		goto label_cond_2c;
	if ( e->getReason() != java::security::cert::CertPathValidatorException_S_BasicReason::UNDETERMINED_REVOCATION_STATUS )
		goto label_cond_2c;
	e2 = std::make_shared<java::security::cert::CertPathValidatorException>(e->getMessage(), e->getCause(), this->params->certPath(), this->certIndex, e->getReason());
	//    .local v0, "e2":Ljava/security/cert/CertPathValidatorException;
	this->softFailExceptions->addFirst(e2);
	return 0x1;
	// 3923    .line 435
	// 3924    .end local v0    # "e2":Ljava/security/cert/CertPathValidatorException;
label_cond_2c:
	return 0x0;

}
// .method private static stripOutSeparators(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::provider::certpath::RevocationChecker::stripOutSeparators(std::shared_ptr<java::lang::String> value)
{
	
	auto chars;
	std::shared_ptr<java::lang::StringBuilder> hexNumber;
	int i;
	
	//    .param p0, "value"    # Ljava/lang/String;
	chars = value->toCharArray();
	//    .local v0, "chars":[C
	hexNumber = std::make_shared<java::lang::StringBuilder>();
	//    .local v1, "hexNumber":Ljava/lang/StringBuilder;
	i = 0x0;
	//    .local v2, "i":I
label_goto_a:
	if ( i >= chars->size() )
		goto label_cond_21;
	if ( std::make_shared<java::lang::String>(std::make_shared<char[]>("0123456789ABCDEFabcdef"))->indexOf(chars[i]) == -0x1 )
		goto label_cond_1e;
	hexNumber->append(chars[i]);
label_cond_1e:
	i = ( i + 0x1);
	goto label_goto_a;
	// 3981    .line 765
label_cond_21:
	return hexNumber->toString();

}
// .method private static toURI(Ljava/lang/String;)Ljava/net/URI;
std::shared_ptr<java::net::URI> sun::security::provider::certpath::RevocationChecker::toURI(std::shared_ptr<java::lang::String> uriString)
{
	
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar1;
	std::shared_ptr<java::net::URI> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "uriString"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 3994        value = {
	// 3995            Ljava/security/cert/CertPathValidatorException;
	// 3996        }
	// 3997    .end annotation
	if ( !(uriString) )  
		goto label_cond_9;
	try {
	//label_try_start_3:
	cVar0 = std::make_shared<java::net::URI>(uriString);
	//label_try_end_8:
	}
	catch (java::net::URISyntaxException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_a;
	}
	//    .catch Ljava/net/URISyntaxException; {:try_start_3 .. :try_end_8} :catch_a
	return cVar0;
	// 4015    .line 173
label_cond_9:
	return 0x0;
	// 4019    .line 174
label_catch_a:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/net/URISyntaxException;
	cVar1 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("cannot parse ocsp.responderURL property")), getCatchExcetionFromList);
	// throw
	throw cVar1;

}
// .method private updateState(Ljava/security/cert/X509Certificate;)V
void sun::security::provider::certpath::RevocationChecker::updateState(std::shared_ptr<java::security::cert::X509Certificate> cert)
{
	
	std::shared_ptr<java::security::PublicKey> pubKey;
	
	//    .param p1, "cert"    # Ljava/security/cert/X509Certificate;
	//    .annotation system Ldalvik/annotation/Throws;
	// 4040        value = {
	// 4041            Ljava/security/cert/CertPathValidatorException;
	// 4042        }
	// 4043    .end annotation
	this->issuerCert = cert;
	pubKey = cert->getPublicKey();
	//    .local v0, "pubKey":Ljava/security/PublicKey;
	if ( !(sun::security::provider::certpath::PKIX::isDSAPublicKeyWithoutParams(pubKey)) )  
		goto label_cond_12;
label_cond_12:
	this->prevPubKey = pubKey;
	this->crlSignFlag = sun::security::provider::certpath::RevocationChecker::certCanSignCrl(cert);
	if ( this->certIndex <= 0 )
		goto label_cond_24;
	this->certIndex = ( this->certIndex + -0x1);
label_cond_24:
	return;

}
// .method private verifyPossibleCRLs(Ljava/util/Set;Ljava/security/cert/X509Certificate;Ljava/security/PublicKey;Z[ZLjava/util/Set;)Ljava/util/Collection;
std::shared_ptr<java::util::Collection<java::security::cert::X509CRL>> sun::security::provider::certpath::RevocationChecker::verifyPossibleCRLs(std::shared_ptr<java::util::Set<java::security::cert::X509CRL>> crls,std::shared_ptr<java::security::cert::X509Certificate> cert,std::shared_ptr<java::security::PublicKey> prevKey,bool signFlag,std::shared_ptr<bool[]> reasonsMask,std::shared_ptr<java::util::Set<java::security::cert::TrustAnchor>> anchors)
{
	
	std::shared_ptr<java::lang::Exception> e;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<sun::security::x509::X509CertImpl> certImpl;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<sun::security::x509::CRLDistributionPointsExtension> ext;
	std::shared_ptr<sun::security::x509::X500Name> certIssuer;
	std::shared_ptr<sun::security::x509::DistributionPoint> point;
	std::shared_ptr<sun::security::x509::GeneralNames> cVar1;
	std::shared_ptr<sun::security::x509::GeneralName> cVar2;
	std::shared_ptr<java::util::HashSet> results;
	std::shared_ptr<java::util::Iterator> point_S_iterator;
	std::shared_ptr<java::util::Iterator> crl_S_iterator;
	std::shared_ptr<java::security::cert::X509CRL> crl;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p2, "cert"    # Ljava/security/cert/X509Certificate;
	//    .param p3, "prevKey"    # Ljava/security/PublicKey;
	//    .param p4, "signFlag"    # Z
	//    .param p5, "reasonsMask"    # [Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 4104        value = {
	// 4105            "(",
	// 4106            "Ljava/util/Set",
	// 4107            "<",
	// 4108            "Ljava/security/cert/X509CRL;",
	// 4109            ">;",
	// 4110            "Ljava/security/cert/X509Certificate;",
	// 4111            "Ljava/security/PublicKey;",
	// 4112            "Z[Z",
	// 4113            "Ljava/util/Set",
	// 4114            "<",
	// 4115            "Ljava/security/cert/TrustAnchor;",
	// 4116            ">;)",
	// 4117            "Ljava/util/Collection",
	// 4118            "<",
	// 4119            "Ljava/security/cert/X509CRL;",
	// 4120            ">;"
	// 4121        }
	// 4122    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 4125        value = {
	// 4126            Ljava/security/cert/CertPathValidatorException;
	// 4127        }
	// 4128    .end annotation
	//    .local p1, "crls":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/X509CRL;>;"
	//    .local p6, "anchors":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/TrustAnchor;>;"
	try {
	//label_try_start_0:
	certImpl = sun::security::x509::X509CertImpl::toImpl(cert);
	//    .local v1, "certImpl":Lsun/security/x509/X509CertImpl;
	if ( !(sun::security::provider::certpath::RevocationChecker::debug) )  
		goto label_cond_25;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::RevocationChecker::debug->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("RevocationChecker.verifyPossibleCRLs: Checking CRLDPs for ")))->append(certImpl->getSubjectX500Principal())->toString());
label_cond_25:
	ext = certImpl->getCRLDistributionPointsExtension();
	//    .local v15, "ext":Lsun/security/x509/CRLDistributionPointsExtension;
	0x0;
	//    .local v17, "points":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/DistributionPoint;>;"
	if ( ext )     
		goto label_cond_c4;
	certIssuer = certImpl->getIssuerDN();
	certIssuer->checkCast("sun::security::x509::X500Name");
	//    .local v12, "certIssuer":Lsun/security/x509/X500Name;
	cVar1 = std::make_shared<sun::security::x509::GeneralNames>();
	cVar2 = std::make_shared<sun::security::x509::GeneralName>(certIssuer);
	point = std::make_shared<sun::security::x509::DistributionPoint>(cVar1->add(cVar2), 0x0, 0x0);
	//    .local v2, "point":Lsun/security/x509/DistributionPoint;
	//    .end local v2    # "point":Lsun/security/x509/DistributionPoint;
	//    .end local v12    # "certIssuer":Lsun/security/x509/X500Name;
	//    .local v17, "points":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/DistributionPoint;>;"
label_goto_4c:
	results = std::make_shared<java::util::HashSet>();
	//    .local v18, "results":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/X509CRL;>;"
	point_S_iterator = points->iterator();
	//    .local v16, "point$iterator":Ljava/util/Iterator;
label_cond_55:
	if ( !(point_S_iterator->hasNext()) )  
		goto label_cond_d6;
	point = point_S_iterator->next();
	point->checkCast("sun::security::x509::DistributionPoint");
	//    .restart local v2    # "point":Lsun/security/x509/DistributionPoint;
	crl_S_iterator = crls->iterator();
	//    .local v13, "crl$iterator":Ljava/util/Iterator;
label_cond_65:
label_goto_65:
	if ( !(crl_S_iterator->hasNext()) )  
		goto label_cond_cc;
	crl = crl_S_iterator->next();
	crl->checkCast("java::security::cert::X509CRL");
	//    .local v3, "crl":Ljava/security/cert/X509CRL;
	if ( !(sun::security::provider::certpath::DistributionPointFetcher::verifyCRL(certImpl, point, crl, reasonsMask, signFlag, prevKey, 0x0, this->params->sigProvider(), anchors, this->certStores, this->params->date())) )  
		goto label_cond_65;
	results->add(crl);
	//label_try_end_99:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_9a;
	}
	catch (java::security::cert::CRLException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_9a;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_9a;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_0 .. :try_end_99} :catch_9a
	//    .catch Ljava/security/cert/CRLException; {:try_start_0 .. :try_end_99} :catch_9a
	//    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_99} :catch_9a
	goto label_goto_65;
	// 4328    .line 845
	// 4329    .end local v1    # "certImpl":Lsun/security/x509/X509CertImpl;
	// 4330    .end local v2    # "point":Lsun/security/x509/DistributionPoint;
	// 4331    .end local v3    # "crl":Ljava/security/cert/X509CRL;
	// 4332    .end local v13    # "crl$iterator":Ljava/util/Iterator;
	// 4333    .end local v15    # "ext":Lsun/security/x509/CRLDistributionPointsExtension;
	// 4334    .end local v16    # "point$iterator":Ljava/util/Iterator;
	// 4335    .end local v17    # "points":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/DistributionPoint;>;"
	// 4336    .end local v18    # "results":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/X509CRL;>;"
label_catch_9a:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v14, "e":Ljava/lang/Exception;
	if ( !(sun::security::provider::certpath::RevocationChecker::debug) )  
		goto label_cond_bf;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::RevocationChecker::debug->println(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Exception while verifying CRL: ")))->append(e->getMessage())->toString());
	e->printStackTrace();
label_cond_bf:
	return java::util::Collections::emptySet({const[class].FS-Param});
	// 4384    .line 828
	// 4385    .end local v14    # "e":Ljava/lang/Exception;
	// 4386    .restart local v1    # "certImpl":Lsun/security/x509/X509CertImpl;
	// 4387    .restart local v15    # "ext":Lsun/security/x509/CRLDistributionPointsExtension;
	// 4388    .local v17, "points":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/DistributionPoint;>;"
label_cond_c4:
	try {
	//label_try_start_c4:
	//    .local v17, "points":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/DistributionPoint;>;"
	goto label_goto_4c;
	// 4400    .line 841
	// 4401    .restart local v2    # "point":Lsun/security/x509/DistributionPoint;
	// 4402    .restart local v13    # "crl$iterator":Ljava/util/Iterator;
	// 4403    .restart local v16    # "point$iterator":Ljava/util/Iterator;
	// 4404    .restart local v18    # "results":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/X509CRL;>;"
label_cond_cc:
	//label_try_end_d3:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_9a;
	}
	catch (java::security::cert::CRLException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_9a;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_9a;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_c4 .. :try_end_d3} :catch_9a
	//    .catch Ljava/security/cert/CRLException; {:try_start_c4 .. :try_end_d3} :catch_9a
	//    .catch Ljava/io/IOException; {:try_start_c4 .. :try_end_d3} :catch_9a
	if ( !(java::util::Arrays::equals(reasonsMask, sun::security::provider::certpath::RevocationChecker::ALL_REASONS)) )  
		goto label_cond_55;
	//    .end local v2    # "point":Lsun/security/x509/DistributionPoint;
	//    .end local v13    # "crl$iterator":Ljava/util/Iterator;
label_cond_d6:
	return results;

}
// .method private verifyWithSeparateSigningKey(Ljava/security/cert/X509Certificate;Ljava/security/PublicKey;ZLjava/util/Set;)V
void sun::security::provider::certpath::RevocationChecker::verifyWithSeparateSigningKey(std::shared_ptr<java::security::cert::X509Certificate> cert,std::shared_ptr<java::security::PublicKey> prevKey,bool signFlag,std::shared_ptr<java::util::Set<java::security::cert::X509Certificate>> stackedCerts)
{
	
	std::shared_ptr<java::lang::Throwable> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar2;
	
	//    .param p1, "cert"    # Ljava/security/cert/X509Certificate;
	//    .param p2, "prevKey"    # Ljava/security/PublicKey;
	//    .param p3, "signFlag"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 4433        value = {
	// 4434            "(",
	// 4435            "Ljava/security/cert/X509Certificate;",
	// 4436            "Ljava/security/PublicKey;",
	// 4437            "Z",
	// 4438            "Ljava/util/Set",
	// 4439            "<",
	// 4440            "Ljava/security/cert/X509Certificate;",
	// 4441            ">;)V"
	// 4442        }
	// 4443    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 4446        value = {
	// 4447            Ljava/security/cert/CertPathValidatorException;
	// 4448        }
	// 4449    .end annotation
	//    .local p4, "stackedCerts":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/X509Certificate;>;"
	cVar0 = 0x0;
	//    .local v6, "msg":Ljava/lang/String;
	if ( !(sun::security::provider::certpath::RevocationChecker::debug) )  
		goto label_cond_28;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::RevocationChecker::debug->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("RevocationChecker.verifyWithSeparateSigningKey() ---checking ")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("revocation status")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("...")))->toString());
label_cond_28:
	if ( !(stackedCerts) )  
		goto label_cond_49;
	if ( !(stackedCerts->contains(cert)) )  
		goto label_cond_49;
	if ( !(sun::security::provider::certpath::RevocationChecker::debug) )  
		goto label_cond_3c;
	sun::security::provider::certpath::RevocationChecker::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("RevocationChecker.verifyWithSeparateSigningKey() circular dependency")));
label_cond_3c:
	cVar2 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Could not determine revocation status")), cVar0, cVar0, -0x1, java::security::cert::CertPathValidatorException_S_BasicReason::UNDETERMINED_REVOCATION_STATUS);
	// throw
	throw cVar2;
	// 4541    .line 907
label_cond_49:
	if ( signFlag )     
		goto label_cond_4f;
	this->buildToNewKey(cert, cVar0, stackedCerts);
label_goto_4e:
	return;
	// 4552    .line 910
label_cond_4f:
	this->buildToNewKey(cert, prevKey, stackedCerts);
	goto label_goto_4e;

}
// .method public check(Ljava/security/cert/Certificate;Ljava/util/Collection;)V
void sun::security::provider::certpath::RevocationChecker::check(std::shared_ptr<java::security::cert::Certificate> cert,std::shared_ptr<java::util::Collection<java::lang::String>> unresolvedCritExts)
{
	
	//    .param p1, "cert"    # Ljava/security/cert/Certificate;
	//    .annotation system Ldalvik/annotation/Signature;
	// 4565        value = {
	// 4566            "(",
	// 4567            "Ljava/security/cert/Certificate;",
	// 4568            "Ljava/util/Collection",
	// 4569            "<",
	// 4570            "Ljava/lang/String;",
	// 4571            ">;)V"
	// 4572        }
	// 4573    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 4576        value = {
	// 4577            Ljava/security/cert/CertPathValidatorException;
	// 4578        }
	// 4579    .end annotation
	//    .local p2, "unresolvedCritExts":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/lang/String;>;"
	cert->checkCast("java::security::cert::X509Certificate");
	//    .end local p1    # "cert":Ljava/security/cert/Certificate;
	this->check(cert, unresolvedCritExts, this->prevPubKey, this->crlSignFlag);
	return;

}
// .method public clone()Lsun/security/provider/certpath/RevocationChecker;
std::shared_ptr<sun::security::provider::certpath::RevocationChecker> sun::security::provider::certpath::RevocationChecker::clone()
{
	
	std::shared_ptr<sun::security::provider::certpath::RevocationChecker> copy;
	std::shared_ptr<java::util::LinkedList> cVar0;
	
	copy = this->clone();
	copy->checkCast("sun::security::provider::certpath::RevocationChecker");
	//    .local v0, "copy":Lsun/security/provider/certpath/RevocationChecker;
	cVar0 = std::make_shared<java::util::LinkedList>(this->softFailExceptions);
	copy->softFailExceptions = cVar0;
	return copy;

}
// .method public getSoftFailExceptions()Ljava/util/List;
std::shared_ptr<java::util::List<java::security::cert::CertPathValidatorException>> sun::security::provider::certpath::RevocationChecker::getSoftFailExceptions()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 4656        value = {
	// 4657            "()",
	// 4658            "Ljava/util/List",
	// 4659            "<",
	// 4660            "Ljava/security/cert/CertPathValidatorException;",
	// 4661            ">;"
	// 4662        }
	// 4663    .end annotation
	return java::util::Collections::unmodifiableList(this->softFailExceptions);

}
// .method public getSupportedExtensions()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> sun::security::provider::certpath::RevocationChecker::getSupportedExtensions()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 4679        value = {
	// 4680            "()",
	// 4681            "Ljava/util/Set",
	// 4682            "<",
	// 4683            "Ljava/lang/String;",
	// 4684            ">;"
	// 4685        }
	// 4686    .end annotation
	return 0x0;

}
// .method init(Ljava/security/cert/TrustAnchor;Lsun/security/provider/certpath/PKIX$ValidatorParams;)V
void sun::security::provider::certpath::RevocationChecker::init(std::shared_ptr<java::security::cert::TrustAnchor> anchor,std::shared_ptr<sun::security::provider::certpath::PKIX_S_ValidatorParams> params)
{
	
	std::shared_ptr<java::lang::String> rp;
	std::shared_ptr<java::net::URI> uri;
	std::shared_ptr<java::security::cert::X509Certificate> cert;
	std::shared_ptr<java::lang::Iterable> options;
	std::shared_ptr<java::util::Iterator> option_S_iterator;
	std::shared_ptr<java::security::cert::PKIXRevocationChecker_S_Option> option;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<sun::security::provider::certpath::RevocationChecker_S_Mode> cVar2;
	std::shared_ptr<java::util::ArrayList> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	std::shared_ptr<java::security::cert::CollectionCertStoreParameters> cVar4;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "anchor"    # Ljava/security/cert/TrustAnchor;
	//    .param p2, "params"    # Lsun/security/provider/certpath/PKIX$ValidatorParams;
	//    .annotation system Ldalvik/annotation/Throws;
	// 4700        value = {
	// 4701            Ljava/security/cert/CertPathValidatorException;
	// 4702        }
	// 4703    .end annotation
	rp = sun::security::provider::certpath::RevocationChecker::getRevocationProperties({const[class].FS-Param});
	//    .local v5, "rp":Lsun/security/provider/certpath/RevocationChecker$RevocationProperties;
	uri = this->getOcspResponder();
	//    .local v6, "uri":Ljava/net/URI;
	if ( uri )     
		goto label_cond_10;
	//    .end local v6    # "uri":Ljava/net/URI;
label_cond_10:
	this->responderURI = uri;
	cert = this->getOcspResponderCert();
	//    .local v0, "cert":Ljava/security/cert/X509Certificate;
	if ( cert )     
		goto label_cond_24;
	//    .end local v0    # "cert":Ljava/security/cert/X509Certificate;
label_cond_24:
	this->responderCert = cert;
	options = this->getOptions();
	//    .local v4, "options":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/PKIXRevocationChecker$Option;>;"
	option_S_iterator = options->iterator();
	//    .local v3, "option$iterator":Ljava/util/Iterator;
label_pswitch_2e:
	if ( !(option_S_iterator->hasNext()) )  
		goto label_cond_61;
	option = option_S_iterator->next();
	option->checkCast("java::security::cert::PKIXRevocationChecker_S_Option");
	//    .local v2, "option":Ljava/security/cert/PKIXRevocationChecker$Option;
	// switch
	{
	auto item = ( sun::security::provider::certpath::RevocationChecker::-getjava-security-cert-PKIXRevocationChecker$OptionSwitchesValues({const[class].FS-Param})[option->ordinal()] );
	if (item == 1) goto label_pswitch_2e;
	if (item == 2) goto label_pswitch_2e;
	if (item == 3) goto label_pswitch_2e;
	if (item == 4) goto label_pswitch_2e;
	}
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::security::cert::CertPathValidatorException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unrecognized revocation parameter option: ")))->append(option)->toString());
	// throw
	throw cVar0;
	// 4826    .line 123
	// 4827    .end local v2    # "option":Ljava/security/cert/PKIXRevocationChecker$Option;
label_cond_61:
	this->softFail = options->contains(java::security::cert::PKIXRevocationChecker_S_Option::SOFT_FAIL);
	if ( !(this->legacy) )  
		goto label_cond_b5;
	if ( !(rp->ocspEnabled) )  
		goto label_cond_b2;
	cVar2 = sun::security::provider::certpath::RevocationChecker_S_Mode::PREFER_OCSP;
label_goto_73:
	this->mode = cVar2;
	this->onlyEE = rp->onlyEE;
label_goto_79:
	if ( !(this->legacy) )  
		goto label_cond_e4;
	this->crlDP = rp->crlDPEnabled;
label_goto_81:
	this->ocspResponses = this->getOcspResponses();
	this->ocspExtensions = this->getOcspExtensions();
	this->anchor = anchor;
	this->params = params;
	cVar3 = std::make_shared<java::util::ArrayList>(params->certStores());
	this->certStores = cVar3;
	try {
	//label_try_start_9c:
	cVar4 = std::make_shared<java::security::cert::CollectionCertStoreParameters>(params->certificates());
	this->certStores->add(java::security::cert::CertStore::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("Collection")), cVar4));
	//label_try_end_b1:
	}
	catch (java::security::InvalidAlgorithmParameterException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_e8;
	}
	catch (java::security::NoSuchAlgorithmException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_e8;
	}
	//    .catch Ljava/security/InvalidAlgorithmParameterException; {:try_start_9c .. :try_end_b1} :catch_e8
	//    .catch Ljava/security/NoSuchAlgorithmException; {:try_start_9c .. :try_end_b1} :catch_e8
label_cond_b1:
label_goto_b1:
	return;
	// 4930    .line 127
label_cond_b2:
	cVar2 = sun::security::provider::certpath::RevocationChecker_S_Mode::ONLY_CRLS;
	goto label_goto_73;
	// 4936    .line 130
label_cond_b5:
	if ( !(options->contains(java::security::cert::PKIXRevocationChecker_S_Option::NO_FALLBACK)) )  
		goto label_cond_d7;
	if ( !(options->contains(java::security::cert::PKIXRevocationChecker_S_Option::PREFER_CRLS)) )  
		goto label_cond_d2;
	this->mode = sun::security::provider::certpath::RevocationChecker_S_Mode::ONLY_CRLS;
label_cond_c9:
label_goto_c9:
	this->onlyEE = options->contains(java::security::cert::PKIXRevocationChecker_S_Option::ONLY_END_ENTITY);
	goto label_goto_79;
	// 4973    .line 134
label_cond_d2:
	this->mode = sun::security::provider::certpath::RevocationChecker_S_Mode::ONLY_OCSP;
	goto label_goto_c9;
	// 4981    .line 136
label_cond_d7:
	if ( !(options->contains(java::security::cert::PKIXRevocationChecker_S_Option::PREFER_CRLS)) )  
		goto label_cond_c9;
	this->mode = sun::security::provider::certpath::RevocationChecker_S_Mode::PREFER_CRLS;
	goto label_goto_c9;
	// 4998    .line 144
label_cond_e4:
	this->crlDP = 0x1;
	goto label_goto_81;
	// 5006    .line 156
label_catch_e8:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/security/GeneralSecurityException;
	if ( !(sun::security::provider::certpath::RevocationChecker::debug) )  
		goto label_cond_b1;
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::RevocationChecker::debug->println(cVar6->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("RevocationChecker: error creating Collection CertStore: ")))->append(getCatchExcetionFromList)->toString());
	goto label_goto_b1;
	// 5041    .line 112
	// 5042    nop
	// 5044    :pswitch_data_108
	// 5045    .packed-switch 0x1
	// 5046        :pswitch_2e
	// 5047        :pswitch_2e
	// 5048        :pswitch_2e
	// 5049        :pswitch_2e
	// 5050    .end packed-switch

}
// .method public init(Z)V
void sun::security::provider::certpath::RevocationChecker::init(bool forward)
{
	
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar0;
	std::shared_ptr<java::security::PublicKey> cVar1;
	
	//    .param p1, "forward"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 5057        value = {
	// 5058            Ljava/security/cert/CertPathValidatorException;
	// 5059        }
	// 5060    .end annotation
	if ( !(forward) )  
		goto label_cond_b;
	cVar0 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("forward checking not supported")));
	// throw
	throw cVar0;
	// 5077    .line 304
label_cond_b:
	if ( !(this->anchor) )  
		goto label_cond_23;
	this->issuerCert = this->anchor->getTrustedCert();
	if ( !(this->issuerCert) )  
		goto label_cond_4a;
	cVar1 = this->issuerCert->getPublicKey();
label_goto_21:
	this->prevPubKey = cVar1;
label_cond_23:
	this->crlSignFlag = 0x1;
	if ( !(this->params) )  
		goto label_cond_51;
	if ( !(this->params->certPath()) )  
		goto label_cond_51;
	this->certIndex = ( this->params->certPath()->getCertificates()->size() + -0x1);
label_goto_44:
	this->softFailExceptions->clear();
	return;
	// 5153    .line 307
label_cond_4a:
	cVar1 = this->anchor->getCAPublicKey();
	goto label_goto_21;
	// 5163    .line 313
label_cond_51:
	this->certIndex = -0x1;
	goto label_goto_44;

}
// .method public isForwardCheckingSupported()Z
bool sun::security::provider::certpath::RevocationChecker::isForwardCheckingSupported()
{
	
	return 0x0;

}


