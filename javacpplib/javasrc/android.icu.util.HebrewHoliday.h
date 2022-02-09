#ifndef __android_icu_util_HebrewHoliday__
#define __android_icu_util_HebrewHoliday__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\HebrewHoliday.smali
#include "java2ctype.h"
#include "android.icu.util.HebrewCalendar.h"
#include "android.icu.util.Holiday.h"
#include "java.lang.String.h"

namespace android::icu::util{
class HebrewHoliday : public android::icu::util::Holiday {
protected:
private:
	static std::shared_ptr<android::icu::util::HebrewCalendar> gCalendar;
public:
	static std::shared_ptr<android::icu::util::HebrewHoliday> ESTHER;
	static std::shared_ptr<android::icu::util::HebrewHoliday> GEDALIAH;
	static std::shared_ptr<android::icu::util::HebrewHoliday> HANUKKAH;
	static std::shared_ptr<android::icu::util::HebrewHoliday> HOSHANAH_RABBAH;
	static std::shared_ptr<android::icu::util::HebrewHoliday> LAG_BOMER;
	static std::shared_ptr<android::icu::util::HebrewHoliday> PASSOVER;
	static std::shared_ptr<android::icu::util::HebrewHoliday> PESACH_SHEINI;
	static std::shared_ptr<android::icu::util::HebrewHoliday> PURIM;
	static std::shared_ptr<android::icu::util::HebrewHoliday> ROSH_HASHANAH;
	static std::shared_ptr<android::icu::util::HebrewHoliday> SELIHOT;
	static std::shared_ptr<android::icu::util::HebrewHoliday> SHAVUOT;
	static std::shared_ptr<android::icu::util::HebrewHoliday> SHEMINI_ATZERET;
	static std::shared_ptr<android::icu::util::HebrewHoliday> SHUSHAN_PURIM;
	static std::shared_ptr<android::icu::util::HebrewHoliday> SIMCHAT_TORAH;
	static std::shared_ptr<android::icu::util::HebrewHoliday> SUKKOT;
	static std::shared_ptr<android::icu::util::HebrewHoliday> TAMMUZ_17;
	static std::shared_ptr<android::icu::util::HebrewHoliday> TEVET_10;
	static std::shared_ptr<android::icu::util::HebrewHoliday> TISHA_BAV;
	static std::shared_ptr<android::icu::util::HebrewHoliday> TU_BSHEVAT;
	static std::shared_ptr<android::icu::util::HebrewHoliday> YOM_HAATZMAUT;
	static std::shared_ptr<android::icu::util::HebrewHoliday> YOM_HASHOAH;
	static std::shared_ptr<android::icu::util::HebrewHoliday> YOM_HAZIKARON;
	static std::shared_ptr<android::icu::util::HebrewHoliday> YOM_KIPPUR;
	static std::shared_ptr<android::icu::util::HebrewHoliday> YOM_YERUSHALAYIM;
	static void static_cinit();
	HebrewHoliday(int month,int date,int length,std::shared_ptr<java::lang::String> name);
	HebrewHoliday(int month,int date,std::shared_ptr<java::lang::String> name);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::HebrewHoliday::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~HebrewHoliday(){
	}

}; // class HebrewHoliday
}; // namespace android::icu::util

#endif //__android_icu_util_HebrewHoliday__

