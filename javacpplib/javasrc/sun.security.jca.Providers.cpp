// CPP L:\smali2cpp20\x64\Release\out\sun\security\jca\Providers.smali
#include "java2ctype.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Class.h"
#include "java.lang.Exception.h"
#include "java.lang.InheritableThreadLocal.h"
#include "java.lang.Object.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.ThreadLocal.h"
#include "java.lang.Throwable.h"
#include "java.security.Provider.h"
#include "sun.security.jca.ProviderList.h"
#include "sun.security.jca.Providers.h"
#include "sun.security.util.Debug.h"

static sun::security::jca::Providers::BACKUP_PROVIDER_CLASSNAME = std::make_shared<java::lang::String>("sun.security.provider.VerificationProvider");
static sun::security::jca::Providers::jarVerificationProviders;
static sun::security::jca::Providers::providerList;
static sun::security::jca::Providers::threadLists;
static sun::security::jca::Providers::threadListsUsed;
// .method static constructor <clinit>()V
void sun::security::jca::Providers::static_cinit()
{
	
	std::shared_ptr<java::lang::InheritableThreadLocal> cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar2;
	
	cVar0 = std::make_shared<java::lang::InheritableThreadLocal>();
	sun::security::jca::Providers::threadLists = cVar0;
	sun::security::jca::Providers::providerList = sun::security::jca::ProviderList::EMPTY;
	sun::security::jca::Providers::providerList = sun::security::jca::ProviderList::fromSecurityProperties({const[class].FS-Param});
	//    .local v0, "numConfiguredProviders":I
	sun::security::jca::Providers::providerList = sun::security::jca::Providers::providerList->removeInvalid();
	if ( sun::security::jca::Providers::providerList->size() == sun::security::jca::Providers::providerList->size() )
		goto label_cond_30;
	cVar1 = std::make_shared<java::lang::AssertionError>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unable to configure default providers")));
	// throw
	throw cVar1;
	// 087    .line 95
label_cond_30:
	cVar2 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar2[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("com.android.org.conscrypt.OpenSSLProvider"));
	cVar2[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("com.android.org.bouncycastle.jce.provider.BouncyCastleProvider"));
	cVar2[0x2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("com.android.org.conscrypt.JSSEProvider"));
	cVar2[0x3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("sun.security.provider.VerificationProvider"));
	sun::security::jca::Providers::jarVerificationProviders = cVar2;
	return;

}
// .method private constructor <init>()V
sun::security::jca::Providers::Providers()
{
	
	// 133    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static declared-synchronized beginThreadProviderList(Lsun/security/jca/ProviderList;)Lsun/security/jca/ProviderList;
std::shared_ptr<sun::security::jca::ProviderList> sun::security::jca::Providers::beginThreadProviderList(std::shared_ptr<sun::security::jca::ProviderList> list)
{
	
	std::shared_ptr<sun::security::jca::Providers> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<sun::security::jca::ProviderList> oldList;
	
	//    .param p0, "list"    # Lsun/security/jca/ProviderList;
	cVar0 = sun::security::jca::Providers();
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	if ( !(sun::security::jca::ProviderList::debug) )  
		goto label_cond_20;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	sun::security::jca::ProviderList::debug->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("ThreadLocal providers: ")))->append(list)->toString());
label_cond_20:
	oldList = sun::security::jca::Providers::threadLists->get();
	oldList->checkCast("sun::security::jca::ProviderList");
	//    .local v0, "oldList":Lsun/security/jca/ProviderList;
	sun::security::jca::Providers::threadListsUsed = ( sun::security::jca::Providers::threadListsUsed + 0x1);
	sun::security::jca::Providers::threadLists->set(list);
	//label_try_end_33:
	}
	catch (...){
		goto label_catchall_35;
	}
	//    .catchall {:try_start_3 .. :try_end_33} :catchall_35
	cVar0->monitor_exit();
	return oldList;
	// 207    .end local v0    # "oldList":Lsun/security/jca/ProviderList;
