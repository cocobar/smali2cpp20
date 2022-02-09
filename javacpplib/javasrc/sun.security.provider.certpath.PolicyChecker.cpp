// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\PolicyChecker.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.Integer.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.security.cert.CertPath.h"
#include "java.security.cert.CertPathValidatorException.h"
#include "java.security.cert.Certificate.h"
#include "java.security.cert.CertificateException.h"
#include "java.security.cert.PKIXReason.h"
#include "java.security.cert.PolicyNode.h"
#include "java.security.cert.PolicyQualifierInfo.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.HashSet.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "java.util.Set.h"
#include "sun.security.provider.certpath.PolicyChecker.h"
#include "sun.security.provider.certpath.PolicyNodeImpl.h"
#include "sun.security.util.Debug.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.CertificatePoliciesExtension.h"
#include "sun.security.x509.CertificatePolicyId.h"
#include "sun.security.x509.CertificatePolicyMap.h"
#include "sun.security.x509.Extension.h"
#include "sun.security.x509.InhibitAnyPolicyExtension.h"
#include "sun.security.x509.PKIXExtensions.h"
#include "sun.security.x509.PolicyConstraintsExtension.h"
#include "sun.security.x509.PolicyInformation.h"
#include "sun.security.x509.PolicyMappingsExtension.h"
#include "sun.security.x509.X509CertImpl.h"

