// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\CurrencyServiceShim.smali
#include "java2ctype.h"
#include "android.icu.impl.ICULocaleService.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.ICUService_S_Factory.h"
#include "android.icu.util.Currency.h"
#include "android.icu.util.CurrencyServiceShim_S_CFService.h"
#include "android.icu.util.CurrencyServiceShim.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.util.Locale.h"

static android::icu::util::CurrencyServiceShim::service;
// .method static constructor <clinit>()V
void android::icu::util::CurrencyServiceShim::static_cinit()
{
	
	std::shared_ptr<android::icu::util::CurrencyServiceShim_S_CFService> cVar0;
	
	cVar0 = std::make_shared<android::icu::util::CurrencyServiceShim_S_CFService>();
	android::icu::util::CurrencyServiceShim::service = cVar0;
	return;

}
// .method constructor <init>()V
android::icu::util::CurrencyServiceShim::CurrencyServiceShim()
{
	
	// 039    invoke-direct {p0}, Landroid/icu/util/Currency$ServiceShim;-><init>()V
	return;

}
// .method createInstance(Landroid/icu/util/ULocale;)Landroid/icu/util/Currency;
std::shared_ptr<android::icu::util::Currency> android::icu::util::CurrencyServiceShim::createInstance(std::shared_ptr<android::icu::util::ULocale> loc)
{
	
	std::shared_ptr<android::icu::util::Currency> curr;
	
	//    .param p1, "loc"    # Landroid/icu/util/ULocale;
	if ( !(android::icu::util::CurrencyServiceShim::service->isDefault()) )  
		goto label_cond_d;
	return android::icu::util::Currency::createCurrency(loc);
	// 067    .line 48
label_cond_d:
	curr = android::icu::util::CurrencyServiceShim::service->get(loc);
	curr->checkCast("android::icu::util::Currency");
	//    .local v0, "curr":Landroid/icu/util/Currency;
	return curr;

}
// .method getAvailableLocales()[Ljava/util/Locale;
std::shared_ptr<java::util::Locale> android::icu::util::CurrencyServiceShim::getAvailableLocales()
{
	
	if ( !(android::icu::util::CurrencyServiceShim::service->isDefault()) )  
		goto label_cond_d;
	return android::icu::impl::ICUResourceBundle::getAvailableLocales({const[class].FS-Param});
	// 102    .line 32
label_cond_d:
	return android::icu::util::CurrencyServiceShim::service->getAvailableLocales();

}
// .method getAvailableULocales()[Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::util::CurrencyServiceShim::getAvailableULocales()
{
	
	if ( !(android::icu::util::CurrencyServiceShim::service->isDefault()) )  
		goto label_cond_d;
	return android::icu::impl::ICUResourceBundle::getAvailableULocales({const[class].FS-Param});
	// 133    .line 39
label_cond_d:
	return android::icu::util::CurrencyServiceShim::service->getAvailableULocales();

}
// .method registerInstance(Landroid/icu/util/Currency;Landroid/icu/util/ULocale;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::util::CurrencyServiceShim::registerInstance(std::shared_ptr<android::icu::util::Currency> currency,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "currency"    # Landroid/icu/util/Currency;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	return android::icu::util::CurrencyServiceShim::service->registerObject(currency, locale);

}
// .method unregister(Ljava/lang/Object;)Z
bool android::icu::util::CurrencyServiceShim::unregister(std::shared_ptr<java::lang::Object> registryKey)
{
	
	//    .param p1, "registryKey"    # Ljava/lang/Object;
	registryKey->checkCast("android::icu::impl::ICUService_S_Factory");
	//    .end local p1    # "registryKey":Ljava/lang/Object;
	return android::icu::util::CurrencyServiceShim::service->unregisterFactory(registryKey);

}


