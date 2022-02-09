// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\PKIXCertPathValidator.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.security.PublicKey.h"
#include "java.security.cert.CertPath.h"
#include "java.security.cert.CertPathChecker.h"
#include "java.security.cert.CertPathParameters.h"
#include "java.security.cert.CertPathValidatorException.h"
#include "java.security.cert.CertPathValidatorResult.h"
#include "java.security.cert.CertSelector.h"
#include "java.security.cert.Certificate.h"
#include "java.security.cert.CertificateException.h"
#include "java.security.cert.PKIXCertPathChecker.h"
#include "java.security.cert.PKIXCertPathValidatorResult.h"
#include "java.security.cert.PKIXReason.h"
#include "java.security.cert.PKIXRevocationChecker.h"
#include "java.security.cert.PolicyNode.h"
#include "java.security.cert.TrustAnchor.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.ArrayList.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.Date.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "java.util.Set.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.security.provider.certpath.AdaptableX509CertSelector.h"
#include "sun.security.provider.certpath.AlgorithmChecker.h"
#include "sun.security.provider.certpath.BasicChecker.h"
#include "sun.security.provider.certpath.ConstraintsChecker.h"
#include "sun.security.provider.certpath.KeyChecker.h"
#include "sun.security.provider.certpath.PKIX_S_ValidatorParams.h"
#include "sun.security.provider.certpath.PKIX.h"
#include "sun.security.provider.certpath.PKIXCertPathValidator.h"
#include "sun.security.provider.certpath.PKIXMasterCertPathValidator.h"
#include "sun.security.provider.certpath.PolicyChecker.h"
#include "sun.security.provider.certpath.PolicyNodeImpl.h"
#include "sun.security.provider.certpath.RevocationChecker.h"
#include "sun.security.util.Debug.h"
#include "sun.security.x509.AuthorityKeyIdentifierExtension.h"
#include "sun.security.x509.X509CertImpl.h"