static sun::security::provider::certpath::PolicyChecker::ANY_POLICY = std::make_shared<java::lang::String>("2.5.29.32.0");
static sun::security::provider::certpath::PolicyChecker::debug;
// .method static constructor <clinit>()V
void sun::security::provider::certpath::PolicyChecker::static_cinit()
{
	
	sun::security::provider::certpath::PolicyChecker::debug = sun::security::util::Debug::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("certpath")));
	return;

}
// .method constructor <init>(Ljava/util/Set;IZZZZLsun/security/provider/certpath/PolicyNodeImpl;)V
sun::security::provider::certpath::PolicyChecker::PolicyChecker(std::shared_ptr<java::util::Set<java::lang::String>> initialPolicies,int certPathLen,bool expPolicyRequired,bool polMappingInhibited,bool anyPolicyInhibited,bool rejectPolicyQualifiers,std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> rootNode)
{
	
	std::shared_ptr<java::util::HashSet> cVar0;
	std::shared_ptr<java::util::HashSet> cVar1;
	
	//    .param p2, "certPathLen"    # I
	//    .param p3, "expPolicyRequired"    # Z
	//    .param p4, "polMappingInhibited"    # Z
	//    .param p5, "anyPolicyInhibited"    # Z
	//    .param p6, "rejectPolicyQualifiers"    # Z
	//    .param p7, "rootNode"    # Lsun/security/provider/certpath/PolicyNodeImpl;
	//    .annotation system Ldalvik/annotation/Signature;
	// 083        value = {
	// 084            "(",
	// 085            "Ljava/util/Set",
	// 086            "<",
	// 087            "Ljava/lang/String;",
	// 088            ">;IZZZZ",
	// 089            "Lsun/security/provider/certpath/PolicyNodeImpl;",
	// 090            ")V"
	// 091        }
	// 092    .end annotation
	//    .local p1, "initialPolicies":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 097    invoke-direct {p0}, Ljava/security/cert/PKIXCertPathChecker;-><init>()V
	if ( !(initialPolicies->isEmpty()) )  
		goto label_cond_26;
	cVar0 = std::make_shared<java::util::HashSet>(0x1);
	this->initPolicies = cVar0;
	this->initPolicies->add(std::make_shared<java::lang::String>(std::make_shared<char[]>("2.5.29.32.0")));
label_goto_19:
	this->certPathLen = certPathLen;
	this->expPolicyRequired = expPolicyRequired;
	this->polMappingInhibited = polMappingInhibited;
	this->anyPolicyInhibited = anyPolicyInhibited;
	this->rejectPolicyQualifiers = rejectPolicyQualifiers;
	this->rootNode = rootNode;
	return;
	// 144    .line 99
label_cond_26:
	cVar1 = std::make_shared<java::util::HashSet>(initialPolicies);
	this->initPolicies = cVar1;
	goto label_goto_19;

}
// .method private checkPolicy(Ljava/security/cert/X509Certificate;)V
void sun::security::provider::certpath::PolicyChecker::checkPolicy(std::shared_ptr<java::security::cert::X509Certificate> currCert)
{
	
	std::shared_ptr<java::lang::String> msg;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar11;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<sun::security::x509::X509CertImpl> currCertImpl;
	bool finalCert;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	std::shared_ptr<java::lang::StringBuilder> cVar8;
	std::shared_ptr<java::lang::StringBuilder> cVar9;
	std::shared_ptr<java::lang::StringBuilder> cVar10;
	
	//    .param p1, "currCert"    # Ljava/security/cert/X509Certificate;
	//    .annotation system Ldalvik/annotation/Throws;
	// 159        value = {
	// 160            Ljava/security/cert/CertPathValidatorException;
	// 161        }
	// 162    .end annotation
	msg = std::make_shared<java::lang::String>(std::make_shared<char[]>("certificate policies"));
	//    .local v10, "msg":Ljava/lang/String;
	if ( !(sun::security::provider::certpath::PolicyChecker::debug) )  
		goto label_cond_ae;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::PolicyChecker::debug->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyChecker.checkPolicy() ---checking ")))->append(msg)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("...")))->toString());
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::PolicyChecker::debug->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyChecker.checkPolicy() certIndex = ")))->append(this->certIndex)->toString());
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::PolicyChecker::debug->println(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyChecker.checkPolicy() BEFORE PROCESSING: explicitPolicy = ")))->append(this->explicitPolicy)->toString());
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::PolicyChecker::debug->println(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyChecker.checkPolicy() BEFORE PROCESSING: policyMapping = ")))->append(this->policyMapping)->toString());
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::PolicyChecker::debug->println(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyChecker.checkPolicy() BEFORE PROCESSING: inhibitAnyPolicy = ")))->append(this->inhibitAnyPolicy)->toString());
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::PolicyChecker::debug->println(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyChecker.checkPolicy() BEFORE PROCESSING: policyTree = ")))->append(this->rootNode)->toString());
label_cond_ae:
	0x0;
	//    .local v7, "currCertImpl":Lsun/security/x509/X509CertImpl;
	try {
	//label_try_start_af:
	//label_try_end_b2:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_17f;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_af .. :try_end_b2} :catch_17f
	currCertImpl = sun::security::x509::X509CertImpl::toImpl(currCert);
	//    .local v7, "currCertImpl":Lsun/security/x509/X509CertImpl;
	if ( this->certIndex != this->certPathLen )
		goto label_cond_186;
	finalCert = 0x1;
	//    .local v8, "finalCert":Z
label_goto_ba:
	this->rootNode = sun::security::provider::certpath::PolicyChecker::processPolicies(this->certIndex, this->initPolicies, this->explicitPolicy, this->policyMapping, this->inhibitAnyPolicy, this->rejectPolicyQualifiers, this->rootNode, currCertImpl, finalCert);
	if ( finalCert )     
		goto label_cond_e8;
	this->explicitPolicy = sun::security::provider::certpath::PolicyChecker::mergeExplicitPolicy(this->explicitPolicy, currCertImpl, finalCert);
	this->policyMapping = sun::security::provider::certpath::PolicyChecker::mergePolicyMapping(this->policyMapping, currCertImpl);
	this->inhibitAnyPolicy = sun::security::provider::certpath::PolicyChecker::mergeInhibitAnyPolicy(this->inhibitAnyPolicy, currCertImpl);
label_cond_e8:
	this->certIndex = ( this->certIndex + 0x1);
	if ( !(sun::security::provider::certpath::PolicyChecker::debug) )  
		goto label_cond_17e;
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::PolicyChecker::debug->println(cVar6->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyChecker.checkPolicy() AFTER PROCESSING: explicitPolicy = ")))->append(this->explicitPolicy)->toString());
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::PolicyChecker::debug->println(cVar7->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyChecker.checkPolicy() AFTER PROCESSING: policyMapping = ")))->append(this->policyMapping)->toString());
	cVar8 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::PolicyChecker::debug->println(cVar8->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyChecker.checkPolicy() AFTER PROCESSING: inhibitAnyPolicy = ")))->append(this->inhibitAnyPolicy)->toString());
	cVar9 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::PolicyChecker::debug->println(cVar9->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyChecker.checkPolicy() AFTER PROCESSING: policyTree = ")))->append(this->rootNode)->toString());
	cVar10 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::PolicyChecker::debug->println(cVar10->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyChecker.checkPolicy() ")))->append(msg)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" verified")))->toString());
label_cond_17e:
	return;
	// 572    .line 219
	// 573    .end local v8    # "finalCert":Z
	// 574    .local v7, "currCertImpl":Lsun/security/x509/X509CertImpl;
label_catch_17f:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v9, "ce":Ljava/security/cert/CertificateException;
	cVar11 = std::make_shared<java::security::cert::CertPathValidatorException>(getCatchExcetionFromList);
	// throw
	throw cVar11;
	// 586    .line 223
	// 587    .end local v9    # "ce":Ljava/security/cert/CertificateException;
	// 588    .local v7, "currCertImpl":Lsun/security/x509/X509CertImpl;
label_cond_186:
	finalCert = 0x0;
	//    .restart local v8    # "finalCert":Z
	goto label_goto_ba;

}
// .method static mergeExplicitPolicy(ILsun/security/x509/X509CertImpl;Z)I
int sun::security::provider::certpath::PolicyChecker::mergeExplicitPolicy(int cVar3,std::shared_ptr<sun::security::x509::X509CertImpl> currCert,bool finalCert)
{
	
	int cVar0;
	int cVar3;
	std::shared_ptr<java::io::IOException> e;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar5;
	std::shared_ptr<sun::security::x509::PolicyConstraintsExtension> polConstExt;
	int require;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "explicitPolicy"    # I
	//    .param p1, "currCert"    # Lsun/security/x509/X509CertImpl;
	//    .param p2, "finalCert"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 602        value = {
	// 603            Ljava/security/cert/CertPathValidatorException;
	// 604        }
	// 605    .end annotation
	cVar0 = -0x1;
	if ( cVar3 <= 0 )
		goto label_cond_d;
	if ( !(( sun::security::x509::X509CertImpl::isSelfIssued(currCert) ^ 0x1)) )  
		goto label_cond_d;
	cVar3 = ( cVar3 + -0x1);
label_cond_d:
	try {
	//label_try_start_d:
	polConstExt = currCert->getPolicyConstraintsExtension();
	//    .local v1, "polConstExt":Lsun/security/x509/PolicyConstraintsExtension;
	if ( polConstExt )     
		goto label_cond_14;
	return cVar3;
	// 638    .line 280
label_cond_14:
	require = polConstExt->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("require")))->intValue();
	//    .local v2, "require":I
	if ( !(sun::security::provider::certpath::PolicyChecker::debug) )  
		goto label_cond_3c;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::PolicyChecker::debug->println(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyChecker.mergeExplicitPolicy() require Index from cert = ")))->append(require)->toString());
	//label_try_end_3c:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_4a;
	}
	//    .catch Ljava/io/IOException; {:try_start_d .. :try_end_3c} :catch_4a
label_cond_3c:
	if ( finalCert )     
		goto label_cond_46;
	if ( require == cVar0 )
		goto label_cond_45;
	if ( cVar3 == cVar0 )
		goto label_cond_44;
	if ( require >= cVar3 )
		goto label_cond_45;
label_cond_44:
	cVar3 = require;
label_cond_45:
label_goto_45:
	return cVar3;
	// 702    .line 292
label_cond_46:
	if ( require )     
		goto label_cond_45;
	cVar3 = require;
	goto label_goto_45;
	// 711    .line 295
	// 712    .end local v1    # "polConstExt":Lsun/security/x509/PolicyConstraintsExtension;
	// 713    .end local v2    # "require":I
label_catch_4a:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	if ( !(sun::security::provider::certpath::PolicyChecker::debug) )  
		goto label_cond_5a;
	sun::security::provider::certpath::PolicyChecker::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyChecker.mergeExplicitPolicy unexpected exception")));
	e->printStackTrace();
label_cond_5a:
	cVar5 = std::make_shared<java::security::cert::CertPathValidatorException>(e);
	// throw
	throw cVar5;

}
// .method static mergeInhibitAnyPolicy(ILsun/security/x509/X509CertImpl;)I
int sun::security::provider::certpath::PolicyChecker::mergeInhibitAnyPolicy(int cVar2,std::shared_ptr<sun::security::x509::X509CertImpl> currCert)
{
	
	int cVar2;
	std::shared_ptr<java::io::IOException> e;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar3;
	std::shared_ptr<sun::security::x509::InhibitAnyPolicyExtension> inhAnyPolExt;
	int skipCerts;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "inhibitAnyPolicy"    # I
	//    .param p1, "currCert"    # Lsun/security/x509/X509CertImpl;
	//    .annotation system Ldalvik/annotation/Throws;
	// 747        value = {
	// 748            Ljava/security/cert/CertPathValidatorException;
	// 749        }
	// 750    .end annotation
	if ( cVar2 <= 0 )
		goto label_cond_c;
	if ( !(( sun::security::x509::X509CertImpl::isSelfIssued(currCert) ^ 0x1)) )  
		goto label_cond_c;
	cVar2 = ( cVar2 + -0x1);
label_cond_c:
	try {
	//label_try_start_c:
	inhAnyPolExt = currCert->getExtension(sun::security::x509::PKIXExtensions::InhibitAnyPolicy_Id);
	inhAnyPolExt->checkCast("sun::security::x509::InhibitAnyPolicyExtension");
	//    .local v1, "inhAnyPolExt":Lsun/security/x509/InhibitAnyPolicyExtension;
	if ( inhAnyPolExt )     
		goto label_cond_17;
	return cVar2;
	// 786    .line 382
label_cond_17:
	skipCerts = inhAnyPolExt->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("skip_certs")))->intValue();
	//    .local v2, "skipCerts":I
	if ( !(sun::security::provider::certpath::PolicyChecker::debug) )  
		goto label_cond_3f;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::PolicyChecker::debug->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyChecker.mergeInhibitAnyPolicy() skipCerts Index from cert = ")))->append(skipCerts)->toString());
	//label_try_end_3f:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_46;
	}
	//    .catch Ljava/io/IOException; {:try_start_c .. :try_end_3f} :catch_46
label_cond_3f:
	if ( skipCerts == -0x1 )
		goto label_cond_45;
	if ( skipCerts >= cVar2 )
		goto label_cond_45;
	cVar2 = skipCerts;
label_cond_45:
	return cVar2;
	// 845    .line 392
	// 846    .end local v1    # "inhAnyPolExt":Lsun/security/x509/InhibitAnyPolicyExtension;
	// 847    .end local v2    # "skipCerts":I
label_catch_46:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	if ( !(sun::security::provider::certpath::PolicyChecker::debug) )  
		goto label_cond_56;
	sun::security::provider::certpath::PolicyChecker::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyChecker.mergeInhibitAnyPolicy unexpected exception")));
	e->printStackTrace();
label_cond_56:
	cVar3 = std::make_shared<java::security::cert::CertPathValidatorException>(e);
	// throw
	throw cVar3;

}
// .method static mergePolicyMapping(ILsun/security/x509/X509CertImpl;)I
int sun::security::provider::certpath::PolicyChecker::mergePolicyMapping(int cVar3,std::shared_ptr<sun::security::x509::X509CertImpl> currCert)
{
	
	int cVar0;
	int cVar3;
	std::shared_ptr<java::io::IOException> e;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar4;
	std::shared_ptr<sun::security::x509::PolicyConstraintsExtension> polConstExt;
	int inhibit;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "policyMapping"    # I
	//    .param p1, "currCert"    # Lsun/security/x509/X509CertImpl;
	//    .annotation system Ldalvik/annotation/Throws;
	// 881        value = {
	// 882            Ljava/security/cert/CertPathValidatorException;
	// 883        }
	// 884    .end annotation
	cVar0 = -0x1;
	if ( cVar3 <= 0 )
		goto label_cond_d;
	if ( !(( sun::security::x509::X509CertImpl::isSelfIssued(currCert) ^ 0x1)) )  
		goto label_cond_d;
	cVar3 = ( cVar3 + -0x1);
label_cond_d:
	try {
	//label_try_start_d:
	polConstExt = currCert->getPolicyConstraintsExtension();
	//    .local v2, "polConstExt":Lsun/security/x509/PolicyConstraintsExtension;
	if ( polConstExt )     
		goto label_cond_14;
	return cVar3;
	// 917    .line 334
label_cond_14:
	inhibit = polConstExt->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("inhibit")))->intValue();
	//    .local v1, "inhibit":I
	if ( !(sun::security::provider::certpath::PolicyChecker::debug) )  
		goto label_cond_3c;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::PolicyChecker::debug->println(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyChecker.mergePolicyMapping() inhibit Index from cert = ")))->append(inhibit)->toString());
	//label_try_end_3c:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_44;
	}
	//    .catch Ljava/io/IOException; {:try_start_d .. :try_end_3c} :catch_44
label_cond_3c:
	if ( inhibit == cVar0 )
		goto label_cond_43;
	if ( cVar3 == cVar0 )
		goto label_cond_42;
	if ( inhibit >= cVar3 )
		goto label_cond_43;
label_cond_42:
	cVar3 = inhibit;
label_cond_43:
	return cVar3;
	// 977    .line 344
	// 978    .end local v1    # "inhibit":I
	// 979    .end local v2    # "polConstExt":Lsun/security/x509/PolicyConstraintsExtension;
label_catch_44:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	if ( !(sun::security::provider::certpath::PolicyChecker::debug) )  
		goto label_cond_54;
	sun::security::provider::certpath::PolicyChecker::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyChecker.mergePolicyMapping unexpected exception")));
	e->printStackTrace();
label_cond_54:
	cVar4 = std::make_shared<java::security::cert::CertPathValidatorException>(e);
	// throw
	throw cVar4;

}
// .method private static processParents(IZZLsun/security/provider/certpath/PolicyNodeImpl;Ljava/lang/String;Ljava/util/Set;Z)Z
bool sun::security::provider::certpath::PolicyChecker::processParents(int certIndex,bool policiesCritical,bool rejectPolicyQualifiers,std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> rootNode,std::shared_ptr<java::lang::String> curPolicy,std::shared_ptr<java::util::Set<java::security::cert::PolicyQualifierInfo>> pQuals,bool matchAny)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::util::Iterator> curParent_S_iterator;
	std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> curParent;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::util::Iterator> curParExpPol_S_iterator;
	std::shared_ptr<java::lang::String> curParExpPol;
	std::shared_ptr<java::util::Iterator> childIter;
	std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> childNode;
	auto childPolicy;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::util::HashSet> expPols;
	std::shared_ptr<java::util::HashSet> curExpPols;
	
	//    .param p0, "certIndex"    # I
	//    .param p1, "policiesCritical"    # Z
	//    .param p2, "rejectPolicyQualifiers"    # Z
	//    .param p3, "rootNode"    # Lsun/security/provider/certpath/PolicyNodeImpl;
	//    .param p4, "curPolicy"    # Ljava/lang/String;
	//    .param p6, "matchAny"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 1017        value = {
	// 1018            "(IZZ",
	// 1019            "Lsun/security/provider/certpath/PolicyNodeImpl;",
	// 1020            "Ljava/lang/String;",
	// 1021            "Ljava/util/Set",
	// 1022            "<",
	// 1023            "Ljava/security/cert/PolicyQualifierInfo;",
	// 1024            ">;Z)Z"
	// 1025        }
	// 1026    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 1029        value = {
	// 1030            Ljava/security/cert/CertPathValidatorException;
	// 1031        }
	// 1032    .end annotation
	//    .local p5, "pQuals":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/PolicyQualifierInfo;>;"
	//    .local v22, "foundMatch":Z
	if ( !(sun::security::provider::certpath::PolicyChecker::debug) )  
		goto label_cond_21;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::PolicyChecker::debug->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyChecker.processParents(): matchAny = ")))->append(matchAny)->toString());
label_cond_21:
	//    .local v24, "parentNodes":Ljava/util/Set;, "Ljava/util/Set<Lsun/security/provider/certpath/PolicyNodeImpl;>;"
	curParent_S_iterator = rootNode->getPolicyNodesExpected(( certIndex + -0x1), curPolicy, matchAny)->iterator();
	//    .local v21, "curParent$iterator":Ljava/util/Iterator;
label_cond_31:
label_goto_31:
	if ( !(curParent_S_iterator->hasNext()) )  
		goto label_cond_fc;
	curParent = curParent_S_iterator->next();
	curParent->checkCast("sun::security::provider::certpath::PolicyNodeImpl");
	//    .local v4, "curParent":Lsun/security/provider/certpath/PolicyNodeImpl;
	if ( !(sun::security::provider::certpath::PolicyChecker::debug) )  
		goto label_cond_5e;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::PolicyChecker::debug->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyChecker.processParents() found parent:\n")))->append(curParent->asString())->toString());
label_cond_5e:
	0x1;
	curParent->getValidPolicy();
	//    .local v20, "curParPolicy":Ljava/lang/String;
	0x0;
	//    .local v3, "curNode":Lsun/security/provider/certpath/PolicyNodeImpl;
	0x0;
	//    .local v14, "curExpPols":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	if ( !(curPolicy->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("2.5.29.32.0")))) )  
		goto label_cond_e2;
	//    .local v23, "parExpPols":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	curParExpPol_S_iterator = curParent->getExpectedPolicies()->iterator();
	//    .end local v3    # "curNode":Lsun/security/provider/certpath/PolicyNodeImpl;
	//    .local v19, "curParExpPol$iterator":Ljava/util/Iterator;
label_cond_79:
label_goto_79:
	if ( !(curParExpPol_S_iterator->hasNext()) )  
		goto label_cond_31;
	curParExpPol = curParExpPol_S_iterator->next();
	curParExpPol->checkCast("java::lang::String");
	//    .local v5, "curParExpPol":Ljava/lang/String;
	childIter = curParent->getChildren();
	//    .local v16, "childIter":Ljava/util/Iterator;, "Ljava/util/Iterator<Lsun/security/provider/certpath/PolicyNodeImpl;>;"
label_cond_89:
	if ( !(childIter->hasNext()) )  
		goto label_cond_cf;
	childNode = childIter->next();
	childNode->checkCast("sun::security::provider::certpath::PolicyNodeImpl");
	//    .local v17, "childNode":Lsun/security/provider/certpath/PolicyNodeImpl;
	childPolicy = childNode->getValidPolicy();
	//    .local v18, "childPolicy":Ljava/lang/String;
	if ( !(curParExpPol->equals(childPolicy)) )  
		goto label_cond_89;
	if ( !(sun::security::provider::certpath::PolicyChecker::debug) )  
		goto label_cond_79;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::PolicyChecker::debug->println(cVar2->append(childPolicy)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" in parent\'s ")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("expected policy set already appears in ")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("child node")))->toString());
	goto label_goto_79;
	// 1282    .line 702
	// 1283    .end local v17    # "childNode":Lsun/security/provider/certpath/PolicyNodeImpl;
	// 1284    .end local v18    # "childPolicy":Ljava/lang/String;
label_cond_cf:
	expPols = std::make_shared<java::util::HashSet>();
	//    .local v8, "expPols":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	expPols->add(curParExpPol);
	curNode = new sun::security::provider::certpath::PolicyNodeImpl(curParent, curParExpPol, pQuals, policiesCritical, expPols, 0x0);
	//    .local v3, "curNode":Lsun/security/provider/certpath/PolicyNodeImpl;
	goto label_goto_79;
	// 1310    .line 710
	// 1311    .end local v5    # "curParExpPol":Ljava/lang/String;
	// 1312    .end local v8    # "expPols":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 1313    .end local v16    # "childIter":Ljava/util/Iterator;, "Ljava/util/Iterator<Lsun/security/provider/certpath/PolicyNodeImpl;>;"
	// 1314    .end local v19    # "curParExpPol$iterator":Ljava/util/Iterator;
	// 1315    .end local v23    # "parExpPols":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 1316    .local v3, "curNode":Lsun/security/provider/certpath/PolicyNodeImpl;
label_cond_e2:
	//    .end local v14    # "curExpPols":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	curExpPols = std::make_shared<java::util::HashSet>();
	//    .local v14, "curExpPols":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	curExpPols->add(curPolicy);
	//    .end local v3    # "curNode":Lsun/security/provider/certpath/PolicyNodeImpl;
	var108 = new sun::security::provider::certpath::PolicyNodeImpl(curParent, curPolicy, pQuals, policiesCritical, curExpPols, 0x0);
	//    .local v3, "curNode":Lsun/security/provider/certpath/PolicyNodeImpl;
	goto label_goto_31;
	// 1352    .line 719
	// 1353    .end local v3    # "curNode":Lsun/security/provider/certpath/PolicyNodeImpl;
	// 1354    .end local v4    # "curParent":Lsun/security/provider/certpath/PolicyNodeImpl;
	// 1355    .end local v14    # "curExpPols":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 1356    .end local v20    # "curParPolicy":Ljava/lang/String;
label_cond_fc:
	return 0x0;

}
// .method static processPolicies(ILjava/util/Set;IIIZLsun/security/provider/certpath/PolicyNodeImpl;Lsun/security/x509/X509CertImpl;Z)Lsun/security/provider/certpath/PolicyNodeImpl;
std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> sun::security::provider::certpath::PolicyChecker::processPolicies(int certIndex,std::shared_ptr<java::util::Set<java::lang::String>> initPolicies,int cVar5,int policyMapping,int inhibitAnyPolicy,bool rejectPolicyQualifiers,std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> origRootNode,std::shared_ptr<sun::security::x509::X509CertImpl> currCert,bool finalCert)
{
	
	std::shared_ptr<java::util::HashSet> anyQuals;
	std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> rootNode;
	std::shared_ptr<sun::security::x509::CertificatePoliciesExtension> currCertPolicies;
	bool policiesCritical;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar2;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::util::Iterator> curPolInfo_S_iterator;
	std::shared_ptr<sun::security::x509::PolicyInformation> curPolInfo;
	std::shared_ptr<java::lang::String> curPolicy;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::util::Set> pQuals;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar4;
	int cVar5;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar6;
	
	//    .param p0, "certIndex"    # I
	//    .param p2, "explicitPolicy"    # I
	//    .param p3, "policyMapping"    # I
	//    .param p4, "inhibitAnyPolicy"    # I
	//    .param p5, "rejectPolicyQualifiers"    # Z
	//    .param p6, "origRootNode"    # Lsun/security/provider/certpath/PolicyNodeImpl;
	//    .param p7, "currCert"    # Lsun/security/x509/X509CertImpl;
	//    .param p8, "finalCert"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 1372        value = {
	// 1373            "(I",
	// 1374            "Ljava/util/Set",
	// 1375            "<",
	// 1376            "Ljava/lang/String;",
	// 1377            ">;IIIZ",
	// 1378            "Lsun/security/provider/certpath/PolicyNodeImpl;",
	// 1379            "Lsun/security/x509/X509CertImpl;",
	// 1380            "Z)",
	// 1381            "Lsun/security/provider/certpath/PolicyNodeImpl;"
	// 1382        }
	// 1383    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 1386        value = {
	// 1387            Ljava/security/cert/CertPathValidatorException;
	// 1388        }
	// 1389    .end annotation
	//    .local p1, "initPolicies":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	0x0;
	//    .local v4, "policiesCritical":Z
	0x0;
	//    .local v6, "rootNode":Lsun/security/provider/certpath/PolicyNodeImpl;
	anyQuals = std::make_shared<java::util::HashSet>();
	//    .local v14, "anyQuals":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/PolicyQualifierInfo;>;"
	if ( origRootNode )     
		goto label_cond_89;
	rootNode = 0x0;
	//    .end local v6    # "rootNode":Lsun/security/provider/certpath/PolicyNodeImpl;
label_goto_a:
	currCertPolicies = currCert->getCertificatePoliciesExtension();
	//    .local v23, "currCertPolicies":Lsun/security/x509/CertificatePoliciesExtension;
	if ( !(currCertPolicies) )  
		goto label_cond_176;
	if ( !(rootNode) )  
		goto label_cond_176;
	policiesCritical = currCertPolicies->isCritical();
	//    .local v4, "policiesCritical":Z
	if ( !(sun::security::provider::certpath::PolicyChecker::debug) )  
		goto label_cond_33;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::PolicyChecker::debug->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyChecker.processPolicies() policiesCritical = ")))->append(policiesCritical)->toString());
label_cond_33:
	try {
	//label_try_start_33:
	//label_try_end_3b:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_8f;
	}
	//    .catch Ljava/io/IOException; {:try_start_33 .. :try_end_3b} :catch_8f
	//    .local v27, "policyInfo":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/PolicyInformation;>;"
	if ( !(sun::security::provider::certpath::PolicyChecker::debug) )  
		goto label_cond_5b;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::PolicyChecker::debug->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyChecker.processPolicies() rejectPolicyQualifiers = ")))->append(rejectPolicyQualifiers)->toString());
label_cond_5b:
	//    .local v24, "foundAnyPolicy":Z
	curPolInfo_S_iterator = currCertPolicies->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("policies")))->iterator();
	//    .local v22, "curPolInfo$iterator":Ljava/util/Iterator;
label_cond_61:
label_goto_61:
	if ( !(curPolInfo_S_iterator->hasNext()) )  
		goto label_cond_e9;
	curPolInfo = curPolInfo_S_iterator->next();
	curPolInfo->checkCast("sun::security::x509::PolicyInformation");
	//    .local v21, "curPolInfo":Lsun/security/x509/PolicyInformation;
	curPolicy = curPolInfo->getPolicyIdentifier()->getIdentifier()->toString();
	//    .local v7, "curPolicy":Ljava/lang/String;
	if ( !(curPolicy->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("2.5.29.32.0")))) )  
		goto label_cond_9b;
	0x1;
	curPolInfo->getPolicyQualifiers();
	goto label_goto_61;
	// 1563    .line 439
	// 1564    .end local v7    # "curPolicy":Ljava/lang/String;
	// 1565    .end local v21    # "curPolInfo":Lsun/security/x509/PolicyInformation;
	// 1566    .end local v22    # "curPolInfo$iterator":Ljava/util/Iterator;
	// 1567    .end local v23    # "currCertPolicies":Lsun/security/x509/CertificatePoliciesExtension;
	// 1568    .end local v24    # "foundAnyPolicy":Z
	// 1569    .end local v27    # "policyInfo":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/PolicyInformation;>;"
	// 1570    .local v4, "policiesCritical":Z
	// 1571    .restart local v6    # "rootNode":Lsun/security/provider/certpath/PolicyNodeImpl;
