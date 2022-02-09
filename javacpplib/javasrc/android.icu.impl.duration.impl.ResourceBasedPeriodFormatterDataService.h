#ifndef __android_icu_impl_duration_impl_ResourceBasedPeriodFormatterDataService__
#define __android_icu_impl_duration_impl_ResourceBasedPeriodFormatterDataService__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\impl\ResourceBasedPeriodFormatterDataService.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.impl.PeriodFormatterData.h"
#include "android.icu.impl.duration.impl.PeriodFormatterDataService.h"
#include "java.lang.String.h"
#include "java.util.Collection.h"
#include "java.util.Map.h"

namespace android::icu::impl::duration::impl{
class ResourceBasedPeriodFormatterDataService : public android::icu::impl::duration::impl::PeriodFormatterDataService {
protected:
private:
	static std::shared_ptr<java::lang::String> PATH;
	static std::shared_ptr<android::icu::impl::duration::impl::ResourceBasedPeriodFormatterDataService> singleton;
	std::shared_ptr<java::util::Collection<java::lang::String>> availableLocales;
	std::shared_ptr<java::util::Map<java::lang::String,android::icu::impl::duration::impl::PeriodFormatterData>> cache;
	std::shared_ptr<android::icu::impl::duration::impl::PeriodFormatterData> lastData;
	std::shared_ptr<java::lang::String> lastLocale;
	ResourceBasedPeriodFormatterDataService();
public:
	static void static_cinit();
	static std::shared_ptr<android::icu::impl::duration::impl::ResourceBasedPeriodFormatterDataService> getInstance();
	std::shared_ptr<android::icu::impl::duration::impl::PeriodFormatterData> virtual get(std::shared_ptr<java::lang::String> cVar1);
	std::shared_ptr<java::util::Collection<java::lang::String>> virtual getAvailableLocales();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::duration::impl::ResourceBasedPeriodFormatterDataService::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ResourceBasedPeriodFormatterDataService(){
	}

}; // class ResourceBasedPeriodFormatterDataService
}; // namespace android::icu::impl::duration::impl

#endif //__android_icu_impl_duration_impl_ResourceBasedPeriodFormatterDataService__

