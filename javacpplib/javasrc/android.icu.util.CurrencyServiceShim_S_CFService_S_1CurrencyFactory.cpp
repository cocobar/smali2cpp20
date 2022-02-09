// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\CurrencyServiceShim$CFService$1CurrencyFactory.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUService.h"
#include "android.icu.util.Currency.h"
#include "android.icu.util.CurrencyServiceShim_S_CFService_S_1CurrencyFactory.h"
#include "android.icu.util.CurrencyServiceShim_S_CFService.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"

// .method constructor <init>(Landroid/icu/util/CurrencyServiceShim$CFService;)V
android::icu::util::CurrencyServiceShim_S_CFService_S_1CurrencyFactory::CurrencyServiceShim_S_CFService_S_1CurrencyFactory(std::shared_ptr<android::icu::util::CurrencyServiceShim_S_CFService> this_S_1)
{
	
	//    .param p1, "this$1"    # Landroid/icu/util/CurrencyServiceShim$CFService;
	this->this_S_1 = this_S_1;
	// 030    invoke-direct {p0}, Landroid/icu/impl/ICULocaleService$ICUResourceBundleFactory;-><init>()V
	return;

}
// .method protected handleCreate(Landroid/icu/util/ULocale;ILandroid/icu/impl/ICUService;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::util::CurrencyServiceShim_S_CFService_S_1CurrencyFactory::handleCreate(std::shared_ptr<android::icu::util::ULocale> loc,int kind,std::shared_ptr<android::icu::impl::ICUService> srvc)
{
	
	//    .param p1, "loc"    # Landroid/icu/util/ULocale;
	//    .param p2, "kind"    # I
	//    .param p3, "srvc"    # Landroid/icu/impl/ICUService;
	return android::icu::util::Currency::createCurrency(loc);

}


