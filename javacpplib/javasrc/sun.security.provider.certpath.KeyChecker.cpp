// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\KeyChecker.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.security.cert.CertPath.h"
#include "java.security.cert.CertPathValidatorException.h"
#include "java.security.cert.CertSelector.h"
#include "java.security.cert.Certificate.h"
#include "java.security.cert.PKIXReason.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.HashSet.h"
#include "java.util.Set.h"
#include "sun.security.provider.certpath.KeyChecker.h"
#include "sun.security.util.Debug.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.PKIXExtensions.h"

static sun::security::provider::certpath::KeyChecker::KEY_CERT_SIGN = 0x5;
static sun::security::provider::certpath::KeyChecker::debug;
// .method static constructor <clinit>()V
void sun::security::provider::certpath::KeyChecker::static_cinit()
{
	
	sun::security::provider::certpath::KeyChecker::debug = sun::security::util::Debug::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("certpath")));
	return;

}
// .method constructor <init>(ILjava/security/cert/CertSelector;)V
sun::security::provider::certpath::KeyChecker::KeyChecker(int certPathLen,std::shared_ptr<java::security::cert::CertSelector> targetCertSel)
{
	
	//    .param p1, "certPathLen"    # I
	//    .param p2, "targetCertSel"    # Ljava/security/cert/CertSelector;
	// 056    invoke-direct {p0}, Ljava/security/cert/PKIXCertPathChecker;-><init>()V
	this->certPathLen = certPathLen;
	this->targetConstraints = targetCertSel;
	return;

}
// .method static verifyCAKeyUsage(Ljava/security/cert/X509Certificate;)V
void sun::security::provider::certpath::KeyChecker::verifyCAKeyUsage(std::shared_ptr<java::security::cert::X509Certificate> cert)
{
	
	std::shared_ptr<java::lang::Throwable> cVar0;
	std::shared_ptr<java::lang::String> msg;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	auto keyUsageBits;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	
	//    .param p0, "cert"    # Ljava/security/cert/X509Certificate;
	//    .annotation system Ldalvik/annotation/Throws;
	// 072        value = {
	// 073            Ljava/security/cert/CertPathValidatorException;
	// 074        }
	// 075    .end annotation
	cVar0 = 0x0;
	msg = std::make_shared<java::lang::String>(std::make_shared<char[]>("CA key usage"));
	//    .local v7, "msg":Ljava/lang/String;
	if ( !(sun::security::provider::certpath::KeyChecker::debug) )  
		goto label_cond_28;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::KeyChecker::debug->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("KeyChecker.verifyCAKeyUsage() ---checking ")))->append(msg)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("...")))->toString());
label_cond_28:
	keyUsageBits = cert->getKeyUsage();
	//    .local v6, "keyUsageBits":[Z
	if ( keyUsageBits )     
		goto label_cond_2f;
	return;
	// 133    .line 158
label_cond_2f:
	if ( keyUsageBits[0x5] )     
		goto label_cond_52;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::security::cert::CertPathValidatorException>(cVar3->append(msg)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" check failed: keyCertSign bit is not set")))->toString(), cVar0, cVar0, -0x1, java::security::cert::PKIXReason::INVALID_KEY_USAGE);
	// throw
	throw cVar2;
	// 175    .line 164
label_cond_52:
	if ( !(sun::security::provider::certpath::KeyChecker::debug) )  
		goto label_cond_76;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::KeyChecker::debug->println(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("KeyChecker.verifyCAKeyUsage() ")))->append(msg)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" verified.")))->toString());
label_cond_76:
	return;

}
// .method public check(Ljava/security/cert/Certificate;Ljava/util/Collection;)V
void sun::security::provider::certpath::KeyChecker::check(std::shared_ptr<java::security::cert::Certificate> cert,std::shared_ptr<java::util::Collection<java::lang::String>> unresCritExts)
{
	
	std::shared_ptr<java::security::cert::X509Certificate> currCert;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar0;
	
	//    .param p1, "cert"    # Ljava/security/cert/Certificate;
	//    .annotation system Ldalvik/annotation/Signature;
	// 223        value = {
	// 224            "(",
	// 225            "Ljava/security/cert/Certificate;",
	// 226            "Ljava/util/Collection",
	// 227            "<",
	// 228            "Ljava/lang/String;",
	// 229            ">;)V"
	// 230        }
	// 231    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 234        value = {
	// 235            Ljava/security/cert/CertPathValidatorException;
	// 236        }
	// 237    .end annotation
	//    .local p2, "unresCritExts":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/lang/String;>;"
	currCert = cert;
	currCert->checkCast("java::security::cert::X509Certificate");
	//    .local v0, "currCert":Ljava/security/cert/X509Certificate;
	this->remainingCerts = ( this->remainingCerts + -0x1);
	if ( this->remainingCerts )     
		goto label_cond_22;
	if ( !(this->targetConstraints) )  
		goto label_cond_25;
	if ( this->targetConstraints->match(currCert) )     
		goto label_cond_25;
	cVar0 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("target certificate constraints check failed")));
	// throw
	throw cVar0;
	// 282    .line 122
label_cond_22:
	sun::security::provider::certpath::KeyChecker::verifyCAKeyUsage(currCert);
label_cond_25:
	if ( !(unresCritExts) )  
		goto label_cond_4a;
	if ( !(( unresCritExts->isEmpty() ^ 0x1)) )  
		goto label_cond_4a;
	unresCritExts->remove(sun::security::x509::PKIXExtensions::KeyUsage_Id->toString());
	unresCritExts->remove(sun::security::x509::PKIXExtensions::ExtendedKeyUsage_Id->toString());
	unresCritExts->remove(sun::security::x509::PKIXExtensions::SubjectAlternativeName_Id->toString());
label_cond_4a:
	return;

}
// .method public getSupportedExtensions()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> sun::security::provider::certpath::KeyChecker::getSupportedExtensions()
{
	
	std::shared_ptr<java::util::HashSet> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 333        value = {
	// 334            "()",
	// 335            "Ljava/util/Set",
	// 336            "<",
	// 337            "Ljava/lang/String;",
	// 338            ">;"
	// 339        }
	// 340    .end annotation
	if ( this->supportedExts )     
		goto label_cond_35;
	cVar0 = std::make_shared<java::util::HashSet>(0x3);
	this->supportedExts = cVar0;
	this->supportedExts->add(sun::security::x509::PKIXExtensions::KeyUsage_Id->toString());
	this->supportedExts->add(sun::security::x509::PKIXExtensions::ExtendedKeyUsage_Id->toString());
	this->supportedExts->add(sun::security::x509::PKIXExtensions::SubjectAlternativeName_Id->toString());
	this->supportedExts = java::util::Collections::unmodifiableSet(this->supportedExts);
label_cond_35:
	return this->supportedExts;

}
// .method public init(Z)V
void sun::security::provider::certpath::KeyChecker::init(bool forward)
{
	
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar0;
	
	//    .param p1, "forward"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 410        value = {
	// 411            Ljava/security/cert/CertPathValidatorException;
	// 412        }
	// 413    .end annotation
	if ( forward )     
		goto label_cond_7;
	this->remainingCerts = this->certPathLen;
	return;
	// 427    .line 75
label_cond_7:
	cVar0 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("forward checking not supported")));
	// throw
	throw cVar0;

}
// .method public isForwardCheckingSupported()Z
bool sun::security::provider::certpath::KeyChecker::isForwardCheckingSupported()
{
	
	return 0x0;

}


