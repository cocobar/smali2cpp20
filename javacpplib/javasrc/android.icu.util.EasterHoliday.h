#ifndef __android_icu_util_EasterHoliday__
#define __android_icu_util_EasterHoliday__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\EasterHoliday.smali
#include "java2ctype.h"
#include "android.icu.util.Holiday.h"
#include "java.lang.String.h"

namespace android::icu::util{
class EasterHoliday : public android::icu::util::Holiday {
protected:
private:
public:
	static std::shared_ptr<android::icu::util::EasterHoliday> ASCENSION;
	static std::shared_ptr<android::icu::util::EasterHoliday> ASH_WEDNESDAY;
	static std::shared_ptr<android::icu::util::EasterHoliday> CORPUS_CHRISTI;
	static std::shared_ptr<android::icu::util::EasterHoliday> EASTER_MONDAY;
	static std::shared_ptr<android::icu::util::EasterHoliday> EASTER_SUNDAY;
	static std::shared_ptr<android::icu::util::EasterHoliday> GOOD_FRIDAY;
	static std::shared_ptr<android::icu::util::EasterHoliday> MAUNDY_THURSDAY;
	static std::shared_ptr<android::icu::util::EasterHoliday> PALM_SUNDAY;
	static std::shared_ptr<android::icu::util::EasterHoliday> PENTECOST;
	static std::shared_ptr<android::icu::util::EasterHoliday> SHROVE_TUESDAY;
	static std::shared_ptr<android::icu::util::EasterHoliday> WHIT_MONDAY;
	static std::shared_ptr<android::icu::util::EasterHoliday> WHIT_SUNDAY;
	static void static_cinit();
	EasterHoliday(int daysAfter,std::shared_ptr<java::lang::String> name);
	EasterHoliday(int daysAfter,bool orthodox,std::shared_ptr<java::lang::String> name);
	EasterHoliday(std::shared_ptr<java::lang::String> name);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::EasterHoliday::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~EasterHoliday(){
	}

}; // class EasterHoliday
}; // namespace android::icu::util

#endif //__android_icu_util_EasterHoliday__

