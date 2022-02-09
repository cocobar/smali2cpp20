// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DateFormatSymbols.smali
#include "java2ctype.h"
#include "android.icu.impl.CacheBase.h"
#include "android.icu.impl.CalendarUtil.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.text.DateFormatSymbols_S_1.h"
#include "android.icu.text.DateFormatSymbols_S_CalendarDataSink.h"
#include "android.icu.text.DateFormatSymbols_S_CapitalizationContextUsage.h"
#include "android.icu.text.DateFormatSymbols.h"
#include "android.icu.text.NumberingSystem.h"
#include "android.icu.text.TimeZoneNames_S_NameType.h"
#include "android.icu.text.TimeZoneNames.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.ICUCloneNotSupportedException.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale_S_Category.h"
#include "android.icu.util.ULocale_S_Type.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "android.icu.util.UResourceBundleIterator.h"
#include "java.io.ObjectInputStream.h"
#include "java.lang.Class.h"
#include "java.lang.CloneNotSupportedException.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.Throwable.h"
#include "java.lang.reflect.Array.h"
#include "java.util.HashMap.h"
#include "java.util.Locale.h"
#include "java.util.Map.h"
#include "java.util.MissingResourceException.h"
#include "java.util.ResourceBundle.h"

static android::icu::text::DateFormatSymbols::ABBREVIATED = 0x0;
static android::icu::text::DateFormatSymbols::ALTERNATE_TIME_SEPARATOR = std::make_shared<java::lang::String>(".");
static android::icu::text::DateFormatSymbols::CALENDAR_CLASSES;
static android::icu::text::DateFormatSymbols::DAY_PERIOD_KEYS;
static android::icu::text::DateFormatSymbols::DEFAULT_TIME_SEPARATOR = std::make_shared<java::lang::String>(":");
static android::icu::text::DateFormatSymbols::DFSCACHE = nullptr;
static android::icu::text::DateFormatSymbols::DT_CONTEXT_COUNT = 0x3;
static android::icu::text::DateFormatSymbols::DT_LEAP_MONTH_PATTERN_FORMAT_ABBREV = 0x1;
static android::icu::text::DateFormatSymbols::DT_LEAP_MONTH_PATTERN_FORMAT_NARROW = 0x2;
static android::icu::text::DateFormatSymbols::DT_LEAP_MONTH_PATTERN_FORMAT_WIDE = 0x0;
static android::icu::text::DateFormatSymbols::DT_LEAP_MONTH_PATTERN_NUMERIC = 0x6;
static android::icu::text::DateFormatSymbols::DT_LEAP_MONTH_PATTERN_STANDALONE_ABBREV = 0x4;
static android::icu::text::DateFormatSymbols::DT_LEAP_MONTH_PATTERN_STANDALONE_NARROW = 0x5;
static android::icu::text::DateFormatSymbols::DT_LEAP_MONTH_PATTERN_STANDALONE_WIDE = 0x3;
static android::icu::text::DateFormatSymbols::DT_MONTH_PATTERN_COUNT = 0x7;
static android::icu::text::DateFormatSymbols::DT_WIDTH_COUNT = 0x4;
static android::icu::text::DateFormatSymbols::FORMAT = 0x0;
static android::icu::text::DateFormatSymbols::LEAP_MONTH_PATTERNS_PATHS;
static android::icu::text::DateFormatSymbols::NARROW = 0x2;
static android::icu::text::DateFormatSymbols::NUMERIC = 0x2;
static android::icu::text::DateFormatSymbols::SHORT = 0x3;
static android::icu::text::DateFormatSymbols::STANDALONE = 0x1;
static android::icu::text::DateFormatSymbols::WIDE = 0x1;
static android::icu::text::DateFormatSymbols::contextUsageTypeMap;
static android::icu::text::DateFormatSymbols::millisPerHour = 0x36ee80;
static android::icu::text::DateFormatSymbols::patternChars = std::make_shared<java::lang::String>("GyMdkHmsSEDFwWahKzYeugAZvcLQqVUOXxrbB");
static android::icu::text::DateFormatSymbols::serialVersionUID = -0x53198e36cae8e83eL;
// .method static constructor <clinit>()V
void android::icu::text::DateFormatSymbols::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared<std::vector<std::vector<std::vector<java::lang::String>>>> cVar5;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar6;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar7;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar8;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar9;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar10;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar11;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar12;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar13;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar14;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar15;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar16;
	std::shared_ptr<java::util::HashMap> cVar17;
	std::shared_ptr<android::icu::text::DateFormatSymbols_S_1> cVar18;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar19;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<std::vector<std::vector<std::vector<java::lang::String>>>>(0xb);
	cVar6 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar2);
	cVar6[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("GregorianCalendar"));
	cVar6[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("gregorian"));
	cVar5[cVar4] = cVar6;
	cVar7 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar2);
	cVar7[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("JapaneseCalendar"));
	cVar7[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("japanese"));
	cVar5[cVar3] = cVar7;
	cVar8 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar2);
	cVar8[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("BuddhistCalendar"));
	cVar8[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("buddhist"));
	cVar5[cVar2] = cVar8;
	cVar9 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar2);
	cVar9[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("TaiwanCalendar"));
	cVar9[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("roc"));
	cVar5[cVar1] = cVar9;
	cVar10 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar2);
	cVar10[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("PersianCalendar"));
	cVar10[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("persian"));
	cVar5[cVar0] = cVar10;
	cVar11 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar2);
	cVar11[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("IslamicCalendar"));
	cVar11[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("islamic"));
	cVar5[0x5] = cVar11;
	cVar12 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar2);
	cVar12[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("HebrewCalendar"));
	cVar12[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("hebrew"));
	cVar5[0x6] = cVar12;
	cVar13 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar2);
	cVar13[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ChineseCalendar"));
	cVar13[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("chinese"));
	cVar5[0x7] = cVar13;
	cVar14 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar2);
	cVar14[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("IndianCalendar"));
	cVar14[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("indian"));
	cVar5[0x8] = cVar14;
	cVar15 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar2);
	cVar15[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("CopticCalendar"));
	cVar15[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("coptic"));
	cVar5[0x9] = cVar15;
	cVar16 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar2);
	cVar16[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("EthiopicCalendar"));
	cVar16[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ethiopic"));
	cVar5[0xa] = cVar16;
	android::icu::text::DateFormatSymbols::CALENDAR_CLASSES = cVar5;
	cVar17 = std::make_shared<java::util::HashMap>();
	android::icu::text::DateFormatSymbols::contextUsageTypeMap = cVar17;
	android::icu::text::DateFormatSymbols::contextUsageTypeMap->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("month-format-except-narrow")), android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::MONTH_FORMAT);
	android::icu::text::DateFormatSymbols::contextUsageTypeMap->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("month-standalone-except-narrow")), android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::MONTH_STANDALONE);
	android::icu::text::DateFormatSymbols::contextUsageTypeMap->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("month-narrow")), android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::MONTH_NARROW);
	android::icu::text::DateFormatSymbols::contextUsageTypeMap->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("day-format-except-narrow")), android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::DAY_FORMAT);
	android::icu::text::DateFormatSymbols::contextUsageTypeMap->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("day-standalone-except-narrow")), android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::DAY_STANDALONE);
	android::icu::text::DateFormatSymbols::contextUsageTypeMap->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("day-narrow")), android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::DAY_NARROW);
	android::icu::text::DateFormatSymbols::contextUsageTypeMap->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("era-name")), android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::ERA_WIDE);
	android::icu::text::DateFormatSymbols::contextUsageTypeMap->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("era-abbr")), android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::ERA_ABBREV);
	android::icu::text::DateFormatSymbols::contextUsageTypeMap->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("era-narrow")), android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::ERA_NARROW);
	android::icu::text::DateFormatSymbols::contextUsageTypeMap->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("zone-long")), android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::ZONE_LONG);
	android::icu::text::DateFormatSymbols::contextUsageTypeMap->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("zone-short")), android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::ZONE_SHORT);
	android::icu::text::DateFormatSymbols::contextUsageTypeMap->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("metazone-long")), android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::METAZONE_LONG);
	android::icu::text::DateFormatSymbols::contextUsageTypeMap->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("metazone-short")), android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::METAZONE_SHORT);
	cVar18 = std::make_shared<android::icu::text::DateFormatSymbols_S_1>();
	android::icu::text::DateFormatSymbols::DFSCACHE = cVar18;
	android::icu::text::DateFormatSymbols::LEAP_MONTH_PATTERNS_PATHS = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x7);
	android::icu::text::DateFormatSymbols::LEAP_MONTH_PATTERNS_PATHS[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("monthPatterns/format/wide"));
	android::icu::text::DateFormatSymbols::LEAP_MONTH_PATTERNS_PATHS[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("monthPatterns/format/abbreviated"));
	android::icu::text::DateFormatSymbols::LEAP_MONTH_PATTERNS_PATHS[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("monthPatterns/format/narrow"));
	android::icu::text::DateFormatSymbols::LEAP_MONTH_PATTERNS_PATHS[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("monthPatterns/stand-alone/wide"));
	android::icu::text::DateFormatSymbols::LEAP_MONTH_PATTERNS_PATHS[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("monthPatterns/stand-alone/abbreviated"));
	android::icu::text::DateFormatSymbols::LEAP_MONTH_PATTERNS_PATHS[0x5] = std::make_shared<java::lang::String>(std::make_shared<char[]>("monthPatterns/stand-alone/narrow"));
	android::icu::text::DateFormatSymbols::LEAP_MONTH_PATTERNS_PATHS[0x6] = std::make_shared<java::lang::String>(std::make_shared<char[]>("monthPatterns/numeric/all"));
	cVar19 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0xa);
	cVar19[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("midnight"));
	cVar19[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("noon"));
	cVar19[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("morning1"));
	cVar19[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("afternoon1"));
	cVar19[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("evening1"));
	cVar19[0x5] = std::make_shared<java::lang::String>(std::make_shared<char[]>("night1"));
	cVar19[0x6] = std::make_shared<java::lang::String>(std::make_shared<char[]>("morning2"));
	cVar19[0x7] = std::make_shared<java::lang::String>(std::make_shared<char[]>("afternoon2"));
	cVar19[0x8] = std::make_shared<java::lang::String>(std::make_shared<char[]>("evening2"));
	cVar19[0x9] = std::make_shared<java::lang::String>(std::make_shared<char[]>("night2"));
	android::icu::text::DateFormatSymbols::DAY_PERIOD_KEYS = cVar19;
	return;

}
// .method public constructor <init>()V
android::icu::text::DateFormatSymbols::DateFormatSymbols()
{
	
	android::icu::text::DateFormatSymbols::(android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));
	return;

}
// .method public constructor <init>(Landroid/icu/util/Calendar;Landroid/icu/util/ULocale;)V
android::icu::text::DateFormatSymbols::DateFormatSymbols(std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<std::vector<java::lang::String>> cVar0;
	
	//    .param p1, "cal"    # Landroid/icu/util/Calendar;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	cVar0 = 0x0;
	// 655    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->eras = cVar0;
	this->eraNames = cVar0;
	this->narrowEras = cVar0;
	this->months = cVar0;
	this->shortMonths = cVar0;
	this->narrowMonths = cVar0;
	this->standaloneMonths = cVar0;
	this->standaloneShortMonths = cVar0;
	this->standaloneNarrowMonths = cVar0;
	this->weekdays = cVar0;
	this->shortWeekdays = cVar0;
	this->shorterWeekdays = cVar0;
	this->narrowWeekdays = cVar0;
	this->standaloneWeekdays = cVar0;
	this->standaloneShortWeekdays = cVar0;
	this->standaloneShorterWeekdays = cVar0;
	this->standaloneNarrowWeekdays = cVar0;
	this->ampms = cVar0;
	this->ampmsNarrow = cVar0;
	this->timeSeparator = cVar0;
	this->shortQuarters = cVar0;
	this->quarters = cVar0;
	this->standaloneShortQuarters = cVar0;
	this->standaloneQuarters = cVar0;
	this->leapMonthPatterns = cVar0;
	this->shortYearNames = cVar0;
	this->shortZodiacNames = cVar0;
	this->zoneStrings = cVar0;
	this->localPatternChars = cVar0;
	this->abbreviatedDayPeriods = cVar0;
	this->wideDayPeriods = cVar0;
	this->narrowDayPeriods = cVar0;
	this->standaloneAbbreviatedDayPeriods = cVar0;
	this->standaloneWideDayPeriods = cVar0;
	this->standaloneNarrowDayPeriods = cVar0;
	this->capitalization = cVar0;
	this->initializeData(locale, cal->getType());
	return;

}
// .method public constructor <init>(Landroid/icu/util/Calendar;Ljava/util/Locale;)V
android::icu::text::DateFormatSymbols::DateFormatSymbols(std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<java::util::Locale> locale)
{
	
	std::shared_ptr<std::vector<java::lang::String>> cVar0;
	
	//    .param p1, "cal"    # Landroid/icu/util/Calendar;
	//    .param p2, "locale"    # Ljava/util/Locale;
	cVar0 = 0x0;
	// 785    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->eras = cVar0;
	this->eraNames = cVar0;
	this->narrowEras = cVar0;
	this->months = cVar0;
	this->shortMonths = cVar0;
	this->narrowMonths = cVar0;
	this->standaloneMonths = cVar0;
	this->standaloneShortMonths = cVar0;
	this->standaloneNarrowMonths = cVar0;
	this->weekdays = cVar0;
	this->shortWeekdays = cVar0;
	this->shorterWeekdays = cVar0;
	this->narrowWeekdays = cVar0;
	this->standaloneWeekdays = cVar0;
	this->standaloneShortWeekdays = cVar0;
	this->standaloneShorterWeekdays = cVar0;
	this->standaloneNarrowWeekdays = cVar0;
	this->ampms = cVar0;
	this->ampmsNarrow = cVar0;
	this->timeSeparator = cVar0;
	this->shortQuarters = cVar0;
	this->quarters = cVar0;
	this->standaloneShortQuarters = cVar0;
	this->standaloneQuarters = cVar0;
	this->leapMonthPatterns = cVar0;
	this->shortYearNames = cVar0;
	this->shortZodiacNames = cVar0;
	this->zoneStrings = cVar0;
	this->localPatternChars = cVar0;
	this->abbreviatedDayPeriods = cVar0;
	this->wideDayPeriods = cVar0;
	this->narrowDayPeriods = cVar0;
	this->standaloneAbbreviatedDayPeriods = cVar0;
	this->standaloneWideDayPeriods = cVar0;
	this->standaloneNarrowDayPeriods = cVar0;
	this->capitalization = cVar0;
	this->initializeData(android::icu::util::ULocale::forLocale(locale), cal->getType());
	return;

}
// .method public constructor <init>(Landroid/icu/util/ULocale;)V
android::icu::text::DateFormatSymbols::DateFormatSymbols(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<std::vector<java::lang::String>> cVar0;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	cVar0 = 0x0;
	// 918    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->eras = cVar0;
	this->eraNames = cVar0;
	this->narrowEras = cVar0;
	this->months = cVar0;
	this->shortMonths = cVar0;
	this->narrowMonths = cVar0;
	this->standaloneMonths = cVar0;
	this->standaloneShortMonths = cVar0;
	this->standaloneNarrowMonths = cVar0;
	this->weekdays = cVar0;
	this->shortWeekdays = cVar0;
	this->shorterWeekdays = cVar0;
	this->narrowWeekdays = cVar0;
	this->standaloneWeekdays = cVar0;
	this->standaloneShortWeekdays = cVar0;
	this->standaloneShorterWeekdays = cVar0;
	this->standaloneNarrowWeekdays = cVar0;
	this->ampms = cVar0;
	this->ampmsNarrow = cVar0;
	this->timeSeparator = cVar0;
	this->shortQuarters = cVar0;
	this->quarters = cVar0;
	this->standaloneShortQuarters = cVar0;
	this->standaloneQuarters = cVar0;
	this->leapMonthPatterns = cVar0;
	this->shortYearNames = cVar0;
	this->shortZodiacNames = cVar0;
	this->zoneStrings = cVar0;
	this->localPatternChars = cVar0;
	this->abbreviatedDayPeriods = cVar0;
	this->wideDayPeriods = cVar0;
	this->narrowDayPeriods = cVar0;
	this->standaloneAbbreviatedDayPeriods = cVar0;
	this->standaloneWideDayPeriods = cVar0;
	this->standaloneNarrowDayPeriods = cVar0;
	this->capitalization = cVar0;
	this->initializeData(locale, android::icu::impl::CalendarUtil::getCalendarType(locale));
	return;

}
// .method private constructor <init>(Landroid/icu/util/ULocale;Landroid/icu/impl/ICUResourceBundle;Ljava/lang/String;)V
android::icu::text::DateFormatSymbols::DateFormatSymbols(std::shared_ptr<android::icu::util::ULocale> desiredLocale,std::shared_ptr<android::icu::impl::ICUResourceBundle> b,std::shared_ptr<java::lang::String> calendarType)
{
	
	std::shared_ptr<std::vector<java::lang::String>> cVar0;
	
	//    .param p1, "desiredLocale"    # Landroid/icu/util/ULocale;
	//    .param p2, "b"    # Landroid/icu/impl/ICUResourceBundle;
	//    .param p3, "calendarType"    # Ljava/lang/String;
	cVar0 = 0x0;
	// 1049    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->eras = cVar0;
	this->eraNames = cVar0;
	this->narrowEras = cVar0;
	this->months = cVar0;
	this->shortMonths = cVar0;
	this->narrowMonths = cVar0;
	this->standaloneMonths = cVar0;
	this->standaloneShortMonths = cVar0;
	this->standaloneNarrowMonths = cVar0;
	this->weekdays = cVar0;
	this->shortWeekdays = cVar0;
	this->shorterWeekdays = cVar0;
	this->narrowWeekdays = cVar0;
	this->standaloneWeekdays = cVar0;
	this->standaloneShortWeekdays = cVar0;
	this->standaloneShorterWeekdays = cVar0;
	this->standaloneNarrowWeekdays = cVar0;
	this->ampms = cVar0;
	this->ampmsNarrow = cVar0;
	this->timeSeparator = cVar0;
	this->shortQuarters = cVar0;
	this->quarters = cVar0;
	this->standaloneShortQuarters = cVar0;
	this->standaloneQuarters = cVar0;
	this->leapMonthPatterns = cVar0;
	this->shortYearNames = cVar0;
	this->shortZodiacNames = cVar0;
	this->zoneStrings = cVar0;
	this->localPatternChars = cVar0;
	this->abbreviatedDayPeriods = cVar0;
	this->wideDayPeriods = cVar0;
	this->narrowDayPeriods = cVar0;
	this->standaloneAbbreviatedDayPeriods = cVar0;
	this->standaloneWideDayPeriods = cVar0;
	this->standaloneNarrowDayPeriods = cVar0;
	this->capitalization = cVar0;
	this->initializeData(desiredLocale, b, calendarType);
	return;

}
// .method synthetic constructor <init>(Landroid/icu/util/ULocale;Landroid/icu/impl/ICUResourceBundle;Ljava/lang/String;Landroid/icu/text/DateFormatSymbols;)V
android::icu::text::DateFormatSymbols::DateFormatSymbols(std::shared_ptr<android::icu::util::ULocale> desiredLocale,std::shared_ptr<android::icu::impl::ICUResourceBundle> b,std::shared_ptr<java::lang::String> calendarType,std::shared_ptr<android::icu::text::DateFormatSymbols> _this3)
{
	
	//    .param p1, "desiredLocale"    # Landroid/icu/util/ULocale;
	//    .param p2, "b"    # Landroid/icu/impl/ICUResourceBundle;
	//    .param p3, "calendarType"    # Ljava/lang/String;
	//    .param p4, "-this3"    # Landroid/icu/text/DateFormatSymbols;
	android::icu::text::DateFormatSymbols::(desiredLocale, b, calendarType);
	return;

}
// .method public constructor <init>(Landroid/icu/util/ULocale;Ljava/lang/String;)V
android::icu::text::DateFormatSymbols::DateFormatSymbols(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> calType)
{
	
	std::shared_ptr<std::vector<java::lang::String>> cVar0;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "calType"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1184    .end annotation
	cVar0 = 0x0;
	// 1190    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->eras = cVar0;
	this->eraNames = cVar0;
	this->narrowEras = cVar0;
	this->months = cVar0;
	this->shortMonths = cVar0;
	this->narrowMonths = cVar0;
	this->standaloneMonths = cVar0;
	this->standaloneShortMonths = cVar0;
	this->standaloneNarrowMonths = cVar0;
	this->weekdays = cVar0;
	this->shortWeekdays = cVar0;
	this->shorterWeekdays = cVar0;
	this->narrowWeekdays = cVar0;
	this->standaloneWeekdays = cVar0;
	this->standaloneShortWeekdays = cVar0;
	this->standaloneShorterWeekdays = cVar0;
	this->standaloneNarrowWeekdays = cVar0;
	this->ampms = cVar0;
	this->ampmsNarrow = cVar0;
	this->timeSeparator = cVar0;
	this->shortQuarters = cVar0;
	this->quarters = cVar0;
	this->standaloneShortQuarters = cVar0;
	this->standaloneQuarters = cVar0;
	this->leapMonthPatterns = cVar0;
	this->shortYearNames = cVar0;
	this->shortZodiacNames = cVar0;
	this->zoneStrings = cVar0;
	this->localPatternChars = cVar0;
	this->abbreviatedDayPeriods = cVar0;
	this->wideDayPeriods = cVar0;
	this->narrowDayPeriods = cVar0;
	this->standaloneAbbreviatedDayPeriods = cVar0;
	this->standaloneWideDayPeriods = cVar0;
	this->standaloneNarrowDayPeriods = cVar0;
	this->capitalization = cVar0;
	this->initializeData(locale, calType);
	return;

}
// .method public constructor <init>(Ljava/lang/Class;Landroid/icu/util/ULocale;)V
android::icu::text::DateFormatSymbols::DateFormatSymbols(std::shared_ptr<java::lang::Class<android::icu::util::Calendar>> calendarClass,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	int cVar0;
	std::shared_ptr<std::vector<java::lang::String>> cVar1;
	std::shared_ptr<java::lang::String> fullName;
	std::shared_ptr<java::lang::Object> className;
	std::shared_ptr<java::lang::String> calType;
	std::shared_ptr<std::vector<std::vector<java::lang::String>>> cVar2;
	int cVar3;
	auto calClassInfo;
	
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1311        value = {
	// 1312            "(",
	// 1313            "Ljava/lang/Class",
	// 1314            "<+",
	// 1315            "Landroid/icu/util/Calendar;",
	// 1316            ">;",
	// 1317            "Landroid/icu/util/ULocale;",
	// 1318            ")V"
	// 1319        }
	// 1320    .end annotation
	//    .local p1, "calendarClass":Ljava/lang/Class;, "Ljava/lang/Class<+Landroid/icu/util/Calendar;>;"
	cVar0 = 0x0;
	cVar1 = 0x0;
	// 1329    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->eras = cVar1;
	this->eraNames = cVar1;
	this->narrowEras = cVar1;
	this->months = cVar1;
	this->shortMonths = cVar1;
	this->narrowMonths = cVar1;
	this->standaloneMonths = cVar1;
	this->standaloneShortMonths = cVar1;
	this->standaloneNarrowMonths = cVar1;
	this->weekdays = cVar1;
	this->shortWeekdays = cVar1;
	this->shorterWeekdays = cVar1;
	this->narrowWeekdays = cVar1;
	this->standaloneWeekdays = cVar1;
	this->standaloneShortWeekdays = cVar1;
	this->standaloneShorterWeekdays = cVar1;
	this->standaloneNarrowWeekdays = cVar1;
	this->ampms = cVar1;
	this->ampmsNarrow = cVar1;
	this->timeSeparator = cVar1;
	this->shortQuarters = cVar1;
	this->quarters = cVar1;
	this->standaloneShortQuarters = cVar1;
	this->standaloneQuarters = cVar1;
	this->leapMonthPatterns = cVar1;
	this->shortYearNames = cVar1;
	this->shortZodiacNames = cVar1;
	this->zoneStrings = cVar1;
	this->localPatternChars = cVar1;
	this->abbreviatedDayPeriods = cVar1;
	this->wideDayPeriods = cVar1;
	this->narrowDayPeriods = cVar1;
	this->standaloneAbbreviatedDayPeriods = cVar1;
	this->standaloneWideDayPeriods = cVar1;
	this->standaloneNarrowDayPeriods = cVar1;
	this->capitalization = cVar1;
	fullName = calendarClass->getName();
	//    .local v3, "fullName":Ljava/lang/String;
	//    .local v4, "lastDot":I
	className = fullName->substring(( fullName->lastIndexOf(0x2e) + 0x1));
	//    .local v2, "className":Ljava/lang/String;
	calType = 0x0;
	//    .local v1, "calType":Ljava/lang/String;
	cVar2 = android::icu::text::DateFormatSymbols::CALENDAR_CLASSES;
	cVar3 = cVar0;
label_goto_62:
	if ( cVar3 >= cVar2->size() )
		goto label_cond_71;
	calClassInfo = cVar2[cVar3];
	//    .local v0, "calClassInfo":[Ljava/lang/String;
	if ( !(calClassInfo[cVar0]->equals(className)) )  
		goto label_cond_87;
	calType = calClassInfo[0x1];
	//    .end local v0    # "calClassInfo":[Ljava/lang/String;
	//    .end local v1    # "calType":Ljava/lang/String;
label_cond_71:
	if ( calType )     
		goto label_cond_83;
label_cond_83:
	this->initializeData(locale, calType);
	return;
	// 1520    .line 2264
	// 1521    .restart local v0    # "calClassInfo":[Ljava/lang/String;
	// 1522    .restart local v1    # "calType":Ljava/lang/String;
label_cond_87:
	cVar3 = ( cVar3 + 0x1);
	goto label_goto_62;

}
// .method public constructor <init>(Ljava/lang/Class;Ljava/util/Locale;)V
android::icu::text::DateFormatSymbols::DateFormatSymbols(std::shared_ptr<java::lang::Class<android::icu::util::Calendar>> calendarClass,std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p2, "locale"    # Ljava/util/Locale;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1533        value = {
	// 1534            "(",
	// 1535            "Ljava/lang/Class",
	// 1536            "<+",
	// 1537            "Landroid/icu/util/Calendar;",
	// 1538            ">;",
	// 1539            "Ljava/util/Locale;",
	// 1540            ")V"
	// 1541        }
	// 1542    .end annotation
	//    .local p1, "calendarClass":Ljava/lang/Class;, "Ljava/lang/Class<+Landroid/icu/util/Calendar;>;"
	android::icu::text::DateFormatSymbols::(calendarClass, android::icu::util::ULocale::forLocale(locale));
	return;

}
// .method public constructor <init>(Ljava/util/Locale;)V
android::icu::text::DateFormatSymbols::DateFormatSymbols(std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p1, "locale"    # Ljava/util/Locale;
	android::icu::text::DateFormatSymbols::(android::icu::util::ULocale::forLocale(locale));
	return;

}
// .method public constructor <init>(Ljava/util/ResourceBundle;Landroid/icu/util/ULocale;)V
android::icu::text::DateFormatSymbols::DateFormatSymbols(std::shared_ptr<java::util::ResourceBundle> bundle,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<std::vector<java::lang::String>> cVar0;
	
	//    .param p1, "bundle"    # Ljava/util/ResourceBundle;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	cVar0 = 0x0;
	// 1582    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->eras = cVar0;
	this->eraNames = cVar0;
	this->narrowEras = cVar0;
	this->months = cVar0;
	this->shortMonths = cVar0;
	this->narrowMonths = cVar0;
	this->standaloneMonths = cVar0;
	this->standaloneShortMonths = cVar0;
	this->standaloneNarrowMonths = cVar0;
	this->weekdays = cVar0;
	this->shortWeekdays = cVar0;
	this->shorterWeekdays = cVar0;
	this->narrowWeekdays = cVar0;
	this->standaloneWeekdays = cVar0;
	this->standaloneShortWeekdays = cVar0;
	this->standaloneShorterWeekdays = cVar0;
	this->standaloneNarrowWeekdays = cVar0;
	this->ampms = cVar0;
	this->ampmsNarrow = cVar0;
	this->timeSeparator = cVar0;
	this->shortQuarters = cVar0;
	this->quarters = cVar0;
	this->standaloneShortQuarters = cVar0;
	this->standaloneQuarters = cVar0;
	this->leapMonthPatterns = cVar0;
	this->shortYearNames = cVar0;
	this->shortZodiacNames = cVar0;
	this->zoneStrings = cVar0;
	this->localPatternChars = cVar0;
	this->abbreviatedDayPeriods = cVar0;
	this->wideDayPeriods = cVar0;
	this->narrowDayPeriods = cVar0;
	this->standaloneAbbreviatedDayPeriods = cVar0;
	this->standaloneWideDayPeriods = cVar0;
	this->standaloneNarrowDayPeriods = cVar0;
	this->capitalization = cVar0;
	bundle->checkCast("android::icu::impl::ICUResourceBundle");
	//    .end local p1    # "bundle":Ljava/util/ResourceBundle;
	this->initializeData(locale, bundle, android::icu::impl::CalendarUtil::getCalendarType(locale));
	return;

}
// .method public constructor <init>(Ljava/util/ResourceBundle;Ljava/util/Locale;)V
android::icu::text::DateFormatSymbols::DateFormatSymbols(std::shared_ptr<java::util::ResourceBundle> bundle,std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p1, "bundle"    # Ljava/util/ResourceBundle;
	//    .param p2, "locale"    # Ljava/util/Locale;
	android::icu::text::DateFormatSymbols::(bundle, android::icu::util::ULocale::forLocale(locale));
	return;

}
// .method private static final arrayOfArrayEquals([[Ljava/lang/Object;[[Ljava/lang/Object;)Z
bool android::icu::text::DateFormatSymbols::arrayOfArrayEquals(std::shared_ptr<std::vector<std::vector<java::lang::Object>>> aa1,std::shared_ptr<std::vector<std::vector<java::lang::Object>>> aa2)
{
	
	bool cVar0;
	int i;
	bool equal;
	
	//    .param p0, "aa1"    # [[Ljava/lang/Object;
	//    .param p1, "aa2"    # [[Ljava/lang/Object;
	cVar0 = 0x0;
	if ( aa1 != aa2 )
		goto label_cond_5;
	return 0x1;
	// 1739    .line 2042
label_cond_5:
	if ( !(aa1) )  
		goto label_cond_9;
	if ( aa2 )     
		goto label_cond_a;
label_cond_9:
	return cVar0;
	// 1749    .line 2045
label_cond_a:
	if ( aa1->size() == aa2->size() )
		goto label_cond_f;
	return cVar0;
	// 1760    .line 2048
label_cond_f:
	//    .local v0, "equal":Z
	i = 0x0;
	//    .end local v0    # "equal":Z
	//    .local v1, "i":I
label_goto_11:
	if ( i >= aa1->size() )
		goto label_cond_1e;
	equal = android::icu::impl::Utility::arrayEquals(aa1[i], aa2[i]);
	//    .local v0, "equal":Z
	if ( equal )     
		goto label_cond_1f;
	//    .end local v0    # "equal":Z
label_cond_1e:
	return 0x1;
	// 1793    .line 2049
	// 1794    .restart local v0    # "equal":Z
label_cond_1f:
	i = ( i + 0x1);
	goto label_goto_11;

}
// .method private final duplicate([Ljava/lang/String;)[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateFormatSymbols::duplicate(std::shared_ptr<std::vector<java::lang::String>> srcArray)
{
	
	std::shared_ptr<std::vector<java::lang::String>> cVar0;
	
	//    .param p1, "srcArray"    # [Ljava/lang/String;
	cVar0 = srcArray->clone();
	cVar0->checkCast("std::vector<java::lang::String>");
	return cVar0;

}
// .method private final duplicate([[Ljava/lang/String;)[[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateFormatSymbols::duplicate(std::shared_ptr<std::vector<std::vector<java::lang::String>>> srcArray)
{
	
	std::shared<std::vector<std::vector<std::vector<java::lang::String>>>> aCopy;
	int i;
	
	//    .param p1, "srcArray"    # [[Ljava/lang/String;
	aCopy = std::make_shared<std::vector<std::vector<std::vector<java::lang::String>>>>(srcArray->size());
	//    .local v0, "aCopy":[[Ljava/lang/String;
	i = 0x0;
	//    .local v1, "i":I
label_goto_4:
	if ( i >= srcArray->size() )
		goto label_cond_12;
	aCopy[i] = this->duplicate(srcArray[i]);
	i = ( i + 0x1);
	goto label_goto_4;
	// 1850    .line 2099
label_cond_12:
	return aCopy;

}
// .method public static getAvailableLocales()[Ljava/util/Locale;
std::shared_ptr<java::util::Locale> android::icu::text::DateFormatSymbols::getAvailableLocales()
{
	
	return android::icu::impl::ICUResourceBundle::getAvailableLocales({const[class].FS-Param});

}
// .method public static getAvailableULocales()[Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::text::DateFormatSymbols::getAvailableULocales()
{
	
	return android::icu::impl::ICUResourceBundle::getAvailableULocales({const[class].FS-Param});

}
// .method public static getDateFormatBundle(Landroid/icu/util/Calendar;Landroid/icu/util/ULocale;)Ljava/util/ResourceBundle;
std::shared_ptr<java::util::ResourceBundle> android::icu::text::DateFormatSymbols::getDateFormatBundle(std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p0, "cal"    # Landroid/icu/util/Calendar;
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1884        value = {
	// 1885            Ljava/util/MissingResourceException;
	// 1886        }
	// 1887    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1890    .end annotation
	return 0x0;

}
// .method public static getDateFormatBundle(Landroid/icu/util/Calendar;Ljava/util/Locale;)Ljava/util/ResourceBundle;
std::shared_ptr<java::util::ResourceBundle> android::icu::text::DateFormatSymbols::getDateFormatBundle(std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p0, "cal"    # Landroid/icu/util/Calendar;
	//    .param p1, "locale"    # Ljava/util/Locale;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1904        value = {
	// 1905            Ljava/util/MissingResourceException;
	// 1906        }
	// 1907    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1910    .end annotation
	return 0x0;

}
// .method public static getDateFormatBundle(Ljava/lang/Class;Landroid/icu/util/ULocale;)Ljava/util/ResourceBundle;
std::shared_ptr<java::util::ResourceBundle> android::icu::text::DateFormatSymbols::getDateFormatBundle(std::shared_ptr<java::lang::Class<android::icu::util::Calendar>> calendarClass,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1923        value = {
	// 1924            "(",
	// 1925            "Ljava/lang/Class",
	// 1926            "<+",
	// 1927            "Landroid/icu/util/Calendar;",
	// 1928            ">;",
	// 1929            "Landroid/icu/util/ULocale;",
	// 1930            ")",
	// 1931            "Ljava/util/ResourceBundle;"
	// 1932        }
	// 1933    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 1936        value = {
	// 1937            Ljava/util/MissingResourceException;
	// 1938        }
	// 1939    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1942    .end annotation
	//    .local p0, "calendarClass":Ljava/lang/Class;, "Ljava/lang/Class<+Landroid/icu/util/Calendar;>;"
	return 0x0;

}
// .method public static getDateFormatBundle(Ljava/lang/Class;Ljava/util/Locale;)Ljava/util/ResourceBundle;
std::shared_ptr<java::util::ResourceBundle> android::icu::text::DateFormatSymbols::getDateFormatBundle(std::shared_ptr<java::lang::Class<android::icu::util::Calendar>> calendarClass,std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p1, "locale"    # Ljava/util/Locale;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1956        value = {
	// 1957            "(",
	// 1958            "Ljava/lang/Class",
	// 1959            "<+",
	// 1960            "Landroid/icu/util/Calendar;",
	// 1961            ">;",
	// 1962            "Ljava/util/Locale;",
	// 1963            ")",
	// 1964            "Ljava/util/ResourceBundle;"
	// 1965        }
	// 1966    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 1969        value = {
	// 1970            Ljava/util/MissingResourceException;
	// 1971        }
	// 1972    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1975    .end annotation
	//    .local p0, "calendarClass":Ljava/lang/Class;, "Ljava/lang/Class<+Landroid/icu/util/Calendar;>;"
	return 0x0;

}
// .method public static getInstance()Landroid/icu/text/DateFormatSymbols;
std::shared_ptr<android::icu::text::DateFormatSymbols> android::icu::text::DateFormatSymbols::getInstance()
{
	
	std::shared_ptr<android::icu::text::DateFormatSymbols> cVar0;
	
	cVar0 = std::make_shared<android::icu::text::DateFormatSymbols>();
	return cVar0;

}
// .method public static getInstance(Landroid/icu/util/ULocale;)Landroid/icu/text/DateFormatSymbols;
std::shared_ptr<android::icu::text::DateFormatSymbols> android::icu::text::DateFormatSymbols::getInstance(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<android::icu::text::DateFormatSymbols> cVar0;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	cVar0 = std::make_shared<android::icu::text::DateFormatSymbols>(locale);
	return cVar0;

}
// .method public static getInstance(Ljava/util/Locale;)Landroid/icu/text/DateFormatSymbols;
std::shared_ptr<android::icu::text::DateFormatSymbols> android::icu::text::DateFormatSymbols::getInstance(std::shared_ptr<java::util::Locale> locale)
{
	
	std::shared_ptr<android::icu::text::DateFormatSymbols> cVar0;
	
	//    .param p0, "locale"    # Ljava/util/Locale;
	cVar0 = std::make_shared<android::icu::text::DateFormatSymbols>(locale);
	return cVar0;

}
// .method private loadDayPeriodStrings(Ljava/util/Map;)[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateFormatSymbols::loadDayPeriodStrings(std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> resourceMap)
{
	
	std::shared<std::vector<std::vector<java::lang::String>>> strings;
	int i;
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2026        value = {
	// 2027            "(",
	// 2028            "Ljava/util/Map",
	// 2029            "<",
	// 2030            "Ljava/lang/String;",
	// 2031            "Ljava/lang/String;",
	// 2032            ">;)[",
	// 2033            "Ljava/lang/String;"
	// 2034        }
	// 2035    .end annotation
	//    .local p1, "resourceMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	strings = std::make_shared<std::vector<std::vector<java::lang::String>>>(android::icu::text::DateFormatSymbols::DAY_PERIOD_KEYS->size());
	//    .local v1, "strings":[Ljava/lang/String;
	if ( !(resourceMap) )  
		goto label_cond_1c;
	i = 0x0;
	//    .local v0, "i":I
label_goto_8:
	if ( i >= android::icu::text::DateFormatSymbols::DAY_PERIOD_KEYS->size() )
		goto label_cond_1c;
	cVar0 = resourceMap->get(android::icu::text::DateFormatSymbols::DAY_PERIOD_KEYS[i]);
	cVar0->checkCast("java::lang::String");
	strings[i] = cVar0;
	i = ( i + 0x1);
	goto label_goto_8;
	// 2079    .line 2076
	// 2080    .end local v0    # "i":I
label_cond_1c:
	return strings;

}
// .method private readObject(Ljava/io/ObjectInputStream;)V
void android::icu::text::DateFormatSymbols::readObject(std::shared_ptr<java::io::ObjectInputStream> stream)
{
	
	//    .param p1, "stream"    # Ljava/io/ObjectInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2089        value = {
	// 2090            Ljava/io/IOException;,
	// 2091            Ljava/lang/ClassNotFoundException;
	// 2092        }
	// 2093    .end annotation
	stream->defaultReadObject();
	return;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::DateFormatSymbols::clone()
{
	
	std::shared_ptr<android::icu::util::ICUCloneNotSupportedException> cVar0;
	std::shared_ptr<android::icu::text::DateFormatSymbols> other;
	std::vector<std::any> tryCatchExcetionList;
	
	try {
	//label_try_start_0:
	other = this->clone();
	other->checkCast("android::icu::text::DateFormatSymbols");
	//label_try_end_6:
	}
	catch (java::lang::CloneNotSupportedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_7;
	}
	//    .catch Ljava/lang/CloneNotSupportedException; {:try_start_0 .. :try_end_6} :catch_7
	//    .local v1, "other":Landroid/icu/text/DateFormatSymbols;
	return other;
	// 2123    .line 1406
	// 2124    .end local v1    # "other":Landroid/icu/text/DateFormatSymbols;
label_catch_7:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/CloneNotSupportedException;
	cVar0 = std::make_shared<android::icu::util::ICUCloneNotSupportedException>(getCatchExcetionFromList);
	// throw
	throw cVar0;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::DateFormatSymbols::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar1;
	std::shared_ptr<android::icu::text::DateFormatSymbols> that;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( this != obj )
		goto label_cond_5;
	return 0x1;
	// 2151    .line 1430
label_cond_5:
	if ( !(obj) )  
		goto label_cond_11;
	if ( this->getClass() == obj->getClass() )
		goto label_cond_12;
label_cond_11:
	return cVar1;
label_cond_12:
	that = obj;
	that->checkCast("android::icu::text::DateFormatSymbols");
	//    .local v0, "that":Landroid/icu/text/DateFormatSymbols;
	if ( !(android::icu::impl::Utility::arrayEquals(this->eras, that->eras)) )  
		goto label_cond_133;
	if ( !(android::icu::impl::Utility::arrayEquals(this->eraNames, that->eraNames)) )  
		goto label_cond_133;
	if ( !(android::icu::impl::Utility::arrayEquals(this->months, that->months)) )  
		goto label_cond_133;
	if ( !(android::icu::impl::Utility::arrayEquals(this->shortMonths, that->shortMonths)) )  
		goto label_cond_133;
	if ( !(android::icu::impl::Utility::arrayEquals(this->narrowMonths, that->narrowMonths)) )  
		goto label_cond_133;
	if ( !(android::icu::impl::Utility::arrayEquals(this->standaloneMonths, that->standaloneMonths)) )  
		goto label_cond_133;
	if ( !(android::icu::impl::Utility::arrayEquals(this->standaloneShortMonths, that->standaloneShortMonths)) )  
		goto label_cond_133;
	if ( !(android::icu::impl::Utility::arrayEquals(this->standaloneNarrowMonths, that->standaloneNarrowMonths)) )  
		goto label_cond_133;
	if ( !(android::icu::impl::Utility::arrayEquals(this->weekdays, that->weekdays)) )  
		goto label_cond_133;
	if ( !(android::icu::impl::Utility::arrayEquals(this->shortWeekdays, that->shortWeekdays)) )  
		goto label_cond_133;
	if ( !(android::icu::impl::Utility::arrayEquals(this->shorterWeekdays, that->shorterWeekdays)) )  
		goto label_cond_133;
	if ( !(android::icu::impl::Utility::arrayEquals(this->narrowWeekdays, that->narrowWeekdays)) )  
		goto label_cond_133;
	if ( !(android::icu::impl::Utility::arrayEquals(this->standaloneWeekdays, that->standaloneWeekdays)) )  
		goto label_cond_133;
	if ( !(android::icu::impl::Utility::arrayEquals(this->standaloneShortWeekdays, that->standaloneShortWeekdays)) )  
		goto label_cond_133;
	if ( !(android::icu::impl::Utility::arrayEquals(this->standaloneShorterWeekdays, that->standaloneShorterWeekdays)) )  
		goto label_cond_133;
	if ( !(android::icu::impl::Utility::arrayEquals(this->standaloneNarrowWeekdays, that->standaloneNarrowWeekdays)) )  
		goto label_cond_133;
	if ( !(android::icu::impl::Utility::arrayEquals(this->ampms, that->ampms)) )  
		goto label_cond_133;
	if ( !(android::icu::impl::Utility::arrayEquals(this->ampmsNarrow, that->ampmsNarrow)) )  
		goto label_cond_133;
	if ( !(android::icu::impl::Utility::arrayEquals(this->abbreviatedDayPeriods, that->abbreviatedDayPeriods)) )  
		goto label_cond_133;
	if ( !(android::icu::impl::Utility::arrayEquals(this->wideDayPeriods, that->wideDayPeriods)) )  
		goto label_cond_133;
	if ( !(android::icu::impl::Utility::arrayEquals(this->narrowDayPeriods, that->narrowDayPeriods)) )  
		goto label_cond_133;
	if ( !(android::icu::impl::Utility::arrayEquals(this->standaloneAbbreviatedDayPeriods, that->standaloneAbbreviatedDayPeriods)) )  
		goto label_cond_133;
	if ( !(android::icu::impl::Utility::arrayEquals(this->standaloneWideDayPeriods, that->standaloneWideDayPeriods)) )  
		goto label_cond_133;
	if ( !(android::icu::impl::Utility::arrayEquals(this->standaloneNarrowDayPeriods, that->standaloneNarrowDayPeriods)) )  
		goto label_cond_133;
	if ( !(android::icu::impl::Utility::arrayEquals(this->timeSeparator, that->timeSeparator)) )  
		goto label_cond_133;
	if ( !(android::icu::text::DateFormatSymbols::arrayOfArrayEquals(this->zoneStrings, that->zoneStrings)) )  
		goto label_cond_133;
	if ( !(this->requestedLocale->getDisplayName()->equals(that->requestedLocale->getDisplayName())) )  
		goto label_cond_133;
	cVar1 = android::icu::impl::Utility::arrayEquals(this->localPatternChars, that->localPatternChars);
label_cond_133:
	return cVar1;

}
// .method public getAmPmStrings()[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateFormatSymbols::getAmPmStrings()
{
	
	return this->duplicate(this->ampms);

}
// .method public getEraNames()[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateFormatSymbols::getEraNames()
{
	
	return this->duplicate(this->eraNames);

}
// .method public getEras()[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateFormatSymbols::getEras()
{
	
	return this->duplicate(this->eras);

}
// .method public getLeapMonthPattern(II)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateFormatSymbols::getLeapMonthPattern(int context,int width)
{
	
	int leapMonthPatternIndex;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "context"    # I
	//    .param p2, "width"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2569    .end annotation
	if ( !(this->leapMonthPatterns) )  
		goto label_cond_2f;
	leapMonthPatternIndex = -0x1;
	//    .local v0, "leapMonthPatternIndex":I
	// switch
	{
	auto item = ( context );
	if (item == 0) goto label_pswitch_14;
	if (item == 1) goto label_pswitch_1e;
	if (item == 2) goto label_pswitch_28;
	}
label_goto_9:
	if ( leapMonthPatternIndex >= 0 )
		goto label_cond_2a;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad context or width argument")));
	// throw
	throw cVar0;
	// 2599    .line 1171
label_pswitch_14:
	// switch
	{
	auto item = ( width );
	if (item == 0) goto label_pswitch_18;
	if (item == 1) goto label_pswitch_1a;
	if (item == 2) goto label_pswitch_1c;
	if (item == 3) goto label_pswitch_18;
	}
	goto label_goto_9;
	// 2605    .line 1177
label_pswitch_18:
	leapMonthPatternIndex = 0x1;
	goto label_goto_9;
	// 2612    .line 1173
label_pswitch_1a:
	leapMonthPatternIndex = 0x0;
	goto label_goto_9;
	// 2619    .line 1180
label_pswitch_1c:
	leapMonthPatternIndex = 0x2;
	goto label_goto_9;
	// 2626    .line 1185
label_pswitch_1e:
	// switch
	{
	auto item = ( width );
	if (item == 0) goto label_pswitch_22;
	if (item == 1) goto label_pswitch_24;
	if (item == 2) goto label_pswitch_26;
	if (item == 3) goto label_pswitch_22;
	}
	goto label_goto_9;
	// 2632    .line 1191
label_pswitch_22:
	leapMonthPatternIndex = 0x1;
	goto label_goto_9;
	// 2639    .line 1187
label_pswitch_24:
	leapMonthPatternIndex = 0x3;
	goto label_goto_9;
	// 2646    .line 1194
label_pswitch_26:
	leapMonthPatternIndex = 0x5;
	goto label_goto_9;
	// 2653    .line 1199
label_pswitch_28:
	leapMonthPatternIndex = 0x6;
	goto label_goto_9;
	// 2660    .line 1205
label_cond_2a:
	return this->leapMonthPatterns[leapMonthPatternIndex];
	// 2668    .line 1207
	// 2669    .end local v0    # "leapMonthPatternIndex":I
label_cond_2f:
	return 0x0;
	// 2673    .line 1169
	// 2674    :pswitch_data_30
	// 2675    .packed-switch 0x0
	// 2676        :pswitch_14
	// 2677        :pswitch_1e
	// 2678        :pswitch_28
	// 2679    .end packed-switch
	// 2681    .line 1171
	// 2682    :pswitch_data_3a
	// 2683    .packed-switch 0x0
	// 2684        :pswitch_18
	// 2685        :pswitch_1a
	// 2686        :pswitch_1c
	// 2687        :pswitch_18
	// 2688    .end packed-switch
	// 2690    .line 1185
	// 2691    :pswitch_data_46
	// 2692    .packed-switch 0x0
	// 2693        :pswitch_22
	// 2694        :pswitch_24
	// 2695        :pswitch_26
	// 2696        :pswitch_22
	// 2697    .end packed-switch

}
// .method public getLocalPatternChars()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateFormatSymbols::getLocalPatternChars()
{
	
	return this->localPatternChars;

}
// .method public final getLocale(Landroid/icu/util/ULocale$Type;)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::text::DateFormatSymbols::getLocale(std::shared_ptr<android::icu::util::ULocale_S_Type> type)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	
	//    .param p1, "type"    # Landroid/icu/util/ULocale$Type;
	if ( type != android::icu::util::ULocale::ACTUAL_LOCALE )
		goto label_cond_7;
	cVar0 = this->actualLocale;
label_goto_6:
	return cVar0;
	// 2727    .line 2418
label_cond_7:
	cVar0 = this->validLocale;
	goto label_goto_6;

}
// .method public getMonths()[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateFormatSymbols::getMonths()
{
	
	return this->duplicate(this->months);

}
// .method public getMonths(II)[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateFormatSymbols::getMonths(int context,int width)
{
	
	std::shared_ptr<std::vector<java::lang::String>> returnValue;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "context"    # I
	//    .param p2, "width"    # I
	returnValue = 0x0;
	//    .local v0, "returnValue":[Ljava/lang/String;
	// switch
	{
	auto item = ( context );
	if (item == 0) goto label_pswitch_f;
	if (item == 1) goto label_pswitch_1c;
	}
	//    .end local v0    # "returnValue":[Ljava/lang/String;
label_goto_4:
	if ( returnValue )     
		goto label_cond_29;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad context or width argument")));
	// throw
	throw cVar0;
	// 2775    .line 775
	// 2776    .restart local v0    # "returnValue":[Ljava/lang/String;
label_pswitch_f:
	// switch
	{
	auto item = ( width );
	if (item == 0) goto label_pswitch_13;
	if (item == 1) goto label_pswitch_16;
	if (item == 2) goto label_pswitch_19;
	if (item == 3) goto label_pswitch_13;
	}
	goto label_goto_4;
	// 2782    .line 781
label_pswitch_13:
	returnValue = this->shortMonths;
	//    .local v0, "returnValue":[Ljava/lang/String;
	goto label_goto_4;
	// 2789    .line 777
	// 2790    .local v0, "returnValue":[Ljava/lang/String;
label_pswitch_16:
	returnValue = this->months;
	//    .local v0, "returnValue":[Ljava/lang/String;
	goto label_goto_4;
	// 2797    .line 784
	// 2798    .local v0, "returnValue":[Ljava/lang/String;
label_pswitch_19:
	returnValue = this->narrowMonths;
	//    .local v0, "returnValue":[Ljava/lang/String;
	goto label_goto_4;
	// 2805    .line 789
	// 2806    .local v0, "returnValue":[Ljava/lang/String;
label_pswitch_1c:
	// switch
	{
	auto item = ( width );
	if (item == 0) goto label_pswitch_20;
	if (item == 1) goto label_pswitch_23;
	if (item == 2) goto label_pswitch_26;
	if (item == 3) goto label_pswitch_20;
	}
	goto label_goto_4;
	// 2812    .line 795
label_pswitch_20:
	returnValue = this->standaloneShortMonths;
	//    .local v0, "returnValue":[Ljava/lang/String;
	goto label_goto_4;
	// 2819    .line 791
	// 2820    .local v0, "returnValue":[Ljava/lang/String;
label_pswitch_23:
	returnValue = this->standaloneMonths;
	//    .local v0, "returnValue":[Ljava/lang/String;
	goto label_goto_4;
	// 2827    .line 798
	// 2828    .local v0, "returnValue":[Ljava/lang/String;
label_pswitch_26:
	returnValue = this->standaloneNarrowMonths;
	//    .local v0, "returnValue":[Ljava/lang/String;
	goto label_goto_4;
	// 2835    .line 806
	// 2836    .end local v0    # "returnValue":[Ljava/lang/String;
label_cond_29:
	return this->duplicate(returnValue);
	// 2844    .line 773
	// 2845    :pswitch_data_2e
	// 2846    .packed-switch 0x0
	// 2847        :pswitch_f
	// 2848        :pswitch_1c
	// 2849    .end packed-switch
	// 2851    .line 775
	// 2852    :pswitch_data_36
	// 2853    .packed-switch 0x0
	// 2854        :pswitch_13
	// 2855        :pswitch_16
	// 2856        :pswitch_19
	// 2857        :pswitch_13
	// 2858    .end packed-switch
	// 2860    .line 789
	// 2861    :pswitch_data_42
	// 2862    .packed-switch 0x0
	// 2863        :pswitch_20
	// 2864        :pswitch_23
	// 2865        :pswitch_26
	// 2866        :pswitch_20
	// 2867    .end packed-switch

}
// .method public getNarrowEras()[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateFormatSymbols::getNarrowEras()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2873    .end annotation
	return this->duplicate(this->narrowEras);

}
// .method public getQuarters(II)[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateFormatSymbols::getQuarters(int context,int width)
{
	
	std::shared_ptr<std::vector<java::lang::String>> returnValue;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "context"    # I
	//    .param p2, "width"    # I
	returnValue = 0x0;
	//    .local v0, "returnValue":[Ljava/lang/String;
	// switch
	{
	auto item = ( context );
	if (item == 0) goto label_pswitch_f;
	if (item == 1) goto label_pswitch_1b;
	}
	//    .end local v0    # "returnValue":[Ljava/lang/String;
label_goto_4:
	if ( returnValue )     
		goto label_cond_27;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad context or width argument")));
	// throw
	throw cVar0;
	// 2913    .line 1021
	// 2914    .restart local v0    # "returnValue":[Ljava/lang/String;
label_pswitch_f:
	// switch
	{
	auto item = ( width );
	if (item == 0) goto label_pswitch_13;
	if (item == 1) goto label_pswitch_16;
	if (item == 2) goto label_pswitch_19;
	if (item == 3) goto label_pswitch_13;
	}
	goto label_goto_4;
	// 2920    .line 1027
label_pswitch_13:
	returnValue = this->shortQuarters;
	//    .local v0, "returnValue":[Ljava/lang/String;
	goto label_goto_4;
	// 2927    .line 1023
	// 2928    .local v0, "returnValue":[Ljava/lang/String;
label_pswitch_16:
	returnValue = this->quarters;
	//    .local v0, "returnValue":[Ljava/lang/String;
	goto label_goto_4;
	// 2935    .line 1030
	// 2936    .local v0, "returnValue":[Ljava/lang/String;
label_pswitch_19:
	returnValue = 0x0;
	goto label_goto_4;
	// 2943    .line 1036
label_pswitch_1b:
	// switch
	{
	auto item = ( width );
	if (item == 0) goto label_pswitch_1f;
	if (item == 1) goto label_pswitch_22;
	if (item == 2) goto label_pswitch_25;
	if (item == 3) goto label_pswitch_1f;
	}
	goto label_goto_4;
	// 2949    .line 1042
label_pswitch_1f:
	returnValue = this->standaloneShortQuarters;
	//    .local v0, "returnValue":[Ljava/lang/String;
	goto label_goto_4;
	// 2956    .line 1038
	// 2957    .local v0, "returnValue":[Ljava/lang/String;
label_pswitch_22:
	returnValue = this->standaloneQuarters;
	//    .local v0, "returnValue":[Ljava/lang/String;
	goto label_goto_4;
	// 2964    .line 1045
	// 2965    .local v0, "returnValue":[Ljava/lang/String;
label_pswitch_25:
	returnValue = 0x0;
	goto label_goto_4;
	// 2972    .line 1053
	// 2973    .end local v0    # "returnValue":[Ljava/lang/String;
label_cond_27:
	return this->duplicate(returnValue);
	// 2981    .line 1019
	// 2982    :pswitch_data_2c
	// 2983    .packed-switch 0x0
	// 2984        :pswitch_f
	// 2985        :pswitch_1b
	// 2986    .end packed-switch
	// 2988    .line 1021
	// 2989    :pswitch_data_34
	// 2990    .packed-switch 0x0
	// 2991        :pswitch_13
	// 2992        :pswitch_16
	// 2993        :pswitch_19
	// 2994        :pswitch_13
	// 2995    .end packed-switch
	// 2997    .line 1036
	// 2998    :pswitch_data_40
	// 2999    .packed-switch 0x0
	// 3000        :pswitch_1f
	// 3001        :pswitch_22
	// 3002        :pswitch_25
	// 3003        :pswitch_1f
	// 3004    .end packed-switch

}
// .method public getShortMonths()[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateFormatSymbols::getShortMonths()
{
	
	return this->duplicate(this->shortMonths);

}
// .method public getShortWeekdays()[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateFormatSymbols::getShortWeekdays()
{
	
	return this->duplicate(this->shortWeekdays);

}
// .method public getTimeSeparatorString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateFormatSymbols::getTimeSeparatorString()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3038    .end annotation
	return this->timeSeparator;

}
// .method public getWeekdays()[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateFormatSymbols::getWeekdays()
{
	
	return this->duplicate(this->weekdays);

}
// .method public getWeekdays(II)[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateFormatSymbols::getWeekdays(int context,int width)
{
	
	std::shared_ptr<std::vector<java::lang::String>> returnValue;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "context"    # I
	//    .param p2, "width"    # I
	returnValue = 0x0;
	//    .local v0, "returnValue":[Ljava/lang/String;
	// switch
	{
	auto item = ( context );
	if (item == 0) goto label_pswitch_f;
	if (item == 1) goto label_pswitch_26;
	}
	//    .end local v0    # "returnValue":[Ljava/lang/String;
label_goto_4:
	if ( returnValue )     
		goto label_cond_3d;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad context or width argument")));
	// throw
	throw cVar0;
	// 3088    .line 896
	// 3089    .restart local v0    # "returnValue":[Ljava/lang/String;
label_pswitch_f:
	// switch
	{
	auto item = ( width );
	if (item == 0) goto label_pswitch_13;
	if (item == 1) goto label_pswitch_16;
	if (item == 2) goto label_pswitch_23;
	if (item == 3) goto label_pswitch_19;
	}
	goto label_goto_4;
	// 3095    .line 901
label_pswitch_13:
	returnValue = this->shortWeekdays;
	//    .local v0, "returnValue":[Ljava/lang/String;
	goto label_goto_4;
	// 3102    .line 898
	// 3103    .local v0, "returnValue":[Ljava/lang/String;
label_pswitch_16:
	returnValue = this->weekdays;
	//    .local v0, "returnValue":[Ljava/lang/String;
	goto label_goto_4;
	// 3110    .line 904
	// 3111    .local v0, "returnValue":[Ljava/lang/String;
label_pswitch_19:
	if ( !(this->shorterWeekdays) )  
		goto label_cond_20;
	returnValue = this->shorterWeekdays;
	//    .local v0, "returnValue":[Ljava/lang/String;
	goto label_goto_4;
	// 3122    .local v0, "returnValue":[Ljava/lang/String;
label_cond_20:
	returnValue = this->shortWeekdays;
	//    .local v0, "returnValue":[Ljava/lang/String;
	goto label_goto_4;
	// 3129    .line 907
	// 3130    .local v0, "returnValue":[Ljava/lang/String;
label_pswitch_23:
	returnValue = this->narrowWeekdays;
	//    .local v0, "returnValue":[Ljava/lang/String;
	goto label_goto_4;
	// 3137    .line 912
	// 3138    .local v0, "returnValue":[Ljava/lang/String;
label_pswitch_26:
	// switch
	{
	auto item = ( width );
	if (item == 0) goto label_pswitch_2a;
	if (item == 1) goto label_pswitch_2d;
	if (item == 2) goto label_pswitch_3a;
	if (item == 3) goto label_pswitch_30;
	}
	goto label_goto_4;
	// 3144    .line 917
label_pswitch_2a:
	returnValue = this->standaloneShortWeekdays;
	//    .local v0, "returnValue":[Ljava/lang/String;
	goto label_goto_4;
	// 3151    .line 914
	// 3152    .local v0, "returnValue":[Ljava/lang/String;
label_pswitch_2d:
	returnValue = this->standaloneWeekdays;
	//    .local v0, "returnValue":[Ljava/lang/String;
	goto label_goto_4;
	// 3159    .line 920
	// 3160    .local v0, "returnValue":[Ljava/lang/String;
label_pswitch_30:
	if ( !(this->standaloneShorterWeekdays) )  
		goto label_cond_37;
	returnValue = this->standaloneShorterWeekdays;
	//    .local v0, "returnValue":[Ljava/lang/String;
	goto label_goto_4;
	// 3171    .local v0, "returnValue":[Ljava/lang/String;
label_cond_37:
	returnValue = this->standaloneShortWeekdays;
	//    .local v0, "returnValue":[Ljava/lang/String;
	goto label_goto_4;
	// 3178    .line 923
	// 3179    .local v0, "returnValue":[Ljava/lang/String;
label_pswitch_3a:
	returnValue = this->standaloneNarrowWeekdays;
	//    .local v0, "returnValue":[Ljava/lang/String;
	goto label_goto_4;
	// 3186    .line 931
	// 3187    .end local v0    # "returnValue":[Ljava/lang/String;
label_cond_3d:
	return this->duplicate(returnValue);
	// 3195    .line 894
	// 3196    :pswitch_data_42
	// 3197    .packed-switch 0x0
	// 3198        :pswitch_f
	// 3199        :pswitch_26
	// 3200    .end packed-switch
	// 3202    .line 896
	// 3203    :pswitch_data_4a
	// 3204    .packed-switch 0x0
	// 3205        :pswitch_13
	// 3206        :pswitch_16
	// 3207        :pswitch_23
	// 3208        :pswitch_19
	// 3209    .end packed-switch
	// 3211    .line 912
	// 3212    :pswitch_data_56
	// 3213    .packed-switch 0x0
	// 3214        :pswitch_2a
	// 3215        :pswitch_2d
	// 3216        :pswitch_3a
	// 3217        :pswitch_30
	// 3218    .end packed-switch

}
// .method public getYearNames(II)[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateFormatSymbols::getYearNames(int context,int width)
{
	
	//    .param p1, "context"    # I
	//    .param p2, "width"    # I
	if ( !(this->shortYearNames) )  
		goto label_cond_c;
	return this->duplicate(this->shortYearNames);
	// 3243    .line 1111
label_cond_c:
	return 0x0;

}
// .method public getZodiacNames(II)[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateFormatSymbols::getZodiacNames(int context,int width)
{
	
	//    .param p1, "context"    # I
	//    .param p2, "width"    # I
	if ( !(this->shortZodiacNames) )  
		goto label_cond_c;
	return this->duplicate(this->shortZodiacNames);
	// 3270    .line 1139
label_cond_c:
	return 0x0;

}
// .method public getZoneStrings()[[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateFormatSymbols::getZoneStrings()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	auto tzIDs;
	std::shared_ptr<android::icu::text::TimeZoneNames> tznames;
	std::shared<std::vector<std::vector<android::icu::text::TimeZoneNames_S_NameType>>> types;
	std::shared<std::vector<int[]>> cVar3;
	std::shared_ptr<std::vector<std::vector<java::lang::String>>> array;
	int i;
	std::shared_ptr<java::lang::String> canonicalID;
	
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	if ( !(this->zoneStrings) )  
		goto label_cond_e;
	return this->duplicate(this->zoneStrings);
	// 3299    .line 1334
label_cond_e:
	tzIDs = android::icu::util::TimeZone::getAvailableIDs({const[class].FS-Param});
	//    .local v9, "tzIDs":[Ljava/lang/String;
	tznames = android::icu::text::TimeZoneNames::getInstance(this->validLocale);
	//    .local v1, "tznames":Landroid/icu/text/TimeZoneNames;
	tznames->loadAllDisplayNames();
	types = std::make_shared<std::vector<std::vector<android::icu::text::TimeZoneNames_S_NameType>>>(0x4);
	types[cVar2] = android::icu::text::TimeZoneNames_S_NameType::LONG_STANDARD;
	types[cVar1] = android::icu::text::TimeZoneNames_S_NameType::SHORT_STANDARD;
	types[cVar0] = android::icu::text::TimeZoneNames_S_NameType::LONG_DAYLIGHT;
	types[0x3] = android::icu::text::TimeZoneNames_S_NameType::SHORT_DAYLIGHT;
	//    .local v3, "types":[Landroid/icu/text/TimeZoneNames$NameType;
	//    .local v4, "now":J
	cVar3 = std::make_shared<std::vector<int[]>>(cVar0);
	cVar3[cVar2] = tzIDs->size();
	cVar3[cVar1] = 0x5;
	array = java::lang::reflect::Array::newInstance(java::lang::String(), cVar3);
	array->checkCast("std::vector<std::vector<java::lang::String>>");
	//    .local v0, "array":[[Ljava/lang/String;
	i = 0x0;
	//    .local v8, "i":I
label_goto_44:
	if ( i >= tzIDs->size() )
		goto label_cond_5f;
	canonicalID = android::icu::util::TimeZone::getCanonicalID(tzIDs[i]);
	//    .local v2, "canonicalID":Ljava/lang/String;
	if ( canonicalID )     
		goto label_cond_51;
label_cond_51:
	array[i][cVar2] = tzIDs[i];
	tznames->getDisplayNames(canonicalID, types, java::lang::System::currentTimeMillis({const[class].FS-Param}), array[i], cVar1);
	i = ( i + 0x1);
	goto label_goto_44;
	// 3410    .line 1353
	// 3411    .end local v2    # "canonicalID":Ljava/lang/String;
label_cond_5f:
	this->zoneStrings = array;
	return this->zoneStrings;

}
// .method public hashCode()I
int android::icu::text::DateFormatSymbols::hashCode()
{
	
	return this->requestedLocale->toString()->hashCode();

}
// .method initializeData(Landroid/icu/text/DateFormatSymbols;)V
void android::icu::text::DateFormatSymbols::initializeData(std::shared_ptr<android::icu::text::DateFormatSymbols> dfs)
{
	
	//    .param p1, "dfs"    # Landroid/icu/text/DateFormatSymbols;
	this->eras = dfs->eras;
	this->eraNames = dfs->eraNames;
	this->narrowEras = dfs->narrowEras;
	this->months = dfs->months;
	this->shortMonths = dfs->shortMonths;
	this->narrowMonths = dfs->narrowMonths;
	this->standaloneMonths = dfs->standaloneMonths;
	this->standaloneShortMonths = dfs->standaloneShortMonths;
	this->standaloneNarrowMonths = dfs->standaloneNarrowMonths;
	this->weekdays = dfs->weekdays;
	this->shortWeekdays = dfs->shortWeekdays;
	this->shorterWeekdays = dfs->shorterWeekdays;
	this->narrowWeekdays = dfs->narrowWeekdays;
	this->standaloneWeekdays = dfs->standaloneWeekdays;
	this->standaloneShortWeekdays = dfs->standaloneShortWeekdays;
	this->standaloneShorterWeekdays = dfs->standaloneShorterWeekdays;
	this->standaloneNarrowWeekdays = dfs->standaloneNarrowWeekdays;
	this->ampms = dfs->ampms;
	this->ampmsNarrow = dfs->ampmsNarrow;
	this->timeSeparator = dfs->timeSeparator;
	this->shortQuarters = dfs->shortQuarters;
	this->quarters = dfs->quarters;
	this->standaloneShortQuarters = dfs->standaloneShortQuarters;
	this->standaloneQuarters = dfs->standaloneQuarters;
	this->leapMonthPatterns = dfs->leapMonthPatterns;
	this->shortYearNames = dfs->shortYearNames;
	this->shortZodiacNames = dfs->shortZodiacNames;
	this->abbreviatedDayPeriods = dfs->abbreviatedDayPeriods;
	this->wideDayPeriods = dfs->wideDayPeriods;
	this->narrowDayPeriods = dfs->narrowDayPeriods;
	this->standaloneAbbreviatedDayPeriods = dfs->standaloneAbbreviatedDayPeriods;
	this->standaloneWideDayPeriods = dfs->standaloneWideDayPeriods;
	this->standaloneNarrowDayPeriods = dfs->standaloneNarrowDayPeriods;
	this->zoneStrings = dfs->zoneStrings;
	this->localPatternChars = dfs->localPatternChars;
	this->capitalization = dfs->capitalization;
	this->actualLocale = dfs->actualLocale;
	this->validLocale = dfs->validLocale;
	this->requestedLocale = dfs->requestedLocale;
	return;

}
// .method protected initializeData(Landroid/icu/util/ULocale;Landroid/icu/impl/ICUResourceBundle;Ljava/lang/String;)V
void android::icu::text::DateFormatSymbols::initializeData(std::shared_ptr<android::icu::util::ULocale> desiredLocale,std::shared_ptr<android::icu::impl::ICUResourceBundle> b,std::shared_ptr<java::lang::String> calendarType)
{
	
	std::shared_ptr<android::icu::text::DateFormatSymbols_S_CalendarDataSink> calendarSink;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> b;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> dataForType;
	std::shared_ptr<java::lang::String> calendarType;
	std::shared_ptr<java::util::MissingResourceException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::util::Map> arrays;
	auto maps;
	std::shared_ptr<std::vector<java::lang::String>> cVar4;
	std::shared_ptr<std::vector<java::lang::String>> cVar5;
	std::shared_ptr<std::vector<java::lang::String>> cVar6;
	std::shared_ptr<std::vector<java::lang::String>> cVar7;
	std::shared_ptr<std::vector<java::lang::String>> cVar8;
	std::shared_ptr<std::vector<java::lang::String>> cVar9;
	std::shared_ptr<std::vector<java::lang::String>> cVar10;
	std::shared_ptr<std::vector<java::lang::String>> cVar11;
	std::shared_ptr<std::vector<java::lang::String>> cVar12;
	std::shared_ptr<std::vector<java::lang::String>> lWeekdays;
	std::shared_ptr<std::vector<java::lang::String>> aWeekdays;
	std::shared_ptr<std::vector<java::lang::String>> sWeekdays;
	std::shared_ptr<std::vector<java::lang::String>> nWeekdays;
	std::shared_ptr<java::util::MissingResourceException> cVar13;
	std::shared_ptr<std::vector<java::lang::String>> swWeekdays;
	std::shared_ptr<std::vector<java::lang::String>> saWeekdays;
	std::shared_ptr<std::vector<java::lang::String>> ssWeekdays;
	std::shared_ptr<std::vector<java::lang::String>> snWeekdays;
	std::shared_ptr<std::vector<java::lang::String>> cVar16;
	std::shared_ptr<std::vector<java::lang::String>> cVar17;
	std::shared_ptr<std::vector<java::lang::String>> cVar18;
	std::shared_ptr<std::vector<java::lang::String>> cVar19;
	std::shared_ptr<std::vector<java::lang::String>> cVar20;
	std::shared_ptr<std::vector<java::lang::String>> cVar21;
	std::shared_ptr<java::util::Map> cVar22;
	std::shared_ptr<java::util::Map> cVar23;
	std::shared_ptr<java::util::Map> cVar24;
	std::shared_ptr<java::util::Map> cVar25;
	std::shared_ptr<java::util::Map> cVar26;
	std::shared_ptr<java::util::Map> cVar27;
	int i;
	auto monthPatternPath;
	std::shared_ptr<java::util::Map> monthPatternMap;
	std::shared_ptr<java::lang::String> leapMonthPattern;
	std::shared_ptr<std::vector<java::lang::String>> cVar28;
	std::shared_ptr<std::vector<java::lang::String>> cVar29;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> rb;
	auto uloc;
	std::shared_ptr<java::util::HashMap> cVar30;
	auto noTransforms;
	auto allUsages;
	int cVar31;
	int contextTransformsBundle;
	std::shared_ptr<android::icu::util::UResourceBundle> contextTransformsBundle;
	std::shared_ptr<android::icu::util::UResourceBundleIterator> ctIterator;
	std::shared_ptr<android::icu::util::UResourceBundle> contextTransformUsage;
	auto intVector;
	std::shared_ptr<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage> usage;
	auto transforms;
	bool cVar33;
	bool cVar34;
	std::shared_ptr<android::icu::text::NumberingSystem> ns;
	std::shared_ptr<java::lang::StringBuilder> cVar37;
	std::vector<std::any> tryCatchExcetionList;
	auto contextTransformsBundle;
	std::shared_ptr<java::lang::Object> calendarType;
	
	//    .param p1, "desiredLocale"    # Landroid/icu/util/ULocale;
	//    .param p2, "b"    # Landroid/icu/impl/ICUResourceBundle;
	//    .param p3, "calendarType"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3649    .end annotation
	calendarSink = std::make_shared<android::icu::text::DateFormatSymbols_S_CalendarDataSink>();
	//    .local v8, "calendarSink":Landroid/icu/text/DateFormatSymbols$CalendarDataSink;
	if ( b )     
		goto label_cond_14;
	b = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), desiredLocale);
	//    .end local p2    # "b":Landroid/icu/impl/ICUResourceBundle;
	b->checkCast("android::icu::impl::ICUResourceBundle");
	//    .restart local p2    # "b":Landroid/icu/impl/ICUResourceBundle;