label_cond_89:
	rootNode = origRootNode->copyTree();
	//    .local v6, "rootNode":Lsun/security/provider/certpath/PolicyNodeImpl;
	goto label_goto_a;
	// 1580    .line 454
	// 1581    .end local v6    # "rootNode":Lsun/security/provider/certpath/PolicyNodeImpl;
	// 1582    .local v4, "policiesCritical":Z
	// 1583    .restart local v23    # "currCertPolicies":Lsun/security/x509/CertificatePoliciesExtension;
label_catch_8f:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v26, "ioe":Ljava/io/IOException;
	tryCatchExcetionList.pop_back();
	cVar2 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Exception while retrieving policyOIDs")), getCatchExcetionFromList);
	// throw
	throw cVar2;
	// 1599    .line 475
	// 1600    .end local v26    # "ioe":Ljava/io/IOException;
	// 1601    .restart local v7    # "curPolicy":Ljava/lang/String;
	// 1602    .restart local v21    # "curPolInfo":Lsun/security/x509/PolicyInformation;
	// 1603    .restart local v22    # "curPolInfo$iterator":Ljava/util/Iterator;
	// 1604    .restart local v24    # "foundAnyPolicy":Z
	// 1605    .restart local v27    # "policyInfo":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/PolicyInformation;>;"
