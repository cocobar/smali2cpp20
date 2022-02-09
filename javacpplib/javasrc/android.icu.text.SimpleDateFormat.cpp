// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\SimpleDateFormat.smali
#include "java2ctype.h"
#include "android.icu.impl.DateNumberFormat.h"
#include "android.icu.impl.DayPeriodRules_S_DayPeriod.h"
#include "android.icu.impl.DayPeriodRules.h"
#include "android.icu.impl.ICUCache.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.PatternProps.h"
#include "android.icu.impl.SimpleCache.h"
#include "android.icu.impl.SimpleFormatterImpl.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.text.DateFormat_S_BooleanAttribute.h"
#include "android.icu.text.DateFormat_S_Field.h"
#include "android.icu.text.DateFormat.h"
#include "android.icu.text.DateFormatSymbols_S_CapitalizationContextUsage.h"
#include "android.icu.text.DateFormatSymbols.h"
#include "android.icu.text.DecimalFormat.h"
#include "android.icu.text.DecimalFormatSymbols.h"
#include "android.icu.text.DisplayContext_S_Type.h"
#include "android.icu.text.DisplayContext.h"
#include "android.icu.text.MessageFormat.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.text.NumberingSystem.h"
#include "android.icu.text.SimpleDateFormat_S_PatternItem.h"
#include "android.icu.text.SimpleDateFormat.h"
#include "android.icu.text.TimeZoneFormat_S_Style.h"
#include "android.icu.text.TimeZoneFormat_S_TimeType.h"
#include "android.icu.text.TimeZoneFormat.h"
#include "android.icu.text.UTF16.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.BasicTimeZone.h"
#include "android.icu.util.Calendar_S_FormatConfiguration.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.HebrewCalendar.h"
#include "android.icu.util.Output.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.TimeZoneRule.h"
#include "android.icu.util.TimeZoneTransition.h"
#include "android.icu.util.ULocale_S_Category.h"
#include "android.icu.util.ULocale_S_Type.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.ObjectOutputStream.h"
#include "java.lang.AssertionError.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"
#include "java.lang.ClassCastException.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Integer.h"
#include "java.lang.Math.h"
#include "java.lang.NoSuchFieldError.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.text.AttributedCharacterIterator_S_Attribute.h"
#include "java.text.AttributedCharacterIterator.h"
#include "java.text.AttributedString.h"
#include "java.text.FieldPosition.h"
#include "java.text.Format_S_Field.h"
#include "java.text.Format.h"
#include "java.text.ParsePosition.h"
#include "java.util.ArrayList.h"
#include "java.util.Date.h"
#include "java.util.HashMap.h"
#include "java.util.List.h"
#include "java.util.Locale.h"
#include "java.util.Map.h"
#include "java.util.MissingResourceException.h"
#include "java.util.UUID.h"

static android::icu::text::SimpleDateFormat::_android_icu_text_DisplayContextSwitchesValues = nullptr;
static android::icu::text::SimpleDateFormat::_assertionsDisabled;
static android::icu::text::SimpleDateFormat::CALENDAR_FIELD_TO_LEVEL;
static android::icu::text::SimpleDateFormat::DATE_PATTERN_TYPE;
static android::icu::text::SimpleDateFormat::DECIMAL_BUF_SIZE = 0xa;
static android::icu::text::SimpleDateFormat::DelayedHebrewMonthCheck = false;
static android::icu::text::SimpleDateFormat::FALLBACKPATTERN = std::make_shared<java::lang::String>("yy/MM/dd HH:mm");
static android::icu::text::SimpleDateFormat::HEBREW_CAL_CUR_MILLENIUM_END_YEAR = 0x1770;
static android::icu::text::SimpleDateFormat::HEBREW_CAL_CUR_MILLENIUM_START_YEAR = 0x1388;
static android::icu::text::SimpleDateFormat::ISOSpecialEra = -0x7d00;
static android::icu::text::SimpleDateFormat::NUMERIC_FORMAT_CHARS = std::make_shared<java::lang::String>("ADdFgHhKkmrSsuWwYy");
static android::icu::text::SimpleDateFormat::NUMERIC_FORMAT_CHARS2 = std::make_shared<java::lang::String>("ceLMQq");
static android::icu::text::SimpleDateFormat::PARSED_PATTERN_CACHE = nullptr;
static android::icu::text::SimpleDateFormat::PATTERN_CHAR_IS_SYNTAX;
static android::icu::text::SimpleDateFormat::PATTERN_CHAR_TO_INDEX;
static android::icu::text::SimpleDateFormat::PATTERN_CHAR_TO_LEVEL;
static android::icu::text::SimpleDateFormat::PATTERN_INDEX_TO_CALENDAR_FIELD;
static android::icu::text::SimpleDateFormat::PATTERN_INDEX_TO_DATE_FORMAT_ATTRIBUTE;
static android::icu::text::SimpleDateFormat::PATTERN_INDEX_TO_DATE_FORMAT_FIELD;
static android::icu::text::SimpleDateFormat::SUPPRESS_NEGATIVE_PREFIX = std::make_shared<java::lang::String>("\uab00");
static android::icu::text::SimpleDateFormat::cachedDefaultLocale = nullptr;
static android::icu::text::SimpleDateFormat::cachedDefaultPattern = nullptr;
static android::icu::text::SimpleDateFormat::currentSerialVersion = 0x2;
static android::icu::text::SimpleDateFormat::millisPerHour = 0x36ee80;
static android::icu::text::SimpleDateFormat::serialVersionUID = 0x4243c9da93943590L;
// .method private static synthetic -getandroid-icu-text-DisplayContextSwitchesValues()[I
int android::icu::text::SimpleDateFormat::_getandroid_icu_text_DisplayContextSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(android::icu::text::SimpleDateFormat::_android_icu_text_DisplayContextSwitchesValues) )  
		goto label_cond_7;
	return android::icu::text::SimpleDateFormat::_android_icu_text_DisplayContextSwitchesValues;
label_cond_7:
	cVar0 = std::make_shared<std::vector<int[]>>(android::icu::text::DisplayContext::values({const[class].FS-Param})->size());
	try {
	//label_try_start_e:
	cVar0[android::icu::text::DisplayContext::CAPITALIZATION_FOR_BEGINNING_OF_SENTENCE->ordinal()] = 0x1;
	//label_try_end_17:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_8c;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_e .. :try_end_17} :catch_8c
label_goto_17:
	try {
	//label_try_start_17:
	cVar0[android::icu::text::DisplayContext::CAPITALIZATION_FOR_MIDDLE_OF_SENTENCE->ordinal()] = 0x4;
	//label_try_end_20:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_8a;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_17 .. :try_end_20} :catch_8a
label_goto_20:
	try {
	//label_try_start_20:
	cVar0[android::icu::text::DisplayContext::CAPITALIZATION_FOR_STANDALONE->ordinal()] = 0x2;
	//label_try_end_29:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_88;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_20 .. :try_end_29} :catch_88
label_goto_29:
	try {
	//label_try_start_29:
	cVar0[android::icu::text::DisplayContext::CAPITALIZATION_FOR_UI_LIST_OR_MENU->ordinal()] = 0x3;
	//label_try_end_32:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_86;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_29 .. :try_end_32} :catch_86
label_goto_32:
	try {
	//label_try_start_32:
	cVar0[android::icu::text::DisplayContext::CAPITALIZATION_NONE->ordinal()] = 0x5;
	//label_try_end_3b:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_84;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_32 .. :try_end_3b} :catch_84
label_goto_3b:
	try {
	//label_try_start_3b:
	cVar0[android::icu::text::DisplayContext::DIALECT_NAMES->ordinal()] = 0x6;
	//label_try_end_44:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_82;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_3b .. :try_end_44} :catch_82
label_goto_44:
	try {
	//label_try_start_44:
	cVar0[android::icu::text::DisplayContext::LENGTH_FULL->ordinal()] = 0x7;
	//label_try_end_4d:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_80;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_44 .. :try_end_4d} :catch_80
label_goto_4d:
	try {
	//label_try_start_4d:
	cVar0[android::icu::text::DisplayContext::LENGTH_SHORT->ordinal()] = 0x8;
	//label_try_end_57:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_7e;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_4d .. :try_end_57} :catch_7e
label_goto_57:
	try {
	//label_try_start_57:
	cVar0[android::icu::text::DisplayContext::NO_SUBSTITUTE->ordinal()] = 0x9;
	//label_try_end_61:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_7c;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_57 .. :try_end_61} :catch_7c
label_goto_61:
	try {
	//label_try_start_61:
	cVar0[android::icu::text::DisplayContext::STANDARD_NAMES->ordinal()] = 0xa;
	//label_try_end_6b:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_7a;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_61 .. :try_end_6b} :catch_7a
label_goto_6b:
	try {
	//label_try_start_6b:
	cVar0[android::icu::text::DisplayContext::SUBSTITUTE->ordinal()] = 0xb;
	//label_try_end_75:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_78;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_6b .. :try_end_75} :catch_78
label_goto_75:
	android::icu::text::SimpleDateFormat::_android_icu_text_DisplayContextSwitchesValues = cVar0;
	return cVar0;
label_catch_78:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_75;
label_catch_7a:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_6b;
label_catch_7c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_61;
label_catch_7e:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_57;
label_catch_80:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_4d;
label_catch_82:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_44;
label_catch_84:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_3b;
label_catch_86:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_32;
label_catch_88:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_29;
label_catch_8a:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_20;
label_catch_8c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_17;

}
// .method static synthetic -wrap0(CI)Z
bool android::icu::text::SimpleDateFormat::_wrap0(char formatChar,int count)
{
	
	//    .param p0, "formatChar"    # C
	//    .param p1, "count"    # I
	return android::icu::text::SimpleDateFormat::isNumeric(formatChar, count);

}
// .method static constructor <clinit>()V
void android::icu::text::SimpleDateFormat::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	bool cVar3;
	int cVar4;
	std::shared<std::vector<int[]>> cVar5;
	std::shared<std::vector<int[]>> cVar6;
	std::shared<std::vector<bool[]>> cVar7;
	std::shared<std::vector<int[]>> cVar8;
	std::shared<std::vector<int[]>> cVar9;
	std::shared<std::vector<int[]>> cVar10;
	std::shared<std::vector<std::vector<android::icu::text::DateFormat_S_Field>>> cVar11;
	std::shared_ptr<android::icu::impl::SimpleCache> cVar12;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar13;
	
	cVar0 = 0x26;
	cVar1 = 0x25;
	cVar2 = 0x18;
	cVar3 = 0x0;
	cVar4 = 0x80;
	android::icu::text::SimpleDateFormat::_assertionsDisabled = ( android::icu::text::SimpleDateFormat()->desiredAssertionStatus() ^ 0x1);
	android::icu::text::SimpleDateFormat::DelayedHebrewMonthCheck = cVar3;
	cVar5 = std::make_shared<std::vector<int[]>>(cVar2);
	?;
	android::icu::text::SimpleDateFormat::CALENDAR_FIELD_TO_LEVEL = cVar5;
	cVar6 = std::make_shared<std::vector<int[]>>(cVar4);
	?;
	android::icu::text::SimpleDateFormat::PATTERN_CHAR_TO_LEVEL = cVar6;
	cVar7 = std::make_shared<std::vector<bool[]>>(cVar4);
	?;
	android::icu::text::SimpleDateFormat::PATTERN_CHAR_IS_SYNTAX = cVar7;
	android::icu::text::SimpleDateFormat::cachedDefaultLocale = 0x0;
	android::icu::text::SimpleDateFormat::cachedDefaultPattern = 0x0;
	cVar8 = std::make_shared<std::vector<int[]>>(cVar4);
	?;
	android::icu::text::SimpleDateFormat::PATTERN_CHAR_TO_INDEX = cVar8;
	cVar9 = std::make_shared<std::vector<int[]>>(cVar1);
	?;
	android::icu::text::SimpleDateFormat::PATTERN_INDEX_TO_CALENDAR_FIELD = cVar9;
	cVar10 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	android::icu::text::SimpleDateFormat::PATTERN_INDEX_TO_DATE_FORMAT_FIELD = cVar10;
	cVar11 = std::make_shared<std::vector<std::vector<android::icu::text::DateFormat_S_Field>>>(cVar0);
	cVar11[cVar3] = android::icu::text::DateFormat_S_Field::ERA;
	cVar11[0x1] = android::icu::text::DateFormat_S_Field::YEAR;
	cVar11[0x2] = android::icu::text::DateFormat_S_Field::MONTH;
	cVar11[0x3] = android::icu::text::DateFormat_S_Field::DAY_OF_MONTH;
	cVar11[0x4] = android::icu::text::DateFormat_S_Field::HOUR_OF_DAY1;
	cVar11[0x5] = android::icu::text::DateFormat_S_Field::HOUR_OF_DAY0;
	cVar11[0x6] = android::icu::text::DateFormat_S_Field::MINUTE;
	cVar11[0x7] = android::icu::text::DateFormat_S_Field::SECOND;
	cVar11[0x8] = android::icu::text::DateFormat_S_Field::MILLISECOND;
	cVar11[0x9] = android::icu::text::DateFormat_S_Field::DAY_OF_WEEK;
	cVar11[0xa] = android::icu::text::DateFormat_S_Field::DAY_OF_YEAR;
	cVar11[0xb] = android::icu::text::DateFormat_S_Field::DAY_OF_WEEK_IN_MONTH;
	cVar11[0xc] = android::icu::text::DateFormat_S_Field::WEEK_OF_YEAR;
	cVar11[0xd] = android::icu::text::DateFormat_S_Field::WEEK_OF_MONTH;
	cVar11[0xe] = android::icu::text::DateFormat_S_Field::AM_PM;
	cVar11[0xf] = android::icu::text::DateFormat_S_Field::HOUR1;
	cVar11[0x10] = android::icu::text::DateFormat_S_Field::HOUR0;
	cVar11[0x11] = android::icu::text::DateFormat_S_Field::TIME_ZONE;
	cVar11[0x12] = android::icu::text::DateFormat_S_Field::YEAR_WOY;
	cVar11[0x13] = android::icu::text::DateFormat_S_Field::DOW_LOCAL;
	cVar11[0x14] = android::icu::text::DateFormat_S_Field::EXTENDED_YEAR;
	cVar11[0x15] = android::icu::text::DateFormat_S_Field::JULIAN_DAY;
	cVar11[0x16] = android::icu::text::DateFormat_S_Field::MILLISECONDS_IN_DAY;
	cVar11[0x17] = android::icu::text::DateFormat_S_Field::TIME_ZONE;
	cVar11[cVar2] = android::icu::text::DateFormat_S_Field::TIME_ZONE;
	cVar11[0x19] = android::icu::text::DateFormat_S_Field::DAY_OF_WEEK;
	cVar11[0x1a] = android::icu::text::DateFormat_S_Field::MONTH;
	cVar11[0x1b] = android::icu::text::DateFormat_S_Field::QUARTER;
	cVar11[0x1c] = android::icu::text::DateFormat_S_Field::QUARTER;
	cVar11[0x1d] = android::icu::text::DateFormat_S_Field::TIME_ZONE;
	cVar11[0x1e] = android::icu::text::DateFormat_S_Field::YEAR;
	cVar11[0x1f] = android::icu::text::DateFormat_S_Field::TIME_ZONE;
	cVar11[0x20] = android::icu::text::DateFormat_S_Field::TIME_ZONE;
	cVar11[0x21] = android::icu::text::DateFormat_S_Field::TIME_ZONE;
	cVar11[0x22] = android::icu::text::DateFormat_S_Field::RELATED_YEAR;
	cVar11[0x23] = android::icu::text::DateFormat_S_Field::AM_PM_MIDNIGHT_NOON;
	cVar11[0x24] = android::icu::text::DateFormat_S_Field::FLEXIBLE_DAY_PERIOD;
	cVar11[cVar1] = android::icu::text::DateFormat_S_Field::TIME_SEPARATOR;
	android::icu::text::SimpleDateFormat::PATTERN_INDEX_TO_DATE_FORMAT_ATTRIBUTE = cVar11;
	cVar12 = std::make_shared<android::icu::impl::SimpleCache>();
	android::icu::text::SimpleDateFormat::PARSED_PATTERN_CACHE = cVar12;
	cVar13 = std::make_shared<android::icu::text::UnicodeSet>(std::make_shared<java::lang::String>(std::make_shared<char[]>("[GyYuUQqMLlwWd]")));
	android::icu::text::SimpleDateFormat::DATE_PATTERN_TYPE = cVar13->freeze();
	return;
	// 741    .line 745
	// 742    :array_136
	// 743    .array-data 4
	// 744        0x0
	// 745        0xa
	// 746        0x14
	// 747        0x14
	// 748        0x1e
	// 749        0x1e
	// 750        0x14
	// 751        0x1e
	// 752        0x1e
	// 753        0x28
	// 754        0x32
	// 755        0x32
	// 756        0x3c
	// 757        0x46
	// 758        0x50
	// 759        0x0
	// 760        0x0
	// 761        0xa
	// 762        0x1e
	// 763        0xa
	// 764        0x0
	// 765        0x28
	// 766        0x0
	// 767        0x0
	// 768    .end array-data
	// 770    .line 764
	// 771    :array_16a
	// 772    .array-data 4
	// 773        -0x1
	// 774        -0x1
	// 775        -0x1
	// 776        -0x1
	// 777        -0x1
	// 778        -0x1
	// 779        -0x1
	// 780        -0x1
	// 781        -0x1
	// 782        -0x1
	// 783        -0x1
	// 784        -0x1
	// 785        -0x1
	// 786        -0x1
	// 787        -0x1
	// 788        -0x1
	// 789        -0x1
	// 790        -0x1
	// 791        -0x1
	// 792        -0x1
	// 793        -0x1
	// 794        -0x1
	// 795        -0x1
	// 796        -0x1
	// 797        -0x1
	// 798        -0x1
	// 799        -0x1
	// 800        -0x1
	// 801        -0x1
	// 802        -0x1
	// 803        -0x1
	// 804        -0x1
	// 805        -0x1
	// 806        -0x1
	// 807        -0x1
	// 808        -0x1
	// 809        -0x1
	// 810        -0x1
	// 811        -0x1
	// 812        -0x1
	// 813        -0x1
	// 814        -0x1
	// 815        -0x1
	// 816        -0x1
	// 817        -0x1
	// 818        -0x1
	// 819        -0x1
	// 820        -0x1
	// 821        -0x1
	// 822        -0x1
	// 823        -0x1
	// 824        -0x1
	// 825        -0x1
	// 826        -0x1
	// 827        -0x1
	// 828        -0x1
	// 829        -0x1
	// 830        -0x1
	// 831        -0x1
	// 832        -0x1
	// 833        -0x1
	// 834        -0x1
	// 835        -0x1
	// 836        -0x1
	// 837        -0x1
	// 838        0x28
	// 839        -0x1
	// 840        -0x1
	// 841        0x14
	// 842        0x1e
	// 843        0x1e
	// 844        0x0
	// 845        0x32
	// 846        -0x1
	// 847        -0x1
	// 848        0x32
	// 849        0x14
	// 850        0x14
	// 851        -0x1
	// 852        0x0
	// 853        -0x1
	// 854        0x14
	// 855        -0x1
	// 856        0x50
	// 857        -0x1
	// 858        0xa
	// 859        0x0
	// 860        0x1e
	// 861        0x0
	// 862        0xa
	// 863        0x0
	// 864        -0x1
	// 865        -0x1
	// 866        -0x1
	// 867        -0x1
	// 868        -0x1
	// 869        -0x1
	// 870        0x28
	// 871        -0x1
	// 872        0x1e
	// 873        0x1e
	// 874        0x1e
	// 875        -0x1
	// 876        0x0
	// 877        0x32
	// 878        -0x1
	// 879        -0x1
	// 880        0x32
	// 881        -0x1
	// 882        0x3c
	// 883        -0x1
	// 884        -0x1
	// 885        -0x1
	// 886        0x14
	// 887        0xa
	// 888        0x46
	// 889        -0x1
	// 890        0xa
	// 891        0x0
	// 892        0x14
	// 893        0x0
	// 894        0xa
	// 895        0x0
	// 896        -0x1
	// 897        -0x1
	// 898        -0x1
	// 899        -0x1
	// 900        -0x1
	// 901    .end array-data
	// 903    .line 790
	// 904    :array_26e
	// 905    .array-data 1
	// 906        0x0t
	// 907        0x0t
	// 908        0x0t
	// 909        0x0t
	// 910        0x0t
	// 911        0x0t
	// 912        0x0t
	// 913        0x0t
	// 914        0x0t
	// 915        0x0t
	// 916        0x0t
	// 917        0x0t
	// 918        0x0t
	// 919        0x0t
	// 920        0x0t
	// 921        0x0t
	// 922        0x0t
	// 923        0x0t
	// 924        0x0t
	// 925        0x0t
	// 926        0x0t
	// 927        0x0t
	// 928        0x0t
	// 929        0x0t
	// 930        0x0t
	// 931        0x0t
	// 932        0x0t
	// 933        0x0t
	// 934        0x0t
	// 935        0x0t
	// 936        0x0t
	// 937        0x0t
	// 938        0x0t
	// 939        0x0t
	// 940        0x0t
	// 941        0x0t
	// 942        0x0t
	// 943        0x0t
	// 944        0x0t
	// 945        0x0t
	// 946        0x0t
	// 947        0x0t
	// 948        0x0t
	// 949        0x0t
	// 950        0x0t
	// 951        0x0t
	// 952        0x0t
	// 953        0x0t
	// 954        0x0t
	// 955        0x0t
	// 956        0x0t
	// 957        0x0t
	// 958        0x0t
	// 959        0x0t
	// 960        0x0t
	// 961        0x0t
	// 962        0x0t
	// 963        0x0t
	// 964        0x0t
	// 965        0x0t
	// 966        0x0t
	// 967        0x0t
	// 968        0x0t
	// 969        0x0t
	// 970        0x0t
	// 971        0x1t
	// 972        0x1t
	// 973        0x1t
	// 974        0x1t
	// 975        0x1t
	// 976        0x1t
	// 977        0x1t
	// 978        0x1t
	// 979        0x1t
	// 980        0x1t
	// 981        0x1t
	// 982        0x1t
	// 983        0x1t
	// 984        0x1t
	// 985        0x1t
	// 986        0x1t
	// 987        0x1t
	// 988        0x1t
	// 989        0x1t
	// 990        0x1t
	// 991        0x1t
	// 992        0x1t
	// 993        0x1t
	// 994        0x1t
	// 995        0x1t
	// 996        0x1t
	// 997        0x0t
	// 998        0x0t
	// 999        0x0t
	// 1000        0x0t
	// 1001        0x0t
	// 1002        0x0t
	// 1003        0x1t
	// 1004        0x1t
	// 1005        0x1t
	// 1006        0x1t
	// 1007        0x1t
	// 1008        0x1t
	// 1009        0x1t
	// 1010        0x1t
	// 1011        0x1t
	// 1012        0x1t
	// 1013        0x1t
	// 1014        0x1t
	// 1015        0x1t
	// 1016        0x1t
	// 1017        0x1t
	// 1018        0x1t
	// 1019        0x1t
	// 1020        0x1t
	// 1021        0x1t
	// 1022        0x1t
	// 1023        0x1t
	// 1024        0x1t
	// 1025        0x1t
	// 1026        0x1t
	// 1027        0x1t
	// 1028        0x1t
	// 1029        0x0t
	// 1030        0x0t
	// 1031        0x0t
	// 1032        0x0t
	// 1033        0x0t
	// 1034    .end array-data
	// 1036    .line 1383
	// 1037    :array_2b2
	// 1038    .array-data 4
	// 1039        -0x1
	// 1040        -0x1
	// 1041        -0x1
	// 1042        -0x1
	// 1043        -0x1
	// 1044        -0x1
	// 1045        -0x1
	// 1046        -0x1
	// 1047        -0x1
	// 1048        -0x1
	// 1049        -0x1
	// 1050        -0x1
	// 1051        -0x1
	// 1052        -0x1
	// 1053        -0x1
	// 1054        -0x1
	// 1055        -0x1
	// 1056        -0x1
	// 1057        -0x1
	// 1058        -0x1
	// 1059        -0x1
	// 1060        -0x1
	// 1061        -0x1
	// 1062        -0x1
	// 1063        -0x1
	// 1064        -0x1
	// 1065        -0x1
	// 1066        -0x1
	// 1067        -0x1
	// 1068        -0x1
	// 1069        -0x1
	// 1070        -0x1
	// 1071        -0x1
	// 1072        -0x1
	// 1073        -0x1
	// 1074        -0x1
	// 1075        -0x1
	// 1076        -0x1
	// 1077        -0x1
	// 1078        -0x1
	// 1079        -0x1
	// 1080        -0x1
	// 1081        -0x1
	// 1082        -0x1
	// 1083        -0x1
	// 1084        -0x1
	// 1085        -0x1
	// 1086        -0x1
	// 1087        -0x1
	// 1088        -0x1
	// 1089        -0x1
	// 1090        -0x1
	// 1091        -0x1
	// 1092        -0x1
	// 1093        -0x1
	// 1094        -0x1
	// 1095        -0x1
	// 1096        -0x1
	// 1097        -0x1
	// 1098        -0x1
	// 1099        -0x1
	// 1100        -0x1
	// 1101        -0x1
	// 1102        -0x1
	// 1103        -0x1
	// 1104        0x16
	// 1105        0x24
	// 1106        -0x1
	// 1107        0xa
	// 1108        0x9
	// 1109        0xb
	// 1110        0x0
	// 1111        0x5
	// 1112        -0x1
	// 1113        -0x1
	// 1114        0x10
	// 1115        0x1a
	// 1116        0x2
	// 1117        -0x1
	// 1118        0x1f
	// 1119        -0x1
	// 1120        0x1b
	// 1121        -0x1
	// 1122        0x8
	// 1123        -0x1
	// 1124        0x1e
	// 1125        0x1d
	// 1126        0xd
	// 1127        0x20
	// 1128        0x12
	// 1129        0x17
	// 1130        -0x1
	// 1131        -0x1
	// 1132        -0x1
	// 1133        -0x1
	// 1134        -0x1
	// 1135        -0x1
	// 1136        0xe
	// 1137        0x23
	// 1138        0x19
	// 1139        0x3
	// 1140        0x13
	// 1141        -0x1
	// 1142        0x15
	// 1143        0xf
	// 1144        -0x1
	// 1145        -0x1
	// 1146        0x4
	// 1147        -0x1
	// 1148        0x6
	// 1149        -0x1
	// 1150        -0x1
	// 1151        -0x1
	// 1152        0x1c
	// 1153        0x22
	// 1154        0x7
	// 1155        -0x1
	// 1156        0x14
	// 1157        0x18
	// 1158        0xc
	// 1159        0x21
	// 1160        0x1
	// 1161        0x11
	// 1162        -0x1
	// 1163        -0x1
	// 1164        -0x1
	// 1165        -0x1
	// 1166        -0x1
	// 1167    .end array-data
	// 1169    .line 1407
	// 1170    :array_3b6
	// 1171    .array-data 4
	// 1172        0x0
	// 1173        0x1
	// 1174        0x2
	// 1175        0x5
	// 1176        0xb
	// 1177        0xb
	// 1178        0xc
	// 1179        0xd
	// 1180        0xe
	// 1181        0x7
	// 1182        0x6
	// 1183        0x8
	// 1184        0x3
	// 1185        0x4
	// 1186        0x9
	// 1187        0xa
	// 1188        0xa
	// 1189        0xf
	// 1190        0x11
	// 1191        0x12
	// 1192        0x13
	// 1193        0x14
	// 1194        0x15
	// 1195        0xf
	// 1196        0xf
	// 1197        0x12
	// 1198        0x2
	// 1199        0x2
	// 1200        0x2
	// 1201        0xf
	// 1202        0x1
	// 1203        0xf
	// 1204        0xf
	// 1205        0xf
	// 1206        0x13
	// 1207        -0x1
	// 1208        -0x2
	// 1209    .end array-data
	// 1211    .line 1430
	// 1212    :array_404
	// 1213    .array-data 4
	// 1214        0x0
	// 1215        0x1
	// 1216        0x2
	// 1217        0x3
	// 1218        0x4
	// 1219        0x5
	// 1220        0x6
	// 1221        0x7
	// 1222        0x8
	// 1223        0x9
	// 1224        0xa
	// 1225        0xb
	// 1226        0xc
	// 1227        0xd
	// 1228        0xe
	// 1229        0xf
	// 1230        0x10
	// 1231        0x11
	// 1232        0x12
	// 1233        0x13
	// 1234        0x14
	// 1235        0x15
	// 1236        0x16
	// 1237        0x17
	// 1238        0x18
	// 1239        0x19
	// 1240        0x1a
	// 1241        0x1b
	// 1242        0x1c
	// 1243        0x1d
	// 1244        0x1e
	// 1245        0x1f
	// 1246        0x20
	// 1247        0x21
	// 1248        0x22
	// 1249        0x23
	// 1250        0x24
	// 1251        0x25
	// 1252    .end array-data

}
// .method public constructor <init>()V
android::icu::text::SimpleDateFormat::SimpleDateFormat()
{
	
	std::shared_ptr<android::icu::text::DateFormatSymbols> cVar0;
	
	cVar0 = 0x0;
	android::icu::text::SimpleDateFormat::(android::icu::text::SimpleDateFormat::getDefaultPattern({const[class].FS-Param}), cVar0, cVar0, cVar0, cVar0, 0x1, cVar0);
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
android::icu::text::SimpleDateFormat::SimpleDateFormat(std::shared_ptr<java::lang::String> pattern)
{
	
	std::shared_ptr<android::icu::text::DateFormatSymbols> cVar0;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	cVar0 = 0x0;
	android::icu::text::SimpleDateFormat::(pattern, cVar0, cVar0, cVar0, cVar0, 0x1, cVar0);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Landroid/icu/text/DateFormatSymbols;)V
android::icu::text::SimpleDateFormat::SimpleDateFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<android::icu::text::DateFormatSymbols> formatData)
{
	
	std::shared_ptr<android::icu::util::Calendar> cVar0;
	std::shared_ptr<android::icu::text::DateFormatSymbols> cVar1;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "formatData"    # Landroid/icu/text/DateFormatSymbols;
	cVar0 = 0x0;
	cVar1 = formatData->clone();
	cVar1->checkCast("android::icu::text::DateFormatSymbols");
	android::icu::text::SimpleDateFormat::(pattern, cVar1, cVar0, cVar0, cVar0, 0x1, cVar0);
	return;

}
// .method private constructor <init>(Ljava/lang/String;Landroid/icu/text/DateFormatSymbols;Landroid/icu/util/Calendar;Landroid/icu/text/NumberFormat;Landroid/icu/util/ULocale;ZLjava/lang/String;)V
android::icu::text::SimpleDateFormat::SimpleDateFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<android::icu::text::DateFormatSymbols> formatData,std::shared_ptr<android::icu::util::Calendar> calendar,std::shared_ptr<android::icu::text::NumberFormat> numberFormat,std::shared_ptr<android::icu::util::ULocale> locale,bool useFastFormat,std::shared_ptr<java::lang::String> override)
{
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "formatData"    # Landroid/icu/text/DateFormatSymbols;
	//    .param p3, "calendar"    # Landroid/icu/util/Calendar;
	//    .param p4, "numberFormat"    # Landroid/icu/text/NumberFormat;
	//    .param p5, "locale"    # Landroid/icu/util/ULocale;
	//    .param p6, "useFastFormat"    # Z
	//    .param p7, "override"    # Ljava/lang/String;
	// 1357    invoke-direct {p0}, Landroid/icu/text/DateFormat;-><init>()V
	this->serialVersionOnStream = 0x2;
	this->capitalizationBrkIter = 0x0;
	this->pattern = pattern;
	this->formatData = formatData;
	this->calendar = calendar;
	this->numberFormat = numberFormat;
	this->locale = locale;
	this->useFastFormat = useFastFormat;
	this->override = override;
	this->initialize();
	return;

}
// .method constructor <init>(Ljava/lang/String;Landroid/icu/text/DateFormatSymbols;Landroid/icu/util/Calendar;Landroid/icu/util/ULocale;ZLjava/lang/String;)V
android::icu::text::SimpleDateFormat::SimpleDateFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<android::icu::text::DateFormatSymbols> formatData,std::shared_ptr<android::icu::util::Calendar> calendar,std::shared_ptr<android::icu::util::ULocale> locale,bool useFastFormat,std::shared_ptr<java::lang::String> override)
{
	
	std::shared_ptr<android::icu::text::DateFormatSymbols> cVar0;
	std::shared_ptr<android::icu::util::Calendar> cVar1;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "formatData"    # Landroid/icu/text/DateFormatSymbols;
	//    .param p3, "calendar"    # Landroid/icu/util/Calendar;
	//    .param p4, "locale"    # Landroid/icu/util/ULocale;
	//    .param p5, "useFastFormat"    # Z
	//    .param p6, "override"    # Ljava/lang/String;
	cVar0 = formatData->clone();
	cVar0->checkCast("android::icu::text::DateFormatSymbols");
	cVar1 = calendar->clone();
	cVar1->checkCast("android::icu::util::Calendar");
	android::icu::text::SimpleDateFormat::(pattern, cVar0, cVar1, 0x0, locale, useFastFormat, override);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Landroid/icu/text/DateFormatSymbols;Landroid/icu/util/ULocale;)V
android::icu::text::SimpleDateFormat::SimpleDateFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<android::icu::text::DateFormatSymbols> formatData,std::shared_ptr<android::icu::util::ULocale> loc)
{
	
	std::shared_ptr<android::icu::util::Calendar> cVar0;
	std::shared_ptr<android::icu::text::DateFormatSymbols> cVar1;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "formatData"    # Landroid/icu/text/DateFormatSymbols;
	//    .param p3, "loc"    # Landroid/icu/util/ULocale;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1444    .end annotation
	cVar0 = 0x0;
	cVar1 = formatData->clone();
	cVar1->checkCast("android::icu::text::DateFormatSymbols");
	android::icu::text::SimpleDateFormat::(pattern, cVar1, cVar0, cVar0, loc, 0x1, cVar0);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Landroid/icu/util/ULocale;)V
android::icu::text::SimpleDateFormat::SimpleDateFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<android::icu::util::ULocale> loc)
{
	
	std::shared_ptr<android::icu::text::DateFormatSymbols> cVar0;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "loc"    # Landroid/icu/util/ULocale;
	cVar0 = 0x0;
	android::icu::text::SimpleDateFormat::(pattern, cVar0, cVar0, cVar0, loc, 0x1, cVar0);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Landroid/icu/util/ULocale;)V
android::icu::text::SimpleDateFormat::SimpleDateFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::lang::String> override,std::shared_ptr<android::icu::util::ULocale> loc)
{
	
	std::shared_ptr<android::icu::text::DateFormatSymbols> cVar0;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "override"    # Ljava/lang/String;
	//    .param p3, "loc"    # Landroid/icu/util/ULocale;
	cVar0 = 0x0;
	android::icu::text::SimpleDateFormat::(pattern, cVar0, cVar0, cVar0, loc, 0x0, override);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/util/Locale;)V
android::icu::text::SimpleDateFormat::SimpleDateFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::util::Locale> loc)
{
	
	std::shared_ptr<android::icu::text::DateFormatSymbols> cVar0;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "loc"    # Ljava/util/Locale;
	cVar0 = 0x0;
	android::icu::text::SimpleDateFormat::(pattern, cVar0, cVar0, cVar0, android::icu::util::ULocale::forLocale(loc), 0x1, cVar0);
	return;

}
// .method private allowNumericFallback(I)Z
bool android::icu::text::SimpleDateFormat::allowNumericFallback(int patternCharIndex)
{
	
	//    .param p1, "patternCharIndex"    # I
	if ( patternCharIndex == 0x1a )
		goto label_cond_8;
	if ( patternCharIndex != 0x13 )
		goto label_cond_a;
label_cond_8:
	return 0x1;
	// 1585    .line 3707
label_cond_a:
	if ( patternCharIndex == 0x19 )
		goto label_cond_8;
	if ( patternCharIndex == 0x1e )
		goto label_cond_8;
	if ( patternCharIndex == 0x1b )
		goto label_cond_8;
	if ( patternCharIndex == 0x1c )
		goto label_cond_8;
	return 0x0;

}
// .method private diffCalFieldValue(Landroid/icu/util/Calendar;Landroid/icu/util/Calendar;[Ljava/lang/Object;I)Z
bool android::icu::text::SimpleDateFormat::diffCalFieldValue(std::shared_ptr<android::icu::util::Calendar> fromCalendar,std::shared_ptr<android::icu::util::Calendar> toCalendar,std::shared_ptr<std::vector<java::lang::Object>> items,int i)
{
	
	bool cVar0;
	std::shared_ptr<android::icu::text::SimpleDateFormat_S_PatternItem> item;
	char ch;
	int patternCharIndex;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	int field;
	
	//    .param p1, "fromCalendar"    # Landroid/icu/util/Calendar;
	//    .param p2, "toCalendar"    # Landroid/icu/util/Calendar;
	//    .param p3, "items"    # [Ljava/lang/Object;
	//    .param p4, "i"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1619        value = {
	// 1620            Ljava/lang/IllegalArgumentException;
	// 1621        }
	// 1622    .end annotation
	cVar0 = 0x0;
	if ( !(items[i]->instanceOf("java::lang::String")) )  
		goto label_cond_8;
	return cVar0;
	// 1637    .line 4306
label_cond_8:
	item = items[i];
	item->checkCast("android::icu::text::SimpleDateFormat_S_PatternItem");
	//    .local v2, "item":Landroid/icu/text/SimpleDateFormat$PatternItem;
	ch = item->type;
	//    .local v0, "ch":C
	patternCharIndex = android::icu::text::SimpleDateFormat::getIndexFromChar(ch);
	//    .local v3, "patternCharIndex":I
	if ( patternCharIndex != -0x1 )
		goto label_cond_42;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal pattern character \'")))->append(ch)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\' in \")))->append(this->pattern)->append(0x22)->toString());
	// throw
	throw cVar1;
	// 1708    .line 4315
label_cond_42:
	field = android::icu::text::SimpleDateFormat::PATTERN_INDEX_TO_CALENDAR_FIELD[patternCharIndex];
	//    .local v1, "field":I
	if ( field < 0 ) 
		goto label_cond_54;
	//    .local v4, "value":I
	//    .local v5, "value_2":I
	if ( fromCalendar->get(field) == toCalendar->get(field) )
		goto label_cond_54;
	return 0x1;
	// 1738    .line 4323
	// 1739    .end local v4    # "value":I
	// 1740    .end local v5    # "value_2":I
label_cond_54:
	return cVar0;

}
// .method private fastZeroPaddingNumber(Ljava/lang/StringBuffer;III)V
void android::icu::text::SimpleDateFormat::fastZeroPaddingNumber(std::shared_ptr<java::lang::StringBuffer> buf,int value,int minDigits,int maxDigits)
{
	
	int cVar0;
	int limit;
	int index;
	int value;
	int padding;
	
	//    .param p1, "buf"    # Ljava/lang/StringBuffer;
	//    .param p2, "value"    # I
	//    .param p3, "minDigits"    # I
	//    .param p4, "maxDigits"    # I
	cVar0 = 0x0;
	if ( this->decimalBuf->size() >= maxDigits )
		goto label_cond_30;
	limit = this->decimalBuf->size();
	//    .local v1, "limit":I
label_goto_9:
	index = ( limit + -0x1);
	//    .local v0, "index":I
label_goto_b:
	this->decimalBuf[index] = this->decDigits[( value % 0xa)];
	value = ( value / 0xa);
	if ( !(index) )  
		goto label_cond_1b;
	if ( value )     
		goto label_cond_32;
label_cond_1b:
	padding = (minDigits - (limit - index));
	//    .local v2, "padding":I
label_goto_1f:
	if ( padding <= 0 )
		goto label_cond_35;
	if ( index <= 0 )
		goto label_cond_35;
	index = ( index + -0x1);
	this->decimalBuf[index] = this->decDigits[cVar0];
	padding = ( padding + -0x1);
	goto label_goto_1f;
	// 1821    .line 2260
	// 1822    .end local v0    # "index":I
	// 1823    .end local v1    # "limit":I
	// 1824    .end local v2    # "padding":I
label_cond_30:
	limit = maxDigits;
	//    .restart local v1    # "limit":I
	goto label_goto_9;
	// 1831    .line 2268
	// 1832    .restart local v0    # "index":I
label_cond_32:
	index = ( index + -0x1);
	goto label_goto_b;
	// 1838    .line 2275
	// 1839    .restart local v2    # "padding":I
label_cond_35:
label_goto_35:
	if ( padding <= 0 )
		goto label_cond_41;
	buf->append(this->decDigits[cVar0]);
	padding = ( padding + -0x1);
	goto label_goto_35;
	// 1856    .line 2281
label_cond_41:
	buf->append(this->decimalBuf, index, (limit - index));
	return;

}
// .method private format(Landroid/icu/util/Calendar;Landroid/icu/text/DisplayContext;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;Ljava/util/List;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::SimpleDateFormat::format(std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<android::icu::text::DisplayContext> capitalizationContext,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos,std::shared_ptr<java::util::List<java::text::FieldPosition>> attributes)
{
	
	auto items;
	int i;
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<android::icu::text::SimpleDateFormat_S_PatternItem> item;
	int start;
	int end;
	std::shared_ptr<java::text::FieldPosition> fp;
	
	//    .param p1, "cal"    # Landroid/icu/util/Calendar;
	//    .param p2, "capitalizationContext"    # Landroid/icu/text/DisplayContext;
	//    .param p3, "toAppendTo"    # Ljava/lang/StringBuffer;
	//    .param p4, "pos"    # Ljava/text/FieldPosition;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1875        value = {
	// 1876            "(",
	// 1877            "Landroid/icu/util/Calendar;",
	// 1878            "Landroid/icu/text/DisplayContext;",
	// 1879            "Ljava/lang/StringBuffer;",
	// 1880            "Ljava/text/FieldPosition;",
	// 1881            "Ljava/util/List",
	// 1882            "<",
	// 1883            "Ljava/text/FieldPosition;",
	// 1884            ">;)",
	// 1885            "Ljava/lang/StringBuffer;"
	// 1886        }
	// 1887    .end annotation
	//    .local p5, "attributes":Ljava/util/List;, "Ljava/util/List<Ljava/text/FieldPosition;>;"
	pos->setBeginIndex(0x0);
	pos->setEndIndex(0x0);
	items = this->getPatternItems();
	//    .local v14, "items":[Ljava/lang/Object;
	i = 0x0;
	//    .local v6, "i":I
label_goto_11:
	if ( i >= items->size() )
		goto label_cond_89;
	if ( !(items[i]->instanceOf("java::lang::String")) )  
		goto label_cond_26;
	cVar0 = items[i];
	cVar0->checkCast("java::lang::String");
	toAppendTo->append(cVar0);
label_cond_23:
label_goto_23:
	i = ( i + 0x1);
	goto label_goto_11;
	// 1943    .line 1350
label_cond_26:
	item = items[i];
	item->checkCast("android::icu::text::SimpleDateFormat_S_PatternItem");
	//    .local v13, "item":Landroid/icu/text/SimpleDateFormat$PatternItem;
	0x0;
	//    .local v15, "start":I
	if ( !(attributes) )  
		goto label_cond_31;
	start = toAppendTo->length();
label_cond_31:
	if ( !(this->useFastFormat) )  
		goto label_cond_6f;
	this->subFormat(toAppendTo, item->type, item->length, toAppendTo->length(), i, capitalizationContext, pos, cal);
label_goto_4c:
	if ( !(attributes) )  
		goto label_cond_23;
	end = toAppendTo->length();
	//    .local v11, "end":I
	if ( (end - start) <= 0 )
		goto label_cond_23;
	//    .local v10, "attr":Landroid/icu/text/DateFormat$Field;
	fp = std::make_shared<java::text::FieldPosition>(this->patternCharToDateFormatField(item->type));
	//    .local v12, "fp":Ljava/text/FieldPosition;
	fp->setBeginIndex(start);
	fp->setEndIndex(end);
	attributes->add(fp);
	goto label_goto_23;
	// 2035    .line 1360
	// 2036    .end local v10    # "attr":Landroid/icu/text/DateFormat$Field;
	// 2037    .end local v11    # "end":I
	// 2038    .end local v12    # "fp":Ljava/text/FieldPosition;
label_cond_6f:
	toAppendTo->append(this->subFormat(item->type, item->length, toAppendTo->length(), i, capitalizationContext, pos, cal));
	goto label_goto_4c;
	// 2066    .line 1377
	// 2067    .end local v13    # "item":Landroid/icu/text/SimpleDateFormat$PatternItem;
	// 2068    .end local v15    # "start":I
label_cond_89:
	return toAppendTo;

}
// .method private getDefaultCenturyStart()Ljava/util/Date;
std::shared_ptr<java::util::Date> android::icu::text::SimpleDateFormat::getDefaultCenturyStart()
{
	
	if ( this->defaultCenturyStart )     
		goto label_cond_9;
	this->initializeDefaultCenturyStart(this->defaultCenturyBase);
label_cond_9:
	return this->defaultCenturyStart;

}
// .method private getDefaultCenturyStartYear()I
int android::icu::text::SimpleDateFormat::getDefaultCenturyStartYear()
{
	
	if ( this->defaultCenturyStart )     
		goto label_cond_9;
	this->initializeDefaultCenturyStart(this->defaultCenturyBase);
label_cond_9:
	return this->defaultCenturyStartYear;

}
// .method private static declared-synchronized getDefaultPattern()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::SimpleDateFormat::getDefaultPattern()
{
	
	std::shared_ptr<android::icu::text::SimpleDateFormat> cVar0;
	std::shared_ptr<android::icu::util::ULocale> defaultLocale;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> rb;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	auto patternsRb;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> patternsRb;
	std::vector<std::any> tryCatchExcetionList;
	std::shared<std::vector<std::vector<java::lang::CharSequence>>> cVar2;
	
	cVar0 = android::icu::text::SimpleDateFormat();
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	defaultLocale = android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT);
	//    .local v3, "defaultLocale":Landroid/icu/util/ULocale;
	if ( defaultLocale->equals(android::icu::text::SimpleDateFormat::cachedDefaultLocale) )     
		goto label_cond_5f;
	android::icu::text::SimpleDateFormat::cachedDefaultLocale = defaultLocale;
	//label_try_end_18:
	}
	catch (...){
		goto label_catchall_96;
	}
	//    .catchall {:try_start_3 .. :try_end_18} :catchall_96
	//    .local v1, "cal":Landroid/icu/util/Calendar;
	try {
	//label_try_start_19:
	rb = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), android::icu::text::SimpleDateFormat::cachedDefaultLocale);
	rb->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v6, "rb":Landroid/icu/impl/ICUResourceBundle;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	//    .local v7, "resourcePath":Ljava/lang/String;
	patternsRb = rb->findWithFallback(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("calendar/")))->append(android::icu::util::Calendar::getInstance(android::icu::text::SimpleDateFormat::cachedDefaultLocale)->getType())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("/DateTimePatterns")))->toString());
	//    .local v5, "patternsRb":Landroid/icu/impl/ICUResourceBundle;
	if ( patternsRb )     
		goto label_cond_50;
	patternsRb = rb->findWithFallback(std::make_shared<java::lang::String>(std::make_shared<char[]>("calendar/gregorian/DateTimePatterns")));
