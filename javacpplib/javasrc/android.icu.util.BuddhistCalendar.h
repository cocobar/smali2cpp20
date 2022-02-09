#ifndef __android_icu_util_BuddhistCalendar__
#define __android_icu_util_BuddhistCalendar__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\BuddhistCalendar.smali
#include "java2ctype.h"
#include "android.icu.util.GregorianCalendar.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"
#include "java.util.Date.h"
#include "java.util.Locale.h"

namespace android::icu::util{
class BuddhistCalendar : public android::icu::util::GregorianCalendar {
protected:
	void virtual handleComputeFields(int julianDay);
	int virtual handleComputeMonthStart(int eyear,int month,bool useMonth);
	int virtual handleGetExtendedYear();
	int virtual handleGetLimit(int field,int limitType);
private:
	static int BUDDHIST_ERA_START;
	static int GREGORIAN_EPOCH;
	static long long serialVersionUID;
public:
	static int BE;
	BuddhistCalendar();
	BuddhistCalendar(int year,int month,int date);
	BuddhistCalendar(int year,int month,int date,int hour,int minute,int second);
	BuddhistCalendar(std::shared_ptr<android::icu::util::TimeZone> zone);
	BuddhistCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<android::icu::util::ULocale> locale);
	BuddhistCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<java::util::Locale> aLocale);
	BuddhistCalendar(std::shared_ptr<android::icu::util::ULocale> locale);
	BuddhistCalendar(std::shared_ptr<java::util::Date> date);
	BuddhistCalendar(std::shared_ptr<java::util::Locale> aLocale);
	std::shared_ptr<java::lang::String> virtual getType();
public:
	virtual ~BuddhistCalendar(){
	}

}; // class BuddhistCalendar
}; // namespace android::icu::util

#endif //__android_icu_util_BuddhistCalendar__