label_cond_9b:
	if ( !(sun::security::provider::certpath::PolicyChecker::debug) )  
		goto label_cond_b8;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::PolicyChecker::debug->println(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyChecker.processPolicies() processing policy: ")))->append(curPolicy)->toString());
label_cond_b8:
	pQuals = curPolInfo->getPolicyQualifiers();
	//    .local v8, "pQuals":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/PolicyQualifierInfo;>;"
	if ( pQuals->isEmpty() )     
		goto label_cond_d4;
	if ( !(rejectPolicyQualifiers) )  
		goto label_cond_d4;
	if ( !(policiesCritical) )  
		goto label_cond_d4;
	//    .end local v4    # "policiesCritical":Z
	//    .end local v8    # "pQuals":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/PolicyQualifierInfo;>;"
	cVar4 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("critical policy qualifiers present in certificate")), 0x0, 0x0, -0x1, java::security::cert::PKIXReason::INVALID_POLICY);
	//    .end local v7    # "curPolicy":Ljava/lang/String;
	// throw
	throw cVar4;
	// 1675    .line 495
	// 1676    .restart local v4    # "policiesCritical":Z
	// 1677    .restart local v7    # "curPolicy":Ljava/lang/String;
	// 1678    .restart local v8    # "pQuals":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/PolicyQualifierInfo;>;"
