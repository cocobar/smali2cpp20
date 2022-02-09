#ifndef __android_icu_impl_duration_BasicPeriodFormatter__
#define __android_icu_impl_duration_BasicPeriodFormatter__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\BasicPeriodFormatter.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.BasicPeriodFormatterFactory_S_Customizations.h"
#include "android.icu.impl.duration.BasicPeriodFormatterFactory.h"
#include "android.icu.impl.duration.Period.h"
#include "android.icu.impl.duration.PeriodFormatter.h"
#include "android.icu.impl.duration.impl.PeriodFormatterData.h"
#include "java.lang.String.h"

namespace android::icu::impl::duration{
class BasicPeriodFormatter : public android::icu::impl::duration::PeriodFormatter {
protected:
private:
	std::shared_ptr<android::icu::impl::duration::BasicPeriodFormatterFactory_S_Customizations> customs;
	std::shared_ptr<android::icu::impl::duration::impl::PeriodFormatterData> data;
	std::shared_ptr<android::icu::impl::duration::BasicPeriodFormatterFactory> factory;
	std::shared_ptr<java::lang::String> localeName;
	std::shared_ptr<java::lang::String> virtual format(int cVar0,bool inFuture,std::shared_ptr<int[]> counts);
public:
	BasicPeriodFormatter(std::shared_ptr<android::icu::impl::duration::BasicPeriodFormatterFactory> factory,std::shared_ptr<java::lang::String> localeName,std::shared_ptr<android::icu::impl::duration::impl::PeriodFormatterData> data,std::shared_ptr<android::icu::impl::duration::BasicPeriodFormatterFactory_S_Customizations> customs);
	std::shared_ptr<java::lang::String> virtual format(std::shared_ptr<android::icu::impl::duration::Period> period);
	std::shared_ptr<android::icu::impl::duration::PeriodFormatter> virtual withLocale(std::shared_ptr<java::lang::String> locName);
public:
	virtual ~BasicPeriodFormatter(){
	}

}; // class BasicPeriodFormatter
}; // namespace android::icu::impl::duration

#endif //__android_icu_impl_duration_BasicPeriodFormatter__

