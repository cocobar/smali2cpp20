#ifndef __android_icu_text_TimeZoneFormat__
#define __android_icu_text_TimeZoneFormat__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\TimeZoneFormat.smali
#include "java2ctype.h"
#include "android.icu.impl.TextTrieMap.h"
#include "android.icu.impl.TimeZoneGenericNames_S_GenericNameType.h"
#include "android.icu.impl.TimeZoneGenericNames.h"
#include "android.icu.text.TimeZoneFormat_S_GMTOffsetPatternType.h"
#include "android.icu.text.TimeZoneFormat_S_OffsetFields.h"
#include "android.icu.text.TimeZoneFormat_S_ParseOption.h"
#include "android.icu.text.TimeZoneFormat_S_Style.h"
#include "android.icu.text.TimeZoneFormat_S_TimeType.h"
#include "android.icu.text.TimeZoneFormat_S_TimeZoneFormatCache.h"
#include "android.icu.text.TimeZoneNames_S_NameType.h"
#include "android.icu.text.TimeZoneNames.h"
#include "android.icu.text.UFormat.h"
#include "android.icu.util.Freezable.h"
#include "android.icu.util.Output.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.ObjectOutputStream.h"
#include "java.io.ObjectStreamField.h"
#include "java.io.Serializable.h"
#include "java.lang.Boolean.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.text.AttributedCharacterIterator.h"
#include "java.text.FieldPosition.h"
#include "java.text.ParsePosition.h"
#include "java.util.EnumSet.h"
#include "java.util.Locale.h"

