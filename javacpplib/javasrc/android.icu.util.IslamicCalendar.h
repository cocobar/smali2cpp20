#ifndef __android_icu_util_IslamicCalendar__
#define __android_icu_util_IslamicCalendar__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\IslamicCalendar.smali
#include "java2ctype.h"
#include "android.icu.impl.CalendarAstronomer.h"
#include "android.icu.impl.CalendarCache.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.IslamicCalendar_S_CalculationType.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale.h"
#include "java.io.ObjectInputStream.h"
#include "java.lang.String.h"
#include "java.util.Date.h"
#include "java.util.Locale.h"

namespace android::icu::util{
class IslamicCalendar : public android::icu::util::Calendar {
protected:
	void virtual handleComputeFields(int julianDay);
	int virtual handleComputeMonthStart(int eyear,int month,bool useMonth);
	int virtual handleGetExtendedYear();
	int virtual handleGetLimit(int field,int limitType);
	int virtual handleGetMonthLength(int extendedYear,int month);
	int virtual handleGetYearLength(int extendedYear);
private:
	static long long ASTRONOMICAL_EPOC;
	static long long CIVIL_EPOC;
	static long long HIJRA_MILLIS;
	static std::shared_ptr<int[][]> LIMITS;
	static std::shared_ptr<int[]> UMALQURA_MONTHLENGTH;
	static int UMALQURA_YEAR_END;
	static int UMALQURA_YEAR_START;
	static std::shared_ptr<unsigned char[]> UMALQURA_YEAR_START_ESTIMATE_FIX;
	static std::shared_ptr<android::icu::impl::CalendarAstronomer> astro;
	static std::shared_ptr<android::icu::impl::CalendarCache> cache;
	static long long serialVersionUID;
	std::shared_ptr<android::icu::util::IslamicCalendar_S_CalculationType> cType;
	bool civil;
	static bool civilLeapYear(int year);
	long long virtual monthStart(int year,int month);
	void virtual readObject(std::shared_ptr<java::io::ObjectInputStream> in);
	void virtual setCalcTypeForLocale(std::shared_ptr<android::icu::util::ULocale> locale);
	static long long trueMonthStart(long long month);
	long long virtual yearStart(int year);
public:
	static int DHU_AL_HIJJAH;
	static int DHU_AL_QIDAH;
	static int JUMADA_1;
	static int JUMADA_2;
	static int MUHARRAM;
	static int RABI_1;
	static int RABI_2;
	static int RAJAB;
	static int RAMADAN;
	static int SAFAR;
	static int SHABAN;
	static int SHAWWAL;
	static void static_cinit();
	IslamicCalendar();
	IslamicCalendar(int year,int month,int date);
	IslamicCalendar(int year,int month,int date,int hour,int minute,int second);
	IslamicCalendar(std::shared_ptr<android::icu::util::TimeZone> zone);
	IslamicCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<android::icu::util::ULocale> locale);
	IslamicCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<java::util::Locale> aLocale);
	IslamicCalendar(std::shared_ptr<android::icu::util::ULocale> locale);
	IslamicCalendar(std::shared_ptr<java::util::Date> date);
	IslamicCalendar(std::shared_ptr<java::util::Locale> aLocale);
	static double moonAge(long long time);
	std::shared_ptr<android::icu::util::IslamicCalendar_S_CalculationType> virtual getCalculationType();
	std::shared_ptr<java::lang::String> virtual getType();
	bool virtual isCivil();
	void virtual setCalculationType(std::shared_ptr<android::icu::util::IslamicCalendar_S_CalculationType> type);
	void virtual setCivil(bool beCivil);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::IslamicCalendar::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~IslamicCalendar(){
	}

}; // class IslamicCalendar
}; // namespace android::icu::util

#endif //__android_icu_util_IslamicCalendar__

