// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\AlgorithmChecker.smali
#include "java2ctype.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.math.BigInteger.h"
#include "java.security.AlgorithmConstraints.h"
#include "java.security.AlgorithmParameters.h"
#include "java.security.CryptoPrimitive.h"
#include "java.security.GeneralSecurityException.h"
#include "java.security.KeyFactory.h"
#include "java.security.PublicKey.h"
#include "java.security.cert.CRLException.h"
#include "java.security.cert.CertPath.h"
#include "java.security.cert.CertPathValidatorException_S_BasicReason.h"
#include "java.security.cert.CertPathValidatorException.h"
#include "java.security.cert.Certificate.h"
#include "java.security.cert.CertificateException.h"
#include "java.security.cert.PKIXReason.h"
#include "java.security.cert.TrustAnchor.h"
#include "java.security.cert.X509CRL.h"
#include "java.security.cert.X509Certificate.h"
#include "java.security.interfaces.DSAParams.h"
#include "java.security.interfaces.DSAPublicKey.h"
#include "java.security.spec.DSAPublicKeySpec.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.EnumSet.h"
#include "java.util.Set.h"
#include "sun.security.provider.certpath.AlgorithmChecker.h"
#include "sun.security.provider.certpath.PKIX.h"
#include "sun.security.util.AnchorCertificates.h"
#include "sun.security.util.CertConstraintParameters.h"
#include "sun.security.util.Debug.h"
#include "sun.security.util.DisabledAlgorithmConstraints.h"
#include "sun.security.util.KeyUtil.h"
#include "sun.security.x509.AlgorithmId.h"
#include "sun.security.x509.X509CRLImpl.h"
#include "sun.security.x509.X509CertImpl.h"

static sun::security::provider::certpath::AlgorithmChecker::KU_PRIMITIVE_SET;
static sun::security::provider::certpath::AlgorithmChecker::SIGNATURE_PRIMITIVE_SET;
static sun::security::provider::certpath::AlgorithmChecker::certPathDefaultConstraints;
static sun::security::provider::certpath::AlgorithmChecker::debug;
static sun::security::provider::certpath::AlgorithmChecker::publicCALimits;
// .method static constructor <clinit>()V
void sun::security::provider::certpath::AlgorithmChecker::static_cinit()
{
	
	std::shared_ptr<sun::security::util::DisabledAlgorithmConstraints> cVar0;
	
	sun::security::provider::certpath::AlgorithmChecker::debug = sun::security::util::Debug::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("certpath")));
	sun::security::provider::certpath::AlgorithmChecker::SIGNATURE_PRIMITIVE_SET = java::util::Collections::unmodifiableSet(java::util::EnumSet::of(java::security::CryptoPrimitive::SIGNATURE));
	sun::security::provider::certpath::AlgorithmChecker::KU_PRIMITIVE_SET = java::util::Collections::unmodifiableSet(java::util::EnumSet::of(java::security::CryptoPrimitive::SIGNATURE, java::security::CryptoPrimitive::KEY_ENCAPSULATION, java::security::CryptoPrimitive::PUBLIC_KEY_ENCRYPTION, java::security::CryptoPrimitive::KEY_AGREEMENT));
	cVar0 = std::make_shared<sun::security::util::DisabledAlgorithmConstraints>(std::make_shared<java::lang::String>(std::make_shared<char[]>("jdk.certpath.disabledAlgorithms")));
	sun::security::provider::certpath::AlgorithmChecker::certPathDefaultConstraints = cVar0;
	sun::security::provider::certpath::AlgorithmChecker::publicCALimits = sun::security::provider::certpath::AlgorithmChecker::certPathDefaultConstraints->checkProperty(std::make_shared<java::lang::String>(std::make_shared<char[]>("jdkCA")));
	return;

}
// .method public constructor <init>(Ljava/security/AlgorithmConstraints;)V
sun::security::provider::certpath::AlgorithmChecker::AlgorithmChecker(std::shared_ptr<java::security::AlgorithmConstraints> constraints)
{
	
	std::shared_ptr<java::security::PublicKey> cVar0;
	
	//    .param p1, "constraints"    # Ljava/security/AlgorithmConstraints;
	cVar0 = 0x0;
	// 133    invoke-direct {p0}, Ljava/security/cert/PKIXCertPathChecker;-><init>()V
	this->trustedMatch = 0x0;
	this->prevPubKey = cVar0;
	this->trustedPubKey = cVar0;
	this->constraints = constraints;
	return;

}
// .method public constructor <init>(Ljava/security/cert/TrustAnchor;)V
sun::security::provider::certpath::AlgorithmChecker::AlgorithmChecker(std::shared_ptr<java::security::cert::TrustAnchor> anchor)
{
	
	//    .param p1, "anchor"    # Ljava/security/cert/TrustAnchor;
	sun::security::provider::certpath::AlgorithmChecker::(anchor, sun::security::provider::certpath::AlgorithmChecker::certPathDefaultConstraints);
	return;

}
// .method public constructor <init>(Ljava/security/cert/TrustAnchor;Ljava/security/AlgorithmConstraints;)V
sun::security::provider::certpath::AlgorithmChecker::AlgorithmChecker(std::shared_ptr<java::security::cert::TrustAnchor> anchor,std::shared_ptr<java::security::AlgorithmConstraints> constraints)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "anchor"    # Ljava/security/cert/TrustAnchor;
	//    .param p2, "constraints"    # Ljava/security/AlgorithmConstraints;
	// 174    invoke-direct {p0}, Ljava/security/cert/PKIXCertPathChecker;-><init>()V
	this->trustedMatch = 0x0;
	if ( anchor )     
		goto label_cond_11;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("The trust anchor cannot be null")));
	// throw
	throw cVar0;
	// 195    .line 147
