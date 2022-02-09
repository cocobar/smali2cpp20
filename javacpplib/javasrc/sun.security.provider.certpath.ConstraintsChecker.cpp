// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\ConstraintsChecker.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.security.cert.CertPath.h"
#include "java.security.cert.CertPathValidatorException.h"
#include "java.security.cert.Certificate.h"
#include "java.security.cert.CertificateException.h"
#include "java.security.cert.PKIXReason.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.HashSet.h"
#include "java.util.Set.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.security.provider.certpath.ConstraintsChecker.h"
#include "sun.security.util.Debug.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.NameConstraintsExtension.h"
#include "sun.security.x509.PKIXExtensions.h"
#include "sun.security.x509.X509CertImpl.h"

static sun::security::provider::certpath::ConstraintsChecker::debug;
// .method static constructor <clinit>()V
void sun::security::provider::certpath::ConstraintsChecker::static_cinit()
{
	
	sun::security::provider::certpath::ConstraintsChecker::debug = sun::security::util::Debug::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("certpath")));
	return;

}
// .method constructor <init>(I)V
sun::security::provider::certpath::ConstraintsChecker::ConstraintsChecker(int certPathLength)
{
	
	//    .param p1, "certPathLength"    # I
	// 055    invoke-direct {p0}, Ljava/security/cert/PKIXCertPathChecker;-><init>()V
	this->certPathLength = certPathLength;
	return;

}
// .method private checkBasicConstraints(Ljava/security/cert/X509Certificate;)V
void sun::security::provider::certpath::ConstraintsChecker::checkBasicConstraints(std::shared_ptr<java::security::cert::X509Certificate> currCert)
{
	
	int cVar0;
	std::shared_ptr<java::lang::Throwable> cVar1;
	std::shared_ptr<java::lang::String> msg;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	int pathLenConstraint;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	std::shared_ptr<java::lang::StringBuilder> cVar8;
	std::shared_ptr<java::lang::StringBuilder> cVar9;
	
	//    .param p1, "currCert"    # Ljava/security/cert/X509Certificate;
	//    .annotation system Ldalvik/annotation/Throws;
	// 068        value = {
	// 069            Ljava/security/cert/CertPathValidatorException;
	// 070        }
	// 071    .end annotation
	cVar0 = -0x1;
	cVar1 = 0x0;
	msg = std::make_shared<java::lang::String>(std::make_shared<char[]>("basic constraints"));
	//    .local v6, "msg":Ljava/lang/String;
	if ( !(sun::security::provider::certpath::ConstraintsChecker::debug) )  
		goto label_cond_51;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::ConstraintsChecker::debug->println(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("---checking ")))->append(msg)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("...")))->toString());
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::ConstraintsChecker::debug->println(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("i = ")))->append(this->i)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", maxPathLength = ")))->append(this->maxPathLength)->toString());
label_cond_51:
	if ( this->i >= this->certPathLength )
		goto label_cond_d2;
	pathLenConstraint = -0x1;
	//    .local v7, "pathLenConstraint":I
	if ( currCert->getVersion() >= 0x3 )
		goto label_cond_8c;
	if ( this->i != 0x1 )
		goto label_cond_6d;
	if ( !(sun::security::x509::X509CertImpl::isSelfIssued(currCert)) )  
		goto label_cond_6d;
	pathLenConstraint = 0x7fffffff;
label_cond_6d:
label_goto_6d:
	if ( pathLenConstraint != cVar0 )
		goto label_cond_91;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = std::make_shared<java::security::cert::CertPathValidatorException>(cVar5->append(msg)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" check failed: this is not a CA certificate")))->toString(), cVar1, cVar1, cVar0, java::security::cert::PKIXReason::NOT_CA_CERT);
	// throw
	throw cVar4;
	// 232    .line 255
label_cond_8c:
	pathLenConstraint = currCert->getBasicConstraints();
	goto label_goto_6d;
	// 240    .line 264
