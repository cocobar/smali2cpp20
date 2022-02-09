#ifndef __android_icu_util_Calendar_S_WeekData__
#define __android_icu_util_Calendar_S_WeekData__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\Calendar$WeekData.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::util{
class Calendar_S_WeekData : public java::lang::Object {
protected:
private:
public:
	int firstDayOfWeek;
	int minimalDaysInFirstWeek;
	int weekendCease;
	int weekendCeaseMillis;
	int weekendOnset;
	int weekendOnsetMillis;
	Calendar_S_WeekData(int fdow,int mdifw,int weekendOnset,int weekendOnsetMillis,int weekendCease,int weekendCeaseMillis);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	int virtual hashCode();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~Calendar_S_WeekData(){
	}

}; // class Calendar_S_WeekData
}; // namespace android::icu::util

#endif //__android_icu_util_Calendar_S_WeekData__