label_cond_14:
label_goto_14:
	if ( !(calendarType) )  
		goto label_cond_8f;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	dataForType = b->findWithFallback(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("calendar/")))->append(calendarType)->toString());
	//    .local v12, "dataForType":Landroid/icu/impl/ICUResourceBundle;
	if ( dataForType )     
		goto label_cond_75;
	if ( std::make_shared<java::lang::String>(std::make_shared<char[]>("gregorian"))->equals(calendarType) )     
		goto label_cond_4c;
	calendarType = std::make_shared<java::lang::String>(std::make_shared<char[]>("gregorian"));
	calendarSink->visitAllResources();
	goto label_goto_14;
	// 3738    .line 1842
label_cond_4c:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::util::MissingResourceException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("The \'gregorian\' calendar type wasn\'t found for the locale: ")))->append(desiredLocale->getBaseName())->toString(), this->getClass()->getName(), std::make_shared<java::lang::String>(std::make_shared<char[]>("gregorian")));
	// throw
	throw cVar2;
	// 3782    .line 1845
label_cond_75:
	calendarSink->preEnumerate(calendarType);
	dataForType->getAllItemsWithFallback(std::make_shared<java::lang::String>(std::make_shared<char[]>("")), calendarSink);
	if ( !(calendarType->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("gregorian")))) )  
		goto label_cond_22b;
	//    .end local v12    # "dataForType":Landroid/icu/impl/ICUResourceBundle;
