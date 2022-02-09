#ifndef __android_icu_impl_duration_BasicPeriodFormatterFactory__
#define __android_icu_impl_duration_BasicPeriodFormatterFactory__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\BasicPeriodFormatterFactory.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.BasicPeriodFormatterFactory_S_Customizations.h"
#include "android.icu.impl.duration.PeriodFormatter.h"
#include "android.icu.impl.duration.PeriodFormatterFactory.h"
#include "android.icu.impl.duration.impl.PeriodFormatterData.h"
#include "android.icu.impl.duration.impl.PeriodFormatterDataService.h"
#include "java.lang.String.h"

namespace android::icu::impl::duration{
class BasicPeriodFormatterFactory : public android::icu::impl::duration::PeriodFormatterFactory {
protected:
private:
	std::shared_ptr<android::icu::impl::duration::BasicPeriodFormatterFactory_S_Customizations> customizations;
	bool customizationsInUse;
	std::shared_ptr<android::icu::impl::duration::impl::PeriodFormatterData> data;
	std::shared_ptr<android::icu::impl::duration::impl::PeriodFormatterDataService> ds;
	std::shared_ptr<java::lang::String> localeName;
	std::shared_ptr<android::icu::impl::duration::BasicPeriodFormatterFactory_S_Customizations> virtual updateCustomizations();
public:
	BasicPeriodFormatterFactory(std::shared_ptr<android::icu::impl::duration::impl::PeriodFormatterDataService> ds);
	static std::shared_ptr<android::icu::impl::duration::BasicPeriodFormatterFactory> getDefault();
	int virtual getCountVariant();
	std::shared_ptr<android::icu::impl::duration::impl::PeriodFormatterData> virtual getData();
	std::shared_ptr<android::icu::impl::duration::impl::PeriodFormatterData> virtual getData(std::shared_ptr<java::lang::String> locName);
	bool virtual getDisplayLimit();
	bool virtual getDisplayPastFuture();
	std::shared_ptr<android::icu::impl::duration::PeriodFormatter> virtual getFormatter();
	int virtual getSeparatorVariant();
	int virtual getUnitVariant();
	std::shared_ptr<android::icu::impl::duration::PeriodFormatterFactory> virtual setCountVariant(int variant);
	std::shared_ptr<android::icu::impl::duration::PeriodFormatterFactory> virtual setDisplayLimit(bool display);
	std::shared_ptr<android::icu::impl::duration::PeriodFormatterFactory> virtual setDisplayPastFuture(bool display);
	std::shared_ptr<android::icu::impl::duration::PeriodFormatterFactory> virtual setLocale(std::shared_ptr<java::lang::String> localeName);
	std::shared_ptr<android::icu::impl::duration::PeriodFormatterFactory> virtual setSeparatorVariant(int variant);
	std::shared_ptr<android::icu::impl::duration::PeriodFormatterFactory> virtual setUnitVariant(int variant);
public:
	virtual ~BasicPeriodFormatterFactory(){
	}

}; // class BasicPeriodFormatterFactory
}; // namespace android::icu::impl::duration

#endif //__android_icu_impl_duration_BasicPeriodFormatterFactory__