label_cond_50:
	if ( !(patternsRb) )  
		goto label_cond_5a;
	if ( patternsRb->getSize() >= 0x9 )
		goto label_cond_63;
label_cond_5a:
	android::icu::text::SimpleDateFormat::cachedDefaultPattern = std::make_shared<java::lang::String>(std::make_shared<char[]>("yy/MM/dd HH:mm"));
	//label_try_end_5f:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_8f;
	}
	catch (...){
		goto label_catchall_96;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_19 .. :try_end_5f} :catch_8f
	//    .catchall {:try_start_19 .. :try_end_5f} :catchall_96
	//    .end local v1    # "cal":Landroid/icu/util/Calendar;
	//    .end local v5    # "patternsRb":Landroid/icu/impl/ICUResourceBundle;
	//    .end local v6    # "rb":Landroid/icu/impl/ICUResourceBundle;
	//    .end local v7    # "resourcePath":Ljava/lang/String;
label_cond_5f:
label_goto_5f:
	try {
	//label_try_start_5f:
	//label_try_end_61:
	}
	catch (...){
		goto label_catchall_96;
	}
	//    .catchall {:try_start_5f .. :try_end_61} :catchall_96
	cVar0->monitor_exit();
	return android::icu::text::SimpleDateFormat::cachedDefaultPattern;
	// 2251    .line 1204
	// 2252    .restart local v1    # "cal":Landroid/icu/util/Calendar;
	// 2253    .restart local v5    # "patternsRb":Landroid/icu/impl/ICUResourceBundle;
	// 2254    .restart local v6    # "rb":Landroid/icu/impl/ICUResourceBundle;
	// 2255    .restart local v7    # "resourcePath":Ljava/lang/String;
label_cond_63:
	//    .local v2, "defaultIndex":I
	try {
	//label_try_start_65:
	if ( patternsRb->getSize() <  0xd )
		goto label_cond_6f;
label_cond_6f:
	//    .local v0, "basePattern":Ljava/lang/String;
	cVar2 = std::make_shared<std::vector<std::vector<java::lang::CharSequence>>>(0x2);
	cVar2[0x0] = patternsRb->getString(0x3);
	cVar2[0x1] = patternsRb->getString(0x7);
	android::icu::text::SimpleDateFormat::cachedDefaultPattern = android::icu::impl::SimpleFormatterImpl::formatRawPattern(patternsRb->getString(0x8), 0x2, 0x2, cVar2);
	//label_try_end_8e:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_8f;
	}
	catch (...){
		goto label_catchall_96;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_65 .. :try_end_8e} :catch_8f
	//    .catchall {:try_start_65 .. :try_end_8e} :catchall_96
	goto label_goto_5f;
	// 2323    .line 1214
	// 2324    .end local v0    # "basePattern":Ljava/lang/String;
	// 2325    .end local v2    # "defaultIndex":I
	// 2326    .end local v5    # "patternsRb":Landroid/icu/impl/ICUResourceBundle;
	// 2327    .end local v6    # "rb":Landroid/icu/impl/ICUResourceBundle;
	// 2328    .end local v7    # "resourcePath":Ljava/lang/String;
label_catch_8f:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v4, "e":Ljava/util/MissingResourceException;
	try {
	//label_try_start_90:
	android::icu::text::SimpleDateFormat::cachedDefaultPattern = std::make_shared<java::lang::String>(std::make_shared<char[]>("yy/MM/dd HH:mm"));
	//label_try_end_95:
	}
	catch (...){
		goto label_catchall_96;
	}
	//    .catchall {:try_start_90 .. :try_end_95} :catchall_96
	goto label_goto_5f;
	// 2343    .end local v1    # "cal":Landroid/icu/util/Calendar;
	// 2344    .end local v4    # "e":Ljava/util/MissingResourceException;
label_catchall_96:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method private static getIndexFromChar(C)I
int android::icu::text::SimpleDateFormat::getIndexFromChar(char ch)
{
	
	int cVar0;
	
	//    .param p0, "ch"    # C
	if ( ch >= android::icu::text::SimpleDateFormat::PATTERN_CHAR_TO_INDEX->size() )
		goto label_cond_c;
	cVar0 = android::icu::text::SimpleDateFormat::PATTERN_CHAR_TO_INDEX[( ch & 0xff)];
label_goto_b:
	return cVar0;
label_cond_c:
	cVar0 = -0x1;
	goto label_goto_b;

}
// .method public static getInstance(Landroid/icu/util/Calendar$FormatConfiguration;)Landroid/icu/text/SimpleDateFormat;
std::shared_ptr<android::icu::text::SimpleDateFormat> android::icu::text::SimpleDateFormat::getInstance(std::shared_ptr<android::icu::util::Calendar_S_FormatConfiguration> formatConfig)
{
	
	std::shared_ptr<java::lang::String> ostr;
	std::shared_ptr<android::icu::text::SimpleDateFormat> cVar0;
	
	//    .param p0, "formatConfig"    # Landroid/icu/util/Calendar$FormatConfiguration;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2384    .end annotation
	ostr = formatConfig->getOverrideString();
	//    .local v8, "ostr":Ljava/lang/String;
	if ( !(ostr) )  
		goto label_cond_28;
	if ( ostr->length() <= 0 )
		goto label_cond_28;
	//    .local v6, "useFast":Z
label_goto_e:
	cVar0 = std::make_shared<android::icu::text::SimpleDateFormat>(formatConfig->getPatternString(), formatConfig->getDateFormatSymbols(), formatConfig->getCalendar(), 0x0, formatConfig->getLocale(), useFast, formatConfig->getOverrideString());
	return cVar0;
	// 2440    .line 1087
	// 2441    .end local v6    # "useFast":Z
label_cond_28:
	//    .restart local v6    # "useFast":Z
	goto label_goto_e;

}
// .method private static getLevelFromChar(C)I
int android::icu::text::SimpleDateFormat::getLevelFromChar(char ch)
{
	
	int cVar0;
	
	//    .param p0, "ch"    # C
	if ( ch >= android::icu::text::SimpleDateFormat::PATTERN_CHAR_TO_LEVEL->size() )
		goto label_cond_c;
	cVar0 = android::icu::text::SimpleDateFormat::PATTERN_CHAR_TO_LEVEL[( ch & 0xff)];
label_goto_b:
	return cVar0;
label_cond_c:
	cVar0 = -0x1;
	goto label_goto_b;

}
// .method private getPatternItems()[Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::SimpleDateFormat::getPatternItems()
{
	
	char cVar0;
	int cVar1;
	std::shared_ptr<std::vector<java::lang::Object>> cVar2;
	int isPrevQuote;
	int inQuote;
	std::shared_ptr<java::lang::StringBuilder> text;
	char itemType;
	int itemLength;
	std::shared_ptr<java::util::ArrayList> items;
	int i;
	char ch;
	std::shared_ptr<android::icu::text::SimpleDateFormat_S_PatternItem> cVar3;
	std::shared_ptr<android::icu::text::SimpleDateFormat_S_PatternItem> cVar4;
	std::shared_ptr<android::icu::text::SimpleDateFormat_S_PatternItem> cVar5;
	std::shared_ptr<android::icu::text::SimpleDateFormat_S_PatternItem> cVar6;
	
	cVar0 = 0x27;
	cVar1 = 0x0;
	if ( !(this->patternItems) )  
		goto label_cond_a;
	return this->patternItems;
	// 2494    .line 2104
label_cond_a:
	cVar2 = android::icu::text::SimpleDateFormat::PARSED_PATTERN_CACHE->get(this->pattern);
	cVar2->checkCast("std::vector<java::lang::Object>");
	this->patternItems = cVar2;
	if ( !(this->patternItems) )  
		goto label_cond_1d;
	return this->patternItems;
	// 2518    .line 2109
label_cond_1d:
	isPrevQuote = 0x0;
	//    .local v3, "isPrevQuote":Z
	inQuote = 0x0;
	//    .local v2, "inQuote":Z
	text = std::make_shared<java::lang::StringBuilder>();
	//    .local v7, "text":Ljava/lang/StringBuilder;
	itemType = 0x0;
	//    .local v5, "itemType":C
	itemLength = 0x1;
	//    .local v4, "itemLength":I
	items = std::make_shared<java::util::ArrayList>();
	//    .local v6, "items":Ljava/util/List;, "Ljava/util/List<Ljava/lang/Object;>;"
	i = 0x0;
	//    .end local v2    # "inQuote":Z
	//    .end local v5    # "itemType":C
	//    .local v1, "i":I
label_goto_2c:
	if ( i >= this->pattern->length() )
		goto label_cond_93;
	ch = this->pattern->charAt(i);
	//    .local v0, "ch":C
	if ( ch != cVar0 )
		goto label_cond_54;
	if ( !(isPrevQuote) )  
		goto label_cond_47;
	text->append(cVar0);
	isPrevQuote = 0x0;
label_cond_42:
label_goto_42:
	inQuote = ( inQuote ^ 0x1);
label_goto_44:
	i = ( i + 0x1);
	goto label_goto_2c;
	// 2593    .line 2124
label_cond_47:
	isPrevQuote = 0x1;
	if ( !(itemType) )  
		goto label_cond_42;
	cVar3 = std::make_shared<android::icu::text::SimpleDateFormat_S_PatternItem>(itemType, itemLength);
	items->add(cVar3);
	itemType = 0x0;
	//    .restart local v5    # "itemType":C
	goto label_goto_42;
	// 2613    .line 2132
	// 2614    .end local v5    # "itemType":C
label_cond_54:
	0x0;
	if ( !(inQuote) )  
		goto label_cond_5b;
	text->append(ch);
	goto label_goto_44;
	// 2626    .line 2136
label_cond_5b:
	if ( !(android::icu::text::SimpleDateFormat::isSyntaxChar(ch)) )  
		goto label_cond_84;
	if ( ch != itemType )
		goto label_cond_66;
	itemLength = ( itemLength + 0x1);
	goto label_goto_44;
	// 2642    .line 2141
label_cond_66:
	if ( itemType )     
		goto label_cond_7b;
	if ( text->length() <= 0 )
		goto label_cond_78;
	items->add(text->toString());
	text->setLength(cVar1);
label_cond_78:
label_goto_78:
	itemType = ch;
	//    .local v5, "itemType":C
	itemLength = 0x1;
	goto label_goto_44;
	// 2674    .line 2147
	// 2675    .end local v5    # "itemType":C
label_cond_7b:
	cVar4 = std::make_shared<android::icu::text::SimpleDateFormat_S_PatternItem>(itemType, itemLength);
	items->add(cVar4);
	goto label_goto_78;
	// 2685    .line 2154
label_cond_84:
	if ( !(itemType) )  
		goto label_cond_8f;
	cVar5 = std::make_shared<android::icu::text::SimpleDateFormat_S_PatternItem>(itemType, itemLength);
	items->add(cVar5);
	itemType = 0x0;
label_cond_8f:
	text->append(ch);
	goto label_goto_44;
	// 2705    .line 2164
	// 2706    .end local v0    # "ch":C
label_cond_93:
	if ( itemType )     
		goto label_cond_bd;
	if ( text->length() <= 0 )
		goto label_cond_a5;
	items->add(text->toString());
	text->setLength(cVar1);
label_cond_a5:
label_goto_a5:
	this->patternItems = items->toArray(std::make_shared<std::vector<std::vector<java::lang::Object>>>(items->size()));
	android::icu::text::SimpleDateFormat::PARSED_PATTERN_CACHE->put(this->pattern, this->patternItems);
	return this->patternItems;
	// 2756    .line 2170
label_cond_bd:
	cVar6 = std::make_shared<android::icu::text::SimpleDateFormat_S_PatternItem>(itemType, itemLength);
	items->add(cVar6);
	goto label_goto_a5;

}
// .method private initLocalZeroPaddingNumberFormat()V
void android::icu::text::SimpleDateFormat::initLocalZeroPaddingNumberFormat()
{
	
	bool cVar0;
	std::shared_ptr<android::icu::text::NumberFormat> cVar1;
	std::shared_ptr<android::icu::text::NumberFormat> cVar2;
	
	cVar0 = 0x1;
	if ( !(this->numberFormat->instanceOf("android::icu::text::DecimalFormat")) )  
		goto label_cond_22;
	cVar1 = this->numberFormat;
	cVar1->checkCast("android::icu::text::DecimalFormat");
	this->decDigits = cVar1->getDecimalFormatSymbols()->getDigits();
	this->useLocalZeroPaddingNumberFormat = cVar0;
label_goto_17:
	if ( !(this->useLocalZeroPaddingNumberFormat) )  
		goto label_cond_21;
	this->decimalBuf = std::make_shared<std::vector<char[]>>(0xa);
label_cond_21:
	return;
	// 2815    .line 2230
label_cond_22:
	if ( !(this->numberFormat->instanceOf("android::icu::impl::DateNumberFormat")) )  
		goto label_cond_35;
	cVar2 = this->numberFormat;
	cVar2->checkCast("android::icu::impl::DateNumberFormat");
	this->decDigits = cVar2->getDigits();
	this->useLocalZeroPaddingNumberFormat = cVar0;
	goto label_goto_17;
	// 2839    .line 2234
label_cond_35:
	this->useLocalZeroPaddingNumberFormat = 0x0;
	goto label_goto_17;

}
// .method private initNumberFormatters(Landroid/icu/util/ULocale;)V
void android::icu::text::SimpleDateFormat::initNumberFormatters(std::shared_ptr<android::icu::util::ULocale> loc)
{
	
	std::shared_ptr<java::util::HashMap> cVar0;
	std::shared_ptr<java::util::HashMap> cVar1;
	
	//    .param p1, "loc"    # Landroid/icu/util/ULocale;
	cVar0 = std::make_shared<java::util::HashMap>();
	this->numberFormatters = cVar0;
	cVar1 = std::make_shared<java::util::HashMap>();
	this->overrideMap = cVar1;
	this->processOverrideString(loc, this->override);
	return;

}
// .method private initialize()V
void android::icu::text::SimpleDateFormat::initialize()
{
	
	std::shared_ptr<android::icu::text::DateFormatSymbols> cVar0;
	std::shared_ptr<android::icu::text::NumberingSystem> ns;
	std::shared_ptr<android::icu::impl::DateNumberFormat> cVar1;
	
	if ( this->locale )     
		goto label_cond_c;
	this->locale = android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT);
label_cond_c:
	if ( this->formatData )     
		goto label_cond_19;
	cVar0 = std::make_shared<android::icu::text::DateFormatSymbols>(this->locale);
	this->formatData = cVar0;
label_cond_19:
	if ( this->calendar )     
		goto label_cond_25;
	this->calendar = android::icu::util::Calendar::getInstance(this->locale);
label_cond_25:
	if ( this->numberFormat )     
		goto label_cond_3d;
	ns = android::icu::text::NumberingSystem::getInstance(this->locale);
	//    .local v1, "ns":Landroid/icu/text/NumberingSystem;
	if ( !(ns->isAlgorithmic()) )  
		goto label_cond_66;
	this->numberFormat = android::icu::text::NumberFormat::getInstance(this->locale);
	//    .end local v1    # "ns":Landroid/icu/text/NumberingSystem;
label_cond_3d:
label_goto_3d:
	this->defaultCenturyBase = java::lang::System::currentTimeMillis({const[class].FS-Param});
	this->setLocale(this->calendar->getLocale(android::icu::util::ULocale::VALID_LOCALE), this->calendar->getLocale(android::icu::util::ULocale::ACTUAL_LOCALE));
	this->initLocalZeroPaddingNumberFormat();
	if ( !(this->override) )  
		goto label_cond_62;
	this->initNumberFormatters(this->locale);
label_cond_62:
	this->parsePattern();
	return;
	// 3003    .line 1116
	// 3004    .restart local v1    # "ns":Landroid/icu/text/NumberingSystem;