label_cond_d4:
	//    .local v25, "foundMatch":Z
	if ( sun::security::provider::certpath::PolicyChecker::processParents(certIndex, policiesCritical, rejectPolicyQualifiers, rootNode, curPolicy, pQuals, 0x0) )     
		goto label_cond_61;
	sun::security::provider::certpath::PolicyChecker::processParents(certIndex, policiesCritical, rejectPolicyQualifiers, rootNode, curPolicy, pQuals, 0x1);
	goto label_goto_61;
	// 1707    .line 507
	// 1708    .end local v7    # "curPolicy":Ljava/lang/String;
	// 1709    .end local v8    # "pQuals":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/PolicyQualifierInfo;>;"
	// 1710    .end local v21    # "curPolInfo":Lsun/security/x509/PolicyInformation;
	// 1711    .end local v25    # "foundMatch":Z
label_cond_e9:
	if ( !(0x0) )  
		goto label_cond_10e;
	if ( inhibitAnyPolicy > 0 ) 
		goto label_cond_f5;
	if ( finalCert )     
		goto label_cond_10e;
	if ( !(sun::security::x509::X509CertImpl::isSelfIssued(currCert)) )  
		goto label_cond_10e;
label_cond_f5:
	if ( !(sun::security::provider::certpath::PolicyChecker::debug) )  
		goto label_cond_101;
	sun::security::provider::certpath::PolicyChecker::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyChecker.processPolicies() processing policy: 2.5.29.32.0")));
label_cond_101:
	sun::security::provider::certpath::PolicyChecker::processParents(certIndex, policiesCritical, rejectPolicyQualifiers, rootNode, std::make_shared<java::lang::String>(std::make_shared<char[]>("2.5.29.32.0")), anyQuals, 0x1);
label_cond_10e:
	rootNode->prune(certIndex);
	if ( rootNode->getChildren()->hasNext() )     
		goto label_cond_11e;
	rootNode = 0x0;
	//    .end local v4    # "policiesCritical":Z
	//    .end local v22    # "curPolInfo$iterator":Ljava/util/Iterator;
	//    .end local v24    # "foundAnyPolicy":Z
	//    .end local v27    # "policyInfo":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/PolicyInformation;>;"
label_cond_11e:
label_goto_11e:
	if ( !(rootNode) )  
		goto label_cond_12e;
	if ( finalCert )     
		goto label_cond_12e;
	rootNode = sun::security::provider::certpath::PolicyChecker::processPolicyMappings(currCert, certIndex, policyMapping, rootNode, policiesCritical, anyQuals);
label_cond_12e:
	if ( !(rootNode) )  
		goto label_cond_155;
	if ( !(( initPolicies->contains(std::make_shared<java::lang::String>(std::make_shared<char[]>("2.5.29.32.0"))) ^ 0x1)) )  
		goto label_cond_155;
	if ( !(currCertPolicies) )  
		goto label_cond_155;
	rootNode = sun::security::provider::certpath::PolicyChecker::removeInvalidNodes(rootNode, certIndex, initPolicies, currCertPolicies);
	//    .restart local v6    # "rootNode":Lsun/security/provider/certpath/PolicyNodeImpl;
	if ( !(rootNode) )  
		goto label_cond_155;
	if ( !(finalCert) )  
		goto label_cond_155;
	rootNode = sun::security::provider::certpath::PolicyChecker::rewriteLeafNodes(certIndex, initPolicies, rootNode);
	//    .end local v6    # "rootNode":Lsun/security/provider/certpath/PolicyNodeImpl;
label_cond_155:
	if ( !(finalCert) )  
		goto label_cond_161;
	cVar5 = sun::security::provider::certpath::PolicyChecker::mergeExplicitPolicy(cVar5, currCert, finalCert);
label_cond_161:
	if ( cVar5 )     
		goto label_cond_186;
	if ( rootNode )     
		goto label_cond_186;
	cVar6 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("non-null policy tree required and policy tree is null")), 0x0, 0x0, -0x1, java::security::cert::PKIXReason::INVALID_POLICY);
	// throw
	throw cVar6;
	// 1893    .line 525
	// 1894    .local v4, "policiesCritical":Z
label_cond_176:
	if ( currCertPolicies )     
		goto label_cond_11e;
	if ( !(sun::security::provider::certpath::PolicyChecker::debug) )  
		goto label_cond_184;
	sun::security::provider::certpath::PolicyChecker::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyChecker.processPolicies() no policies present in cert")));
label_cond_184:
	rootNode = 0x0;
	//    .local v6, "rootNode":Lsun/security/provider/certpath/PolicyNodeImpl;
	goto label_goto_11e;
	// 1917    .line 577
	// 1918    .end local v4    # "policiesCritical":Z
	// 1919    .end local v6    # "rootNode":Lsun/security/provider/certpath/PolicyNodeImpl;
label_cond_186:
	return rootNode;

}
// .method private static processPolicyMappings(Lsun/security/x509/X509CertImpl;IILsun/security/provider/certpath/PolicyNodeImpl;ZLjava/util/Set;)Lsun/security/provider/certpath/PolicyNodeImpl;
std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> sun::security::provider::certpath::PolicyChecker::processPolicyMappings(std::shared_ptr<sun::security::x509::X509CertImpl> currCert,int certIndex,int policyMapping,std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> cVar7,bool policiesCritical,std::shared_ptr<java::util::Set<java::security::cert::PolicyQualifierInfo>> anyQuals)
{
	
	auto polMappingsExt;
	std::shared_ptr<java::io::IOException> e;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar3;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::util::Iterator> polMap_S_iterator;
	std::shared_ptr<sun::security::x509::CertificatePolicyMap> polMap;
	std::shared_ptr<java::lang::String> issuerDomain;
	auto subjectDomain;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar2;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar4;
	std::shared_ptr<java::util::Set> validNodes;
	std::shared_ptr<java::util::Iterator> curNode_S_iterator;
	std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> curNode;
	std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> parentNode;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	std::shared_ptr<java::util::Iterator> curAnyNode_S_iterator;
	std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> curAnyNode;
	std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> curAnyNodeParent;
	std::shared_ptr<java::util::HashSet> expPols;
	std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> cVar7;
	
	//    .param p0, "currCert"    # Lsun/security/x509/X509CertImpl;
	//    .param p1, "certIndex"    # I
	//    .param p2, "policyMapping"    # I
	//    .param p3, "rootNode"    # Lsun/security/provider/certpath/PolicyNodeImpl;
	//    .param p4, "policiesCritical"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 1932        value = {
	// 1933            "(",
	// 1934            "Lsun/security/x509/X509CertImpl;",
	// 1935            "II",
	// 1936            "Lsun/security/provider/certpath/PolicyNodeImpl;",
	// 1937            "Z",
	// 1938            "Ljava/util/Set",
	// 1939            "<",
	// 1940            "Ljava/security/cert/PolicyQualifierInfo;",
	// 1941            ">;)",
	// 1942            "Lsun/security/provider/certpath/PolicyNodeImpl;"
	// 1943        }
	// 1944    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 1947        value = {
	// 1948            Ljava/security/cert/CertPathValidatorException;
	// 1949        }
	// 1950    .end annotation
	//    .local p5, "anyQuals":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/PolicyQualifierInfo;>;"
	polMappingsExt = currCert->getPolicyMappingsExtension();
	//    .local v18, "polMappingsExt":Lsun/security/x509/PolicyMappingsExtension;
	if ( polMappingsExt )     
		goto label_cond_7;
	return cVar7;
	// 1966    .line 749
label_cond_7:
	if ( !(sun::security::provider::certpath::PolicyChecker::debug) )  
		goto label_cond_13;
	sun::security::provider::certpath::PolicyChecker::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyChecker.processPolicyMappings() inside policyMapping check")));
label_cond_13:
	0x0;
	//    .local v14, "maps":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/CertificatePolicyMap;>;"
	try {
	//label_try_start_14:
	//label_try_end_1c:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_95;
	}
	//    .catch Ljava/io/IOException; {:try_start_14 .. :try_end_1c} :catch_95
	//    .local v14, "maps":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/CertificatePolicyMap;>;"
	//    .local v9, "childDeleted":Z
	polMap_S_iterator = polMappingsExt->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("map")))->iterator();
	//    .local v17, "polMap$iterator":Ljava/util/Iterator;
