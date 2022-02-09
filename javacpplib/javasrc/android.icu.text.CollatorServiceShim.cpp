// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CollatorServiceShim.smali
#include "java2ctype.h"
#include "android.icu.impl.ICULocaleService.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.ICUService_S_Factory.h"
#include "android.icu.impl.coll.CollationLoader.h"
#include "android.icu.impl.coll.CollationTailoring.h"
#include "android.icu.text.Collator_S_CollatorFactory.h"
#include "android.icu.text.Collator.h"
#include "android.icu.text.CollatorServiceShim_S_1CFactory.h"
#include "android.icu.text.CollatorServiceShim_S_CService.h"
#include "android.icu.text.CollatorServiceShim.h"
#include "android.icu.text.RuleBasedCollator.h"
#include "android.icu.util.ICUCloneNotSupportedException.h"
#include "android.icu.util.Output.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.CloneNotSupportedException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"
#include "java.util.Locale.h"
#include "java.util.MissingResourceException.h"

static android::icu::text::CollatorServiceShim::service;
// .method static synthetic -wrap0(Landroid/icu/util/ULocale;)Landroid/icu/text/Collator;
std::shared_ptr<android::icu::text::Collator> android::icu::text::CollatorServiceShim::_wrap0(std::shared_ptr<android::icu::util::ULocale> desiredLocale)
{
	
	//    .param p0, "desiredLocale"    # Landroid/icu/util/ULocale;
	return android::icu::text::CollatorServiceShim::makeInstance(desiredLocale);

}
// .method static constructor <clinit>()V
void android::icu::text::CollatorServiceShim::static_cinit()
{
	
	std::shared_ptr<android::icu::text::CollatorServiceShim_S_CService> cVar0;
	
	cVar0 = std::make_shared<android::icu::text::CollatorServiceShim_S_CService>();
	android::icu::text::CollatorServiceShim::service = cVar0;
	return;

}
// .method constructor <init>()V
android::icu::text::CollatorServiceShim::CollatorServiceShim()
{
	
	// 051    invoke-direct {p0}, Landroid/icu/text/Collator$ServiceShim;-><init>()V
	return;

}
// .method private static final makeInstance(Landroid/icu/util/ULocale;)Landroid/icu/text/Collator;
std::shared_ptr<android::icu::text::Collator> android::icu::text::CollatorServiceShim::makeInstance(std::shared_ptr<android::icu::util::ULocale> desiredLocale)
{
	
	std::shared_ptr<android::icu::util::Output> validLocale;
	std::shared_ptr<android::icu::text::RuleBasedCollator> cVar0;
	std::shared_ptr<java::lang::Object> cVar1;
	
	//    .param p0, "desiredLocale"    # Landroid/icu/util/ULocale;
	validLocale = std::make_shared<android::icu::util::Output>(android::icu::util::ULocale::ROOT);
	//    .local v1, "validLocale":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Landroid/icu/util/ULocale;>;"
	//    .local v0, "t":Landroid/icu/impl/coll/CollationTailoring;
	cVar1 = validLocale->value;
	cVar1->checkCast("android::icu::util::ULocale");
	cVar0 = std::make_shared<android::icu::text::RuleBasedCollator>(android::icu::impl::coll::CollationLoader::loadTailoring(desiredLocale, validLocale), cVar1);
	return cVar0;

}
// .method getAvailableLocales()[Ljava/util/Locale;
std::shared_ptr<java::util::Locale> android::icu::text::CollatorServiceShim::getAvailableLocales()
{
	
	if ( !(android::icu::text::CollatorServiceShim::service->isDefault()) )  
		goto label_cond_12;
	//    .local v0, "result":[Ljava/util/Locale;
label_goto_11:
	return result;
	// 118    .line 109
	// 119    .end local v0    # "result":[Ljava/util/Locale;
label_cond_12:
	//    .restart local v0    # "result":[Ljava/util/Locale;
	goto label_goto_11;

}
// .method getAvailableULocales()[Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::text::CollatorServiceShim::getAvailableULocales()
{
	
	if ( !(android::icu::text::CollatorServiceShim::service->isDefault()) )  
		goto label_cond_12;
	//    .local v0, "result":[Landroid/icu/util/ULocale;
label_goto_11:
	return result;
	// 160    .line 121
	// 161    .end local v0    # "result":[Landroid/icu/util/ULocale;
label_cond_12:
	//    .restart local v0    # "result":[Landroid/icu/util/ULocale;
	goto label_goto_11;

}
// .method getDisplayName(Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CollatorServiceShim::getDisplayName(std::shared_ptr<android::icu::util::ULocale> objectLocale,std::shared_ptr<android::icu::util::ULocale> displayLocale)
{
	
	//    .param p1, "objectLocale"    # Landroid/icu/util/ULocale;
	//    .param p2, "displayLocale"    # Landroid/icu/util/ULocale;
	//    .local v0, "id":Ljava/lang/String;
	return android::icu::text::CollatorServiceShim::service->getDisplayName(objectLocale->getName(), displayLocale);

}
// .method getInstance(Landroid/icu/util/ULocale;)Landroid/icu/text/Collator;
std::shared_ptr<android::icu::text::Collator> android::icu::text::CollatorServiceShim::getInstance(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<android::icu::util::ICUCloneNotSupportedException> cVar1;
	std::shared_ptr<android::icu::text::Collator> coll;
	std::shared_ptr<java::util::MissingResourceException> cVar0;
	std::shared_ptr<android::icu::text::Collator> cVar2;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	try {
	//label_try_start_1:
	//    .local v0, "actualLoc":[Landroid/icu/util/ULocale;
	coll = android::icu::text::CollatorServiceShim::service->get(locale, std::make_shared<std::vector<std::vector<android::icu::util::ULocale>>>(0x1));
	coll->checkCast("android::icu::text::Collator");
	//    .local v1, "coll":Landroid/icu/text/Collator;
	if ( coll )     
		goto label_cond_23;
	cVar0 = std::make_shared<java::util::MissingResourceException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Could not locate Collator data")), std::make_shared<java::lang::String>(std::make_shared<char[]>("")), std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	// throw
	throw cVar0;
	// 232    :try_end_1c
	// 233    .catch Ljava/lang/CloneNotSupportedException; {:try_start_1 .. :try_end_1c} :catch_1c
	// 235    .line 49
	// 236    .end local v0    # "actualLoc":[Landroid/icu/util/ULocale;
	// 237    .end local v1    # "coll":Landroid/icu/text/Collator;
label_catch_1c:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/lang/CloneNotSupportedException;
	cVar1 = std::make_shared<android::icu::util::ICUCloneNotSupportedException>(getCatchExcetionFromList);
	// throw
	throw cVar1;
	// 249    .line 47
	// 250    .end local v2    # "e":Ljava/lang/CloneNotSupportedException;
	// 251    .restart local v0    # "actualLoc":[Landroid/icu/util/ULocale;
	// 252    .restart local v1    # "coll":Landroid/icu/text/Collator;
label_cond_23:
	try {
	//label_try_start_23:
	cVar2 = coll->clone();
	cVar2->checkCast("android::icu::text::Collator");
	//label_try_end_29:
	}
	catch (java::lang::CloneNotSupportedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1c;
	}
	//    .catch Ljava/lang/CloneNotSupportedException; {:try_start_23 .. :try_end_29} :catch_1c
	return cVar2;

}
// .method registerFactory(Landroid/icu/text/Collator$CollatorFactory;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::CollatorServiceShim::registerFactory(std::shared_ptr<android::icu::text::Collator_S_CollatorFactory> f)
{
	
	std::shared_ptr<android::icu::text::CollatorServiceShim_S_1CFactory> cVar0;
	
	//    .param p1, "f"    # Landroid/icu/text/Collator$CollatorFactory;
	cVar0 = std::make_shared<android::icu::text::CollatorServiceShim_S_1CFactory>(this, f);
	return android::icu::text::CollatorServiceShim::service->registerFactory(cVar0);

}
// .method registerInstance(Landroid/icu/text/Collator;Landroid/icu/util/ULocale;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::CollatorServiceShim::registerInstance(std::shared_ptr<android::icu::text::Collator> collator,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "collator"    # Landroid/icu/text/Collator;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	collator->setLocale(locale, locale);
	return android::icu::text::CollatorServiceShim::service->registerObject(collator, locale);

}
// .method unregister(Ljava/lang/Object;)Z
bool android::icu::text::CollatorServiceShim::unregister(std::shared_ptr<java::lang::Object> registryKey)
{
	
	//    .param p1, "registryKey"    # Ljava/lang/Object;
	registryKey->checkCast("android::icu::impl::ICUService_S_Factory");
	//    .end local p1    # "registryKey":Ljava/lang/Object;
	return android::icu::text::CollatorServiceShim::service->unregisterFactory(registryKey);

}


