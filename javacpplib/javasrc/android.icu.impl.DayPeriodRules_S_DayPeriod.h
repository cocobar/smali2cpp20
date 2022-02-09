#ifndef __android_icu_impl_DayPeriodRules_S_DayPeriod__
#define __android_icu_impl_DayPeriodRules_S_DayPeriod__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\DayPeriodRules$DayPeriod.smali
#include "java2ctype.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class DayPeriodRules_S_DayPeriod : public java::lang::Enum<android::icu::impl::DayPeriodRules_S_DayPeriod> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::impl::DayPeriodRules_S_DayPeriod>> _S_VALUES;
	DayPeriodRules_S_DayPeriod(std::shared_ptr<java::lang::String> var0,int var1);
	static std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> fromStringOrNull(std::shared_ptr<java::lang::CharSequence> str);
public:
	static std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> AFTERNOON1;
	static std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> AFTERNOON2;
	static std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> AM;
	static std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> EVENING1;
	static std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> EVENING2;
	static std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> MIDNIGHT;
	static std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> MORNING1;
	static std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> MORNING2;
	static std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> NIGHT1;
	static std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> NIGHT2;
	static std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> NOON;
	static std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> PM;
	static std::shared_ptr<std::vector<android::icu::impl::DayPeriodRules_S_DayPeriod>> VALUES;
	static std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> _wrap0(std::shared_ptr<java::lang::CharSequence> str);
	static void static_cinit();
	static std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::DayPeriodRules_S_DayPeriod::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~DayPeriodRules_S_DayPeriod(){
	}

}; // class DayPeriodRules_S_DayPeriod
}; // namespace android::icu::impl

#endif //__android_icu_impl_DayPeriodRules_S_DayPeriod__

