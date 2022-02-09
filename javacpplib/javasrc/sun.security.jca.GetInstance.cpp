// CPP L:\smali2cpp20\x64\Release\out\sun\security\jca\GetInstance.smali
#include "java2ctype.h"
#include "java.lang.Class.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.security.NoSuchAlgorithmException.h"
#include "java.security.NoSuchProviderException.h"
#include "java.security.Provider_S_Service.h"
#include "java.security.Provider.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "sun.security.jca.GetInstance_S_Instance.h"
#include "sun.security.jca.GetInstance.h"
#include "sun.security.jca.ProviderList.h"
#include "sun.security.jca.Providers.h"
#include "sun.security.jca.ServiceId.h"

// .method private constructor <init>()V
sun::security::jca::GetInstance::GetInstance()
{
	
	// 020    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static checkSuperClass(Ljava/security/Provider$Service;Ljava/lang/Class;Ljava/lang/Class;)V
void sun::security::jca::GetInstance::checkSuperClass(std::shared_ptr<java::security::Provider_S_Service> s,std::shared_ptr<java::lang::Class<java::lang::Object>> subClass,std::shared_ptr<java::lang::Class<java::lang::Object>> superClass)
{
	
	std::shared_ptr<java::security::NoSuchAlgorithmException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "s"    # Ljava/security/Provider$Service;
	//    .annotation system Ldalvik/annotation/Signature;
	// 030        value = {
	// 031            "(",
	// 032            "Ljava/security/Provider$Service;",
	// 033            "Ljava/lang/Class",
	// 034            "<*>;",
	// 035            "Ljava/lang/Class",
	// 036            "<*>;)V"
	// 037        }
	// 038    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 041        value = {
	// 042            Ljava/security/NoSuchAlgorithmException;
	// 043        }
	// 044    .end annotation
	//    .local p1, "subClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	//    .local p2, "superClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( superClass )     
		goto label_cond_3;
	return;
	// 055    .line 257
label_cond_3:
	if ( superClass->isAssignableFrom(subClass) )     
		goto label_cond_45;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::security::NoSuchAlgorithmException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("class configured for ")))->append(s->getType())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(": ")))->append(s->getClassName())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" not a ")))->append(s->getType())->toString());
	// throw
	throw cVar0;
	// 128    .line 262
