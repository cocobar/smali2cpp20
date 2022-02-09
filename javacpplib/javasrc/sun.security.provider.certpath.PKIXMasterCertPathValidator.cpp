// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\PKIXMasterCertPathValidator.smali
#include "java2ctype.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.security.cert.CertPath.h"
#include "java.security.cert.CertPathValidatorException_S_Reason.h"
#include "java.security.cert.CertPathValidatorException.h"
#include "java.security.cert.PKIXCertPathChecker.h"
#include "java.security.cert.PKIXReason.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "java.util.Set.h"
#include "java.util.StringJoiner.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.security.provider.certpath.PKIXMasterCertPathValidator.h"
#include "sun.security.util.Debug.h"

static sun::security::provider::certpath::PKIXMasterCertPathValidator::debug;
// .method static constructor <clinit>()V
void sun::security::provider::certpath::PKIXMasterCertPathValidator::static_cinit()
{
	
	sun::security::provider::certpath::PKIXMasterCertPathValidator::debug = sun::security::util::Debug::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("certpath")));
	return;

}
// .method constructor <init>()V
sun::security::provider::certpath::PKIXMasterCertPathValidator::PKIXMasterCertPathValidator()
{
	
	// 033    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method static validate(Ljava/security/cert/CertPath;Ljava/util/List;Ljava/util/List;)V
void sun::security::provider::certpath::PKIXMasterCertPathValidator::validate(std::shared_ptr<java::security::cert::CertPath> cpOriginal,std::shared_ptr<java::util::List<java::security::cert::X509Certificate>> reversedCertList,std::shared_ptr<java::util::List<java::security::cert::PKIXCertPathChecker>> certPathCheckers)
{
	
	int cpSize;
	int i;
	std::shared_ptr<java::security::cert::X509Certificate> currCert;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::util::Set> unresCritExts;
	std::shared_ptr<java::util::StringJoiner> joiner;
	std::shared_ptr<java::util::Iterator> oid_S_iterator;
	std::shared_ptr<java::lang::String> oid;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	int j;
	std::shared_ptr<java::security::cert::PKIXCertPathChecker> currChecker;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cpve;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar4;
	std::shared_ptr<java::lang::Throwable> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar7;
	std::shared_ptr<java::lang::StringBuilder> cVar8;
	
	//    .param p0, "cpOriginal"    # Ljava/security/cert/CertPath;
	//    .annotation system Ldalvik/annotation/Signature;
	// 042        value = {
	// 043            "(",
	// 044            "Ljava/security/cert/CertPath;",
	// 045            "Ljava/util/List",
	// 046            "<",
	// 047            "Ljava/security/cert/X509Certificate;",
	// 048            ">;",
	// 049            "Ljava/util/List",
	// 050            "<",
	// 051            "Ljava/security/cert/PKIXCertPathChecker;",
	// 052            ">;)V"
	// 053        }
	// 054    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 057        value = {
	// 058            Ljava/security/cert/CertPathValidatorException;
	// 059        }
	// 060    .end annotation
	//    .local p1, "reversedCertList":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/X509Certificate;>;"
	//    .local p2, "certPathCheckers":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/PKIXCertPathChecker;>;"
	cpSize = reversedCertList->size();
	//    .local v7, "cpSize":I
	if ( !(sun::security::provider::certpath::PKIXMasterCertPathValidator::debug) )  
		goto label_cond_18;
	sun::security::provider::certpath::PKIXMasterCertPathValidator::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("--------------------------------------------------------------")));
	sun::security::provider::certpath::PKIXMasterCertPathValidator::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Executing PKIX certification path validation algorithm.")));
label_cond_18:
	i = 0x0;
	//    .local v11, "i":I
label_goto_19:
	if ( i >= cpSize )
		goto label_cond_185;
	currCert = reversedCertList->get(i);
	currCert->checkCast("java::security::cert::X509Certificate");
	//    .local v9, "currCert":Ljava/security/cert/X509Certificate;
	if ( !(sun::security::provider::certpath::PKIXMasterCertPathValidator::debug) )  
		goto label_cond_51;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::PKIXMasterCertPathValidator::debug->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Checking cert")))->append(( i + 0x1))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" - Subject: ")))->append(currCert->getSubjectX500Principal())->toString());
label_cond_51:
	unresCritExts = currCert->getCriticalExtensionOIDs();
	//    .local v16, "unresCritExts":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	if ( unresCritExts )     
		goto label_cond_5b;
	unresCritExts = java::util::Collections::emptySet({const[class].FS-Param});