label_cond_11:
	if ( !(anchor->getTrustedCert()) )  
		goto label_cond_42;
	this->trustedPubKey = anchor->getTrustedCert()->getPublicKey();
	this->trustedMatch = sun::security::provider::certpath::AlgorithmChecker::checkFingerprint(anchor->getTrustedCert());
	if ( !(this->trustedMatch) )  
		goto label_cond_3b;
	if ( !(sun::security::provider::certpath::AlgorithmChecker::debug) )  
		goto label_cond_3b;
	sun::security::provider::certpath::AlgorithmChecker::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("trustedMatch = true")));
label_cond_3b:
label_goto_3b:
	this->prevPubKey = this->trustedPubKey;
	this->constraints = constraints;
	return;
	// 254    .line 155
label_cond_42:
	this->trustedPubKey = anchor->getCAPublicKey();
	goto label_goto_3b;

}
// .method static check(Ljava/security/PublicKey;Ljava/security/cert/X509CRL;)V
void sun::security::provider::certpath::AlgorithmChecker::check(std::shared_ptr<java::security::PublicKey> key,std::shared_ptr<java::security::cert::X509CRL> crl)
{
	
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "key"    # Ljava/security/PublicKey;
	//    .param p1, "crl"    # Ljava/security/cert/X509CRL;
	//    .annotation system Ldalvik/annotation/Throws;
	// 270        value = {
	// 271            Ljava/security/cert/CertPathValidatorException;
	// 272        }
	// 273    .end annotation
	0x0;
	//    .local v2, "x509CRLImpl":Lsun/security/x509/X509CRLImpl;
	try {
	//label_try_start_1:
	//label_try_end_4:
	}
	catch (java::security::cert::CRLException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_d;
	}
	//    .catch Ljava/security/cert/CRLException; {:try_start_1 .. :try_end_4} :catch_d
	//    .local v2, "x509CRLImpl":Lsun/security/x509/X509CRLImpl;
	//    .local v0, "algorithmId":Lsun/security/x509/AlgorithmId;
	sun::security::provider::certpath::AlgorithmChecker::check(key, sun::security::x509::X509CRLImpl::toImpl(crl)->getSigAlgId());
	return;
	// 301    .line 397
	// 302    .end local v0    # "algorithmId":Lsun/security/x509/AlgorithmId;
	// 303    .local v2, "x509CRLImpl":Lsun/security/x509/X509CRLImpl;
label_catch_d:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "ce":Ljava/security/cert/CRLException;
	cVar0 = std::make_shared<java::security::cert::CertPathValidatorException>(getCatchExcetionFromList);
	// throw
	throw cVar0;

}
// .method static check(Ljava/security/PublicKey;Lsun/security/x509/AlgorithmId;)V
void sun::security::provider::certpath::AlgorithmChecker::check(std::shared_ptr<java::security::PublicKey> key,std::shared_ptr<sun::security::x509::AlgorithmId> algorithmId)
{
	
	std::shared_ptr<java::lang::Throwable> cVar0;
	std::shared_ptr<java::lang::String> sigAlgName;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p0, "key"    # Ljava/security/PublicKey;
	//    .param p1, "algorithmId"    # Lsun/security/x509/AlgorithmId;
	//    .annotation system Ldalvik/annotation/Throws;
	// 321        value = {
	// 322            Ljava/security/cert/CertPathValidatorException;
	// 323        }
	// 324    .end annotation
	cVar0 = 0x0;
	sigAlgName = algorithmId->getName();
	//    .local v6, "sigAlgName":Ljava/lang/String;
	//    .local v7, "sigAlgParams":Ljava/security/AlgorithmParameters;
	if ( sun::security::provider::certpath::AlgorithmChecker::certPathDefaultConstraints->permits(sun::security::provider::certpath::AlgorithmChecker::SIGNATURE_PRIMITIVE_SET, sigAlgName, key, algorithmId->getParameters()) )     
		goto label_cond_38;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::security::cert::CertPathValidatorException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Algorithm constraints check failed on signature algorithm: ")))->append(sigAlgName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" is disabled")))->toString(), cVar0, cVar0, -0x1, java::security::cert::CertPathValidatorException_S_BasicReason::ALGORITHM_CONSTRAINED);
	// throw
	throw cVar1;
	// 396    .line 423
label_cond_38:
	return;

}
// .method private static checkFingerprint(Ljava/security/cert/X509Certificate;)Z
bool sun::security::provider::certpath::AlgorithmChecker::checkFingerprint(std::shared_ptr<java::security::cert::X509Certificate> cert)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p0, "cert"    # Ljava/security/cert/X509Certificate;
	if ( sun::security::provider::certpath::AlgorithmChecker::publicCALimits )     
		goto label_cond_6;
	return 0x0;
	// 416    .line 169