static sun::security::provider::certpath::PKIXCertPathValidator::debug;
// .method static constructor <clinit>()V
void sun::security::provider::certpath::PKIXCertPathValidator::static_cinit()
{
	
	sun::security::provider::certpath::PKIXCertPathValidator::debug = sun::security::util::Debug::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("certpath")));
	return;

}
// .method public constructor <init>()V
sun::security::provider::certpath::PKIXCertPathValidator::PKIXCertPathValidator()
{
	
	// 033    invoke-direct {p0}, Ljava/security/cert/CertPathValidatorSpi;-><init>()V
	return;

}
// .method private static validate(Ljava/security/cert/TrustAnchor;Lsun/security/provider/certpath/PKIX$ValidatorParams;)Ljava/security/cert/PKIXCertPathValidatorResult;
std::shared_ptr<java::security::cert::PKIXCertPathValidatorResult> sun::security::provider::certpath::PKIXCertPathValidator::validate(std::shared_ptr<java::security::cert::TrustAnchor> anchor,std::shared_ptr<sun::security::provider::certpath::PKIX_S_ValidatorParams> params)
{
	
	int certPathLen;
	std::shared_ptr<java::util::ArrayList> certPathCheckers;
	std::shared_ptr<sun::security::provider::certpath::AlgorithmChecker> cVar0;
	std::shared_ptr<sun::security::provider::certpath::KeyChecker> cVar1;
	std::shared_ptr<sun::security::provider::certpath::ConstraintsChecker> cVar2;
	std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> rootNode;
	std::shared_ptr<sun::security::provider::certpath::PolicyChecker> pc;
	std::shared_ptr<sun::security::provider::certpath::BasicChecker> bc;
	int revCheckerAdded;
	std::shared_ptr<java::lang::Iterable> checkers;
	std::shared_ptr<java::util::Iterator> checker_S_iterator;
	std::shared_ptr<java::security::cert::PKIXCertPathChecker> checker;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar3;
	std::shared_ptr<sun::security::provider::certpath::RevocationChecker> cVar4;
	std::shared_ptr<java::security::cert::PKIXCertPathValidatorResult> cVar5;
	
	//    .param p0, "anchor"    # Ljava/security/cert/TrustAnchor;
	//    .param p1, "params"    # Lsun/security/provider/certpath/PKIX$ValidatorParams;
	//    .annotation system Ldalvik/annotation/Throws;
	// 043        value = {
	// 044            Ljava/security/cert/CertPathValidatorException;
	// 045        }
	// 046    .end annotation
	certPathLen = params->certificates()->size();
	//    .local v13, "certPathLen":I
	certPathCheckers = std::make_shared<java::util::ArrayList>();
	//    .local v12, "certPathCheckers":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/PKIXCertPathChecker;>;"
	cVar0 = std::make_shared<sun::security::provider::certpath::AlgorithmChecker>(anchor);
	certPathCheckers->add(cVar0);
	cVar1 = std::make_shared<sun::security::provider::certpath::KeyChecker>(certPathLen, params->targetCertConstraints());
	certPathCheckers->add(cVar1);
	cVar2 = std::make_shared<sun::security::provider::certpath::ConstraintsChecker>(certPathLen);
	certPathCheckers->add(cVar2);
	rootNode = std::make_shared<sun::security::provider::certpath::PolicyNodeImpl>(0x0, std::make_shared<java::lang::String>(std::make_shared<char[]>("2.5.29.32.0")), 0x0, 0x0, java::util::Collections::singleton(std::make_shared<java::lang::String>(std::make_shared<char[]>("2.5.29.32.0"))), 0x0);
	//    .local v2, "rootNode":Lsun/security/provider/certpath/PolicyNodeImpl;
	pc = std::make_shared<sun::security::provider::certpath::PolicyChecker>(params->initialPolicies(), certPathLen, params->explicitPolicyRequired(), params->policyMappingInhibited(), params->anyPolicyInhibited(), params->policyQualifiersRejected(), rootNode);
	//    .local v3, "pc":Lsun/security/provider/certpath/PolicyChecker;
	certPathCheckers->add(pc);
	bc = std::make_shared<sun::security::provider::certpath::BasicChecker>(anchor, params->date(), params->sigProvider(), 0x0);
	//    .local v11, "bc":Lsun/security/provider/certpath/BasicChecker;
	certPathCheckers->add(bc);
	revCheckerAdded = 0x0;
	//    .local v17, "revCheckerAdded":Z
	checkers = params->certPathCheckers();
	//    .local v16, "checkers":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/PKIXCertPathChecker;>;"
	checker_S_iterator = checkers->iterator();
	//    .local v15, "checker$iterator":Ljava/util/Iterator;
label_cond_79:
label_goto_79:
	if ( !(checker_S_iterator->hasNext()) )  
		goto label_cond_a4;
	checker = checker_S_iterator->next();
	checker->checkCast("java::security::cert::PKIXCertPathChecker");
	//    .local v14, "checker":Ljava/security/cert/PKIXCertPathChecker;
	if ( !(checker->instanceOf("java::security::cert::PKIXRevocationChecker")) )  
		goto label_cond_79;
	if ( !(revCheckerAdded) )  
		goto label_cond_94;
	cVar3 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Only one PKIXRevocationChecker can be specified")));
	// throw
	throw cVar3;
	// 231    .line 207
label_cond_94:
	revCheckerAdded = 0x1;
	if ( !(checker->instanceOf("sun::security::provider::certpath::RevocationChecker")) )  
		goto label_cond_79;
	checker->checkCast("sun::security::provider::certpath::RevocationChecker");
	//    .end local v14    # "checker":Ljava/security/cert/PKIXCertPathChecker;
	checker->init(anchor, params);
	goto label_goto_79;
	// 252    .line 216
label_cond_a4:
	if ( !(params->revocationEnabled()) )  
		goto label_cond_ba;
	if ( !(( revCheckerAdded ^ 0x1)) )  
		goto label_cond_ba;
	cVar4 = std::make_shared<sun::security::provider::certpath::RevocationChecker>(anchor, params);
	certPathCheckers->add(cVar4);
label_cond_ba:
	certPathCheckers->addAll(checkers);
	sun::security::provider::certpath::PKIXMasterCertPathValidator::validate(params->certPath(), params->certificates(), certPathCheckers);
	cVar5 = std::make_shared<java::security::cert::PKIXCertPathValidatorResult>(anchor, pc->getPolicyTree(), bc->getPublicKey());
	return cVar5;

}
// .method private static validate(Lsun/security/provider/certpath/PKIX$ValidatorParams;)Ljava/security/cert/PKIXCertPathValidatorResult;
std::shared_ptr<java::security::cert::PKIXCertPathValidatorResult> sun::security::provider::certpath::PKIXCertPathValidator::validate(std::shared_ptr<sun::security::provider::certpath::PKIX_S_ValidatorParams> params)
{
	
	std::shared_ptr<java::util::List> certList;
	std::shared_ptr<sun::security::provider::certpath::AdaptableX509CertSelector> selector;
	std::shared_ptr<java::security::cert::X509Certificate> firstCert;
	int lastException;
	std::shared_ptr<java::util::Iterator> anchor_S_iterator;
	std::shared_ptr<java::security::cert::TrustAnchor> anchor;
	std::shared_ptr<java::security::cert::Certificate> trustedCert;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar1;
	
	//    .param p0, "params"    # Lsun/security/provider/certpath/PKIX$ValidatorParams;
	//    .annotation system Ldalvik/annotation/Throws;
	// 318        value = {
	// 319            Ljava/security/cert/CertPathValidatorException;
	// 320        }
	// 321    .end annotation
	if ( !(sun::security::provider::certpath::PKIXCertPathValidator::debug) )  
		goto label_cond_c;
	sun::security::provider::certpath::PKIXCertPathValidator::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKIXCertPathValidator.engineValidate()...")));
label_cond_c:
	0x0;
	//    .local v15, "selector":Lsun/security/provider/certpath/AdaptableX509CertSelector;
	certList = params->certificates();
	//    .local v9, "certList":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/X509Certificate;>;"
	if ( certList->isEmpty() )     
		goto label_cond_35;
	//    .end local v15    # "selector":Lsun/security/provider/certpath/AdaptableX509CertSelector;
	selector = std::make_shared<sun::security::provider::certpath::AdaptableX509CertSelector>();
	//    .local v15, "selector":Lsun/security/provider/certpath/AdaptableX509CertSelector;
	firstCert = certList->get(0x0);
	firstCert->checkCast("java::security::cert::X509Certificate");
	//    .local v12, "firstCert":Ljava/security/cert/X509Certificate;
	selector->setSubject(firstCert->getIssuerX500Principal());
	try {
	//label_try_start_2a:
	//    .local v13, "firstCertImpl":Lsun/security/x509/X509CertImpl;
	selector->setSkiAndSerialNumber(sun::security::x509::X509CertImpl::toImpl(firstCert)->getAuthorityKeyIdentifierExtension());
	//label_try_end_35:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_b8;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_b8;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_2a .. :try_end_35} :catch_b8
	//    .catch Ljava/io/IOException; {:try_start_2a .. :try_end_35} :catch_b8
	//    .end local v12    # "firstCert":Ljava/security/cert/X509Certificate;
	//    .end local v13    # "firstCertImpl":Lsun/security/x509/X509CertImpl;
	//    .end local v15    # "selector":Lsun/security/provider/certpath/AdaptableX509CertSelector;
label_cond_35:
label_goto_35:
	lastException = 0x0;
	//    .local v14, "lastException":Ljava/security/cert/CertPathValidatorException;
	anchor_S_iterator = params->trustAnchors()->iterator();
	//    .end local v14    # "lastException":Ljava/security/cert/CertPathValidatorException;
	//    .local v8, "anchor$iterator":Ljava/util/Iterator;
label_cond_3e:
label_goto_3e:
	if ( !(anchor_S_iterator->hasNext()) )  
		goto label_cond_a7;
	anchor = anchor_S_iterator->next();
	anchor->checkCast("java::security::cert::TrustAnchor");
	//    .local v7, "anchor":Ljava/security/cert/TrustAnchor;
	trustedCert = anchor->getTrustedCert();
	//    .local v16, "trustedCert":Ljava/security/cert/X509Certificate;
	if ( !(trustedCert) )  
		goto label_cond_97;
	if ( !(selector) )  
		goto label_cond_67;
	if ( !(( selector->match(trustedCert) ^ 0x1)) )  
		goto label_cond_67;
	if ( !(sun::security::provider::certpath::PKIXCertPathValidator::debug) )  
		goto label_cond_3e;
	sun::security::provider::certpath::PKIXCertPathValidator::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("NO - don\'t try this trustedCert")));
	goto label_goto_3e;
	// 465    .line 126
