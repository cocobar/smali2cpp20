// CPP L:\smali2cpp20\x64\Release\out\sun\security\jca\ProviderConfig$3.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"
#include "java.security.GeneralSecurityException.h"
#include "java.security.ProviderException.h"
#include "sun.security.jca.ProviderConfig_S_3.h"
#include "sun.security.util.PropertyExpander.h"

// .method constructor <init>(Ljava/lang/String;)V
sun::security::jca::ProviderConfig_S_3::ProviderConfig_S_3(std::shared_ptr<java::lang::String> var0)
{
	
	this->val_S_value = var0;
	// 043    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public run()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::jca::ProviderConfig_S_3::run()
{
	
	std::shared_ptr<java::security::ProviderException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	try {
	//label_try_start_0:
	//label_try_end_5:
	}
	catch (java::security::GeneralSecurityException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_7;
	}
	//    .catch Ljava/security/GeneralSecurityException; {:try_start_0 .. :try_end_5} :catch_7
	return sun::security::util::PropertyExpander::expand(this->val_S_value);
	// 079    .line 289
label_catch_7:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/security/GeneralSecurityException;
	cVar0 = std::make_shared<java::security::ProviderException>(getCatchExcetionFromList);
	// throw
	throw cVar0;

}