label_cond_91:
	if ( sun::security::x509::X509CertImpl::isSelfIssued(currCert) )     
		goto label_cond_cc;
	if ( this->maxPathLength > 0 ) 
		goto label_cond_c6;
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	cVar6 = std::make_shared<java::security::cert::CertPathValidatorException>(cVar7->append(msg)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" check failed: pathLenConstraint violated - ")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("this cert must be the last cert in the ")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("certification path")))->toString(), cVar1, cVar1, cVar0, java::security::cert::PKIXReason::PATH_TOO_LONG);
	// throw
	throw cVar6;
	// 301    .line 272
label_cond_c6:
	this->maxPathLength = ( this->maxPathLength + -0x1);
label_cond_cc:
	if ( pathLenConstraint >= this->maxPathLength )
		goto label_cond_d2;
	this->maxPathLength = pathLenConstraint;
	//    .end local v7    # "pathLenConstraint":I
label_cond_d2:
	if ( !(sun::security::provider::certpath::ConstraintsChecker::debug) )  
		goto label_cond_10a;
	cVar8 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::ConstraintsChecker::debug->println(cVar8->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("after processing, maxPathLength = ")))->append(this->maxPathLength)->toString());
	cVar9 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::ConstraintsChecker::debug->println(cVar9->append(msg)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" verified.")))->toString());
label_cond_10a:
	return;

}
// .method static mergeBasicConstraints(Ljava/security/cert/X509Certificate;I)I
int sun::security::provider::certpath::ConstraintsChecker::mergeBasicConstraints(std::shared_ptr<java::security::cert::X509Certificate> cert,int cVar1)
{
	
	int pathLenConstraint;
	int cVar1;
	
	//    .param p0, "cert"    # Ljava/security/cert/X509Certificate;
	//    .param p1, "maxPathLength"    # I
	pathLenConstraint = cert->getBasicConstraints();
	//    .local v0, "pathLenConstraint":I
	if ( sun::security::x509::X509CertImpl::isSelfIssued(cert) )     
		goto label_cond_c;
	cVar1 = ( cVar1 + -0x1);
label_cond_c:
	if ( pathLenConstraint >= cVar1 )
		goto label_cond_f;
	cVar1 = pathLenConstraint;
label_cond_f:
	return cVar1;

}
// .method static mergeNameConstraints(Ljava/security/cert/X509Certificate;Lsun/security/x509/NameConstraintsExtension;)Lsun/security/x509/NameConstraintsExtension;
std::shared_ptr<sun::security::x509::NameConstraintsExtension> sun::security::provider::certpath::ConstraintsChecker::mergeNameConstraints(std::shared_ptr<java::security::cert::X509Certificate> currCert,std::shared_ptr<sun::security::x509::NameConstraintsExtension> prevNC)
{
	
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar2;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::Object> newConstraints;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<sun::security::x509::NameConstraintsExtension> cVar3;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	
	//    .param p0, "currCert"    # Ljava/security/cert/X509Certificate;
	//    .param p1, "prevNC"    # Lsun/security/x509/NameConstraintsExtension;
	//    .annotation system Ldalvik/annotation/Throws;
	// 417        value = {
	// 418            Ljava/security/cert/CertPathValidatorException;
	// 419        }
	// 420    .end annotation
	try {
	//label_try_start_0:
	//label_try_end_3:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5a;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_0 .. :try_end_3} :catch_5a
	//    .local v1, "currCertImpl":Lsun/security/x509/X509CertImpl;
	newConstraints = sun::security::x509::X509CertImpl::toImpl(currCert)->getNameConstraintsExtension();
	//    .local v3, "newConstraints":Lsun/security/x509/NameConstraintsExtension;
	if ( !(sun::security::provider::certpath::ConstraintsChecker::debug) )  
		goto label_cond_34;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::ConstraintsChecker::debug->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("prevNC = ")))->append(prevNC)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", newNC = ")))->append(java::lang::String::valueOf(newConstraints))->toString());
label_cond_34:
	if ( prevNC )     
		goto label_cond_68;
	if ( !(sun::security::provider::certpath::ConstraintsChecker::debug) )  
		goto label_cond_57;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::ConstraintsChecker::debug->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("mergedNC = ")))->append(java::lang::String::valueOf(newConstraints))->toString());
