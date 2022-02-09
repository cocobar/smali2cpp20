#ifndef __android_icu_text_DateTimePatternGenerator__
#define __android_icu_text_DateTimePatternGenerator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DateTimePatternGenerator.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUCache.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.text.DateTimePatternGenerator_S_DTPGflags.h"
#include "android.icu.text.DateTimePatternGenerator_S_DateTimeMatcher.h"
#include "android.icu.text.DateTimePatternGenerator_S_DistanceInfo.h"
#include "android.icu.text.DateTimePatternGenerator_S_FormatParser.h"
#include "android.icu.text.DateTimePatternGenerator_S_PatternInfo.h"
#include "android.icu.text.DateTimePatternGenerator_S_PatternWithMatcher.h"
#include "android.icu.text.DateTimePatternGenerator_S_PatternWithSkeletonFlag.h"
#include "android.icu.util.Freezable.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Cloneable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.BitSet.h"
#include "java.util.Collection.h"
#include "java.util.EnumSet.h"
#include "java.util.Locale.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "java.util.TreeMap.h"
#include "java.util.TreeSet.h"

namespace android::icu::text{
class DateTimePatternGenerator : public android::icu::util::Freezable<android::icu::text::DateTimePatternGenerator>, public java::lang::Cloneable {
protected:
	DateTimePatternGenerator();
private:
	static std::shared_ptr<std::vector<java::lang::String>> CANONICAL_ITEMS;
	static std::shared_ptr<java::util::Set<java::lang::String>> CANONICAL_SET;
	static std::shared_ptr<std::vector<java::lang::String>> CLDR_FIELD_APPEND;
	static std::shared_ptr<std::vector<java::lang::String>> CLDR_FIELD_NAME;
	static int DATE_MASK;
	static bool DEBUG;
	static int DELTA;
	static std::shared_ptr<android::icu::impl::ICUCache<java::lang::String,android::icu::text::DateTimePatternGenerator>> DTPNG_CACHE;
	static int EXTRA_FIELD;
	static std::shared_ptr<std::vector<java::lang::String>> FIELD_NAME;
	static int FRACTIONAL_MASK;
	static std::shared_ptr<std::vector<java::lang::String>> LAST_RESORT_ALLOWED_HOUR_FORMAT;
	static int LONG;
	static int MISSING_FIELD;
	static int NARROW;
	static int NONE;
	static int NUMERIC;
	static int SECOND_AND_FRACTIONAL_MASK;
	static int SHORT;
	static int TIME_MASK;
	static std::shared_ptr<int[][]> types;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DistanceInfo> _distanceInfo;
	std::shared_ptr<std::vector<java::lang::String>> allowedHourFormats;
	std::shared_ptr<std::vector<java::lang::String>> appendItemFormats;
	std::shared_ptr<std::vector<java::lang::String>> appendItemNames;
	std::shared_ptr<java::util::TreeMap<java::lang::String,android::icu::text::DateTimePatternGenerator_S_PatternWithSkeletonFlag>> basePattern_pattern;
	std::shared_ptr<java::util::Set<java::lang::String>> cldrAvailableFormatKeys;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> current;
	std::shared_ptr<java::lang::String> dateTimeFormat;
	std::shared_ptr<java::lang::String> decimal;
	char defaultHourFormatChar;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_FormatParser> fp;
	bool frozen;
	std::shared_ptr<java::util::TreeMap<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher,android::icu::text::DateTimePatternGenerator_S_PatternWithSkeletonFlag>> skeleton2pattern;
	void virtual addCLDRData(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_PatternInfo> returnInfo,std::shared_ptr<android::icu::util::ULocale> uLocale);
	void virtual addCanonicalItems();
	void virtual addICUPatterns(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_PatternInfo> returnInfo,std::shared_ptr<android::icu::util::ULocale> uLocale);
	std::shared_ptr<java::lang::String> virtual adjustFieldTypes(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_PatternWithMatcher> patternWithMatcher,std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> inputRequest,std::shared_ptr<java::util::EnumSet<android::icu::text::DateTimePatternGenerator_S_DTPGflags>> flags,int options);
	void virtual checkFrozen();
	void virtual consumeShortTimePattern(std::shared_ptr<java::lang::String> shortTimePattern,std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_PatternInfo> returnInfo);
	void virtual fillInMissing();
	void virtual getAllowedHourFormats(std::shared_ptr<android::icu::util::ULocale> uLocale);
	std::shared_ptr<java::lang::String> virtual getAppendFormat(int foundMask);
	std::shared_ptr<java::lang::String> virtual getAppendName(int foundMask);
	std::shared_ptr<java::lang::String> virtual getBestAppending(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> source,int missingFields,std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DistanceInfo> distInfo,std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> skipMatcher,std::shared_ptr<java::util::EnumSet<android::icu::text::DateTimePatternGenerator_S_DTPGflags>> flags,int options);
	std::shared_ptr<java::lang::String> virtual getBestPattern(std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> skipMatcher,int options);
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_PatternWithMatcher> virtual getBestRaw(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> source,int includeMask,std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DistanceInfo> missingFields,std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> skipMatcher);
	static int getCLDRFieldNumber(std::shared_ptr<android::icu::impl::UResource_S_Key> key);
	std::shared_ptr<java::lang::String> virtual getCalendarTypeToUse(std::shared_ptr<android::icu::util::ULocale> uLocale);
	static char getCanonicalChar(int field,char reference);
	static int getCanonicalIndex(std::shared_ptr<java::lang::String> s,bool strict);
	static std::shared_ptr<java::lang::String> getFilteredPattern(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_FormatParser> fp,std::shared_ptr<java::util::BitSet> nuke);
	static std::shared_ptr<java::lang::String> getName(std::shared_ptr<java::lang::String> s);
	std::shared_ptr<java::util::TreeSet<java::lang::String>> virtual getSet(std::shared_ptr<java::lang::String> id);
	int virtual getTopBitNumber(int foundMask);
	void virtual hackTimes(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_PatternInfo> returnInfo,std::shared_ptr<java::lang::String> shortTimePattern);
	void virtual initData(std::shared_ptr<android::icu::util::ULocale> uLocale);
	bool virtual isAvailableFormatSet(std::shared_ptr<java::lang::String> key);
	void virtual setAvailableFormat(std::shared_ptr<java::lang::String> key);
	void virtual setDateTimeFromCalendar(std::shared_ptr<android::icu::util::ULocale> uLocale);
	void virtual setDecimalSymbols(std::shared_ptr<android::icu::util::ULocale> uLocale);
	static std::shared_ptr<java::lang::String> showMask(int mask);
public:
	static int DAY;
	static int DAYPERIOD;
	static int DAY_OF_WEEK_IN_MONTH;
	static int DAY_OF_YEAR;
	static int ERA;
	static int FRACTIONAL_SECOND;
	static int HOUR;
	static std::shared_ptr<java::util::Map<java::lang::String,std::vector<java::lang::String>>> LOCALE_TO_ALLOWED_HOUR;
	static int MATCH_ALL_FIELDS_LENGTH;
	static int MATCH_HOUR_FIELD_LENGTH;
	static int MATCH_MINUTE_FIELD_LENGTH;
	static int MATCH_NO_OPTIONS;
	static int MATCH_SECOND_FIELD_LENGTH;
	static int MINUTE;
	static int MONTH;
	static int QUARTER;
	static int SECOND;
	static int TYPE_LIMIT;
	static int WEEKDAY;
	static int WEEK_OF_MONTH;
	static int WEEK_OF_YEAR;
	static int YEAR;
	static int ZONE;
	static std::shared_ptr<java::lang::String> _get0();
	static int _get1();
	static bool _wrap0(std::shared_ptr<android::icu::text::DateTimePatternGenerator> _this,std::shared_ptr<java::lang::String> key);
	static char _wrap1(int field,char reference);
	static int _wrap2(std::shared_ptr<android::icu::impl::UResource_S_Key> key);
	static int _wrap3(std::shared_ptr<java::lang::String> s,bool strict);
	static std::shared_ptr<java::lang::String> _wrap4(int mask);
	static void _wrap5(std::shared_ptr<android::icu::text::DateTimePatternGenerator> _this,std::shared_ptr<java::lang::String> key);
	static void static_cinit();
	static int getAppendFormatNumber(std::shared_ptr<android::icu::impl::UResource_S_Key> key);
	static int getAppendFormatNumber(std::shared_ptr<java::lang::String> string);
	static std::shared_ptr<android::icu::text::DateTimePatternGenerator> getEmptyInstance();
	static std::shared_ptr<android::icu::text::DateTimePatternGenerator> getFrozenInstance(std::shared_ptr<android::icu::util::ULocale> uLocale);
	static std::shared_ptr<android::icu::text::DateTimePatternGenerator> getInstance();
	static std::shared_ptr<android::icu::text::DateTimePatternGenerator> getInstance(std::shared_ptr<android::icu::util::ULocale> uLocale);
	static std::shared_ptr<android::icu::text::DateTimePatternGenerator> getInstance(std::shared_ptr<java::util::Locale> locale);
	static bool isSingleField(std::shared_ptr<java::lang::String> skeleton);
	std::shared_ptr<android::icu::text::DateTimePatternGenerator> virtual addPattern(std::shared_ptr<java::lang::String> pattern,bool override,std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_PatternInfo> returnInfo);
	std::shared_ptr<android::icu::text::DateTimePatternGenerator> virtual addPatternWithSkeleton(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::lang::String> skeletonToUse,bool override,std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_PatternInfo> returnInfo);
	std::shared_ptr<java::lang::Object> virtual clone();
	std::shared_ptr<android::icu::text::DateTimePatternGenerator> virtual cloneAsThawed();
	std::shared_ptr<android::icu::text::DateTimePatternGenerator> virtual freeze();
	std::shared_ptr<java::lang::String> virtual getAppendItemFormat(int field);
	std::shared_ptr<java::lang::String> virtual getAppendItemName(int field);
	std::shared_ptr<java::lang::String> virtual getBaseSkeleton(std::shared_ptr<java::lang::String> pattern);
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getBaseSkeletons(std::shared_ptr<java::util::Set<java::lang::String>> result);
	std::shared_ptr<java::lang::String> virtual getBestPattern(std::shared_ptr<java::lang::String> skeleton);
	std::shared_ptr<java::lang::String> virtual getBestPattern(std::shared_ptr<java::lang::String> skeleton,int options);
	std::shared_ptr<java::lang::String> virtual getCanonicalSkeletonAllowingDuplicates(std::shared_ptr<java::lang::String> pattern);
	std::shared_ptr<java::lang::String> virtual getDateTimeFormat();
	std::shared_ptr<java::lang::String> virtual getDecimal();
	char virtual getDefaultHourFormatChar();
	std::shared_ptr<java::lang::String> virtual getFields(std::shared_ptr<java::lang::String> pattern);
	std::shared_ptr<java::util::Collection<java::lang::String>> virtual getRedundants(std::shared_ptr<java::util::Collection<java::lang::String>> output);
	std::shared_ptr<java::lang::String> virtual getSkeleton(std::shared_ptr<java::lang::String> pattern);
	std::shared_ptr<java::lang::String> virtual getSkeletonAllowingDuplicates(std::shared_ptr<java::lang::String> pattern);
	std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> virtual getSkeletons(std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> result);
	bool virtual isFrozen();
	std::shared_ptr<java::lang::String> virtual replaceFieldTypes(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::lang::String> skeleton);
	std::shared_ptr<java::lang::String> virtual replaceFieldTypes(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::lang::String> skeleton,int options);
	void virtual setAppendItemFormat(int field,std::shared_ptr<java::lang::String> value);
	void virtual setAppendItemName(int field,std::shared_ptr<java::lang::String> value);
	void virtual setDateTimeFormat(std::shared_ptr<java::lang::String> dateTimeFormat);
	void virtual setDecimal(std::shared_ptr<java::lang::String> decimal);
	void virtual setDefaultHourFormatChar(char defaultHourFormatChar);
	bool virtual skeletonsAreSimilar(std::shared_ptr<java::lang::String> id,std::shared_ptr<java::lang::String> skeleton);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::DateTimePatternGenerator::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~DateTimePatternGenerator(){
	}

}; // class DateTimePatternGenerator
}; // namespace android::icu::text

#endif //__android_icu_text_DateTimePatternGenerator__

