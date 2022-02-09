// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\NumberFormatServiceShim$NFService.smali
#include "java2ctype.h"
#include "android.icu.impl.ICULocaleService.h"
#include "android.icu.impl.ICUService_S_Factory.h"
#include "android.icu.text.NumberFormatServiceShim_S_NFService_S_1RBNumberFormatFactory.h"
#include "android.icu.text.NumberFormatServiceShim_S_NFService.h"
#include "java.lang.String.h"

// .method constructor <init>()V
android::icu::text::NumberFormatServiceShim_S_NFService::NumberFormatServiceShim_S_NFService()
{
	
	std::shared_ptr<android::icu::text::NumberFormatServiceShim_S_NFService_S_1RBNumberFormatFactory> cVar0;
	
	android::icu::impl::ICULocaleService::(std::make_shared<java::lang::String>(std::make_shared<char[]>("NumberFormat")));
	cVar0 = std::make_shared<android::icu::text::NumberFormatServiceShim_S_NFService_S_1RBNumberFormatFactory>(this);
	this->registerFactory(cVar0);
	this->markDefault();
	return;

}