label_cond_22:
	if ( !(polMap_S_iterator->hasNext()) )  
		goto label_cond_17a;
	polMap = polMap_S_iterator->next();
	polMap->checkCast("sun::security::x509::CertificatePolicyMap");
	//    .local v16, "polMap":Lsun/security/x509/CertificatePolicyMap;
	issuerDomain = polMap->getIssuerIdentifier()->getIdentifier()->toString();
	//    .local v4, "issuerDomain":Ljava/lang/String;
	subjectDomain = polMap->getSubjectIdentifier()->getIdentifier()->toString();
	//    .local v19, "subjectDomain":Ljava/lang/String;
	if ( !(sun::security::provider::certpath::PolicyChecker::debug) )  
		goto label_cond_7e;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::PolicyChecker::debug->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyChecker.processPolicyMappings() issuerDomain = ")))->append(issuerDomain)->toString());
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::PolicyChecker::debug->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyChecker.processPolicyMappings() subjectDomain = ")))->append(subjectDomain)->toString());
label_cond_7e:
	if ( !(issuerDomain->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("2.5.29.32.0")))) )  
		goto label_cond_ae;
	cVar2 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("encountered an issuerDomainPolicy of ANY_POLICY")), 0x0, 0x0, -0x1, java::security::cert::PKIXReason::INVALID_POLICY);
	//    .end local v4    # "issuerDomain":Ljava/lang/String;
	// throw
	throw cVar2;
	// 2133    .line 756
	// 2134    .end local v9    # "childDeleted":Z
	// 2135    .end local v16    # "polMap":Lsun/security/x509/CertificatePolicyMap;
	// 2136    .end local v17    # "polMap$iterator":Ljava/util/Iterator;
	// 2137    .end local v19    # "subjectDomain":Ljava/lang/String;
	// 2138    .local v14, "maps":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/CertificatePolicyMap;>;"
label_catch_95:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v13, "e":Ljava/io/IOException;
	if ( !(sun::security::provider::certpath::PolicyChecker::debug) )  
		goto label_cond_a5;
	sun::security::provider::certpath::PolicyChecker::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyChecker.processPolicyMappings() mapping exception")));
	e->printStackTrace();
label_cond_a5:
	cVar3 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Exception while checking mapping")), e);
	// throw
	throw cVar3;
	// 2168    .line 785
	// 2169    .end local v13    # "e":Ljava/io/IOException;
	// 2170    .restart local v4    # "issuerDomain":Ljava/lang/String;
	// 2171    .restart local v9    # "childDeleted":Z
	// 2172    .local v14, "maps":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/CertificatePolicyMap;>;"
	// 2173    .restart local v16    # "polMap":Lsun/security/x509/CertificatePolicyMap;
	// 2174    .restart local v17    # "polMap$iterator":Ljava/util/Iterator;
	// 2175    .restart local v19    # "subjectDomain":Ljava/lang/String;
label_cond_ae:
	if ( !(subjectDomain->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("2.5.29.32.0")))) )  
		goto label_cond_c7;
	cVar4 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("encountered a subjectDomainPolicy of ANY_POLICY")), 0x0, 0x0, -0x1, java::security::cert::PKIXReason::INVALID_POLICY);
	//    .end local v4    # "issuerDomain":Ljava/lang/String;
	// throw
	throw cVar4;
	// 2208    .line 792
	// 2209    .restart local v4    # "issuerDomain":Ljava/lang/String;
label_cond_c7:
	validNodes = cVar7->getPolicyNodesValid(certIndex, issuerDomain);
	//    .local v21, "validNodes":Ljava/util/Set;, "Ljava/util/Set<Lsun/security/provider/certpath/PolicyNodeImpl;>;"
	if ( validNodes->isEmpty() )     
		goto label_cond_13d;
	curNode_S_iterator = validNodes->iterator();
	//    .local v12, "curNode$iterator":Ljava/util/Iterator;
label_cond_d9:
label_goto_d9:
	if ( !(curNode_S_iterator->hasNext()) )  
		goto label_cond_22;
	curNode = curNode_S_iterator->next();
	curNode->checkCast("sun::security::provider::certpath::PolicyNodeImpl");
	//    .local v2, "curNode":Lsun/security/provider/certpath/PolicyNodeImpl;
	if ( policyMapping > 0 ) 
		goto label_cond_ec;
	if ( policyMapping != -0x1 )
		goto label_cond_f2;
label_cond_ec:
	curNode->addExpectedPolicy(subjectDomain);
	goto label_goto_d9;
	// 2265    .line 797
label_cond_f2:
	if ( policyMapping )     
		goto label_cond_d9;
	parentNode = curNode->getParent();
	parentNode->checkCast("sun::security::provider::certpath::PolicyNodeImpl");
	//    .local v15, "parentNode":Lsun/security/provider/certpath/PolicyNodeImpl;
	if ( !(sun::security::provider::certpath::PolicyChecker::debug) )  
		goto label_cond_119;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::PolicyChecker::debug->println(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyChecker.processPolicyMappings() before deleting: policy tree = ")))->append(cVar7)->toString());
label_cond_119:
	parentNode->deleteChild(curNode);
	0x1;
	if ( !(sun::security::provider::certpath::PolicyChecker::debug) )  
		goto label_cond_d9;
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::PolicyChecker::debug->println(cVar6->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyChecker.processPolicyMappings() after deleting: policy tree = ")))->append(cVar7)->toString());
	goto label_goto_d9;
	// 2346    .line 813
	// 2347    .end local v2    # "curNode":Lsun/security/provider/certpath/PolicyNodeImpl;
	// 2348    .end local v12    # "curNode$iterator":Ljava/util/Iterator;
	// 2349    .end local v15    # "parentNode":Lsun/security/provider/certpath/PolicyNodeImpl;
label_cond_13d:
	if ( policyMapping > 0 ) 
		goto label_cond_144;
	if ( policyMapping != -0x1 )
		goto label_cond_22;
label_cond_144:
	//    .local v20, "validAnyNodes":Ljava/util/Set;, "Ljava/util/Set<Lsun/security/provider/certpath/PolicyNodeImpl;>;"
	curAnyNode_S_iterator = cVar7->getPolicyNodesValid(certIndex, std::make_shared<java::lang::String>(std::make_shared<char[]>("2.5.29.32.0")))->iterator();
	//    .local v11, "curAnyNode$iterator":Ljava/util/Iterator;
label_goto_153:
	if ( !(curAnyNode_S_iterator->hasNext()) )  
		goto label_cond_22;
	curAnyNode = curAnyNode_S_iterator->next();
	curAnyNode->checkCast("sun::security::provider::certpath::PolicyNodeImpl");
	//    .local v10, "curAnyNode":Lsun/security/provider/certpath/PolicyNodeImpl;
	curAnyNodeParent = curAnyNode->getParent();
	curAnyNodeParent->checkCast("sun::security::provider::certpath::PolicyNodeImpl");
	//    .local v3, "curAnyNodeParent":Lsun/security/provider/certpath/PolicyNodeImpl;
	expPols = std::make_shared<java::util::HashSet>();
	//    .local v7, "expPols":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	expPols->add(subjectDomain);
	curNode = new sun::security::provider::certpath::PolicyNodeImpl(curAnyNodeParent, issuerDomain, anyQuals, policiesCritical, expPols, 0x1);
	//    .restart local v2    # "curNode":Lsun/security/provider/certpath/PolicyNodeImpl;
	goto label_goto_153;
	// 2427    .line 831
	// 2428    .end local v2    # "curNode":Lsun/security/provider/certpath/PolicyNodeImpl;
	// 2429    .end local v3    # "curAnyNodeParent":Lsun/security/provider/certpath/PolicyNodeImpl;
	// 2430    .end local v4    # "issuerDomain":Ljava/lang/String;
	// 2431    .end local v7    # "expPols":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 2432    .end local v10    # "curAnyNode":Lsun/security/provider/certpath/PolicyNodeImpl;
	// 2433    .end local v11    # "curAnyNode$iterator":Ljava/util/Iterator;
	// 2434    .end local v16    # "polMap":Lsun/security/x509/CertificatePolicyMap;
	// 2435    .end local v19    # "subjectDomain":Ljava/lang/String;
	// 2436    .end local v20    # "validAnyNodes":Ljava/util/Set;, "Ljava/util/Set<Lsun/security/provider/certpath/PolicyNodeImpl;>;"
	// 2437    .end local v21    # "validNodes":Ljava/util/Set;, "Ljava/util/Set<Lsun/security/provider/certpath/PolicyNodeImpl;>;"
label_cond_17a:
	if ( !(0x0) )  
		goto label_cond_19b;
	cVar7->prune(certIndex);
	if ( cVar7->getChildren()->hasNext() )     
		goto label_cond_19b;
	if ( !(sun::security::provider::certpath::PolicyChecker::debug) )  
		goto label_cond_199;
	sun::security::provider::certpath::PolicyChecker::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("setting rootNode to null")));
