// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\CurrencyData$1.smali
#include "java2ctype.h"
#include "android.icu.impl.CurrencyData_S_1.h"
#include "android.icu.impl.CurrencyData_S_CurrencyDisplayInfo.h"
#include "android.icu.impl.CurrencyData_S_DefaultInfo.h"
#include "android.icu.util.ULocale.h"

// .method constructor <init>()V
android::icu::impl::CurrencyData_S_1::CurrencyData_S_1()
{
	
	// 026    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public getInstance(Landroid/icu/util/ULocale;Z)Landroid/icu/impl/CurrencyData$CurrencyDisplayInfo;
std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencyDisplayInfo> android::icu::impl::CurrencyData_S_1::getInstance(std::shared_ptr<android::icu::util::ULocale> locale,bool withFallback)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "withFallback"    # Z
	return android::icu::impl::CurrencyData_S_DefaultInfo::getWithFallback(withFallback);

}
// .method public hasData()Z
bool android::icu::impl::CurrencyData_S_1::hasData()
{
	
	return 0x0;

}


