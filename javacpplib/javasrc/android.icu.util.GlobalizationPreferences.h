#ifndef __android_icu_util_GlobalizationPreferences__
#define __android_icu_util_GlobalizationPreferences__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\GlobalizationPreferences.smali
#include "java2ctype.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.text.Collator.h"
#include "android.icu.text.DateFormat.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.Currency.h"
#include "android.icu.util.Freezable.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.String.h"
#include "java.util.BitSet.h"
#include "java.util.HashMap.h"
#include "java.util.List.h"
#include "java.util.Map.h"
#include "java.util.ResourceBundle.h"

namespace android::icu::util{
class GlobalizationPreferences : public android::icu::util::Freezable<android::icu::util::GlobalizationPreferences> {
protected:
	std::shared_ptr<android::icu::text::BreakIterator> virtual guessBreakIterator(int type);
	std::shared_ptr<android::icu::util::Calendar> virtual guessCalendar();
	std::shared_ptr<android::icu::text::Collator> virtual guessCollator();
	std::shared_ptr<android::icu::util::Currency> virtual guessCurrency();
	std::shared_ptr<android::icu::text::DateFormat> virtual guessDateFormat(int dateStyle,int timeStyle);
	std::shared_ptr<java::util::List<android::icu::util::ULocale>> virtual guessLocales();
	std::shared_ptr<android::icu::text::NumberFormat> virtual guessNumberFormat(int style);
	std::shared_ptr<java::lang::String> virtual guessTerritory();
	std::shared_ptr<android::icu::util::TimeZone> virtual guessTimeZone();
	std::shared_ptr<java::util::List<android::icu::util::ULocale>> virtual processLocales(std::shared_ptr<java::util::List<android::icu::util::ULocale>> inputLocales);
private:
	static int BI_LIMIT;
	static int DF_LIMIT;
	static int NF_LIMIT;
	static int TYPE_BREAKITERATOR;
	static int TYPE_CALENDAR;
	static int TYPE_COLLATOR;
	static int TYPE_DATEFORMAT;
	static int TYPE_GENERIC;
	static int TYPE_LIMIT;
	static int TYPE_NUMBERFORMAT;
	static std::shared_ptr<java::util::HashMap<android::icu::util::ULocale,java::util::BitSet>> available_locales;
	static std::shared_ptr<std::vector<std::vector<java::lang::String>>> language_territory_hack;
	static std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> language_territory_hack_map;
	std::shared_ptr<std::vector<android::icu::text::BreakIterator>> breakIterators;
	std::shared_ptr<android::icu::util::Calendar> calendar;
	std::shared_ptr<android::icu::text::Collator> collator;
	std::shared_ptr<android::icu::util::Currency> currency;
	std::shared_ptr<std::vector<std::vector<android::icu::text::DateFormat>>> dateFormats;
	bool frozen;
	std::shared_ptr<java::util::List<android::icu::util::ULocale>> implicitLocales;
	std::shared_ptr<java::util::List<android::icu::util::ULocale>> locales;
	std::shared_ptr<std::vector<android::icu::text::NumberFormat>> numberFormats;
	std::shared_ptr<java::lang::String> territory;
	std::shared_ptr<android::icu::util::TimeZone> timezone;
	std::shared_ptr<android::icu::util::ULocale> virtual getAvailableLocale(int type);
	bool virtual isAvailableLocale(std::shared_ptr<android::icu::util::ULocale> loc,int type);
public:
	static int BI_CHARACTER;
	static int BI_LINE;
	static int BI_SENTENCE;
	static int BI_TITLE;
	static int BI_WORD;
	static int DF_FULL;
	static int DF_LONG;
	static int DF_MEDIUM;
	static int DF_NONE;
	static int DF_SHORT;
	static int ID_CURRENCY;
	static int ID_CURRENCY_SYMBOL;
	static int ID_KEYWORD;
	static int ID_KEYWORD_VALUE;
	static int ID_LANGUAGE;
	static int ID_LOCALE;
	static int ID_SCRIPT;
	static int ID_TERRITORY;
	static int ID_TIMEZONE;
	static int ID_VARIANT;
	static int NF_CURRENCY;
	static int NF_INTEGER;
	static int NF_NUMBER;
	static int NF_PERCENT;
	static int NF_SCIENTIFIC;
	static std::shared_ptr<std::vector<std::vector<java::lang::String>>> territory_tzid_hack;
	static std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> territory_tzid_hack_map;
	static void static_cinit();
	GlobalizationPreferences();
	std::shared_ptr<android::icu::util::GlobalizationPreferences> virtual cloneAsThawed();
	std::shared_ptr<android::icu::util::GlobalizationPreferences> virtual freeze();
	std::shared_ptr<android::icu::text::BreakIterator> virtual getBreakIterator(int type);
	std::shared_ptr<android::icu::util::Calendar> virtual getCalendar();
	std::shared_ptr<android::icu::text::Collator> virtual getCollator();
	std::shared_ptr<android::icu::util::Currency> virtual getCurrency();
	std::shared_ptr<android::icu::text::DateFormat> virtual getDateFormat(int dateStyle,int timeStyle);
	std::shared_ptr<java::lang::String> virtual getDisplayName(std::shared_ptr<java::lang::String> id,int type);
	std::shared_ptr<android::icu::util::ULocale> virtual getLocale(int index);
	std::shared_ptr<java::util::List<android::icu::util::ULocale>> virtual getLocales();
	std::shared_ptr<android::icu::text::NumberFormat> virtual getNumberFormat(int style);
	std::shared_ptr<java::util::ResourceBundle> virtual getResourceBundle(std::shared_ptr<java::lang::String> baseName);
	std::shared_ptr<java::util::ResourceBundle> virtual getResourceBundle(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::ClassLoader> loader);
	std::shared_ptr<java::lang::String> virtual getTerritory();
	std::shared_ptr<android::icu::util::TimeZone> virtual getTimeZone();
	bool virtual isFrozen();
	std::shared_ptr<android::icu::util::GlobalizationPreferences> virtual reset();
	std::shared_ptr<android::icu::util::GlobalizationPreferences> virtual setBreakIterator(int type,std::shared_ptr<android::icu::text::BreakIterator> iterator);
	std::shared_ptr<android::icu::util::GlobalizationPreferences> virtual setCalendar(std::shared_ptr<android::icu::util::Calendar> calendar);
	std::shared_ptr<android::icu::util::GlobalizationPreferences> virtual setCollator(std::shared_ptr<android::icu::text::Collator> collator);
	std::shared_ptr<android::icu::util::GlobalizationPreferences> virtual setCurrency(std::shared_ptr<android::icu::util::Currency> currency);
	std::shared_ptr<android::icu::util::GlobalizationPreferences> virtual setDateFormat(int dateStyle,int timeStyle,std::shared_ptr<android::icu::text::DateFormat> format);
	std::shared_ptr<android::icu::util::GlobalizationPreferences> virtual setLocale(std::shared_ptr<android::icu::util::ULocale> uLocale);
	std::shared_ptr<android::icu::util::GlobalizationPreferences> virtual setLocales(std::shared_ptr<java::lang::String> acceptLanguageString);
	std::shared_ptr<android::icu::util::GlobalizationPreferences> virtual setLocales(std::shared_ptr<java::util::List<android::icu::util::ULocale>> inputLocales);
	std::shared_ptr<android::icu::util::GlobalizationPreferences> virtual setLocales(std::shared_ptr<std::vector<android::icu::util::ULocale>> uLocales);
	std::shared_ptr<android::icu::util::GlobalizationPreferences> virtual setNumberFormat(int style,std::shared_ptr<android::icu::text::NumberFormat> format);
	std::shared_ptr<android::icu::util::GlobalizationPreferences> virtual setTerritory(std::shared_ptr<java::lang::String> territory);
	std::shared_ptr<android::icu::util::GlobalizationPreferences> virtual setTimeZone(std::shared_ptr<android::icu::util::TimeZone> timezone);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::GlobalizationPreferences::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~GlobalizationPreferences(){
	}

}; // class GlobalizationPreferences
}; // namespace android::icu::util

#endif //__android_icu_util_GlobalizationPreferences__