label_cond_8f:
	arrays = calendarSink->arrays;
	//    .local v7, "arrays":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;[Ljava/lang/String;>;"
	maps = calendarSink->maps;
	//    .local v18, "maps":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;>;"
	cVar4 = arrays->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("eras/abbreviated")));
	cVar4->checkCast("std::vector<java::lang::String>");
	this->eras = cVar4;
	cVar5 = arrays->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("eras/wide")));
	cVar5->checkCast("std::vector<java::lang::String>");
	this->eraNames = cVar5;
	cVar6 = arrays->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("eras/narrow")));
	cVar6->checkCast("std::vector<java::lang::String>");
	this->narrowEras = cVar6;
	cVar7 = arrays->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("monthNames/format/wide")));
	cVar7->checkCast("std::vector<java::lang::String>");
	this->months = cVar7;
	cVar8 = arrays->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("monthNames/format/abbreviated")));
	cVar8->checkCast("std::vector<java::lang::String>");
	this->shortMonths = cVar8;
	cVar9 = arrays->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("monthNames/format/narrow")));
	cVar9->checkCast("std::vector<java::lang::String>");
	this->narrowMonths = cVar9;
	cVar10 = arrays->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("monthNames/stand-alone/wide")));
	cVar10->checkCast("std::vector<java::lang::String>");
	this->standaloneMonths = cVar10;
	cVar11 = arrays->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("monthNames/stand-alone/abbreviated")));
	cVar11->checkCast("std::vector<java::lang::String>");
	this->standaloneShortMonths = cVar11;
	cVar12 = arrays->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("monthNames/stand-alone/narrow")));
	cVar12->checkCast("std::vector<java::lang::String>");
	this->standaloneNarrowMonths = cVar12;
	lWeekdays = arrays->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("dayNames/format/wide")));
	lWeekdays->checkCast("std::vector<java::lang::String>");
	//    .local v16, "lWeekdays":[Ljava/lang/String;
	this->weekdays = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x8);
	this->weekdays[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	java::lang::System::arraycopy(lWeekdays, 0x0, this->weekdays, 0x1, lWeekdays->size());
	aWeekdays = arrays->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("dayNames/format/abbreviated")));
	aWeekdays->checkCast("std::vector<java::lang::String>");
	//    .local v5, "aWeekdays":[Ljava/lang/String;
	this->shortWeekdays = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x8);
	this->shortWeekdays[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	java::lang::System::arraycopy(aWeekdays, 0x0, this->shortWeekdays, 0x1, aWeekdays->size());
	sWeekdays = arrays->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("dayNames/format/short")));
	sWeekdays->checkCast("std::vector<java::lang::String>");
	//    .local v26, "sWeekdays":[Ljava/lang/String;
	this->shorterWeekdays = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x8);
	this->shorterWeekdays[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	java::lang::System::arraycopy(sWeekdays, 0x0, this->shorterWeekdays, 0x1, sWeekdays->size());
	nWeekdays = arrays->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("dayNames/format/narrow")));
	nWeekdays->checkCast("std::vector<java::lang::String>");
	//    .local v21, "nWeekdays":[Ljava/lang/String;
	if ( nWeekdays )     
		goto label_cond_239;
	nWeekdays = arrays->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("dayNames/stand-alone/narrow")));
	//    .end local v21    # "nWeekdays":[Ljava/lang/String;
	nWeekdays->checkCast("std::vector<java::lang::String>");
	//    .restart local v21    # "nWeekdays":[Ljava/lang/String;
	if ( nWeekdays )     
		goto label_cond_239;
	nWeekdays = arrays->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("dayNames/format/abbreviated")));
	//    .end local v21    # "nWeekdays":[Ljava/lang/String;
	nWeekdays->checkCast("std::vector<java::lang::String>");
	//    .restart local v21    # "nWeekdays":[Ljava/lang/String;
	if ( nWeekdays )     
		goto label_cond_239;
	cVar13 = std::make_shared<java::util::MissingResourceException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Resource not found")), this->getClass()->getName(), std::make_shared<java::lang::String>(std::make_shared<char[]>("dayNames/format/abbreviated")));
	// throw
	throw cVar13;
	// 4244    .line 1854
	// 4245    .end local v5    # "aWeekdays":[Ljava/lang/String;
	// 4246    .end local v7    # "arrays":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;[Ljava/lang/String;>;"
	// 4247    .end local v16    # "lWeekdays":[Ljava/lang/String;
	// 4248    .end local v18    # "maps":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;>;"
	// 4249    .end local v21    # "nWeekdays":[Ljava/lang/String;
	// 4250    .end local v26    # "sWeekdays":[Ljava/lang/String;
	// 4251    .restart local v12    # "dataForType":Landroid/icu/impl/ICUResourceBundle;
