// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUCurrencyDisplayInfoProvider.smali
#include "java2ctype.h"
#include "android.icu.impl.CurrencyData_S_CurrencyDisplayInfo.h"
#include "android.icu.impl.ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo.h"
#include "android.icu.impl.ICUCurrencyDisplayInfoProvider.h"
#include "android.icu.impl.ICUResourceBundle_S_OpenType.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"
#include "java.util.MissingResourceException.h"

// .method public constructor <init>()V
android::icu::impl::ICUCurrencyDisplayInfoProvider::ICUCurrencyDisplayInfoProvider()
{
	
	// 023    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public getInstance(Landroid/icu/util/ULocale;Z)Landroid/icu/impl/CurrencyData$CurrencyDisplayInfo;
std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencyDisplayInfo> android::icu::impl::ICUCurrencyDisplayInfoProvider::getInstance(std::shared_ptr<android::icu::util::ULocale> locale,bool withFallback)
{
	
	std::shared_ptr<android::icu::impl::ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "withFallback"    # Z
	if ( !(withFallback) )  
		goto label_cond_11;
	//    .local v1, "rb":Landroid/icu/impl/ICUResourceBundle;
label_goto_b:
	cVar0 = std::make_shared<android::icu::impl::ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo>(rb, withFallback);
	return cVar0;
	// 059    .line 45
	// 060    .end local v1    # "rb":Landroid/icu/impl/ICUResourceBundle;
label_cond_11:
	try {
	//label_try_start_11:
	//label_try_end_19:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1b;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_11 .. :try_end_19} :catch_1b
	//    .restart local v1    # "rb":Landroid/icu/impl/ICUResourceBundle;
	goto label_goto_b;
	// 077    .line 46
	// 078    .end local v1    # "rb":Landroid/icu/impl/ICUResourceBundle;
label_catch_1b:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/util/MissingResourceException;
	return 0x0;

}
// .method public hasData()Z
bool android::icu::impl::ICUCurrencyDisplayInfoProvider::hasData()
{
	
	return 0x1;

}