label_cond_67:
	if ( !(sun::security::provider::certpath::PKIXCertPathValidator::debug) )  
		goto label_cond_90;
	sun::security::provider::certpath::PKIXCertPathValidator::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("YES - try this trustedCert")));
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::PKIXCertPathValidator::debug->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("anchor.getTrustedCert().getSubjectX500Principal() = ")))->append(trustedCert->getSubjectX500Principal())->toString());
label_cond_90:
label_goto_90:
	try {
	//label_try_start_90:
	//label_try_end_95:
	}
	catch (java::security::cert::CertPathValidatorException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_a4;
	}
	//    .catch Ljava/security/cert/CertPathValidatorException; {:try_start_90 .. :try_end_95} :catch_a4
	return sun::security::provider::certpath::PKIXCertPathValidator::validate(anchor, params);
	// 521    .line 133
label_cond_97:
	if ( !(sun::security::provider::certpath::PKIXCertPathValidator::debug) )  
		goto label_cond_90;
	sun::security::provider::certpath::PKIXCertPathValidator::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKIXCertPathValidator.engineValidate(): anchor.getTrustedCert() == null")));
	goto label_goto_90;
	// 536    .line 141
label_catch_a4:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v10, "cpe":Ljava/security/cert/CertPathValidatorException;
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v14, "lastException":Ljava/security/cert/CertPathValidatorException;
	goto label_goto_3e;
	// 547    .line 149
	// 548    .end local v7    # "anchor":Ljava/security/cert/TrustAnchor;
	// 549    .end local v10    # "cpe":Ljava/security/cert/CertPathValidatorException;
	// 550    .end local v14    # "lastException":Ljava/security/cert/CertPathValidatorException;
	// 551    .end local v16    # "trustedCert":Ljava/security/cert/X509Certificate;
