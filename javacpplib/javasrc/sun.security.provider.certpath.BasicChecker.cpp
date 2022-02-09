// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\BasicChecker.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.math.BigInteger.h"
#include "java.security.GeneralSecurityException.h"
#include "java.security.KeyFactory.h"
#include "java.security.PublicKey.h"
#include "java.security.SignatureException.h"
#include "java.security.cert.CertPath.h"
#include "java.security.cert.CertPathValidatorException_S_BasicReason.h"
#include "java.security.cert.CertPathValidatorException.h"
#include "java.security.cert.Certificate.h"
#include "java.security.cert.CertificateExpiredException.h"
#include "java.security.cert.CertificateNotYetValidException.h"
#include "java.security.cert.PKIXReason.h"
#include "java.security.cert.TrustAnchor.h"
#include "java.security.cert.X509Certificate.h"
#include "java.security.interfaces.DSAParams.h"
#include "java.security.interfaces.DSAPublicKey.h"
#include "java.security.spec.DSAPublicKeySpec.h"
#include "java.util.Collection.h"
#include "java.util.Date.h"
#include "java.util.Set.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.security.provider.certpath.BasicChecker.h"
#include "sun.security.provider.certpath.PKIX.h"
#include "sun.security.util.Debug.h"
#include "sun.security.x509.X500Name.h"

static sun::security::provider::certpath::BasicChecker::debug;
// .method static constructor <clinit>()V
void sun::security::provider::certpath::BasicChecker::static_cinit()
{
	
	sun::security::provider::certpath::BasicChecker::debug = sun::security::util::Debug::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("certpath")));
	return;

}
// .method constructor <init>(Ljava/security/cert/TrustAnchor;Ljava/util/Date;Ljava/lang/String;Z)V
sun::security::provider::certpath::BasicChecker::BasicChecker(std::shared_ptr<java::security::cert::TrustAnchor> anchor,std::shared_ptr<java::util::Date> date,std::shared_ptr<java::lang::String> sigProvider,bool sigOnly)
{
	
	//    .param p1, "anchor"    # Ljava/security/cert/TrustAnchor;
	//    .param p2, "date"    # Ljava/util/Date;
	//    .param p3, "sigProvider"    # Ljava/lang/String;
	//    .param p4, "sigOnly"    # Z
	// 053    invoke-direct {p0}, Ljava/security/cert/PKIXCertPathChecker;-><init>()V
	if ( !(anchor->getTrustedCert()) )  
		goto label_cond_28;
	this->trustedPubKey = anchor->getTrustedCert()->getPublicKey();
	this->caName = anchor->getTrustedCert()->getSubjectX500Principal();
label_goto_1d:
	this->date = date;
	this->sigProvider = sigProvider;
	this->sigOnly = sigOnly;
	this->prevPubKey = this->trustedPubKey;
	return;
	// 102    .line 87
label_cond_28:
	this->trustedPubKey = anchor->getCAPublicKey();
	this->caName = anchor->getCA();
	goto label_goto_1d;

}
// .method static makeInheritedParamsKey(Ljava/security/PublicKey;Ljava/security/PublicKey;)Ljava/security/PublicKey;
std::shared_ptr<java::security::PublicKey> sun::security::provider::certpath::BasicChecker::makeInheritedParamsKey(std::shared_ptr<java::security::PublicKey> keyValueKey,std::shared_ptr<java::security::PublicKey> keyParamsKey)
{
	
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar0;
	std::shared_ptr<java::security::interfaces::DSAParams> params;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar1;
	std::shared_ptr<java::security::GeneralSecurityException> e;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::security::spec::DSAPublicKeySpec> ks;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "keyValueKey"    # Ljava/security/PublicKey;
	//    .param p1, "keyParamsKey"    # Ljava/security/PublicKey;
	//    .annotation system Ldalvik/annotation/Throws;
	// 125        value = {
	// 126            Ljava/security/cert/CertPathValidatorException;
	// 127        }
	// 128    .end annotation
	if ( !(keyValueKey->instanceOf("java::security::interfaces::DSAPublicKey")) )  
		goto label_cond_a;
	if ( !(( keyParamsKey->instanceOf("java::security::interfaces::DSAPublicKey") ^ 0x1)) )  
		goto label_cond_13;
label_cond_a:
	cVar0 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Input key is not appropriate type for inheriting parameters")));
	// throw
	throw cVar0;
	// 154    .line 280
label_cond_13:
	keyParamsKey->checkCast("java::security::interfaces::DSAPublicKey");
	//    .end local p1    # "keyParamsKey":Ljava/security/PublicKey;
	params = keyParamsKey->getParams();
	//    .local v3, "params":Ljava/security/interfaces/DSAParams;
	if ( params )     
		goto label_cond_24;
	cVar1 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Key parameters missing")));
	// throw
	throw cVar1;
	// 176    .line 284
label_cond_24:
	try {
	//label_try_start_24:
	keyValueKey->checkCast("java::security::interfaces::DSAPublicKey");
	//    .end local p0    # "keyValueKey":Ljava/security/PublicKey;
	//    .local v4, "y":Ljava/math/BigInteger;
	//    .local v1, "kf":Ljava/security/KeyFactory;
	ks = std::make_shared<java::security::spec::DSAPublicKeySpec>(keyValueKey->getY(), params->getP(), params->getQ(), params->getG());
	//    .local v2, "ks":Ljava/security/spec/DSAPublicKeySpec;
	//label_try_end_45:
	}
	catch (java::security::GeneralSecurityException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_47;
	}
	//    .catch Ljava/security/GeneralSecurityException; {:try_start_24 .. :try_end_45} :catch_47
	return java::security::KeyFactory::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("DSA")))->generatePublic(ks);
	// 226    .line 291
	// 227    .end local v1    # "kf":Ljava/security/KeyFactory;
	// 228    .end local v2    # "ks":Ljava/security/spec/DSAPublicKeySpec;
	// 229    .end local v4    # "y":Ljava/math/BigInteger;
