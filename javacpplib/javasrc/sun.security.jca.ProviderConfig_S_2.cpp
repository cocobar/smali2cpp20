// CPP L:\smali2cpp20\x64\Release\out\sun\security\jca\ProviderConfig$2.smali
#include "java2ctype.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Exception.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.lang.reflect.InvocationTargetException.h"
#include "java.security.Provider.h"
#include "java.security.ProviderException.h"
#include "sun.security.jca.ProviderConfig_S_2.h"
#include "sun.security.jca.ProviderConfig.h"
#include "sun.security.util.Debug.h"

// .method constructor <init>(Lsun/security/jca/ProviderConfig;)V
sun::security::jca::ProviderConfig_S_2::ProviderConfig_S_2(std::shared_ptr<sun::security::jca::ProviderConfig> this_S_0)
{
	
	//    .param p1, "this$0"    # Lsun/security/jca/ProviderConfig;
	this->this_S_0 = this_S_0;
	// 044    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public run()Ljava/security/Provider;
std::shared_ptr<java::security::Provider> sun::security::jca::ProviderConfig_S_2::run()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::reflect::InvocationTargetException> e;
	std::shared_ptr<java::lang::Throwable> t;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::security::ProviderException> t;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(sun::security::jca::ProviderConfig::-get1({const[class].FS-Param})) )  
		goto label_cond_24;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	sun::security::jca::ProviderConfig::-get1({const[class].FS-Param})->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Loading provider: ")))->append(this->this_S_0)->toString());
label_cond_24:
	try {
	//label_try_start_24:
	//label_try_end_35:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_37;
	}
	//    .catch Ljava/lang/Exception; {:try_start_24 .. :try_end_35} :catch_37
	return sun::security::jca::ProviderConfig::-wrap0(this->this_S_0, sun::security::jca::ProviderConfig::-get0(this->this_S_0), java::lang::Object()->getClassLoader());
	// 129    .line 216
label_catch_37:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e1":Ljava/lang/Exception;
	try {
	//label_try_start_38:
	//label_try_end_47:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_49;
	}
	//    .catch Ljava/lang/Exception; {:try_start_38 .. :try_end_47} :catch_49
	return sun::security::jca::ProviderConfig::-wrap0(this->this_S_0, sun::security::jca::ProviderConfig::-get0(this->this_S_0), java::lang::ClassLoader::getSystemClassLoader(this->this_S_0, sun::security::jca::ProviderConfig::-get0(this->this_S_0), java::lang::ClassLoader::getSystemClassLoader(this->this_S_0, sun::security::jca::ProviderConfig::-get0(this->this_S_0), java::lang::ClassLoader::getSystemClassLoader({const[class].FS-Param}))));
	// 156    .line 220
label_catch_49:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/Exception;
	if ( !(e->instanceOf("java::lang::reflect::InvocationTargetException")) )  
		goto label_cond_81;
	e->checkCast("java::lang::reflect::InvocationTargetException");
	//    .end local v0    # "e":Ljava/lang/Exception;
	t = e->getCause();
	//    .local v2, "t":Ljava/lang/Throwable;
label_goto_54:
	if ( !(sun::security::jca::ProviderConfig::-get1({const[class].FS-Param})) )  
		goto label_cond_7a;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	sun::security::jca::ProviderConfig::-get1({const[class].FS-Param})->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Error loading provider ")))->append(this->this_S_0)->toString());
	t->printStackTrace();
label_cond_7a:
	if ( !(t->instanceOf("java::security::ProviderException")) )  
		goto label_cond_83;
	t->checkCast("java::security::ProviderException");
	//    .end local v2    # "t":Ljava/lang/Throwable;
	// throw
	throw t;
	// 225    .line 225
	// 226    .restart local v0    # "e":Ljava/lang/Exception;
label_cond_81:
	t = e;
	//    .restart local v2    # "t":Ljava/lang/Throwable;
	goto label_goto_54;
	// 233    .line 236
	// 234    .end local v0    # "e":Ljava/lang/Exception;
label_cond_83:
	if ( !(t->instanceOf("java::lang::UnsupportedOperationException")) )  
		goto label_cond_8c;
	sun::security::jca::ProviderConfig::-wrap1(this->this_S_0);
label_cond_8c:
	return 0x0;

}