label_cond_a7:
	if ( !(lastException) )  
		goto label_cond_aa;
	// throw
	throw lastException;
	// 558    .line 153
label_cond_aa:
	cVar1 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Path does not chain with any of the trust anchors")), 0x0, 0x0, -0x1, java::security::cert::PKIXReason::NO_TRUST_ANCHOR);
	// throw
	throw cVar1;
	// 579    .line 105
	// 580    .end local v8    # "anchor$iterator":Ljava/util/Iterator;
	// 581    .restart local v12    # "firstCert":Ljava/security/cert/X509Certificate;
	// 582    .restart local v15    # "selector":Lsun/security/provider/certpath/AdaptableX509CertSelector;
label_catch_b8:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v11, "e":Ljava/lang/Exception;
	goto label_goto_35;

}
// .method public engineGetRevocationChecker()Ljava/security/cert/CertPathChecker;
std::shared_ptr<java::security::cert::CertPathChecker> sun::security::provider::certpath::PKIXCertPathValidator::engineGetRevocationChecker()
{
	
	std::shared_ptr<sun::security::provider::certpath::RevocationChecker> cVar0;
	
	cVar0 = std::make_shared<sun::security::provider::certpath::RevocationChecker>();
	return cVar0;

}
// .method public engineValidate(Ljava/security/cert/CertPath;Ljava/security/cert/CertPathParameters;)Ljava/security/cert/CertPathValidatorResult;
std::shared_ptr<java::security::cert::CertPathValidatorResult> sun::security::provider::certpath::PKIXCertPathValidator::engineValidate(std::shared_ptr<java::security::cert::CertPath> cp,std::shared_ptr<java::security::cert::CertPathParameters> params)
{
	
	//    .param p1, "cp"    # Ljava/security/cert/CertPath;
	//    .param p2, "params"    # Ljava/security/cert/CertPathParameters;
	//    .annotation system Ldalvik/annotation/Throws;
	// 609        value = {
	// 610            Ljava/security/cert/CertPathValidatorException;,
	// 611            Ljava/security/InvalidAlgorithmParameterException;
	// 612        }
	// 613    .end annotation
	//    .local v0, "valParams":Lsun/security/provider/certpath/PKIX$ValidatorParams;
	return sun::security::provider::certpath::PKIXCertPathValidator::validate(sun::security::provider::certpath::PKIX::checkParams(cp, params));

}