label_catch_47:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/security/GeneralSecurityException;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::security::cert::CertPathValidatorException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unable to generate key with inherited parameters: ")))->append(e->getMessage())->toString(), e);
	// throw
	throw cVar2;

}
// .method private updateState(Ljava/security/cert/X509Certificate;)V
void sun::security::provider::certpath::BasicChecker::updateState(std::shared_ptr<java::security::cert::X509Certificate> currCert)
{
	
	std::shared_ptr<java::security::PublicKey> cKey;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p1, "currCert"    # Ljava/security/cert/X509Certificate;
	//    .annotation system Ldalvik/annotation/Throws;
	// 270        value = {
	// 271            Ljava/security/cert/CertPathValidatorException;
	// 272        }
	// 273    .end annotation
	cKey = currCert->getPublicKey();
	//    .local v0, "cKey":Ljava/security/PublicKey;
	if ( !(sun::security::provider::certpath::BasicChecker::debug) )  
		goto label_cond_4b;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::BasicChecker::debug->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("BasicChecker.updateState issuer: ")))->append(currCert->getIssuerX500Principal()->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("; subject: ")))->append(currCert->getSubjectX500Principal())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("; serial#: ")))->append(currCert->getSerialNumber()->toString())->toString());
label_cond_4b:
	if ( !(sun::security::provider::certpath::PKIX::isDSAPublicKeyWithoutParams(cKey)) )  
		goto label_cond_63;
	if ( !(sun::security::provider::certpath::BasicChecker::debug) )  
		goto label_cond_63;
	sun::security::provider::certpath::BasicChecker::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("BasicChecker.updateState Made key with inherited params")));
label_cond_63:
	this->prevPubKey = cKey;
	this->prevSubject = currCert->getSubjectX500Principal();
	return;

}
// .method private verifyNameChaining(Ljava/security/cert/X509Certificate;)V
void sun::security::provider::certpath::BasicChecker::verifyNameChaining(std::shared_ptr<java::security::cert::X509Certificate> cert)
{
	
	int cVar0;
	std::shared_ptr<java::lang::Throwable> cVar1;
	std::shared_ptr<java::lang::String> msg;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<javax::security::auth::x500::X500Principal> currIssuer;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	
	//    .param p1, "cert"    # Ljava/security/cert/X509Certificate;
	//    .annotation system Ldalvik/annotation/Throws;
	// 405        value = {
	// 406            Ljava/security/cert/CertPathValidatorException;
	// 407        }
	// 408    .end annotation
	cVar0 = -0x1;
	cVar1 = 0x0;
	if ( !(this->prevSubject) )  
		goto label_cond_a1;
	msg = std::make_shared<java::lang::String>(std::make_shared<char[]>("subject/issuer name chaining"));
	//    .local v7, "msg":Ljava/lang/String;
	if ( !(sun::security::provider::certpath::BasicChecker::debug) )  
		goto label_cond_2d;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::BasicChecker::debug->println(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("---checking ")))->append(msg)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("...")))->toString());
label_cond_2d:
	currIssuer = cert->getIssuerX500Principal();
	//    .local v6, "currIssuer":Ljavax/security/auth/x500/X500Principal;
	if ( !(sun::security::x509::X500Name::asX500Name(currIssuer)->isEmpty()) )  
		goto label_cond_5f;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::security::cert::CertPathValidatorException>(cVar4->append(msg)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" check failed: ")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("empty/null issuer DN in certificate is invalid")))->toString(), cVar1, cVar1, cVar0, java::security::cert::PKIXReason::NAME_CHAINING);
	// throw
	throw cVar3;
	// 516    .line 229
