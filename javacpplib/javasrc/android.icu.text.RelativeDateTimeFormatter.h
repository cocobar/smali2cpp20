#ifndef __android_icu_text_RelativeDateTimeFormatter__
#define __android_icu_text_RelativeDateTimeFormatter__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RelativeDateTimeFormatter.smali
#include "java2ctype.h"
#include "android.icu.impl.StandardPlural.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.text.DateFormatSymbols.h"
#include "android.icu.text.DisplayContext.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.text.PluralRules.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_AbsoluteUnit.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_Cache.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_Direction.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_RelativeDateTimeUnit.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_RelativeUnit.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_Style.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.EnumMap.h"
#include "java.util.Locale.h"

namespace android::icu::text{
class RelativeDateTimeFormatter : public java::lang::Object {
protected:
private:
	static std::shared_ptr<int[]> _android_icu_text_RelativeDateTimeFormatter_S_RelativeDateTimeUnitSwitchesValues;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Cache> cache;
	static std::shared_ptr<std::vector<android::icu::text::RelativeDateTimeFormatter_S_Style>> fallbackCache;
	std::shared_ptr<android::icu::text::BreakIterator> breakIterator;
	std::shared_ptr<android::icu::text::DisplayContext> capitalizationContext;
	std::shared_ptr<java::lang::String> combinedDateAndTime;
	std::shared_ptr<android::icu::text::DateFormatSymbols> dateFormatSymbols;
	std::shared_ptr<android::icu::util::ULocale> locale;
	std::shared_ptr<android::icu::text::NumberFormat> numberFormat;
	std::shared_ptr<java::util::EnumMap<android::icu::text::RelativeDateTimeFormatter_S_Style,java::util::EnumMap<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit,std::vector<std::vector<java::lang::String>>>>> patternMap;
	std::shared_ptr<android::icu::text::PluralRules> pluralRules;
	std::shared_ptr<java::util::EnumMap<android::icu::text::RelativeDateTimeFormatter_S_Style,java::util::EnumMap<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit,java::util::EnumMap<android::icu::text::RelativeDateTimeFormatter_S_Direction,java::lang::String>>>> qualitativeUnitMap;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Style> style;
	std::shared_ptr<int[]> styleToDateFormatSymbolsWidth;
	static int _getandroid_icu_text_RelativeDateTimeFormatter_S_RelativeDateTimeUnitSwitchesValues();
	RelativeDateTimeFormatter(std::shared_ptr<java::util::EnumMap<android::icu::text::RelativeDateTimeFormatter_S_Style,java::util::EnumMap<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit,java::util::EnumMap<android::icu::text::RelativeDateTimeFormatter_S_Direction,java::lang::String>>>> qualitativeUnitMap,std::shared_ptr<java::util::EnumMap<android::icu::text::RelativeDateTimeFormatter_S_Style,java::util::EnumMap<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit,std::vector<std::vector<java::lang::String>>>>> patternMap,std::shared_ptr<java::lang::String> combinedDateAndTime,std::shared_ptr<android::icu::text::PluralRules> pluralRules,std::shared_ptr<android::icu::text::NumberFormat> numberFormat,std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Style> style,std::shared_ptr<android::icu::text::DisplayContext> capitalizationContext,std::shared_ptr<android::icu::text::BreakIterator> breakIterator,std::shared_ptr<android::icu::util::ULocale> locale);
	std::shared_ptr<java::lang::String> virtual adjustForContext(std::shared_ptr<java::lang::String> originalFormattedString);
	std::shared_ptr<java::lang::String> virtual getAbsoluteUnitString(std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Style> style,std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> unit,std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Direction> direction);
	std::shared_ptr<java::lang::String> virtual getRelativeUnitPattern(std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Style> style,std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit> unit,int pastFutureIndex,std::shared_ptr<android::icu::impl::StandardPlural> pluralForm);
	std::shared_ptr<java::lang::String> virtual getRelativeUnitPluralPattern(std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Style> style,std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit> unit,int pastFutureIndex,std::shared_ptr<android::icu::impl::StandardPlural> pluralForm);
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Direction> keyToDirection(std::shared_ptr<android::icu::impl::UResource_S_Key> key);
public:
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Style> _get0();
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Direction> _wrap0(std::shared_ptr<android::icu::impl::UResource_S_Key> key);
	static void static_cinit();
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter> getInstance();
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter> getInstance(std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter> getInstance(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::NumberFormat> nf);
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter> getInstance(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::NumberFormat> cVar2,std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Style> style,std::shared_ptr<android::icu::text::DisplayContext> capitalizationContext);
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter> getInstance(std::shared_ptr<java::util::Locale> locale);
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter> getInstance(std::shared_ptr<java::util::Locale> locale,std::shared_ptr<android::icu::text::NumberFormat> nf);
	std::shared_ptr<java::lang::String> virtual combineDateAndTime(std::shared_ptr<java::lang::String> relativeDateString,std::shared_ptr<java::lang::String> timeString);
	std::shared_ptr<java::lang::String> virtual format(double quantity,std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Direction> direction,std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit> unit);
	std::shared_ptr<java::lang::String> virtual format(double offset,std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> unit);
	std::shared_ptr<java::lang::String> virtual format(std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Direction> direction,std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> unit);
	std::shared_ptr<java::lang::String> virtual formatNumeric(double cVar1,std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> unit);
	std::shared_ptr<android::icu::text::DisplayContext> virtual getCapitalizationContext();
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Style> virtual getFormatStyle();
	std::shared_ptr<android::icu::text::NumberFormat> virtual getNumberFormat();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::RelativeDateTimeFormatter::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~RelativeDateTimeFormatter(){
	}

}; // class RelativeDateTimeFormatter
}; // namespace android::icu::text

#endif //__android_icu_text_RelativeDateTimeFormatter__