label_cond_22b:
	calendarType = calendarSink->nextCalendarType;
	if ( calendarType )     
		goto label_cond_14;
	calendarType = std::make_shared<java::lang::String>(std::make_shared<char[]>("gregorian"));
	calendarSink->visitAllResources();
	goto label_goto_14;
	// 4268    .line 1906
	// 4269    .end local v12    # "dataForType":Landroid/icu/impl/ICUResourceBundle;
	// 4270    .restart local v5    # "aWeekdays":[Ljava/lang/String;
	// 4271    .restart local v7    # "arrays":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;[Ljava/lang/String;>;"
	// 4272    .restart local v16    # "lWeekdays":[Ljava/lang/String;
	// 4273    .restart local v18    # "maps":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;>;"
	// 4274    .restart local v21    # "nWeekdays":[Ljava/lang/String;
	// 4275    .restart local v26    # "sWeekdays":[Ljava/lang/String;
label_cond_239:
	this->narrowWeekdays = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x8);
	this->narrowWeekdays[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	java::lang::System::arraycopy(nWeekdays, 0x0, this->narrowWeekdays, 0x1, nWeekdays->size());
	0x0;
	//    .local v30, "swWeekdays":[Ljava/lang/String;
	swWeekdays = arrays->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("dayNames/stand-alone/wide")));
	//    .end local v30    # "swWeekdays":[Ljava/lang/String;
	swWeekdays->checkCast("std::vector<java::lang::String>");
	//    .local v30, "swWeekdays":[Ljava/lang/String;
	this->standaloneWeekdays = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x8);
	this->standaloneWeekdays[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	java::lang::System::arraycopy(swWeekdays, 0x0, this->standaloneWeekdays, 0x1, swWeekdays->size());
	0x0;
	//    .local v27, "saWeekdays":[Ljava/lang/String;
	saWeekdays = arrays->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("dayNames/stand-alone/abbreviated")));
	//    .end local v27    # "saWeekdays":[Ljava/lang/String;
	saWeekdays->checkCast("std::vector<java::lang::String>");
	//    .local v27, "saWeekdays":[Ljava/lang/String;
	this->standaloneShortWeekdays = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x8);
	this->standaloneShortWeekdays[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	java::lang::System::arraycopy(saWeekdays, 0x0, this->standaloneShortWeekdays, 0x1, saWeekdays->size());
	0x0;
	//    .local v29, "ssWeekdays":[Ljava/lang/String;
	ssWeekdays = arrays->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("dayNames/stand-alone/short")));
	//    .end local v29    # "ssWeekdays":[Ljava/lang/String;
	ssWeekdays->checkCast("std::vector<java::lang::String>");
	//    .local v29, "ssWeekdays":[Ljava/lang/String;
	this->standaloneShorterWeekdays = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x8);
	this->standaloneShorterWeekdays[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	java::lang::System::arraycopy(ssWeekdays, 0x0, this->standaloneShorterWeekdays, 0x1, ssWeekdays->size());
	0x0;
	//    .local v28, "snWeekdays":[Ljava/lang/String;
	snWeekdays = arrays->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("dayNames/stand-alone/narrow")));
	//    .end local v28    # "snWeekdays":[Ljava/lang/String;
	snWeekdays->checkCast("std::vector<java::lang::String>");
	//    .local v28, "snWeekdays":[Ljava/lang/String;
	this->standaloneNarrowWeekdays = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x8);
	this->standaloneNarrowWeekdays[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	java::lang::System::arraycopy(snWeekdays, 0x0, this->standaloneNarrowWeekdays, 0x1, snWeekdays->size());
	cVar16 = arrays->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("AmPmMarkers")));
	cVar16->checkCast("std::vector<java::lang::String>");
	this->ampms = cVar16;
	cVar17 = arrays->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("AmPmMarkersNarrow")));
	cVar17->checkCast("std::vector<java::lang::String>");
	this->ampmsNarrow = cVar17;
	cVar18 = arrays->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("quarters/format/wide")));
	cVar18->checkCast("std::vector<java::lang::String>");
	this->quarters = cVar18;
	cVar19 = arrays->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("quarters/format/abbreviated")));
	cVar19->checkCast("std::vector<java::lang::String>");
	this->shortQuarters = cVar19;
	cVar20 = arrays->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("quarters/stand-alone/wide")));
	cVar20->checkCast("std::vector<java::lang::String>");
	this->standaloneQuarters = cVar20;
	cVar21 = arrays->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("quarters/stand-alone/abbreviated")));
	cVar21->checkCast("std::vector<java::lang::String>");
	this->standaloneShortQuarters = cVar21;
	cVar22 = maps->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("dayPeriod/format/abbreviated")));
	cVar22->checkCast("java::util::Map");
	this->abbreviatedDayPeriods = this->loadDayPeriodStrings(cVar22);
	cVar23 = maps->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("dayPeriod/format/wide")));
	cVar23->checkCast("java::util::Map");
	this->wideDayPeriods = this->loadDayPeriodStrings(cVar23);
	cVar24 = maps->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("dayPeriod/format/narrow")));
	cVar24->checkCast("java::util::Map");
	this->narrowDayPeriods = this->loadDayPeriodStrings(cVar24);
	cVar25 = maps->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("dayPeriod/stand-alone/abbreviated")));
	cVar25->checkCast("java::util::Map");
	this->standaloneAbbreviatedDayPeriods = this->loadDayPeriodStrings(cVar25);
	cVar26 = maps->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("dayPeriod/stand-alone/wide")));
	cVar26->checkCast("java::util::Map");
	this->standaloneWideDayPeriods = this->loadDayPeriodStrings(cVar26);
	cVar27 = maps->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("dayPeriod/stand-alone/narrow")));
	cVar27->checkCast("java::util::Map");
	this->standaloneNarrowDayPeriods = this->loadDayPeriodStrings(cVar27);
	i = 0x0;
	//    .local v14, "i":I
