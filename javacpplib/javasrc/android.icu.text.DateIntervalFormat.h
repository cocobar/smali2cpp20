#ifndef __android_icu_text_DateIntervalFormat__
#define __android_icu_text_DateIntervalFormat__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DateIntervalFormat.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUCache.h"
#include "android.icu.text.DateFormat.h"
#include "android.icu.text.DateIntervalFormat_S_SkeletonAndItsBestMatch.h"
#include "android.icu.text.DateIntervalInfo_S_PatternInfo.h"
#include "android.icu.text.DateIntervalInfo.h"
#include "android.icu.text.DateTimePatternGenerator.h"
#include "android.icu.text.SimpleDateFormat.h"
#include "android.icu.text.UFormat.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.DateInterval.h"
#include "android.icu.util.Output.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale.h"
#include "java.io.ObjectInputStream.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.text.FieldPosition.h"
#include "java.text.ParsePosition.h"
#include "java.util.Locale.h"
#include "java.util.Map.h"

namespace android::icu::text{
class DateIntervalFormat : public android::icu::text::UFormat {
protected:
private:
	static std::shared_ptr<android::icu::impl::ICUCache<java::lang::String,java::util::Map<java::lang::String,android::icu::text::DateIntervalInfo_S_PatternInfo>>> LOCAL_PATTERN_CACHE;
	static long long serialVersionUID;
	std::shared_ptr<android::icu::text::SimpleDateFormat> fDateFormat;
	std::shared_ptr<java::lang::String> fDatePattern;
	std::shared_ptr<java::lang::String> fDateTimeFormat;
	std::shared_ptr<android::icu::util::Calendar> fFromCalendar;
	std::shared_ptr<android::icu::text::DateIntervalInfo> fInfo;
	std::shared_ptr<java::util::Map<java::lang::String,android::icu::text::DateIntervalInfo_S_PatternInfo>> fIntervalPatterns;
	std::shared_ptr<java::lang::String> fSkeleton;
	std::shared_ptr<java::lang::String> fTimePattern;
	std::shared_ptr<android::icu::util::Calendar> fToCalendar;
	bool isDateIntervalInfoDefault;
	DateIntervalFormat();
	DateIntervalFormat(std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::SimpleDateFormat> simpleDateFormat);
	static std::shared_ptr<java::lang::String> adjustFieldWidth(std::shared_ptr<java::lang::String> inputSkeleton,std::shared_ptr<java::lang::String> bestMatchSkeleton,std::shared_ptr<java::lang::String> cVar0,int differenceInfo);
	void virtual adjustPosition(std::shared_ptr<java::lang::String> combiningPattern,std::shared_ptr<java::lang::String> pat0,std::shared_ptr<java::text::FieldPosition> pos0,std::shared_ptr<java::lang::String> pat1,std::shared_ptr<java::text::FieldPosition> pos1,std::shared_ptr<java::text::FieldPosition> posResult);
	void virtual concatSingleDate2TimeInterval(std::shared_ptr<java::lang::String> dtfmt,std::shared_ptr<java::lang::String> datePattern,int field,std::shared_ptr<java::util::Map<java::lang::String,android::icu::text::DateIntervalInfo_S_PatternInfo>> intervalPatterns);
	std::shared_ptr<java::lang::StringBuffer> virtual fallbackFormat(std::shared_ptr<android::icu::util::Calendar> fromCalendar,std::shared_ptr<android::icu::util::Calendar> toCalendar,bool fromToOnSameDay,std::shared_ptr<java::lang::StringBuffer> appendTo,std::shared_ptr<java::text::FieldPosition> pos);
	std::shared_ptr<java::lang::StringBuffer> virtual fallbackFormat(std::shared_ptr<android::icu::util::Calendar> fromCalendar,std::shared_ptr<android::icu::util::Calendar> toCalendar,bool fromToOnSameDay,std::shared_ptr<java::lang::StringBuffer> appendTo,std::shared_ptr<java::text::FieldPosition> pos,std::shared_ptr<java::lang::String> fullPattern);
	static bool fieldExistsInSkeleton(int field,std::shared_ptr<java::lang::String> skeleton);
	void virtual genFallbackPattern(int field,std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<java::util::Map<java::lang::String,android::icu::text::DateIntervalInfo_S_PatternInfo>> intervalPatterns,std::shared_ptr<android::icu::text::DateTimePatternGenerator> dtpng);
	std::shared_ptr<android::icu::text::DateIntervalFormat_S_SkeletonAndItsBestMatch> virtual genIntervalPattern(int field,std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<java::lang::String> bestSkeleton,int differenceInfo,std::shared_ptr<java::util::Map<java::lang::String,android::icu::text::DateIntervalInfo_S_PatternInfo>> intervalPatterns);
	bool virtual genSeparateDateTimePtn(std::shared_ptr<java::lang::String> dateSkeleton,std::shared_ptr<java::lang::String> timeSkeleton,std::shared_ptr<java::util::Map<java::lang::String,android::icu::text::DateIntervalInfo_S_PatternInfo>> intervalPatterns,std::shared_ptr<android::icu::text::DateTimePatternGenerator> dtpng);
	std::shared_ptr<java::lang::String> virtual getConcatenationPattern(std::shared_ptr<android::icu::util::ULocale> locale);
	static void getDateTimeSkeleton(std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<java::lang::StringBuilder> dateSkeleton,std::shared_ptr<java::lang::StringBuilder> normalizedDateSkeleton,std::shared_ptr<java::lang::StringBuilder> timeSkeleton,std::shared_ptr<java::lang::StringBuilder> normalizedTimeSkeleton);
	std::shared_ptr<java::util::Map<java::lang::String,android::icu::text::DateIntervalInfo_S_PatternInfo>> virtual initializeIntervalPattern(std::shared_ptr<java::lang::String> fullPattern,std::shared_ptr<android::icu::util::ULocale> locale);
	void virtual initializePattern(std::shared_ptr<android::icu::impl::ICUCache<java::lang::String,java::util::Map<java::lang::String,android::icu::text::DateIntervalInfo_S_PatternInfo>>> cache);
	void virtual readObject(std::shared_ptr<java::io::ObjectInputStream> stream);
public:
	static void static_cinit();
	DateIntervalFormat(std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<android::icu::text::DateIntervalInfo> dtItvInfo,std::shared_ptr<android::icu::text::SimpleDateFormat> simpleDateFormat);
	static std::shared_ptr<android::icu::text::DateIntervalFormat> getInstance(std::shared_ptr<java::lang::String> skeleton);
	static std::shared_ptr<android::icu::text::DateIntervalFormat> getInstance(std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<android::icu::text::DateIntervalInfo> dtitvinf);
	static std::shared_ptr<android::icu::text::DateIntervalFormat> getInstance(std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<android::icu::text::DateIntervalFormat> getInstance(std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::DateIntervalInfo> dtitvinf);
	static std::shared_ptr<android::icu::text::DateIntervalFormat> getInstance(std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<java::util::Locale> locale);
	static std::shared_ptr<android::icu::text::DateIntervalFormat> getInstance(std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<java::util::Locale> locale,std::shared_ptr<android::icu::text::DateIntervalInfo> dtitvinf);
	std::shared_ptr<java::lang::Object> virtual clone();
	std::shared_ptr<java::lang::StringBuffer> virtual format(std::shared_ptr<android::icu::util::Calendar> fromCalendar,std::shared_ptr<android::icu::util::Calendar> toCalendar,std::shared_ptr<java::lang::StringBuffer> appendTo,std::shared_ptr<java::text::FieldPosition> pos);
	std::shared_ptr<java::lang::StringBuffer> virtual format(std::shared_ptr<android::icu::util::DateInterval> dtInterval,std::shared_ptr<java::lang::StringBuffer> appendTo,std::shared_ptr<java::text::FieldPosition> fieldPosition);
	std::shared_ptr<java::lang::StringBuffer> virtual format(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<java::lang::StringBuffer> appendTo,std::shared_ptr<java::text::FieldPosition> fieldPosition);
	std::shared_ptr<android::icu::text::DateFormat> virtual getDateFormat();
	std::shared_ptr<android::icu::text::DateIntervalInfo> virtual getDateIntervalInfo();
	std::shared_ptr<java::lang::String> virtual getPatterns(std::shared_ptr<android::icu::util::Calendar> fromCalendar,std::shared_ptr<android::icu::util::Calendar> toCalendar,std::shared_ptr<android::icu::util::Output<java::lang::String>> part2);
	std::shared_ptr<java::util::Map<java::lang::String,android::icu::text::DateIntervalInfo_S_PatternInfo>> virtual getRawPatterns();
	std::shared_ptr<android::icu::util::TimeZone> virtual getTimeZone();
	std::shared_ptr<java::lang::Object> virtual parseObject(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::text::ParsePosition> parse_pos);
	void virtual setDateIntervalInfo(std::shared_ptr<android::icu::text::DateIntervalInfo> newItvPattern);
	void virtual setTimeZone(std::shared_ptr<android::icu::util::TimeZone> zone);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::DateIntervalFormat::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~DateIntervalFormat(){
	}

}; // class DateIntervalFormat
}; // namespace android::icu::text

#endif //__android_icu_text_DateIntervalFormat__