label_cond_66:
	//    .local v0, "digitString":Ljava/lang/String;
	//    .local v2, "nsName":Ljava/lang/String;
	cVar1 = std::make_shared<android::icu::impl::DateNumberFormat>(this->locale, ns->getDescription(), ns->getName());
	this->numberFormat = cVar1;
	goto label_goto_3d;

}
// .method private initializeDefaultCenturyStart(J)V
void android::icu::text::SimpleDateFormat::initializeDefaultCenturyStart(long long baseTime)
{
	
	int cVar0;
	std::shared_ptr<android::icu::util::Calendar> tmpCal;
	
	//    .param p1, "baseTime"    # J
	cVar0 = 0x1;
	this->defaultCenturyBase = baseTime;
	tmpCal = this->calendar->clone();
	tmpCal->checkCast("android::icu::util::Calendar");
	//    .local v0, "tmpCal":Landroid/icu/util/Calendar;
	tmpCal->setTimeInMillis(baseTime);
	tmpCal->add(cVar0, -0x50);
	this->defaultCenturyStart = tmpCal->getTime();
	this->defaultCenturyStartYear = tmpCal->get(cVar0);
	return;

}
// .method private declared-synchronized initializeTimeZoneFormat(Z)V
void android::icu::text::SimpleDateFormat::initializeTimeZoneFormat(bool bForceUpdate)
{
	
	std::shared_ptr<android::icu::text::NumberFormat> cVar0;
	std::shared_ptr<java::lang::String> digits;
	std::shared_ptr<android::icu::text::NumberFormat> cVar1;
	
	//    .param p1, "bForceUpdate"    # Z
	this->monitor_enter();
	if ( bForceUpdate )     
		goto label_cond_7;
	try {
	//label_try_start_3:
	if ( this->tzFormat )     
		goto label_cond_4a;
label_cond_7:
	this->tzFormat = android::icu::text::TimeZoneFormat::getInstance(this->locale);
	//    .local v1, "digits":Ljava/lang/String;
	if ( !(this->numberFormat->instanceOf("android::icu::text::DecimalFormat")) )  
		goto label_cond_4c;
	cVar0 = this->numberFormat;
	cVar0->checkCast("android::icu::text::DecimalFormat");
	//    .local v0, "decsym":Landroid/icu/text/DecimalFormatSymbols;
	//    .end local v1    # "digits":Ljava/lang/String;
	digits = std::make_shared<java::lang::String>(cVar0->getDecimalFormatSymbols()->getDigits());
	//    .end local v0    # "decsym":Landroid/icu/text/DecimalFormatSymbols;
label_cond_27:
label_goto_27:
	if ( !(0x0) )  
		goto label_cond_4a;
	if ( this->tzFormat->getGMTOffsetDigits()->equals(digits) )     
		goto label_cond_4a;
	if ( !(this->tzFormat->isFrozen()) )  
		goto label_cond_45;
	this->tzFormat = this->tzFormat->cloneAsThawed();
label_cond_45:
	this->tzFormat->setGMTOffsetDigits(digits);
	//label_try_end_4a:
	}
	catch (...){
		goto label_catchall_60;
	}
	//    .catchall {:try_start_3 .. :try_end_4a} :catchall_60
label_cond_4a:
	this->monitor_exit();
	return;
	// 3182    .line 1150
	// 3183    .restart local v1    # "digits":Ljava/lang/String;
label_cond_4c:
	try {
	//label_try_start_4c:
	if ( !(this->numberFormat->instanceOf("android::icu::impl::DateNumberFormat")) )  
		goto label_cond_27;
	//    .end local v1    # "digits":Ljava/lang/String;
	cVar1 = this->numberFormat;
	cVar1->checkCast("android::icu::impl::DateNumberFormat");
	digits = std::make_shared<java::lang::String>(cVar1->getDigits());
	//label_try_end_5f:
	}
	catch (...){
		goto label_catchall_60;
	}
	//    .catchall {:try_start_4c .. :try_end_5f} :catchall_60
	//    .local v1, "digits":Ljava/lang/String;
	goto label_goto_27;
	// 3211    .end local v1    # "digits":Ljava/lang/String;
label_catchall_60:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method static isFieldUnitIgnored(Ljava/lang/String;I)Z
bool android::icu::text::SimpleDateFormat::isFieldUnitIgnored(std::shared_ptr<java::lang::String> pattern,int field)
{
	
	int cVar0;
	bool cVar1;
	int fieldLevel;
	int inQuote;
	char prevCh;
	int count;
	int i;
	char ch;
	
	//    .param p0, "pattern"    # Ljava/lang/String;
	//    .param p1, "field"    # I
	cVar0 = 0x27;
	cVar1 = 0x0;
	fieldLevel = android::icu::text::SimpleDateFormat::CALENDAR_FIELD_TO_LEVEL[field];
	//    .local v2, "fieldLevel":I
	inQuote = 0x0;
	//    .local v4, "inQuote":Z
	prevCh = 0x0;
	//    .local v6, "prevCh":C
	count = 0x0;
	//    .local v1, "count":I
	i = 0x0;
	//    .end local v4    # "inQuote":Z
	//    .end local v6    # "prevCh":C
	//    .local v3, "i":I
label_goto_b:
	if ( i >= pattern->length() )
		goto label_cond_47;
	ch = pattern->charAt(i);
	//    .local v0, "ch":C
	if ( ch == prevCh )
		goto label_cond_21;
	if ( count <= 0 )
		goto label_cond_21;
	//    .local v5, "level":I
	if ( fieldLevel >  android::icu::text::SimpleDateFormat::getLevelFromChar(prevCh) )
		goto label_cond_20;
	return cVar1;
	// 3284    .line 4095
label_cond_20:
	count = 0x0;
	//    .end local v5    # "level":I
label_cond_21:
	if ( ch != cVar0 )
		goto label_cond_3b;
	if ( ( i + 0x1) >= pattern->length() )
		goto label_cond_38;
	if ( pattern->charAt(( i + 0x1)) != cVar0 )
		goto label_cond_38;
	i = ( i + 0x1);
label_cond_35:
label_goto_35:
	i = ( i + 0x1);
	goto label_goto_b;
	// 3320    .line 4101
label_cond_38:
	//    .local v4, "inQuote":Z
	goto label_goto_35;
	// 3327    .line 4103
	// 3328    .end local v4    # "inQuote":Z
label_cond_3b:
	if ( inQuote )     
		goto label_cond_35;
	if ( !(android::icu::text::SimpleDateFormat::isSyntaxChar(ch)) )  
		goto label_cond_35;
	prevCh = ch;
	//    .local v6, "prevCh":C
	count = ( count + 0x1);
	goto label_goto_35;
	// 3347    .line 4108
	// 3348    .end local v0    # "ch":C
	// 3349    .end local v6    # "prevCh":C
label_cond_47:
	if ( count <= 0 )
		goto label_cond_50;
	//    .restart local v5    # "level":I
	if ( fieldLevel >  android::icu::text::SimpleDateFormat::getLevelFromChar(prevCh) )
		goto label_cond_50;
	return cVar1;
	// 3365    .line 4115
	// 3366    .end local v5    # "level":I
label_cond_50:
	return 0x1;

}
// .method private static final isNumeric(CI)Z
bool android::icu::text::SimpleDateFormat::isNumeric(char formatChar,int count)
{
	
	bool cVar0;
	
	//    .param p0, "formatChar"    # C
	//    .param p1, "count"    # I
	cVar0 = 0x1;
	if ( std::make_shared<java::lang::String>(std::make_shared<char[]>("ADdFgHhKkmrSsuWwYy"))->indexOf(formatChar) >= 0 )
		goto label_cond_17;
	if ( count >  0x2 )
		goto label_cond_18;
	if ( std::make_shared<java::lang::String>(std::make_shared<char[]>("ceLMQq"))->indexOf(formatChar) < 0 ) 
		goto label_cond_18;
label_cond_17:
label_goto_17:
	return cVar0;
label_cond_18:
	cVar0 = 0x0;
	goto label_goto_17;

}
// .method private static isSyntaxChar(C)Z
bool android::icu::text::SimpleDateFormat::isSyntaxChar(char ch)
{
	
	bool cVar0;
	
	//    .param p0, "ch"    # C
	if ( ch >= android::icu::text::SimpleDateFormat::PATTERN_CHAR_IS_SYNTAX->size() )
		goto label_cond_c;
	cVar0 = android::icu::text::SimpleDateFormat::PATTERN_CHAR_IS_SYNTAX[( ch & 0xff)];
label_goto_b:
	return cVar0;
label_cond_c:
	cVar0 = 0x0;
	goto label_goto_b;

}
// .method private lowerLevel([Ljava/lang/Object;II)Z
bool android::icu::text::SimpleDateFormat::lowerLevel(std::shared_ptr<std::vector<java::lang::Object>> items,int i,int level)
{
	
	bool cVar0;
	std::shared_ptr<android::icu::text::SimpleDateFormat_S_PatternItem> item;
	char ch;
	int patternCharIndex;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "items"    # [Ljava/lang/Object;
	//    .param p2, "i"    # I
	//    .param p3, "level"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 3450        value = {
	// 3451            Ljava/lang/IllegalArgumentException;
	// 3452        }
	// 3453    .end annotation
	cVar0 = 0x0;
	if ( !(items[i]->instanceOf("java::lang::String")) )  
		goto label_cond_8;
	return cVar0;
	// 3468    .line 4346
label_cond_8:
	item = items[i];
	item->checkCast("android::icu::text::SimpleDateFormat_S_PatternItem");
	//    .local v1, "item":Landroid/icu/text/SimpleDateFormat$PatternItem;
	ch = item->type;
	//    .local v0, "ch":C
	patternCharIndex = android::icu::text::SimpleDateFormat::getLevelFromChar(ch);
	//    .local v2, "patternCharIndex":I
	if ( patternCharIndex != -0x1 )
		goto label_cond_42;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal pattern character \'")))->append(ch)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\' in \")))->append(this->pattern)->append(0x22)->toString());
	// throw
	throw cVar1;
	// 3539    .line 4355
label_cond_42:
	if ( patternCharIndex <  level )
		goto label_cond_46;
	return 0x1;
	// 3548    .line 4358
label_cond_46:
	return cVar0;

}
// .method private matchDayPeriodString(Ljava/lang/String;I[Ljava/lang/String;ILandroid/icu/util/Output;)I
int android::icu::text::SimpleDateFormat::matchDayPeriodString(std::shared_ptr<java::lang::String> text,int start,std::shared_ptr<std::vector<java::lang::String>> data,int dataLength,std::shared_ptr<android::icu::util::Output<android::icu::impl::DayPeriodRules_S_DayPeriod>> dayPeriod)
{
	
	int bestMatchLength;
	int bestMatch;
	int i;
	int length;
	int matchLength;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "start"    # I
	//    .param p3, "data"    # [Ljava/lang/String;
	//    .param p4, "dataLength"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 3560        value = {
	// 3561            "(",
	// 3562            "Ljava/lang/String;",
	// 3563            "I[",
	// 3564            "Ljava/lang/String;",
	// 3565            "I",
	// 3566            "Landroid/icu/util/Output",
	// 3567            "<",
	// 3568            "Landroid/icu/impl/DayPeriodRules$DayPeriod;",
	// 3569            ">;)I"
	// 3570        }
	// 3571    .end annotation
	//    .local p5, "dayPeriod":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Landroid/icu/impl/DayPeriodRules$DayPeriod;>;"
	bestMatchLength = 0x0;
	//    .local v1, "bestMatchLength":I
	bestMatch = -0x1;
	//    .local v0, "bestMatch":I
	0x0;
	//    .local v4, "matchLength":I
	i = 0x0;
	//    .local v2, "i":I
label_goto_4:
	if ( i >= dataLength )
		goto label_cond_1f;
	if ( !(data[i]) )  
		goto label_cond_1c;
	length = data[i]->length();
	//    .local v3, "length":I
	if ( length <= bestMatchLength )
		goto label_cond_1c;
	matchLength = this->regionMatchesWithOptionalDot(text, start, data[i], length);
	if ( matchLength < 0 ) 
		goto label_cond_1c;
	i;
	bestMatchLength = matchLength;
	//    .end local v3    # "length":I
label_cond_1c:
	i = ( i + 0x1);
	goto label_goto_4;
	// 3631    .line 3011
label_cond_1f:
	if ( bestMatch < 0 ) 
		goto label_cond_2a;
	dayPeriod->value = android::icu::impl::DayPeriodRules_S_DayPeriod::VALUES[bestMatch];
	return (start + bestMatchLength);
	// 3647    .line 3016
label_cond_2a:
	return (0 - start);

}
// .method private matchLiteral(Ljava/lang/String;I[Ljava/lang/Object;I[Z)I
int android::icu::text::SimpleDateFormat::matchLiteral(std::shared_ptr<java::lang::String> text,int pos,std::shared_ptr<std::vector<java::lang::Object>> items,int itemIndex,std::shared_ptr<bool[]> complete)
{
	
	int originalPos;
	std::shared_ptr<java::lang::String> patternLiteral;
	int plen;
	int tlen;
	int idx;
	int pch;
	int ich;
	int pos;
	std::shared_ptr<android::icu::text::SimpleDateFormat_S_PatternItem> before;
	bool cVar3;
	std::shared_ptr<android::icu::text::SimpleDateFormat_S_PatternItem> after;
	int newPos;
	bool cVar4;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "pos"    # I
	//    .param p3, "items"    # [Ljava/lang/Object;
	//    .param p4, "itemIndex"    # I
	//    .param p5, "complete"    # [Z
	originalPos = pos;
	//    .local v9, "originalPos":I
	patternLiteral = items[itemIndex];
	patternLiteral->checkCast("java::lang::String");
	//    .local v10, "patternLiteral":Ljava/lang/String;
	plen = patternLiteral->length();
	//    .local v12, "plen":I
	tlen = text->length();
	//    .local v13, "tlen":I
	idx = 0x0;
	//    .local v6, "idx":I
label_goto_f:
	if ( idx >= plen )
		goto label_cond_a5;
	if ( pos >= tlen )
		goto label_cond_a5;
	pch = patternLiteral->charAt(idx);
	//    .local v11, "pch":C
	ich = text->charAt(pos);
	//    .local v5, "ich":C
	if ( !(android::icu::impl::PatternProps::isWhiteSpace(pch)) )  
		goto label_cond_51;
	if ( !(android::icu::impl::PatternProps::isWhiteSpace(ich)) )  
		goto label_cond_51;
label_goto_29:
	if ( ( idx + 0x1) >= plen )
		goto label_cond_3c;
	if ( !(android::icu::impl::PatternProps::isWhiteSpace(patternLiteral->charAt(( idx + 0x1)))) )  
		goto label_cond_3c;
	idx = ( idx + 0x1);
	goto label_goto_29;
	// 3749    .line 2775
label_cond_3c:
label_goto_3c:
	if ( ( pos + 0x1) >= tlen )
		goto label_cond_9f;
	if ( !(android::icu::impl::PatternProps::isWhiteSpace(text->charAt(( pos + 0x1)))) )  
		goto label_cond_9f;
	pos = ( pos + 0x1);
	goto label_goto_3c;
	// 3777    .line 2779
label_cond_51:
	if ( pch == ich )
		goto label_cond_9f;
	if ( ich != 0x2e )
		goto label_cond_78;
	if ( pos != originalPos )
		goto label_cond_78;
	if ( itemIndex <= 0 )
		goto label_cond_78;
	if ( !(this->getBooleanAttribute(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_ALLOW_WHITESPACE)) )  
		goto label_cond_78;
	before = items[( itemIndex + -0x1)];
	//    .local v3, "before":Ljava/lang/Object;
	if ( !(before->instanceOf("android::icu::text::SimpleDateFormat_S_PatternItem")) )  
		goto label_cond_a5;
	before->checkCast("android::icu::text::SimpleDateFormat_S_PatternItem");
	//    .end local v3    # "before":Ljava/lang/Object;
	//    .local v7, "isNumeric":Z
	if ( before->isNumeric )     
		goto label_cond_a5;
	pos = ( pos + 0x1);
	goto label_goto_f;
	// 3829    .line 2789
	// 3830    .end local v7    # "isNumeric":Z
label_cond_78:
	if ( pch == 0x20 )
		goto label_cond_80;
	if ( pch != 0x2e )
		goto label_cond_8d;
label_cond_80:
	if ( !(this->getBooleanAttribute(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_ALLOW_WHITESPACE)) )  
		goto label_cond_8d;
	idx = ( idx + 0x1);
	goto label_goto_f;
	// 3857    .line 2792
label_cond_8d:
	if ( pos == originalPos )
		goto label_cond_a5;
	if ( !(this->getBooleanAttribute(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_PARTIAL_LITERAL_MATCH)) )  
		goto label_cond_a5;
	idx = ( idx + 0x1);
	goto label_goto_f;
	// 3879    .line 2798
label_cond_9f:
	idx = ( idx + 0x1);
	pos = ( pos + 0x1);
	goto label_goto_f;
	// 3888    .line 2801
	// 3889    .end local v5    # "ich":C
	// 3890    .end local v11    # "pch":C
label_cond_a5:
	if ( idx != plen )
		goto label_cond_103;
	cVar3 = 0x1;
label_goto_a8:
	complete[0x0] = cVar3;
	if ( complete[0x0] )     
		goto label_cond_102;
	if ( !(this->getBooleanAttribute(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_ALLOW_WHITESPACE)) )  
		goto label_cond_102;
	if ( itemIndex <= 0 )
		goto label_cond_102;
	if ( itemIndex >= ( items->size() + -0x1) )
		goto label_cond_102;
	if ( originalPos >= tlen )
		goto label_cond_102;
	before = items[( itemIndex + -0x1)];
	//    .restart local v3    # "before":Ljava/lang/Object;
	after = items[( itemIndex + 0x1)];
	//    .local v1, "after":Ljava/lang/Object;
	if ( !(before->instanceOf("android::icu::text::SimpleDateFormat_S_PatternItem")) )  
		goto label_cond_102;
	if ( !(after->instanceOf("android::icu::text::SimpleDateFormat_S_PatternItem")) )  
		goto label_cond_102;
	before->checkCast("android::icu::text::SimpleDateFormat_S_PatternItem");
	//    .end local v3    # "before":Ljava/lang/Object;
	//    .local v4, "beforeType":C
	after->checkCast("android::icu::text::SimpleDateFormat_S_PatternItem");
	//    .end local v1    # "after":Ljava/lang/Object;
	//    .local v2, "afterType":C
	if ( android::icu::text::SimpleDateFormat::DATE_PATTERN_TYPE->contains(before->type) == android::icu::text::SimpleDateFormat::DATE_PATTERN_TYPE->contains(after->type) )
		goto label_cond_102;
	newPos = originalPos;
	//    .local v8, "newPos":I
label_goto_ee:
	//    .restart local v5    # "ich":C
	if ( android::icu::impl::PatternProps::isWhiteSpace(text->charAt(newPos)) )     
		goto label_cond_105;
	if ( newPos <= originalPos )
		goto label_cond_108;
	cVar4 = 0x1;
label_goto_fd:
	complete[0x0] = cVar4;
	pos = newPos;
	//    .end local v2    # "afterType":C
	//    .end local v4    # "beforeType":C
	//    .end local v5    # "ich":C
	//    .end local v8    # "newPos":I
label_cond_102:
	return pos;
	// 4024    .line 2801
label_cond_103:
	cVar3 = 0x0;
	goto label_goto_a8;
	// 4030    .line 2819
	// 4031    .restart local v2    # "afterType":C
	// 4032    .restart local v4    # "beforeType":C
	// 4033    .restart local v5    # "ich":C
	// 4034    .restart local v8    # "newPos":I
label_cond_105:
	newPos = ( newPos + 0x1);
	goto label_goto_ee;
	// 4040    .line 2821
label_cond_108:
	cVar4 = 0x0;
	goto label_goto_fd;

}
// .method private matchString(Ljava/lang/String;II[Ljava/lang/String;Ljava/lang/String;Landroid/icu/util/Calendar;)I
int android::icu::text::SimpleDateFormat::matchString(std::shared_ptr<java::lang::String> text,int start,int field,std::shared_ptr<std::vector<java::lang::String>> data,std::shared_ptr<java::lang::String> monthPattern,std::shared_ptr<android::icu::util::Calendar> cal)
{
	
	int i;
	int bestMatchLength;
	int bestMatch;
	int length;
	int matchLength;
	std::shared<std::vector<std::vector<java::lang::CharSequence>>> cVar0;
	std::shared_ptr<java::lang::String> leapMonthName;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "start"    # I
	//    .param p3, "field"    # I
	//    .param p4, "data"    # [Ljava/lang/String;
	//    .param p5, "monthPattern"    # Ljava/lang/String;
	//    .param p6, "cal"    # Landroid/icu/util/Calendar;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 4056    .end annotation
	i = 0x0;
	//    .local v4, "i":I
	//    .local v3, "count":I
	if ( field != 0x7 )
		goto label_cond_8;
	i = 0x1;
label_cond_8:
	bestMatchLength = 0x0;
	//    .local v2, "bestMatchLength":I
	bestMatch = -0x1;
	//    .local v1, "bestMatch":I
	//    .local v5, "isLeapMonth":I
	0x0;
	//    .local v8, "matchLength":I
label_goto_c:
	if ( i >= data->size() )
		goto label_cond_45;
	length = data[i]->length();
	//    .local v7, "length":I
	if ( length <= bestMatchLength )
		goto label_cond_21;
	matchLength = this->regionMatchesWithOptionalDot(text, start, data[i], length);
	if ( matchLength < 0 ) 
		goto label_cond_21;
	i;
	bestMatchLength = matchLength;
	0x0;
label_cond_21:
	if ( !(monthPattern) )  
		goto label_cond_42;
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::CharSequence>>>(0x1);
	cVar0[0x0] = data[i];
	leapMonthName = android::icu::impl::SimpleFormatterImpl::formatRawPattern(monthPattern, 0x1, 0x1, cVar0);
	//    .local v6, "leapMonthName":Ljava/lang/String;
	length = leapMonthName->length();
	if ( length <= bestMatchLength )
		goto label_cond_42;
	matchLength = this->regionMatchesWithOptionalDot(text, start, leapMonthName, length);
	if ( matchLength < 0 ) 
		goto label_cond_42;
	i;
	bestMatchLength = matchLength;
	0x1;
	//    .end local v6    # "leapMonthName":Ljava/lang/String;
label_cond_42:
	i = ( i + 0x1);
	goto label_goto_c;
	// 4184    .line 2915
	// 4185    .end local v7    # "length":I
label_cond_45:
	if ( bestMatch < 0 ) 
		goto label_cond_5f;
	if ( field < 0 ) 
		goto label_cond_5c;
	if ( field != 0x1 )
		goto label_cond_4e;
label_cond_4e:
	cal->set(field, bestMatch);
	if ( !(monthPattern) )  
		goto label_cond_5c;
	cal->set(0x16, 0x0);
label_cond_5c:
	return (start + bestMatchLength);
	// 4222    .line 2928
label_cond_5f:
	return (~start);

}
// .method private parseAmbiguousDatesAsAfter(Ljava/util/Date;)V
void android::icu::text::SimpleDateFormat::parseAmbiguousDatesAsAfter(std::shared_ptr<java::util::Date> startDate)
{
	
	//    .param p1, "startDate"    # Ljava/util/Date;
	this->defaultCenturyStart = startDate;
	this->calendar->setTime(startDate);
	this->defaultCenturyStartYear = this->calendar->get(0x1);
	return;

}
// .method private parseInt(Ljava/lang/String;ILjava/text/ParsePosition;ZLandroid/icu/text/NumberFormat;)Ljava/lang/Number;
std::shared_ptr<java::lang::Number> android::icu::text::SimpleDateFormat::parseInt(std::shared_ptr<java::lang::String> text,int maxDigits,std::shared_ptr<java::text::ParsePosition> pos,bool allowNegative,std::shared_ptr<android::icu::text::NumberFormat> fmt)
{
	
	int oldPos;
	std::shared_ptr<java::lang::Number> number;
	int nDigits;
	auto val;
	double val;
	std::shared_ptr<android::icu::text::DecimalFormat> cVar0;
	std::shared_ptr<android::icu::text::DecimalFormat> cVar1;
	bool dateNumberFormat;
	std::shared_ptr<android::icu::impl::DateNumberFormat> cVar2;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "maxDigits"    # I
	//    .param p3, "pos"    # Ljava/text/ParsePosition;
	//    .param p4, "allowNegative"    # Z
	//    .param p5, "fmt"    # Landroid/icu/text/NumberFormat;
	oldPos = pos->getIndex();
	//    .local v3, "oldPos":I
	if ( !(allowNegative) )  
		goto label_cond_22;
	number = fmt->parse(text, pos);
	//    .end local p5    # "fmt":Landroid/icu/text/NumberFormat;
	//    .local v2, "number":Ljava/lang/Number;
label_cond_b:
label_goto_b:
	if ( maxDigits <= 0 )
		goto label_cond_61;
	nDigits = (pos->getIndex() - oldPos);
	//    .local v1, "nDigits":I
	if ( nDigits <= maxDigits )
		goto label_cond_61;
	val = number->doubleValue();
	//    .local v6, "val":D
	nDigits = (nDigits -  maxDigits);
label_goto_1a:
	if ( nDigits <= 0 )
		goto label_cond_57;
	val = ( val / 0x4024000000000000L);
	nDigits = ( nDigits + -0x1);
	goto label_goto_1a;
	// 4323    .line 3741
	// 4324    .end local v1    # "nDigits":I
	// 4325    .end local v2    # "number":Ljava/lang/Number;
	// 4326    .end local v6    # "val":D
	// 4327    .restart local p5    # "fmt":Landroid/icu/text/NumberFormat;
label_cond_22:
	if ( !(fmt->instanceOf("android::icu::text::DecimalFormat")) )  
		goto label_cond_40;
	cVar0 = fmt;
	cVar0->checkCast("android::icu::text::DecimalFormat");
	//    .local v4, "oldPrefix":Ljava/lang/String;
	cVar1 = fmt;
	cVar1->checkCast("android::icu::text::DecimalFormat");
	cVar1->setNegativePrefix(std::make_shared<java::lang::String>(std::make_shared<char[]>("\uab00")));
	//    .restart local v2    # "number":Ljava/lang/Number;
	fmt->checkCast("android::icu::text::DecimalFormat");
	//    .end local p5    # "fmt":Landroid/icu/text/NumberFormat;
	fmt->setNegativePrefix(cVar0->getNegativePrefix());
	goto label_goto_b;
	// 4366    .line 3747
	// 4367    .end local v2    # "number":Ljava/lang/Number;
	// 4368    .end local v4    # "oldPrefix":Ljava/lang/String;
	// 4369    .restart local p5    # "fmt":Landroid/icu/text/NumberFormat;
label_cond_40:
	dateNumberFormat = fmt->instanceOf("android::icu::impl::DateNumberFormat");
	//    .local v0, "dateNumberFormat":Z
	if ( !(dateNumberFormat) )  
		goto label_cond_4b;
	cVar2 = fmt;
	cVar2->checkCast("android::icu::impl::DateNumberFormat");
	cVar2->setParsePositiveOnly(0x1);
label_cond_4b:
	//    .restart local v2    # "number":Ljava/lang/Number;
	if ( !(dateNumberFormat) )  
		goto label_cond_b;
	fmt->checkCast("android::icu::impl::DateNumberFormat");
	//    .end local p5    # "fmt":Landroid/icu/text/NumberFormat;
	fmt->setParsePositiveOnly(0x0);
	goto label_goto_b;
	// 4404    .line 3768
	// 4405    .end local v0    # "dateNumberFormat":Z
	// 4406    .restart local v1    # "nDigits":I
	// 4407    .restart local v6    # "val":D
label_cond_57:
	pos->setIndex((oldPos + maxDigits));
	//    .end local v1    # "nDigits":I
	//    .end local v6    # "val":D
label_cond_61:
	return number;

}
// .method private parseInt(Ljava/lang/String;Ljava/text/ParsePosition;ZLandroid/icu/text/NumberFormat;)Ljava/lang/Number;
std::shared_ptr<java::lang::Number> android::icu::text::SimpleDateFormat::parseInt(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> pos,bool allowNegative,std::shared_ptr<android::icu::text::NumberFormat> fmt)
{
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "pos"    # Ljava/text/ParsePosition;
	//    .param p3, "allowNegative"    # Z
	//    .param p4, "fmt"    # Landroid/icu/text/NumberFormat;
	return this->parseInt(text, -0x1, pos, allowNegative, fmt);

}
// .method private parsePattern()V
void android::icu::text::SimpleDateFormat::parsePattern()
{
	
	bool cVar0;
	bool cVar1;
	int inQuote;
	int i;
	int ch;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	this->hasMinute = cVar1;
	this->hasSecond = cVar1;
	inQuote = 0x0;
	//    .local v2, "inQuote":Z
	i = 0x0;
	//    .end local v2    # "inQuote":Z
	//    .local v1, "i":I
label_goto_8:
	if ( i >= this->pattern->length() )
		goto label_cond_2d;
	ch = this->pattern->charAt(i);
	//    .local v0, "ch":C
	if ( ch != 0x27 )
		goto label_cond_1c;
	inQuote = ( inQuote ^ 0x1);
label_cond_1c:
	if ( inQuote )     
		goto label_cond_2a;
	if ( ch != 0x6d )
		goto label_cond_24;
	this->hasMinute = cVar0;
label_cond_24:
	if ( ch != 0x73 )
		goto label_cond_2a;
	this->hasSecond = cVar0;
label_cond_2a:
	i = ( i + 0x1);
	goto label_goto_8;
	// 4530    .line 4498
	// 4531    .end local v0    # "ch":C
label_cond_2d:
	return;

}
// .method private processOverrideString(Landroid/icu/util/ULocale;Ljava/lang/String;)V
void android::icu::text::SimpleDateFormat::processOverrideString(std::shared_ptr<android::icu::util::ULocale> loc,std::shared_ptr<java::lang::String> str)
{
	
	int start;
	int moreToProcess;
	int delimiterPosition;
	std::shared_ptr<java::lang::String> currentString;
	int equalSignPosition;
	std::shared_ptr<java::lang::String> nsName;
	int fullOverride;
	std::shared_ptr<android::icu::util::ULocale> ovrLoc;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<android::icu::text::NumberFormat> nf;
	
	//    .param p1, "loc"    # Landroid/icu/util/ULocale;
	//    .param p2, "str"    # Ljava/lang/String;
	if ( !(str) )  
		goto label_cond_8;
	if ( str->length() )     
		goto label_cond_9;
label_cond_8:
	return;
	// 4555    .line 4431
label_cond_9:
	start = 0x0;
	//    .local v10, "start":I
	moreToProcess = 0x1;
	//    .local v5, "moreToProcess":Z
label_goto_b:
	if ( !(moreToProcess) )  
		goto label_cond_8b;
	delimiterPosition = str->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>(";")), start);
	//    .local v1, "delimiterPosition":I
	if ( delimiterPosition != -0x1 )
		goto label_cond_6f;
	moreToProcess = 0x0;
	//    .local v2, "end":I
label_goto_1c:
	currentString = str->substring(start, end);
	//    .local v0, "currentString":Ljava/lang/String;
	equalSignPosition = currentString->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("=")));
	//    .local v3, "equalSignPosition":I
	if ( equalSignPosition != -0x1 )
		goto label_cond_71;
	nsName = currentString;
	//    .local v7, "nsName":Ljava/lang/String;
	fullOverride = 0x1;
	//    .local v4, "fullOverride":Z
label_goto_2c:
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	ovrLoc = std::make_shared<android::icu::util::ULocale>(cVar0->append(loc->getBaseName())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("@numbers=")))->append(nsName)->toString());
	//    .local v9, "ovrLoc":Landroid/icu/util/ULocale;
	nf = android::icu::text::NumberFormat::createInstance(ovrLoc, 0x0);
	//    .local v6, "nf":Landroid/icu/text/NumberFormat;
	nf->setGroupingUsed(0x0);
	if ( !(fullOverride) )  
		goto label_cond_87;
	this->setNumberFormat(nf);
label_goto_5b:
	if ( fullOverride )     
		goto label_cond_6c;
	if ( !(( this->numberFormatters->containsKey(nsName) ^ 0x1)) )  
		goto label_cond_6c;
	this->numberFormatters->put(nsName, nf);
label_cond_6c:
	start = ( delimiterPosition + 0x1);
	goto label_goto_b;
	// 4695    .line 4444
	// 4696    .end local v0    # "currentString":Ljava/lang/String;
	// 4697    .end local v2    # "end":I
	// 4698    .end local v3    # "equalSignPosition":I
	// 4699    .end local v4    # "fullOverride":Z
	// 4700    .end local v6    # "nf":Landroid/icu/text/NumberFormat;
	// 4701    .end local v7    # "nsName":Ljava/lang/String;
	// 4702    .end local v9    # "ovrLoc":Landroid/icu/util/ULocale;
label_cond_6f:
	//    .restart local v2    # "end":I
	goto label_goto_1c;
	// 4709    .line 4453
	// 4710    .restart local v0    # "currentString":Ljava/lang/String;
	// 4711    .restart local v3    # "equalSignPosition":I
label_cond_71:
	nsName = currentString->substring(( equalSignPosition + 0x1));
	//    .restart local v7    # "nsName":Ljava/lang/String;
	//    .local v8, "ovrField":Ljava/lang/Character;
	this->overrideMap->put(java::lang::Character::valueOf(currentString->charAt(0x0)), nsName);
	fullOverride = 0x0;
	//    .restart local v4    # "fullOverride":Z
	goto label_goto_2c;
	// 4743    .line 4468
	// 4744    .end local v8    # "ovrField":Ljava/lang/Character;
	// 4745    .restart local v6    # "nf":Landroid/icu/text/NumberFormat;
	// 4746    .restart local v9    # "ovrLoc":Landroid/icu/util/ULocale;
label_cond_87:
	this->useLocalZeroPaddingNumberFormat = 0x0;
	goto label_goto_5b;
	// 4754    .line 4477
	// 4755    .end local v0    # "currentString":Ljava/lang/String;
	// 4756    .end local v1    # "delimiterPosition":I
	// 4757    .end local v2    # "end":I
	// 4758    .end local v3    # "equalSignPosition":I
	// 4759    .end local v4    # "fullOverride":Z
	// 4760    .end local v6    # "nf":Landroid/icu/text/NumberFormat;
	// 4761    .end local v7    # "nsName":Ljava/lang/String;
	// 4762    .end local v9    # "ovrLoc":Landroid/icu/util/ULocale;
label_cond_8b:
	return;

}
// .method private readObject(Ljava/io/ObjectInputStream;)V
void android::icu::text::SimpleDateFormat::readObject(std::shared_ptr<java::io::ObjectInputStream> stream)
{
	
	int cVar0;
	bool cVar1;
	int capitalizationSettingValue;
	std::shared_ptr<java::lang::Object> cVar2;
	int cVar3;
	std::shared_ptr<android::icu::text::DisplayContext> context;
	
	//    .param p1, "stream"    # Ljava/io/ObjectInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 4771        value = {
	// 4772            Ljava/io/IOException;,
	// 4773            Ljava/lang/ClassNotFoundException;
	// 4774        }
	// 4775    .end annotation
	cVar0 = 0x1;
	cVar1 = 0x0;
	stream->defaultReadObject();
	if ( this->serialVersionOnStream <= cVar0 )
		goto label_cond_5c;
	capitalizationSettingValue = stream->readInt();
	//    .local v0, "capitalizationSettingValue":I
label_goto_d:
	if ( this->serialVersionOnStream >= cVar0 )
		goto label_cond_5e;
	this->defaultCenturyBase = java::lang::System::currentTimeMillis({const[class].FS-Param});
label_goto_17:
	this->serialVersionOnStream = 0x2;
	this->locale = this->getLocale(android::icu::util::ULocale::VALID_LOCALE);
	if ( this->locale )     
		goto label_cond_2e;
	this->locale = android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT);
