// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\NumberFormatServiceShim.smali
#include "java2ctype.h"
#include "android.icu.impl.ICULocaleService.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.ICUService_S_Factory.h"
#include "android.icu.text.NumberFormat_S_NumberFormatFactory.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.text.NumberFormatServiceShim_S_NFFactory.h"
#include "android.icu.text.NumberFormatServiceShim_S_NFService.h"
#include "android.icu.text.NumberFormatServiceShim.h"
#include "android.icu.util.Currency.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Locale.h"
#include "java.util.MissingResourceException.h"

static android::icu::text::NumberFormatServiceShim::service;
// .method static constructor <clinit>()V
void android::icu::text::NumberFormatServiceShim::static_cinit()
{
	
	std::shared_ptr<android::icu::text::NumberFormatServiceShim_S_NFService> cVar0;
	
	cVar0 = std::make_shared<android::icu::text::NumberFormatServiceShim_S_NFService>();
	android::icu::text::NumberFormatServiceShim::service = cVar0;
	return;

}
// .method constructor <init>()V
android::icu::text::NumberFormatServiceShim::NumberFormatServiceShim()
{
	
	// 040    invoke-direct {p0}, Landroid/icu/text/NumberFormat$NumberFormatShim;-><init>()V
	return;

}
// .method createInstance(Landroid/icu/util/ULocale;I)Landroid/icu/text/NumberFormat;
std::shared_ptr<android::icu::text::NumberFormat> android::icu::text::NumberFormatServiceShim::createInstance(std::shared_ptr<android::icu::util::ULocale> desiredLocale,int choice)
{
	
	int cVar0;
	std::shared<std::vector<std::vector<android::icu::util::ULocale>>> actualLoc;
	std::shared_ptr<android::icu::text::NumberFormat> fmt;
	std::shared_ptr<java::util::MissingResourceException> cVar1;
	std::shared_ptr<android::icu::util::ULocale> uloc;
	
	//    .param p1, "desiredLocale"    # Landroid/icu/util/ULocale;
	//    .param p2, "choice"    # I
	cVar0 = 0x1;
	actualLoc = std::make_shared<std::vector<std::vector<android::icu::util::ULocale>>>(cVar0);
	//    .local v0, "actualLoc":[Landroid/icu/util/ULocale;
	fmt = android::icu::text::NumberFormatServiceShim::service->get(desiredLocale, choice, actualLoc);
	fmt->checkCast("android::icu::text::NumberFormat");
	//    .local v1, "fmt":Landroid/icu/text/NumberFormat;
	if ( fmt )     
		goto label_cond_1c;
	cVar1 = std::make_shared<java::util::MissingResourceException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unable to construct NumberFormat")), std::make_shared<java::lang::String>(std::make_shared<char[]>("")), std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	// throw
	throw cVar1;
	// 085    .line 92
label_cond_1c:
	fmt = fmt->clone();
	//    .end local v1    # "fmt":Landroid/icu/text/NumberFormat;
	fmt->checkCast("android::icu::text::NumberFormat");
	//    .restart local v1    # "fmt":Landroid/icu/text/NumberFormat;
	if ( choice == cVar0 )
		goto label_cond_27;
	if ( choice != 0x5 )
		goto label_cond_35;
label_cond_27:
label_goto_27:
	fmt->setCurrency(android::icu::util::Currency::getInstance(desiredLocale));
label_cond_2e:
	uloc = actualLoc[0x0];
	//    .local v2, "uloc":Landroid/icu/util/ULocale;
	fmt->setLocale(uloc, uloc);
	return fmt;
	// 125    .line 98
	// 126    .end local v2    # "uloc":Landroid/icu/util/ULocale;
label_cond_35:
	if ( choice != 0x6 )
		goto label_cond_2e;
	goto label_goto_27;

}
// .method getAvailableLocales()[Ljava/util/Locale;
std::shared_ptr<java::util::Locale> android::icu::text::NumberFormatServiceShim::getAvailableLocales()
{
	
	if ( !(android::icu::text::NumberFormatServiceShim::service->isDefault()) )  
		goto label_cond_d;
	return android::icu::impl::ICUResourceBundle::getAvailableLocales({const[class].FS-Param});
	// 155    .line 34
label_cond_d:
	return android::icu::text::NumberFormatServiceShim::service->getAvailableLocales();

}
// .method getAvailableULocales()[Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::text::NumberFormatServiceShim::getAvailableULocales()
{
	
	if ( !(android::icu::text::NumberFormatServiceShim::service->isDefault()) )  
		goto label_cond_d;
	return android::icu::impl::ICUResourceBundle::getAvailableULocales({const[class].FS-Param});
	// 186    .line 41
label_cond_d:
	return android::icu::text::NumberFormatServiceShim::service->getAvailableULocales();

}
// .method registerFactory(Landroid/icu/text/NumberFormat$NumberFormatFactory;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::NumberFormatServiceShim::registerFactory(std::shared_ptr<android::icu::text::NumberFormat_S_NumberFormatFactory> factory)
{
	
	std::shared_ptr<android::icu::text::NumberFormatServiceShim_S_NFFactory> cVar0;
	
	//    .param p1, "factory"    # Landroid/icu/text/NumberFormat$NumberFormatFactory;
	cVar0 = std::make_shared<android::icu::text::NumberFormatServiceShim_S_NFFactory>(factory);
	return android::icu::text::NumberFormatServiceShim::service->registerFactory(cVar0);

}
// .method unregister(Ljava/lang/Object;)Z
bool android::icu::text::NumberFormatServiceShim::unregister(std::shared_ptr<java::lang::Object> registryKey)
{
	
	//    .param p1, "registryKey"    # Ljava/lang/Object;
	registryKey->checkCast("android::icu::impl::ICUService_S_Factory");
	//    .end local p1    # "registryKey":Ljava/lang/Object;
	return android::icu::text::NumberFormatServiceShim::service->unregisterFactory(registryKey);

}