label_cond_6:
	if ( !(sun::security::provider::certpath::AlgorithmChecker::debug) )  
		goto label_cond_27;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::AlgorithmChecker::debug->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("AlgorithmChecker.contains: ")))->append(cert->getSigAlgName())->toString());
label_cond_27:
	return sun::security::util::AnchorCertificates::contains(cert);

}
// .method public check(Ljava/security/cert/Certificate;Ljava/util/Collection;)V
void sun::security::provider::certpath::AlgorithmChecker::check(std::shared_ptr<java::security::cert::Certificate> cert,std::shared_ptr<java::util::Collection<java::lang::String>> unresolvedCritExts)
{
	
	std::shared_ptr<java::security::cert::X509Certificate> cVar0;
	auto keyUsage;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar1;
	std::shared_ptr<java::util::Set> primitives;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar2;
	std::shared_ptr<java::security::PublicKey> currPubKey;
	std::shared_ptr<java::security::AlgorithmConstraints> cVar3;
	std::shared_ptr<sun::security::util::CertConstraintParameters> cVar4;
	std::shared_ptr<java::security::cert::X509Certificate> cVar5;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar8;
	std::shared_ptr<sun::security::x509::X509CertImpl> x509Cert;
	std::shared_ptr<sun::security::x509::AlgorithmId> algorithmId;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::security::AlgorithmParameters> currSigAlgParams;
	std::shared_ptr<java::lang::String> currSigAlg;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar9;
	std::shared_ptr<java::lang::StringBuilder> cVar10;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar11;
	std::shared_ptr<java::lang::StringBuilder> cVar12;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar13;
	std::shared_ptr<java::security::PublicKey> cVar14;
	std::shared_ptr<java::security::interfaces::DSAParams> params;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar15;
	std::shared_ptr<java::security::GeneralSecurityException> e;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar16;
	std::shared_ptr<java::lang::StringBuilder> cVar17;
	std::shared_ptr<java::security::spec::DSAPublicKeySpec> ks;
	
	//    .param p1, "cert"    # Ljava/security/cert/Certificate;
	//    .annotation system Ldalvik/annotation/Signature;
	// 464        value = {
	// 465            "(",
	// 466            "Ljava/security/cert/Certificate;",
	// 467            "Ljava/util/Collection",
	// 468            "<",
	// 469            "Ljava/lang/String;",
	// 470            ">;)V"
	// 471        }
	// 472    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 475        value = {
	// 476            Ljava/security/cert/CertPathValidatorException;
	// 477        }
	// 478    .end annotation
	//    .local p2, "unresolvedCritExts":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/lang/String;>;"
	if ( !(cert->instanceOf("java::security::cert::X509Certificate")) )  
		goto label_cond_c;
	if ( this->constraints )     
		goto label_cond_d;
label_cond_c:
	return;
label_cond_d:
	cVar0 = cert;
	cVar0->checkCast("java::security::cert::X509Certificate");
	keyUsage = cVar0->getKeyUsage();
	//    .local v13, "keyUsage":[Z
	if ( !(keyUsage) )  
		goto label_cond_2a;
	if ( keyUsage->size() >= 0x9 )
		goto label_cond_2a;
	cVar1 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("incorrect KeyUsage extension")), 0x0, 0x0, -0x1, java::security::cert::PKIXReason::INVALID_KEY_USAGE);
	// throw
	throw cVar1;
	// 539    .line 221