label_cond_2e:
	this->initLocalZeroPaddingNumberFormat();
	this->setContext(android::icu::text::DisplayContext::CAPITALIZATION_NONE);
	if ( capitalizationSettingValue < 0 ) 
		goto label_cond_4b;
	cVar2 = android::icu::text::DisplayContext::values({const[class].FS-Param});
	cVar3 = cVar1;
label_goto_3e:
	if ( cVar3 >= cVar2->size() )
		goto label_cond_4b;
	context = cVar2[cVar3];
	//    .local v1, "context":Landroid/icu/text/DisplayContext;
	if ( context->value() != capitalizationSettingValue )
		goto label_cond_64;
	this->setContext(context);
	//    .end local v1    # "context":Landroid/icu/text/DisplayContext;
label_cond_4b:
	if ( this->getBooleanAttribute(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_PARTIAL_MATCH) )     
		goto label_cond_58;
	this->setBooleanAttribute(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_PARTIAL_LITERAL_MATCH, cVar1);
label_cond_58:
	this->parsePattern();
	return;
	// 4897    .line 3965
	// 4898    .end local v0    # "capitalizationSettingValue":I
label_cond_5c:
	//    .restart local v0    # "capitalizationSettingValue":I
	goto label_goto_d;
	// 4905    .line 3975
label_cond_5e:
	this->parseAmbiguousDatesAsAfter(this->defaultCenturyStart);
	goto label_goto_17;
	// 4913    .line 3990
	// 4914    .restart local v1    # "context":Landroid/icu/text/DisplayContext;
label_cond_64:
	cVar3 = ( cVar3 + 0x1);
	goto label_goto_3e;

}
// .method private regionMatchesWithOptionalDot(Ljava/lang/String;ILjava/lang/String;I)I
int android::icu::text::SimpleDateFormat::regionMatchesWithOptionalDot(std::shared_ptr<java::lang::String> text,int start,std::shared_ptr<java::lang::String> data,int length)
{
	
	bool cVar0;
	int cVar1;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "start"    # I
	//    .param p3, "data"    # Ljava/lang/String;
	//    .param p4, "length"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	//    .local v6, "matches":Z
	if ( !(text->regionMatches(cVar0, start, data, cVar1, length)) )  
		goto label_cond_d;
	return length;
	// 4953    .line 2936
label_cond_d:
	if ( data->length() <= 0 )
		goto label_cond_2f;
	if ( data->charAt(( data->length() + -0x1)) != 0x2e )
		goto label_cond_2f;
	if ( !(text->regionMatches(cVar0, start, data, cVar1, ( length + -0x1))) )  
		goto label_cond_2f;
	return ( length + -0x1);
	// 4995    .line 2941
label_cond_2f:
	return -0x1;

}
// .method private static safeAppend([Ljava/lang/String;ILjava/lang/StringBuffer;)V
void android::icu::text::SimpleDateFormat::safeAppend(std::shared_ptr<std::vector<java::lang::String>> array,int value,std::shared_ptr<java::lang::StringBuffer> appendTo)
{
	
	//    .param p0, "array"    # [Ljava/lang/String;
	//    .param p1, "value"    # I
	//    .param p2, "appendTo"    # Ljava/lang/StringBuffer;
	if ( !(array) )  
		goto label_cond_c;
	if ( value < 0 ) 
		goto label_cond_c;
	if ( value >= array->size() )
		goto label_cond_c;
	appendTo->append(array[value]);
label_cond_c:
	return;

}
// .method private static safeAppendWithMonthPattern([Ljava/lang/String;ILjava/lang/StringBuffer;Ljava/lang/String;)V
void android::icu::text::SimpleDateFormat::safeAppendWithMonthPattern(std::shared_ptr<std::vector<java::lang::String>> array,int value,std::shared_ptr<java::lang::StringBuffer> appendTo,std::shared_ptr<java::lang::String> monthPattern)
{
	
	int cVar0;
	std::shared<std::vector<std::vector<java::lang::CharSequence>>> cVar1;
	
	//    .param p0, "array"    # [Ljava/lang/String;
	//    .param p1, "value"    # I
	//    .param p2, "appendTo"    # Ljava/lang/StringBuffer;
	//    .param p3, "monthPattern"    # Ljava/lang/String;
	cVar0 = 0x1;
	if ( !(array) )  
		goto label_cond_10;
	if ( value < 0 ) 
		goto label_cond_10;
	if ( value >= array->size() )
		goto label_cond_10;
	if ( monthPattern )     
		goto label_cond_11;
	appendTo->append(array[value]);
label_cond_10:
label_goto_10:
	return;
	// 5062    .line 2070
label_cond_11:
	cVar1 = std::make_shared<std::vector<std::vector<java::lang::CharSequence>>>(cVar0);
	cVar1[0x0] = array[value];
	//    .local v0, "s":Ljava/lang/String;
	appendTo->append(android::icu::impl::SimpleFormatterImpl::formatRawPattern(monthPattern, cVar0, cVar0, cVar1));
	goto label_goto_10;

}
// .method private subParse(Ljava/lang/String;ICIZZ[ZLandroid/icu/util/Calendar;Landroid/icu/text/MessageFormat;Landroid/icu/util/Output;)I
int android::icu::text::SimpleDateFormat::subParse(std::shared_ptr<java::lang::String> text,int start,char ch,int count,bool obeyCount,bool allowNegative,std::shared_ptr<bool[]> ambiguousYear,std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<android::icu::text::MessageFormat> numericLeapMonthFormatter,std::shared_ptr<android::icu::util::Output<android::icu::text::TimeZoneFormat_S_TimeType>> tzTimeType)
{
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "start"    # I
	//    .param p3, "ch"    # C
	//    .param p4, "count"    # I
	//    .param p5, "obeyCount"    # Z
	//    .param p6, "allowNegative"    # Z
	//    .param p7, "ambiguousYear"    # [Z
	//    .param p8, "cal"    # Landroid/icu/util/Calendar;
	//    .param p9, "numericLeapMonthFormatter"    # Landroid/icu/text/MessageFormat;
	//    .annotation system Ldalvik/annotation/Signature;
	// 5093        value = {
	// 5094            "(",
	// 5095            "Ljava/lang/String;",
	// 5096            "ICIZZ[Z",
	// 5097            "Landroid/icu/util/Calendar;",
	// 5098            "Landroid/icu/text/MessageFormat;",
	// 5099            "Landroid/icu/util/Output",
	// 5100            "<",
	// 5101            "Landroid/icu/text/TimeZoneFormat$TimeType;",
	// 5102            ">;)I"
	// 5103        }
	// 5104    .end annotation
	//    .local p10, "tzTimeType":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Landroid/icu/text/TimeZoneFormat$TimeType;>;"
	return this->subParse(text, start, ch, count, obeyCount, allowNegative, ambiguousYear, cal, 0x0, 0x0, 0x0);

}
// .method private subParse(Ljava/lang/String;ICIZZ[ZLandroid/icu/util/Calendar;Landroid/icu/text/MessageFormat;Landroid/icu/util/Output;Landroid/icu/util/Output;)I
int android::icu::text::SimpleDateFormat::subParse(std::shared_ptr<java::lang::String> text,int start,char ch,int count,bool obeyCount,bool allowNegative,std::shared_ptr<bool[]> ambiguousYear,std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<android::icu::text::MessageFormat> numericLeapMonthFormatter,std::shared_ptr<android::icu::util::Output<android::icu::text::TimeZoneFormat_S_TimeType>> tzTimeType,std::shared_ptr<android::icu::util::Output<android::icu::impl::DayPeriodRules_S_DayPeriod>> dayPeriod)
{
	
	int value;
	std::shared_ptr<java::text::ParsePosition> pos;
	int patternCharIndex;
	std::shared_ptr<java::text::Format> currentNumberFormat;
	int field;
	int cVar0;
	int c;
	auto args;
	std::shared_ptr<java::lang::Number> number;
	int ps;
	int ambiguousTwoDigitYear;
	bool cVar2;
	int cVar3;
	int haveMonthPat;
	int newStart;
	std::shared_ptr<java::lang::String> cVar6;
	std::shared_ptr<java::lang::String> cVar10;
	int cVar11;
	std::shared_ptr<java::lang::String> cVar13;
	std::shared_ptr<java::lang::String> cVar8;
	int i;
	int a;
	auto tz;
	int ampmStart;
	std::shared_ptr<java::util::ArrayList> data;
	std::shared_ptr<std::vector<java::lang::String>> cVar16;
	auto number;
	int start;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "start"    # I
	//    .param p3, "ch"    # C
	//    .param p4, "count"    # I
	//    .param p5, "obeyCount"    # Z
	//    .param p6, "allowNegative"    # Z
	//    .param p7, "ambiguousYear"    # [Z
	//    .param p8, "cal"    # Landroid/icu/util/Calendar;
	//    .param p9, "numericLeapMonthFormatter"    # Landroid/icu/text/MessageFormat;
	//    .annotation system Ldalvik/annotation/Signature;
	// 5152        value = {
	// 5153            "(",
	// 5154            "Ljava/lang/String;",
	// 5155            "ICIZZ[Z",
	// 5156            "Landroid/icu/util/Calendar;",
	// 5157            "Landroid/icu/text/MessageFormat;",
	// 5158            "Landroid/icu/util/Output",
	// 5159            "<",
	// 5160            "Landroid/icu/text/TimeZoneFormat$TimeType;",
	// 5161            ">;",
	// 5162            "Landroid/icu/util/Output",
	// 5163            "<",
	// 5164            "Landroid/icu/impl/DayPeriodRules$DayPeriod;",
	// 5165            ">;)I"
	// 5166        }
	// 5167    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 5170    .end annotation
	//    .local p10, "tzTimeType":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Landroid/icu/text/TimeZoneFormat$TimeType;>;"
	//    .local p11, "dayPeriod":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Landroid/icu/impl/DayPeriodRules$DayPeriod;>;"
	//    .local v32, "number":Ljava/lang/Number;
	0x0;
	//    .local v8, "currentNumberFormat":Landroid/icu/text/NumberFormat;
	value = 0x0;
	//    .local v38, "value":I
	pos = std::make_shared<java::text::ParsePosition>(0x0);
	//    .local v6, "pos":Ljava/text/ParsePosition;
	patternCharIndex = android::icu::text::SimpleDateFormat::getIndexFromChar(ch);
	//    .local v34, "patternCharIndex":I
	if ( patternCharIndex != -0x1 )
		goto label_cond_18;
	return (~start);
	// 5215    .line 3098
label_cond_18:
	currentNumberFormat = this->getNumberFormat(ch);
	//    .local v8, "currentNumberFormat":Landroid/icu/text/NumberFormat;
	field = android::icu::text::SimpleDateFormat::PATTERN_INDEX_TO_CALENDAR_FIELD[patternCharIndex];
	//    .local v27, "field":I
	if ( !(numericLeapMonthFormatter) )  
		goto label_cond_2c;
	numericLeapMonthFormatter->setFormatByArgumentIndex(0x0, currentNumberFormat);
label_cond_2c:
	if ( cal->getType()->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("chinese"))) )     
		goto label_cond_50;
	cVar0 = cal->getType()->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("dangi")));
label_goto_44:
	if ( start <  text->length() )
		goto label_cond_53;
	return (~start);
	// 5283    .line 3105
label_cond_50:
	0x1;
	//    .local v30, "isChineseCalendar":Z
	goto label_goto_44;
	// 5290    .line 3113
	// 5291    .end local v30    # "isChineseCalendar":Z
label_cond_53:
	c = android::icu::text::UTF16::charAt(text, start);
	//    .local v25, "c":I
	if ( !(android::icu::lang::UCharacter::isUWhiteSpace(c)) )  
		goto label_cond_65;
	if ( !(( android::icu::impl::PatternProps::isWhiteSpace(c) ^ 0x1)) )  
		goto label_cond_bc;
label_cond_65:
	pos->setIndex(start);
	if ( patternCharIndex == 0x4 )
		goto label_cond_75;
	if ( patternCharIndex != 0xf )
		goto label_cond_c3;
label_cond_75:
	//    .local v33, "parsedNumericLeapMonth":Z
	if ( !(numericLeapMonthFormatter) )  
		goto label_cond_ac;
	if ( patternCharIndex == 0x2 )
		goto label_cond_84;
	if ( patternCharIndex != 0x1a )
		goto label_cond_ac;
label_cond_84:
	args = numericLeapMonthFormatter->parse(text, pos);
	//    .local v24, "args":[Ljava/lang/Object;
	if ( !(args) )  
		goto label_cond_117;
	if ( pos->getIndex() <= start )
		goto label_cond_117;
	if ( !(args[0x0]->instanceOf("java::lang::Number")) )  
		goto label_cond_117;
	number = args[0x0];
	//    .end local v32    # "number":Ljava/lang/Number;
	number->checkCast("java::lang::Number");
	//    .local v32, "number":Ljava/lang/Number;
	cal->set(0x16, 0x1);
	//    .end local v24    # "args":[Ljava/lang/Object;
	//    .end local v32    # "number":Ljava/lang/Number;
label_cond_ac:
label_goto_ac:
	if ( 0x0 )     
		goto label_cond_14e;
	if ( !(obeyCount) )  
		goto label_cond_143;
	if ( (start + count) <= text->length() )
		goto label_cond_125;
	return (~start);
	// 5430    .line 3117
	// 5431    .end local v33    # "parsedNumericLeapMonth":Z
	// 5432    .local v32, "number":Ljava/lang/Number;
label_cond_bc:
	start = (start + android::icu::text::UTF16::getCharCount(c));
	goto label_goto_44;
	// 5442    .line 3127
label_cond_c3:
	if ( patternCharIndex != 0x2 )
		goto label_cond_cd;
	if ( count <= 0x2 )
		goto label_cond_75;
label_cond_cd:
	if ( patternCharIndex == 0x1a )
		goto label_cond_75;
	if ( patternCharIndex == 0x13 )
		goto label_cond_75;
	if ( patternCharIndex == 0x19 )
		goto label_cond_75;
	if ( patternCharIndex == 0x1 )
		goto label_cond_75;
	if ( patternCharIndex == 0x12 )
		goto label_cond_75;
	if ( patternCharIndex == 0x1e )
		goto label_cond_75;
	if ( patternCharIndex )     
		goto label_cond_f4;
	if ( cVar0 )     
		goto label_cond_75;
label_cond_f4:
	if ( patternCharIndex == 0x1b )
		goto label_cond_75;
	if ( patternCharIndex == 0x1c )
		goto label_cond_75;
	if ( patternCharIndex == 0x8 )
		goto label_cond_75;
	//    .end local v32    # "number":Ljava/lang/Number;
label_cond_106:
label_goto_106:
	// switch
	{
	auto item = ( patternCharIndex );
	if (item == 0) goto label_pswitch_155;
	if (item == 1) goto label_pswitch_1b8;
	if (item == 2) goto label_pswitch_2a9;
	if (item == 3) goto label_pswitch_109;
	if (item == 4) goto label_pswitch_3c3;
	if (item == 5) goto label_pswitch_109;
	if (item == 6) goto label_pswitch_109;
	if (item == 7) goto label_pswitch_109;
	if (item == 8) goto label_pswitch_3e1;
	if (item == 9) goto label_pswitch_431;
	if (item == 10) goto label_pswitch_109;
	if (item == 11) goto label_pswitch_109;
	if (item == 12) goto label_pswitch_109;
	if (item == 13) goto label_pswitch_109;
	if (item == 14) goto label_pswitch_576;
	if (item == 15) goto label_pswitch_5da;
	if (item == 16) goto label_pswitch_109;
	if (item == 17) goto label_pswitch_5f8;
	if (item == 18) goto label_pswitch_1b8;
	if (item == 19) goto label_pswitch_412;
	if (item == 20) goto label_pswitch_109;
	if (item == 21) goto label_pswitch_109;
	if (item == 22) goto label_pswitch_109;
	if (item == 23) goto label_pswitch_622;
	if (item == 24) goto label_pswitch_654;
	if (item == 25) goto label_pswitch_4dc;
	if (item == 26) goto label_pswitch_2a9;
	if (item == 27) goto label_pswitch_73a;
	if (item == 28) goto label_pswitch_7a5;
	if (item == 29) goto label_pswitch_67e;
	if (item == 30) goto label_pswitch_25a;
	if (item == 31) goto label_pswitch_6ae;
	if (item == 32) goto label_pswitch_6d8;
	if (item == 33) goto label_pswitch_709;
	if (item == 34) goto label_pswitch_109;
	if (item == 35) goto label_pswitch_87c;
	if (item == 36) goto label_pswitch_90d;
	if (item == 37) goto label_pswitch_810;
	}
label_pswitch_109:
	if ( !(obeyCount) )  
		goto label_cond_9b5;
	if ( (start + count) <= text->length() )
		goto label_cond_991;
	return (0 - start);
	// 5551    .line 3150
	// 5552    .restart local v24    # "args":[Ljava/lang/Object;
	// 5553    .restart local v32    # "number":Ljava/lang/Number;
	// 5554    .restart local v33    # "parsedNumericLeapMonth":Z
label_cond_117:
	pos->setIndex(start);
	cal->set(0x16, 0x0);
	goto label_goto_ac;
	// 5571    .end local v24    # "args":[Ljava/lang/Object;
	// 5572    .end local v32    # "number":Ljava/lang/Number;
label_cond_125:
	number = this->parseInt(text, count, pos, allowNegative, currentNumberFormat);
	//    .local v32, "number":Ljava/lang/Number;
label_goto_131:
	if ( number )     
		goto label_cond_14e;
	if ( !(( this->allowNumericFallback(patternCharIndex) ^ 0x1)) )  
		goto label_cond_14e;
	return (~start);
	// 5611    .line 3162
	// 5612    .end local v32    # "number":Ljava/lang/Number;
label_cond_143:
	number = this->parseInt(text, pos, allowNegative, currentNumberFormat);
	//    .restart local v32    # "number":Ljava/lang/Number;
	goto label_goto_131;
	// 5627    .line 3170
	// 5628    .end local v32    # "number":Ljava/lang/Number;
label_cond_14e:
	if ( !(0x0) )  
		goto label_cond_106;
	value = number->intValue();
	goto label_goto_106;
	// 5639    .line 3178
	// 5640    .end local v33    # "parsedNumericLeapMonth":Z
label_pswitch_155:
	if ( !(cVar0) )  
		goto label_cond_164;
	cal->set(0x0, value);
	return pos->getIndex();
	// 5660    .line 3184
label_cond_164:
	ps = 0x0;
	//    .local v35, "ps":I
	if ( count != 0x5 )
		goto label_cond_189;
	ps = this->matchString(text, start, 0x0, this->formatData->narrowEras, 0x0, cal);
label_goto_17f:
	if ( ps != (~start) )
		goto label_cond_188;
	ps = -0x7d00;
label_cond_188:
	return ps;
	// 5712    .line 3187
label_cond_189:
	if ( count != 0x4 )
		goto label_cond_1a3;
	ps = this->matchString(text, start, 0x0, this->formatData->eraNames, 0x0, cal);
	goto label_goto_17f;
	// 5745    .line 3190
label_cond_1a3:
	ps = this->matchString(text, start, 0x0, this->formatData->eras, 0x0, cal);
	goto label_goto_17f;
	// 5771    .line 3211
	// 5772    .end local v35    # "ps":I
label_pswitch_1b8:
	if ( !(this->override) )  
		goto label_cond_206;
	if ( !(this->override->compareTo(std::make_shared<java::lang::String>(std::make_shared<char[]>("hebr")))) )  
		goto label_cond_1d8;
	if ( this->override->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("y=hebr"))) < 0 ) 
		goto label_cond_206;
label_cond_1d8:
	if ( value >= 0x3e8 )
		goto label_cond_206;
	value = ( value + 0x1388);
label_cond_1e4:
label_goto_1e4:
	cal->set(field, value);
	if ( !(android::icu::text::SimpleDateFormat::DelayedHebrewMonthCheck) )  
		goto label_cond_201;
	if ( android::icu::util::HebrewCalendar::isLeapYear(value) )     
		goto label_cond_1fe;
	cal->add(0x2, 0x1);
label_cond_1fe:
	android::icu::text::SimpleDateFormat::DelayedHebrewMonthCheck = 0x0;
label_cond_201:
	return pos->getIndex();
	// 5864    .line 3213
label_cond_206:
	if ( count != 0x2 )
		goto label_cond_1e4;
	if ( (pos->getIndex() - start) != 0x2 )
		goto label_cond_1e4;
	if ( !(cal->haveDefaultCentury()) )  
		goto label_cond_1e4;
	if ( !(android::icu::lang::UCharacter::isDigit(text->charAt(start))) )  
		goto label_cond_1e4;
	if ( !(android::icu::lang::UCharacter::isDigit(text->charAt(( start + 0x1)))) )  
		goto label_cond_1e4;
	ambiguousTwoDigitYear = ( this->getDefaultCenturyStartYear() % 0x64);
	//    .local v22, "ambiguousTwoDigitYear":I
	if ( value != ambiguousTwoDigitYear )
		goto label_cond_256;
	cVar2 = 0x1;
label_goto_23f:
	ambiguousYear[0x0] = cVar2;
	if ( value >= ambiguousTwoDigitYear )
		goto label_cond_258;
	cVar3 = 0x64;
label_goto_252:
	value = (value + (cVar3 +  ( ( this->getDefaultCenturyStartYear() / 0x64) * 0x64)));
	goto label_goto_1e4;
	// 5964    .line 3226
label_cond_256:
	cVar2 = 0x0;
	goto label_goto_23f;
	// 5970    .line 3228
label_cond_258:
	cVar3 = 0x0;
	goto label_goto_252;
	// 5976    .line 3241
	// 5977    .end local v22    # "ambiguousTwoDigitYear":I
label_pswitch_25a:
	if ( !(this->formatData->shortYearNames) )  
		goto label_cond_279;
	newStart = this->matchString(text, start, 0x1, this->formatData->shortYearNames, 0x0, cal);
	//    .local v31, "newStart":I
	if ( newStart <= 0 )
		goto label_cond_279;
	return newStart;
	// 6017    .line 3247
	// 6018    .end local v31    # "newStart":I
label_cond_279:
	if ( !(number) )  
		goto label_cond_2a5;
	if ( this->getBooleanAttribute(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_ALLOW_NUMERIC) )     
		goto label_cond_28d;
	if ( this->formatData->shortYearNames )     
		goto label_cond_29a;
label_cond_28d:
	cal->set(0x1, value);
	return pos->getIndex();
	// 6057    .line 3247
label_cond_29a:
	if ( value >  this->formatData->shortYearNames->size() )
		goto label_cond_28d;
label_cond_2a5:
	return (~start);
	// 6079    .line 3254
label_pswitch_2a9:
	if ( count <= 0x2 )
		goto label_cond_2ba;
	if ( !(number) )  
		goto label_cond_2fb;
	if ( !(this->getBooleanAttribute(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_ALLOW_NUMERIC)) )  
		goto label_cond_2fb;
label_cond_2ba:
	cal->set(0x2, ( value + -0x1));
	if ( !(cal->getType()->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("hebrew")))) )  
		goto label_cond_2f2;
	if ( value <  0x6 )
		goto label_cond_2f2;
	if ( !(cal->isSet(0x1)) )  
		goto label_cond_2f7;
	if ( android::icu::util::HebrewCalendar::isLeapYear(cal->get(0x1)) )     
		goto label_cond_2f2;
	cal->set(0x2, value);
label_cond_2f2:
label_goto_2f2:
	return pos->getIndex();
	// 6172    .line 3270
label_cond_2f7:
	android::icu::text::SimpleDateFormat::DelayedHebrewMonthCheck = 0x1;
	goto label_goto_2f2;
	// 6180    .line 3277
label_cond_2fb:
	if ( !(this->formatData->leapMonthPatterns) )  
		goto label_cond_346;
	if ( this->formatData->leapMonthPatterns->size() <  0x7 )
		goto label_cond_346;
	haveMonthPat = 0x1;
	//    .local v28, "haveMonthPat":Z
label_goto_30f:
	newStart = 0x0;
	//    .restart local v31    # "newStart":I
	if ( this->getBooleanAttribute(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_MULTIPLE_PATTERNS_FOR_MATCH) )     
		goto label_cond_320;
	if ( count != 0x4 )
		goto label_cond_36c;
label_cond_320:
	if ( patternCharIndex != 0x2 )
		goto label_cond_34b;
	if ( !(haveMonthPat) )  
		goto label_cond_349;
	cVar6 = this->formatData->leapMonthPatterns[0x0];
label_goto_336:
	newStart = this->matchString(text, start, 0x2, this->formatData->months, cVar6, cal);
label_goto_343:
	if ( newStart <= 0 )
		goto label_cond_36c;
	return newStart;
	// 6278    .line 3277
	// 6279    .end local v28    # "haveMonthPat":Z
	// 6280    .end local v31    # "newStart":I
label_cond_346:
	haveMonthPat = 0x0;
	//    .restart local v28    # "haveMonthPat":Z
	goto label_goto_30f;
	// 6287    .line 3283
	// 6288    .restart local v31    # "newStart":I
label_cond_349:
	cVar6 = 0x0;
	goto label_goto_336;
	// 6294    .line 3284
label_cond_34b:
	if ( !(haveMonthPat) )  
		goto label_cond_36a;
	cVar8 = this->formatData->leapMonthPatterns[0x3];
label_goto_35c:
	newStart = this->matchString(text, start, 0x2, this->formatData->standaloneMonths, cVar8, cal);
	goto label_goto_343;
	// 6333    .line 3285
label_cond_36a:
	cVar8 = 0x0;
	goto label_goto_35c;
	// 6339    .line 3291
label_cond_36c:
	if ( this->getBooleanAttribute(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_MULTIPLE_PATTERNS_FOR_MATCH) )     
		goto label_cond_37b;
	if ( count != 0x3 )
		goto label_cond_3c2;
label_cond_37b:
	if ( patternCharIndex != 0x2 )
		goto label_cond_3a1;
	if ( !(haveMonthPat) )  
		goto label_cond_39f;
	cVar10 = this->formatData->leapMonthPatterns[0x1];
label_goto_391:
	cVar11 = this->matchString(text, start, 0x2, this->formatData->shortMonths, cVar10, cal);
label_goto_39e:
	return cVar11;
	// 6405    .line 3294
label_cond_39f:
	cVar10 = 0x0;
	goto label_goto_391;
	// 6411    .line 3295
label_cond_3a1:
	if ( !(haveMonthPat) )  
		goto label_cond_3c0;
	cVar13 = this->formatData->leapMonthPatterns[0x4];
label_goto_3b2:
	cVar11 = this->matchString(text, start, 0x2, this->formatData->standaloneShortMonths, cVar13, cal);
	goto label_goto_39e;
	// 6450    .line 3296
label_cond_3c0:
	cVar13 = 0x0;
	goto label_goto_3b2;
	// 6456    .line 3298
label_cond_3c2:
	return newStart;
	// 6460    .line 3302
	// 6461    .end local v28    # "haveMonthPat":Z
	// 6462    .end local v31    # "newStart":I
label_pswitch_3c3:
	if ( value != ( cal->getMaximum(0xb) + 0x1) )
		goto label_cond_3d3;
	value = 0x0;
label_cond_3d3:
	cal->set(0xb, value);
	return pos->getIndex();
	// 6498    .line 3309
label_pswitch_3e1:
	i = (pos->getIndex() - start);
	//    .local v29, "i":I
	if ( i >= 0x3 )
		goto label_cond_3f6;
label_goto_3ec:
	if ( i >= 0x3 )
		goto label_cond_404;
	value = ( value * 0xa);
	i = ( i + 0x1);
	goto label_goto_3ec;
	// 6530    .line 3316
label_cond_3f6:
	a = 0x1;
	//    .local v21, "a":I
label_goto_3f8:
	if ( i <= 0x3 )
		goto label_cond_402;
	a = ( a * 0xa);
	i = ( i + -0x1);
	goto label_goto_3f8;
	// 6551    .line 3321
label_cond_402:
	value = (value / a);
	//    .end local v21    # "a":I
label_cond_404:
	cal->set(0xe, value);
	return pos->getIndex();
	// 6573    .line 3326
	// 6574    .end local v29    # "i":I
label_pswitch_412:
	if ( count <= 0x2 )
		goto label_cond_423;
	if ( !(number) )  
		goto label_cond_431;
	if ( !(this->getBooleanAttribute(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_ALLOW_NUMERIC)) )  
		goto label_cond_431;
label_cond_423:
	cal->set(field, value);
	return pos->getIndex();
	// 6611    .line 3335
label_cond_431:
label_pswitch_431:
	newStart = 0x0;
	//    .restart local v31    # "newStart":I
	if ( this->getBooleanAttribute(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_MULTIPLE_PATTERNS_FOR_MATCH) )     
		goto label_cond_442;
	if ( count != 0x4 )
		goto label_cond_459;
label_cond_442:
	newStart = this->matchString(text, start, 0x7, this->formatData->weekdays, 0x0, cal);
	if ( newStart <= 0 )
		goto label_cond_459;
	return newStart;
	// 6663    .line 3341
label_cond_459:
	if ( this->getBooleanAttribute(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_MULTIPLE_PATTERNS_FOR_MATCH) )     
		goto label_cond_468;
	if ( count != 0x3 )
		goto label_cond_47f;
label_cond_468:
	newStart = this->matchString(text, start, 0x7, this->formatData->shortWeekdays, 0x0, cal);
	if ( newStart <= 0 )
		goto label_cond_47f;
	return newStart;
	// 6710    .line 3346
label_cond_47f:
	if ( this->getBooleanAttribute(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_MULTIPLE_PATTERNS_FOR_MATCH) )     
		goto label_cond_48e;
	if ( count != 0x6 )
		goto label_cond_4ad;
label_cond_48e:
	if ( !(this->formatData->shorterWeekdays) )  
		goto label_cond_4ad;
	newStart = this->matchString(text, start, 0x7, this->formatData->shorterWeekdays, 0x0, cal);
	if ( newStart <= 0 )
		goto label_cond_4ad;
	return newStart;
	// 6766    .line 3353
label_cond_4ad:
	if ( this->getBooleanAttribute(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_MULTIPLE_PATTERNS_FOR_MATCH) )     
		goto label_cond_4bc;
	if ( count != 0x5 )
		goto label_cond_4db;
label_cond_4bc:
	if ( !(this->formatData->narrowWeekdays) )  
		goto label_cond_4db;
	newStart = this->matchString(text, start, 0x7, this->formatData->narrowWeekdays, 0x0, cal);
	if ( newStart <= 0 )
		goto label_cond_4db;
	return newStart;
	// 6822    .line 3360
label_cond_4db:
	return newStart;
	// 6826    .line 3363
	// 6827    .end local v31    # "newStart":I
label_pswitch_4dc:
	if ( count == 0x1 )
		goto label_cond_4ed;
	if ( !(number) )  
		goto label_cond_4fb;
	if ( !(this->getBooleanAttribute(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_ALLOW_NUMERIC)) )  
		goto label_cond_4fb;
label_cond_4ed:
	cal->set(field, value);
	return pos->getIndex();
	// 6864    .line 3369
label_cond_4fb:
	newStart = 0x0;
	//    .restart local v31    # "newStart":I
	if ( this->getBooleanAttribute(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_MULTIPLE_PATTERNS_FOR_MATCH) )     
		goto label_cond_50c;
	if ( count != 0x4 )
		goto label_cond_523;
label_cond_50c:
	newStart = this->matchString(text, start, 0x7, this->formatData->standaloneWeekdays, 0x0, cal);
	if ( newStart <= 0 )
		goto label_cond_523;
	return newStart;
	// 6915    .line 3375
label_cond_523:
	if ( this->getBooleanAttribute(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_MULTIPLE_PATTERNS_FOR_MATCH) )     
		goto label_cond_532;
	if ( count != 0x3 )
		goto label_cond_549;
label_cond_532:
	newStart = this->matchString(text, start, 0x7, this->formatData->standaloneShortWeekdays, 0x0, cal);
	if ( newStart <= 0 )
		goto label_cond_549;
	return newStart;
	// 6962    .line 3380
label_cond_549:
	if ( this->getBooleanAttribute(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_MULTIPLE_PATTERNS_FOR_MATCH) )     
		goto label_cond_558;
	if ( count != 0x6 )
		goto label_cond_575;
label_cond_558:
	if ( !(this->formatData->standaloneShorterWeekdays) )  
		goto label_cond_575;
	return this->matchString(text, start, 0x7, this->formatData->standaloneShorterWeekdays, 0x0, cal);
	// 7015    .line 3385
