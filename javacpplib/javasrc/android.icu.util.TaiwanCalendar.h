#ifndef __android_icu_util_TaiwanCalendar__
#define __android_icu_util_TaiwanCalendar__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\TaiwanCalendar.smali
#include "java2ctype.h"
#include "android.icu.util.GregorianCalendar.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"
#include "java.util.Date.h"
#include "java.util.Locale.h"

namespace android::icu::util{
class TaiwanCalendar : public android::icu::util::GregorianCalendar {
protected:
	void virtual handleComputeFields(int julianDay);
	int virtual handleGetExtendedYear();
	int virtual handleGetLimit(int field,int limitType);
private:
	static int GREGORIAN_EPOCH;
	static int Taiwan_ERA_START;
	static long long serialVersionUID;
public:
	static int BEFORE_MINGUO;
	static int MINGUO;
	TaiwanCalendar();
	TaiwanCalendar(int year,int month,int date);
	TaiwanCalendar(int year,int month,int date,int hour,int minute,int second);
	TaiwanCalendar(std::shared_ptr<android::icu::util::TimeZone> zone);
	TaiwanCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<android::icu::util::ULocale> locale);
	TaiwanCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<java::util::Locale> aLocale);
	TaiwanCalendar(std::shared_ptr<android::icu::util::ULocale> locale);
	TaiwanCalendar(std::shared_ptr<java::util::Date> date);
	TaiwanCalendar(std::shared_ptr<java::util::Locale> aLocale);
	std::shared_ptr<java::lang::String> virtual getType();
public:
	virtual ~TaiwanCalendar(){
	}

}; // class TaiwanCalendar
}; // namespace android::icu::util

#endif //__android_icu_util_TaiwanCalendar__

