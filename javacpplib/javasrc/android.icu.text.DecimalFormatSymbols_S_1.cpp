// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DecimalFormatSymbols$1.smali
#include "java2ctype.h"
#include "android.icu.text.DecimalFormatSymbols_S_1.h"
#include "android.icu.text.DecimalFormatSymbols_S_CacheData.h"
#include "android.icu.text.DecimalFormatSymbols.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Void.h"

// .method constructor <init>()V
android::icu::text::DecimalFormatSymbols_S_1::DecimalFormatSymbols_S_1()
{
	
	// 034    invoke-direct {p0}, Landroid/icu/impl/SoftCache;-><init>()V
	return;

}
// .method protected createInstance(Landroid/icu/util/ULocale;Ljava/lang/Void;)Landroid/icu/text/DecimalFormatSymbols$CacheData;
std::shared_ptr<android::icu::text::DecimalFormatSymbols_S_CacheData> android::icu::text::DecimalFormatSymbols_S_1::createInstance(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::Void> unused)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "unused"    # Ljava/lang/Void;
	return android::icu::text::DecimalFormatSymbols::-wrap0(locale);

}