label_cond_575:
	return newStart;
	// 7019    .line 3391
	// 7020    .end local v31    # "newStart":I
label_pswitch_576:
	newStart = 0x0;
	//    .restart local v31    # "newStart":I
	if ( !(this->formatData->ampmsNarrow) )  
		goto label_cond_585;
	if ( count >= 0x5 )
		goto label_cond_59d;
label_cond_585:
	newStart = this->matchString(text, start, 0x9, this->formatData->ampms, 0x0, cal);
	if ( newStart <= 0 )
		goto label_cond_5a7;
	return newStart;
	// 7069    .line 3393
label_cond_59d:
	if ( this->getBooleanAttribute(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_MULTIPLE_PATTERNS_FOR_MATCH) )     
		goto label_cond_585;
label_cond_5a7:
	if ( !(this->formatData->ampmsNarrow) )  
		goto label_cond_5d6;
	if ( count >= 0x5 )
		goto label_cond_5be;
	if ( !(this->getBooleanAttribute(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_MULTIPLE_PATTERNS_FOR_MATCH)) )  
		goto label_cond_5d6;
label_cond_5be:
	newStart = this->matchString(text, start, 0x9, this->formatData->ampmsNarrow, 0x0, cal);
	if ( newStart <= 0 )
		goto label_cond_5d6;
	return newStart;
	// 7136    .line 3405
label_cond_5d6:
	return (~start);
	// 7144    .line 3409
	// 7145    .end local v31    # "newStart":I
label_pswitch_5da:
	if ( value != ( cal->getLeastMaximum(0xa) + 0x1) )
		goto label_cond_5ea;
	value = 0x0;
label_cond_5ea:
	cal->set(0xa, value);
	return pos->getIndex();
	// 7181    .line 3416
label_pswitch_5f8:
	if ( count >= 0x4 )
		goto label_cond_61b;
	//    .local v36, "style":Landroid/icu/text/TimeZoneFormat$Style;
label_goto_5ff:
	tz = this->tzFormat()->parse(style, text, pos, tzTimeType);
	//    .local v37, "tz":Landroid/icu/util/TimeZone;
	if ( !(tz) )  
		goto label_cond_61e;
	cal->setTimeZone(tz);
	return pos->getIndex();
	// 7226    .line 3416
	// 7227    .end local v36    # "style":Landroid/icu/text/TimeZoneFormat$Style;
	// 7228    .end local v37    # "tz":Landroid/icu/util/TimeZone;
label_cond_61b:
	//    .restart local v36    # "style":Landroid/icu/text/TimeZoneFormat$Style;
	goto label_goto_5ff;
	// 7235    .line 3422
	// 7236    .restart local v37    # "tz":Landroid/icu/util/TimeZone;
label_cond_61e:
	return (~start);
	// 7244    .line 3426
	// 7245    .end local v36    # "style":Landroid/icu/text/TimeZoneFormat$Style;
	// 7246    .end local v37    # "tz":Landroid/icu/util/TimeZone;
label_pswitch_622:
	if ( count >= 0x4 )
		goto label_cond_645;
	//    .restart local v36    # "style":Landroid/icu/text/TimeZoneFormat$Style;
label_goto_629:
	tz = this->tzFormat()->parse(style, text, pos, tzTimeType);
	//    .restart local v37    # "tz":Landroid/icu/util/TimeZone;
	if ( !(tz) )  
		goto label_cond_650;
	cal->setTimeZone(tz);
	return pos->getIndex();
	// 7291    .line 3426
	// 7292    .end local v36    # "style":Landroid/icu/text/TimeZoneFormat$Style;
	// 7293    .end local v37    # "tz":Landroid/icu/util/TimeZone;
label_cond_645:
	if ( count != 0x5 )
		goto label_cond_64d;
	//    .restart local v36    # "style":Landroid/icu/text/TimeZoneFormat$Style;
	goto label_goto_629;
	// 7306    .end local v36    # "style":Landroid/icu/text/TimeZoneFormat$Style;
label_cond_64d:
	//    .restart local v36    # "style":Landroid/icu/text/TimeZoneFormat$Style;
	goto label_goto_629;
	// 7313    .line 3432
	// 7314    .restart local v37    # "tz":Landroid/icu/util/TimeZone;
label_cond_650:
	return (~start);
	// 7322    .line 3437
	// 7323    .end local v36    # "style":Landroid/icu/text/TimeZoneFormat$Style;
	// 7324    .end local v37    # "tz":Landroid/icu/util/TimeZone;
label_pswitch_654:
	if ( count >= 0x4 )
		goto label_cond_677;
	//    .restart local v36    # "style":Landroid/icu/text/TimeZoneFormat$Style;
label_goto_65b:
	tz = this->tzFormat()->parse(style, text, pos, tzTimeType);
	//    .restart local v37    # "tz":Landroid/icu/util/TimeZone;
	if ( !(tz) )  
		goto label_cond_67a;
	cal->setTimeZone(tz);
	return pos->getIndex();
	// 7369    .line 3437
	// 7370    .end local v36    # "style":Landroid/icu/text/TimeZoneFormat$Style;
	// 7371    .end local v37    # "tz":Landroid/icu/util/TimeZone;
label_cond_677:
	//    .restart local v36    # "style":Landroid/icu/text/TimeZoneFormat$Style;
	goto label_goto_65b;
	// 7378    .line 3443
	// 7379    .restart local v37    # "tz":Landroid/icu/util/TimeZone;
label_cond_67a:
	return (~start);
	// 7387    .line 3447
	// 7388    .end local v36    # "style":Landroid/icu/text/TimeZoneFormat$Style;
	// 7389    .end local v37    # "tz":Landroid/icu/util/TimeZone;
label_pswitch_67e:
	0x0;
	//    .local v36, "style":Landroid/icu/text/TimeZoneFormat$Style;
	// switch
	{
	auto item = ( count );
	if (item == 1) goto label_pswitch_6a1;
	if (item == 2) goto label_pswitch_6a4;
	if (item == 3) goto label_pswitch_6a7;
	}
	//    .local v36, "style":Landroid/icu/text/TimeZoneFormat$Style;
label_goto_685:
	tz = this->tzFormat()->parse(style, text, pos, tzTimeType);
	//    .restart local v37    # "tz":Landroid/icu/util/TimeZone;
	if ( !(tz) )  
		goto label_cond_6aa;
	cal->setTimeZone(tz);
	return pos->getIndex();
	// 7435    .line 3450
	// 7436    .end local v37    # "tz":Landroid/icu/util/TimeZone;
	// 7437    .local v36, "style":Landroid/icu/text/TimeZoneFormat$Style;
label_pswitch_6a1:
	//    .local v36, "style":Landroid/icu/text/TimeZoneFormat$Style;
	goto label_goto_685;
	// 7444    .line 3453
	// 7445    .local v36, "style":Landroid/icu/text/TimeZoneFormat$Style;
label_pswitch_6a4:
	//    .local v36, "style":Landroid/icu/text/TimeZoneFormat$Style;
	goto label_goto_685;
	// 7452    .line 3456
	// 7453    .local v36, "style":Landroid/icu/text/TimeZoneFormat$Style;
label_pswitch_6a7:
	//    .local v36, "style":Landroid/icu/text/TimeZoneFormat$Style;
	goto label_goto_685;
	// 7460    .line 3467
	// 7461    .restart local v37    # "tz":Landroid/icu/util/TimeZone;
label_cond_6aa:
	return (~start);
	// 7469    .line 3471
	// 7470    .end local v36    # "style":Landroid/icu/text/TimeZoneFormat$Style;
	// 7471    .end local v37    # "tz":Landroid/icu/util/TimeZone;
label_pswitch_6ae:
	if ( count >= 0x4 )
		goto label_cond_6d1;
	//    .restart local v36    # "style":Landroid/icu/text/TimeZoneFormat$Style;
label_goto_6b5:
	tz = this->tzFormat()->parse(style, text, pos, tzTimeType);
	//    .restart local v37    # "tz":Landroid/icu/util/TimeZone;
	if ( !(tz) )  
		goto label_cond_6d4;
	cal->setTimeZone(tz);
	return pos->getIndex();
	// 7516    .line 3471
	// 7517    .end local v36    # "style":Landroid/icu/text/TimeZoneFormat$Style;
	// 7518    .end local v37    # "tz":Landroid/icu/util/TimeZone;
label_cond_6d1:
	//    .restart local v36    # "style":Landroid/icu/text/TimeZoneFormat$Style;
	goto label_goto_6b5;
	// 7525    .line 3477
	// 7526    .restart local v37    # "tz":Landroid/icu/util/TimeZone;
label_cond_6d4:
	return (~start);
	// 7534    .line 3482
	// 7535    .end local v36    # "style":Landroid/icu/text/TimeZoneFormat$Style;
	// 7536    .end local v37    # "tz":Landroid/icu/util/TimeZone;
label_pswitch_6d8:
	// switch
	{
	auto item = ( count );
	if (item == 1) goto label_pswitch_6f9;
	if (item == 2) goto label_pswitch_6fc;
	if (item == 3) goto label_pswitch_6ff;
	if (item == 4) goto label_pswitch_702;
	}
	//    .restart local v36    # "style":Landroid/icu/text/TimeZoneFormat$Style;
label_goto_6dd:
	tz = this->tzFormat()->parse(style, text, pos, tzTimeType);
	//    .restart local v37    # "tz":Landroid/icu/util/TimeZone;
	if ( !(tz) )  
		goto label_cond_705;
	cal->setTimeZone(tz);
	return pos->getIndex();
	// 7578    .line 3484
	// 7579    .end local v36    # "style":Landroid/icu/text/TimeZoneFormat$Style;
	// 7580    .end local v37    # "tz":Landroid/icu/util/TimeZone;
label_pswitch_6f9:
	//    .restart local v36    # "style":Landroid/icu/text/TimeZoneFormat$Style;
	goto label_goto_6dd;
	// 7587    .line 3487
	// 7588    .end local v36    # "style":Landroid/icu/text/TimeZoneFormat$Style;
label_pswitch_6fc:
	//    .restart local v36    # "style":Landroid/icu/text/TimeZoneFormat$Style;
	goto label_goto_6dd;
	// 7595    .line 3490
	// 7596    .end local v36    # "style":Landroid/icu/text/TimeZoneFormat$Style;
label_pswitch_6ff:
	//    .restart local v36    # "style":Landroid/icu/text/TimeZoneFormat$Style;
	goto label_goto_6dd;
	// 7603    .line 3493
	// 7604    .end local v36    # "style":Landroid/icu/text/TimeZoneFormat$Style;
label_pswitch_702:
	//    .restart local v36    # "style":Landroid/icu/text/TimeZoneFormat$Style;
	goto label_goto_6dd;
	// 7611    .line 3504
	// 7612    .restart local v37    # "tz":Landroid/icu/util/TimeZone;
label_cond_705:
	return (~start);
	// 7620    .line 3509
	// 7621    .end local v36    # "style":Landroid/icu/text/TimeZoneFormat$Style;
	// 7622    .end local v37    # "tz":Landroid/icu/util/TimeZone;
label_pswitch_709:
	// switch
	{
	auto item = ( count );
	if (item == 1) goto label_pswitch_72a;
	if (item == 2) goto label_pswitch_72d;
	if (item == 3) goto label_pswitch_730;
	if (item == 4) goto label_pswitch_733;
	}
	//    .restart local v36    # "style":Landroid/icu/text/TimeZoneFormat$Style;
label_goto_70e:
	tz = this->tzFormat()->parse(style, text, pos, tzTimeType);
	//    .restart local v37    # "tz":Landroid/icu/util/TimeZone;
	if ( !(tz) )  
		goto label_cond_736;
	cal->setTimeZone(tz);
	return pos->getIndex();
	// 7664    .line 3511
	// 7665    .end local v36    # "style":Landroid/icu/text/TimeZoneFormat$Style;
	// 7666    .end local v37    # "tz":Landroid/icu/util/TimeZone;
label_pswitch_72a:
	//    .restart local v36    # "style":Landroid/icu/text/TimeZoneFormat$Style;
	goto label_goto_70e;
	// 7673    .line 3514
	// 7674    .end local v36    # "style":Landroid/icu/text/TimeZoneFormat$Style;
label_pswitch_72d:
	//    .restart local v36    # "style":Landroid/icu/text/TimeZoneFormat$Style;
	goto label_goto_70e;
	// 7681    .line 3517
	// 7682    .end local v36    # "style":Landroid/icu/text/TimeZoneFormat$Style;
label_pswitch_730:
	//    .restart local v36    # "style":Landroid/icu/text/TimeZoneFormat$Style;
	goto label_goto_70e;
	// 7689    .line 3520
	// 7690    .end local v36    # "style":Landroid/icu/text/TimeZoneFormat$Style;
label_pswitch_733:
	//    .restart local v36    # "style":Landroid/icu/text/TimeZoneFormat$Style;
	goto label_goto_70e;
	// 7697    .line 3531
	// 7698    .restart local v37    # "tz":Landroid/icu/util/TimeZone;
label_cond_736:
	return (~start);
	// 7706    .line 3534
	// 7707    .end local v36    # "style":Landroid/icu/text/TimeZoneFormat$Style;
	// 7708    .end local v37    # "tz":Landroid/icu/util/TimeZone;
label_pswitch_73a:
	if ( count <= 0x2 )
		goto label_cond_74b;
	if ( !(number) )  
		goto label_cond_75a;
	if ( !(this->getBooleanAttribute(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_ALLOW_NUMERIC)) )  
		goto label_cond_75a;
label_cond_74b:
	cal->set(0x2, ( ( value + -0x1) * 0x3));
	return pos->getIndex();
	// 7747    .line 3545
label_cond_75a:
	newStart = 0x0;
	//    .restart local v31    # "newStart":I
	if ( this->getBooleanAttribute(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_MULTIPLE_PATTERNS_FOR_MATCH) )     
		goto label_cond_76b;
	if ( count != 0x4 )
		goto label_cond_781;
label_cond_76b:
	newStart = this->matchQuarterString(text, start, 0x2, this->formatData->quarters, cal);
	if ( newStart <= 0 )
		goto label_cond_781;
	return newStart;
	// 7796    .line 3552
label_cond_781:
	if ( this->getBooleanAttribute(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_MULTIPLE_PATTERNS_FOR_MATCH) )     
		goto label_cond_790;
	if ( count != 0x3 )
		goto label_cond_7a4;
label_cond_790:
	return this->matchQuarterString(text, start, 0x2, this->formatData->shortQuarters, cal);
	// 7839    .line 3556
label_cond_7a4:
	return newStart;
	// 7843    .line 3560
	// 7844    .end local v31    # "newStart":I
label_pswitch_7a5:
	if ( count <= 0x2 )
		goto label_cond_7b6;
	if ( !(number) )  
		goto label_cond_7c5;
	if ( !(this->getBooleanAttribute(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_ALLOW_NUMERIC)) )  
		goto label_cond_7c5;
label_cond_7b6:
	cal->set(0x2, ( ( value + -0x1) * 0x3));
	return pos->getIndex();
	// 7883    .line 3571
label_cond_7c5:
	newStart = 0x0;
	//    .restart local v31    # "newStart":I
	if ( this->getBooleanAttribute(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_MULTIPLE_PATTERNS_FOR_MATCH) )     
		goto label_cond_7d6;
	if ( count != 0x4 )
		goto label_cond_7ec;
label_cond_7d6:
	newStart = this->matchQuarterString(text, start, 0x2, this->formatData->standaloneQuarters, cal);
	if ( newStart <= 0 )
		goto label_cond_7ec;
	return newStart;
	// 7932    .line 3578
label_cond_7ec:
	if ( this->getBooleanAttribute(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_MULTIPLE_PATTERNS_FOR_MATCH) )     
		goto label_cond_7fb;
	if ( count != 0x3 )
		goto label_cond_80f;
label_cond_7fb:
	return this->matchQuarterString(text, start, 0x2, this->formatData->standaloneShortQuarters, cal);
	// 7975    .line 3582
label_cond_80f:
	return newStart;
	// 7979    .line 3589
	// 7980    .end local v31    # "newStart":I
label_pswitch_810:
	var888 = data(0x3);
	//    .local v26, "data":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
	data->add(this->formatData->getTimeSeparatorString());
	if ( this->formatData->getTimeSeparatorString()->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>(":"))) )     
		goto label_cond_83e;
	data->add(std::make_shared<java::lang::String>(std::make_shared<char[]>(":")));
label_cond_83e:
	if ( !(this->getBooleanAttribute(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_PARTIAL_LITERAL_MATCH)) )  
		goto label_cond_863;
	if ( !(( this->formatData->getTimeSeparatorString()->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("."))) ^ 0x1)) )  
		goto label_cond_863;
	data->add(std::make_shared<java::lang::String>(std::make_shared<char[]>(".")));
label_cond_863:
	cVar16 = data->toArray(std::make_shared<std::vector<std::vector<java::lang::String>>>(0x0));
	cVar16->checkCast("std::vector<java::lang::String>");
	return this->matchString(text, start, -0x1, cVar16, cal);
	// 8097    .line 3608
	// 8098    .end local v26    # "data":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
label_pswitch_87c:
	ampmStart = this->subParse(text, start, 0x61, count, obeyCount, allowNegative, ambiguousYear, cal, numericLeapMonthFormatter, tzTimeType, dayPeriod);
	//    .local v23, "ampmStart":I
	if ( ampmStart <= 0 )
		goto label_cond_89b;
	return ampmStart;
	// 8135    .line 3614
label_cond_89b:
	newStart = 0x0;
	//    .restart local v31    # "newStart":I
	if ( this->getBooleanAttribute(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_MULTIPLE_PATTERNS_FOR_MATCH) )     
		goto label_cond_8ac;
	if ( count != 0x3 )
		goto label_cond_8c2;
label_cond_8ac:
	newStart = this->matchDayPeriodString(text, start, this->formatData->abbreviatedDayPeriods, 0x2, dayPeriod);
	if ( newStart <= 0 )
		goto label_cond_8c2;
	return newStart;
	// 8185    .line 3621
label_cond_8c2:
	if ( this->getBooleanAttribute(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_MULTIPLE_PATTERNS_FOR_MATCH) )     
		goto label_cond_8d1;
	if ( count != 0x4 )
		goto label_cond_8e7;
label_cond_8d1:
	newStart = this->matchDayPeriodString(text, start, this->formatData->wideDayPeriods, 0x2, dayPeriod);
	if ( newStart <= 0 )
		goto label_cond_8e7;
	return newStart;
	// 8231    .line 3627
label_cond_8e7:
	if ( this->getBooleanAttribute(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_MULTIPLE_PATTERNS_FOR_MATCH) )     
		goto label_cond_8f6;
	if ( count != 0x4 )
		goto label_cond_90c;
label_cond_8f6:
	newStart = this->matchDayPeriodString(text, start, this->formatData->narrowDayPeriods, 0x2, dayPeriod);
	if ( newStart <= 0 )
		goto label_cond_90c;
	return newStart;
	// 8277    .line 3634
label_cond_90c:
	return newStart;
	// 8281    .line 3640
	// 8282    .end local v23    # "ampmStart":I
	// 8283    .end local v31    # "newStart":I
label_pswitch_90d:
	newStart = 0x0;
	//    .restart local v31    # "newStart":I
	if ( this->getBooleanAttribute(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_MULTIPLE_PATTERNS_FOR_MATCH) )     
		goto label_cond_91e;
	if ( count != 0x3 )
		goto label_cond_93a;
label_cond_91e:
	newStart = this->matchDayPeriodString(text, start, this->formatData->abbreviatedDayPeriods, this->formatData->abbreviatedDayPeriods->size(), dayPeriod);
	if ( newStart <= 0 )
		goto label_cond_93a;
	return newStart;
	// 8340    .line 3648
label_cond_93a:
	if ( this->getBooleanAttribute(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_MULTIPLE_PATTERNS_FOR_MATCH) )     
		goto label_cond_949;
	if ( count != 0x4 )
		goto label_cond_965;
label_cond_949:
	newStart = this->matchDayPeriodString(text, start, this->formatData->wideDayPeriods, this->formatData->wideDayPeriods->size(), dayPeriod);
	if ( newStart <= 0 )
		goto label_cond_965;
	return newStart;
	// 8393    .line 3655
label_cond_965:
	if ( this->getBooleanAttribute(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_MULTIPLE_PATTERNS_FOR_MATCH) )     
		goto label_cond_974;
	if ( count != 0x4 )
		goto label_cond_990;
label_cond_974:
	newStart = this->matchDayPeriodString(text, start, this->formatData->narrowDayPeriods, this->formatData->narrowDayPeriods->size(), dayPeriod);
	if ( newStart <= 0 )
		goto label_cond_990;
	return newStart;
	// 8446    .line 3663
label_cond_990:
	return newStart;
	// 8450    .end local v31    # "newStart":I
label_cond_991:
	number = this->parseInt(text, count, pos, allowNegative, currentNumberFormat);
	//    .restart local v32    # "number":Ljava/lang/Number;
label_goto_99d:
	if ( !(number) )  
		goto label_cond_9ca;
	if ( patternCharIndex == 0x22 )
		goto label_cond_9c0;
	cal->set(field, number->intValue());
label_goto_9b0:
	return pos->getIndex();
	// 8496    .line 3686
	// 8497    .end local v32    # "number":Ljava/lang/Number;
label_cond_9b5:
	//    .restart local v32    # "number":Ljava/lang/Number;
	goto label_goto_99d;
	// 8512    .line 3692
label_cond_9c0:
	cal->setRelatedYear(number->intValue());
	goto label_goto_9b0;
	// 8524    .line 3696
label_cond_9ca:
	return (~start);
	// 8532    .line 3175
	// 8533    :pswitch_data_9ce
	// 8534    .packed-switch 0x0
	// 8535        :pswitch_155
	// 8536        :pswitch_1b8
	// 8537        :pswitch_2a9
	// 8538        :pswitch_109
	// 8539        :pswitch_3c3
	// 8540        :pswitch_109
	// 8541        :pswitch_109
	// 8542        :pswitch_109
	// 8543        :pswitch_3e1
	// 8544        :pswitch_431
	// 8545        :pswitch_109
	// 8546        :pswitch_109
	// 8547        :pswitch_109
	// 8548        :pswitch_109
	// 8549        :pswitch_576
	// 8550        :pswitch_5da
	// 8551        :pswitch_109
	// 8552        :pswitch_5f8
	// 8553        :pswitch_1b8
	// 8554        :pswitch_412
	// 8555        :pswitch_109
	// 8556        :pswitch_109
	// 8557        :pswitch_109
	// 8558        :pswitch_622
	// 8559        :pswitch_654
	// 8560        :pswitch_4dc
	// 8561        :pswitch_2a9
	// 8562        :pswitch_73a
	// 8563        :pswitch_7a5
	// 8564        :pswitch_67e
	// 8565        :pswitch_25a
	// 8566        :pswitch_6ae
	// 8567        :pswitch_6d8
	// 8568        :pswitch_709
	// 8569        :pswitch_109
	// 8570        :pswitch_87c
	// 8571        :pswitch_90d
	// 8572        :pswitch_810
	// 8573    .end packed-switch
	// 8575    .line 3448
	// 8576    :pswitch_data_a1e
	// 8577    .packed-switch 0x1
	// 8578        :pswitch_6a1
	// 8579        :pswitch_6a4
	// 8580        :pswitch_6a7
	// 8581    .end packed-switch
	// 8583    .line 3482
	// 8584    :pswitch_data_a28
	// 8585    .packed-switch 0x1
	// 8586        :pswitch_6f9
	// 8587        :pswitch_6fc
	// 8588        :pswitch_6ff
	// 8589        :pswitch_702
	// 8590    .end packed-switch
	// 8592    .line 3509
	// 8593    :pswitch_data_a34
	// 8594    .packed-switch 0x1
	// 8595        :pswitch_72a
	// 8596        :pswitch_72d
	// 8597        :pswitch_730
	// 8598        :pswitch_733
	// 8599    .end packed-switch

}
// .method private translatePattern(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::SimpleDateFormat::translatePattern(std::shared_ptr<java::lang::String> pat,std::shared_ptr<java::lang::String> from,std::shared_ptr<java::lang::String> to)
{
	
	int cVar0;
	std::shared_ptr<java::lang::StringBuilder> result;
	int inQuote;
	int i;
	char c;
	int ci;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	
	//    .param p1, "pat"    # Ljava/lang/String;
	//    .param p2, "from"    # Ljava/lang/String;
	//    .param p3, "to"    # Ljava/lang/String;
	cVar0 = 0x27;
	result = std::make_shared<java::lang::StringBuilder>();
	//    .local v4, "result":Ljava/lang/StringBuilder;
	inQuote = 0x0;
	//    .local v3, "inQuote":Z
	i = 0x0;
	//    .local v2, "i":I
label_goto_9:
	if ( i >= pat->length() )
		goto label_cond_34;
	c = pat->charAt(i);
	//    .local v0, "c":C
	if ( !(inQuote) )  
		goto label_cond_1e;
	if ( c != cVar0 )
		goto label_cond_18;
	inQuote = 0x0;
label_cond_18:
label_goto_18:
	result->append(c);
	i = ( i + 0x1);
	goto label_goto_9;
	// 8657    .line 3789
label_cond_1e:
	if ( c != cVar0 )
		goto label_cond_22;
	inQuote = 0x1;
	goto label_goto_18;
	// 8666    .line 3791
label_cond_22:
	if ( !(android::icu::text::SimpleDateFormat::isSyntaxChar(c)) )  
		goto label_cond_18;
	ci = from->indexOf(c);
	//    .local v1, "ci":I
	if ( ci == -0x1 )
		goto label_cond_18;
	c = to->charAt(ci);
	goto label_goto_18;
	// 8692    .line 3802
	// 8693    .end local v0    # "c":C
	// 8694    .end local v1    # "ci":I
label_cond_34:
	if ( !(inQuote) )  
		goto label_cond_3f;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unfinished quote in pattern")));
	// throw
	throw cVar1;
	// 8707    .line 3805
label_cond_3f:
	return result->toString();

}
// .method private tzFormat()Landroid/icu/text/TimeZoneFormat;
std::shared_ptr<android::icu::text::TimeZoneFormat> android::icu::text::SimpleDateFormat::tzFormat()
{
	
	if ( this->tzFormat )     
		goto label_cond_8;
	this->initializeTimeZoneFormat(0x0);
label_cond_8:
	return this->tzFormat;

}
// .method private writeObject(Ljava/io/ObjectOutputStream;)V
void android::icu::text::SimpleDateFormat::writeObject(std::shared_ptr<java::io::ObjectOutputStream> stream)
{
	
	//    .param p1, "stream"    # Ljava/io/ObjectOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 8741        value = {
	// 8742            Ljava/io/IOException;
	// 8743        }
	// 8744    .end annotation
	if ( this->defaultCenturyStart )     
		goto label_cond_9;
	this->initializeDefaultCenturyStart(this->defaultCenturyBase);
label_cond_9:
	this->initializeTimeZoneFormat(0x0);
	stream->defaultWriteObject();
	stream->writeInt(this->getContext(android::icu::text::DisplayContext_S_Type::CAPITALIZATION)->value());
	return;

}
// .method public applyLocalizedPattern(Ljava/lang/String;)V
void android::icu::text::SimpleDateFormat::applyLocalizedPattern(std::shared_ptr<java::lang::String> pat)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	
	//    .param p1, "pat"    # Ljava/lang/String;
	cVar0 = 0x0;
	this->pattern = this->translatePattern(pat, this->formatData->localPatternChars, std::make_shared<java::lang::String>(std::make_shared<char[]>("GyMdkHmsSEDFwWahKzYeugAZvcLQqVUOXxrbB")));
	this->setLocale(cVar0, cVar0);
	return;

}
// .method public applyPattern(Ljava/lang/String;)V
void android::icu::text::SimpleDateFormat::applyPattern(std::shared_ptr<java::lang::String> pat)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	
	//    .param p1, "pat"    # Ljava/lang/String;
	cVar0 = 0x0;
	this->pattern = pat;
	this->parsePattern();
	this->setLocale(cVar0, cVar0);
	this->patternItems = cVar0;
	return;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::SimpleDateFormat::clone()
{
	
	std::shared_ptr<android::icu::text::SimpleDateFormat> other;
	std::shared_ptr<android::icu::text::DateFormatSymbols> cVar0;
	
	other = this->clone();
	other->checkCast("android::icu::text::SimpleDateFormat");
	//    .local v0, "other":Landroid/icu/text/SimpleDateFormat;
	cVar0 = this->formatData->clone();
	cVar0->checkCast("android::icu::text::DateFormatSymbols");
	other->formatData = cVar0;
	if ( !(this->decimalBuf) )  
		goto label_cond_1a;
	other->decimalBuf = std::make_shared<std::vector<char[]>>(0xa);
label_cond_1a:
	return other;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::SimpleDateFormat::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar1;
	std::shared_ptr<android::icu::text::SimpleDateFormat> that;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( this->equals(obj) )     
		goto label_cond_8;
	return cVar1;
label_cond_8:
	that = obj;
	that->checkCast("android::icu::text::SimpleDateFormat");
	//    .local v0, "that":Landroid/icu/text/SimpleDateFormat;
	if ( !(this->pattern->equals(that->pattern)) )  
		goto label_cond_1d;
	cVar1 = this->formatData->equals(that->formatData);
label_cond_1d:
	return cVar1;

}
// .method public format(Landroid/icu/util/Calendar;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::SimpleDateFormat::format(std::shared_ptr<android::icu::util::Calendar> cVar0,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos)
{
	
	std::shared_ptr<android::icu::util::TimeZone> backupTZ;
	std::shared_ptr<android::icu::util::Calendar> cVar0;
	
	//    .param p1, "cal"    # Landroid/icu/util/Calendar;
	//    .param p2, "toAppendTo"    # Ljava/lang/StringBuffer;
	//    .param p3, "pos"    # Ljava/text/FieldPosition;
	//    .local v6, "backupTZ":Landroid/icu/util/TimeZone;
	if ( cVar0 == this->calendar )
		goto label_cond_32;
	if ( !(( cVar0->getType()->equals(this->calendar->getType()) ^ 0x1)) )  
		goto label_cond_32;
	this->calendar->setTimeInMillis(cVar0->getTimeInMillis());
	backupTZ = this->calendar->getTimeZone();
	//    .local v6, "backupTZ":Landroid/icu/util/TimeZone;
	this->calendar->setTimeZone(cVar0->getTimeZone());
	cVar0 = this->calendar;
	//    .end local v6    # "backupTZ":Landroid/icu/util/TimeZone;
label_cond_32:
	//    .local v7, "result":Ljava/lang/StringBuffer;
	if ( !(0x0) )  
		goto label_cond_47;
	this->calendar->setTimeZone(backupTZ);
label_cond_47:
	return this->format(cVar0, this->getContext(android::icu::text::DisplayContext_S_Type::CAPITALIZATION), toAppendTo, pos, 0x0);

}
// .method public formatToCharacterIterator(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;
std::shared_ptr<java::text::AttributedCharacterIterator> android::icu::text::SimpleDateFormat::formatToCharacterIterator(std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<android::icu::util::Calendar> cal;
	std::shared_ptr<java::lang::StringBuffer> toAppendTo;
	std::shared_ptr<java::text::FieldPosition> pos;
	std::shared_ptr<java::util::ArrayList> attributes;
	std::shared_ptr<java::text::AttributedString> as;
	int i;
	std::shared_ptr<java::text::FieldPosition> fp;
	std::shared_ptr<java::text::AttributedCharacterIterator_S_Attribute> attribute;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .local v1, "cal":Landroid/icu/util/Calendar;
	if ( !(obj->instanceOf("android::icu::util::Calendar")) )  
		goto label_cond_4b;
	cal = obj;
	cal->checkCast("android::icu::util::Calendar");
	//    .end local p1    # "obj":Ljava/lang/Object;
label_goto_9:
	toAppendTo = std::make_shared<java::lang::StringBuffer>();
	//    .local v3, "toAppendTo":Ljava/lang/StringBuffer;
	pos = std::make_shared<java::text::FieldPosition>(0x0);
	//    .local v4, "pos":Ljava/text/FieldPosition;
	attributes = std::make_shared<java::util::ArrayList>();
	//    .local v5, "attributes":Ljava/util/List;, "Ljava/util/List<Ljava/text/FieldPosition;>;"
	this->format(this->calendar, this->getContext(android::icu::text::DisplayContext_S_Type::CAPITALIZATION), toAppendTo, pos, attributes);
	as = std::make_shared<java::text::AttributedString>(toAppendTo->toString());
	//    .local v6, "as":Ljava/text/AttributedString;
	i = 0x0;
	//    .local v9, "i":I
label_goto_2d:
	if ( i >= attributes->size() )
		goto label_cond_70;
	fp = attributes->get(i);
	fp->checkCast("java::text::FieldPosition");
	//    .local v8, "fp":Ljava/text/FieldPosition;
	attribute = fp->getFieldAttribute();
	//    .local v7, "attribute":Ljava/text/Format$Field;
	as->addAttribute(attribute, attribute, fp->getBeginIndex(), fp->getEndIndex());
	i = ( i + 0x1);
	goto label_goto_2d;
	// 9128    .line 4018
	// 9129    .end local v3    # "toAppendTo":Ljava/lang/StringBuffer;
	// 9130    .end local v4    # "pos":Ljava/text/FieldPosition;
	// 9131    .end local v5    # "attributes":Ljava/util/List;, "Ljava/util/List<Ljava/text/FieldPosition;>;"
	// 9132    .end local v6    # "as":Ljava/text/AttributedString;
	// 9133    .end local v7    # "attribute":Ljava/text/Format$Field;
	// 9134    .end local v8    # "fp":Ljava/text/FieldPosition;
	// 9135    .end local v9    # "i":I
	// 9136    .restart local p1    # "obj":Ljava/lang/Object;
label_cond_4b:
	if ( !(obj->instanceOf("java::util::Date")) )  
		goto label_cond_57;
	obj->checkCast("java::util::Date");
	//    .end local p1    # "obj":Ljava/lang/Object;
	this->calendar->setTime(obj);
	goto label_goto_9;
	// 9152    .line 4020
	// 9153    .restart local p1    # "obj":Ljava/lang/Object;
label_cond_57:
	if ( !(obj->instanceOf("java::lang::Number")) )  
		goto label_cond_67;
	obj->checkCast("java::lang::Number");
	//    .end local p1    # "obj":Ljava/lang/Object;
	this->calendar->setTimeInMillis(obj->longValue());
	goto label_goto_9;
	// 9173    .line 4023
	// 9174    .restart local p1    # "obj":Ljava/lang/Object;
label_cond_67:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Cannot format given Object as a Date")));
	// throw
	throw cVar0;
	// 9184    .line 4039
	// 9185    .end local p1    # "obj":Ljava/lang/Object;
	// 9186    .restart local v3    # "toAppendTo":Ljava/lang/StringBuffer;
	// 9187    .restart local v4    # "pos":Ljava/text/FieldPosition;
	// 9188    .restart local v5    # "attributes":Ljava/util/List;, "Ljava/util/List<Ljava/text/FieldPosition;>;"
	// 9189    .restart local v6    # "as":Ljava/text/AttributedString;
	// 9190    .restart local v9    # "i":I
label_cond_70:
	return as->getIterator();

}
// .method public get2DigitYearStart()Ljava/util/Date;
std::shared_ptr<java::util::Date> android::icu::text::SimpleDateFormat::get2DigitYearStart()
{
	
	return this->getDefaultCenturyStart();

}
// .method public getDateFormatSymbols()Landroid/icu/text/DateFormatSymbols;
std::shared_ptr<android::icu::text::DateFormatSymbols> android::icu::text::SimpleDateFormat::getDateFormatSymbols()
{
	
	std::shared_ptr<android::icu::text::DateFormatSymbols> cVar0;
	
	cVar0 = this->formatData->clone();
	cVar0->checkCast("android::icu::text::DateFormatSymbols");
	return cVar0;

}
// .method getLocale()Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::text::SimpleDateFormat::getLocale()
{
	
	return this->locale;

}
// .method public getNumberFormat(C)Landroid/icu/text/NumberFormat;
std::shared_ptr<android::icu::text::NumberFormat> android::icu::text::SimpleDateFormat::getNumberFormat(char field)
{
	
	std::shared_ptr<java::lang::Object> ovrField;
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<android::icu::text::NumberFormat> nf;
	
	//    .param p1, "field"    # C
	ovrField = java::lang::Character::valueOf(field);
	//    .local v2, "ovrField":Ljava/lang/Character;
	if ( !(this->overrideMap) )  
		goto label_cond_25;
	if ( !(this->overrideMap->containsKey(ovrField)) )  
		goto label_cond_25;
	cVar0 = this->overrideMap->get(ovrField);
	cVar0->checkCast("java::lang::String");
	//    .local v1, "nsName":Ljava/lang/String;
	nf = this->numberFormatters->get(cVar0->toString());
	nf->checkCast("android::icu::text::NumberFormat");
	//    .local v0, "nf":Landroid/icu/text/NumberFormat;
	return nf;
	// 9288    .line 4414
	// 9289    .end local v0    # "nf":Landroid/icu/text/NumberFormat;
	// 9290    .end local v1    # "nsName":Ljava/lang/String;
label_cond_25:
	return this->numberFormat;

}
// .method protected getSymbols()Landroid/icu/text/DateFormatSymbols;
std::shared_ptr<android::icu::text::DateFormatSymbols> android::icu::text::SimpleDateFormat::getSymbols()
{
	
	return this->formatData;

}
// .method public getTimeZoneFormat()Landroid/icu/text/TimeZoneFormat;
std::shared_ptr<android::icu::text::TimeZoneFormat> android::icu::text::SimpleDateFormat::getTimeZoneFormat()
{
	
	return this->tzFormat()->freeze();

}
// .method public hashCode()I
int android::icu::text::SimpleDateFormat::hashCode()
{
	
	return this->pattern->hashCode();

}
// .method public final intervalFormatByAlgorithm(Landroid/icu/util/Calendar;Landroid/icu/util/Calendar;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::SimpleDateFormat::intervalFormatByAlgorithm(std::shared_ptr<android::icu::util::Calendar> fromCalendar,std::shared_ptr<android::icu::util::Calendar> toCalendar,std::shared_ptr<java::lang::StringBuffer> appendTo,std::shared_ptr<java::text::FieldPosition> pos)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	auto items;
	int diffBegin;
	int diffEnd;
	int i;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	int highestLevel;
	std::shared_ptr<android::icu::text::SimpleDateFormat_S_PatternItem> item;
	char ch;
	int patternCharIndex;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar4;
	std::shared_ptr<android::icu::text::DisplayContext> capSetting;
	std::shared_ptr<java::lang::String> cVar5;
	std::shared_ptr<java::lang::String> cVar6;
	
	//    .param p1, "fromCalendar"    # Landroid/icu/util/Calendar;
	//    .param p2, "toCalendar"    # Landroid/icu/util/Calendar;
	//    .param p3, "appendTo"    # Ljava/lang/StringBuffer;
	//    .param p4, "pos"    # Ljava/text/FieldPosition;
	//    .annotation system Ldalvik/annotation/Throws;
	// 9344        value = {
	// 9345            Ljava/lang/IllegalArgumentException;
	// 9346        }
	// 9347    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 9350    .end annotation
	if ( fromCalendar->isEquivalentTo(toCalendar) )     
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("can not format on two different calendars")));
	// throw
	throw cVar0;
	// 9369    .line 4150