label_goto_489:
	if ( i >= 0x7 )
		goto label_cond_4d1;
	monthPatternPath = android::icu::text::DateFormatSymbols::LEAP_MONTH_PATTERNS_PATHS[i];
	//    .local v20, "monthPatternPath":Ljava/lang/String;
	if ( !(monthPatternPath) )  
		goto label_cond_4ce;
	monthPatternMap = maps->get(monthPatternPath);
	monthPatternMap->checkCast("java::util::Map");
	//    .local v19, "monthPatternMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	if ( !(monthPatternMap) )  
		goto label_cond_4ce;
	leapMonthPattern = monthPatternMap->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("leap")));
	leapMonthPattern->checkCast("java::lang::String");
	//    .local v17, "leapMonthPattern":Ljava/lang/String;
	if ( !(leapMonthPattern) )  
		goto label_cond_4ce;
	if ( this->leapMonthPatterns )     
		goto label_cond_4c6;
	this->leapMonthPatterns = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x7);
label_cond_4c6:
	this->leapMonthPatterns[i] = leapMonthPattern;
	//    .end local v17    # "leapMonthPattern":Ljava/lang/String;
	//    .end local v19    # "monthPatternMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
label_cond_4ce:
	i = ( i + 0x1);
	goto label_goto_489;
	// 4987    .line 1966
	// 4988    .end local v20    # "monthPatternPath":Ljava/lang/String;
