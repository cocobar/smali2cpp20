// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CollatorServiceShim$CService.smali
#include "java2ctype.h"
#include "android.icu.impl.ICULocaleService.h"
#include "android.icu.impl.ICUService_S_Factory.h"
#include "android.icu.impl.ICUService_S_Key.h"
#include "android.icu.text.Collator.h"
#include "android.icu.text.CollatorServiceShim_S_CService_S_1CollatorFactory.h"
#include "android.icu.text.CollatorServiceShim_S_CService.h"
#include "android.icu.text.CollatorServiceShim.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.MissingResourceException.h"

// .method constructor <init>()V
android::icu::text::CollatorServiceShim_S_CService::CollatorServiceShim_S_CService()
{
	
	std::shared_ptr<android::icu::text::CollatorServiceShim_S_CService_S_1CollatorFactory> cVar0;
	
	android::icu::impl::ICULocaleService::(std::make_shared<java::lang::String>(std::make_shared<char[]>("Collator")));
	cVar0 = std::make_shared<android::icu::text::CollatorServiceShim_S_CService_S_1CollatorFactory>(this);
	this->registerFactory(cVar0);
	this->markDefault();
	return;

}
// .method protected handleDefault(Landroid/icu/impl/ICUService$Key;[Ljava/lang/String;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::CollatorServiceShim_S_CService::handleDefault(std::shared_ptr<android::icu::impl::ICUService_S_Key> key,std::shared_ptr<std::vector<java::lang::String>> actualIDReturn)
{
	
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "key"    # Landroid/icu/impl/ICUService$Key;
	//    .param p2, "actualIDReturn"    # [Ljava/lang/String;
	if ( !(actualIDReturn) )  
		goto label_cond_9;
	actualIDReturn[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("root"));
label_cond_9:
	try {
	//label_try_start_9:
	//label_try_end_e:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_10;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_9 .. :try_end_e} :catch_10
	return android::icu::text::CollatorServiceShim::-wrap0(android::icu::util::ULocale::ROOT);
	// 074    .line 174
label_catch_10:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/util/MissingResourceException;
	return 0x0;

}
// .method public validateFallbackLocale()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CollatorServiceShim_S_CService::validateFallbackLocale()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>(""));

}