label_cond_45:
	return;

}
// .method public static getInstance(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/String;)Lsun/security/jca/GetInstance$Instance;
std::shared_ptr<sun::security::jca::GetInstance_S_Instance> sun::security::jca::GetInstance::getInstance(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::Class<java::lang::Object>> clazz,std::shared_ptr<java::lang::String> algorithm)
{
	
	std::shared_ptr<sun::security::jca::ProviderList> list;
	std::shared_ptr<java::security::Provider_S_Service> firstService;
	std::shared_ptr<java::security::NoSuchAlgorithmException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::util::Iterator> s_S_iterator;
	std::shared_ptr<java::security::Provider_S_Service> s;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "type"    # Ljava/lang/String;
	//    .param p2, "algorithm"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 138        value = {
	// 139            "(",
	// 140            "Ljava/lang/String;",
	// 141            "Ljava/lang/Class",
	// 142            "<*>;",
	// 143            "Ljava/lang/String;",
	// 144            ")",
	// 145            "Lsun/security/jca/GetInstance$Instance;"
	// 146        }
	// 147    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 150        value = {
	// 151            Ljava/security/NoSuchAlgorithmException;
	// 152        }
	// 153    .end annotation
	//    .local p1, "clazz":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	list = sun::security::jca::Providers::getProviderList({const[class].FS-Param});
	//    .local v3, "list":Lsun/security/jca/ProviderList;
	firstService = list->getService(type, algorithm);
	//    .local v2, "firstService":Ljava/security/Provider$Service;
	if ( firstService )     
		goto label_cond_2f;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::security::NoSuchAlgorithmException>(cVar1->append(algorithm)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")))->append(type)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" not available")))->toString());
	// throw
	throw cVar0;
	// 209    .line 164
label_cond_2f:
	try {
	//label_try_start_2f:
	//label_try_end_32:
	}
	catch (java::security::NoSuchAlgorithmException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_34;
	}
	//    .catch Ljava/security/NoSuchAlgorithmException; {:try_start_2f .. :try_end_32} :catch_34
	return sun::security::jca::GetInstance::getInstance(firstService, clazz);
	// 220    .line 165
label_catch_34:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/security/NoSuchAlgorithmException;
	tryCatchExcetionList.pop_back();
	//    .local v1, "failure":Ljava/security/NoSuchAlgorithmException;
	s_S_iterator = list->getServices(type, algorithm)->iterator();
	//    .local v5, "s$iterator":Ljava/util/Iterator;
label_cond_3e:
label_goto_3e:
	if ( !(s_S_iterator->hasNext()) )  
		goto label_cond_54;
	s = s_S_iterator->next();
	s->checkCast("java::security::Provider_S_Service");
	//    .local v4, "s":Ljava/security/Provider$Service;
	if ( s == firstService )
		goto label_cond_3e;
	try {
	//label_try_start_4c:
	//label_try_end_4f:
	}
	catch (java::security::NoSuchAlgorithmException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_51;
	}
	//    .catch Ljava/security/NoSuchAlgorithmException; {:try_start_4c .. :try_end_4f} :catch_51
	return sun::security::jca::GetInstance::getInstance(s, clazz);
	// 267    .line 177
label_catch_51:
	// move-exception
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_3e;
	// 276    .line 181
	// 277    .end local v4    # "s":Ljava/security/Provider$Service;
label_cond_54:
	// throw
	throw;

}
// .method public static getInstance(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Object;)Lsun/security/jca/GetInstance$Instance;
std::shared_ptr<sun::security::jca::GetInstance_S_Instance> sun::security::jca::GetInstance::getInstance(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::Class<java::lang::Object>> clazz,std::shared_ptr<java::lang::String> algorithm,std::shared_ptr<java::lang::Object> param)
{
	
	int failure;
	std::shared_ptr<java::util::Iterator> s_S_iterator;
	std::shared_ptr<java::security::Provider_S_Service> s;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::security::NoSuchAlgorithmException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "type"    # Ljava/lang/String;
	//    .param p2, "algorithm"    # Ljava/lang/String;
	//    .param p3, "param"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Signature;
	// 288        value = {
	// 289            "(",
	// 290            "Ljava/lang/String;",
	// 291            "Ljava/lang/Class",
	// 292            "<*>;",
	// 293            "Ljava/lang/String;",
	// 294            "Ljava/lang/Object;",
	// 295            ")",
	// 296            "Lsun/security/jca/GetInstance$Instance;"
	// 297        }
	// 298    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 301        value = {
	// 302            Ljava/security/NoSuchAlgorithmException;
	// 303        }
	// 304    .end annotation
	//    .local p1, "clazz":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	//    .local v4, "services":Ljava/util/List;, "Ljava/util/List<Ljava/security/Provider$Service;>;"
	failure = 0x0;
	//    .local v1, "failure":Ljava/security/NoSuchAlgorithmException;
	s_S_iterator = sun::security::jca::GetInstance::getServices(type, algorithm)->iterator();
	//    .end local v1    # "failure":Ljava/security/NoSuchAlgorithmException;
	//    .local v3, "s$iterator":Ljava/util/Iterator;
label_goto_9:
	if ( !(s_S_iterator->hasNext()) )  
		goto label_cond_1d;
	s = s_S_iterator->next();
	s->checkCast("java::security::Provider_S_Service");
	//    .local v2, "s":Ljava/security/Provider$Service;
	try {
	//label_try_start_15:
	//label_try_end_18:
	}
	catch (java::security::NoSuchAlgorithmException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1a;
	}
	//    .catch Ljava/security/NoSuchAlgorithmException; {:try_start_15 .. :try_end_18} :catch_1a
	return sun::security::jca::GetInstance::getInstance(s, clazz, param);
	// 349    .line 191
label_catch_1a:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/security/NoSuchAlgorithmException;
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "failure":Ljava/security/NoSuchAlgorithmException;
	goto label_goto_9;
	// 360    .line 195
	// 361    .end local v0    # "e":Ljava/security/NoSuchAlgorithmException;
	// 362    .end local v1    # "failure":Ljava/security/NoSuchAlgorithmException;
	// 363    .end local v2    # "s":Ljava/security/Provider$Service;
label_cond_1d:
	if ( !(failure) )  
		goto label_cond_20;
	// throw
	throw failure;
	// 370    .line 198
label_cond_20:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::security::NoSuchAlgorithmException>(cVar1->append(algorithm)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")))->append(type)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" not available")))->toString());
	// throw
	throw cVar0;

}
// .method public static getInstance(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/String;)Lsun/security/jca/GetInstance$Instance;
std::shared_ptr<sun::security::jca::GetInstance_S_Instance> sun::security::jca::GetInstance::getInstance(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::Class<java::lang::Object>> clazz,std::shared_ptr<java::lang::String> algorithm,std::shared_ptr<java::lang::Object> param,std::shared_ptr<java::lang::String> provider)
{
	
	//    .param p0, "type"    # Ljava/lang/String;
	//    .param p2, "algorithm"    # Ljava/lang/String;
	//    .param p3, "param"    # Ljava/lang/Object;
	//    .param p4, "provider"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 416        value = {
	// 417            "(",
	// 418            "Ljava/lang/String;",
	// 419            "Ljava/lang/Class",
	// 420            "<*>;",
	// 421            "Ljava/lang/String;",
	// 422            "Ljava/lang/Object;",
	// 423            "Ljava/lang/String;",
	// 424            ")",
	// 425            "Lsun/security/jca/GetInstance$Instance;"
	// 426        }
	// 427    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 430        value = {
	// 431            Ljava/security/NoSuchAlgorithmException;,
	// 432            Ljava/security/NoSuchProviderException;
	// 433        }
	// 434    .end annotation
	//    .local p1, "clazz":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	return sun::security::jca::GetInstance::getInstance(sun::security::jca::GetInstance::getService(type, algorithm, provider), clazz, param);

}
// .method public static getInstance(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Object;Ljava/security/Provider;)Lsun/security/jca/GetInstance$Instance;
std::shared_ptr<sun::security::jca::GetInstance_S_Instance> sun::security::jca::GetInstance::getInstance(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::Class<java::lang::Object>> clazz,std::shared_ptr<java::lang::String> algorithm,std::shared_ptr<java::lang::Object> param,std::shared_ptr<java::security::Provider> provider)
{
	
	//    .param p0, "type"    # Ljava/lang/String;
	//    .param p2, "algorithm"    # Ljava/lang/String;
	//    .param p3, "param"    # Ljava/lang/Object;
	//    .param p4, "provider"    # Ljava/security/Provider;
	//    .annotation system Ldalvik/annotation/Signature;
	// 457        value = {
	// 458            "(",
	// 459            "Ljava/lang/String;",
	// 460            "Ljava/lang/Class",
	// 461            "<*>;",
	// 462            "Ljava/lang/String;",
	// 463            "Ljava/lang/Object;",
	// 464            "Ljava/security/Provider;",
	// 465            ")",
	// 466            "Lsun/security/jca/GetInstance$Instance;"
	// 467        }
	// 468    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 471        value = {
	// 472            Ljava/security/NoSuchAlgorithmException;
	// 473        }
	// 474    .end annotation
	//    .local p1, "clazz":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	return sun::security::jca::GetInstance::getInstance(sun::security::jca::GetInstance::getService(type, algorithm, provider), clazz, param);

}
// .method public static getInstance(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;)Lsun/security/jca/GetInstance$Instance;
std::shared_ptr<sun::security::jca::GetInstance_S_Instance> sun::security::jca::GetInstance::getInstance(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::Class<java::lang::Object>> clazz,std::shared_ptr<java::lang::String> algorithm,std::shared_ptr<java::lang::String> provider)
{
	
	//    .param p0, "type"    # Ljava/lang/String;
	//    .param p2, "algorithm"    # Ljava/lang/String;
	//    .param p3, "provider"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 496        value = {
	// 497            "(",
	// 498            "Ljava/lang/String;",
	// 499            "Ljava/lang/Class",
	// 500            "<*>;",
	// 501            "Ljava/lang/String;",
	// 502            "Ljava/lang/String;",
	// 503            ")",
	// 504            "Lsun/security/jca/GetInstance$Instance;"
	// 505        }
	// 506    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 509        value = {
	// 510            Ljava/security/NoSuchAlgorithmException;,
	// 511            Ljava/security/NoSuchProviderException;
	// 512        }
	// 513    .end annotation
	//    .local p1, "clazz":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	return sun::security::jca::GetInstance::getInstance(sun::security::jca::GetInstance::getService(type, algorithm, provider), clazz);

}
// .method public static getInstance(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/String;Ljava/security/Provider;)Lsun/security/jca/GetInstance$Instance;
std::shared_ptr<sun::security::jca::GetInstance_S_Instance> sun::security::jca::GetInstance::getInstance(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::Class<java::lang::Object>> clazz,std::shared_ptr<java::lang::String> algorithm,std::shared_ptr<java::security::Provider> provider)
{
	
	//    .param p0, "type"    # Ljava/lang/String;
	//    .param p2, "algorithm"    # Ljava/lang/String;
	//    .param p3, "provider"    # Ljava/security/Provider;
	//    .annotation system Ldalvik/annotation/Signature;
	// 535        value = {
	// 536            "(",
	// 537            "Ljava/lang/String;",
	// 538            "Ljava/lang/Class",
	// 539            "<*>;",
	// 540            "Ljava/lang/String;",
	// 541            "Ljava/security/Provider;",
	// 542            ")",
	// 543            "Lsun/security/jca/GetInstance$Instance;"
	// 544        }
	// 545    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 548        value = {
	// 549            Ljava/security/NoSuchAlgorithmException;
	// 550        }
	// 551    .end annotation
	//    .local p1, "clazz":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	return sun::security::jca::GetInstance::getInstance(sun::security::jca::GetInstance::getService(type, algorithm, provider), clazz);

}
// .method public static getInstance(Ljava/security/Provider$Service;Ljava/lang/Class;)Lsun/security/jca/GetInstance$Instance;
std::shared_ptr<sun::security::jca::GetInstance_S_Instance> sun::security::jca::GetInstance::getInstance(std::shared_ptr<java::security::Provider_S_Service> s,std::shared_ptr<java::lang::Class<java::lang::Object>> clazz)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared_ptr<java::lang::Object> instance;
	std::shared_ptr<sun::security::jca::GetInstance_S_Instance> cVar1;
	
	//    .param p0, "s"    # Ljava/security/Provider$Service;
	//    .annotation system Ldalvik/annotation/Signature;
	// 571        value = {
	// 572            "(",
	// 573            "Ljava/security/Provider$Service;",
	// 574            "Ljava/lang/Class",
	// 575            "<*>;)",
	// 576            "Lsun/security/jca/GetInstance$Instance;"
	// 577        }
	// 578    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 581        value = {
	// 582            Ljava/security/NoSuchAlgorithmException;
	// 583        }
	// 584    .end annotation
	//    .local p1, "clazz":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	cVar0 = 0x0;
	instance = s->newInstance(cVar0);
	//    .local v0, "instance":Ljava/lang/Object;
	sun::security::jca::GetInstance::checkSuperClass(s, instance->getClass(), clazz);
	cVar1 = std::make_shared<sun::security::jca::GetInstance_S_Instance>(s->getProvider(), instance, cVar0);
	return cVar1;

}
// .method public static getInstance(Ljava/security/Provider$Service;Ljava/lang/Class;Ljava/lang/Object;)Lsun/security/jca/GetInstance$Instance;
std::shared_ptr<sun::security::jca::GetInstance_S_Instance> sun::security::jca::GetInstance::getInstance(std::shared_ptr<java::security::Provider_S_Service> s,std::shared_ptr<java::lang::Class<java::lang::Object>> clazz,std::shared_ptr<java::lang::Object> param)
{
	
	std::shared_ptr<java::lang::Object> instance;
	std::shared_ptr<sun::security::jca::GetInstance_S_Instance> cVar0;
	
	//    .param p0, "s"    # Ljava/security/Provider$Service;
	//    .param p2, "param"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Signature;
	// 620        value = {
	// 621            "(",
	// 622            "Ljava/security/Provider$Service;",
	// 623            "Ljava/lang/Class",
	// 624            "<*>;",
	// 625            "Ljava/lang/Object;",
	// 626            ")",
	// 627            "Lsun/security/jca/GetInstance$Instance;"
	// 628        }
	// 629    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 632        value = {
	// 633            Ljava/security/NoSuchAlgorithmException;
	// 634        }
	// 635    .end annotation
	//    .local p1, "clazz":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	instance = s->newInstance(param);
	//    .local v0, "instance":Ljava/lang/Object;
	sun::security::jca::GetInstance::checkSuperClass(s, instance->getClass(), clazz);
	cVar0 = std::make_shared<sun::security::jca::GetInstance_S_Instance>(s->getProvider(), instance, 0x0);
	return cVar0;

}
// .method public static getService(Ljava/lang/String;Ljava/lang/String;)Ljava/security/Provider$Service;
std::shared_ptr<java::security::Provider_S_Service> sun::security::jca::GetInstance::getService(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::String> algorithm)
{
	
	std::shared_ptr<java::security::Provider_S_Service> s;
	std::shared_ptr<java::security::NoSuchAlgorithmException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "type"    # Ljava/lang/String;
	//    .param p1, "algorithm"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 671        value = {
	// 672            Ljava/security/NoSuchAlgorithmException;
	// 673        }
	// 674    .end annotation
	//    .local v0, "list":Lsun/security/jca/ProviderList;
	s = sun::security::jca::Providers::getProviderList({const[class].FS-Param})->getService(type, algorithm);
	//    .local v1, "s":Ljava/security/Provider$Service;
	if ( s )     
		goto label_cond_2f;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::security::NoSuchAlgorithmException>(cVar1->append(algorithm)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")))->append(type)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" not available")))->toString());
	// throw
	throw cVar0;
	// 729    .line 72
label_cond_2f:
	return s;

}
// .method public static getService(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/security/Provider$Service;
std::shared_ptr<java::security::Provider_S_Service> sun::security::jca::GetInstance::getService(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::String> algorithm,std::shared_ptr<java::lang::String> provider)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::security::Provider> p;
	std::shared_ptr<java::security::NoSuchProviderException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::security::Provider_S_Service> s;
	std::shared_ptr<java::security::NoSuchAlgorithmException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	
	//    .param p0, "type"    # Ljava/lang/String;
	//    .param p1, "algorithm"    # Ljava/lang/String;
	//    .param p2, "provider"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 740        value = {
	// 741            Ljava/security/NoSuchAlgorithmException;,
	// 742            Ljava/security/NoSuchProviderException;
	// 743        }
	// 744    .end annotation
	if ( !(provider) )  
		goto label_cond_8;
	if ( provider->length() )     
		goto label_cond_11;
label_cond_8:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("missing provider")));
	// throw
	throw cVar0;
	// 766    .line 81
