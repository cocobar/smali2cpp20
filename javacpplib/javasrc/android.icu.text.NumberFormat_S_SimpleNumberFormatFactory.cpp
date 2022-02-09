// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\NumberFormat$SimpleNumberFormatFactory.smali
#include "java2ctype.h"
#include "android.icu.text.NumberFormat_S_SimpleNumberFormatFactory.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Collections.h"
#include "java.util.Locale.h"
#include "java.util.Set.h"

// .method public constructor <init>(Landroid/icu/util/ULocale;)V
android::icu::text::NumberFormat_S_SimpleNumberFormatFactory::NumberFormat_S_SimpleNumberFormatFactory(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	android::icu::text::NumberFormat_S_SimpleNumberFormatFactory::(locale, 0x1);
	return;

}
// .method public constructor <init>(Landroid/icu/util/ULocale;Z)V
android::icu::text::NumberFormat_S_SimpleNumberFormatFactory::NumberFormat_S_SimpleNumberFormatFactory(std::shared_ptr<android::icu::util::ULocale> locale,bool visible)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "visible"    # Z
	// 054    invoke-direct {p0}, Landroid/icu/text/NumberFormat$NumberFormatFactory;-><init>()V
	this->localeNames = java::util::Collections::singleton(locale->getBaseName());
	this->visible = visible;
	return;

}
// .method public constructor <init>(Ljava/util/Locale;)V
android::icu::text::NumberFormat_S_SimpleNumberFormatFactory::NumberFormat_S_SimpleNumberFormatFactory(std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p1, "locale"    # Ljava/util/Locale;
	android::icu::text::NumberFormat_S_SimpleNumberFormatFactory::(locale, 0x1);
	return;

}
// .method public constructor <init>(Ljava/util/Locale;Z)V
android::icu::text::NumberFormat_S_SimpleNumberFormatFactory::NumberFormat_S_SimpleNumberFormatFactory(std::shared_ptr<java::util::Locale> locale,bool visible)
{
	
	//    .param p1, "locale"    # Ljava/util/Locale;
	//    .param p2, "visible"    # Z
	// 095    invoke-direct {p0}, Landroid/icu/text/NumberFormat$NumberFormatFactory;-><init>()V
	this->localeNames = java::util::Collections::singleton(android::icu::util::ULocale::forLocale(locale)->getBaseName());
	this->visible = visible;
	return;

}
// .method public final getSupportedLocaleNames()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::text::NumberFormat_S_SimpleNumberFormatFactory::getSupportedLocaleNames()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 124        value = {
	// 125            "()",
	// 126            "Ljava/util/Set",
	// 127            "<",
	// 128            "Ljava/lang/String;",
	// 129            ">;"
	// 130        }
	// 131    .end annotation
	return this->localeNames;

}
// .method public final visible()Z
bool android::icu::text::NumberFormat_S_SimpleNumberFormatFactory::visible()
{
	
	return this->visible;

}