label_cond_4d1:
	cVar28 = arrays->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("cyclicNameSets/years/format/abbreviated")));
	cVar28->checkCast("std::vector<java::lang::String>");
	this->shortYearNames = cVar28;
	cVar29 = arrays->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("cyclicNameSets/zodiacs/format/abbreviated")));
	cVar29->checkCast("std::vector<java::lang::String>");
	this->shortZodiacNames = cVar29;
	this->requestedLocale = desiredLocale;
	rb = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), desiredLocale);
	rb->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v25, "rb":Landroid/icu/impl/ICUResourceBundle;
	this->localPatternChars = std::make_shared<java::lang::String>(std::make_shared<char[]>("GyMdkHmsSEDFwWahKzYeugAZvcLQqVUOXxrbB"));
	uloc = rb->getULocale();
	//    .local v33, "uloc":Landroid/icu/util/ULocale;
	this->setLocale(uloc, uloc);
	cVar30 = std::make_shared<java::util::HashMap>();
	this->capitalization = cVar30;
	noTransforms = std::make_shared<std::vector<bool[]>>(0x2);
	//    .local v22, "noTransforms":[Z
	noTransforms[0x0] = 0x0;
	noTransforms[0x1] = 0x0;
	allUsages = android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::values({const[class].FS-Param});
	//    .local v6, "allUsages":[Landroid/icu/text/DateFormatSymbols$CapitalizationContextUsage;
	cVar31 = 0x0;
