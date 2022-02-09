#ifndef __android_icu_util_Holiday__
#define __android_icu_util_Holiday__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\Holiday.smali
#include "java2ctype.h"
#include "android.icu.util.DateRule.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"
#include "java.util.Date.h"
#include "java.util.Locale.h"

namespace android::icu::util{
class Holiday : public android::icu::util::DateRule {
protected:
	Holiday(std::shared_ptr<java::lang::String> name,std::shared_ptr<android::icu::util::DateRule> rule);
private:
	static std::shared_ptr<std::vector<android::icu::util::Holiday>> noHolidays;
	std::shared_ptr<java::lang::String> name;
	std::shared_ptr<android::icu::util::DateRule> rule;
public:
	static void static_cinit();
	static std::shared_ptr<android::icu::util::Holiday> getHolidays();
	static std::shared_ptr<android::icu::util::Holiday> getHolidays(std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<android::icu::util::Holiday> getHolidays(std::shared_ptr<java::util::Locale> locale);
	std::shared_ptr<java::util::Date> virtual firstAfter(std::shared_ptr<java::util::Date> start);
	std::shared_ptr<java::util::Date> virtual firstBetween(std::shared_ptr<java::util::Date> start,std::shared_ptr<java::util::Date> end);
	std::shared_ptr<java::lang::String> virtual getDisplayName();
	std::shared_ptr<java::lang::String> virtual getDisplayName(std::shared_ptr<android::icu::util::ULocale> locale);
	std::shared_ptr<java::lang::String> virtual getDisplayName(std::shared_ptr<java::util::Locale> locale);
	std::shared_ptr<android::icu::util::DateRule> virtual getRule();
	bool virtual isBetween(std::shared_ptr<java::util::Date> start,std::shared_ptr<java::util::Date> end);
	bool virtual isOn(std::shared_ptr<java::util::Date> date);
	void virtual setRule(std::shared_ptr<android::icu::util::DateRule> rule);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::Holiday::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Holiday(){
	}

}; // class Holiday
}; // namespace android::icu::util

#endif //__android_icu_util_Holiday__

