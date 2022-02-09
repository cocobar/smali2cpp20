#ifndef __android_icu_util_IndianCalendar__
#define __android_icu_util_IndianCalendar__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\IndianCalendar.smali
#include "java2ctype.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"
#include "java.util.Date.h"
#include "java.util.Locale.h"

namespace android::icu::util{
class IndianCalendar : public android::icu::util::Calendar {
protected:
	void virtual handleComputeFields(int julianDay);
	int virtual handleComputeMonthStart(int cVar0,int cVar1,bool useMonth);
	int virtual handleGetExtendedYear();
	int virtual handleGetLimit(int field,int limitType);
	int virtual handleGetMonthLength(int cVar2,int cVar3);
	int virtual handleGetYearLength(int extendedYear);
private:
	static int INDIAN_ERA_START;
	static int INDIAN_YEAR_START;
	static std::shared_ptr<int[][]> LIMITS;
	static long long serialVersionUID;
	static double IndianToJD(int year,int month,int date);
	static double gregorianToJD(int year,int month,int date);
	static bool isGregorianLeap(int year);
	static int jdToGregorian(double jd);
public:
	static int AGRAHAYANA;
	static int ASADHA;
	static int ASVINA;
	static int BHADRA;
	static int CHAITRA;
	static int IE;
	static int JYAISTHA;
	static int KARTIKA;
	static int MAGHA;
	static int PAUSA;
	static int PHALGUNA;
	static int SRAVANA;
	static int VAISAKHA;
	static void static_cinit();
	IndianCalendar();
	IndianCalendar(int year,int month,int date);
	IndianCalendar(int year,int month,int date,int hour,int minute,int second);
	IndianCalendar(std::shared_ptr<android::icu::util::TimeZone> zone);
	IndianCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<android::icu::util::ULocale> locale);
	IndianCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<java::util::Locale> aLocale);
	IndianCalendar(std::shared_ptr<android::icu::util::ULocale> locale);
	IndianCalendar(std::shared_ptr<java::util::Date> date);
	IndianCalendar(std::shared_ptr<java::util::Locale> aLocale);
	std::shared_ptr<java::lang::String> virtual getType();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::IndianCalendar::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~IndianCalendar(){
	}

}; // class IndianCalendar
}; // namespace android::icu::util

#endif //__android_icu_util_IndianCalendar__