label_goto_544:
	if ( cVar31 >= allUsages->size() )
		goto label_cond_55e;
	//    .local v34, "usage":Landroid/icu/text/DateFormatSymbols$CapitalizationContextUsage;
	this->capitalization->put(allUsages[cVar31], noTransforms);
	cVar31 = ( cVar31 + 0x1);
	goto label_goto_544;
	// 5147    .line 1989
	// 5148    .end local v34    # "usage":Landroid/icu/text/DateFormatSymbols$CapitalizationContextUsage;
label_cond_55e:
	contextTransformsBundle = 0x0;
	//    .local v10, "contextTransformsBundle":Landroid/icu/util/UResourceBundle;
	try {
	//label_try_start_55f:
	//label_try_end_569:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5cb;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_55f .. :try_end_569} :catch_5cb
	contextTransformsBundle = rb->getWithFallback(std::make_shared<java::lang::String>(std::make_shared<char[]>("contextTransforms")));
	//    .end local v10    # "contextTransformsBundle":Landroid/icu/util/UResourceBundle;
label_goto_56a:
	if ( !(contextTransformsBundle) )  
		goto label_cond_5d4;
	ctIterator = contextTransformsBundle->getIterator();
	//    .local v11, "ctIterator":Landroid/icu/util/UResourceBundleIterator;
label_cond_570:
label_goto_570:
	if ( !(ctIterator->hasNext()) )  
		goto label_cond_5d4;
	contextTransformUsage = ctIterator->next();
	//    .local v9, "contextTransformUsage":Landroid/icu/util/UResourceBundle;
	intVector = contextTransformUsage->getIntVector();
	//    .local v15, "intVector":[I
	if ( intVector->size() <  0x2 )
		goto label_cond_570;
	//    .local v35, "usageKey":Ljava/lang/String;
	usage = android::icu::text::DateFormatSymbols::contextUsageTypeMap->get(contextTransformUsage->getKey());
	usage->checkCast("android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage");
	//    .restart local v34    # "usage":Landroid/icu/text/DateFormatSymbols$CapitalizationContextUsage;
	if ( !(usage) )  
		goto label_cond_570;
	transforms = std::make_shared<std::vector<bool[]>>(0x2);
	//    .local v31, "transforms":[Z
	if ( !(intVector[0x0]) )  
		goto label_cond_5ce;
	cVar33 = 0x1;
label_goto_5ab:
	transforms[0x0] = cVar33;
	if ( !(intVector[0x1]) )  
		goto label_cond_5d1;
	cVar34 = 0x1;
label_goto_5b7:
	transforms[0x1] = cVar34;
	this->capitalization->put(usage, transforms);
	goto label_goto_570;
	// 5290    .line 1993
	// 5291    .end local v9    # "contextTransformUsage":Landroid/icu/util/UResourceBundle;
	// 5292    .end local v11    # "ctIterator":Landroid/icu/util/UResourceBundleIterator;
	// 5293    .end local v15    # "intVector":[I
	// 5294    .end local v31    # "transforms":[Z
	// 5295    .end local v34    # "usage":Landroid/icu/text/DateFormatSymbols$CapitalizationContextUsage;
	// 5296    .end local v35    # "usageKey":Ljava/lang/String;
	// 5297    .restart local v10    # "contextTransformsBundle":Landroid/icu/util/UResourceBundle;
label_catch_5cb:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v13, "e":Ljava/util/MissingResourceException;
	contextTransformsBundle = 0x0;
	goto label_goto_56a;
	// 5307    .line 2006
	// 5308    .end local v10    # "contextTransformsBundle":Landroid/icu/util/UResourceBundle;
	// 5309    .end local v13    # "e":Ljava/util/MissingResourceException;
	// 5310    .restart local v9    # "contextTransformUsage":Landroid/icu/util/UResourceBundle;
	// 5311    .restart local v11    # "ctIterator":Landroid/icu/util/UResourceBundleIterator;
	// 5312    .restart local v15    # "intVector":[I
	// 5313    .restart local v31    # "transforms":[Z
	// 5314    .restart local v34    # "usage":Landroid/icu/text/DateFormatSymbols$CapitalizationContextUsage;
	// 5315    .restart local v35    # "usageKey":Ljava/lang/String;
label_cond_5ce:
	cVar33 = 0x0;
	goto label_goto_5ab;
	// 5321    .line 2007
label_cond_5d1:
	cVar34 = 0x0;
	goto label_goto_5b7;
	// 5327    .line 2014
	// 5328    .end local v9    # "contextTransformUsage":Landroid/icu/util/UResourceBundle;
	// 5329    .end local v11    # "ctIterator":Landroid/icu/util/UResourceBundleIterator;
	// 5330    .end local v15    # "intVector":[I
	// 5331    .end local v31    # "transforms":[Z
	// 5332    .end local v34    # "usage":Landroid/icu/text/DateFormatSymbols$CapitalizationContextUsage;
	// 5333    .end local v35    # "usageKey":Ljava/lang/String;
label_cond_5d4:
	ns = android::icu::text::NumberingSystem::getInstance(desiredLocale);
	//    .local v23, "ns":Landroid/icu/text/NumberingSystem;
	if ( ns )     
		goto label_cond_60c;
	//    .local v24, "nsName":Ljava/lang/String;
label_goto_5dd:
	cVar37 = std::make_shared<java::lang::StringBuilder>();
	//    .local v32, "tsPath":Ljava/lang/String;
	try {
	//label_try_start_5fc:
	this->setTimeSeparatorString(rb->getStringWithFallback(cVar37->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("NumberElements/")))->append(nsName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("/symbols/timeSeparator")))->toString()));
	//label_try_end_60b:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_611;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_5fc .. :try_end_60b} :catch_611
label_goto_60b:
	return;
	// 5399    .line 2015
	// 5400    .end local v24    # "nsName":Ljava/lang/String;
	// 5401    .end local v32    # "tsPath":Ljava/lang/String;
label_cond_60c:
	//    .restart local v24    # "nsName":Ljava/lang/String;
	goto label_goto_5dd;
	// 5410    .line 2019
	// 5411    .restart local v32    # "tsPath":Ljava/lang/String;
label_catch_611:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v13    # "e":Ljava/util/MissingResourceException;
	this->setTimeSeparatorString(std::make_shared<java::lang::String>(std::make_shared<char[]>(":")));
	goto label_goto_60b;

}
// .method protected initializeData(Landroid/icu/util/ULocale;Ljava/lang/String;)V
void android::icu::text::DateFormatSymbols::initializeData(std::shared_ptr<android::icu::util::ULocale> desiredLocale,std::shared_ptr<java::lang::String> type)
{
	
	char cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::String> key;
	std::shared_ptr<java::lang::String> ns;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<android::icu::text::DateFormatSymbols> dfs;
	
	//    .param p1, "desiredLocale"    # Landroid/icu/util/ULocale;
	//    .param p2, "type"    # Ljava/lang/String;
	cVar0 = 0x2b;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	key = cVar1->append(desiredLocale->getBaseName())->append(cVar0)->append(type)->toString();
	//    .local v1, "key":Ljava/lang/String;
	ns = desiredLocale->getKeywordValue(std::make_shared<java::lang::String>(std::make_shared<char[]>("numbers")));
	//    .local v2, "ns":Ljava/lang/String;
	if ( !(ns) )  
		goto label_cond_3f;
	if ( ns->length() <= 0 )
		goto label_cond_3f;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
label_cond_3f:
	dfs = android::icu::text::DateFormatSymbols::DFSCACHE->getInstance(key, desiredLocale);
	dfs->checkCast("android::icu::text::DateFormatSymbols");
	//    .local v0, "dfs":Landroid/icu/text/DateFormatSymbols;
	this->initializeData(dfs);
	return;

}
// .method public setAmPmStrings([Ljava/lang/String;)V
void android::icu::text::DateFormatSymbols::setAmPmStrings(std::shared_ptr<std::vector<java::lang::String>> newAmpms)
{
	
	//    .param p1, "newAmpms"    # [Ljava/lang/String;
	this->ampms = this->duplicate(newAmpms);
	return;

}
// .method public setEraNames([Ljava/lang/String;)V
void android::icu::text::DateFormatSymbols::setEraNames(std::shared_ptr<std::vector<java::lang::String>> newEraNames)
{
	
	//    .param p1, "newEraNames"    # [Ljava/lang/String;
	this->eraNames = this->duplicate(newEraNames);
	return;

}
// .method public setEras([Ljava/lang/String;)V
void android::icu::text::DateFormatSymbols::setEras(std::shared_ptr<std::vector<java::lang::String>> newEras)
{
	
	//    .param p1, "newEras"    # [Ljava/lang/String;
	this->eras = this->duplicate(newEras);
	return;

}
// .method public setLeapMonthPattern(Ljava/lang/String;II)V
void android::icu::text::DateFormatSymbols::setLeapMonthPattern(std::shared_ptr<java::lang::String> leapMonthPattern,int context,int width)
{
	
	int leapMonthPatternIndex;
	
	//    .param p1, "leapMonthPattern"    # Ljava/lang/String;
	//    .param p2, "context"    # I
	//    .param p3, "width"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 5572    .end annotation
	if ( !(this->leapMonthPatterns) )  
		goto label_cond_e;
	leapMonthPatternIndex = -0x1;
	//    .local v0, "leapMonthPatternIndex":I
	// switch
	{
	auto item = ( context );
	if (item == 0) goto label_pswitch_f;
	if (item == 1) goto label_pswitch_19;
	if (item == 2) goto label_pswitch_23;
	}
label_goto_8:
	if ( leapMonthPatternIndex < 0 ) 
		goto label_cond_e;
	this->leapMonthPatterns[leapMonthPatternIndex] = leapMonthPattern;
	//    .end local v0    # "leapMonthPatternIndex":I
label_cond_e:
	return;
	// 5601    .line 1225
	// 5602    .restart local v0    # "leapMonthPatternIndex":I
label_pswitch_f:
	// switch
	{
	auto item = ( width );
	if (item == 0) goto label_pswitch_13;
	if (item == 1) goto label_pswitch_15;
	if (item == 2) goto label_pswitch_17;
	}
	goto label_goto_8;
	// 5608    .line 1230
label_pswitch_13:
	leapMonthPatternIndex = 0x1;
	goto label_goto_8;
	// 5615    .line 1227
label_pswitch_15:
	leapMonthPatternIndex = 0x0;
	goto label_goto_8;
	// 5622    .line 1233
label_pswitch_17:
	leapMonthPatternIndex = 0x2;
	goto label_goto_8;
	// 5629    .line 1240
label_pswitch_19:
	// switch
	{
	auto item = ( width );
	if (item == 0) goto label_pswitch_1d;
	if (item == 1) goto label_pswitch_1f;
	if (item == 2) goto label_pswitch_21;
	}
	goto label_goto_8;
	// 5635    .line 1245
label_pswitch_1d:
	leapMonthPatternIndex = 0x1;
	goto label_goto_8;
	// 5642    .line 1242
label_pswitch_1f:
	leapMonthPatternIndex = 0x3;
	goto label_goto_8;
	// 5649    .line 1248
label_pswitch_21:
	leapMonthPatternIndex = 0x5;
	goto label_goto_8;
	// 5656    .line 1255
label_pswitch_23:
	leapMonthPatternIndex = 0x6;
	goto label_goto_8;
	// 5663    .line 1223
	// 5664    nop
	// 5666    :pswitch_data_26
	// 5667    .packed-switch 0x0
	// 5668        :pswitch_f
	// 5669        :pswitch_19
	// 5670        :pswitch_23
	// 5671    .end packed-switch
	// 5673    .line 1225
	// 5674    :pswitch_data_30
	// 5675    .packed-switch 0x0
	// 5676        :pswitch_13
	// 5677        :pswitch_15
	// 5678        :pswitch_17
	// 5679    .end packed-switch
	// 5681    .line 1240
	// 5682    :pswitch_data_3a
	// 5683    .packed-switch 0x0
	// 5684        :pswitch_1d
	// 5685        :pswitch_1f
	// 5686        :pswitch_21
	// 5687    .end packed-switch

}
// .method public setLocalPatternChars(Ljava/lang/String;)V
void android::icu::text::DateFormatSymbols::setLocalPatternChars(std::shared_ptr<java::lang::String> newLocalPatternChars)
{
	
	//    .param p1, "newLocalPatternChars"    # Ljava/lang/String;
	this->localPatternChars = newLocalPatternChars;
	return;

}
// .method final setLocale(Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;)V
void android::icu::text::DateFormatSymbols::setLocale(std::shared_ptr<android::icu::util::ULocale> valid,std::shared_ptr<android::icu::util::ULocale> actual)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	
	//    .param p1, "valid"    # Landroid/icu/util/ULocale;
	//    .param p2, "actual"    # Landroid/icu/util/ULocale;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( valid )     
		goto label_cond_f;
	cVar2 = cVar0;