label_cond_f:
	items = this->getPatternItems();
	//    .local v19, "items":[Ljava/lang/Object;
	diffBegin = -0x1;
	//    .local v14, "diffBegin":I
	diffEnd = -0x1;
	//    .local v15, "diffEnd":I
	i = 0x0;
	//    .local v9, "i":I
label_goto_16:
	try {
	//label_try_start_16:
	if ( i >= items->size() )
		goto label_cond_2a;
	if ( !(this->diffCalFieldValue(fromCalendar, toCalendar, items, i)) )  
		goto label_cond_3a;
	diffBegin = i;
label_cond_2a:
	if ( diffBegin != -0x1 )
		goto label_cond_3d;
	return this->format(fromCalendar, appendTo, pos);
	// 9435    .line 4157
label_cond_3a:
	i = ( i + 0x1);
	goto label_goto_16;
	// 9441    .line 4170
label_cond_3d:
	i = ( items->size() + -0x1);
label_goto_42:
	if ( i <  diffBegin )
		goto label_cond_53;
	//label_try_end_4f:
	}
	catch (java::lang::IllegalArgumentException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_7e;
	}
	//    .catch Ljava/lang/IllegalArgumentException; {:try_start_16 .. :try_end_4f} :catch_7e
	if ( !(this->diffCalFieldValue(fromCalendar, toCalendar, items, i)) )  
		goto label_cond_7b;
	diffEnd = i;
label_cond_53:
	if ( diffBegin )     
		goto label_cond_89;
	if ( diffEnd != ( items->size() + -0x1) )
		goto label_cond_89;
	this->format(fromCalendar, appendTo, pos);
	appendTo->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" \u2013 ")));
	this->format(toCalendar, appendTo, pos);
	return appendTo;
	// 9516    .line 4170
label_cond_7b:
	i = ( i + -0x1);
	goto label_goto_42;
	// 9522    .line 4176
label_catch_7e:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v16, "e":Ljava/lang/IllegalArgumentException;
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(getCatchExcetionFromList->toString());
	// throw
	throw cVar1;
	// 9538    .line 4190
	// 9539    .end local v16    # "e":Ljava/lang/IllegalArgumentException;
label_cond_89:
	highestLevel = 0x3e8;
	//    .local v17, "highestLevel":I
	i = diffBegin;
label_goto_8c:
	if ( i >  diffEnd )
		goto label_cond_e0;
	if ( !(items[i]->instanceOf("java::lang::String")) )  
		goto label_cond_97;
label_cond_94:
label_goto_94:
	i = ( i + 0x1);
	goto label_goto_8c;
	// 9564    .line 4195
label_cond_97:
	item = items[i];
	item->checkCast("android::icu::text::SimpleDateFormat_S_PatternItem");
	//    .local v18, "item":Landroid/icu/text/SimpleDateFormat$PatternItem;
	ch = item->type;
	//    .local v13, "ch":C
	patternCharIndex = android::icu::text::SimpleDateFormat::getIndexFromChar(ch);
	//    .local v20, "patternCharIndex":I
	if ( patternCharIndex != -0x1 )
		goto label_cond_d7;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal pattern character \'")))->append(ch)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\' in \")))->append(this->pattern)->append(0x22)->toString());
	// throw
	throw cVar2;
	// 9641    .line 4204
label_cond_d7:
	if ( patternCharIndex >= highestLevel )
		goto label_cond_94;
	highestLevel = patternCharIndex;
	goto label_goto_94;
	// 9654    .line 4213
	// 9655    .end local v13    # "ch":C
	// 9656    .end local v18    # "item":Landroid/icu/text/SimpleDateFormat$PatternItem;
	// 9657    .end local v20    # "patternCharIndex":I
label_cond_e0:
	i = 0x0;
label_goto_e1:
	if ( i >= diffBegin )
		goto label_cond_f0;
	try {
	//label_try_start_e3:
	if ( !(this->lowerLevel(items, i, highestLevel)) )  
		goto label_cond_12c;
	diffBegin = i;
label_cond_f0:
	i = ( items->size() + -0x1);
label_goto_f5:
	if ( i <= diffEnd )
		goto label_cond_104;
	//label_try_end_100:
	}
	catch (java::lang::IllegalArgumentException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_132;
	}
	//    .catch Ljava/lang/IllegalArgumentException; {:try_start_e3 .. :try_end_100} :catch_132
	if ( !(this->lowerLevel(items, i, highestLevel)) )  
		goto label_cond_12f;
	diffEnd = i;
label_cond_104:
	if ( diffBegin )     
		goto label_cond_13d;
	if ( diffEnd != ( items->size() + -0x1) )
		goto label_cond_13d;
	this->format(fromCalendar, appendTo, pos);
	appendTo->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" \u2013 ")));
	this->format(toCalendar, appendTo, pos);
	return appendTo;
	// 9754    .line 4213
label_cond_12c:
	i = ( i + 0x1);
	goto label_goto_e1;
	// 9760    .line 4221
label_cond_12f:
	i = ( i + -0x1);
	goto label_goto_f5;
	// 9766    .line 4227
label_catch_132:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v16    # "e":Ljava/lang/IllegalArgumentException;
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar4 = std::make_shared<java::lang::IllegalArgumentException>(getCatchExcetionFromList->toString());
	// throw
	throw cVar4;
	// 9782    .line 4243
	// 9783    .end local v16    # "e":Ljava/lang/IllegalArgumentException;
label_cond_13d:
	pos->setBeginIndex(0x0);
	pos->setEndIndex(0x0);
	capSetting = this->getContext(android::icu::text::DisplayContext_S_Type::CAPITALIZATION);
	//    .local v10, "capSetting":Landroid/icu/text/DisplayContext;
	i = 0x0;
label_goto_152:
	if ( i >  diffEnd )
		goto label_cond_1a4;
	if ( !(items[i]->instanceOf("java::lang::String")) )  
		goto label_cond_166;
	cVar5 = items[i];
	cVar5->checkCast("java::lang::String");
	appendTo->append(cVar5);
label_goto_163:
	i = ( i + 0x1);
	goto label_goto_152;
	// 9836    .line 4252
label_cond_166:
	item = items[i];
	item->checkCast("android::icu::text::SimpleDateFormat_S_PatternItem");
	//    .restart local v18    # "item":Landroid/icu/text/SimpleDateFormat$PatternItem;
	if ( !(this->useFastFormat) )  
		goto label_cond_188;
	this->subFormat(appendTo, item->type, item->length, appendTo->length(), i, capSetting, pos, fromCalendar);
	goto label_goto_163;
	// 9875    .line 4257
label_cond_188:
	appendTo->append(this->subFormat(item->type, item->length, appendTo->length(), i, capSetting, pos, fromCalendar));
	goto label_goto_163;
	// 9905    .line 4263
	// 9906    .end local v18    # "item":Landroid/icu/text/SimpleDateFormat$PatternItem;
label_cond_1a4:
	appendTo->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" \u2013 ")));
	i = diffBegin;
label_goto_1ad:
	if ( i >= items->size() )
		goto label_cond_202;
	if ( !(items[i]->instanceOf("java::lang::String")) )  
		goto label_cond_1c4;
	cVar6 = items[i];
	cVar6->checkCast("java::lang::String");
	appendTo->append(cVar6);
label_goto_1c1:
	i = ( i + 0x1);
	goto label_goto_1ad;
	// 9946    .line 4270
label_cond_1c4:
	item = items[i];
	item->checkCast("android::icu::text::SimpleDateFormat_S_PatternItem");
	//    .restart local v18    # "item":Landroid/icu/text/SimpleDateFormat$PatternItem;
	if ( !(this->useFastFormat) )  
		goto label_cond_1e6;
	this->subFormat(appendTo, item->type, item->length, appendTo->length(), i, capSetting, pos, toCalendar);
	goto label_goto_1c1;
	// 9985    .line 4275
label_cond_1e6:
	appendTo->append(this->subFormat(item->type, item->length, appendTo->length(), i, capSetting, pos, toCalendar));
	goto label_goto_1c1;
	// 10015    .line 4280
	// 10016    .end local v18    # "item":Landroid/icu/text/SimpleDateFormat$PatternItem;
label_cond_202:
	return appendTo;

}
// .method isFieldUnitIgnored(I)Z
bool android::icu::text::SimpleDateFormat::isFieldUnitIgnored(int field)
{
	
	//    .param p1, "field"    # I
	return android::icu::text::SimpleDateFormat::isFieldUnitIgnored(this->pattern, field);

}
// .method protected matchQuarterString(Ljava/lang/String;II[Ljava/lang/String;Landroid/icu/util/Calendar;)I
int android::icu::text::SimpleDateFormat::matchQuarterString(std::shared_ptr<java::lang::String> text,int start,int field,std::shared_ptr<std::vector<java::lang::String>> data,std::shared_ptr<android::icu::util::Calendar> cal)
{
	
	int i;
	int bestMatchLength;
	int bestMatch;
	int length;
	int matchLength;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "start"    # I
	//    .param p3, "field"    # I
	//    .param p4, "data"    # [Ljava/lang/String;
	//    .param p5, "cal"    # Landroid/icu/util/Calendar;
	i = 0x0;
	//    .local v3, "i":I
	//    .local v2, "count":I
	bestMatchLength = 0x0;
	//    .local v1, "bestMatchLength":I
	bestMatch = -0x1;
	//    .local v0, "bestMatch":I
	0x0;
	//    .local v5, "matchLength":I
label_goto_5:
	if ( i >= data->size() )
		goto label_cond_1c;
	length = data[i]->length();
	//    .local v4, "length":I
	if ( length <= bestMatchLength )
		goto label_cond_19;
	matchLength = this->regionMatchesWithOptionalDot(text, start, data[i], length);
	if ( matchLength < 0 ) 
		goto label_cond_19;
	i;
	bestMatchLength = matchLength;
label_cond_19:
	i = ( i + 0x1);
	goto label_goto_5;
	// 10100    .line 2983
	// 10101    .end local v4    # "length":I
label_cond_1c:
	if ( bestMatch < 0 ) 
		goto label_cond_26;
	cal->set(field, ( bestMatch * 0x3));
	return (start + bestMatchLength);
	// 10115    .line 2988
label_cond_26:
	return (0 - start);

}
// .method protected matchString(Ljava/lang/String;II[Ljava/lang/String;Landroid/icu/util/Calendar;)I
int android::icu::text::SimpleDateFormat::matchString(std::shared_ptr<java::lang::String> text,int start,int field,std::shared_ptr<std::vector<java::lang::String>> data,std::shared_ptr<android::icu::util::Calendar> cal)
{
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "start"    # I
	//    .param p3, "field"    # I
	//    .param p4, "data"    # [Ljava/lang/String;
	//    .param p5, "cal"    # Landroid/icu/util/Calendar;
	return this->matchString(text, start, field, data, 0x0, cal);

}
// .method public parse(Ljava/lang/String;Landroid/icu/util/Calendar;Ljava/text/ParsePosition;)V
void android::icu::text::SimpleDateFormat::parse(std::shared_ptr<java::lang::String> text,std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<java::text::ParsePosition> parsePos)
{
	
	auto backupTZ;
	auto resultCal;
	std::shared_ptr<android::icu::util::Calendar> cVar0;
	int pos;
	int start;
	std::shared_ptr<android::icu::util::Output> dayPeriod;
	std::shared_ptr<android::icu::util::Output> tzTimeType;
	std::shared<std::vector<bool[]>> ambiguousYear;
	int numericFieldStart;
	std::shared_ptr<android::icu::text::MessageFormat> numericLeapMonthFormatter;
	auto items;
	int i;
	std::shared_ptr<android::icu::text::SimpleDateFormat_S_PatternItem> field;
	std::shared_ptr<android::icu::text::SimpleDateFormat_S_PatternItem> cVar1;
	int numericFieldLength;
	int s;
	std::shared_ptr<java::lang::String> patl;
	std::vector<std::any> tryCatchExcetionList;
	int plen;
	int idx;
	std::shared_ptr<bool[]> complete;
	std::shared_ptr<android::icu::text::SimpleDateFormat_S_PatternItem> lastItem;
	auto ruleSet;
	std::shared_ptr<java::lang::Object> cVar2;
	auto midPoint;
	int midPointHour;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_TimeType> tztype;
	std::shared_ptr<android::icu::util::Calendar> copy;
	std::shared_ptr<android::icu::util::TimeZone> tz;
	std::shared_ptr<android::icu::util::BasicTimeZone> cVar3;
	std::shared_ptr<android::icu::util::BasicTimeZone> btz;
	long long localMillis;
	std::shared_ptr<int[]> offsets;
	int resolvedSavings;
	long long time;
	auto beforeT;
	auto afterT;
	int beforeSav;
	int afterSav;
	std::shared_ptr<android::icu::util::TimeZoneTransition> beforeTrs;
	std::shared_ptr<android::icu::util::TimeZoneTransition> afterTrs;
	long long beforeT;
	int hourOfDay;
	std::shared_ptr<java::lang::AssertionError> cVar4;
	std::shared_ptr<java::lang::Object> cVar5;
	double hoursAheadMidPoint;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "cal"    # Landroid/icu/util/Calendar;
	//    .param p3, "parsePos"    # Ljava/text/ParsePosition;
	//    .local v37, "backupTZ":Landroid/icu/util/TimeZone;
	//    .local v70, "resultCal":Landroid/icu/util/Calendar;
	if ( cal == this->calendar )
		goto label_cond_48;
	if ( !(( cal->getType()->equals(this->calendar->getType()) ^ 0x1)) )  
		goto label_cond_48;
	this->calendar->setTimeInMillis(cal->getTimeInMillis());
	backupTZ = this->calendar->getTimeZone();
	//    .local v37, "backupTZ":Landroid/icu/util/TimeZone;
	this->calendar->setTimeZone(cal->getTimeZone());
	resultCal = cal;
	//    .local v70, "resultCal":Landroid/icu/util/Calendar;
	cVar0 = this->calendar;
	//    .end local v37    # "backupTZ":Landroid/icu/util/TimeZone;
	//    .end local v70    # "resultCal":Landroid/icu/util/Calendar;
label_cond_48:
	pos = parsePos->getIndex();
	//    .local v6, "pos":I
	if ( pos >= 0 )
		goto label_cond_55;
	parsePos->setErrorIndex(0x0);
	return;
	// 10264    .line 2339
label_cond_55:
	start = pos;
	//    .local v73, "start":I
	var44 = dayPeriod(0x0);
	//    .local v26, "dayPeriod":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Landroid/icu/impl/DayPeriodRules$DayPeriod;>;"
	tzTimeType = std::make_shared<android::icu::util::Output>(android::icu::text::TimeZoneFormat_S_TimeType::UNKNOWN);
	//    .local v14, "tzTimeType":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Landroid/icu/text/TimeZoneFormat$TimeType;>;"
	ambiguousYear = std::make_shared<std::vector<bool[]>>(0x1);
	ambiguousYear[0x0] = 0x0;
	//    .local v11, "ambiguousYear":[Z
	numericFieldStart = -0x1;
	//    .local v63, "numericFieldStart":I
	0x0;
	//    .local v62, "numericFieldLength":I
	0x0;
	//    .local v64, "numericStartPos":I
	0x0;
	//    .local v13, "numericLeapMonthFormatter":Landroid/icu/text/MessageFormat;
	if ( !(this->formatData->leapMonthPatterns) )  
		goto label_cond_98;
	if ( this->formatData->leapMonthPatterns->size() <  0x7 )
		goto label_cond_98;
	//    .end local v13    # "numericLeapMonthFormatter":Landroid/icu/text/MessageFormat;
	numericLeapMonthFormatter = std::make_shared<android::icu::text::MessageFormat>(this->formatData->leapMonthPatterns[0x6], this->locale);
label_cond_98:
	items = this->getPatternItems();
	//    .local v54, "items":[Ljava/lang/Object;
	i = 0x0;
	//    .local v52, "i":I
label_goto_9e:
	if ( i >= items->size() )
		goto label_cond_1ff;
	if ( !(items[i]->instanceOf("android::icu::text::SimpleDateFormat_S_PatternItem")) )  
		goto label_cond_1cd;
	field = items[i];
	field->checkCast("android::icu::text::SimpleDateFormat_S_PatternItem");
	//    .local v48, "field":Landroid/icu/text/SimpleDateFormat$PatternItem;
	if ( !(field->isNumeric) )  
		goto label_cond_dd;
	if ( numericFieldStart != -0x1 )
		goto label_cond_dd;
	if ( ( i + 0x1) >= items->size() )
		goto label_cond_dd;
	if ( !(items[( i + 0x1)]->instanceOf("android::icu::text::SimpleDateFormat_S_PatternItem")) )  
		goto label_cond_dd;
	cVar1 = items[( i + 0x1)];
	cVar1->checkCast("android::icu::text::SimpleDateFormat_S_PatternItem");
	if ( !(cVar1->isNumeric) )  
		goto label_cond_dd;
	numericFieldStart = i;
	numericFieldLength = field->length;
label_cond_dd:
	if ( numericFieldStart == -0x1 )
		goto label_cond_122;
	//    .local v8, "len":I
	if ( numericFieldStart != i )
		goto label_cond_ee;
label_cond_ee:
	pos = this->subParse(text, pos, field->type, field->length, 0x1, 0x0, ambiguousYear, cVar0, numericLeapMonthFormatter, tzTimeType);
	if ( pos >= 0 )
		goto label_cond_1af;
	if ( ( numericFieldLength + -0x1) )     
		goto label_cond_11c;
	parsePos->setIndex(start);
	parsePos->setErrorIndex(pos);
	if ( !(backupTZ) )  
		goto label_cond_11b;
	this->calendar->setTimeZone(backupTZ);
label_cond_11b:
	return;
	// 10531    .line 2412
label_cond_11c:
	i = numericFieldStart;
	pos = pos;
	goto label_goto_9e;
	// 10541    .line 2417
	// 10542    .end local v8    # "len":I
label_cond_122:
	if ( field->type == 0x6c )
		goto label_cond_1af;
	numericFieldStart = -0x1;
	s = pos;
	//    .local v72, "s":I
	pos = this->subParse(text, pos, field->type, field->length, 0x0, 0x1, ambiguousYear, cVar0, numericLeapMonthFormatter, tzTimeType, dayPeriod);
	if ( pos >= 0 )
		goto label_cond_1af;
	if ( pos != -0x7d00 )
		goto label_cond_1b3;
	pos = s;
	if ( ( i + 0x1) >= items->size() )
		goto label_cond_1af;
	0x0;
	//    .local v66, "patl":Ljava/lang/String;
	try {
	//label_try_start_163:
	patl = items[( i + 0x1)];
	//    .end local v66    # "patl":Ljava/lang/String;
	patl->checkCast("java::lang::String");
	//label_try_end_167:
	}
	catch (java::lang::ClassCastException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_18c;
	}
	//    .catch Ljava/lang/ClassCastException; {:try_start_163 .. :try_end_167} :catch_18c
	//    .local v66, "patl":Ljava/lang/String;
	if ( patl )     
		goto label_cond_16f;
	patl = items[( i + 0x1)];
	//    .end local v66    # "patl":Ljava/lang/String;
	patl->checkCast("java::lang::String");
	//    .restart local v66    # "patl":Ljava/lang/String;
label_cond_16f:
	plen = patl->length();
	//    .local v68, "plen":I
	idx = 0x0;
	//    .local v53, "idx":I
label_goto_175:
	if ( idx >= plen )
		goto label_cond_1a7;
	//    .local v67, "pch":C
	if ( !(android::icu::impl::PatternProps::isWhiteSpace(patl->charAt(idx))) )  
		goto label_cond_1a7;
	idx = ( idx + 0x1);
	goto label_goto_175;
	// 10685    .line 2436
	// 10686    .end local v53    # "idx":I
	// 10687    .end local v66    # "patl":Ljava/lang/String;
	// 10688    .end local v67    # "pch":C
	// 10689    .end local v68    # "plen":I
label_catch_18c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v42, "cce":Ljava/lang/ClassCastException;
	parsePos->setIndex(start);
	parsePos->setErrorIndex(s);
	if ( !(backupTZ) )  
		goto label_cond_1a6;
	this->calendar->setTimeZone(backupTZ);
label_cond_1a6:
	return;
	// 10724    .line 2463
	// 10725    .end local v42    # "cce":Ljava/lang/ClassCastException;
	// 10726    .restart local v53    # "idx":I
	// 10727    .restart local v66    # "patl":Ljava/lang/String;
	// 10728    .restart local v68    # "plen":I
label_cond_1a7:
	if ( idx != plen )
		goto label_cond_1af;
	i = ( i + 0x1);
	//    .end local v48    # "field":Landroid/icu/text/SimpleDateFormat$PatternItem;
	//    .end local v53    # "idx":I
	//    .end local v66    # "patl":Ljava/lang/String;
	//    .end local v68    # "plen":I
	//    .end local v72    # "s":I
label_cond_1af:
	i = ( i + 0x1);
	goto label_goto_9e;
	// 10750    .line 2469
	// 10751    .restart local v48    # "field":Landroid/icu/text/SimpleDateFormat$PatternItem;
	// 10752    .restart local v72    # "s":I
label_cond_1b3:
	parsePos->setIndex(start);
	parsePos->setErrorIndex(s);
	if ( !(backupTZ) )  
		goto label_cond_1cc;
	this->calendar->setTimeZone(backupTZ);
label_cond_1cc:
	return;
	// 10783    .line 2481
	// 10784    .end local v48    # "field":Landroid/icu/text/SimpleDateFormat$PatternItem;
	// 10785    .end local v72    # "s":I
label_cond_1cd:
	-0x1;
	complete = std::make_shared<std::vector<bool[]>>(0x1);
	//    .local v20, "complete":[Z
	pos = this->matchLiteral(text, pos, items, i, complete);
	if ( complete[0x0] )     
		goto label_cond_1af;
	parsePos->setIndex(start);
	parsePos->setErrorIndex(pos);
	if ( !(backupTZ) )  
		goto label_cond_1fe;
	this->calendar->setTimeZone(backupTZ);
label_cond_1fe:
	return;
	// 10847    .line 2498
	// 10848    .end local v20    # "complete":[Z
label_cond_1ff:
	if ( pos >= text->length() )
		goto label_cond_239;
	//    .local v47, "extra":C
	if ( text->charAt(pos) != 0x2e )
		goto label_cond_239;
	if ( !(this->getBooleanAttribute(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_ALLOW_WHITESPACE)) )  
		goto label_cond_239;
	if ( !(items->size()) )  
		goto label_cond_239;
	lastItem = items[( items->size() + -0x1)];
	//    .local v55, "lastItem":Ljava/lang/Object;
	if ( !(lastItem->instanceOf("android::icu::text::SimpleDateFormat_S_PatternItem")) )  
		goto label_cond_239;
	lastItem->checkCast("android::icu::text::SimpleDateFormat_S_PatternItem");
	//    .end local v55    # "lastItem":Ljava/lang/Object;
	if ( !(( lastItem->isNumeric ^ 0x1)) )  
		goto label_cond_239;
	pos = ( pos + 0x1);
	//    .end local v47    # "extra":C
label_cond_239:
	if ( !(dayPeriod->value) )  
		goto label_cond_28d;
	ruleSet = android::icu::impl::DayPeriodRules::getInstance(this->getLocale());
	//    .local v71, "ruleSet":Landroid/icu/impl/DayPeriodRules;
	if ( cVar0->isSet(0xa) )     
		goto label_cond_357;
	if ( !(( cVar0->isSet(0xb) ^ 0x1)) )  
		goto label_cond_357;
	cVar2 = dayPeriod->value;
	cVar2->checkCast("android::icu::impl::DayPeriodRules_S_DayPeriod");
	midPoint = ruleSet->getMidPointForDayPeriod(cVar2);
	//    .local v56, "midPoint":D
	midPointHour = (int)(midPoint);
	//    .local v60, "midPointHour":I
	if ( ((midPoint -  (double)(midPointHour)) < 0x0) <= 0 )
		goto label_cond_353;
	//    .local v61, "midPointMinute":I
label_goto_27b:
	cVar0->set(0xb, midPointHour);
	cVar0->set(0xc, midPointMinute);
	//    .end local v56    # "midPoint":D
	//    .end local v60    # "midPointHour":I
	//    .end local v61    # "midPointMinute":I
	//    .end local v71    # "ruleSet":Landroid/icu/impl/DayPeriodRules;
label_cond_28d:
label_goto_28d:
	parsePos->setIndex(pos);
	try {
	//label_try_start_292:
	tztype = tzTimeType->value;
	tztype->checkCast("android::icu::text::TimeZoneFormat_S_TimeType");
	//    .local v77, "tztype":Landroid/icu/text/TimeZoneFormat$TimeType;
	if ( ambiguousYear[0x0] )     
		goto label_cond_2a3;
	if ( tztype == android::icu::text::TimeZoneFormat_S_TimeType::UNKNOWN )
		goto label_cond_333;
label_cond_2a3:
	if ( !(ambiguousYear[0x0]) )  
		goto label_cond_2ca;
	copy = cVar0->clone();
	copy->checkCast("android::icu::util::Calendar");
	//    .local v43, "copy":Landroid/icu/util/Calendar;
	//    .local v65, "parsedDate":Ljava/util/Date;
	if ( !(copy->getTime()->before(this->getDefaultCenturyStart())) )  
		goto label_cond_2ca;
	cVar0->set(0x1, ( this->getDefaultCenturyStartYear() + 0x64));
	//    .end local v43    # "copy":Landroid/icu/util/Calendar;
	//    .end local v65    # "parsedDate":Ljava/util/Date;
label_cond_2ca:
	if ( tztype == android::icu::text::TimeZoneFormat_S_TimeType::UNKNOWN )
		goto label_cond_333;
	copy = cVar0->clone();
	copy->checkCast("android::icu::util::Calendar");
	//    .restart local v43    # "copy":Landroid/icu/util/Calendar;
	tz = copy->getTimeZone();
	//    .local v76, "tz":Landroid/icu/util/TimeZone;
	//    .local v27, "btz":Landroid/icu/util/BasicTimeZone;
	if ( !(tz->instanceOf("android::icu::util::BasicTimeZone")) )  
		goto label_cond_2e8;
	cVar3 = tz;
	cVar3->checkCast("android::icu::util::BasicTimeZone");
	btz = cVar3;
	//    .end local v27    # "btz":Landroid/icu/util/BasicTimeZone;
label_cond_2e8:
	copy->set(0xf, 0x0);
	copy->set(0x10, 0x0);
	localMillis = copy->getTimeInMillis();
	//    .local v28, "localMillis":J
	offsets = std::make_shared<std::vector<int[]>>(0x2);
	//    .local v32, "offsets":[I
	if ( !(0x0) )  
		goto label_cond_40d;
	if ( tztype != android::icu::text::TimeZoneFormat_S_TimeType::STANDARD )
		goto label_cond_3eb;
	btz->getOffsetFromLocal(localMillis, 0x1, 0x1, offsets);
label_cond_310:
label_goto_310:
	resolvedSavings = offsets[0x1];
	//    .local v69, "resolvedSavings":I
	if ( tztype != android::icu::text::TimeZoneFormat_S_TimeType::STANDARD )
		goto label_cond_43d;
	if ( !(offsets[0x1]) )  
		goto label_cond_320;
	resolvedSavings = 0x0;
label_cond_320:
label_goto_320:
	cVar0->set(0xf, offsets[0x0]);
	cVar0->set(0x10, resolvedSavings);
	//label_try_end_333:
	}
	catch (java::lang::IllegalArgumentException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3f4;
	}
	//    .catch Ljava/lang/IllegalArgumentException; {:try_start_292 .. :try_end_333} :catch_3f4
	//    .end local v28    # "localMillis":J
	//    .end local v32    # "offsets":[I
	//    .end local v43    # "copy":Landroid/icu/util/Calendar;
	//    .end local v69    # "resolvedSavings":I
	//    .end local v76    # "tz":Landroid/icu/util/TimeZone;
label_cond_333:
	if ( !(0x0) )  
		goto label_cond_347;
	resultCal->setTimeZone(cVar0->getTimeZone());
	resultCal->setTimeInMillis(cVar0->getTimeInMillis());
label_cond_347:
	if ( !(0x0) )  
		goto label_cond_352;
	this->calendar->setTimeZone(backupTZ);
label_cond_352:
	return;
	// 11285    .line 2521
	// 11286    .end local v77    # "tztype":Landroid/icu/text/TimeZoneFormat$TimeType;
	// 11287    .restart local v56    # "midPoint":D
	// 11288    .restart local v60    # "midPointHour":I
	// 11289    .restart local v71    # "ruleSet":Landroid/icu/impl/DayPeriodRules;
label_cond_353:
	//    .restart local v61    # "midPointMinute":I
	goto label_goto_27b;
	// 11296    .line 2529
	// 11297    .end local v56    # "midPoint":D
	// 11298    .end local v60    # "midPointHour":I
	// 11299    .end local v61    # "midPointMinute":I
label_cond_357:
	if ( !(cVar0->isSet(0xb)) )  
		goto label_cond_37b;
	hourOfDay = cVar0->get(0xb);
	//    .local v49, "hourOfDay":I
label_cond_369:
label_goto_369:
	if ( android::icu::text::SimpleDateFormat::_assertionsDisabled )     
		goto label_cond_388;
	if ( hourOfDay < 0 ) 
		goto label_cond_375;
	if ( hourOfDay <= 0x17 )
		goto label_cond_388;
label_cond_375:
	cVar4 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar4;
	// 11343    .line 2532
	// 11344    .end local v49    # "hourOfDay":I
label_cond_37b:
	hourOfDay = cVar0->get(0xa);
	//    .restart local v49    # "hourOfDay":I
	if ( hourOfDay )     
		goto label_cond_369;
	hourOfDay = 0xc;
	goto label_goto_369;
	// 11362    .line 2541
label_cond_388:
	if ( !(hourOfDay) )  
		goto label_cond_396;
	if ( 0xd >  hourOfDay )
		goto label_cond_3a1;
	if ( hourOfDay >  0x17 )
		goto label_cond_3a1;
label_cond_396:
	cVar0->set(0xb, hourOfDay);
	goto label_goto_28d;
	// 11390    .line 2556
label_cond_3a1:
	if ( hourOfDay != 0xc )
		goto label_cond_3a9;
	hourOfDay = 0x0;
label_cond_3a9:
	//    .local v44, "currentHour":D
	cVar5 = dayPeriod->value;
	cVar5->checkCast("android::icu::impl::DayPeriodRules_S_DayPeriod");
	//    .local v58, "midPointHour":D
	hoursAheadMidPoint = (((double)(hourOfDay) +  ((double)(cVar0->get(0xc)) /  0x404e000000000000L)) -  ruleSet->getMidPointForDayPeriod(cVar5));
	//    .local v50, "hoursAheadMidPoint":D
	if ( (-0x3fe8000000000000L > hoursAheadMidPoint) > 0 ) 
		goto label_cond_3e1;
	if ( (hoursAheadMidPoint > 0x4018000000000000L) >= 0 )
		goto label_cond_3e1;
	cVar0->set(0x9, 0x0);
	goto label_goto_28d;
	// 11467    .line 2567
label_cond_3e1:
	cVar0->set(0x9, 0x1);
	goto label_goto_28d;
	// 11479    .line 2639
	// 11480    .end local v44    # "currentHour":D
	// 11481    .end local v49    # "hourOfDay":I
	// 11482    .end local v50    # "hoursAheadMidPoint":D
	// 11483    .end local v58    # "midPointHour":D
	// 11484    .end local v71    # "ruleSet":Landroid/icu/impl/DayPeriodRules;
	// 11485    .restart local v28    # "localMillis":J
	// 11486    .restart local v32    # "offsets":[I
	// 11487    .restart local v43    # "copy":Landroid/icu/util/Calendar;
	// 11488    .restart local v76    # "tz":Landroid/icu/util/TimeZone;
	// 11489    .restart local v77    # "tztype":Landroid/icu/text/TimeZoneFormat$TimeType;
label_cond_3eb:
	try {
	//label_try_start_3ef:
	btz->getOffsetFromLocal(localMillis, 0x3, 0x3, offsets);
	//label_try_end_3f2:
	}
	catch (java::lang::IllegalArgumentException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3f4;
	}
	//    .catch Ljava/lang/IllegalArgumentException; {:try_start_3ef .. :try_end_3f2} :catch_3f4
	goto label_goto_310;
	// 11503    .line 2729
	// 11504    .end local v28    # "localMillis":J
	// 11505    .end local v32    # "offsets":[I
	// 11506    .end local v43    # "copy":Landroid/icu/util/Calendar;
	// 11507    .end local v76    # "tz":Landroid/icu/util/TimeZone;
	// 11508    .end local v77    # "tztype":Landroid/icu/text/TimeZoneFormat$TimeType;
label_catch_3f4:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v46, "e":Ljava/lang/IllegalArgumentException;
	parsePos->setErrorIndex(pos);
	parsePos->setIndex(start);
	if ( !(backupTZ) )  
		goto label_cond_40c;
	this->calendar->setTimeZone(backupTZ);
label_cond_40c:
	return;
	// 11541    .line 2644
	// 11542    .end local v46    # "e":Ljava/lang/IllegalArgumentException;
	// 11543    .restart local v28    # "localMillis":J
	// 11544    .restart local v32    # "offsets":[I
	// 11545    .restart local v43    # "copy":Landroid/icu/util/Calendar;
	// 11546    .restart local v76    # "tz":Landroid/icu/util/TimeZone;
	// 11547    .restart local v77    # "tztype":Landroid/icu/text/TimeZoneFormat$TimeType;
label_cond_40d:
	try {
	//label_try_start_40e:
	tz->getOffset(localMillis, 0x1, offsets);
	if ( tztype != android::icu::text::TimeZoneFormat_S_TimeType::STANDARD )
		goto label_cond_431;
	if ( !(offsets[0x1]) )  
		goto label_cond_431;
label_goto_422:
	tz->getOffset((localMillis - 0x5265c00), 0x1, offsets);
	goto label_goto_310;
	// 11589    .line 2647
label_cond_431:
	if ( tztype != android::icu::text::TimeZoneFormat_S_TimeType::DAYLIGHT )
		goto label_cond_310;
	if ( offsets[0x1] )     
		goto label_cond_310;
	goto label_goto_422;
	// 11605    .line 2666
	// 11606    .restart local v69    # "resolvedSavings":I
label_cond_43d:
	if ( offsets[0x1] )     
		goto label_cond_320;
	if ( !(btz) )  
		goto label_cond_4b5;
	time = (localMillis + (long long)(offsets[0x0]));
	//    .local v74, "time":J
	beforeT = time;
	//    .local v40, "beforeT":J
	afterT = time;
	//    .local v34, "afterT":J
	beforeSav = 0x0;
	//    .local v38, "beforeSav":I
	afterSav = 0x0;
	//    .local v33, "afterSav":I
label_cond_452:
	beforeTrs = btz->getPreviousTransition(beforeT, 0x1);
	//    .local v39, "beforeTrs":Landroid/icu/util/TimeZoneTransition;
	if ( beforeTrs )     
		goto label_cond_47d;
label_cond_45d:
label_goto_45d:
	afterTrs = btz->getNextTransition(afterT, 0x0);
	//    .local v36, "afterTrs":Landroid/icu/util/TimeZoneTransition;
	if ( afterTrs )     
		goto label_cond_490;
label_goto_468:
	if ( !(beforeTrs) )  
		goto label_cond_4a2;
	if ( !(afterTrs) )  
		goto label_cond_4a2;
	if ( ((time - beforeT) > (afterT - time)) <= 0 )
		goto label_cond_49f;
	resolvedSavings = afterSav;
	//    .end local v33    # "afterSav":I
	//    .end local v34    # "afterT":J
	//    .end local v36    # "afterTrs":Landroid/icu/util/TimeZoneTransition;
	//    .end local v38    # "beforeSav":I
	//    .end local v39    # "beforeTrs":Landroid/icu/util/TimeZoneTransition;
	//    .end local v40    # "beforeT":J
	//    .end local v74    # "time":J
label_goto_476:
	if ( resolvedSavings )     
		goto label_cond_320;
	resolvedSavings = 0x36ee80;
	goto label_goto_320;
	// 11708    .line 2680
	// 11709    .restart local v33    # "afterSav":I
	// 11710    .restart local v34    # "afterT":J
	// 11711    .restart local v38    # "beforeSav":I
	// 11712    .restart local v39    # "beforeTrs":Landroid/icu/util/TimeZoneTransition;
	// 11713    .restart local v40    # "beforeT":J
	// 11714    .restart local v74    # "time":J
label_cond_47d:
	beforeT = (beforeTrs->getTime() - 0x1);
	if ( !(beforeTrs->getFrom()->getDSTSavings()) )  
		goto label_cond_452;
	goto label_goto_45d;
	// 11738    .line 2693
	// 11739    .restart local v36    # "afterTrs":Landroid/icu/util/TimeZoneTransition;
label_cond_490:
	afterT = afterTrs->getTime();
	if ( !(afterTrs->getTo()->getDSTSavings()) )  
		goto label_cond_45d;
	goto label_goto_468;
	// 11759    .line 2704
label_cond_49f:
	resolvedSavings = beforeSav;
	goto label_goto_476;
	// 11765    .line 2706
label_cond_4a2:
	if ( !(beforeTrs) )  
		goto label_cond_4a9;
	if ( !(beforeSav) )  
		goto label_cond_4a9;
	resolvedSavings = beforeSav;
	goto label_goto_476;
	// 11776    .line 2708
label_cond_4a9:
	if ( !(afterTrs) )  
		goto label_cond_4b0;
	if ( !(afterSav) )  
		goto label_cond_4b0;
	resolvedSavings = afterSav;
	goto label_goto_476;
	// 11788    .line 2711
label_cond_4b0:
	resolvedSavings = btz->getDSTSavings();
	goto label_goto_476;
	// 11796    .line 2714
	// 11797    .end local v33    # "afterSav":I
	// 11798    .end local v34    # "afterT":J
	// 11799    .end local v36    # "afterTrs":Landroid/icu/util/TimeZoneTransition;
	// 11800    .end local v38    # "beforeSav":I
	// 11801    .end local v39    # "beforeTrs":Landroid/icu/util/TimeZoneTransition;
	// 11802    .end local v40    # "beforeT":J
	// 11803    .end local v74    # "time":J
label_cond_4b5:
	//label_try_end_4b8:
	}
	catch (java::lang::IllegalArgumentException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3f4;
	}
	//    .catch Ljava/lang/IllegalArgumentException; {:try_start_40e .. :try_end_4b8} :catch_3f4
	resolvedSavings = tz->getDSTSavings();
	goto label_goto_476;

}
// .method protected patternCharToDateFormatField(C)Landroid/icu/text/DateFormat$Field;
std::shared_ptr<android::icu::text::DateFormat_S_Field> android::icu::text::SimpleDateFormat::patternCharToDateFormatField(char ch)
{
	
	int patternCharIndex;
	
	//    .param p1, "ch"    # C
	patternCharIndex = android::icu::text::SimpleDateFormat::getIndexFromChar(ch);
	//    .local v0, "patternCharIndex":I
	if ( patternCharIndex == -0x1 )
		goto label_cond_c;
	return android::icu::text::SimpleDateFormat::PATTERN_INDEX_TO_DATE_FORMAT_ATTRIBUTE[patternCharIndex];
	// 11837    .line 1487
label_cond_c:
	return 0x0;

}
// .method public set2DigitYearStart(Ljava/util/Date;)V
void android::icu::text::SimpleDateFormat::set2DigitYearStart(std::shared_ptr<java::util::Date> startDate)
{
	
	//    .param p1, "startDate"    # Ljava/util/Date;
	this->parseAmbiguousDatesAsAfter(startDate);
	return;

}
// .method public setContext(Landroid/icu/text/DisplayContext;)V
void android::icu::text::SimpleDateFormat::setContext(std::shared_ptr<android::icu::text::DisplayContext> context)
{
	
	//    .param p1, "context"    # Landroid/icu/text/DisplayContext;
	this->setContext(context);
	if ( this->capitalizationBrkIter )     
		goto label_cond_17;
	if ( context == android::icu::text::DisplayContext::CAPITALIZATION_FOR_BEGINNING_OF_SENTENCE )
		goto label_cond_f;
	if ( context != android::icu::text::DisplayContext::CAPITALIZATION_FOR_UI_LIST_OR_MENU )
		goto label_cond_18;
label_cond_f:
label_goto_f:
	this->capitalizationBrkIter = android::icu::text::BreakIterator::getSentenceInstance(this->locale);
label_cond_17:
	return;
	// 11893    .line 1295
label_cond_18:
	if ( context != android::icu::text::DisplayContext::CAPITALIZATION_FOR_STANDALONE )
		goto label_cond_17;
	goto label_goto_f;

}
// .method public setDateFormatSymbols(Landroid/icu/text/DateFormatSymbols;)V
void android::icu::text::SimpleDateFormat::setDateFormatSymbols(std::shared_ptr<android::icu::text::DateFormatSymbols> newFormatSymbols)
{
	
	std::shared_ptr<android::icu::text::DateFormatSymbols> cVar0;
	
	//    .param p1, "newFormatSymbols"    # Landroid/icu/text/DateFormatSymbols;
	cVar0 = newFormatSymbols->clone();
	cVar0->checkCast("android::icu::text::DateFormatSymbols");
	this->formatData = cVar0;
	return;

}
// .method public setNumberFormat(Landroid/icu/text/NumberFormat;)V
void android::icu::text::SimpleDateFormat::setNumberFormat(std::shared_ptr<android::icu::text::NumberFormat> newNumberFormat)
{
	
	std::shared_ptr<java::util::HashMap> cVar0;
	
	//    .param p1, "newNumberFormat"    # Landroid/icu/text/NumberFormat;
	cVar0 = 0x0;
	this->setNumberFormat(newNumberFormat);
	this->initLocalZeroPaddingNumberFormat();
	this->initializeTimeZoneFormat(0x1);
	if ( !(this->numberFormatters) )  
		goto label_cond_11;
	this->numberFormatters = cVar0;
label_cond_11:
	if ( !(this->overrideMap) )  
		goto label_cond_17;
	this->overrideMap = cVar0;
label_cond_17:
	return;

}
// .method public setNumberFormat(Ljava/lang/String;Landroid/icu/text/NumberFormat;)V
void android::icu::text::SimpleDateFormat::setNumberFormat(std::shared_ptr<java::lang::String> fields,std::shared_ptr<android::icu::text::NumberFormat> overrideNF)
{
	
	bool cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::Object> nsName;
	std::shared_ptr<java::util::HashMap> cVar2;
	std::shared_ptr<java::util::HashMap> cVar3;
	int i;
	int field;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	
	//    .param p1, "fields"    # Ljava/lang/String;
	//    .param p2, "overrideNF"    # Landroid/icu/text/NumberFormat;
	cVar0 = 0x0;
	overrideNF->setGroupingUsed(cVar0);
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	nsName = cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("$")))->append(java::util::UUID::randomUUID({const[class].FS-Param})->toString())->toString();
	//    .local v2, "nsName":Ljava/lang/String;
	if ( this->numberFormatters )     
		goto label_cond_2b;
	cVar2 = std::make_shared<java::util::HashMap>();
	this->numberFormatters = cVar2;
