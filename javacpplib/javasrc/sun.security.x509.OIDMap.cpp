// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\OIDMap.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.security.cert.CertificateException.h"
#include "java.util.HashMap.h"
#include "java.util.Map.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AuthorityInfoAccessExtension.h"
#include "sun.security.x509.AuthorityKeyIdentifierExtension.h"
#include "sun.security.x509.BasicConstraintsExtension.h"
#include "sun.security.x509.CRLDistributionPointsExtension.h"
#include "sun.security.x509.CRLNumberExtension.h"
#include "sun.security.x509.CRLReasonCodeExtension.h"
#include "sun.security.x509.CertificateIssuerExtension.h"
#include "sun.security.x509.CertificatePoliciesExtension.h"
#include "sun.security.x509.DeltaCRLIndicatorExtension.h"
#include "sun.security.x509.ExtendedKeyUsageExtension.h"
#include "sun.security.x509.FreshestCRLExtension.h"
#include "sun.security.x509.InhibitAnyPolicyExtension.h"
#include "sun.security.x509.IssuerAlternativeNameExtension.h"
#include "sun.security.x509.IssuingDistributionPointExtension.h"
#include "sun.security.x509.KeyUsageExtension.h"
#include "sun.security.x509.NameConstraintsExtension.h"
#include "sun.security.x509.NetscapeCertTypeExtension.h"
#include "sun.security.x509.OCSPNoCheckExtension.h"
#include "sun.security.x509.OIDMap_S_OIDInfo.h"
#include "sun.security.x509.OIDMap.h"
#include "sun.security.x509.PKIXExtensions.h"
#include "sun.security.x509.PolicyConstraintsExtension.h"
#include "sun.security.x509.PolicyMappingsExtension.h"
#include "sun.security.x509.PrivateKeyUsageExtension.h"
#include "sun.security.x509.SubjectAlternativeNameExtension.h"
#include "sun.security.x509.SubjectInfoAccessExtension.h"
#include "sun.security.x509.SubjectKeyIdentifierExtension.h"