label_cond_57:
	if ( newConstraints )     
		goto label_cond_61;
	return newConstraints;
	// 527    .line 179
	// 528    .end local v1    # "currCertImpl":Lsun/security/x509/X509CertImpl;
	// 529    .end local v3    # "newConstraints":Lsun/security/x509/NameConstraintsExtension;
label_catch_5a:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "ce":Ljava/security/cert/CertificateException;
	cVar2 = std::make_shared<java::security::cert::CertPathValidatorException>(getCatchExcetionFromList);
	// throw
	throw cVar2;
	// 541    .line 203
	// 542    .end local v0    # "ce":Ljava/security/cert/CertificateException;
	// 543    .restart local v1    # "currCertImpl":Lsun/security/x509/X509CertImpl;
	// 544    .restart local v3    # "newConstraints":Lsun/security/x509/NameConstraintsExtension;
label_cond_61:
	cVar3 = newConstraints->clone();
	cVar3->checkCast("sun::security::x509::NameConstraintsExtension");
	return cVar3;
	// 554    .line 208
label_cond_68:
	try {
	//label_try_start_68:
	prevNC->merge(newConstraints);
	//label_try_end_6b:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_89;
	}
	//    .catch Ljava/io/IOException; {:try_start_68 .. :try_end_6b} :catch_89
	if ( !(sun::security::provider::certpath::ConstraintsChecker::debug) )  
		goto label_cond_88;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::ConstraintsChecker::debug->println(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("mergedNC = ")))->append(prevNC)->toString());
label_cond_88:
	return prevNC;
	// 593    .line 209
label_catch_89:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v2, "ioe":Ljava/io/IOException;
	cVar5 = std::make_shared<java::security::cert::CertPathValidatorException>(getCatchExcetionFromList);
	// throw
	throw cVar5;

}
// .method private verifyNameConstraints(Ljava/security/cert/X509Certificate;)V
void sun::security::provider::certpath::ConstraintsChecker::verifyNameConstraints(std::shared_ptr<java::security::cert::X509Certificate> currCert)
{
	
	std::shared_ptr<java::lang::String> msg;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar4;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	
	//    .param p1, "currCert"    # Ljava/security/cert/X509Certificate;
	//    .annotation system Ldalvik/annotation/Throws;
	// 610        value = {
	// 611            Ljava/security/cert/CertPathValidatorException;
	// 612        }
	// 613    .end annotation
	msg = std::make_shared<java::lang::String>(std::make_shared<char[]>("name constraints"));
	//    .local v7, "msg":Ljava/lang/String;
	if ( !(sun::security::provider::certpath::ConstraintsChecker::debug) )  
		goto label_cond_27;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::ConstraintsChecker::debug->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("---checking ")))->append(msg)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("...")))->toString());
label_cond_27:
	if ( !(this->prevNC) )  
		goto label_cond_95;
	if ( this->i == this->certPathLength )
		goto label_cond_39;
	if ( !(( sun::security::x509::X509CertImpl::isSelfIssued(currCert) ^ 0x1)) )  
		goto label_cond_95;
label_cond_39:
	if ( !(sun::security::provider::certpath::ConstraintsChecker::debug) )  
		goto label_cond_67;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::ConstraintsChecker::debug->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("prevNC = ")))->append(this->prevNC)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", currDN = ")))->append(currCert->getSubjectX500Principal())->toString());
label_cond_67:
	try {
	//label_try_start_67:
	if ( this->prevNC->verify(currCert) )     
		goto label_cond_95;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::security::cert::CertPathValidatorException>(cVar3->append(msg)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" check failed")))->toString(), 0x0, 0x0, -0x1, java::security::cert::PKIXReason::INVALID_NAME);
	// throw
	throw cVar2;
	// 770    :try_end_8e
	// 771    .catch Ljava/io/IOException; {:try_start_67 .. :try_end_8e} :catch_8e
	// 773    .line 157