label_goto_5:
	if ( actual )     
		goto label_cond_11;
label_goto_7:
	if ( cVar2 == cVar0 )
		goto label_cond_13;
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar3;
label_cond_f:
	cVar2 = cVar1;
	goto label_goto_5;
label_cond_11:
	cVar0 = cVar1;
	goto label_goto_7;
	// 5741    .line 2446
label_cond_13:
	this->validLocale = valid;
	this->actualLocale = actual;
	return;

}
// .method public setMonths([Ljava/lang/String;)V
void android::icu::text::DateFormatSymbols::setMonths(std::shared_ptr<std::vector<java::lang::String>> newMonths)
{
	
	//    .param p1, "newMonths"    # [Ljava/lang/String;
	this->months = this->duplicate(newMonths);
	return;

}
// .method public setMonths([Ljava/lang/String;II)V
void android::icu::text::DateFormatSymbols::setMonths(std::shared_ptr<std::vector<java::lang::String>> newMonths,int context,int width)
{
	
	//    .param p1, "newMonths"    # [Ljava/lang/String;
	//    .param p2, "context"    # I
	//    .param p3, "width"    # I
	// switch
	{
	auto item = ( context );
	if (item == 0) goto label_pswitch_4;
	if (item == 1) goto label_pswitch_1d;
	}
label_goto_3:
	return;
	// 5782    .line 827
label_pswitch_4:
	// switch
	{
	auto item = ( width );
	if (item == 0) goto label_pswitch_8;
	if (item == 1) goto label_pswitch_f;
	if (item == 2) goto label_pswitch_16;
	}
	goto label_goto_3;
	// 5788    .line 832
label_pswitch_8:
	this->shortMonths = this->duplicate(newMonths);
	goto label_goto_3;
	// 5798    .line 829
label_pswitch_f:
	this->months = this->duplicate(newMonths);
	goto label_goto_3;
	// 5808    .line 835
label_pswitch_16:
	this->narrowMonths = this->duplicate(newMonths);
	goto label_goto_3;
	// 5818    .line 842
label_pswitch_1d:
	// switch
	{
	auto item = ( width );
	if (item == 0) goto label_pswitch_21;
	if (item == 1) goto label_pswitch_28;
	if (item == 2) goto label_pswitch_2f;
	}
	goto label_goto_3;
	// 5824    .line 847
label_pswitch_21:
	this->standaloneShortMonths = this->duplicate(newMonths);
	goto label_goto_3;
	// 5834    .line 844
label_pswitch_28:
	this->standaloneMonths = this->duplicate(newMonths);
	goto label_goto_3;
	// 5844    .line 850
label_pswitch_2f:
	this->standaloneNarrowMonths = this->duplicate(newMonths);
	goto label_goto_3;
	// 5854    .line 825
	// 5855    :pswitch_data_36
	// 5856    .packed-switch 0x0
	// 5857        :pswitch_4
	// 5858        :pswitch_1d
	// 5859    .end packed-switch
	// 5861    .line 827
	// 5862    :pswitch_data_3e
	// 5863    .packed-switch 0x0
	// 5864        :pswitch_8
	// 5865        :pswitch_f
	// 5866        :pswitch_16
	// 5867    .end packed-switch
	// 5869    .line 842
	// 5870    :pswitch_data_48
	// 5871    .packed-switch 0x0
	// 5872        :pswitch_21
	// 5873        :pswitch_28
	// 5874        :pswitch_2f
	// 5875    .end packed-switch

}
// .method public setQuarters([Ljava/lang/String;II)V
void android::icu::text::DateFormatSymbols::setQuarters(std::shared_ptr<std::vector<java::lang::String>> newQuarters,int context,int width)
{
	
	//    .param p1, "newQuarters"    # [Ljava/lang/String;
	//    .param p2, "context"    # I
	//    .param p3, "width"    # I
	// switch
	{
	auto item = ( context );
	if (item == 0) goto label_pswitch_4;
	if (item == 1) goto label_pswitch_16;
	}
label_goto_3:
label_pswitch_3:
	return;
	// 5893    .line 1066
label_pswitch_4:
	// switch
	{
	auto item = ( width );
	if (item == 0) goto label_pswitch_8;
	if (item == 1) goto label_pswitch_f;
	if (item == 2) goto label_pswitch_3;
	}
	goto label_goto_3;
	// 5899    .line 1071
label_pswitch_8:
	this->shortQuarters = this->duplicate(newQuarters);
	goto label_goto_3;
	// 5909    .line 1068
label_pswitch_f:
	this->quarters = this->duplicate(newQuarters);
	goto label_goto_3;
	// 5919    .line 1081
label_pswitch_16:
	// switch
	{
	auto item = ( width );
	if (item == 0) goto label_pswitch_1a;
	if (item == 1) goto label_pswitch_21;
	if (item == 2) goto label_pswitch_3;
	}
	goto label_goto_3;
	// 5925    .line 1086
label_pswitch_1a:
	this->standaloneShortQuarters = this->duplicate(newQuarters);
	goto label_goto_3;
	// 5935    .line 1083
label_pswitch_21:
	this->standaloneQuarters = this->duplicate(newQuarters);
	goto label_goto_3;
	// 5945    .line 1064
	// 5946    :pswitch_data_28
	// 5947    .packed-switch 0x0
	// 5948        :pswitch_4
	// 5949        :pswitch_16
	// 5950    .end packed-switch
	// 5952    .line 1066
	// 5953    :pswitch_data_30
	// 5954    .packed-switch 0x0
	// 5955        :pswitch_8
	// 5956        :pswitch_f
	// 5957        :pswitch_3
	// 5958    .end packed-switch
	// 5960    .line 1081
	// 5961    :pswitch_data_3a
	// 5962    .packed-switch 0x0
	// 5963        :pswitch_1a
	// 5964        :pswitch_21
	// 5965        :pswitch_3
	// 5966    .end packed-switch

}
// .method public setShortMonths([Ljava/lang/String;)V
void android::icu::text::DateFormatSymbols::setShortMonths(std::shared_ptr<std::vector<java::lang::String>> newShortMonths)
{
	
	//    .param p1, "newShortMonths"    # [Ljava/lang/String;
	this->shortMonths = this->duplicate(newShortMonths);
	return;

}
// .method public setShortWeekdays([Ljava/lang/String;)V
void android::icu::text::DateFormatSymbols::setShortWeekdays(std::shared_ptr<std::vector<java::lang::String>> newAbbrevWeekdays)
{
	
	//    .param p1, "newAbbrevWeekdays"    # [Ljava/lang/String;
	this->shortWeekdays = this->duplicate(newAbbrevWeekdays);
	return;

}
// .method public setTimeSeparatorString(Ljava/lang/String;)V
void android::icu::text::DateFormatSymbols::setTimeSeparatorString(std::shared_ptr<java::lang::String> newTimeSeparator)
{
	
	//    .param p1, "newTimeSeparator"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 6005    .end annotation
	this->timeSeparator = newTimeSeparator;
	return;

}
// .method public setWeekdays([Ljava/lang/String;)V
void android::icu::text::DateFormatSymbols::setWeekdays(std::shared_ptr<std::vector<java::lang::String>> newWeekdays)
{
	
	//    .param p1, "newWeekdays"    # [Ljava/lang/String;
	this->weekdays = this->duplicate(newWeekdays);
	return;

}
// .method public setWeekdays([Ljava/lang/String;II)V
void android::icu::text::DateFormatSymbols::setWeekdays(std::shared_ptr<std::vector<java::lang::String>> newWeekdays,int context,int width)
{
	
	//    .param p1, "newWeekdays"    # [Ljava/lang/String;
	//    .param p2, "context"    # I
	//    .param p3, "width"    # I
	// switch
	{
	auto item = ( context );
	if (item == 0) goto label_pswitch_4;
	if (item == 1) goto label_pswitch_24;
	}
label_goto_3:
	return;
	// 6045    .line 944
label_pswitch_4:
	// switch
	{
	auto item = ( width );
	if (item == 0) goto label_pswitch_8;
	if (item == 1) goto label_pswitch_f;
	if (item == 2) goto label_pswitch_1d;
	if (item == 3) goto label_pswitch_16;
	}
	goto label_goto_3;
	// 6051    .line 949
label_pswitch_8:
	this->shortWeekdays = this->duplicate(newWeekdays);
	goto label_goto_3;
	// 6061    .line 946
label_pswitch_f:
	this->weekdays = this->duplicate(newWeekdays);
	goto label_goto_3;
	// 6071    .line 952
label_pswitch_16:
	this->shorterWeekdays = this->duplicate(newWeekdays);
	goto label_goto_3;
	// 6081    .line 955
label_pswitch_1d:
	this->narrowWeekdays = this->duplicate(newWeekdays);
	goto label_goto_3;
	// 6091    .line 960
label_pswitch_24:
	// switch
	{
	auto item = ( width );
	if (item == 0) goto label_pswitch_28;
	if (item == 1) goto label_pswitch_2f;
	if (item == 2) goto label_pswitch_3d;
	if (item == 3) goto label_pswitch_36;
	}
	goto label_goto_3;
	// 6097    .line 965
label_pswitch_28:
	this->standaloneShortWeekdays = this->duplicate(newWeekdays);
	goto label_goto_3;
	// 6107    .line 962
label_pswitch_2f:
	this->standaloneWeekdays = this->duplicate(newWeekdays);
	goto label_goto_3;
	// 6117    .line 968
label_pswitch_36:
	this->standaloneShorterWeekdays = this->duplicate(newWeekdays);
	goto label_goto_3;
	// 6127    .line 971
label_pswitch_3d:
	this->standaloneNarrowWeekdays = this->duplicate(newWeekdays);
	goto label_goto_3;
	// 6137    .line 942
	// 6138    :pswitch_data_44
	// 6139    .packed-switch 0x0
	// 6140        :pswitch_4
	// 6141        :pswitch_24
	// 6142    .end packed-switch
	// 6144    .line 944
	// 6145    :pswitch_data_4c
	// 6146    .packed-switch 0x0
	// 6147        :pswitch_8
	// 6148        :pswitch_f
	// 6149        :pswitch_1d
	// 6150        :pswitch_16
	// 6151    .end packed-switch
	// 6153    .line 960
	// 6154    :pswitch_data_58
	// 6155    .packed-switch 0x0
	// 6156        :pswitch_28
	// 6157        :pswitch_2f
	// 6158        :pswitch_3d
	// 6159        :pswitch_36
	// 6160    .end packed-switch

}
// .method public setYearNames([Ljava/lang/String;II)V
void android::icu::text::DateFormatSymbols::setYearNames(std::shared_ptr<std::vector<java::lang::String>> yearNames,int context,int width)
{
	
	//    .param p1, "yearNames"    # [Ljava/lang/String;
	//    .param p2, "context"    # I
	//    .param p3, "width"    # I
	if ( context )     
		goto label_cond_a;
	if ( width )     
		goto label_cond_a;
	this->shortYearNames = this->duplicate(yearNames);
label_cond_a:
	return;

}
// .method public setZodiacNames([Ljava/lang/String;II)V
void android::icu::text::DateFormatSymbols::setZodiacNames(std::shared_ptr<std::vector<java::lang::String>> zodiacNames,int context,int width)
{
	
	//    .param p1, "zodiacNames"    # [Ljava/lang/String;
	//    .param p2, "context"    # I
	//    .param p3, "width"    # I
	if ( context )     
		goto label_cond_a;
	if ( width )     
		goto label_cond_a;
	this->shortZodiacNames = this->duplicate(zodiacNames);
label_cond_a:
	return;

}
// .method public setZoneStrings([[Ljava/lang/String;)V
void android::icu::text::DateFormatSymbols::setZoneStrings(std::shared_ptr<std::vector<std::vector<java::lang::String>>> newZoneStrings)
{
	
	//    .param p1, "newZoneStrings"    # [[Ljava/lang/String;
	this->zoneStrings = this->duplicate(newZoneStrings);
	return;

}


