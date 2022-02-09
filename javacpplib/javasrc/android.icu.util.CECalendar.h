#ifndef __android_icu_util_CECalendar__
#define __android_icu_util_CECalendar__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\CECalendar.smali
#include "java2ctype.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale.h"
#include "java.util.Date.h"
#include "java.util.Locale.h"

namespace android::icu::util{
class CECalendar : public android::icu::util::Calendar {
protected:
	CECalendar();
	CECalendar(int year,int month,int date);
	CECalendar(int year,int month,int date,int hour,int minute,int second);
	CECalendar(std::shared_ptr<android::icu::util::TimeZone> zone);
	CECalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<android::icu::util::ULocale> locale);
	CECalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<java::util::Locale> aLocale);
	CECalendar(std::shared_ptr<android::icu::util::ULocale> locale);
	CECalendar(std::shared_ptr<java::util::Date> date);
	CECalendar(std::shared_ptr<java::util::Locale> aLocale);
	int getJDEpochOffset() = 0;
	int virtual handleComputeMonthStart(int eyear,int emonth,bool useMonth);
	int virtual handleGetLimit(int field,int limitType);
	int virtual handleGetMonthLength(int extendedYear,int month);
private:
	static std::shared_ptr<int[][]> LIMITS;
	static long long serialVersionUID;
public:
	static void static_cinit();
	static int ceToJD(long long year,int month,int day,int jdEpochOffset);
	static void jdToCE(int julianDay,int jdEpochOffset,std::shared_ptr<int[]> fields);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::CECalendar::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CECalendar(){
	}

}; // class CECalendar
}; // namespace android::icu::util

#endif //__android_icu_util_CECalendar__