label_cond_5f:
	if ( currIssuer->equals(this->prevSubject) )     
		goto label_cond_84;
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	cVar5 = std::make_shared<java::security::cert::CertPathValidatorException>(cVar6->append(msg)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" check failed")))->toString(), cVar1, cVar1, cVar0, java::security::cert::PKIXReason::NAME_CHAINING);
	// throw
	throw cVar5;
	// 558    .line 235
label_cond_84:
	if ( !(sun::security::provider::certpath::BasicChecker::debug) )  
		goto label_cond_a1;
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::BasicChecker::debug->println(cVar7->append(msg)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" verified.")))->toString());
	//    .end local v6    # "currIssuer":Ljavax/security/auth/x500/X500Principal;
	//    .end local v7    # "msg":Ljava/lang/String;
label_cond_a1:
	return;

}
// .method private verifySignature(Ljava/security/cert/X509Certificate;)V
void sun::security::provider::certpath::BasicChecker::verifySignature(std::shared_ptr<java::security::cert::X509Certificate> cert)
{
	
	std::shared_ptr<java::lang::String> msg;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "cert"    # Ljava/security/cert/X509Certificate;
	//    .annotation system Ldalvik/annotation/Throws;
	// 598        value = {
	// 599            Ljava/security/cert/CertPathValidatorException;
	// 600        }
	// 601    .end annotation
	msg = std::make_shared<java::lang::String>(std::make_shared<char[]>("signature"));
	//    .local v7, "msg":Ljava/lang/String;
	if ( !(sun::security::provider::certpath::BasicChecker::debug) )  
		goto label_cond_28;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::BasicChecker::debug->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("---checking ")))->append(msg)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("...")))->toString());
label_cond_28:
	try {
	//label_try_start_28:
	if ( !(this->sigProvider) )  
		goto label_cond_51;
	cert->verify(this->prevPubKey, this->sigProvider);
	//label_try_end_33:
	}
	catch (java::security::SignatureException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_57;
	}
	catch (java::security::GeneralSecurityException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_75;
	}
	//    .catch Ljava/security/SignatureException; {:try_start_28 .. :try_end_33} :catch_57
	//    .catch Ljava/security/GeneralSecurityException; {:try_start_28 .. :try_end_33} :catch_75
label_goto_33:
	if ( !(sun::security::provider::certpath::BasicChecker::debug) )  
		goto label_cond_50;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::BasicChecker::debug->println(cVar1->append(msg)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" verified.")))->toString());
label_cond_50:
	return;
	// 694    .line 169
label_cond_51:
	try {
	//label_try_start_51:
	cert->verify(this->prevPubKey);
	//label_try_end_56:
	}
	catch (java::security::SignatureException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_57;
	}
	catch (java::security::GeneralSecurityException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_75;
	}
	//    .catch Ljava/security/SignatureException; {:try_start_51 .. :try_end_56} :catch_57
	//    .catch Ljava/security/GeneralSecurityException; {:try_start_51 .. :try_end_56} :catch_75
	goto label_goto_33;
	// 706    .line 171
label_catch_57:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/security/SignatureException;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::security::cert::CertPathValidatorException>(cVar3->append(msg)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" check failed")))->toString(), getCatchExcetionFromList, 0x0, -0x1, java::security::cert::CertPathValidatorException_S_BasicReason::INVALID_SIGNATURE);
	// throw
	throw cVar2;
	// 744    .line 175
	// 745    .end local v2    # "e":Ljava/security/SignatureException;
label_catch_75:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v6, "e":Ljava/security/GeneralSecurityException;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = std::make_shared<java::security::cert::CertPathValidatorException>(cVar5->append(msg)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" check failed")))->toString(), getCatchExcetionFromList);
	// throw
	throw cVar4;

}
// .method private verifyTimestamp(Ljava/security/cert/X509Certificate;)V
void sun::security::provider::certpath::BasicChecker::verifyTimestamp(std::shared_ptr<java::security::cert::X509Certificate> cert)
{
	
	int cVar0;
	std::shared_ptr<java::security::cert::CertPath> cVar1;
	std::shared_ptr<java::lang::String> msg;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	//    .param p1, "cert"    # Ljava/security/cert/X509Certificate;
	//    .annotation system Ldalvik/annotation/Throws;
	// 780        value = {
	// 781            Ljava/security/cert/CertPathValidatorException;
	// 782        }
	// 783    .end annotation
	cVar0 = -0x1;
	cVar1 = 0x0;
	msg = std::make_shared<java::lang::String>(std::make_shared<char[]>("timestamp"));
	//    .local v11, "msg":Ljava/lang/String;
	if ( !(sun::security::provider::certpath::BasicChecker::debug) )  
		goto label_cond_3a;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::BasicChecker::debug->println(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("---checking ")))->append(msg)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(":")))->append(this->date->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("...")))->toString());