label_cond_199:
	cVar7 = 0x0;
	//    .end local p3    # "rootNode":Lsun/security/provider/certpath/PolicyNodeImpl;
label_cond_19b:
	return cVar7;

}
// .method private static removeInvalidNodes(Lsun/security/provider/certpath/PolicyNodeImpl;ILjava/util/Set;Lsun/security/x509/CertificatePoliciesExtension;)Lsun/security/provider/certpath/PolicyNodeImpl;
std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> sun::security::provider::certpath::PolicyChecker::removeInvalidNodes(std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> cVar4,int certIndex,std::shared_ptr<java::util::Set<java::lang::String>> initPolicies,std::shared_ptr<sun::security::x509::CertificatePoliciesExtension> currCertPolicies)
{
	
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar3;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::util::Iterator> curPolInfo_S_iterator;
	std::shared_ptr<sun::security::x509::PolicyInformation> curPolInfo;
	std::shared_ptr<java::lang::String> curPolicy;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::util::Iterator> curNode_S_iterator;
	std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> curNode;
	std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> parentNode;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> cVar4;
	
	//    .param p0, "rootNode"    # Lsun/security/provider/certpath/PolicyNodeImpl;
	//    .param p1, "certIndex"    # I
	//    .param p3, "currCertPolicies"    # Lsun/security/x509/CertificatePoliciesExtension;
	//    .annotation system Ldalvik/annotation/Signature;
	// 2487        value = {
	// 2488            "(",
	// 2489            "Lsun/security/provider/certpath/PolicyNodeImpl;",
	// 2490            "I",
	// 2491            "Ljava/util/Set",
	// 2492            "<",
	// 2493            "Ljava/lang/String;",
	// 2494            ">;",
	// 2495            "Lsun/security/x509/CertificatePoliciesExtension;",
	// 2496            ")",
	// 2497            "Lsun/security/provider/certpath/PolicyNodeImpl;"
	// 2498        }
	// 2499    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 2502        value = {
	// 2503            Ljava/security/cert/CertPathValidatorException;
	// 2504        }
	// 2505    .end annotation
	//    .local p2, "initPolicies":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	0x0;
	//    .local v9, "policyInfo":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/PolicyInformation;>;"
	try {
	//label_try_start_1:
	//label_try_end_9:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_bd;
	}
	//    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_9} :catch_bd
	//    .local v9, "policyInfo":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/PolicyInformation;>;"
	//    .local v1, "childDeleted":Z
	curPolInfo_S_iterator = currCertPolicies->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("policies")))->iterator();
	//    .local v5, "curPolInfo$iterator":Ljava/util/Iterator;
label_cond_f:
	if ( !(curPolInfo_S_iterator->hasNext()) )  
		goto label_cond_c7;
	curPolInfo = curPolInfo_S_iterator->next();
	curPolInfo->checkCast("sun::security::x509::PolicyInformation");
	//    .local v4, "curPolInfo":Lsun/security/x509/PolicyInformation;
	curPolicy = curPolInfo->getPolicyIdentifier()->getIdentifier()->toString();
	//    .local v6, "curPolicy":Ljava/lang/String;
	if ( !(sun::security::provider::certpath::PolicyChecker::debug) )  
		goto label_cond_44;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::PolicyChecker::debug->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyChecker.processPolicies() processing policy second time: ")))->append(curPolicy)->toString());
label_cond_44:
	//    .local v10, "validNodes":Ljava/util/Set;, "Ljava/util/Set<Lsun/security/provider/certpath/PolicyNodeImpl;>;"
	curNode_S_iterator = cVar4->getPolicyNodesValid(certIndex, curPolicy)->iterator();
	//    .local v3, "curNode$iterator":Ljava/util/Iterator;
label_cond_4c:
label_goto_4c:
	if ( !(curNode_S_iterator->hasNext()) )  
		goto label_cond_f;
	curNode = curNode_S_iterator->next();
	curNode->checkCast("sun::security::provider::certpath::PolicyNodeImpl");
	//    .local v2, "curNode":Lsun/security/provider/certpath/PolicyNodeImpl;
	parentNode = curNode->getParent();
	parentNode->checkCast("sun::security::provider::certpath::PolicyNodeImpl");
	//    .local v8, "parentNode":Lsun/security/provider/certpath/PolicyNodeImpl;
	if ( !(parentNode->getValidPolicy()->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("2.5.29.32.0")))) )  
		goto label_cond_4c;
	if ( initPolicies->contains(curPolicy) )     
		goto label_cond_4c;
	if ( !(( curPolicy->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("2.5.29.32.0"))) ^ 0x1)) )  
		goto label_cond_4c;
	if ( !(sun::security::provider::certpath::PolicyChecker::debug) )  
		goto label_cond_9b;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::PolicyChecker::debug->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyChecker.processPolicies() before deleting: policy tree = ")))->append(cVar4)->toString());
