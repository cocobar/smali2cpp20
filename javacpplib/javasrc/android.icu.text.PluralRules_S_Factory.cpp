// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRules$Factory.smali
#include "java2ctype.h"
#include "android.icu.impl.PluralRulesLoader.h"
#include "android.icu.text.PluralRules_S_Factory.h"
#include "android.icu.text.PluralRules_S_PluralType.h"
#include "android.icu.text.PluralRules.h"
#include "android.icu.util.ULocale.h"

// .method protected constructor <init>()V
android::icu::text::PluralRules_S_Factory::PluralRules_S_Factory()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 024    .end annotation
	// 028    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static getDefaultFactory()Landroid/icu/impl/PluralRulesLoader;
std::shared_ptr<android::icu::impl::PluralRulesLoader> android::icu::text::PluralRules_S_Factory::getDefaultFactory()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 037    .end annotation
	return android::icu::impl::PluralRulesLoader::loader;

}
// .method public final forLocale(Landroid/icu/util/ULocale;)Landroid/icu/text/PluralRules;
std::shared_ptr<android::icu::text::PluralRules> android::icu::text::PluralRules_S_Factory::forLocale(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 052    .end annotation
	return this->forLocale(locale, android::icu::text::PluralRules_S_PluralType::CARDINAL);

}
// .method public abstract forLocale(Landroid/icu/util/ULocale;Landroid/icu/text/PluralRules$PluralType;)Landroid/icu/text/PluralRules;
std::shared_ptr<android::icu::text::PluralRules> android::icu::text::PluralRules_S_Factory::forLocale(std::shared_ptr<android::icu::util::ULocale> var0,std::shared_ptr<android::icu::text::PluralRules_S_PluralType> var1)
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 067    .end annotation

}
// .method public abstract getAvailableULocales()[Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::text::PluralRules_S_Factory::getAvailableULocales()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 072    .end annotation

}
// .method public abstract getFunctionalEquivalent(Landroid/icu/util/ULocale;[Z)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::text::PluralRules_S_Factory::getFunctionalEquivalent(std::shared_ptr<android::icu::util::ULocale> var0,std::shared_ptr<bool[]> var1)
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 077    .end annotation

}
// .method public abstract hasOverride(Landroid/icu/util/ULocale;)Z
bool android::icu::text::PluralRules_S_Factory::hasOverride(std::shared_ptr<android::icu::util::ULocale> var0)
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 082    .end annotation

}