label_cond_3a:
	try {
	//label_try_start_3a:
	cert->checkValidity(this->date);
	//label_try_end_3f:
	}
	catch (java::security::cert::CertificateExpiredException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_7a;
	}
	catch (java::security::cert::CertificateNotYetValidException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5d;
	}
	//    .catch Ljava/security/cert/CertificateExpiredException; {:try_start_3a .. :try_end_3f} :catch_7a
	//    .catch Ljava/security/cert/CertificateNotYetValidException; {:try_start_3a .. :try_end_3f} :catch_5d
	if ( !(sun::security::provider::certpath::BasicChecker::debug) )  
		goto label_cond_5c;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::BasicChecker::debug->println(cVar3->append(msg)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" verified.")))->toString());
label_cond_5c:
	return;
	// 886    .line 198
label_catch_5d:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/security/cert/CertificateNotYetValidException;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = std::make_shared<java::security::cert::CertPathValidatorException>(cVar5->append(msg)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" check failed")))->toString(), getCatchExcetionFromList, cVar1, cVar0, java::security::cert::CertPathValidatorException_S_BasicReason::NOT_YET_VALID);
	// throw
	throw cVar4;
	// 920    .line 195
	// 921    .end local v2    # "e":Ljava/security/cert/CertificateNotYetValidException;
label_catch_7a:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v7, "e":Ljava/security/cert/CertificateExpiredException;
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	cVar6 = std::make_shared<java::security::cert::CertPathValidatorException>(cVar7->append(msg)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" check failed")))->toString(), getCatchExcetionFromList, cVar1, cVar0, java::security::cert::CertPathValidatorException_S_BasicReason::EXPIRED);
	// throw
	throw cVar6;

}
// .method public check(Ljava/security/cert/Certificate;Ljava/util/Collection;)V
void sun::security::provider::certpath::BasicChecker::check(std::shared_ptr<java::security::cert::Certificate> cert,std::shared_ptr<java::util::Collection<java::lang::String>> unresolvedCritExts)
{
	
	std::shared_ptr<java::security::cert::X509Certificate> currCert;
	
	//    .param p1, "cert"    # Ljava/security/cert/Certificate;
	//    .annotation system Ldalvik/annotation/Signature;
	// 966        value = {
	// 967            "(",
	// 968            "Ljava/security/cert/Certificate;",
	// 969            "Ljava/util/Collection",
	// 970            "<",
	// 971            "Ljava/lang/String;",
	// 972            ">;)V"
	// 973        }
	// 974    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 977        value = {
	// 978            Ljava/security/cert/CertPathValidatorException;
	// 979        }
	// 980    .end annotation
	//    .local p2, "unresolvedCritExts":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/lang/String;>;"
	currCert = cert;
	currCert->checkCast("java::security::cert::X509Certificate");
	//    .local v0, "currCert":Ljava/security/cert/X509Certificate;
	if ( this->sigOnly )     
		goto label_cond_d;
	this->verifyTimestamp(currCert);
	this->verifyNameChaining(currCert);
label_cond_d:
	this->verifySignature(currCert);
	this->updateState(currCert);
	return;

}
// .method getPublicKey()Ljava/security/PublicKey;
std::shared_ptr<java::security::PublicKey> sun::security::provider::certpath::BasicChecker::getPublicKey()
{
	
	return this->prevPubKey;

}
// .method public getSupportedExtensions()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> sun::security::provider::certpath::BasicChecker::getSupportedExtensions()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1025        value = {
	// 1026            "()",
	// 1027            "Ljava/util/Set",
	// 1028            "<",
	// 1029            "Ljava/lang/String;",
	// 1030            ">;"
	// 1031        }
	// 1032    .end annotation
	return 0x0;

}
// .method public init(Z)V
void sun::security::provider::certpath::BasicChecker::init(bool forward)
{
	
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar0;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar1;
	
	//    .param p1, "forward"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 1045        value = {
	// 1046            Ljava/security/cert/CertPathValidatorException;
	// 1047        }
	// 1048    .end annotation
	if ( forward )     
		goto label_cond_1c;
	this->prevPubKey = this->trustedPubKey;
	if ( !(sun::security::provider::certpath::PKIX::isDSAPublicKeyWithoutParams(this->prevPubKey)) )  
		goto label_cond_17;
	cVar0 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Key parameters missing")));
	// throw
	throw cVar0;
	// 1077    .line 110
label_cond_17:
	this->prevSubject = this->caName;
	return;
	// 1086    .line 112
label_cond_1c:
	cVar1 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("forward checking not supported")));
	// throw
	throw cVar1;

}
// .method public isForwardCheckingSupported()Z
bool sun::security::provider::certpath::BasicChecker::isForwardCheckingSupported()
{
	
	return 0x0;

}


