// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\CertStoreHelper$1.smali
#include "java2ctype.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.IllegalAccessException.h"
#include "java.lang.InstantiationException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "sun.security.provider.certpath.CertStoreHelper_S_1.h"
#include "sun.security.provider.certpath.CertStoreHelper.h"
#include "sun.security.util.Cache.h"

// .method constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
sun::security::provider::certpath::CertStoreHelper_S_1::CertStoreHelper_S_1(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::lang::String> var1)
{
	
	this->val_S_cl = var0;
	this->val_S_type = var1;
	// 047    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public run()Lsun/security/provider/certpath/CertStoreHelper;
std::shared_ptr<sun::security::provider::certpath::CertStoreHelper> sun::security::provider::certpath::CertStoreHelper_S_1::run()
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<sun::security::provider::certpath::CertStoreHelper> csh;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 075        value = {
	// 076            Ljava/lang/ClassNotFoundException;
	// 077        }
	// 078    .end annotation
	try {
	//label_try_start_0:
	//    .local v0, "c":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	csh = java::lang::Class::forName(this->val_S_cl, 0x1, 0x0)->newInstance();
	csh->checkCast("sun::security::provider::certpath::CertStoreHelper");
	//    .local v1, "csh":Lsun/security/provider/certpath/CertStoreHelper;
	sun::security::provider::certpath::CertStoreHelper::-get0({const[class].FS-Param})->put(this->val_S_type, csh);
	//label_try_end_17:
	}
	catch (java::lang::InstantiationException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_18;
	}
	catch (java::lang::IllegalAccessException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_18;
	}
	//    .catch Ljava/lang/InstantiationException; {:try_start_0 .. :try_end_17} :catch_18
	//    .catch Ljava/lang/IllegalAccessException; {:try_start_0 .. :try_end_17} :catch_18
	return csh;
	// 117    .line 88
	// 118    .end local v0    # "c":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	// 119    .end local v1    # "csh":Lsun/security/provider/certpath/CertStoreHelper;
label_catch_18:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/lang/ReflectiveOperationException;
	cVar0 = std::make_shared<java::lang::AssertionError>(getCatchExcetionFromList);
	// throw
	throw cVar0;

}


