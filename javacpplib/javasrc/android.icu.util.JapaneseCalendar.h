#ifndef __android_icu_util_JapaneseCalendar__
#define __android_icu_util_JapaneseCalendar__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\JapaneseCalendar.smali
#include "java2ctype.h"
#include "android.icu.util.GregorianCalendar.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"
#include "java.util.Date.h"
#include "java.util.Locale.h"

namespace android::icu::util{
class JapaneseCalendar : public android::icu::util::GregorianCalendar {
protected:
	int virtual getDefaultDayInMonth(int extendedYear,int month);
	int virtual getDefaultMonthInYear(int extendedYear);
	void virtual handleComputeFields(int julianDay);
	int virtual handleGetExtendedYear();
	int virtual handleGetLimit(int field,int limitType);
private:
	static std::shared_ptr<int[]> ERAS;
	static int GREGORIAN_EPOCH;
	static long long serialVersionUID;
public:
	static int CURRENT_ERA;
	static int HEISEI;
	static int MEIJI;
	static int SHOWA;
	static int TAISHO;
	static void static_cinit();
	JapaneseCalendar();
	JapaneseCalendar(int year,int month,int date);
	JapaneseCalendar(int era,int year,int month,int date);
	JapaneseCalendar(int year,int month,int date,int hour,int minute,int second);
	JapaneseCalendar(std::shared_ptr<android::icu::util::TimeZone> zone);
	JapaneseCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<android::icu::util::ULocale> locale);
	JapaneseCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<java::util::Locale> aLocale);
	JapaneseCalendar(std::shared_ptr<android::icu::util::ULocale> locale);
	JapaneseCalendar(std::shared_ptr<java::util::Date> date);
	JapaneseCalendar(std::shared_ptr<java::util::Locale> aLocale);
	int virtual getActualMaximum(int field);
	std::shared_ptr<java::lang::String> virtual getType();
	bool virtual haveDefaultCentury();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::JapaneseCalendar::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~JapaneseCalendar(){
	}

}; // class JapaneseCalendar
}; // namespace android::icu::util

#endif //__android_icu_util_JapaneseCalendar__