namespace android::icu::text{
class TimeZoneFormat : public android::icu::text::UFormat, public android::icu::util::Freezable<android::icu::text::TimeZoneFormat>, public java::io::Serializable {
protected:
	TimeZoneFormat(std::shared_ptr<android::icu::util::ULocale> locale);
private:
	static std::shared_ptr<int[]> _android_icu_text_TimeZoneFormat_S_StyleSwitchesValues;
	static std::shared_ptr<int[]> _android_icu_text_TimeZoneNames_S_NameTypeSwitchesValues;
	static std::shared_ptr<java::util::EnumSet<android::icu::impl::TimeZoneGenericNames_S_GenericNameType>> ALL_GENERIC_NAME_TYPES;
	static std::shared_ptr<java::util::EnumSet<android::icu::text::TimeZoneNames_S_NameType>> ALL_SIMPLE_NAME_TYPES;
	static std::shared_ptr<std::vector<java::lang::String>> ALT_GMT_STRINGS;
	static std::shared_ptr<java::lang::String> ASCII_DIGITS;
	static std::shared_ptr<std::vector<java::lang::String>> DEFAULT_GMT_DIGITS;
	static char DEFAULT_GMT_OFFSET_SEP;
	static std::shared_ptr<java::lang::String> DEFAULT_GMT_PATTERN;
	static std::shared_ptr<java::lang::String> DEFAULT_GMT_ZERO;
	static std::shared_ptr<java::lang::String> ISO8601_UTC;
	static int ISO_LOCAL_STYLE_FLAG;
	static int ISO_Z_STYLE_FLAG;
	static int MAX_OFFSET;
	static int MAX_OFFSET_HOUR;
	static int MAX_OFFSET_MINUTE;
	static int MAX_OFFSET_SECOND;
	static int MILLIS_PER_HOUR;
	static int MILLIS_PER_MINUTE;
	static int MILLIS_PER_SECOND;
	static std::shared_ptr<std::vector<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType>> PARSE_GMT_OFFSET_TYPES;
	static std::shared_ptr<android::icu::impl::TextTrieMap<java::lang::String>> SHORT_ZONE_ID_TRIE;
	static std::shared_ptr<java::lang::String> TZID_GMT;
	static std::shared_ptr<java::lang::String> UNKNOWN_LOCATION;
	static int UNKNOWN_OFFSET;
	static std::shared_ptr<java::lang::String> UNKNOWN_SHORT_ZONE_ID;
	static std::shared_ptr<java::lang::String> UNKNOWN_ZONE_ID;
	static std::shared_ptr<android::icu::impl::TextTrieMap<java::lang::String>> ZONE_ID_TRIE;
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_TimeZoneFormatCache> _tzfCache;
	static std::shared_ptr<std::vector<java::io::ObjectStreamField>> serialPersistentFields;
	static long long serialVersionUID;
	bool _abuttingOffsetHoursAndMinutes;
	bool _frozen;
	std::shared_ptr<std::vector<java::lang::String>> _gmtOffsetDigits;
	std::shared_ptr<std::vector<std::vector<java::lang::Object>>> _gmtOffsetPatternItems;
	std::shared_ptr<std::vector<java::lang::String>> _gmtOffsetPatterns;
	std::shared_ptr<java::lang::String> _gmtPattern;
	std::shared_ptr<java::lang::String> _gmtPatternPrefix;
	std::shared_ptr<java::lang::String> _gmtPatternSuffix;
	std::shared_ptr<java::lang::String> _gmtZeroFormat;
	std::shared_ptr<android::icu::impl::TimeZoneGenericNames> _gnames;
	std::shared_ptr<android::icu::util::ULocale> _locale;
	bool _parseAllStyles;
	bool _parseTZDBNames;
	std::shared_ptr<java::lang::String> _region;
	std::shared_ptr<android::icu::text::TimeZoneNames> _tzdbNames;
	std::shared_ptr<android::icu::text::TimeZoneNames> _tznames;
	static int _getandroid_icu_text_TimeZoneFormat_S_StyleSwitchesValues();
	static int _getandroid_icu_text_TimeZoneNames_S_NameTypeSwitchesValues();
	void virtual appendOffsetDigits(std::shared_ptr<java::lang::StringBuilder> buf,int n,int minDigits);
	void virtual checkAbuttingHoursAndMinutes();
	static std::shared_ptr<java::lang::String> expandOffsetPattern(std::shared_ptr<java::lang::String> offsetHM);
	std::shared_ptr<java::lang::String> virtual formatExemplarLocation(std::shared_ptr<android::icu::util::TimeZone> tz);
	std::shared_ptr<java::lang::String> virtual formatOffsetISO8601(int offset,bool isBasic,bool useUtcIndicator,bool isShort,bool ignoreSeconds);
	std::shared_ptr<java::lang::String> virtual formatOffsetLocalizedGMT(int cVar4,bool isShort);
	std::shared_ptr<java::lang::String> virtual formatSpecific(std::shared_ptr<android::icu::util::TimeZone> tz,std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> stdType,std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> dstType,long long date,std::shared_ptr<android::icu::util::Output<android::icu::text::TimeZoneFormat_S_TimeType>> timeType);
	std::shared_ptr<android::icu::text::TimeZoneNames> virtual getTZDBTimeZoneNames();
	std::shared_ptr<java::lang::String> virtual getTargetRegion();
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_TimeType> virtual getTimeType(std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> nameType);
	std::shared_ptr<android::icu::util::TimeZone> virtual getTimeZoneForOffset(int offset);
	std::shared_ptr<android::icu::impl::TimeZoneGenericNames> virtual getTimeZoneGenericNames();
	std::shared_ptr<java::lang::String> virtual getTimeZoneID(std::shared_ptr<java::lang::String> tzID,std::shared_ptr<java::lang::String> mzID);
	void virtual initGMTOffsetPatterns(std::shared_ptr<std::vector<java::lang::String>> gmtOffsetPatterns);
	void virtual initGMTPattern(std::shared_ptr<java::lang::String> gmtPattern);
	static int parseAbuttingAsciiOffsetFields(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> pos,std::shared_ptr<android::icu::text::TimeZoneFormat_S_OffsetFields> minFields,std::shared_ptr<android::icu::text::TimeZoneFormat_S_OffsetFields> maxFields,bool fixedHourWidth);
	int virtual parseAbuttingOffsetFields(std::shared_ptr<java::lang::String> text,int start,std::shared_ptr<int[]> parsedLen);
	static int parseAsciiOffsetFields(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> pos,char sep,std::shared_ptr<android::icu::text::TimeZoneFormat_S_OffsetFields> minFields,std::shared_ptr<android::icu::text::TimeZoneFormat_S_OffsetFields> maxFields);
	int virtual parseDefaultOffsetFields(std::shared_ptr<java::lang::String> text,int start,char separator,std::shared_ptr<int[]> parsedLen);
	std::shared_ptr<java::lang::String> virtual parseExemplarLocation(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> pos);
	int virtual parseOffsetDefaultLocalizedGMT(std::shared_ptr<java::lang::String> text,int start,std::shared_ptr<int[]> parsedLen);
	int virtual parseOffsetFieldWithLocalizedDigits(std::shared_ptr<java::lang::String> text,int start,int minDigits,int maxDigits,int minVal,int maxVal,std::shared_ptr<int[]> parsedLen);
	int virtual parseOffsetFields(std::shared_ptr<java::lang::String> text,int start,bool isShort,std::shared_ptr<int[]> parsedLen);
	int virtual parseOffsetFieldsWithPattern(std::shared_ptr<java::lang::String> text,int start,std::shared_ptr<std::vector<java::lang::Object>> patternItems,bool forceSingleHourDigit,std::shared_ptr<int[]> fields);
	static int parseOffsetISO8601(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> pos,bool extendedOnly,std::shared_ptr<android::icu::util::Output<java::lang::Boolean>> hasDigitOffset);
	int virtual parseOffsetLocalizedGMT(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> pos,bool isShort,std::shared_ptr<android::icu::util::Output<java::lang::Boolean>> hasDigitOffset);
	int virtual parseOffsetLocalizedGMTPattern(std::shared_ptr<java::lang::String> text,int start,bool isShort,std::shared_ptr<int[]> parsedLen);
	static std::shared_ptr<java::lang::Object> parseOffsetPattern(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::lang::String> letters);
	static std::shared_ptr<java::lang::String> parseShortZoneID(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> pos);
	int virtual parseSingleLocalizedDigit(std::shared_ptr<java::lang::String> text,int start,std::shared_ptr<int[]> len);
	static std::shared_ptr<java::lang::String> parseZoneID(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> pos);
	void virtual readObject(std::shared_ptr<java::io::ObjectInputStream> ois);
	static std::shared_ptr<java::lang::String> toCodePoints(std::shared_ptr<java::lang::String> str);
	static std::shared_ptr<java::lang::String> truncateOffsetPattern(std::shared_ptr<java::lang::String> offsetHM);
	static std::shared_ptr<java::lang::String> unquote(std::shared_ptr<java::lang::String> s);
	void virtual writeObject(std::shared_ptr<java::io::ObjectOutputStream> oos);
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::TimeZoneFormat> getInstance(std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<android::icu::text::TimeZoneFormat> getInstance(std::shared_ptr<java::util::Locale> locale);
	std::shared_ptr<android::icu::text::TimeZoneFormat> virtual cloneAsThawed();
	std::shared_ptr<java::lang::String> virtual format(std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> style,std::shared_ptr<android::icu::util::TimeZone> tz,long long date);
	std::shared_ptr<java::lang::String> virtual format(std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> style,std::shared_ptr<android::icu::util::TimeZone> tz,long long date,std::shared_ptr<android::icu::util::Output<android::icu::text::TimeZoneFormat_S_TimeType>> timeType);
	std::shared_ptr<java::lang::StringBuffer> virtual format(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos);
	std::shared_ptr<java::lang::String> virtual formatOffsetISO8601Basic(int offset,bool useUtcIndicator,bool isShort,bool ignoreSeconds);
	std::shared_ptr<java::lang::String> virtual formatOffsetISO8601Extended(int offset,bool useUtcIndicator,bool isShort,bool ignoreSeconds);
	std::shared_ptr<java::lang::String> virtual formatOffsetLocalizedGMT(int offset);
	std::shared_ptr<java::lang::String> virtual formatOffsetShortLocalizedGMT(int offset);
	std::shared_ptr<java::text::AttributedCharacterIterator> virtual formatToCharacterIterator(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<android::icu::text::TimeZoneFormat> virtual freeze();
	std::shared_ptr<java::util::EnumSet<android::icu::text::TimeZoneFormat_S_ParseOption>> virtual getDefaultParseOptions();
	std::shared_ptr<java::lang::String> virtual getGMTOffsetDigits();
	std::shared_ptr<java::lang::String> virtual getGMTOffsetPattern(std::shared_ptr<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType> type);
	std::shared_ptr<java::lang::String> virtual getGMTPattern();
	std::shared_ptr<java::lang::String> virtual getGMTZeroFormat();
	std::shared_ptr<android::icu::text::TimeZoneNames> virtual getTimeZoneNames();
	bool virtual isFrozen();
	std::shared_ptr<android::icu::util::TimeZone> virtual parse(std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> style,std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> pos,std::shared_ptr<android::icu::util::Output<android::icu::text::TimeZoneFormat_S_TimeType>> timeType);
	std::shared_ptr<android::icu::util::TimeZone> virtual parse(std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> style,std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> pos,std::shared_ptr<java::util::EnumSet<android::icu::text::TimeZoneFormat_S_ParseOption>> options,std::shared_ptr<android::icu::util::Output<android::icu::text::TimeZoneFormat_S_TimeType>> timeType);
	std::shared_ptr<android::icu::util::TimeZone> virtual parse(std::shared_ptr<java::lang::String> text);
	std::shared_ptr<android::icu::util::TimeZone> virtual parse(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> pos);
	std::shared_ptr<java::lang::Object> virtual parseObject(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::text::ParsePosition> pos);
	int virtual parseOffsetISO8601(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> pos);
	int virtual parseOffsetLocalizedGMT(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> pos);
	int virtual parseOffsetShortLocalizedGMT(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> pos);
	std::shared_ptr<android::icu::text::TimeZoneFormat> virtual setDefaultParseOptions(std::shared_ptr<java::util::EnumSet<android::icu::text::TimeZoneFormat_S_ParseOption>> options);
	std::shared_ptr<android::icu::text::TimeZoneFormat> virtual setGMTOffsetDigits(std::shared_ptr<java::lang::String> digits);
	std::shared_ptr<android::icu::text::TimeZoneFormat> virtual setGMTOffsetPattern(std::shared_ptr<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType> type,std::shared_ptr<java::lang::String> pattern);
	std::shared_ptr<android::icu::text::TimeZoneFormat> virtual setGMTPattern(std::shared_ptr<java::lang::String> pattern);
	std::shared_ptr<android::icu::text::TimeZoneFormat> virtual setGMTZeroFormat(std::shared_ptr<java::lang::String> gmtZeroFormat);
	std::shared_ptr<android::icu::text::TimeZoneFormat> virtual setTimeZoneNames(std::shared_ptr<android::icu::text::TimeZoneNames> tznames);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::TimeZoneFormat::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~TimeZoneFormat(){
	}

}; // class TimeZoneFormat
}; // namespace android::icu::text

#endif //__android_icu_text_TimeZoneFormat__

