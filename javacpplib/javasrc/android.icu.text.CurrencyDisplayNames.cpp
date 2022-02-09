// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CurrencyDisplayNames.smali
#include "java2ctype.h"
#include "android.icu.impl.CurrencyData_S_CurrencyDisplayInfo.h"
#include "android.icu.impl.CurrencyData_S_CurrencyDisplayInfoProvider.h"
#include "android.icu.impl.CurrencyData.h"
#include "android.icu.text.CurrencyDisplayNames.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"
#include "java.util.Locale.h"
#include "java.util.Map.h"

// .method protected constructor <init>()V
android::icu::text::CurrencyDisplayNames::CurrencyDisplayNames()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 010    .end annotation
	// 014    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static getInstance(Landroid/icu/util/ULocale;)Landroid/icu/text/CurrencyDisplayNames;
std::shared_ptr<android::icu::text::CurrencyDisplayNames> android::icu::text::CurrencyDisplayNames::getInstance(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	return android::icu::impl::CurrencyData::provider->getInstance(locale, 0x1);

}
// .method public static getInstance(Landroid/icu/util/ULocale;Z)Landroid/icu/text/CurrencyDisplayNames;
std::shared_ptr<android::icu::text::CurrencyDisplayNames> android::icu::text::CurrencyDisplayNames::getInstance(std::shared_ptr<android::icu::util::ULocale> locale,bool noSubstitute)
{
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "noSubstitute"    # Z
	return android::icu::impl::CurrencyData::provider->getInstance(locale, ( noSubstitute ^ 0x1));

}
// .method public static getInstance(Ljava/util/Locale;)Landroid/icu/text/CurrencyDisplayNames;
std::shared_ptr<android::icu::text::CurrencyDisplayNames> android::icu::text::CurrencyDisplayNames::getInstance(std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p0, "locale"    # Ljava/util/Locale;
	return android::icu::text::CurrencyDisplayNames::getInstance(locale, 0x1);

}
// .method public static getInstance(Ljava/util/Locale;Z)Landroid/icu/text/CurrencyDisplayNames;
std::shared_ptr<android::icu::text::CurrencyDisplayNames> android::icu::text::CurrencyDisplayNames::getInstance(std::shared_ptr<java::util::Locale> locale,bool noSubstitute)
{
	
	//    .param p0, "locale"    # Ljava/util/Locale;
	//    .param p1, "noSubstitute"    # Z
	return android::icu::text::CurrencyDisplayNames::getInstance(android::icu::util::ULocale::forLocale(locale), noSubstitute);

}
// .method public static hasData()Z
bool android::icu::text::CurrencyDisplayNames::hasData()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 091    .end annotation
	return android::icu::impl::CurrencyData::provider->hasData();

}
// .method public abstract nameMap()Ljava/util/Map;
std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> android::icu::text::CurrencyDisplayNames::nameMap()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 120        value = {
	// 121            "()",
	// 122            "Ljava/util/Map",
	// 123            "<",
	// 124            "Ljava/lang/String;",
	// 125            "Ljava/lang/String;",
	// 126            ">;"
	// 127        }
	// 128    .end annotation

}
// .method public abstract symbolMap()Ljava/util/Map;
std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> android::icu::text::CurrencyDisplayNames::symbolMap()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 133        value = {
	// 134            "()",
	// 135            "Ljava/util/Map",
	// 136            "<",
	// 137            "Ljava/lang/String;",
	// 138            "Ljava/lang/String;",
	// 139            ">;"
	// 140        }
	// 141    .end annotation

}


