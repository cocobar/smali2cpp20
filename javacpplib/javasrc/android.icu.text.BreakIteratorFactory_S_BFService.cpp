// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\BreakIteratorFactory$BFService.smali
#include "java2ctype.h"
#include "android.icu.impl.ICULocaleService.h"
#include "android.icu.impl.ICUService_S_Factory.h"
#include "android.icu.text.BreakIteratorFactory_S_BFService_S_1RBBreakIteratorFactory.h"
#include "android.icu.text.BreakIteratorFactory_S_BFService.h"
#include "java.lang.String.h"

// .method constructor <init>()V
android::icu::text::BreakIteratorFactory_S_BFService::BreakIteratorFactory_S_BFService()
{
	
	std::shared_ptr<android::icu::text::BreakIteratorFactory_S_BFService_S_1RBBreakIteratorFactory> cVar0;
	
	android::icu::impl::ICULocaleService::(std::make_shared<java::lang::String>(std::make_shared<char[]>("BreakIterator")));
	cVar0 = std::make_shared<android::icu::text::BreakIteratorFactory_S_BFService_S_1RBBreakIteratorFactory>(this);
	this->registerFactory(cVar0);
	this->markDefault();
	return;

}
// .method public validateFallbackLocale()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::BreakIteratorFactory_S_BFService::validateFallbackLocale()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>(""));

}


