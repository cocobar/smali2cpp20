#ifndef __android_icu_impl_TimeZoneNamesFactoryImpl__
#define __android_icu_impl_TimeZoneNamesFactoryImpl__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneNamesFactoryImpl.smali
#include "java2ctype.h"
#include "android.icu.text.TimeZoneNames_S_Factory.h"
#include "android.icu.text.TimeZoneNames.h"
#include "android.icu.util.ULocale.h"

namespace android::icu::impl{
class TimeZoneNamesFactoryImpl : public android::icu::text::TimeZoneNames_S_Factory {
protected:
private:
public:
	TimeZoneNamesFactoryImpl();
	std::shared_ptr<android::icu::text::TimeZoneNames> virtual getTimeZoneNames(std::shared_ptr<android::icu::util::ULocale> locale);
public:
	virtual ~TimeZoneNamesFactoryImpl(){
	}

}; // class TimeZoneNamesFactoryImpl
}; // namespace android::icu::impl

#endif //__android_icu_impl_TimeZoneNamesFactoryImpl__