label_cond_9b:
	parentNode->deleteChild(curNode);
	0x1;
	if ( !(sun::security::provider::certpath::PolicyChecker::debug) )  
		goto label_cond_4c;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::PolicyChecker::debug->println(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyChecker.processPolicies() after deleting: policy tree = ")))->append(cVar4)->toString());
	goto label_goto_4c;
	// 2727    .line 863
	// 2728    .end local v1    # "childDeleted":Z
	// 2729    .end local v2    # "curNode":Lsun/security/provider/certpath/PolicyNodeImpl;
	// 2730    .end local v3    # "curNode$iterator":Ljava/util/Iterator;
	// 2731    .end local v4    # "curPolInfo":Lsun/security/x509/PolicyInformation;
	// 2732    .end local v5    # "curPolInfo$iterator":Ljava/util/Iterator;
	// 2733    .end local v6    # "curPolicy":Ljava/lang/String;
	// 2734    .end local v8    # "parentNode":Lsun/security/provider/certpath/PolicyNodeImpl;
	// 2735    .end local v10    # "validNodes":Ljava/util/Set;, "Ljava/util/Set<Lsun/security/provider/certpath/PolicyNodeImpl;>;"
	// 2736    .local v9, "policyInfo":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/PolicyInformation;>;"
label_catch_bd:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v7, "ioe":Ljava/io/IOException;
	cVar3 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Exception while retrieving policyOIDs")), getCatchExcetionFromList);
	// throw
	throw cVar3;
	// 2750    .line 897
	// 2751    .end local v7    # "ioe":Ljava/io/IOException;
	// 2752    .restart local v1    # "childDeleted":Z
	// 2753    .restart local v5    # "curPolInfo$iterator":Ljava/util/Iterator;
	// 2754    .local v9, "policyInfo":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/PolicyInformation;>;"
label_cond_c7:
	if ( !(0x0) )  
		goto label_cond_d7;
	cVar4->prune(certIndex);
	if ( cVar4->getChildren()->hasNext() )     
		goto label_cond_d7;
	cVar4 = 0x0;
	//    .end local p0    # "rootNode":Lsun/security/provider/certpath/PolicyNodeImpl;
label_cond_d7:
	return cVar4;

}
// .method private static rewriteLeafNodes(ILjava/util/Set;Lsun/security/provider/certpath/PolicyNodeImpl;)Lsun/security/provider/certpath/PolicyNodeImpl;
std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> sun::security::provider::certpath::PolicyChecker::rewriteLeafNodes(int certIndex,std::shared_ptr<java::util::Set<java::lang::String>> initPolicies,std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> cVar0)
{
	
	std::shared_ptr<java::util::Set> anyNodes;
	std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> anyNode;
	std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> parentNode;
	std::shared_ptr<java::util::HashSet> initial;
	std::shared_ptr<java::util::Iterator> node_S_iterator;
	std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> node;
	std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> cVar0;
	std::shared_ptr<java::util::Iterator> policy_S_iterator;
	std::shared_ptr<java::lang::String> policy;
	
	//    .param p0, "certIndex"    # I
	//    .param p2, "rootNode"    # Lsun/security/provider/certpath/PolicyNodeImpl;
	//    .annotation system Ldalvik/annotation/Signature;
	// 2786        value = {
	// 2787            "(I",
	// 2788            "Ljava/util/Set",
	// 2789            "<",
	// 2790            "Ljava/lang/String;",
	// 2791            ">;",
	// 2792            "Lsun/security/provider/certpath/PolicyNodeImpl;",
	// 2793            ")",
	// 2794            "Lsun/security/provider/certpath/PolicyNodeImpl;"
	// 2795        }
	// 2796    .end annotation
	//    .local p1, "initPolicies":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	anyNodes = cVar0->getPolicyNodesValid(certIndex, std::make_shared<java::lang::String>(std::make_shared<char[]>("2.5.29.32.0")));
	//    .local v8, "anyNodes":Ljava/util/Set;, "Ljava/util/Set<Lsun/security/provider/certpath/PolicyNodeImpl;>;"
	if ( !(anyNodes->isEmpty()) )  
		goto label_cond_e;
	return cVar0;
	// 2818    .line 601
label_cond_e:
	anyNode = anyNodes->iterator()->next();
	anyNode->checkCast("sun::security::provider::certpath::PolicyNodeImpl");
	//    .local v7, "anyNode":Lsun/security/provider/certpath/PolicyNodeImpl;
	parentNode = anyNode->getParent();
	parentNode->checkCast("sun::security::provider::certpath::PolicyNodeImpl");
	//    .local v1, "parentNode":Lsun/security/provider/certpath/PolicyNodeImpl;
	parentNode->deleteChild(anyNode);
	initial = std::make_shared<java::util::HashSet>(initPolicies);
	//    .local v9, "initial":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	node_S_iterator = cVar0->getPolicyNodes(certIndex)->iterator();
	//    .local v10, "node$iterator":Ljava/util/Iterator;
label_goto_2e:
	if ( !(node_S_iterator->hasNext()) )  
		goto label_cond_42;
	node = node_S_iterator->next();
	node->checkCast("sun::security::provider::certpath::PolicyNodeImpl");
	//    .local v0, "node":Lsun/security/provider/certpath/PolicyNodeImpl;
	initial->remove(node->getValidPolicy());
	goto label_goto_2e;
	// 2881    .line 609
	// 2882    .end local v0    # "node":Lsun/security/provider/certpath/PolicyNodeImpl;
label_cond_42:
	if ( !(initial->isEmpty()) )  
		goto label_cond_57;
	cVar0->prune(certIndex);
	if ( cVar0->getChildren()->hasNext() )     
		goto label_cond_56;
	cVar0 = 0x0;
	//    .end local p2    # "rootNode":Lsun/security/provider/certpath/PolicyNodeImpl;
label_cond_56:
	return cVar0;
	// 2912    .line 617
	// 2913    .restart local p2    # "rootNode":Lsun/security/provider/certpath/PolicyNodeImpl;
label_cond_57:
	//    .local v4, "anyCritical":Z
	//    .local v3, "anyQualifiers":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/PolicyQualifierInfo;>;"
	policy_S_iterator = initial->iterator();
	//    .local v11, "policy$iterator":Ljava/util/Iterator;
label_goto_63:
	if ( !(policy_S_iterator->hasNext()) )  
		goto label_cond_56;
	policy = policy_S_iterator->next();
	policy->checkCast("java::lang::String");
	//    .local v2, "policy":Ljava/lang/String;
	//    .local v5, "expectedPolicies":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	node = new sun::security::provider::certpath::PolicyNodeImpl(parentNode, policy, anyNode->getPolicyQualifiers(), anyNode->isCritical(), java::util::Collections::singleton(policy), 0x0);
	//    .restart local v0    # "node":Lsun/security/provider/certpath/PolicyNodeImpl;
	goto label_goto_63;

}
// .method public check(Ljava/security/cert/Certificate;Ljava/util/Collection;)V
void sun::security::provider::certpath::PolicyChecker::check(std::shared_ptr<java::security::cert::Certificate> cert,std::shared_ptr<java::util::Collection<java::lang::String>> unresCritExts)
{
	
	//    .param p1, "cert"    # Ljava/security/cert/Certificate;
	//    .annotation system Ldalvik/annotation/Signature;
	// 2971        value = {
	// 2972            "(",
	// 2973            "Ljava/security/cert/Certificate;",
	// 2974            "Ljava/util/Collection",
	// 2975            "<",
	// 2976            "Ljava/lang/String;",
	// 2977            ">;)V"
	// 2978        }
	// 2979    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 2982        value = {
	// 2983            Ljava/security/cert/CertPathValidatorException;
	// 2984        }
	// 2985    .end annotation
	//    .local p2, "unresCritExts":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/lang/String;>;"
	cert->checkCast("java::security::cert::X509Certificate");
	//    .end local p1    # "cert":Ljava/security/cert/Certificate;
	this->checkPolicy(cert);
	if ( !(unresCritExts) )  
		goto label_cond_33;
	if ( !(( unresCritExts->isEmpty() ^ 0x1)) )  
		goto label_cond_33;
	unresCritExts->remove(sun::security::x509::PKIXExtensions::CertificatePolicies_Id->toString());
	unresCritExts->remove(sun::security::x509::PKIXExtensions::PolicyMappings_Id->toString());
	unresCritExts->remove(sun::security::x509::PKIXExtensions::PolicyConstraints_Id->toString());
	unresCritExts->remove(sun::security::x509::PKIXExtensions::InhibitAnyPolicy_Id->toString());
label_cond_33:
	return;

}
// .method getPolicyTree()Ljava/security/cert/PolicyNode;
std::shared_ptr<java::security::cert::PolicyNode> sun::security::provider::certpath::PolicyChecker::getPolicyTree()
{
	
	std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> policyTree;
	
	if ( this->rootNode )     
		goto label_cond_6;
	return 0x0;
	// 3061    .line 919
label_cond_6:
	policyTree = this->rootNode->copyTree();
	//    .local v0, "policyTree":Lsun/security/provider/certpath/PolicyNodeImpl;
	policyTree->setImmutable();
	return policyTree;

}
// .method public getSupportedExtensions()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> sun::security::provider::certpath::PolicyChecker::getSupportedExtensions()
{
	
	std::shared_ptr<java::util::HashSet> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 3080        value = {
	// 3081            "()",
	// 3082            "Ljava/util/Set",
	// 3083            "<",
	// 3084            "Ljava/lang/String;",
	// 3085            ">;"
	// 3086        }
	// 3087    .end annotation
	if ( this->supportedExts )     
		goto label_cond_40;
	cVar0 = std::make_shared<java::util::HashSet>(0x4);
	this->supportedExts = cVar0;
	this->supportedExts->add(sun::security::x509::PKIXExtensions::CertificatePolicies_Id->toString());
	this->supportedExts->add(sun::security::x509::PKIXExtensions::PolicyMappings_Id->toString());
	this->supportedExts->add(sun::security::x509::PKIXExtensions::PolicyConstraints_Id->toString());
	this->supportedExts->add(sun::security::x509::PKIXExtensions::InhibitAnyPolicy_Id->toString());
	this->supportedExts = java::util::Collections::unmodifiableSet(this->supportedExts);
label_cond_40:
	return this->supportedExts;

}
// .method public init(Z)V
void sun::security::provider::certpath::PolicyChecker::init(bool forward)
{
	
	int cVar0;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar1;
	int cVar2;
	int cVar3;
	
	//    .param p1, "forward"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 3168        value = {
	// 3169            Ljava/security/cert/CertPathValidatorException;
	// 3170        }
	// 3171    .end annotation
	cVar0 = 0x0;
	if ( !(forward) )  
		goto label_cond_c;
	cVar1 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("forward checking not supported")));
	// throw
	throw cVar1;
	// 3190    .line 125
label_cond_c:
	this->certIndex = 0x1;
	if ( !(this->expPolicyRequired) )  
		goto label_cond_24;
	cVar2 = cVar0;
label_goto_14:
	this->explicitPolicy = cVar2;
	if ( !(this->polMappingInhibited) )  
		goto label_cond_29;
	cVar3 = cVar0;
label_goto_1b:
	this->policyMapping = cVar3;
	if ( !(this->anyPolicyInhibited) )  
		goto label_cond_2e;
label_goto_21:
	this->inhibitAnyPolicy = cVar0;
	return;
	// 3227    .line 126
label_cond_24:
	cVar2 = ( this->certPathLen + 0x1);
	goto label_goto_14;
	// 3235    .line 127
label_cond_29:
	cVar3 = ( this->certPathLen + 0x1);
	goto label_goto_1b;
	// 3243    .line 128
label_cond_2e:
	cVar0 = ( this->certPathLen + 0x1);
	goto label_goto_21;

}
// .method public isForwardCheckingSupported()Z
bool sun::security::provider::certpath::PolicyChecker::isForwardCheckingSupported()
{
	
	return 0x0;

}