label_catchall_35:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method private static changeThreadProviderList(Lsun/security/jca/ProviderList;)V
void sun::security::jca::Providers::changeThreadProviderList(std::shared_ptr<sun::security::jca::ProviderList> list)
{
	
	//    .param p0, "list"    # Lsun/security/jca/ProviderList;
	sun::security::jca::Providers::threadLists->set(list);
	return;

}
// .method public static declared-synchronized endThreadProviderList(Lsun/security/jca/ProviderList;)V
void sun::security::jca::Providers::endThreadProviderList(std::shared_ptr<sun::security::jca::ProviderList> list)
{
	
	std::shared_ptr<sun::security::jca::Providers> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "list"    # Lsun/security/jca/ProviderList;
	cVar0 = sun::security::jca::Providers();
	cVar0->monitor_enter();
	if ( list )     
		goto label_cond_1e;
	try {
	//label_try_start_5:
	if ( !(sun::security::jca::ProviderList::debug) )  
		goto label_cond_11;
	sun::security::jca::ProviderList::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Disabling ThreadLocal providers")));
label_cond_11:
	sun::security::jca::Providers::threadLists->remove();
label_goto_16:
	sun::security::jca::Providers::threadListsUsed = ( sun::security::jca::Providers::threadListsUsed + -0x1);
	//label_try_end_1c:
	}
	catch (...){
		goto label_catchall_41;
	}
	//    .catchall {:try_start_5 .. :try_end_1c} :catchall_41
	cVar0->monitor_exit();
	return;
	// 276    .line 257
label_cond_1e:
	try {
	//label_try_start_1e:
	if ( !(sun::security::jca::ProviderList::debug) )  
		goto label_cond_3b;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	sun::security::jca::ProviderList::debug->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Restoring previous ThreadLocal providers: ")))->append(list)->toString());
label_cond_3b:
	sun::security::jca::Providers::threadLists->set(list);
	//label_try_end_40:
	}
	catch (...){
		goto label_catchall_41;
	}
	//    .catchall {:try_start_1e .. :try_end_40} :catchall_41
	goto label_goto_16;
label_catchall_41:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public static getFullProviderList()Lsun/security/jca/ProviderList;
std::shared_ptr<sun::security::jca::ProviderList> sun::security::jca::Providers::getFullProviderList()
{
	
	std::shared_ptr<sun::security::jca::Providers> cVar0;
	std::shared_ptr<sun::security::jca::ProviderList> list;
	std::shared_ptr<sun::security::jca::ProviderList> newList;
	
	cVar0 = sun::security::jca::Providers();
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	list = sun::security::jca::Providers::getThreadProviderList({const[class].FS-Param});
	//    .local v0, "list":Lsun/security/jca/ProviderList;
	if ( !(list) )  
		goto label_cond_15;
	newList = list->removeInvalid();
	//    .local v1, "newList":Lsun/security/jca/ProviderList;
	if ( newList == list )
		goto label_cond_13;
	sun::security::jca::Providers::changeThreadProviderList(newList);
	//label_try_end_12:
	}
	catch (...){
		goto label_catchall_25;
	}
	//    .catchall {:try_start_3 .. :try_end_12} :catchall_25
label_cond_13:
	cVar0->monitor_exit();
	return list;
	// 368    .end local v1    # "newList":Lsun/security/jca/ProviderList;
label_cond_15:
	cVar0->monitor_exit();
	list = sun::security::jca::Providers::getSystemProviderList({const[class].FS-Param});
	newList = list->removeInvalid();
	//    .restart local v1    # "newList":Lsun/security/jca/ProviderList;
	if ( newList == list )
		goto label_cond_24;
	sun::security::jca::Providers::setSystemProviderList(newList);
label_cond_24:
	return list;
	// 396    .line 180
	// 397    .end local v1    # "newList":Lsun/security/jca/ProviderList;
label_catchall_25:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public static getProviderList()Lsun/security/jca/ProviderList;
std::shared_ptr<sun::security::jca::ProviderList> sun::security::jca::Providers::getProviderList()
{
	
	std::shared_ptr<sun::security::jca::ProviderList> list;
	
	list = sun::security::jca::Providers::getThreadProviderList({const[class].FS-Param});
	//    .local v0, "list":Lsun/security/jca/ProviderList;
	if ( list )     
		goto label_cond_a;
label_cond_a:
	return list;

}
// .method public static getSunProvider()Ljava/security/Provider;
std::shared_ptr<java::security::Provider> sun::security::jca::Providers::getSunProvider()
{
	
	std::shared_ptr<java::lang::RuntimeException> cVar2;
	std::shared_ptr<java::security::Provider> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::security::Provider> cVar0;
	
	try {
	//label_try_start_0:
	//    .local v0, "clazz":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	cVar0 = java::lang::Class::forName(sun::security::jca::Providers::jarVerificationProviders[0x0])->newInstance();
	cVar0->checkCast("java::security::Provider");
	//label_try_end_f:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_10;
	}
	//    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_f} :catch_10
	return cVar0;
	// 457    .line 118
label_catch_10:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/Exception;
	try {
	//label_try_start_11:
	cVar1 = java::lang::Class::forName(std::make_shared<java::lang::String>(std::make_shared<char[]>("sun.security.provider.VerificationProvider")))->newInstance();
	cVar1->checkCast("java::security::Provider");
	//label_try_end_1e:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1f;
	}
	//    .catch Ljava/lang/Exception; {:try_start_11 .. :try_end_1e} :catch_1f
	return cVar1;
	// 481    .line 122
label_catch_1f:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "ee":Ljava/lang/Exception;
	cVar2 = std::make_shared<java::lang::RuntimeException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Sun provider not found")), getCatchExcetionFromList);
	// throw
	throw cVar2;

}
// .method private static getSystemProviderList()Lsun/security/jca/ProviderList;
std::shared_ptr<sun::security::jca::ProviderList> sun::security::jca::Providers::getSystemProviderList()
{
	
	return sun::security::jca::Providers::providerList;

}
// .method public static getThreadProviderList()Lsun/security/jca/ProviderList;
std::shared_ptr<sun::security::jca::ProviderList> sun::security::jca::Providers::getThreadProviderList()
{
	
	std::shared_ptr<sun::security::jca::ProviderList> cVar0;
	
	if ( sun::security::jca::Providers::threadListsUsed )     
		goto label_cond_6;
	return 0x0;
	// 520    .line 214
label_cond_6:
	cVar0 = sun::security::jca::Providers::threadLists->get();
	cVar0->checkCast("sun::security::jca::ProviderList");
	return cVar0;

}
// .method public static setProviderList(Lsun/security/jca/ProviderList;)V
void sun::security::jca::Providers::setProviderList(std::shared_ptr<sun::security::jca::ProviderList> newList)
{
	
	//    .param p0, "newList"    # Lsun/security/jca/ProviderList;
	if ( sun::security::jca::Providers::getThreadProviderList({const[class].FS-Param}) )     
		goto label_cond_a;
	sun::security::jca::Providers::setSystemProviderList(newList);
label_goto_9:
	return;
	// 552    .line 169
label_cond_a:
	sun::security::jca::Providers::changeThreadProviderList(newList);
	goto label_goto_9;

}
// .method private static setSystemProviderList(Lsun/security/jca/ProviderList;)V
void sun::security::jca::Providers::setSystemProviderList(std::shared_ptr<sun::security::jca::ProviderList> list)
{
	
	//    .param p0, "list"    # Lsun/security/jca/ProviderList;
	sun::security::jca::Providers::providerList = list;
	return;

}
// .method public static startJarVerification()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> sun::security::jca::Providers::startJarVerification()
{
	
	//    .local v0, "currentList":Lsun/security/jca/ProviderList;
	//    .local v1, "jarList":Lsun/security/jca/ProviderList;
	return sun::security::jca::Providers::beginThreadProviderList(sun::security::jca::Providers::getProviderList({const[class].FS-Param})->getJarList(sun::security::jca::Providers::jarVerificationProviders));

}
// .method public static stopJarVerification(Ljava/lang/Object;)V
void sun::security::jca::Providers::stopJarVerification(std::shared_ptr<java::lang::Object> obj)
{
	
	//    .param p0, "obj"    # Ljava/lang/Object;
	obj->checkCast("sun::security::jca::ProviderList");
	//    .end local p0    # "obj":Ljava/lang/Object;
	sun::security::jca::Providers::endThreadProviderList(obj);
	return;

}


