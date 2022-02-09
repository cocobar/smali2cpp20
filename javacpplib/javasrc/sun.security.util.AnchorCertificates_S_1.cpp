// CPP L:\smali2cpp20\x64\Release\out\sun\security\util\AnchorCertificates$1.smali
#include "java2ctype.h"
#include "java.io.File.h"
#include "java.io.FileInputStream.h"
#include "java.lang.Exception.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.lang.Throwable.h"
#include "java.lang.Void.h"
#include "java.security.KeyStore.h"
#include "java.security.cert.Certificate.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Enumeration.h"
#include "java.util.HashSet.h"
#include "sun.security.util.AnchorCertificates_S_1.h"
#include "sun.security.util.AnchorCertificates.h"
#include "sun.security.util.Debug.h"
#include "sun.security.x509.X509CertImpl.h"

// .method constructor <init>()V
sun::security::util::AnchorCertificates_S_1::AnchorCertificates_S_1()
{
	
	// 036    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public run()Ljava/lang/Void;
std::shared_ptr<java::lang::Void> sun::security::util::AnchorCertificates_S_1::run()
{
	
	std::shared_ptr<java::lang::Void> cVar0;
	std::shared_ptr<java::io::File> f;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::security::KeyStore> cacerts;
	std::shared_ptr<java::io::FileInputStream> fis;
	std::shared_ptr<java::lang::Object> cVar13;
	std::shared_ptr<java::lang::Throwable> cVar8;
	std::shared_ptr<java::lang::Object> cVar4;
	std::shared_ptr<java::lang::Throwable> cVar7;
	std::shared_ptr<java::lang::Object> catchall;
	std::shared_ptr<java::util::HashSet> cVar1;
	std::shared_ptr<java::util::Enumeration> list;
	std::shared_ptr<java::lang::String> alias;
	std::shared_ptr<java::security::cert::X509Certificate> cert;
	std::shared_ptr<java::lang::Object> cVar6;
	
	cVar0 = 0x0;
	f = std::make_shared<java::io::File>(java::lang::System::getProperty(std::make_shared<java::lang::String>(std::make_shared<char[]>("java.home"))), std::make_shared<java::lang::String>(std::make_shared<char[]>("lib/security/cacerts")));
	//    .local v4, "f":Ljava/io/File;
	try {
	//label_try_start_10:
	//label_try_end_16:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_66;
	}
	//    .catch Ljava/lang/Exception; {:try_start_10 .. :try_end_16} :catch_66
	cacerts = java::security::KeyStore::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("JKS")));
	//    .local v1, "cacerts":Ljava/security/KeyStore;
	fis = 0x0;
	//    .local v5, "fis":Ljava/io/FileInputStream;
	try {
	//label_try_start_18:
	fis = std::make_shared<java::io::FileInputStream>(f);
	//label_try_end_1d:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_99;
	}
	catch (...){
		goto label_catchall_92;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_18 .. :try_end_1d} :catch_99
	//    .catchall {:try_start_18 .. :try_end_1d} :catchall_92
	//    .end local v5    # "fis":Ljava/io/FileInputStream;
	//    .local v6, "fis":Ljava/io/FileInputStream;
	try {
	//label_try_start_1e:
	cacerts->load(fis, 0x0);
	cVar1 = std::make_shared<java::util::HashSet>();
	sun::security::util::AnchorCertificates::-set0(cVar1);
	list = cacerts->aliases();
	//    .local v7, "list":Ljava/util/Enumeration;, "Ljava/util/Enumeration<Ljava/lang/String;>;"
label_cond_2d:
label_goto_2d:
	if ( !(list->hasMoreElements()) )  
		goto label_cond_7b;
	alias = list->nextElement();
	alias->checkCast("java::lang::String");
	//    .local v0, "alias":Ljava/lang/String;
	if ( !(alias->contains(std::make_shared<java::lang::String>(std::make_shared<char[]>(" [jdk")))) )  
		goto label_cond_2d;
	cert = cacerts->getCertificate(alias);
	cert->checkCast("java::security::cert::X509Certificate");
	//    .local v2, "cert":Ljava/security/cert/X509Certificate;
	sun::security::util::AnchorCertificates::-get0({const[class].FS-Param})->add(sun::security::x509::X509CertImpl::getFingerprint(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA-256")), cert));
	//label_try_end_56:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_57;
	}
	catch (...){
		goto label_catchall_95;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_1e .. :try_end_56} :catch_57
	//    .catchall {:try_start_1e .. :try_end_56} :catchall_95
	goto label_goto_2d;
	// 174    .line 72
	// 175    .end local v0    # "alias":Ljava/lang/String;
	// 176    .end local v2    # "cert":Ljava/security/cert/X509Certificate;
	// 177    .end local v7    # "list":Ljava/util/Enumeration;, "Ljava/util/Enumeration<Ljava/lang/String;>;"
label_catch_57:
	// move-exception
	cVar13 = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	fis;
	//    .end local v6    # "fis":Ljava/io/FileInputStream;
label_goto_59:
	try {
	//label_try_start_59:
	// throw
	throw cVar13;
	// 187    :try_end_5a
	// 188    .catchall {:try_start_59 .. :try_end_5a} :catchall_5a
label_catchall_5a:
	// move-exception
	
	tryCatchExcetionList.pop_back();
	cVar8 = cVar13;
	cVar4 = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
label_goto_5e:
	if ( !(fis) )  
		goto label_cond_63;
	try {
	//label_try_start_60:
	fis->close();
	//label_try_end_63:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_86;
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_66;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_60 .. :try_end_63} :catch_86
	//    .catch Ljava/lang/Exception; {:try_start_60 .. :try_end_63} :catch_66
label_cond_63:
label_goto_63:
	if ( !(cVar8) )  
		goto label_cond_91;
	try {
	//label_try_start_65:
	// throw
	throw cVar8;
	// 214    :try_end_66
	// 215    .catch Ljava/lang/Exception; {:try_start_65 .. :try_end_66} :catch_66
	// 217    .line 73
	// 218    .end local v1    # "cacerts":Ljava/security/KeyStore;
label_catch_66:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v3, "e":Ljava/lang/Exception;
	if ( !(sun::security::util::AnchorCertificates::-get1({const[class].FS-Param})) )  
		goto label_cond_77;
	sun::security::util::AnchorCertificates::-get1({const[class].FS-Param})->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Error parsing cacerts")));
label_cond_77:
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .end local v3    # "e":Ljava/lang/Exception;
label_cond_7a:
	return cVar0;
	// 248    .line 72
	// 249    .restart local v1    # "cacerts":Ljava/security/KeyStore;
	// 250    .restart local v6    # "fis":Ljava/io/FileInputStream;
	// 251    .restart local v7    # "list":Ljava/util/Enumeration;, "Ljava/util/Enumeration<Ljava/lang/String;>;"
label_cond_7b:
	if ( !(fis) )  
		goto label_cond_80;
	try {
	//label_try_start_7d:
	fis->close();
	//label_try_end_80:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_84;
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_66;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_7d .. :try_end_80} :catch_84
	//    .catch Ljava/lang/Exception; {:try_start_7d .. :try_end_80} :catch_66
label_cond_80:
	cVar6 = cVar0;
label_goto_81:
	if ( !(cVar6) )  
		goto label_cond_7a;
	try {
	//label_try_start_83:
	// throw
	throw cVar6;
label_catch_84:
	// move-exception
	cVar6 = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_81;
	// 275    .end local v6    # "fis":Ljava/io/FileInputStream;
	// 276    .end local v7    # "list":Ljava/util/Enumeration;, "Ljava/util/Enumeration<Ljava/lang/String;>;"
label_catch_86:
	// move-exception
	cVar7 = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	if ( cVar8 )     
		goto label_cond_8b;
	cVar8 = cVar7;
	goto label_goto_63;
label_cond_8b:
	if ( cVar8 == cVar7 )
		goto label_cond_63;
	cVar8->addSuppressed(cVar7);
	goto label_goto_63;
label_cond_91:
	// throw
	throw cVar4;
	// 295    :try_end_92
	// 296    .catch Ljava/lang/Exception; {:try_start_83 .. :try_end_92} :catch_66
	// 298    .restart local v5    # "fis":Ljava/io/FileInputStream;
label_catchall_92:
	// move-exception
	catchall = tryCatchExcetionList.back();
	cVar8 = cVar0;
	goto label_goto_5e;
	// 306    .end local v5    # "fis":Ljava/io/FileInputStream;
	// 307    .restart local v6    # "fis":Ljava/io/FileInputStream;
label_catchall_95:
	// move-exception
	catchall = tryCatchExcetionList.back();
	//    .end local v6    # "fis":Ljava/io/FileInputStream;
	//    .local v5, "fis":Ljava/io/FileInputStream;
	cVar8 = cVar0;
	goto label_goto_5e;
	// 319    .local v5, "fis":Ljava/io/FileInputStream;
label_catch_99:
	// move-exception
	cVar13 = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_59;

}


