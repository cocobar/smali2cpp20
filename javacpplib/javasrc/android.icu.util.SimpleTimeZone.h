#ifndef __android_icu_util_SimpleTimeZone__
#define __android_icu_util_SimpleTimeZone__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\SimpleTimeZone.smali
#include "java2ctype.h"
#include "android.icu.util.AnnualTimeZoneRule.h"
#include "android.icu.util.BasicTimeZone.h"
#include "android.icu.util.InitialTimeZoneRule.h"
#include "android.icu.util.STZInfo.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.TimeZoneRule.h"
#include "android.icu.util.TimeZoneTransition.h"
#include "java.io.ObjectInputStream.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Date.h"

namespace android::icu::util{
class SimpleTimeZone : public android::icu::util::BasicTimeZone {
protected:
private:
	static int DOM_MODE;
	static int DOW_GE_DOM_MODE;
	static int DOW_IN_MONTH_MODE;
	static int DOW_LE_DOM_MODE;
	static long long serialVersionUID;
	static std::shared_ptr<unsigned char[]> staticMonthLength;
	int dst;
	std::shared_ptr<android::icu::util::AnnualTimeZoneRule> dstRule;
	int endDay;
	int endDayOfWeek;
	int endMode;
	int endMonth;
	int endTime;
	int endTimeMode;
	std::shared_ptr<android::icu::util::TimeZoneTransition> firstTransition;
	std::shared_ptr<android::icu::util::InitialTimeZoneRule> initialRule;
	bool isFrozen;
	int raw;
	int startDay;
	int startDayOfWeek;
	int startMode;
	int startMonth;
	int startTime;
	int startTimeMode;
	int startYear;
	std::shared_ptr<android::icu::util::AnnualTimeZoneRule> stdRule;
	bool transitionRulesInitialized;
	bool useDaylight;
	std::shared_ptr<android::icu::util::STZInfo> xinfo;
	int virtual compareToRule(int month,int monthLen,int prevMonthLen,int dayOfMonth,int dayOfWeek,int millis,int millisDelta,int ruleMode,int ruleMonth,int ruleDayOfWeek,int ruleDay,int ruleMillis);
	void virtual construct(int _raw,int _startMonth,int _startDay,int _startDayOfWeek,int _startTime,int _startTimeMode,int _endMonth,int _endDay,int _endDayOfWeek,int _endTime,int _endTimeMode,int _dst);
	void virtual decodeEndRule();
	void virtual decodeRules();
	void virtual decodeStartRule();
	int virtual getOffset(int era,int year,int month,int day,int dayOfWeek,int millis,int monthLength,int prevMonthLength);
	std::shared_ptr<android::icu::util::STZInfo> virtual getSTZInfo();
	bool virtual idEquals(std::shared_ptr<java::lang::String> id1,std::shared_ptr<java::lang::String> id2);
	void virtual initTransitionRules();
	void virtual readObject(std::shared_ptr<java::io::ObjectInputStream> in);
	void virtual setEndRule(int month,int dayOfWeekInMonth,int dayOfWeek,int time,int mode);
	void virtual setEndRule(int month,int dayOfMonth,int dayOfWeek,int time,int mode,bool after);
	void virtual setStartRule(int month,int dayOfWeekInMonth,int dayOfWeek,int time,int mode);
public:
	static bool _assertionsDisabled;
	static int STANDARD_TIME;
	static int UTC_TIME;
	static int WALL_TIME;
	static void static_cinit();
	SimpleTimeZone(int rawOffset,std::shared_ptr<java::lang::String> ID);
	SimpleTimeZone(int rawOffset,std::shared_ptr<java::lang::String> ID,int startMonth,int startDay,int startDayOfWeek,int startTime,int endMonth,int endDay,int endDayOfWeek,int endTime);
	SimpleTimeZone(int rawOffset,std::shared_ptr<java::lang::String> ID,int startMonth,int startDay,int startDayOfWeek,int startTime,int endMonth,int endDay,int endDayOfWeek,int endTime,int dstSavings);
	SimpleTimeZone(int rawOffset,std::shared_ptr<java::lang::String> ID,int startMonth,int startDay,int startDayOfWeek,int startTime,int startTimeMode,int endMonth,int endDay,int endDayOfWeek,int endTime,int endTimeMode,int dstSavings);
	std::shared_ptr<java::lang::Object> virtual clone();
	std::shared_ptr<android::icu::util::TimeZone> virtual cloneAsThawed();
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<android::icu::util::TimeZone> virtual freeze();
	int virtual getDSTSavings();
	std::shared_ptr<android::icu::util::TimeZoneTransition> virtual getNextTransition(long long base,bool inclusive);
	int virtual getOffset(int era,int year,int month,int day,int dayOfWeek,int millis);
	int virtual getOffset(int era,int year,int month,int day,int dayOfWeek,int millis,int monthLength);
	void virtual getOffsetFromLocal(long long date,int nonExistingTimeOpt,int duplicatedTimeOpt,std::shared_ptr<int[]> offsets);
	std::shared_ptr<android::icu::util::TimeZoneTransition> virtual getPreviousTransition(long long base,bool inclusive);
	int virtual getRawOffset();
	std::shared_ptr<android::icu::util::TimeZoneRule> virtual getTimeZoneRules();
	bool virtual hasSameRules(std::shared_ptr<android::icu::util::TimeZone> othr);
	int virtual hashCode();
	bool virtual inDaylightTime(std::shared_ptr<java::util::Date> date);
	bool virtual isFrozen();
	bool virtual observesDaylightTime();
	void virtual setDSTSavings(int millisSavedDuringDST);
	void virtual setEndRule(int month,int dayOfMonth,int time);
	void virtual setEndRule(int month,int dayOfWeekInMonth,int dayOfWeek,int time);
	void virtual setEndRule(int month,int dayOfMonth,int dayOfWeek,int time,bool after);
	void virtual setID(std::shared_ptr<java::lang::String> ID);
	void virtual setRawOffset(int offsetMillis);
	void virtual setStartRule(int month,int dayOfMonth,int time);
	void virtual setStartRule(int month,int dayOfWeekInMonth,int dayOfWeek,int time);
	void virtual setStartRule(int month,int dayOfMonth,int dayOfWeek,int time,bool after);
	void virtual setStartYear(int year);
	std::shared_ptr<java::lang::String> virtual toString();
	bool virtual useDaylightTime();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::SimpleTimeZone::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~SimpleTimeZone(){
	}

}; // class SimpleTimeZone
}; // namespace android::icu::util

#endif //__android_icu_util_SimpleTimeZone__

