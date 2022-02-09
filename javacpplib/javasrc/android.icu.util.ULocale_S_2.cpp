// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\ULocale$2.smali
#include "java2ctype.h"
#include "android.icu.util.ULocale_S_2.h"
#include "android.icu.util.ULocale_S_JDKLocaleHelper.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Void.h"
#include "java.util.Locale.h"

// .method constructor <init>()V
android::icu::util::ULocale_S_2::ULocale_S_2()
{
	
	// 034    invoke-direct {p0}, Landroid/icu/impl/SoftCache;-><init>()V
	return;

}
// .method protected createInstance(Ljava/util/Locale;Ljava/lang/Void;)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::util::ULocale_S_2::createInstance(std::shared_ptr<java::util::Locale> key,std::shared_ptr<java::lang::Void> unused)
{
	
	//    .param p1, "key"    # Ljava/util/Locale;
	//    .param p2, "unused"    # Ljava/lang/Void;
	return android::icu::util::ULocale_S_JDKLocaleHelper::toULocale(key);

}


