#ifndef __android_icu_impl_duration_TimeUnit__
#define __android_icu_impl_duration_TimeUnit__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\TimeUnit.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl::duration{
class TimeUnit : public java::lang::Object {
protected:
private:
	TimeUnit(std::shared_ptr<java::lang::String> name,int ordinal);
public:
	static std::shared_ptr<android::icu::impl::duration::TimeUnit> DAY;
	static std::shared_ptr<android::icu::impl::duration::TimeUnit> HOUR;
	static std::shared_ptr<android::icu::impl::duration::TimeUnit> MILLISECOND;
	static std::shared_ptr<android::icu::impl::duration::TimeUnit> MINUTE;
	static std::shared_ptr<android::icu::impl::duration::TimeUnit> MONTH;
	static std::shared_ptr<android::icu::impl::duration::TimeUnit> SECOND;
	static std::shared_ptr<android::icu::impl::duration::TimeUnit> WEEK;
	static std::shared_ptr<android::icu::impl::duration::TimeUnit> YEAR;
	static std::shared_ptr<long long[]> approxDurations;
	static std::shared_ptr<std::vector<android::icu::impl::duration::TimeUnit>> units;
	std::shared_ptr<java::lang::String> name;
	unsigned char ordinal;
	static void static_cinit();
	std::shared_ptr<android::icu::impl::duration::TimeUnit> virtual larger();
	int virtual ordinal();
	std::shared_ptr<android::icu::impl::duration::TimeUnit> virtual smaller();
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::duration::TimeUnit::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~TimeUnit(){
	}

}; // class TimeUnit
}; // namespace android::icu::impl::duration

#endif //__android_icu_impl_duration_TimeUnit__