label_cond_5b:
	if ( !(sun::security::provider::certpath::PKIXMasterCertPathValidator::debug) )  
		goto label_cond_a6;
	if ( !(( unresCritExts->isEmpty() ^ 0x1)) )  
		goto label_cond_a6;
	joiner = std::make_shared<java::util::StringJoiner>(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")), std::make_shared<java::lang::String>(std::make_shared<char[]>("{")), std::make_shared<java::lang::String>(std::make_shared<char[]>("}")));
	//    .local v13, "joiner":Ljava/util/StringJoiner;
	oid_S_iterator = unresCritExts->iterator();
	//    .local v15, "oid$iterator":Ljava/util/Iterator;
label_goto_79:
	if ( !(oid_S_iterator->hasNext()) )  
		goto label_cond_89;
	oid = oid_S_iterator->next();
	oid->checkCast("java::lang::String");
	//    .local v14, "oid":Ljava/lang/String;
	joiner->add(oid);
	goto label_goto_79;
	// 220    .line 109
	// 221    .end local v14    # "oid":Ljava/lang/String;
label_cond_89:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::PKIXMasterCertPathValidator::debug->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Set of critical extensions: ")))->append(joiner->toString())->toString());
	//    .end local v13    # "joiner":Ljava/util/StringJoiner;
	//    .end local v15    # "oid$iterator":Ljava/util/Iterator;
label_cond_a6:
	j = 0x0;
	//    .local v12, "j":I
label_goto_a7:
	if ( j >= certPathCheckers->size() )
		goto label_cond_143;
	currChecker = certPathCheckers->get(j);
	currChecker->checkCast("java::security::cert::PKIXCertPathChecker");
	//    .local v10, "currChecker":Ljava/security/cert/PKIXCertPathChecker;
	if ( !(sun::security::provider::certpath::PKIXMasterCertPathValidator::debug) )  
		goto label_cond_ee;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::PKIXMasterCertPathValidator::debug->println(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-Using checker")))->append(( j + 0x1))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ... [")))->append(currChecker->getClass()->getName())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]")))->toString());
label_cond_ee:
	if ( i )     
		goto label_cond_f4;
	currChecker->init(0x0);
label_cond_f4:
	try {
	//label_try_start_f4:
	currChecker->check(currCert, unresCritExts);
	if ( !(sun::security::provider::certpath::PKIXMasterCertPathValidator::debug) )  
		goto label_cond_11f;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::PKIXMasterCertPathValidator::debug->println(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-checker")))->append(( j + 0x1))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" validation succeeded")))->toString());
	//label_try_end_11f:
	}
	catch (java::security::cert::CertPathValidatorException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_122;
	}
	//    .catch Ljava/security/cert/CertPathValidatorException; {:try_start_f4 .. :try_end_11f} :catch_122
label_cond_11f:
	j = ( j + 0x1);
	goto label_goto_a7;
	// 395    .line 132
label_catch_122:
	// move-exception
	cpve = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v8, "cpve":Ljava/security/cert/CertPathValidatorException;
	if ( !(cpve->getCause()) )  
		goto label_cond_141;
	cVar5 = cpve->getCause();
label_goto_133:
	cVar4 = std::make_shared<java::security::cert::CertPathValidatorException>(cpve->getMessage(), cVar5, cpOriginal, (cpSize - ( i + 0x1)), cpve->getReason());
	// throw
	throw cVar4;
label_cond_141:
	cVar5 = cpve;
	goto label_goto_133;
	// 441    .line 139
	// 442    .end local v8    # "cpve":Ljava/security/cert/CertPathValidatorException;
	// 443    .end local v10    # "currChecker":Ljava/security/cert/PKIXCertPathChecker;
label_cond_143:
	if ( unresCritExts->isEmpty() )     
		goto label_cond_15b;
	cVar7 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("unrecognized critical extension(s)")), 0x0, cpOriginal, (cpSize - ( i + 0x1)), java::security::cert::PKIXReason::UNRECOGNIZED_CRIT_EXT);
	// throw
	throw cVar7;
	// 474    .line 145
label_cond_15b:
	if ( !(sun::security::provider::certpath::PKIXMasterCertPathValidator::debug) )  
		goto label_cond_181;
	cVar8 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::PKIXMasterCertPathValidator::debug->println(cVar8->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\ncert")))->append(( i + 0x1))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" validation succeeded.\n")))->toString());
label_cond_181:
	i = ( i + 0x1);
	goto label_goto_19;
	// 517    .line 149
	// 518    .end local v9    # "currCert":Ljava/security/cert/X509Certificate;
	// 519    .end local v12    # "j":I
	// 520    .end local v16    # "unresCritExts":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_cond_185:
	if ( !(sun::security::provider::certpath::PKIXMasterCertPathValidator::debug) )  
		goto label_cond_199;
	sun::security::provider::certpath::PKIXMasterCertPathValidator::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Cert path validation succeeded. (PKIX validation algorithm)")));
	sun::security::provider::certpath::PKIXMasterCertPathValidator::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("--------------------------------------------------------------")));
label_cond_199:
	return;

}