label_cond_2a:
	sun::security::provider::certpath::AlgorithmChecker::KU_PRIMITIVE_SET;
	//    .local v17, "primitives":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/CryptoPrimitive;>;"
	if ( !(keyUsage) )  
		goto label_cond_87;
	primitives = java::util::EnumSet::noneOf(java::security::CryptoPrimitive());
	if ( keyUsage[0x0] )     
		goto label_cond_48;
	if ( keyUsage[0x1] )     
		goto label_cond_48;
	if ( keyUsage[0x5] )     
		goto label_cond_48;
	if ( !(keyUsage[0x6]) )  
		goto label_cond_4f;
label_cond_48:
	primitives->add(java::security::CryptoPrimitive::SIGNATURE);
label_cond_4f:
	if ( !(keyUsage[0x2]) )  
		goto label_cond_5b;
	primitives->add(java::security::CryptoPrimitive::KEY_ENCAPSULATION);
label_cond_5b:
	if ( !(keyUsage[0x3]) )  
		goto label_cond_67;
	primitives->add(java::security::CryptoPrimitive::PUBLIC_KEY_ENCRYPTION);
label_cond_67:
	if ( !(keyUsage[0x4]) )  
		goto label_cond_73;
	primitives->add(java::security::CryptoPrimitive::KEY_AGREEMENT);
label_cond_73:
	if ( !(primitives->isEmpty()) )  
		goto label_cond_87;
	cVar2 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("incorrect KeyUsage extension bits")), 0x0, 0x0, -0x1, java::security::cert::PKIXReason::INVALID_KEY_USAGE);
	// throw
	throw cVar2;
	// 660    .line 256
label_cond_87:
	currPubKey = cert->getPublicKey();
	//    .local v9, "currPubKey":Ljava/security/PublicKey;
	if ( !(this->constraints->instanceOf("sun::security::util::DisabledAlgorithmConstraints")) )  
		goto label_cond_b6;
	cVar3 = this->constraints;
	cVar3->checkCast("sun::security::util::DisabledAlgorithmConstraints");
	cVar5 = cert;
	cVar5->checkCast("java::security::cert::X509Certificate");
	cVar4 = std::make_shared<sun::security::util::CertConstraintParameters>(cVar5, this->trustedMatch);
	cVar3->permits(primitives, cVar4);
	if ( this->prevPubKey )     
		goto label_cond_b6;
	this->prevPubKey = currPubKey;
	return;
	// 718    .line 274