label_catch_8e:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v6, "ioe":Ljava/io/IOException;
	cVar4 = std::make_shared<java::security::cert::CertPathValidatorException>(getCatchExcetionFromList);
	// throw
	throw cVar4;
	// 785    .line 163
	// 786    .end local v6    # "ioe":Ljava/io/IOException;
label_cond_95:
	this->prevNC = sun::security::provider::certpath::ConstraintsChecker::mergeNameConstraints(currCert, this->prevNC);
	if ( !(sun::security::provider::certpath::ConstraintsChecker::debug) )  
		goto label_cond_ba;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::ConstraintsChecker::debug->println(cVar5->append(msg)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" verified.")))->toString());
label_cond_ba:
	return;

}
// .method public check(Ljava/security/cert/Certificate;Ljava/util/Collection;)V
void sun::security::provider::certpath::ConstraintsChecker::check(std::shared_ptr<java::security::cert::Certificate> cert,std::shared_ptr<java::util::Collection<java::lang::String>> unresCritExts)
{
	
	std::shared_ptr<java::security::cert::X509Certificate> currCert;
	
	//    .param p1, "cert"    # Ljava/security/cert/Certificate;
	//    .annotation system Ldalvik/annotation/Signature;
	// 835        value = {
	// 836            "(",
	// 837            "Ljava/security/cert/Certificate;",
	// 838            "Ljava/util/Collection",
	// 839            "<",
	// 840            "Ljava/lang/String;",
	// 841            ">;)V"
	// 842        }
	// 843    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 846        value = {
	// 847            Ljava/security/cert/CertPathValidatorException;
	// 848        }
	// 849    .end annotation
	//    .local p2, "unresCritExts":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/lang/String;>;"
	currCert = cert;
	currCert->checkCast("java::security::cert::X509Certificate");
	//    .local v0, "currCert":Ljava/security/cert/X509Certificate;
	this->i = ( this->i + 0x1);
	this->checkBasicConstraints(currCert);
	this->verifyNameConstraints(currCert);
	if ( !(unresCritExts) )  
		goto label_cond_2b;
	if ( !(( unresCritExts->isEmpty() ^ 0x1)) )  
		goto label_cond_2b;
	unresCritExts->remove(sun::security::x509::PKIXExtensions::BasicConstraints_Id->toString());
	unresCritExts->remove(sun::security::x509::PKIXExtensions::NameConstraints_Id->toString());
label_cond_2b:
	return;

}
// .method public getSupportedExtensions()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> sun::security::provider::certpath::ConstraintsChecker::getSupportedExtensions()
{
	
	std::shared_ptr<java::util::HashSet> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 909        value = {
	// 910            "()",
	// 911            "Ljava/util/Set",
	// 912            "<",
	// 913            "Ljava/lang/String;",
	// 914            ">;"
	// 915        }
	// 916    .end annotation
	if ( this->supportedExts )     
		goto label_cond_2a;
	cVar0 = std::make_shared<java::util::HashSet>(0x2);
	this->supportedExts = cVar0;
	this->supportedExts->add(sun::security::x509::PKIXExtensions::BasicConstraints_Id->toString());
	this->supportedExts->add(sun::security::x509::PKIXExtensions::NameConstraints_Id->toString());
	this->supportedExts = java::util::Collections::unmodifiableSet(this->supportedExts);
label_cond_2a:
	return this->supportedExts;

}
// .method public init(Z)V
void sun::security::provider::certpath::ConstraintsChecker::init(bool forward)
{
	
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar0;
	
	//    .param p1, "forward"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 975        value = {
	// 976            Ljava/security/cert/CertPathValidatorException;
	// 977        }
	// 978    .end annotation
	if ( forward )     
		goto label_cond_d;
	this->i = 0x0;
	this->maxPathLength = this->certPathLength;
	this->prevNC = 0x0;
	return;
	// 1002    .line 82
label_cond_d:
	cVar0 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("forward checking not supported")));
	// throw
	throw cVar0;

}
// .method public isForwardCheckingSupported()Z
bool sun::security::provider::certpath::ConstraintsChecker::isForwardCheckingSupported()
{
	
	return 0x0;

}


