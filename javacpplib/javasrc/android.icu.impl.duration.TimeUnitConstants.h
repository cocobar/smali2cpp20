#ifndef __android_icu_impl_duration_TimeUnitConstants__
#define __android_icu_impl_duration_TimeUnitConstants__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\TimeUnitConstants.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.TimeUnit.h"
#include "java.lang.Object.h"

namespace android::icu::impl::duration{
class TimeUnitConstants : public java::lang::Object {
protected:
private:
public:
	static std::shared_ptr<android::icu::impl::duration::TimeUnit> DAY;
	static std::shared_ptr<android::icu::impl::duration::TimeUnit> HOUR;
	static std::shared_ptr<android::icu::impl::duration::TimeUnit> MILLISECOND;
	static std::shared_ptr<android::icu::impl::duration::TimeUnit> MINUTE;
	static std::shared_ptr<android::icu::impl::duration::TimeUnit> MONTH;
	static std::shared_ptr<android::icu::impl::duration::TimeUnit> SECOND;
	static std::shared_ptr<android::icu::impl::duration::TimeUnit> WEEK;
	static std::shared_ptr<android::icu::impl::duration::TimeUnit> YEAR;
	static void static_cinit();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::duration::TimeUnitConstants::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
	TimeUnitConstants(){ };
	virtual ~TimeUnitConstants(){ };

}; // class TimeUnitConstants
}; // namespace android::icu::impl::duration

#endif //__android_icu_impl_duration_TimeUnitConstants__