static sun::security::x509::OIDMap::AUTH_INFO_ACCESS = std::make_shared<java::lang::String>("x509.info.extensions.AuthorityInfoAccess");
static sun::security::x509::OIDMap::AUTH_KEY_IDENTIFIER = std::make_shared<java::lang::String>("x509.info.extensions.AuthorityKeyIdentifier");
static sun::security::x509::OIDMap::BASIC_CONSTRAINTS = std::make_shared<java::lang::String>("x509.info.extensions.BasicConstraints");
static sun::security::x509::OIDMap::CERT_ISSUER = std::make_shared<java::lang::String>("x509.info.extensions.CertificateIssuer");
static sun::security::x509::OIDMap::CERT_POLICIES = std::make_shared<java::lang::String>("x509.info.extensions.CertificatePolicies");
static sun::security::x509::OIDMap::CRL_DIST_POINTS = std::make_shared<java::lang::String>("x509.info.extensions.CRLDistributionPoints");
static sun::security::x509::OIDMap::CRL_NUMBER = std::make_shared<java::lang::String>("x509.info.extensions.CRLNumber");
static sun::security::x509::OIDMap::CRL_REASON = std::make_shared<java::lang::String>("x509.info.extensions.CRLReasonCode");
static sun::security::x509::OIDMap::DELTA_CRL_INDICATOR = std::make_shared<java::lang::String>("x509.info.extensions.DeltaCRLIndicator");
static sun::security::x509::OIDMap::EXT_KEY_USAGE = std::make_shared<java::lang::String>("x509.info.extensions.ExtendedKeyUsage");
static sun::security::x509::OIDMap::FRESHEST_CRL = std::make_shared<java::lang::String>("x509.info.extensions.FreshestCRL");
static sun::security::x509::OIDMap::INHIBIT_ANY_POLICY = std::make_shared<java::lang::String>("x509.info.extensions.InhibitAnyPolicy");
static sun::security::x509::OIDMap::ISSUER_ALT_NAME = std::make_shared<java::lang::String>("x509.info.extensions.IssuerAlternativeName");
static sun::security::x509::OIDMap::ISSUING_DIST_POINT = std::make_shared<java::lang::String>("x509.info.extensions.IssuingDistributionPoint");
static sun::security::x509::OIDMap::KEY_USAGE = std::make_shared<java::lang::String>("x509.info.extensions.KeyUsage");
static sun::security::x509::OIDMap::NAME_CONSTRAINTS = std::make_shared<java::lang::String>("x509.info.extensions.NameConstraints");
static sun::security::x509::OIDMap::NETSCAPE_CERT = std::make_shared<java::lang::String>("x509.info.extensions.NetscapeCertType");
static sun::security::x509::OIDMap::NetscapeCertType_data;
static sun::security::x509::OIDMap::OCSPNOCHECK = std::make_shared<java::lang::String>("x509.info.extensions.OCSPNoCheck");
static sun::security::x509::OIDMap::POLICY_CONSTRAINTS = std::make_shared<java::lang::String>("x509.info.extensions.PolicyConstraints");
static sun::security::x509::OIDMap::POLICY_MAPPINGS = std::make_shared<java::lang::String>("x509.info.extensions.PolicyMappings");
static sun::security::x509::OIDMap::PRIVATE_KEY_USAGE = std::make_shared<java::lang::String>("x509.info.extensions.PrivateKeyUsage");
static sun::security::x509::OIDMap::ROOT = std::make_shared<java::lang::String>("x509.info.extensions");
static sun::security::x509::OIDMap::SUBJECT_INFO_ACCESS = std::make_shared<java::lang::String>("x509.info.extensions.SubjectInfoAccess");
static sun::security::x509::OIDMap::SUB_ALT_NAME = std::make_shared<java::lang::String>("x509.info.extensions.SubjectAlternativeName");
static sun::security::x509::OIDMap::SUB_KEY_IDENTIFIER = std::make_shared<java::lang::String>("x509.info.extensions.SubjectKeyIdentifier");
static sun::security::x509::OIDMap::nameMap;
static sun::security::x509::OIDMap::oidMap;
// .method static constructor <clinit>()V
void sun::security::x509::OIDMap::static_cinit()
{
	
	int cVar0;
	std::shared<std::vector<int[]>> cVar1;
	std::shared_ptr<java::util::HashMap> cVar2;
	std::shared_ptr<java::util::HashMap> cVar3;
	std::shared<std::vector<int[]>> cVar4;
	
	cVar0 = 0x7;
	cVar1 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	sun::security::x509::OIDMap::NetscapeCertType_data = cVar1;
	cVar2 = std::make_shared<java::util::HashMap>();
	sun::security::x509::OIDMap::oidMap = cVar2;
	cVar3 = std::make_shared<java::util::HashMap>();
	sun::security::x509::OIDMap::nameMap = cVar3;
	sun::security::x509::OIDMap::addInternal(std::make_shared<java::lang::String>(std::make_shared<char[]>("x509.info.extensions.SubjectKeyIdentifier")), sun::security::x509::PKIXExtensions::SubjectKey_Id, sun::security::x509::SubjectKeyIdentifierExtension());
	sun::security::x509::OIDMap::addInternal(std::make_shared<java::lang::String>(std::make_shared<char[]>("x509.info.extensions.KeyUsage")), sun::security::x509::PKIXExtensions::KeyUsage_Id, sun::security::x509::KeyUsageExtension());
	sun::security::x509::OIDMap::addInternal(std::make_shared<java::lang::String>(std::make_shared<char[]>("x509.info.extensions.PrivateKeyUsage")), sun::security::x509::PKIXExtensions::PrivateKeyUsage_Id, sun::security::x509::PrivateKeyUsageExtension());
	sun::security::x509::OIDMap::addInternal(std::make_shared<java::lang::String>(std::make_shared<char[]>("x509.info.extensions.SubjectAlternativeName")), sun::security::x509::PKIXExtensions::SubjectAlternativeName_Id, sun::security::x509::SubjectAlternativeNameExtension());
	sun::security::x509::OIDMap::addInternal(std::make_shared<java::lang::String>(std::make_shared<char[]>("x509.info.extensions.IssuerAlternativeName")), sun::security::x509::PKIXExtensions::IssuerAlternativeName_Id, sun::security::x509::IssuerAlternativeNameExtension());
	sun::security::x509::OIDMap::addInternal(std::make_shared<java::lang::String>(std::make_shared<char[]>("x509.info.extensions.BasicConstraints")), sun::security::x509::PKIXExtensions::BasicConstraints_Id, sun::security::x509::BasicConstraintsExtension());
	sun::security::x509::OIDMap::addInternal(std::make_shared<java::lang::String>(std::make_shared<char[]>("x509.info.extensions.CRLNumber")), sun::security::x509::PKIXExtensions::CRLNumber_Id, sun::security::x509::CRLNumberExtension());
	sun::security::x509::OIDMap::addInternal(std::make_shared<java::lang::String>(std::make_shared<char[]>("x509.info.extensions.CRLReasonCode")), sun::security::x509::PKIXExtensions::ReasonCode_Id, sun::security::x509::CRLReasonCodeExtension());
	sun::security::x509::OIDMap::addInternal(std::make_shared<java::lang::String>(std::make_shared<char[]>("x509.info.extensions.NameConstraints")), sun::security::x509::PKIXExtensions::NameConstraints_Id, sun::security::x509::NameConstraintsExtension());
	sun::security::x509::OIDMap::addInternal(std::make_shared<java::lang::String>(std::make_shared<char[]>("x509.info.extensions.PolicyMappings")), sun::security::x509::PKIXExtensions::PolicyMappings_Id, sun::security::x509::PolicyMappingsExtension());
	sun::security::x509::OIDMap::addInternal(std::make_shared<java::lang::String>(std::make_shared<char[]>("x509.info.extensions.AuthorityKeyIdentifier")), sun::security::x509::PKIXExtensions::AuthorityKey_Id, sun::security::x509::AuthorityKeyIdentifierExtension());
	sun::security::x509::OIDMap::addInternal(std::make_shared<java::lang::String>(std::make_shared<char[]>("x509.info.extensions.PolicyConstraints")), sun::security::x509::PKIXExtensions::PolicyConstraints_Id, sun::security::x509::PolicyConstraintsExtension());
	cVar4 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	sun::security::x509::OIDMap::addInternal(std::make_shared<java::lang::String>(std::make_shared<char[]>("x509.info.extensions.NetscapeCertType")), sun::security::util::ObjectIdentifier::newInternal(cVar4), sun::security::x509::NetscapeCertTypeExtension());
	sun::security::x509::OIDMap::addInternal(std::make_shared<java::lang::String>(std::make_shared<char[]>("x509.info.extensions.CertificatePolicies")), sun::security::x509::PKIXExtensions::CertificatePolicies_Id, sun::security::x509::CertificatePoliciesExtension());
	sun::security::x509::OIDMap::addInternal(std::make_shared<java::lang::String>(std::make_shared<char[]>("x509.info.extensions.ExtendedKeyUsage")), sun::security::x509::PKIXExtensions::ExtendedKeyUsage_Id, sun::security::x509::ExtendedKeyUsageExtension());
	sun::security::x509::OIDMap::addInternal(std::make_shared<java::lang::String>(std::make_shared<char[]>("x509.info.extensions.InhibitAnyPolicy")), sun::security::x509::PKIXExtensions::InhibitAnyPolicy_Id, sun::security::x509::InhibitAnyPolicyExtension());
	sun::security::x509::OIDMap::addInternal(std::make_shared<java::lang::String>(std::make_shared<char[]>("x509.info.extensions.CRLDistributionPoints")), sun::security::x509::PKIXExtensions::CRLDistributionPoints_Id, sun::security::x509::CRLDistributionPointsExtension());
	sun::security::x509::OIDMap::addInternal(std::make_shared<java::lang::String>(std::make_shared<char[]>("x509.info.extensions.CertificateIssuer")), sun::security::x509::PKIXExtensions::CertificateIssuer_Id, sun::security::x509::CertificateIssuerExtension());
	sun::security::x509::OIDMap::addInternal(std::make_shared<java::lang::String>(std::make_shared<char[]>("x509.info.extensions.SubjectInfoAccess")), sun::security::x509::PKIXExtensions::SubjectInfoAccess_Id, sun::security::x509::SubjectInfoAccessExtension());
	sun::security::x509::OIDMap::addInternal(std::make_shared<java::lang::String>(std::make_shared<char[]>("x509.info.extensions.AuthorityInfoAccess")), sun::security::x509::PKIXExtensions::AuthInfoAccess_Id, sun::security::x509::AuthorityInfoAccessExtension());
	sun::security::x509::OIDMap::addInternal(std::make_shared<java::lang::String>(std::make_shared<char[]>("x509.info.extensions.IssuingDistributionPoint")), sun::security::x509::PKIXExtensions::IssuingDistributionPoint_Id, sun::security::x509::IssuingDistributionPointExtension());
	sun::security::x509::OIDMap::addInternal(std::make_shared<java::lang::String>(std::make_shared<char[]>("x509.info.extensions.DeltaCRLIndicator")), sun::security::x509::PKIXExtensions::DeltaCRLIndicator_Id, sun::security::x509::DeltaCRLIndicatorExtension());
	sun::security::x509::OIDMap::addInternal(std::make_shared<java::lang::String>(std::make_shared<char[]>("x509.info.extensions.FreshestCRL")), sun::security::x509::PKIXExtensions::FreshestCRL_Id, sun::security::x509::FreshestCRLExtension());
	sun::security::x509::OIDMap::addInternal(std::make_shared<java::lang::String>(std::make_shared<char[]>("x509.info.extensions.OCSPNoCheck")), sun::security::x509::PKIXExtensions::OCSPNoCheck_Id, sun::security::x509::OCSPNoCheckExtension());
	return;
	// 397    .line 107
	// 398    :array_10e
	// 399    .array-data 4
	// 400        0x2
	// 401        0x10
	// 402        0x348
	// 403        0x1
	// 404        0x1bc42
	// 405        0x1
	// 406        0x1
	// 407    .end array-data
	// 409    .line 145
	// 410    :array_120
	// 411    .array-data 4
	// 412        0x2
	// 413        0x10
	// 414        0x348
	// 415        0x1
	// 416        0x1bc42
	// 417        0x1
	// 418        0x1
	// 419    .end array-data

}
// .method private constructor <init>()V
sun::security::x509::OIDMap::OIDMap()
{
	
	// 427    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static addAttribute(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Class;)V
void sun::security::x509::OIDMap::addAttribute(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::String> oid,std::shared_ptr<java::lang::Class<java::lang::Object>> clazz)
{
	
	std::shared_ptr<java::security::cert::CertificateException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<sun::security::util::ObjectIdentifier> objId;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<sun::security::x509::OIDMap_S_OIDInfo> info;
	std::shared_ptr<java::security::cert::CertificateException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::security::cert::CertificateException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	
	//    .param p0, "name"    # Ljava/lang/String;
	//    .param p1, "oid"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 438        value = {
	// 439            "(",
	// 440            "Ljava/lang/String;",
	// 441            "Ljava/lang/String;",
	// 442            "Ljava/lang/Class",
	// 443            "<*>;)V"
	// 444        }
	// 445    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 448        value = {
	// 449            Ljava/security/cert/CertificateException;
	// 450        }
	// 451    .end annotation
	//    .local p2, "clazz":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	try {
	//label_try_start_0:
	objId = std::make_shared<sun::security::util::ObjectIdentifier>(oid);
	//label_try_end_5:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2c;
	}
	//    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_5} :catch_2c
	//    .local v2, "objId":Lsun/security/util/ObjectIdentifier;
	info = std::make_shared<sun::security::x509::OIDMap_S_OIDInfo>(name, objId, clazz);
	//    .local v0, "info":Lsun/security/x509/OIDMap$OIDInfo;
	if ( !(sun::security::x509::OIDMap::oidMap->put(objId, info)) )  
		goto label_cond_47;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::security::cert::CertificateException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Object identifier already exists: ")))->append(oid)->toString());
	// throw
	throw cVar0;
	// 506    .line 222
	// 507    .end local v0    # "info":Lsun/security/x509/OIDMap$OIDInfo;
	// 508    .end local v2    # "objId":Lsun/security/util/ObjectIdentifier;
label_catch_2c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "ioe":Ljava/io/IOException;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::security::cert::CertificateException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid Object identifier: ")))->append(oid)->toString());
	// throw
	throw cVar2;
	// 540    .line 231
	// 541    .end local v1    # "ioe":Ljava/io/IOException;
	// 542    .restart local v0    # "info":Lsun/security/x509/OIDMap$OIDInfo;
	// 543    .restart local v2    # "objId":Lsun/security/util/ObjectIdentifier;
label_cond_47:
	if ( !(sun::security::x509::OIDMap::nameMap->put(name, info)) )  
		goto label_cond_69;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = std::make_shared<java::security::cert::CertificateException>(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Name already exists: ")))->append(name)->toString());
	// throw
	throw cVar4;
	// 578    .line 234
label_cond_69:
	return;

}
// .method private static addInternal(Ljava/lang/String;Lsun/security/util/ObjectIdentifier;Ljava/lang/Class;)V
void sun::security::x509::OIDMap::addInternal(std::shared_ptr<java::lang::String> name,std::shared_ptr<sun::security::util::ObjectIdentifier> oid,std::shared_ptr<java::lang::Class> clazz)
{
	
	std::shared_ptr<sun::security::x509::OIDMap_S_OIDInfo> info;
	
	//    .param p0, "name"    # Ljava/lang/String;
	//    .param p1, "oid"    # Lsun/security/util/ObjectIdentifier;
	//    .param p2, "clazz"    # Ljava/lang/Class;
	info = std::make_shared<sun::security::x509::OIDMap_S_OIDInfo>(name, oid, clazz);
	//    .local v0, "info":Lsun/security/x509/OIDMap$OIDInfo;
	sun::security::x509::OIDMap::oidMap->put(oid, info);
	sun::security::x509::OIDMap::nameMap->put(name, info);
	return;

}
// .method public static getClass(Ljava/lang/String;)Ljava/lang/Class;
std::shared_ptr<java::lang::Class<java::lang::Object>> sun::security::x509::OIDMap::getClass(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::lang::Class> cVar0;
	std::shared_ptr<sun::security::x509::OIDMap_S_OIDInfo> info;
	
	//    .param p0, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 614        value = {
	// 615            "(",
	// 616            "Ljava/lang/String;",
	// 617            ")",
	// 618            "Ljava/lang/Class",
	// 619            "<*>;"
	// 620        }
	// 621    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 624        value = {
	// 625            Ljava/security/cert/CertificateException;
	// 626        }
	// 627    .end annotation
	cVar0 = 0x0;
	info = sun::security::x509::OIDMap::nameMap->get(name);
	info->checkCast("sun::security::x509::OIDMap_S_OIDInfo");
	//    .local v0, "info":Lsun/security/x509/OIDMap$OIDInfo;
	if ( info )     
		goto label_cond_c;
label_goto_b:
	return cVar0;
label_cond_c:
	cVar0 = info->getClazz();
	goto label_goto_b;

}
// .method public static getClass(Lsun/security/util/ObjectIdentifier;)Ljava/lang/Class;
std::shared_ptr<java::lang::Class<java::lang::Object>> sun::security::x509::OIDMap::getClass(std::shared_ptr<sun::security::util::ObjectIdentifier> oid)
{
	
	std::shared_ptr<java::lang::Class> cVar0;
	std::shared_ptr<sun::security::x509::OIDMap_S_OIDInfo> info;
	
	//    .param p0, "oid"    # Lsun/security/util/ObjectIdentifier;
	//    .annotation system Ldalvik/annotation/Signature;
	// 660        value = {
	// 661            "(",
	// 662            "Lsun/security/util/ObjectIdentifier;",
	// 663            ")",
	// 664            "Ljava/lang/Class",
	// 665            "<*>;"
	// 666        }
	// 667    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 670        value = {
	// 671            Ljava/security/cert/CertificateException;
	// 672        }
	// 673    .end annotation
	cVar0 = 0x0;
	info = sun::security::x509::OIDMap::oidMap->get(oid);
	info->checkCast("sun::security::x509::OIDMap_S_OIDInfo");
	//    .local v0, "info":Lsun/security/x509/OIDMap$OIDInfo;
	if ( info )     
		goto label_cond_c;
label_goto_b:
	return cVar0;
label_cond_c:
	cVar0 = info->getClazz();
	goto label_goto_b;

}
// .method public static getName(Lsun/security/util/ObjectIdentifier;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::OIDMap::getName(std::shared_ptr<sun::security::util::ObjectIdentifier> oid)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<sun::security::x509::OIDMap_S_OIDInfo> info;
	
	//    .param p0, "oid"    # Lsun/security/util/ObjectIdentifier;
	cVar0 = 0x0;
	info = sun::security::x509::OIDMap::oidMap->get(oid);
	info->checkCast("sun::security::x509::OIDMap_S_OIDInfo");
	//    .local v0, "info":Lsun/security/x509/OIDMap$OIDInfo;
	if ( info )     
		goto label_cond_c;
label_goto_b:
	return cVar0;
label_cond_c:
	cVar0 = info->name;
	goto label_goto_b;

}
// .method public static getOID(Ljava/lang/String;)Lsun/security/util/ObjectIdentifier;
std::shared_ptr<sun::security::util::ObjectIdentifier> sun::security::x509::OIDMap::getOID(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<sun::security::util::ObjectIdentifier> cVar0;
	std::shared_ptr<sun::security::x509::OIDMap_S_OIDInfo> info;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = 0x0;
	info = sun::security::x509::OIDMap::nameMap->get(name);
	info->checkCast("sun::security::x509::OIDMap_S_OIDInfo");
	//    .local v0, "info":Lsun/security/x509/OIDMap$OIDInfo;
	if ( info )     
		goto label_cond_c;
label_goto_b:
	return cVar0;
label_cond_c:
	cVar0 = info->oid;
	goto label_goto_b;

}