label_cond_b6:
	try {
	//label_try_start_b6:
	cert->checkCast("java::security::cert::X509Certificate");
	//    .end local p1    # "cert":Ljava/security/cert/Certificate;
	x509Cert = sun::security::x509::X509CertImpl::toImpl(cert);
	//    .local v18, "x509Cert":Lsun/security/x509/X509CertImpl;
	algorithmId = x509Cert->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("x509.algorithm")));
	algorithmId->checkCast("sun::security::x509::AlgorithmId");
	//label_try_end_c7:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_102;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_b6 .. :try_end_c7} :catch_102
	//    .local v7, "algorithmId":Lsun/security/x509/AlgorithmId;
	currSigAlgParams = algorithmId->getParameters();
	//    .local v11, "currSigAlgParams":Ljava/security/AlgorithmParameters;
	currSigAlg = x509Cert->getSigAlgName();
	//    .local v10, "currSigAlg":Ljava/lang/String;
	if ( this->constraints->instanceOf("sun::security::util::DisabledAlgorithmConstraints") )     
		goto label_cond_138;
	if ( this->constraints->permits(sun::security::provider::certpath::AlgorithmChecker::SIGNATURE_PRIMITIVE_SET, currSigAlg, currSigAlgParams) )     
		goto label_cond_109;
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	cVar6 = std::make_shared<java::security::cert::CertPathValidatorException>(cVar7->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Algorithm constraints check failed on signature algorithm: ")))->append(currSigAlg)->toString(), 0x0, 0x0, -0x1, java::security::cert::CertPathValidatorException_S_BasicReason::ALGORITHM_CONSTRAINED);
	// throw
	throw cVar6;
	// 816    .line 276
	// 817    .end local v7    # "algorithmId":Lsun/security/x509/AlgorithmId;
	// 818    .end local v10    # "currSigAlg":Ljava/lang/String;
	// 819    .end local v11    # "currSigAlgParams":Ljava/security/AlgorithmParameters;
	// 820    .end local v18    # "x509Cert":Lsun/security/x509/X509CertImpl;
label_catch_102:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v8, "ce":Ljava/security/cert/CertificateException;
	cVar8 = std::make_shared<java::security::cert::CertPathValidatorException>(getCatchExcetionFromList);
	// throw
	throw cVar8;
	// 832    .line 296
	// 833    .end local v8    # "ce":Ljava/security/cert/CertificateException;
	// 834    .restart local v7    # "algorithmId":Lsun/security/x509/AlgorithmId;
	// 835    .restart local v10    # "currSigAlg":Ljava/lang/String;
	// 836    .restart local v11    # "currSigAlgParams":Ljava/security/AlgorithmParameters;
	// 837    .restart local v18    # "x509Cert":Lsun/security/x509/X509CertImpl;
label_cond_109:
	if ( this->constraints->permits(primitives, currPubKey) )     
		goto label_cond_138;
	cVar10 = std::make_shared<java::lang::StringBuilder>();
	cVar9 = std::make_shared<java::security::cert::CertPathValidatorException>(cVar10->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Algorithm constraints check failed on keysize: ")))->append(sun::security::util::KeyUtil::getKeySize(currPubKey))->toString(), 0x0, 0x0, -0x1, java::security::cert::CertPathValidatorException_S_BasicReason::ALGORITHM_CONSTRAINED);
	// throw
	throw cVar9;
	// 893    .line 305
label_cond_138:
	if ( !(this->prevPubKey) )  
		goto label_cond_1bd;
	if ( this->constraints->permits(sun::security::provider::certpath::AlgorithmChecker::SIGNATURE_PRIMITIVE_SET, currSigAlg, this->prevPubKey, currSigAlgParams) )     
		goto label_cond_16d;
	cVar12 = std::make_shared<java::lang::StringBuilder>();
	cVar11 = std::make_shared<java::security::cert::CertPathValidatorException>(cVar12->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Algorithm constraints check failed on signature algorithm: ")))->append(currSigAlg)->toString(), 0x0, 0x0, -0x1, java::security::cert::CertPathValidatorException_S_BasicReason::ALGORITHM_CONSTRAINED);
	// throw
	throw cVar11;
	// 957    .line 316
label_cond_16d:
	if ( !(sun::security::provider::certpath::PKIX::isDSAPublicKeyWithoutParams(currPubKey)) )  
		goto label_cond_1bd;
	if ( this->prevPubKey->instanceOf("java::security::interfaces::DSAPublicKey") )     
		goto label_cond_184;
	cVar13 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Input key is not of a appropriate type for inheriting parameters")));
	// throw
	throw cVar13;
	// 983    .line 323
label_cond_184:
	cVar14 = this->prevPubKey;
	cVar14->checkCast("java::security::interfaces::DSAPublicKey");
	params = cVar14->getParams();
	//    .local v16, "params":Ljava/security/interfaces/DSAParams;
	if ( params )     
		goto label_cond_199;
	cVar15 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Key parameters missing from public key.")));
	// throw
	throw cVar15;
	// 1010    .line 330
label_cond_199:
	try {
	//label_try_start_199:
	currPubKey->checkCast("java::security::interfaces::DSAPublicKey");
	//    .end local v9    # "currPubKey":Ljava/security/PublicKey;
	//    .local v19, "y":Ljava/math/BigInteger;
	//    .local v14, "kf":Ljava/security/KeyFactory;
	ks = std::make_shared<java::security::spec::DSAPublicKeySpec>(currPubKey->getY(), params->getP(), params->getQ(), params->getG());
	//    .local v15, "ks":Ljava/security/spec/DSAPublicKeySpec;
	//label_try_end_1bc:
	}
	catch (java::security::GeneralSecurityException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1c2;
	}
	//    .catch Ljava/security/GeneralSecurityException; {:try_start_199 .. :try_end_1bc} :catch_1c2
	//    .end local v14    # "kf":Ljava/security/KeyFactory;
	//    .end local v15    # "ks":Ljava/security/spec/DSAPublicKeySpec;
	//    .end local v16    # "params":Ljava/security/interfaces/DSAParams;
	//    .end local v19    # "y":Ljava/math/BigInteger;
	//    .restart local v9    # "currPubKey":Ljava/security/PublicKey;
label_cond_1bd:
	this->prevPubKey = currPubKey;
	return;
	// 1074    .line 337
	// 1075    .end local v9    # "currPubKey":Ljava/security/PublicKey;
	// 1076    .restart local v16    # "params":Ljava/security/interfaces/DSAParams;
label_catch_1c2:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v12, "e":Ljava/security/GeneralSecurityException;
	cVar17 = std::make_shared<java::lang::StringBuilder>();
	cVar16 = std::make_shared<java::security::cert::CertPathValidatorException>(cVar17->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unable to generate key with inherited parameters: ")))->append(e->getMessage())->toString(), e);
	// throw
	throw cVar16;

}
// .method public getSupportedExtensions()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> sun::security::provider::certpath::AlgorithmChecker::getSupportedExtensions()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1116        value = {
	// 1117            "()",
	// 1118            "Ljava/util/Set",
	// 1119            "<",
	// 1120            "Ljava/lang/String;",
	// 1121            ">;"
	// 1122        }
	// 1123    .end annotation
	return 0x0;

}
// .method public init(Z)V
void sun::security::provider::certpath::AlgorithmChecker::init(bool forward)
{
	
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar0;
	
	//    .param p1, "forward"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 1136        value = {
	// 1137            Ljava/security/cert/CertPathValidatorException;
	// 1138        }
	// 1139    .end annotation
	if ( forward )     
		goto label_cond_f;
	if ( !(this->trustedPubKey) )  
		goto label_cond_c;
	this->prevPubKey = this->trustedPubKey;
label_goto_b:
	return;
	// 1161    .line 182
label_cond_c:
	this->prevPubKey = 0x0;
	goto label_goto_b;
	// 1167    .line 185
label_cond_f:
	cVar0 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("forward checking not supported")));
	// throw
	throw cVar0;

}
// .method public isForwardCheckingSupported()Z
bool sun::security::provider::certpath::AlgorithmChecker::isForwardCheckingSupported()
{
	
	return 0x0;

}
// .method trySetTrustAnchor(Ljava/security/cert/TrustAnchor;)V
void sun::security::provider::certpath::AlgorithmChecker::trySetTrustAnchor(std::shared_ptr<java::security::cert::TrustAnchor> anchor)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "anchor"    # Ljava/security/cert/TrustAnchor;
	if ( this->prevPubKey )     
		goto label_cond_39;
	if ( anchor )     
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("The trust anchor cannot be null")));
	// throw
	throw cVar0;
	// 1214    .line 372
label_cond_f:
	if ( !(anchor->getTrustedCert()) )  
		goto label_cond_3a;
	this->prevPubKey = anchor->getTrustedCert()->getPublicKey();
	this->trustedMatch = sun::security::provider::certpath::AlgorithmChecker::checkFingerprint(anchor->getTrustedCert());
	if ( !(this->trustedMatch) )  
		goto label_cond_39;
	if ( !(sun::security::provider::certpath::AlgorithmChecker::debug) )  
		goto label_cond_39;
	sun::security::provider::certpath::AlgorithmChecker::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("trustedMatch = true")));
label_cond_39:
label_goto_39:
	return;
	// 1265    .line 380
label_cond_3a:
	this->prevPubKey = anchor->getCAPublicKey();
	goto label_goto_39;

}


