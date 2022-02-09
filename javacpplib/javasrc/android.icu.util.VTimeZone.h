#ifndef __android_icu_util_VTimeZone__
#define __android_icu_util_VTimeZone__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\VTimeZone.smali
#include "java2ctype.h"
#include "android.icu.util.AnnualTimeZoneRule.h"
#include "android.icu.util.BasicTimeZone.h"
#include "android.icu.util.DateTimeRule.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.TimeZoneRule.h"
#include "android.icu.util.TimeZoneTransition.h"
#include "java.io.Reader.h"
#include "java.io.Writer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Date.h"
#include "java.util.List.h"

namespace android::icu::util{
class VTimeZone : public android::icu::util::BasicTimeZone {
protected:
private:
	static std::shared_ptr<java::lang::String> COLON;
	static std::shared_ptr<java::lang::String> COMMA;
	static int DEF_DSTSAVINGS;
	static long long DEF_TZSTARTTIME;
	static std::shared_ptr<java::lang::String> EQUALS_SIGN;
	static int ERR;
	static std::shared_ptr<java::lang::String> ICAL_BEGIN;
	static std::shared_ptr<java::lang::String> ICAL_BEGIN_VTIMEZONE;
	static std::shared_ptr<java::lang::String> ICAL_BYDAY;
	static std::shared_ptr<java::lang::String> ICAL_BYMONTH;
	static std::shared_ptr<java::lang::String> ICAL_BYMONTHDAY;
	static std::shared_ptr<java::lang::String> ICAL_DAYLIGHT;
	static std::shared_ptr<std::vector<java::lang::String>> ICAL_DOW_NAMES;
	static std::shared_ptr<java::lang::String> ICAL_DTSTART;
	static std::shared_ptr<java::lang::String> ICAL_END;
	static std::shared_ptr<java::lang::String> ICAL_END_VTIMEZONE;
	static std::shared_ptr<java::lang::String> ICAL_FREQ;
	static std::shared_ptr<java::lang::String> ICAL_LASTMOD;
	static std::shared_ptr<java::lang::String> ICAL_RDATE;
	static std::shared_ptr<java::lang::String> ICAL_RRULE;
	static std::shared_ptr<java::lang::String> ICAL_STANDARD;
	static std::shared_ptr<java::lang::String> ICAL_TZID;
	static std::shared_ptr<java::lang::String> ICAL_TZNAME;
	static std::shared_ptr<java::lang::String> ICAL_TZOFFSETFROM;
	static std::shared_ptr<java::lang::String> ICAL_TZOFFSETTO;
	static std::shared_ptr<java::lang::String> ICAL_TZURL;
	static std::shared_ptr<java::lang::String> ICAL_UNTIL;
	static std::shared_ptr<java::lang::String> ICAL_VTIMEZONE;
	static std::shared_ptr<java::lang::String> ICAL_YEARLY;
	static std::shared_ptr<java::lang::String> ICU_TZINFO_PROP;
	static std::shared_ptr<java::lang::String> ICU_TZVERSION;
	static int INI;
	static long long MAX_TIME;
	static long long MIN_TIME;
	static std::shared_ptr<int[]> MONTHLENGTH;
	static std::shared_ptr<java::lang::String> NEWLINE;
	static std::shared_ptr<java::lang::String> SEMICOLON;
	static int TZI;
	static int VTZ;
	static long long serialVersionUID;
	bool isFrozen;
	std::shared_ptr<java::util::Date> lastmod;
	std::shared_ptr<java::lang::String> olsonzid;
	std::shared_ptr<android::icu::util::BasicTimeZone> tz;
	std::shared_ptr<java::lang::String> tzurl;
	std::shared_ptr<java::util::List<java::lang::String>> vtzlines;
	VTimeZone();
	VTimeZone(std::shared_ptr<java::lang::String> tzid);
	static void appendUNTIL(std::shared_ptr<java::io::Writer> writer,std::shared_ptr<java::lang::String> until);
	static void beginRRULE(std::shared_ptr<java::io::Writer> writer,int month);
	static void beginZoneProps(std::shared_ptr<java::io::Writer> writer,bool isDst,std::shared_ptr<java::lang::String> tzname,int fromOffset,int toOffset,long long startTime);
	static std::shared_ptr<android::icu::util::TimeZoneRule> createRuleByRDATE(std::shared_ptr<java::lang::String> tzname,int rawOffset,int dstSavings,long long start,std::shared_ptr<java::util::List<java::lang::String>> dates,int fromOffset);
	static std::shared_ptr<android::icu::util::TimeZoneRule> createRuleByRRULE(std::shared_ptr<java::lang::String> tzname,int rawOffset,int dstSavings,long long start,std::shared_ptr<java::util::List<java::lang::String>> dates,int fromOffset);
	static void endZoneProps(std::shared_ptr<java::io::Writer> writer,bool isDst);
	static std::shared_ptr<java::lang::String> getDateTimeString(long long time);
	static std::shared_ptr<java::lang::String> getDefaultTZName(std::shared_ptr<java::lang::String> tzid,bool isDST);
	static std::shared_ptr<java::lang::String> getUTCDateTimeString(long long time);
	static bool isEquivalentDateRule(int month,int weekInMonth,int dayOfWeek,std::shared_ptr<android::icu::util::DateTimeRule> dtrule);
	bool virtual load(std::shared_ptr<java::io::Reader> reader);
	static std::shared_ptr<java::lang::String> millisToOffset(int millis);
	static std::shared_ptr<java::lang::String> numToString(int num,int width);
	static int offsetStrToMillis(std::shared_ptr<java::lang::String> str);
	bool virtual parse();
	static long long parseDateTimeString(std::shared_ptr<java::lang::String> str,int offset);
	static int parseRRULE(std::shared_ptr<java::lang::String> rrule,std::shared_ptr<long long[]> until);
	static std::shared_ptr<android::icu::util::DateTimeRule> toWallTimeRule(std::shared_ptr<android::icu::util::DateTimeRule> rule,int rawOffset,int dstSavings);
	static void writeFinalRule(std::shared_ptr<java::io::Writer> writer,bool isDst,std::shared_ptr<android::icu::util::AnnualTimeZoneRule> rule,int fromRawOffset,int fromDSTSavings,long long startTime);
	static void writeFooter(std::shared_ptr<java::io::Writer> writer);
	void virtual writeHeader(std::shared_ptr<java::io::Writer> writer);
	void virtual writeZone(std::shared_ptr<java::io::Writer> w,std::shared_ptr<android::icu::util::BasicTimeZone> basictz,std::shared_ptr<std::vector<java::lang::String>> customProperties);
	static void writeZonePropsByDOM(std::shared_ptr<java::io::Writer> writer,bool isDst,std::shared_ptr<java::lang::String> tzname,int fromOffset,int toOffset,int month,int dayOfMonth,long long startTime,long long untilTime);
	static void writeZonePropsByDOW(std::shared_ptr<java::io::Writer> writer,bool isDst,std::shared_ptr<java::lang::String> tzname,int fromOffset,int toOffset,int month,int weekInMonth,int dayOfWeek,long long startTime,long long untilTime);
	static void writeZonePropsByDOW_GEQ_DOM(std::shared_ptr<java::io::Writer> writer,bool isDst,std::shared_ptr<java::lang::String> tzname,int fromOffset,int toOffset,int month,int dayOfMonth,int dayOfWeek,long long startTime,long long untilTime);
	static void writeZonePropsByDOW_GEQ_DOM_sub(std::shared_ptr<java::io::Writer> writer,int month,int dayOfMonth,int dayOfWeek,int numDays,long long untilTime,int fromOffset);
	static void writeZonePropsByDOW_LEQ_DOM(std::shared_ptr<java::io::Writer> writer,bool isDst,std::shared_ptr<java::lang::String> tzname,int fromOffset,int toOffset,int month,int dayOfMonth,int dayOfWeek,long long startTime,long long untilTime);
	static void writeZonePropsByTime(std::shared_ptr<java::io::Writer> writer,bool isDst,std::shared_ptr<java::lang::String> tzname,int fromOffset,int toOffset,long long time,bool withRDATE);
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	static std::shared_ptr<android::icu::util::VTimeZone> create(std::shared_ptr<java::io::Reader> reader);
	static std::shared_ptr<android::icu::util::VTimeZone> create(std::shared_ptr<java::lang::String> tzid);
	std::shared_ptr<java::lang::Object> virtual clone();
	std::shared_ptr<android::icu::util::TimeZone> virtual cloneAsThawed();
	std::shared_ptr<android::icu::util::TimeZone> virtual freeze();
	std::shared_ptr<java::util::Date> virtual getLastModified();
	std::shared_ptr<android::icu::util::TimeZoneTransition> virtual getNextTransition(long long base,bool inclusive);
	int virtual getOffset(int era,int year,int month,int day,int dayOfWeek,int milliseconds);
	void virtual getOffset(long long date,bool local,std::shared_ptr<int[]> offsets);
	void virtual getOffsetFromLocal(long long date,int nonExistingTimeOpt,int duplicatedTimeOpt,std::shared_ptr<int[]> offsets);
	std::shared_ptr<android::icu::util::TimeZoneTransition> virtual getPreviousTransition(long long base,bool inclusive);
	int virtual getRawOffset();
	std::shared_ptr<java::lang::String> virtual getTZURL();
	std::shared_ptr<android::icu::util::TimeZoneRule> virtual getTimeZoneRules();
	std::shared_ptr<android::icu::util::TimeZoneRule> virtual getTimeZoneRules(long long start);
	bool virtual hasEquivalentTransitions(std::shared_ptr<android::icu::util::TimeZone> other,long long start,long long end);
	bool virtual hasSameRules(std::shared_ptr<android::icu::util::TimeZone> other);
	bool virtual inDaylightTime(std::shared_ptr<java::util::Date> date);
	bool virtual isFrozen();
	bool virtual observesDaylightTime();
	void virtual setLastModified(std::shared_ptr<java::util::Date> date);
	void virtual setRawOffset(int offsetMillis);
	void virtual setTZURL(std::shared_ptr<java::lang::String> url);
	bool virtual useDaylightTime();
	void virtual write(std::shared_ptr<java::io::Writer> writer);
	void virtual write(std::shared_ptr<java::io::Writer> writer,long long start);
	void virtual writeSimple(std::shared_ptr<java::io::Writer> writer,long long time);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::VTimeZone::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~VTimeZone(){
	}

}; // class VTimeZone
}; // namespace android::icu::util

#endif //__android_icu_util_VTimeZone__

