// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\CurrencyServiceShim$CFService.smali
#include "java2ctype.h"
#include "android.icu.impl.ICULocaleService.h"
#include "android.icu.impl.ICUService_S_Factory.h"
#include "android.icu.util.CurrencyServiceShim_S_CFService_S_1CurrencyFactory.h"
#include "android.icu.util.CurrencyServiceShim_S_CFService.h"
#include "java.lang.String.h"

// .method constructor <init>()V
android::icu::util::CurrencyServiceShim_S_CFService::CurrencyServiceShim_S_CFService()
{
	
	std::shared_ptr<android::icu::util::CurrencyServiceShim_S_CFService_S_1CurrencyFactory> cVar0;
	
	android::icu::impl::ICULocaleService::(std::make_shared<java::lang::String>(std::make_shared<char[]>("Currency")));
	cVar0 = std::make_shared<android::icu::util::CurrencyServiceShim_S_CFService_S_1CurrencyFactory>(this);
	this->registerFactory(cVar0);
	this->markDefault();
	return;

}