label_cond_2b:
	if ( this->overrideMap )     
		goto label_cond_36;
	cVar3 = std::make_shared<java::util::HashMap>();
	this->overrideMap = cVar3;
label_cond_36:
	i = 0x0;
	//    .local v1, "i":I
label_goto_37:
	if ( i >= fields->length() )
		goto label_cond_7d;
	field = fields->charAt(i);
	//    .local v0, "field":C
	if ( std::make_shared<java::lang::String>(std::make_shared<char[]>("GyMdkHmsSEDFwWahKzYeugAZvcLQqVUOXxrbB"))->indexOf(field) != -0x1 )
		goto label_cond_6c;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = std::make_shared<java::lang::IllegalArgumentException>(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal field character \'")))->append(field)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\' in setNumberFormat.")))->toString());
	// throw
	throw cVar4;
	// 12084    .line 4391
label_cond_6c:
	this->overrideMap->put(java::lang::Character::valueOf(field), nsName);
	this->numberFormatters->put(nsName, overrideNF);
	i = ( i + 0x1);
	goto label_goto_37;
	// 12104    .line 4397
	// 12105    .end local v0    # "field":C
label_cond_7d:
	this->useLocalZeroPaddingNumberFormat = cVar0;
	return;

}
// .method public setTimeZoneFormat(Landroid/icu/text/TimeZoneFormat;)V
void android::icu::text::SimpleDateFormat::setTimeZoneFormat(std::shared_ptr<android::icu::text::TimeZoneFormat> tzfmt)
{
	
	//    .param p1, "tzfmt"    # Landroid/icu/text/TimeZoneFormat;
	if ( !(tzfmt->isFrozen()) )  
		goto label_cond_9;
	this->tzFormat = tzfmt;
label_goto_8:
	return;
	// 12132    .line 3901
label_cond_9:
	this->tzFormat = tzfmt->cloneAsThawed()->freeze();
	goto label_goto_8;

}
// .method protected subFormat(CIIILandroid/icu/text/DisplayContext;Ljava/text/FieldPosition;Landroid/icu/util/Calendar;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::SimpleDateFormat::subFormat(char ch,int count,int beginOffset,int fieldNum,std::shared_ptr<android::icu::text::DisplayContext> capitalizationContext,std::shared_ptr<java::text::FieldPosition> pos,std::shared_ptr<android::icu::util::Calendar> cal)
{
	
	std::shared_ptr<java::lang::StringBuffer> buf;
	
	//    .param p1, "ch"    # C
	//    .param p2, "count"    # I
	//    .param p3, "beginOffset"    # I
	//    .param p4, "fieldNum"    # I
	//    .param p5, "capitalizationContext"    # Landroid/icu/text/DisplayContext;
	//    .param p6, "pos"    # Ljava/text/FieldPosition;
	//    .param p7, "cal"    # Landroid/icu/util/Calendar;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 12157    .end annotation
	buf = std::make_shared<java::lang::StringBuffer>();
	//    .local v1, "buf":Ljava/lang/StringBuffer;
	this->subFormat(buf, ch, count, beginOffset, fieldNum, capitalizationContext, pos, cal);
	return buf->toString();

}
// .method protected subFormat(CIILjava/text/FieldPosition;Landroid/icu/text/DateFormatSymbols;Landroid/icu/util/Calendar;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::SimpleDateFormat::subFormat(char ch,int count,int beginOffset,std::shared_ptr<java::text::FieldPosition> pos,std::shared_ptr<android::icu::text::DateFormatSymbols> fmtData,std::shared_ptr<android::icu::util::Calendar> cal)
{
	
	//    .param p1, "ch"    # C
	//    .param p2, "count"    # I
	//    .param p3, "beginOffset"    # I
	//    .param p4, "pos"    # Ljava/text/FieldPosition;
	//    .param p5, "fmtData"    # Landroid/icu/text/DateFormatSymbols;
	//    .param p6, "cal"    # Landroid/icu/util/Calendar;
	//    .annotation system Ldalvik/annotation/Throws;
	// 12202        value = {
	// 12203            Ljava/lang/IllegalArgumentException;
	// 12204        }
	// 12205    .end annotation
	return this->subFormat(ch, count, beginOffset, 0x0, android::icu::text::DisplayContext::CAPITALIZATION_NONE, pos, cal);

}
// .method protected subFormat(Ljava/lang/StringBuffer;CIIILandroid/icu/text/DisplayContext;Ljava/text/FieldPosition;Landroid/icu/util/Calendar;)V
void android::icu::text::SimpleDateFormat::subFormat(std::shared_ptr<java::lang::StringBuffer> buf,char ch,int count,int beginOffset,int fieldNum,std::shared_ptr<android::icu::text::DisplayContext> capitalizationContext,std::shared_ptr<java::text::FieldPosition> pos,std::shared_ptr<android::icu::util::Calendar> cal)
{
	
	int bufstart;
	auto tz;
	auto date;
	int result;
	int patternCharIndex;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	int field;
	int value;
	std::shared_ptr<android::icu::text::NumberFormat> currentNumberFormat;
	int titlecase;
	std::shared_ptr<bool[]> transforms;
	bool titlecase;
	int isLeap;
	int isLeapMonth;
	std::shared_ptr<java::lang::String> cVar2;
	std::shared_ptr<java::lang::String> cVar4;
	std::shared_ptr<java::lang::String> cVar6;
	std::shared_ptr<java::lang::String> cVar8;
	std::shared_ptr<java::lang::String> cVar10;
	std::shared_ptr<java::lang::String> cVar12;
	std::shared_ptr<java::lang::StringBuffer> monthNumber;
	auto monthNumberStrings;
	std::shared_ptr<java::lang::String> cVar14;
	std::shared_ptr<java::text::FieldPosition> p;
	int toAppend;
	auto toAppend;
	std::shared_ptr<android::icu::impl::DayPeriodRules> ruleSet;
	int hour;
	int minute;
	int second;
	std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> periodType;
	std::shared_ptr<java::lang::AssertionError> cVar16;
	int index;
	auto periodType;
	
	//    .param p1, "buf"    # Ljava/lang/StringBuffer;
	//    .param p2, "ch"    # C
	//    .param p3, "count"    # I
	//    .param p4, "beginOffset"    # I
	//    .param p5, "fieldNum"    # I
	//    .param p6, "capitalizationContext"    # Landroid/icu/text/DisplayContext;
	//    .param p7, "pos"    # Ljava/text/FieldPosition;
	//    .param p8, "cal"    # Landroid/icu/util/Calendar;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 12243    .end annotation
	0x7fffffff;
	//    .local v31, "maxIntCount":I
	bufstart = buf->length();
	//    .local v20, "bufstart":I
	tz = cal->getTimeZone();
	//    .local v43, "tz":Landroid/icu/util/TimeZone;
	date = cal->getTimeInMillis();
	//    .local v22, "date":J
	result = 0x0;
	//    .local v37, "result":Ljava/lang/String;
	patternCharIndex = android::icu::text::SimpleDateFormat::getIndexFromChar(ch);
	//    .local v35, "patternCharIndex":I
	if ( patternCharIndex != -0x1 )
		goto label_cond_52;
	if ( ch != 0x6c )
		goto label_cond_21;
	return;
	// 12295    .line 1561
label_cond_21:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal pattern character \'")))->append(ch)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\' in \")))->append(this->pattern)->append(0x22)->toString());
	// throw
	throw cVar0;
	// 12349    .line 1567
label_cond_52:
	field = android::icu::text::SimpleDateFormat::PATTERN_INDEX_TO_CALENDAR_FIELD[patternCharIndex];
	//    .local v24, "field":I
	value = 0x0;
	//    .local v7, "value":I
	if ( field < 0 ) 
		goto label_cond_67;
	if ( patternCharIndex == 0x22 )
		goto label_cond_103;
	value = cal->get(field);
label_cond_67:
label_goto_67:
	currentNumberFormat = this->getNumberFormat(ch);
	//    .local v5, "currentNumberFormat":Landroid/icu/text/NumberFormat;
	//    .local v21, "capContextUsageType":Landroid/icu/text/DateFormatSymbols$CapitalizationContextUsage;
	// switch
	{
	auto item = ( patternCharIndex );
	if (item == 0) goto label_pswitch_109;
	if (item == 1) goto label_pswitch_186;
	if (item == 2) goto label_pswitch_1ce;
	if (item == 3) goto label_pswitch_74;
	if (item == 4) goto label_pswitch_313;
	if (item == 5) goto label_pswitch_74;
	if (item == 6) goto label_pswitch_74;
	if (item == 7) goto label_pswitch_74;
	if (item == 8) goto label_pswitch_33c;
	if (item == 9) goto label_pswitch_3ae;
	if (item == 10) goto label_pswitch_74;
	if (item == 11) goto label_pswitch_74;
	if (item == 12) goto label_pswitch_74;
	if (item == 13) goto label_pswitch_74;
	if (item == 14) goto label_pswitch_401;
	if (item == 15) goto label_pswitch_428;
	if (item == 16) goto label_pswitch_74;
	if (item == 17) goto label_pswitch_451;
	if (item == 18) goto label_pswitch_186;
	if (item == 19) goto label_pswitch_394;
	if (item == 20) goto label_pswitch_74;
	if (item == 21) goto label_pswitch_74;
	if (item == 22) goto label_pswitch_74;
	if (item == 23) goto label_pswitch_480;
	if (item == 24) goto label_pswitch_4bf;
	if (item == 25) goto label_pswitch_655;
	if (item == 26) goto label_pswitch_1ce;
	if (item == 27) goto label_pswitch_6c1;
	if (item == 28) goto label_pswitch_6fc;
	if (item == 29) goto label_pswitch_4f3;
	if (item == 30) goto label_pswitch_166;
	if (item == 31) goto label_pswitch_54d;
	if (item == 32) goto label_pswitch_57d;
	if (item == 33) goto label_pswitch_5e9;
	if (item == 34) goto label_pswitch_74;
	if (item == 35) goto label_pswitch_737;
	if (item == 36) goto label_pswitch_7ba;
	if (item == 37) goto label_pswitch_8eb;
	}
label_pswitch_74:
	this->zeroPaddingNumber(currentNumberFormat, buf, value, count, 0x7fffffff);
	//    .end local v37    # "result":Ljava/lang/String;
label_cond_80:
label_goto_80:
	if ( fieldNum )     
		goto label_cond_da;
	if ( !(capitalizationContext) )  
		goto label_cond_da;
	if ( !(android::icu::lang::UCharacter::isLowerCase(buf->codePointAt(bufstart))) )  
		goto label_cond_da;
	titlecase = 0x0;
	//    .local v40, "titlecase":Z
	// switch
	{
	auto item = ( android::icu::text::SimpleDateFormat::-getandroid-icu-text-DisplayContextSwitchesValues({const[class].FS-Param})[capitalizationContext->ordinal()] );
	if (item == 1) goto label_pswitch_8fa;
	if (item == 2) goto label_pswitch_8fe;
	if (item == 3) goto label_pswitch_8fe;
	}
	//    .end local v40    # "titlecase":Z
label_cond_a1:
label_goto_a1:
	if ( !(titlecase) )  
		goto label_cond_da;
	if ( this->capitalizationBrkIter )     
		goto label_cond_b5;
	this->capitalizationBrkIter = android::icu::text::BreakIterator::getSentenceInstance(this->locale);
label_cond_b5:
	//    .local v25, "firstField":Ljava/lang/String;
	//    .local v26, "firstFieldTitleCase":Ljava/lang/String;
	buf->replace(bufstart, buf->length(), android::icu::lang::UCharacter::toTitleCase(this->locale, buf->substring(bufstart), this->capitalizationBrkIter, 0x300));
	//    .end local v25    # "firstField":Ljava/lang/String;
	//    .end local v26    # "firstFieldTitleCase":Ljava/lang/String;
label_cond_da:
	if ( pos->getBeginIndex() != pos->getEndIndex() )
		goto label_cond_102;
	if ( pos->getField() != android::icu::text::SimpleDateFormat::PATTERN_INDEX_TO_DATE_FORMAT_FIELD[patternCharIndex] )
		goto label_cond_924;
	pos->setBeginIndex(beginOffset);
	pos->setEndIndex(((buf->length() + beginOffset) - bufstart));
label_cond_102:
label_goto_102:
	return;
	// 12568    .line 1571
	// 12569    .end local v5    # "currentNumberFormat":Landroid/icu/text/NumberFormat;
	// 12570    .end local v21    # "capContextUsageType":Landroid/icu/text/DateFormatSymbols$CapitalizationContextUsage;
	// 12571    .restart local v37    # "result":Ljava/lang/String;
label_cond_103:
	value = cal->getRelatedYear();
	goto label_goto_67;
	// 12579    .line 1579
	// 12580    .restart local v5    # "currentNumberFormat":Landroid/icu/text/NumberFormat;
	// 12581    .restart local v21    # "capContextUsageType":Landroid/icu/text/DateFormatSymbols$CapitalizationContextUsage;
label_pswitch_109:
	if ( cal->getType()->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("chinese"))) )     
		goto label_cond_123;
	if ( !(cal->getType()->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("dangi")))) )  
		goto label_cond_12f;
label_cond_123:
	this->zeroPaddingNumber(currentNumberFormat, buf, value, 0x1, 0x9);
	goto label_goto_80;
	// 12621    .line 1583
label_cond_12f:
	if ( count != 0x5 )
		goto label_cond_143;
	android::icu::text::SimpleDateFormat::safeAppend(this->formatData->narrowEras, value, buf);
	android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::ERA_NARROW;
	goto label_goto_80;
	// 12645    .line 1586
label_cond_143:
	if ( count != 0x4 )
		goto label_cond_157;
	android::icu::text::SimpleDateFormat::safeAppend(this->formatData->eraNames, value, buf);
	android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::ERA_WIDE;
	goto label_goto_80;
	// 12669    .line 1590
label_cond_157:
	android::icu::text::SimpleDateFormat::safeAppend(this->formatData->eras, value, buf);
	android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::ERA_ABBREV;
	goto label_goto_80;
	// 12686    .line 1596
label_pswitch_166:
	if ( !(this->formatData->shortYearNames) )  
		goto label_cond_186;
	if ( value >  this->formatData->shortYearNames->size() )
		goto label_cond_186;
	android::icu::text::SimpleDateFormat::safeAppend(this->formatData->shortYearNames, ( value + -0x1), buf);
	goto label_goto_80;
	// 12721    .line 1603
label_cond_186:
label_pswitch_186:
	if ( !(this->override) )  
		goto label_cond_1b0;
	if ( !(this->override->compareTo(std::make_shared<java::lang::String>(std::make_shared<char[]>("hebr")))) )  
		goto label_cond_1a6;
	if ( this->override->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("y=hebr"))) < 0 ) 
		goto label_cond_1b0;
label_cond_1a6:
	if ( value <= 0x1388 )
		goto label_cond_1b0;
	if ( value >= 0x1770 )
		goto label_cond_1b0;
	value = ( value + -0x1388);
label_cond_1b0:
	if ( count != 0x2 )
		goto label_cond_1c0;
	this->zeroPaddingNumber(currentNumberFormat, buf, value, 0x2, 0x2);
	goto label_goto_80;
	// 12788    .line 1616
label_cond_1c0:
	this->zeroPaddingNumber(currentNumberFormat, buf, value, count, 0x7fffffff);
	goto label_goto_80;
	// 12802    .line 1621
label_pswitch_1ce:
	if ( !(cal->getType()->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("hebrew")))) )  
		goto label_cond_1fe;
	isLeap = android::icu::util::HebrewCalendar::isLeapYear(cal->get(0x1));
	//    .local v29, "isLeap":Z
	if ( !(isLeap) )  
		goto label_cond_1f2;
	if ( value != 0x6 )
		goto label_cond_1f2;
	if ( count <  0x3 )
		goto label_cond_1f2;
	value = 0xd;
label_cond_1f2:
	if ( isLeap )     
		goto label_cond_1fe;
	if ( value <  0x6 )
		goto label_cond_1fe;
	if ( count >= 0x3 )
		goto label_cond_1fe;
	value = ( value + -0x1);
	//    .end local v29    # "isLeap":Z
