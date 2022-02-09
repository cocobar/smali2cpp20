#ifndef __android_icu_impl_duration_PeriodBuilderImpl__
#define __android_icu_impl_duration_PeriodBuilderImpl__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\PeriodBuilderImpl.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.BasicPeriodBuilderFactory_S_Settings.h"
#include "android.icu.impl.duration.Period.h"
#include "android.icu.impl.duration.PeriodBuilder.h"
#include "android.icu.impl.duration.TimeUnit.h"
#include "java.lang.String.h"
#include "java.util.TimeZone.h"

namespace android::icu::impl::duration{
class PeriodBuilderImpl : public android::icu::impl::duration::PeriodBuilder {
protected:
	std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> settings;
	PeriodBuilderImpl(std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> settings);
	std::shared_ptr<android::icu::impl::duration::Period> handleCreate(long long var0,long long var1,bool var2) = 0;
	std::shared_ptr<android::icu::impl::duration::PeriodBuilder> withSettings(std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> var0) = 0;
private:
public:
	long long virtual approximateDurationOf(std::shared_ptr<android::icu::impl::duration::TimeUnit> unit);
	std::shared_ptr<android::icu::impl::duration::Period> virtual create(long long duration);
	std::shared_ptr<android::icu::impl::duration::Period> virtual createWithReferenceDate(long long cVar0,long long referenceDate);
	std::shared_ptr<android::icu::impl::duration::PeriodBuilder> virtual withLocale(std::shared_ptr<java::lang::String> localeName);
	std::shared_ptr<android::icu::impl::duration::PeriodBuilder> virtual withTimeZone(std::shared_ptr<java::util::TimeZone> timeZone);
public:
	virtual ~PeriodBuilderImpl(){
	}

}; // class PeriodBuilderImpl
}; // namespace android::icu::impl::duration

#endif //__android_icu_impl_duration_PeriodBuilderImpl__