label_cond_11:
	p = sun::security::jca::Providers::getProviderList({const[class].FS-Param})->getProvider(provider);
	//    .local v0, "p":Ljava/security/Provider;
	if ( p )     
		goto label_cond_35;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::security::NoSuchProviderException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("no such provider: ")))->append(provider)->toString());
	// throw
	throw cVar1;
	// 805    .line 85
label_cond_35:
	s = p->getService(type, algorithm);
	//    .local v1, "s":Ljava/security/Provider$Service;
	if ( s )     
		goto label_cond_60;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::security::NoSuchAlgorithmException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("no such algorithm: ")))->append(algorithm)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" for provider ")))->append(provider)->toString());
	// throw
	throw cVar3;
	// 852    .line 90
label_cond_60:
	return s;

}
// .method public static getService(Ljava/lang/String;Ljava/lang/String;Ljava/security/Provider;)Ljava/security/Provider$Service;
std::shared_ptr<java::security::Provider_S_Service> sun::security::jca::GetInstance::getService(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::String> algorithm,std::shared_ptr<java::security::Provider> provider)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::security::Provider_S_Service> s;
	std::shared_ptr<java::security::NoSuchAlgorithmException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p0, "type"    # Ljava/lang/String;
	//    .param p1, "algorithm"    # Ljava/lang/String;
	//    .param p2, "provider"    # Ljava/security/Provider;
	//    .annotation system Ldalvik/annotation/Throws;
	// 863        value = {
	// 864            Ljava/security/NoSuchAlgorithmException;
	// 865        }
	// 866    .end annotation
	if ( provider )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("missing provider")));
	// throw
	throw cVar0;
	// 881    .line 98
