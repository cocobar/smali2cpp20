// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneNamesFactoryImpl.smali
#include "java2ctype.h"
#include "android.icu.impl.TimeZoneNamesFactoryImpl.h"
#include "android.icu.impl.TimeZoneNamesImpl.h"
#include "android.icu.text.TimeZoneNames.h"
#include "android.icu.util.ULocale.h"

// .method public constructor <init>()V
android::icu::impl::TimeZoneNamesFactoryImpl::TimeZoneNamesFactoryImpl()
{
	
	// 012    invoke-direct {p0}, Landroid/icu/text/TimeZoneNames$Factory;-><init>()V
	return;

}
// .method public getTimeZoneNames(Landroid/icu/util/ULocale;)Landroid/icu/text/TimeZoneNames;
std::shared_ptr<android::icu::text::TimeZoneNames> android::icu::impl::TimeZoneNamesFactoryImpl::getTimeZoneNames(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<android::icu::impl::TimeZoneNamesImpl> cVar0;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	cVar0 = std::make_shared<android::icu::impl::TimeZoneNamesImpl>(locale);
	return cVar0;

}


