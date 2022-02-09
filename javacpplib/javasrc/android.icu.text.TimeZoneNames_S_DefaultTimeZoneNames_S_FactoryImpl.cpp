// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\TimeZoneNames$DefaultTimeZoneNames$FactoryImpl.smali
#include "java2ctype.h"
#include "android.icu.text.TimeZoneNames_S_DefaultTimeZoneNames_S_FactoryImpl.h"
#include "android.icu.text.TimeZoneNames_S_DefaultTimeZoneNames.h"
#include "android.icu.text.TimeZoneNames.h"
#include "android.icu.util.ULocale.h"

// .method public constructor <init>()V
android::icu::text::TimeZoneNames_S_DefaultTimeZoneNames_S_FactoryImpl::TimeZoneNames_S_DefaultTimeZoneNames_S_FactoryImpl()
{
	
	// 023    invoke-direct {p0}, Landroid/icu/text/TimeZoneNames$Factory;-><init>()V
	return;

}
// .method public getTimeZoneNames(Landroid/icu/util/ULocale;)Landroid/icu/text/TimeZoneNames;
std::shared_ptr<android::icu::text::TimeZoneNames> android::icu::text::TimeZoneNames_S_DefaultTimeZoneNames_S_FactoryImpl::getTimeZoneNames(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	return android::icu::text::TimeZoneNames_S_DefaultTimeZoneNames::INSTANCE;

}