label_cond_b:
	s = provider->getService(type, algorithm);
	//    .local v0, "s":Ljava/security/Provider$Service;
	if ( s )     
		goto label_cond_3a;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::security::NoSuchAlgorithmException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("no such algorithm: ")))->append(algorithm)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" for provider ")))->append(provider->getName())->toString());
	// throw
	throw cVar1;
	// 934    .line 103
label_cond_3a:
	return s;

}
// .method public static getServices(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;
std::shared_ptr<java::util::List<java::security::Provider_S_Service>> sun::security::jca::GetInstance::getServices(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::String> algorithm)
{
	
	//    .param p0, "type"    # Ljava/lang/String;
	//    .param p1, "algorithm"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 944        value = {
	// 945            "(",
	// 946            "Ljava/lang/String;",
	// 947            "Ljava/lang/String;",
	// 948            ")",
	// 949            "Ljava/util/List",
	// 950            "<",
	// 951            "Ljava/security/Provider$Service;",
	// 952            ">;"
	// 953        }
	// 954    .end annotation
	//    .local v0, "list":Lsun/security/jca/ProviderList;
	return sun::security::jca::Providers::getProviderList({const[class].FS-Param})->getServices(type, algorithm);

}
// .method public static getServices(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;
std::shared_ptr<java::util::List<java::security::Provider_S_Service>> sun::security::jca::GetInstance::getServices(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::util::List<java::lang::String>> algorithms)
{
	
	//    .param p0, "type"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 975        value = {
	// 976            "(",
	// 977            "Ljava/lang/String;",
	// 978            "Ljava/util/List",
	// 979            "<",
	// 980            "Ljava/lang/String;",
	// 981            ">;)",
	// 982            "Ljava/util/List",
	// 983            "<",
	// 984            "Ljava/security/Provider$Service;",
	// 985            ">;"
	// 986        }
	// 987    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 990    .end annotation
	//    .local p1, "algorithms":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	//    .local v0, "list":Lsun/security/jca/ProviderList;
	return sun::security::jca::Providers::getProviderList({const[class].FS-Param})->getServices(type, algorithms);

}
// .method public static getServices(Ljava/util/List;)Ljava/util/List;
std::shared_ptr<java::util::List<java::security::Provider_S_Service>> sun::security::jca::GetInstance::getServices(std::shared_ptr<java::util::List<sun::security::jca::ServiceId>> ids)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1011        value = {
	// 1012            "(",
	// 1013            "Ljava/util/List",
	// 1014            "<",
	// 1015            "Lsun/security/jca/ServiceId;",
	// 1016            ">;)",
	// 1017            "Ljava/util/List",
	// 1018            "<",
	// 1019            "Ljava/security/Provider$Service;",
	// 1020            ">;"
	// 1021        }
	// 1022    .end annotation
	//    .local p0, "ids":Ljava/util/List;, "Ljava/util/List<Lsun/security/jca/ServiceId;>;"
	//    .local v0, "list":Lsun/security/jca/ProviderList;
	return sun::security::jca::Providers::getProviderList({const[class].FS-Param})->getServices(ids);

}