label_cond_1fe:
	if ( !(this->formatData->leapMonthPatterns) )  
		goto label_cond_23c;
	if ( this->formatData->leapMonthPatterns->size() <  0x7 )
		goto label_cond_23c;
	isLeapMonth = cal->get(0x16);
	//    .local v30, "isLeapMonth":I
label_goto_218:
	if ( count != 0x5 )
		goto label_cond_25a;
	if ( patternCharIndex != 0x2 )
		goto label_cond_241;
	if ( !(isLeapMonth) )  
		goto label_cond_23f;
	cVar2 = this->formatData->leapMonthPatterns[0x2];
label_goto_233:
	android::icu::text::SimpleDateFormat::safeAppendWithMonthPattern(this->formatData->narrowMonths, value, buf, cVar2);
label_goto_238:
	android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::MONTH_NARROW;
	goto label_goto_80;
	// 12941    .line 1631
	// 12942    .end local v30    # "isLeapMonth":I
label_cond_23c:
	//    .restart local v30    # "isLeapMonth":I
	goto label_goto_218;
	// 12949    .line 1635
label_cond_23f:
	cVar2 = 0x0;
	goto label_goto_233;
	// 12955    .line 1637
label_cond_241:
	if ( !(isLeapMonth) )  
		goto label_cond_258;
	cVar4 = this->formatData->leapMonthPatterns[0x5];
label_goto_252:
	android::icu::text::SimpleDateFormat::safeAppendWithMonthPattern(this->formatData->standaloneNarrowMonths, value, buf, cVar4);
	goto label_goto_238;
label_cond_258:
	cVar4 = 0x0;
	goto label_goto_252;
	// 12987    .line 1640
label_cond_25a:
	if ( count != 0x4 )
		goto label_cond_29c;
	if ( patternCharIndex != 0x2 )
		goto label_cond_280;
	if ( !(isLeapMonth) )  
		goto label_cond_27e;
	cVar6 = this->formatData->leapMonthPatterns[0x0];
label_goto_275:
	android::icu::text::SimpleDateFormat::safeAppendWithMonthPattern(this->formatData->months, value, buf, cVar6);
	android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::MONTH_FORMAT;
	goto label_goto_80;
	// 13031    .line 1642
label_cond_27e:
	cVar6 = 0x0;
	goto label_goto_275;
	// 13037    .line 1645
label_cond_280:
	if ( !(isLeapMonth) )  
		goto label_cond_29a;
	cVar8 = this->formatData->leapMonthPatterns[0x3];
label_goto_291:
	android::icu::text::SimpleDateFormat::safeAppendWithMonthPattern(this->formatData->standaloneMonths, value, buf, cVar8);
	android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::MONTH_STANDALONE;
	goto label_goto_80;
	// 13067    .line 1645
label_cond_29a:
	cVar8 = 0x0;
	goto label_goto_291;
	// 13073    .line 1648
label_cond_29c:
	if ( count != 0x3 )
		goto label_cond_2de;
	if ( patternCharIndex != 0x2 )
		goto label_cond_2c2;
	if ( !(isLeapMonth) )  
		goto label_cond_2c0;
	cVar10 = this->formatData->leapMonthPatterns[0x1];
label_goto_2b7:
	android::icu::text::SimpleDateFormat::safeAppendWithMonthPattern(this->formatData->shortMonths, value, buf, cVar10);
	android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::MONTH_FORMAT;
	goto label_goto_80;
	// 13117    .line 1650
label_cond_2c0:
	cVar10 = 0x0;
	goto label_goto_2b7;
	// 13123    .line 1653
label_cond_2c2:
	if ( !(isLeapMonth) )  
		goto label_cond_2dc;
	cVar12 = this->formatData->leapMonthPatterns[0x4];
label_goto_2d3:
	android::icu::text::SimpleDateFormat::safeAppendWithMonthPattern(this->formatData->standaloneShortMonths, value, buf, cVar12);
	android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::MONTH_STANDALONE;
	goto label_goto_80;
	// 13153    .line 1653
label_cond_2dc:
	cVar12 = 0x0;
	goto label_goto_2d3;
	// 13159    .line 1657
label_cond_2de:
	monthNumber = std::make_shared<java::lang::StringBuffer>();
	//    .local v10, "monthNumber":Ljava/lang/StringBuffer;
	this->zeroPaddingNumber(currentNumberFormat, monthNumber, ( value + 0x1), count, 0x7fffffff);
	monthNumberStrings = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x1);
	//    .local v33, "monthNumberStrings":[Ljava/lang/String;
	monthNumberStrings[0x0] = monthNumber->toString();
	if ( !(isLeapMonth) )  
		goto label_cond_311;
	cVar14 = this->formatData->leapMonthPatterns[0x6];
label_goto_307:
	android::icu::text::SimpleDateFormat::safeAppendWithMonthPattern(monthNumberStrings, 0x0, buf, cVar14);
	goto label_goto_80;
label_cond_311:
	cVar14 = 0x0;
	goto label_goto_307;
	// 13225    .line 1665
	// 13226    .end local v10    # "monthNumber":Ljava/lang/StringBuffer;
	// 13227    .end local v30    # "isLeapMonth":I
	// 13228    .end local v33    # "monthNumberStrings":[Ljava/lang/String;
label_pswitch_313:
	if ( value )     
		goto label_cond_32e;
	this->zeroPaddingNumber(currentNumberFormat, buf, ( cal->getMaximum(0xb) + 0x1), count, 0x7fffffff);
	goto label_goto_80;
	// 13259    .line 1670
label_cond_32e:
	this->zeroPaddingNumber(currentNumberFormat, buf, value, count, 0x7fffffff);
	goto label_goto_80;
	// 13273    .line 1676
label_pswitch_33c:
	this->numberFormat->setMinimumIntegerDigits(java::lang::Math::min(0x3, count));
	this->numberFormat->setMaximumIntegerDigits(0x7fffffff);
	if ( count != 0x1 )
		goto label_cond_38c;
	value = ( value / 0x64);
label_cond_35b:
label_goto_35b:
	var367 = p(-0x1);
	//    .local v34, "p":Ljava/text/FieldPosition;
	this->numberFormat->format((long long)(value), buf, p);
	if ( count <= 0x3 )
		goto label_cond_80;
	this->numberFormat->setMinimumIntegerDigits(( count + -0x3));
	this->numberFormat->format(0x0, buf, p);
	goto label_goto_80;
	// 13364    .line 1680
	// 13365    .end local v34    # "p":Ljava/text/FieldPosition;
label_cond_38c:
	if ( count != 0x2 )
		goto label_cond_35b;
	value = ( value / 0xa);
	goto label_goto_35b;
	// 13378    .line 1692
label_pswitch_394:
	if ( count >= 0x3 )
		goto label_cond_3a7;
	this->zeroPaddingNumber(currentNumberFormat, buf, value, count, 0x7fffffff);
	goto label_goto_80;
	// 13399    .line 1698
label_cond_3a7:
	value = cal->get(0x7);
label_pswitch_3ae:
	if ( count != 0x5 )
		goto label_cond_3c2;
	android::icu::text::SimpleDateFormat::safeAppend(this->formatData->narrowWeekdays, value, buf);
	android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::DAY_NARROW;
	goto label_goto_80;
	// 13433    .line 1704
label_cond_3c2:
	if ( count != 0x4 )
		goto label_cond_3d6;
	android::icu::text::SimpleDateFormat::safeAppend(this->formatData->weekdays, value, buf);
	android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::DAY_FORMAT;
	goto label_goto_80;
	// 13457    .line 1707
label_cond_3d6:
	if ( count != 0x6 )
		goto label_cond_3f2;
	if ( !(this->formatData->shorterWeekdays) )  
		goto label_cond_3f2;
	android::icu::text::SimpleDateFormat::safeAppend(this->formatData->shorterWeekdays, value, buf);
	android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::DAY_FORMAT;
	goto label_goto_80;
	// 13489    .line 1711
label_cond_3f2:
	android::icu::text::SimpleDateFormat::safeAppend(this->formatData->shortWeekdays, value, buf);
	android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::DAY_FORMAT;
	goto label_goto_80;
	// 13506    .line 1717
label_pswitch_401:
	if ( count <  0x5 )
		goto label_cond_40e;
	if ( this->formatData->ampmsNarrow )     
		goto label_cond_41b;
label_cond_40e:
	android::icu::text::SimpleDateFormat::safeAppend(this->formatData->ampms, value, buf);
	goto label_goto_80;
	// 13536    .line 1720
label_cond_41b:
	android::icu::text::SimpleDateFormat::safeAppend(this->formatData->ampmsNarrow, value, buf);
	goto label_goto_80;
	// 13550    .line 1724
label_pswitch_428:
	if ( value )     
		goto label_cond_443;
	this->zeroPaddingNumber(currentNumberFormat, buf, ( cal->getLeastMaximum(0xa) + 0x1), count, 0x7fffffff);
	goto label_goto_80;
	// 13581    .line 1729
label_cond_443:
	this->zeroPaddingNumber(currentNumberFormat, buf, value, count, 0x7fffffff);
	goto label_goto_80;
	// 13595    .line 1734
label_pswitch_451:
	if ( count >= 0x4 )
		goto label_cond_46f;
	//    .local v37, "result":Ljava/lang/String;
	android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::METAZONE_SHORT;
label_goto_466:
	buf->append(result);
	goto label_goto_80;
	// 13632    .line 1739
	// 13633    .local v37, "result":Ljava/lang/String;
label_cond_46f:
	//    .local v37, "result":Ljava/lang/String;
	android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::METAZONE_LONG;
	goto label_goto_466;
	// 13655    .line 1745
	// 13656    .local v37, "result":Ljava/lang/String;
label_pswitch_480:
	if ( count >= 0x4 )
		goto label_cond_49c;
	//    .local v37, "result":Ljava/lang/String;
label_goto_493:
	buf->append(result);
	goto label_goto_80;
	// 13690    .line 1748
	// 13691    .local v37, "result":Ljava/lang/String;
label_cond_49c:
	if ( count != 0x5 )
		goto label_cond_4b0;
	//    .local v37, "result":Ljava/lang/String;
	goto label_goto_493;
	// 13717    .line 1753
	// 13718    .local v37, "result":Ljava/lang/String;
label_cond_4b0:
	//    .local v37, "result":Ljava/lang/String;
	goto label_goto_493;
	// 13737    .line 1758
	// 13738    .local v37, "result":Ljava/lang/String;
label_pswitch_4bf:
	if ( count != 0x1 )
		goto label_cond_4dd;
	//    .local v37, "result":Ljava/lang/String;
	android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::METAZONE_SHORT;
	//    .end local v37    # "result":Ljava/lang/String;
label_cond_4d4:
label_goto_4d4:
	buf->append(result);
	goto label_goto_80;
	// 13777    .line 1762
	// 13778    .local v37, "result":Ljava/lang/String;
label_cond_4dd:
	if ( count != 0x4 )
		goto label_cond_4d4;
	//    .local v37, "result":Ljava/lang/String;
	android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::METAZONE_LONG;
	goto label_goto_4d4;
	// 13807    .line 1770
	// 13808    .local v37, "result":Ljava/lang/String;
label_pswitch_4f3:
	if ( count != 0x1 )
		goto label_cond_50f;
	//    .end local v37    # "result":Ljava/lang/String;
label_cond_506:
label_goto_506:
	buf->append(result);
	goto label_goto_80;
	// 13843    .line 1773
	// 13844    .restart local v37    # "result":Ljava/lang/String;
label_cond_50f:
	if ( count != 0x2 )
		goto label_cond_523;
	//    .local v37, "result":Ljava/lang/String;
	goto label_goto_506;
	// 13870    .line 1776
	// 13871    .local v37, "result":Ljava/lang/String;
label_cond_523:
	if ( count != 0x3 )
		goto label_cond_537;
	//    .local v37, "result":Ljava/lang/String;
	goto label_goto_506;
	// 13897    .line 1779
	// 13898    .local v37, "result":Ljava/lang/String;
label_cond_537:
	if ( count != 0x4 )
		goto label_cond_506;
	//    .local v37, "result":Ljava/lang/String;
	android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::ZONE_LONG;
	goto label_goto_506;
	// 13927    .line 1787
	// 13928    .local v37, "result":Ljava/lang/String;
label_pswitch_54d:
	if ( count != 0x1 )
		goto label_cond_569;
	//    .end local v37    # "result":Ljava/lang/String;
label_cond_560:
label_goto_560:
	buf->append(result);
	goto label_goto_80;
	// 13963    .line 1790
	// 13964    .restart local v37    # "result":Ljava/lang/String;
label_cond_569:
	if ( count != 0x4 )
		goto label_cond_560;
	//    .local v37, "result":Ljava/lang/String;
	goto label_goto_560;
	// 13990    .line 1797
	// 13991    .local v37, "result":Ljava/lang/String;
label_pswitch_57d:
	if ( count != 0x1 )
		goto label_cond_599;
	//    .end local v37    # "result":Ljava/lang/String;
label_cond_590:
label_goto_590:
	buf->append(result);
	goto label_goto_80;
	// 14026    .line 1800
	// 14027    .restart local v37    # "result":Ljava/lang/String;
label_cond_599:
	if ( count != 0x2 )
		goto label_cond_5ad;
	//    .local v37, "result":Ljava/lang/String;
	goto label_goto_590;
	// 14053    .line 1803
	// 14054    .local v37, "result":Ljava/lang/String;
label_cond_5ad:
	if ( count != 0x3 )
		goto label_cond_5c1;
	//    .local v37, "result":Ljava/lang/String;
	goto label_goto_590;
	// 14080    .line 1806
	// 14081    .local v37, "result":Ljava/lang/String;
label_cond_5c1:
	if ( count != 0x4 )
		goto label_cond_5d5;
	//    .local v37, "result":Ljava/lang/String;
	goto label_goto_590;
	// 14107    .line 1809
	// 14108    .local v37, "result":Ljava/lang/String;
label_cond_5d5:
	if ( count != 0x5 )
		goto label_cond_590;
	//    .local v37, "result":Ljava/lang/String;
	goto label_goto_590;
	// 14134    .line 1816
	// 14135    .local v37, "result":Ljava/lang/String;
label_pswitch_5e9:
	if ( count != 0x1 )
		goto label_cond_605;
	//    .end local v37    # "result":Ljava/lang/String;
label_cond_5fc:
label_goto_5fc:
	buf->append(result);
	goto label_goto_80;
	// 14170    .line 1819
	// 14171    .restart local v37    # "result":Ljava/lang/String;
label_cond_605:
	if ( count != 0x2 )
		goto label_cond_619;
	//    .local v37, "result":Ljava/lang/String;
	goto label_goto_5fc;
	// 14197    .line 1822
	// 14198    .local v37, "result":Ljava/lang/String;
label_cond_619:
	if ( count != 0x3 )
		goto label_cond_62d;
	//    .local v37, "result":Ljava/lang/String;
	goto label_goto_5fc;
	// 14224    .line 1825
	// 14225    .local v37, "result":Ljava/lang/String;
label_cond_62d:
	if ( count != 0x4 )
		goto label_cond_641;
	//    .local v37, "result":Ljava/lang/String;
	goto label_goto_5fc;
	// 14251    .line 1828
	// 14252    .local v37, "result":Ljava/lang/String;
label_cond_641:
	if ( count != 0x5 )
		goto label_cond_5fc;
	//    .local v37, "result":Ljava/lang/String;
	goto label_goto_5fc;
	// 14278    .line 1836
	// 14279    .local v37, "result":Ljava/lang/String;
label_pswitch_655:
	if ( count >= 0x3 )
		goto label_cond_667;
	this->zeroPaddingNumber(currentNumberFormat, buf, value, 0x1, 0x7fffffff);
	goto label_goto_80;
	// 14300    .line 1842
label_cond_667:
	value = cal->get(0x7);
	if ( count != 0x5 )
		goto label_cond_682;
	android::icu::text::SimpleDateFormat::safeAppend(this->formatData->standaloneNarrowWeekdays, value, buf);
	android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::DAY_NARROW;
	goto label_goto_80;
	// 14333    .line 1846
label_cond_682:
	if ( count != 0x4 )
		goto label_cond_696;
	android::icu::text::SimpleDateFormat::safeAppend(this->formatData->standaloneWeekdays, value, buf);
	android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::DAY_STANDALONE;
	goto label_goto_80;
	// 14357    .line 1849
label_cond_696:
	if ( count != 0x6 )
		goto label_cond_6b2;
	if ( !(this->formatData->standaloneShorterWeekdays) )  
		goto label_cond_6b2;
	android::icu::text::SimpleDateFormat::safeAppend(this->formatData->standaloneShorterWeekdays, value, buf);
	android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::DAY_STANDALONE;
	goto label_goto_80;
	// 14389    .line 1853
label_cond_6b2:
	android::icu::text::SimpleDateFormat::safeAppend(this->formatData->standaloneShortWeekdays, value, buf);
	android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::DAY_STANDALONE;
	goto label_goto_80;
	// 14406    .line 1858
label_pswitch_6c1:
	if ( count <  0x4 )
		goto label_cond_6d5;
	android::icu::text::SimpleDateFormat::safeAppend(this->formatData->quarters, ( value / 0x3), buf);
	goto label_goto_80;
	// 14429    .line 1860
label_cond_6d5:
	if ( count != 0x3 )
		goto label_cond_6e9;
	android::icu::text::SimpleDateFormat::safeAppend(this->formatData->shortQuarters, ( value / 0x3), buf);
	goto label_goto_80;
	// 14452    .line 1863
label_cond_6e9:
	this->zeroPaddingNumber(currentNumberFormat, buf, ( ( value / 0x3) + 0x1), count, 0x7fffffff);
	goto label_goto_80;
	// 14472    .line 1867
label_pswitch_6fc:
	if ( count <  0x4 )
		goto label_cond_710;
	android::icu::text::SimpleDateFormat::safeAppend(this->formatData->standaloneQuarters, ( value / 0x3), buf);
	goto label_goto_80;
	// 14495    .line 1869
label_cond_710:
	if ( count != 0x3 )
		goto label_cond_724;
	android::icu::text::SimpleDateFormat::safeAppend(this->formatData->standaloneShortQuarters, ( value / 0x3), buf);
	goto label_goto_80;
	// 14518    .line 1872
label_cond_724:
	this->zeroPaddingNumber(currentNumberFormat, buf, ( ( value / 0x3) + 0x1), count, 0x7fffffff);
	goto label_goto_80;
	// 14538    .line 1880
label_pswitch_737:
	//    .local v27, "hour":I
	toAppend = 0x0;
	//    .local v41, "toAppend":Ljava/lang/String;
	if ( cal->get(0xb) != 0xc )
		goto label_cond_77c;
	if ( !(this->hasMinute) )  
		goto label_cond_757;
	if ( cal->get(0xc) )     
		goto label_cond_77c;
label_cond_757:
	if ( !(this->hasSecond) )  
		goto label_cond_767;
	if ( cal->get(0xd) )     
		goto label_cond_77c;
label_cond_767:
	value = cal->get(0x9);
	if ( count != 0x3 )
		goto label_cond_795;
	toAppend = this->formatData->abbreviatedDayPeriods[value];
	//    .end local v41    # "toAppend":Ljava/lang/String;
label_cond_77c:
label_goto_77c:
	if ( toAppend )     
		goto label_cond_7b1;
	this->subFormat(buf, 0x61, count, beginOffset, fieldNum, capitalizationContext, pos, cal);
	goto label_goto_80;
	// 14650    .line 1896
	// 14651    .restart local v41    # "toAppend":Ljava/lang/String;
label_cond_795:
	if ( count == 0x4 )
		goto label_cond_79f;
	if ( count <= 0x5 )
		goto label_cond_7a8;
label_cond_79f:
	toAppend = this->formatData->wideDayPeriods[value];
	//    .local v41, "toAppend":Ljava/lang/String;
	goto label_goto_77c;
	// 14678    .line 1899
	// 14679    .local v41, "toAppend":Ljava/lang/String;
label_cond_7a8:
	toAppend = this->formatData->narrowDayPeriods[value];
	//    .local v41, "toAppend":Ljava/lang/String;
	goto label_goto_77c;
	// 14692    .line 1908
	// 14693    .end local v41    # "toAppend":Ljava/lang/String;
label_cond_7b1:
	buf->append(toAppend);
	goto label_goto_80;
	// 14703    .line 1917
	// 14704    .end local v27    # "hour":I
label_pswitch_7ba:
	ruleSet = android::icu::impl::DayPeriodRules::getInstance(this->getLocale());
	//    .local v38, "ruleSet":Landroid/icu/impl/DayPeriodRules;
	if ( ruleSet )     
		goto label_cond_7db;
	this->subFormat(buf, 0x61, count, beginOffset, fieldNum, capitalizationContext, pos, cal);
	goto label_goto_80;
	// 14741    .line 1926
label_cond_7db:
	hour = cal->get(0xb);
	//    .restart local v27    # "hour":I
	0x0;
	//    .local v32, "minute":I
	0x0;
	//    .local v39, "second":I
	if ( !(this->hasMinute) )  
		goto label_cond_7f5;
	minute = cal->get(0xc);
label_cond_7f5:
	if ( !(this->hasSecond) )  
		goto label_cond_803;
	second = cal->get(0xd);
label_cond_803:
	if ( hour )     
		goto label_cond_81d;
	if ( minute )     
		goto label_cond_81d;
	if ( second )     
		goto label_cond_81d;
	if ( !(ruleSet->hasMidnight()) )  
		goto label_cond_81d;
	periodType = android::icu::impl::DayPeriodRules_S_DayPeriod::MIDNIGHT;
	//    .local v36, "periodType":Landroid/icu/impl/DayPeriodRules$DayPeriod;
label_goto_811:
	if ( android::icu::text::SimpleDateFormat::_assertionsDisabled )     
		goto label_cond_839;
	if ( periodType )     
		goto label_cond_839;
	cVar16 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar16;
	// 14823    .line 1936
	// 14824    .end local v36    # "periodType":Landroid/icu/impl/DayPeriodRules$DayPeriod;
label_cond_81d:
	if ( hour != 0xc )
		goto label_cond_830;
	if ( minute )     
		goto label_cond_830;
	if ( second )     
		goto label_cond_830;
	if ( !(ruleSet->hasNoon()) )  
		goto label_cond_830;
	periodType = android::icu::impl::DayPeriodRules_S_DayPeriod::NOON;
	//    .restart local v36    # "periodType":Landroid/icu/impl/DayPeriodRules$DayPeriod;
	goto label_goto_811;
	// 14848    .line 1939
	// 14849    .end local v36    # "periodType":Landroid/icu/impl/DayPeriodRules$DayPeriod;
label_cond_830:
	periodType = ruleSet->getDayPeriodForHour(hour);
	//    .restart local v36    # "periodType":Landroid/icu/impl/DayPeriodRules$DayPeriod;
	goto label_goto_811;
	// 14862    .line 1948
label_cond_839:
	//    .local v41, "toAppend":Ljava/lang/String;
	if ( periodType == android::icu::impl::DayPeriodRules_S_DayPeriod::AM )
		goto label_cond_85e;
	if ( periodType == android::icu::impl::DayPeriodRules_S_DayPeriod::PM )
		goto label_cond_85e;
	if ( periodType == android::icu::impl::DayPeriodRules_S_DayPeriod::MIDNIGHT )
		goto label_cond_85e;
	index = periodType->ordinal();
	//    .local v28, "index":I
	if ( count >  0x3 )
		goto label_cond_8a8;
	//    .end local v28    # "index":I
	//    .end local v41    # "toAppend":Ljava/lang/String;
label_cond_85e:
label_goto_85e:
	if ( 0x0 )     
		goto label_cond_885;
	if ( periodType == android::icu::impl::DayPeriodRules_S_DayPeriod::MIDNIGHT )
		goto label_cond_86c;
	if ( periodType != android::icu::impl::DayPeriodRules_S_DayPeriod::NOON )
		goto label_cond_885;
label_cond_86c:
	periodType = ruleSet->getDayPeriodForHour(hour);
	index = periodType->ordinal();
	//    .restart local v28    # "index":I
	if ( count >  0x3 )
		goto label_cond_8c4;
	toAppend = this->formatData->abbreviatedDayPeriods[index];
	//    .end local v28    # "index":I
label_cond_885:
label_goto_885:
	if ( periodType == android::icu::impl::DayPeriodRules_S_DayPeriod::AM )
		goto label_cond_891;
	if ( periodType != android::icu::impl::DayPeriodRules_S_DayPeriod::PM )
		goto label_cond_8e0;
label_cond_891:
	this->subFormat(buf, 0x61, count, beginOffset, fieldNum, capitalizationContext, pos, cal);
	goto label_goto_80;
	// 15003    .line 1956
	// 15004    .restart local v28    # "index":I
	// 15005    .restart local v41    # "toAppend":Ljava/lang/String;
label_cond_8a8:
	if ( count == 0x4 )
		goto label_cond_8b2;
	if ( count <= 0x5 )
		goto label_cond_8bb;
label_cond_8b2:
	//    .local v41, "toAppend":Ljava/lang/String;
	goto label_goto_85e;
	// 15032    .line 1959
	// 15033    .local v41, "toAppend":Ljava/lang/String;
label_cond_8bb:
	//    .local v41, "toAppend":Ljava/lang/String;
	goto label_goto_85e;
	// 15046    .line 1976
	// 15047    .end local v41    # "toAppend":Ljava/lang/String;
label_cond_8c4:
	if ( count == 0x4 )
		goto label_cond_8ce;
	if ( count <= 0x5 )
		goto label_cond_8d7;
label_cond_8ce:
	this->formatData->wideDayPeriods[index];
	//    .restart local v41    # "toAppend":Ljava/lang/String;
	goto label_goto_885;
	// 15074    .line 1979
	// 15075    .end local v41    # "toAppend":Ljava/lang/String;
label_cond_8d7:
	this->formatData->narrowDayPeriods[index];
	//    .restart local v41    # "toAppend":Ljava/lang/String;
	goto label_goto_885;
	// 15088    .line 1986
	// 15089    .end local v28    # "index":I
	// 15090    .end local v41    # "toAppend":Ljava/lang/String;
label_cond_8e0:
	if ( !(toAppend) )  
		goto label_cond_891;
	buf->append(toAppend);
	goto label_goto_80;
	// 15103    .line 1997
	// 15104    .end local v27    # "hour":I
	// 15105    .end local v32    # "minute":I
	// 15106    .end local v36    # "periodType":Landroid/icu/impl/DayPeriodRules$DayPeriod;
	// 15107    .end local v38    # "ruleSet":Landroid/icu/impl/DayPeriodRules;
	// 15108    .end local v39    # "second":I
label_pswitch_8eb:
	buf->append(this->formatData->getTimeSeparatorString());
	goto label_goto_80;
	// 15124    .line 2021
	// 15125    .end local v37    # "result":Ljava/lang/String;
	// 15126    .restart local v40    # "titlecase":Z
label_pswitch_8fa:
	titlecase = 0x1;
	goto label_goto_a1;
	// 15133    .line 2025
label_pswitch_8fe:
	if ( !(this->formatData->capitalization) )  
		goto label_cond_a1;
	transforms = this->formatData->capitalization->get(android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::OTHER);
	transforms->checkCast("bool[]");
	//    .local v42, "transforms":[Z
	if ( capitalizationContext != android::icu::text::DisplayContext::CAPITALIZATION_FOR_UI_LIST_OR_MENU )
		goto label_cond_91f;
	titlecase = transforms[0x0];
	//    .local v40, "titlecase":Z
	goto label_goto_a1;
	// 15174    .local v40, "titlecase":Z
label_cond_91f:
	titlecase = transforms[0x1];
	//    .local v40, "titlecase":Z
	goto label_goto_a1;
	// 15183    .line 2051
	// 15184    .end local v40    # "titlecase":Z
	// 15185    .end local v42    # "transforms":[Z
label_cond_924:
	if ( pos->getFieldAttribute() != android::icu::text::SimpleDateFormat::PATTERN_INDEX_TO_DATE_FORMAT_ATTRIBUTE[patternCharIndex] )
		goto label_cond_102;
	pos->setBeginIndex(beginOffset);
	pos->setEndIndex(((buf->length() + beginOffset) - bufstart));
	goto label_goto_102;
	// 15221    .line 1577
	// 15222    :pswitch_data_944
	// 15223    .packed-switch 0x0
	// 15224        :pswitch_109
	// 15225        :pswitch_186
	// 15226        :pswitch_1ce
	// 15227        :pswitch_74
	// 15228        :pswitch_313
	// 15229        :pswitch_74
	// 15230        :pswitch_74
	// 15231        :pswitch_74
	// 15232        :pswitch_33c
	// 15233        :pswitch_3ae
	// 15234        :pswitch_74
	// 15235        :pswitch_74
	// 15236        :pswitch_74
	// 15237        :pswitch_74
	// 15238        :pswitch_401
	// 15239        :pswitch_428
	// 15240        :pswitch_74
	// 15241        :pswitch_451
	// 15242        :pswitch_186
	// 15243        :pswitch_394
	// 15244        :pswitch_74
	// 15245        :pswitch_74
	// 15246        :pswitch_74
	// 15247        :pswitch_480
	// 15248        :pswitch_4bf
	// 15249        :pswitch_655
	// 15250        :pswitch_1ce
	// 15251        :pswitch_6c1
	// 15252        :pswitch_6fc
	// 15253        :pswitch_4f3
	// 15254        :pswitch_166
	// 15255        :pswitch_54d
	// 15256        :pswitch_57d
	// 15257        :pswitch_5e9
	// 15258        :pswitch_74
	// 15259        :pswitch_737
	// 15260        :pswitch_7ba
	// 15261        :pswitch_8eb
	// 15262    .end packed-switch
	// 15264    .line 2019
	// 15265    :pswitch_data_994
	// 15266    .packed-switch 0x1
	// 15267        :pswitch_8fa
	// 15268        :pswitch_8fe
	// 15269        :pswitch_8fe
	// 15270    .end packed-switch

}
// .method protected subParse(Ljava/lang/String;ICIZZ[ZLandroid/icu/util/Calendar;)I
int android::icu::text::SimpleDateFormat::subParse(std::shared_ptr<java::lang::String> text,int start,char ch,int count,bool obeyCount,bool allowNegative,std::shared_ptr<bool[]> ambiguousYear,std::shared_ptr<android::icu::util::Calendar> cal)
{
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "start"    # I
	//    .param p3, "ch"    # C
	//    .param p4, "count"    # I
	//    .param p5, "obeyCount"    # Z
	//    .param p6, "allowNegative"    # Z
	//    .param p7, "ambiguousYear"    # [Z
	//    .param p8, "cal"    # Landroid/icu/util/Calendar;
	return this->subParse(text, start, ch, count, obeyCount, allowNegative, ambiguousYear, cal, 0x0, 0x0);

}
// .method public toLocalizedPattern()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::SimpleDateFormat::toLocalizedPattern()
{
	
	return this->translatePattern(this->pattern, std::make_shared<java::lang::String>(std::make_shared<char[]>("GyMdkHmsSEDFwWahKzYeugAZvcLQqVUOXxrbB")), this->formatData->localPatternChars);

}
// .method public toPattern()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::SimpleDateFormat::toPattern()
{
	
	return this->pattern;

}
// .method protected zeroPaddingNumber(JII)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::SimpleDateFormat::zeroPaddingNumber(long long value,int minDigits,int maxDigits)
{
	
	//    .param p1, "value"    # J
	//    .param p3, "minDigits"    # I
	//    .param p4, "maxDigits"    # I
	this->numberFormat->setMinimumIntegerDigits(minDigits);
	this->numberFormat->setMaximumIntegerDigits(maxDigits);
	return this->numberFormat->format(value);

}
// .method protected zeroPaddingNumber(Landroid/icu/text/NumberFormat;Ljava/lang/StringBuffer;III)V
void android::icu::text::SimpleDateFormat::zeroPaddingNumber(std::shared_ptr<android::icu::text::NumberFormat> nf,std::shared_ptr<java::lang::StringBuffer> buf,int value,int minDigits,int maxDigits)
{
	
	std::shared_ptr<java::text::FieldPosition> cVar0;
	
	//    .param p1, "nf"    # Landroid/icu/text/NumberFormat;
	//    .param p2, "buf"    # Ljava/lang/StringBuffer;
	//    .param p3, "value"    # I
	//    .param p4, "minDigits"    # I
	//    .param p5, "maxDigits"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 15383    .end annotation
	if ( !(this->useLocalZeroPaddingNumberFormat) )  
		goto label_cond_a;
	if ( value < 0 ) 
		goto label_cond_a;
	this->fastZeroPaddingNumber(buf, value, minDigits, maxDigits);
label_goto_9:
	return;
	// 15400    .line 2196
label_cond_a:
	nf->setMinimumIntegerDigits(minDigits);
	nf->setMaximumIntegerDigits(maxDigits);
	cVar0 = std::make_shared<java::text::FieldPosition>(-0x1);
	nf->format((long long)(value), buf, cVar0);
	goto label_goto_9;

}


