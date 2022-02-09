// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\Calendar.smali
#include "java2ctype.h"
#include "android.icu.impl.CalendarUtil.h"
#include "android.icu.impl.ICUCache.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.SimpleCache.h"
#include "android.icu.impl.SimpleFormatterImpl.h"
#include "android.icu.text.DateFormat.h"
#include "android.icu.text.DateFormatSymbols.h"
#include "android.icu.text.SimpleDateFormat.h"
#include "android.icu.util.BasicTimeZone.h"
#include "android.icu.util.BuddhistCalendar.h"
#include "android.icu.util.Calendar_S_CalType.h"
#include "android.icu.util.Calendar_S_FormatConfiguration.h"
#include "android.icu.util.Calendar_S_PatternData.h"
#include "android.icu.util.Calendar_S_WeekData.h"
#include "android.icu.util.Calendar_S_WeekDataCache.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.ChineseCalendar.h"
#include "android.icu.util.CopticCalendar.h"
#include "android.icu.util.DangiCalendar.h"
#include "android.icu.util.EthiopicCalendar.h"
#include "android.icu.util.GregorianCalendar.h"
#include "android.icu.util.HebrewCalendar.h"
#include "android.icu.util.ICUCloneNotSupportedException.h"
#include "android.icu.util.IndianCalendar.h"
#include "android.icu.util.IslamicCalendar.h"
#include "android.icu.util.JapaneseCalendar.h"
#include "android.icu.util.PersianCalendar.h"
#include "android.icu.util.TaiwanCalendar.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.TimeZoneTransition.h"
#include "android.icu.util.ULocale_S_Category.h"
#include "android.icu.util.ULocale_S_Type.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.ObjectOutputStream.h"
#include "java.lang.ArrayIndexOutOfBoundsException.h"
#include "java.lang.AssertionError.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.CloneNotSupportedException.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.Integer.h"
#include "java.lang.Long.h"
#include "java.lang.Math.h"
#include "java.lang.NoSuchFieldError.h"
#include "java.lang.Object.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.Throwable.h"
#include "java.text.StringCharacterIterator.h"
#include "java.util.ArrayList.h"
#include "java.util.Date.h"
#include "java.util.Iterator.h"
#include "java.util.Locale.h"
#include "java.util.MissingResourceException.h"

static android::icu::util::Calendar::_android_icu_util_Calendar_S_CalTypeSwitchesValues = nullptr;
static android::icu::util::Calendar::_assertionsDisabled;
static android::icu::util::Calendar::AM = 0x0;
static android::icu::util::Calendar::AM_PM = 0x9;
static android::icu::util::Calendar::APRIL = 0x3;
static android::icu::util::Calendar::AUGUST = 0x7;
static android::icu::util::Calendar::BASE_FIELD_COUNT = 0x17;
static android::icu::util::Calendar::DATE = 0x5;
static android::icu::util::Calendar::DATE_PRECEDENCE;
static android::icu::util::Calendar::DAY_OF_MONTH = 0x5;
static android::icu::util::Calendar::DAY_OF_WEEK = 0x7;
static android::icu::util::Calendar::DAY_OF_WEEK_IN_MONTH = 0x8;
static android::icu::util::Calendar::DAY_OF_YEAR = 0x6;
static android::icu::util::Calendar::DECEMBER = 0xb;
static android::icu::util::Calendar::DEFAULT_PATTERNS;
static android::icu::util::Calendar::DOW_LOCAL = 0x12;
static android::icu::util::Calendar::DOW_PRECEDENCE;
static android::icu::util::Calendar::DST_OFFSET = 0x10;
static android::icu::util::Calendar::EPOCH_JULIAN_DAY = 0x253d8c;
static android::icu::util::Calendar::ERA = 0x0;
static android::icu::util::Calendar::EXTENDED_YEAR = 0x13;
static android::icu::util::Calendar::FEBRUARY = 0x1;
static android::icu::util::Calendar::FIELD_DIFF_MAX_INT = 0x7fffffff;
static android::icu::util::Calendar::FIELD_NAME;
static android::icu::util::Calendar::FIND_ZONE_TRANSITION_TIME_UNITS;
static android::icu::util::Calendar::FRIDAY = 0x6;
static android::icu::util::Calendar::GREATEST_MINIMUM = 0x1;
static android::icu::util::Calendar::GREGORIAN_MONTH_COUNT;
static android::icu::util::Calendar::HOUR = 0xa;
static android::icu::util::Calendar::HOUR_OF_DAY = 0xb;
static android::icu::util::Calendar::INTERNALLY_SET = 0x1;
static android::icu::util::Calendar::IS_LEAP_MONTH = 0x16;
static android::icu::util::Calendar::JANUARY = 0x0;
static android::icu::util::Calendar::JAN_1_1_JULIAN_DAY = 0x1a4452;
static android::icu::util::Calendar::JULIAN_DAY = 0x14;
static android::icu::util::Calendar::JULY = 0x6;
static android::icu::util::Calendar::JUNE = 0x5;
static android::icu::util::Calendar::LEAST_MAXIMUM = 0x2;
static android::icu::util::Calendar::LIMITS;
static android::icu::util::Calendar::MARCH = 0x2;
static android::icu::util::Calendar::MAXIMUM = 0x3;
static android::icu::util::Calendar::MAX_DATE;
static android::icu::util::Calendar::MAX_FIELD_COUNT = 0x20;
static android::icu::util::Calendar::MAX_JULIAN = 0x7f000000;
static android::icu::util::Calendar::MAX_MILLIS = 0x28d47dbbf19b000L;
static android::icu::util::Calendar::MAY = 0x4;
static android::icu::util::Calendar::MILLISECOND = 0xe;
static android::icu::util::Calendar::MILLISECONDS_IN_DAY = 0x15;
static android::icu::util::Calendar::MINIMUM = 0x0;
static android::icu::util::Calendar::MINIMUM_USER_STAMP = 0x2;
static android::icu::util::Calendar::MINUTE = 0xc;
static android::icu::util::Calendar::MIN_DATE;
static android::icu::util::Calendar::MIN_JULIAN = -0x7f000000;
static android::icu::util::Calendar::MIN_MILLIS = -0x28ec76c40e65000L;
static android::icu::util::Calendar::MONDAY = 0x2;
static android::icu::util::Calendar::MONTH = 0x2;
static android::icu::util::Calendar::NOVEMBER = 0xa;
static android::icu::util::Calendar::OCTOBER = 0x9;
static android::icu::util::Calendar::ONE_DAY = 0x5265c00L;
static android::icu::util::Calendar::ONE_HOUR = 0x36ee80;
static android::icu::util::Calendar::ONE_MINUTE = 0xea60;
static android::icu::util::Calendar::ONE_SECOND = 0x3e8;
static android::icu::util::Calendar::ONE_WEEK = 0x240c8400L;
static android::icu::util::Calendar::PATTERN_CACHE;
static android::icu::util::Calendar::PM = 0x1;
static android::icu::util::Calendar::QUOTE = '\'';
static android::icu::util::Calendar::RESOLVE_REMAP = 0x20;
static android::icu::util::Calendar::SATURDAY = 0x7;
static android::icu::util::Calendar::SECOND = 0xd;
static android::icu::util::Calendar::SEPTEMBER = 0x8;
static android::icu::util::Calendar::STAMP_MAX = 0x0;
static android::icu::util::Calendar::SUNDAY = 0x1;
static android::icu::util::Calendar::THURSDAY = 0x5;
static android::icu::util::Calendar::TUESDAY = 0x3;
static android::icu::util::Calendar::UNDECIMBER = 0xc;
static android::icu::util::Calendar::UNSET = 0x0;
static android::icu::util::Calendar::WALLTIME_FIRST = 0x1;
static android::icu::util::Calendar::WALLTIME_LAST = 0x0;
static android::icu::util::Calendar::WALLTIME_NEXT_VALID = 0x2;
static android::icu::util::Calendar::WEDNESDAY = 0x4;
static android::icu::util::Calendar::WEEKDAY = 0x0;
static android::icu::util::Calendar::WEEKEND = 0x1;
static android::icu::util::Calendar::WEEKEND_CEASE = 0x3;
static android::icu::util::Calendar::WEEKEND_ONSET = 0x2;
static android::icu::util::Calendar::WEEK_DATA_CACHE;
static android::icu::util::Calendar::WEEK_OF_MONTH = 0x4;
static android::icu::util::Calendar::WEEK_OF_YEAR = 0x3;
static android::icu::util::Calendar::YEAR = 0x1;
static android::icu::util::Calendar::YEAR_WOY = 0x11;
static android::icu::util::Calendar::ZONE_OFFSET = 0xf;
static android::icu::util::Calendar::serialVersionUID = 0x565b47a9d4dd4fcdL;
// .method static synthetic -get0()[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Calendar::_get0()
{
	
	return android::icu::util::Calendar::DEFAULT_PATTERNS;

}
// .method static synthetic -get1()Landroid/icu/impl/ICUCache;
std::shared_ptr<android::icu::impl::ICUCache> android::icu::util::Calendar::_get1()
{
	
	return android::icu::util::Calendar::PATTERN_CACHE;

}
// .method private static synthetic -getandroid-icu-util-Calendar$CalTypeSwitchesValues()[I
int android::icu::util::Calendar::_getandroid_icu_util_Calendar_S_CalTypeSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(android::icu::util::Calendar::_android_icu_util_Calendar_S_CalTypeSwitchesValues) )  
		goto label_cond_7;
	return android::icu::util::Calendar::_android_icu_util_Calendar_S_CalTypeSwitchesValues;
label_cond_7:
	cVar0 = std::make_shared<std::vector<int[]>>(android::icu::util::Calendar_S_CalType::values({const[class].FS-Param})->size());
	try {
	//label_try_start_e:
	cVar0[android::icu::util::Calendar_S_CalType::BUDDHIST->ordinal()] = 0x1;
	//label_try_end_17:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_f3;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_e .. :try_end_17} :catch_f3
label_goto_17:
	try {
	//label_try_start_17:
	cVar0[android::icu::util::Calendar_S_CalType::CHINESE->ordinal()] = 0x2;
	//label_try_end_20:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_f0;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_17 .. :try_end_20} :catch_f0
label_goto_20:
	try {
	//label_try_start_20:
	cVar0[android::icu::util::Calendar_S_CalType::COPTIC->ordinal()] = 0x3;
	//label_try_end_29:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_ed;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_20 .. :try_end_29} :catch_ed
label_goto_29:
	try {
	//label_try_start_29:
	cVar0[android::icu::util::Calendar_S_CalType::DANGI->ordinal()] = 0x4;
	//label_try_end_32:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_ea;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_29 .. :try_end_32} :catch_ea
label_goto_32:
	try {
	//label_try_start_32:
	cVar0[android::icu::util::Calendar_S_CalType::ETHIOPIC->ordinal()] = 0x5;
	//label_try_end_3b:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_e7;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_32 .. :try_end_3b} :catch_e7
label_goto_3b:
	try {
	//label_try_start_3b:
	cVar0[android::icu::util::Calendar_S_CalType::ETHIOPIC_AMETE_ALEM->ordinal()] = 0x6;
	//label_try_end_44:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_e4;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_3b .. :try_end_44} :catch_e4
label_goto_44:
	try {
	//label_try_start_44:
	cVar0[android::icu::util::Calendar_S_CalType::GREGORIAN->ordinal()] = 0x7;
	//label_try_end_4d:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_e1;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_44 .. :try_end_4d} :catch_e1
label_goto_4d:
	try {
	//label_try_start_4d:
	cVar0[android::icu::util::Calendar_S_CalType::HEBREW->ordinal()] = 0x8;
	//label_try_end_57:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_de;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_4d .. :try_end_57} :catch_de
label_goto_57:
	try {
	//label_try_start_57:
	cVar0[android::icu::util::Calendar_S_CalType::INDIAN->ordinal()] = 0x9;
	//label_try_end_61:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_dc;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_57 .. :try_end_61} :catch_dc
label_goto_61:
	try {
	//label_try_start_61:
	cVar0[android::icu::util::Calendar_S_CalType::ISLAMIC->ordinal()] = 0xa;
	//label_try_end_6b:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_da;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_61 .. :try_end_6b} :catch_da
label_goto_6b:
	try {
	//label_try_start_6b:
	cVar0[android::icu::util::Calendar_S_CalType::ISLAMIC_CIVIL->ordinal()] = 0xb;
	//label_try_end_75:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_d8;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_6b .. :try_end_75} :catch_d8
label_goto_75:
	try {
	//label_try_start_75:
	cVar0[android::icu::util::Calendar_S_CalType::ISLAMIC_RGSA->ordinal()] = 0xc;
	//label_try_end_7f:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_d6;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_75 .. :try_end_7f} :catch_d6
label_goto_7f:
	try {
	//label_try_start_7f:
	cVar0[android::icu::util::Calendar_S_CalType::ISLAMIC_TBLA->ordinal()] = 0xd;
	//label_try_end_89:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_d4;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_7f .. :try_end_89} :catch_d4
label_goto_89:
	try {
	//label_try_start_89:
	cVar0[android::icu::util::Calendar_S_CalType::ISLAMIC_UMALQURA->ordinal()] = 0xe;
	//label_try_end_93:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_d2;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_89 .. :try_end_93} :catch_d2
label_goto_93:
	try {
	//label_try_start_93:
	cVar0[android::icu::util::Calendar_S_CalType::ISO8601->ordinal()] = 0xf;
	//label_try_end_9d:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_d0;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_93 .. :try_end_9d} :catch_d0
label_goto_9d:
	try {
	//label_try_start_9d:
	cVar0[android::icu::util::Calendar_S_CalType::JAPANESE->ordinal()] = 0x10;
	//label_try_end_a7:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_ce;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_9d .. :try_end_a7} :catch_ce
label_goto_a7:
	try {
	//label_try_start_a7:
	cVar0[android::icu::util::Calendar_S_CalType::PERSIAN->ordinal()] = 0x11;
	//label_try_end_b1:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_cc;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_a7 .. :try_end_b1} :catch_cc
label_goto_b1:
	try {
	//label_try_start_b1:
	cVar0[android::icu::util::Calendar_S_CalType::ROC->ordinal()] = 0x12;
	//label_try_end_bb:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_ca;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_b1 .. :try_end_bb} :catch_ca
label_goto_bb:
	try {
	//label_try_start_bb:
	cVar0[android::icu::util::Calendar_S_CalType::UNKNOWN->ordinal()] = 0x13;
	//label_try_end_c5:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_c8;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_bb .. :try_end_c5} :catch_c8
label_goto_c5:
	android::icu::util::Calendar::_android_icu_util_Calendar_S_CalTypeSwitchesValues = cVar0;
	return cVar0;
label_catch_c8:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_c5;
label_catch_ca:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_bb;
label_catch_cc:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_b1;
label_catch_ce:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_a7;
label_catch_d0:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_9d;
label_catch_d2:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_93;
label_catch_d4:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_89;
label_catch_d6:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_7f;
label_catch_d8:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_75;
label_catch_da:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_6b;
label_catch_dc:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_61;
label_catch_de:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_57;
label_catch_e1:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_4d;
label_catch_e4:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_44;
label_catch_e7:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_3b;
label_catch_ea:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_32;
label_catch_ed:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_29;
label_catch_f0:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_20;
label_catch_f3:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_17;

}
// .method static synthetic -wrap0(Landroid/icu/util/ULocale;Ljava/lang/String;)Landroid/icu/util/Calendar$PatternData;
std::shared_ptr<android::icu::util::Calendar_S_PatternData> android::icu::util::Calendar::_wrap0(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> calType)
{
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "calType"    # Ljava/lang/String;
	return android::icu::util::Calendar::getPatternData(locale, calType);

}
// .method static synthetic -wrap1(Ljava/lang/String;)Landroid/icu/util/Calendar$WeekData;
std::shared_ptr<android::icu::util::Calendar_S_WeekData> android::icu::util::Calendar::_wrap1(std::shared_ptr<java::lang::String> region)
{
	
	//    .param p0, "region"    # Ljava/lang/String;
	return android::icu::util::Calendar::getWeekDataForRegionInternal(region);

}
// .method static constructor <clinit>()V
void android::icu::util::Calendar::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<java::util::Date> cVar5;
	std::shared_ptr<java::util::Date> cVar6;
	std::shared_ptr<android::icu::impl::SimpleCache> cVar7;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar8;
	std::shared<std::vector<int[][]>> cVar9;
	std::shared_ptr<android::icu::util::Calendar_S_WeekDataCache> cVar10;
	std::shared<std::vector<int[][][]>> cVar11;
	std::shared<std::vector<int[][]>> cVar12;
	std::shared<std::vector<int[]>> cVar13;
	std::shared<std::vector<int[]>> cVar14;
	std::shared<std::vector<int[][]>> cVar15;
	std::shared<std::vector<int[]>> cVar16;
	std::shared<std::vector<int[]>> cVar17;
	std::shared<std::vector<int[]>> cVar18;
	std::shared<std::vector<int[][][]>> cVar19;
	std::shared<std::vector<int[][]>> cVar20;
	std::shared<std::vector<int[]>> cVar21;
	std::shared<std::vector<int[]>> cVar22;
	std::shared<std::vector<int[][]>> cVar23;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar24;
	
	cVar0 = 0x3;
	cVar1 = 0x7;
	cVar2 = 0x1f;
	cVar3 = 0x1;
	cVar4 = 0x0;
	android::icu::util::Calendar::_assertionsDisabled = ( android::icu::util::Calendar()->desiredAssertionStatus() ^ 0x1);
	cVar5 = std::make_shared<java::util::Date>(-0x28ec76c40e65000L);
	android::icu::util::Calendar::MIN_DATE = cVar5;
	cVar6 = std::make_shared<java::util::Date>(0x28d47dbbf19b000L);
	android::icu::util::Calendar::MAX_DATE = cVar6;
	android::icu::util::Calendar::STAMP_MAX = 0x2710;
	cVar7 = std::make_shared<android::icu::impl::SimpleCache>();
	android::icu::util::Calendar::PATTERN_CACHE = cVar7;
	cVar8 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0xd);
	cVar8[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("HH:mm:ss z"));
	cVar8[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("HH:mm:ss z"));
	cVar8[0x2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("HH:mm:ss"));
	cVar8[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("HH:mm"));
	cVar8[0x4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("EEEE, yyyy MMMM dd"));
	cVar8[0x5] = std::make_shared<java::lang::String>(std::make_shared<char[]>("yyyy MMMM d"));
	cVar8[0x6] = std::make_shared<java::lang::String>(std::make_shared<char[]>("yyyy MMM d"));
	cVar8[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("yy/MM/dd"));
	cVar8[0x8] = std::make_shared<java::lang::String>(std::make_shared<char[]>("{1} {0}"));
	cVar8[0x9] = std::make_shared<java::lang::String>(std::make_shared<char[]>("{1} {0}"));
	cVar8[0xa] = std::make_shared<java::lang::String>(std::make_shared<char[]>("{1} {0}"));
	cVar8[0xb] = std::make_shared<java::lang::String>(std::make_shared<char[]>("{1} {0}"));
	cVar8[0xc] = std::make_shared<java::lang::String>(std::make_shared<char[]>("{1} {0}"));
	android::icu::util::Calendar::DEFAULT_PATTERNS = cVar8;
	cVar9 = std::make_shared<std::vector<int[][]>>(0x17);
	cVar9[cVar4] = std::make_shared<std::vector<int[]>>(cVar4);
	cVar9[cVar3] = std::make_shared<std::vector<int[]>>(cVar4);
	cVar9[0x2] = std::make_shared<std::vector<int[]>>(cVar4);
	cVar9[cVar0] = std::make_shared<std::vector<int[]>>(cVar4);
	cVar9[0x4] = std::make_shared<std::vector<int[]>>(cVar4);
	cVar9[0x5] = std::make_shared<std::vector<int[]>>(cVar4);
	cVar9[0x6] = std::make_shared<std::vector<int[]>>(cVar4);
	?;
	cVar9[cVar1] = ?;
	cVar9[0x8] = std::make_shared<std::vector<int[]>>(cVar4);
	?;
	cVar9[0x9] = ?;
	?;
	cVar9[0xa] = ?;
	?;
	cVar9[0xb] = ?;
	?;
	cVar9[0xc] = ?;
	?;
	cVar9[0xd] = ?;
	?;
	cVar9[0xe] = ?;
	?;
	cVar9[0xf] = ?;
	?;
	cVar9[0x10] = ?;
	cVar9[0x11] = std::make_shared<std::vector<int[]>>(cVar4);
	?;
	cVar9[0x12] = ?;
	cVar9[0x13] = std::make_shared<std::vector<int[]>>(cVar4);
	?;
	cVar9[0x14] = ?;
	?;
	cVar9[0x15] = ?;
	?;
	cVar9[0x16] = ?;
	android::icu::util::Calendar::LIMITS = cVar9;
	cVar10 = std::make_shared<android::icu::util::Calendar_S_WeekDataCache>(0x0);
	android::icu::util::Calendar::WEEK_DATA_CACHE = cVar10;
	cVar11 = std::make_shared<std::vector<int[][][]>>(0x2);
	cVar12 = std::make_shared<std::vector<int[][]>>(0xa);
	cVar13 = std::make_shared<std::vector<int[]>>(cVar3);
	cVar13[cVar4] = 0x5;
	cVar12[cVar4] = cVar13;
	?;
	cVar12[cVar3] = ?;
	?;
	cVar12[0x2] = ?;
	?;
	cVar12[cVar0] = ?;
	?;
	cVar12[0x4] = ?;
	?;
	cVar12[0x5] = ?;
	?;
	cVar12[0x6] = ?;
	cVar14 = std::make_shared<std::vector<int[]>>(cVar3);
	cVar14[cVar4] = 0x6;
	cVar12[cVar1] = cVar14;
	?;
	cVar12[0x8] = ?;
	?;
	cVar12[0x9] = ?;
	cVar11[cVar4] = cVar12;
	cVar15 = std::make_shared<std::vector<int[][]>>(0x5);
	cVar16 = std::make_shared<std::vector<int[]>>(cVar3);
	cVar16[cVar4] = cVar0;
	cVar15[cVar4] = cVar16;
	cVar17 = std::make_shared<std::vector<int[]>>(cVar3);
	cVar17[cVar4] = 0x4;
	cVar15[cVar3] = cVar17;
	cVar18 = std::make_shared<std::vector<int[]>>(cVar3);
	cVar18[cVar4] = 0x8;
	cVar15[0x2] = cVar18;
	?;
	cVar15[cVar0] = ?;
	?;
	cVar15[0x4] = ?;
	cVar11[cVar3] = cVar15;
	android::icu::util::Calendar::DATE_PRECEDENCE = cVar11;
	cVar19 = std::make_shared<std::vector<int[][][]>>(cVar3);
	cVar20 = std::make_shared<std::vector<int[][]>>(0x2);
	cVar21 = std::make_shared<std::vector<int[]>>(cVar3);
	cVar21[cVar4] = cVar1;
	cVar20[cVar4] = cVar21;
	cVar22 = std::make_shared<std::vector<int[]>>(cVar3);
	cVar22[cVar4] = 0x12;
	cVar20[cVar3] = cVar22;
	cVar19[cVar4] = cVar20;
	android::icu::util::Calendar::DOW_PRECEDENCE = cVar19;
	?;
	android::icu::util::Calendar::FIND_ZONE_TRANSITION_TIME_UNITS = ?;
	cVar23 = std::make_shared<std::vector<int[][]>>(0xc);
	?;
	cVar23[cVar4] = ?;
	?;
	cVar23[cVar3] = ?;
	?;
	cVar23[0x2] = ?;
	?;
	cVar23[cVar0] = ?;
	?;
	cVar23[0x4] = ?;
	?;
	cVar23[0x5] = ?;
	?;
	cVar23[0x6] = ?;
	?;
	cVar23[cVar1] = ?;
	?;
	cVar23[0x8] = ?;
	?;
	cVar23[0x9] = ?;
	?;
	cVar23[0xa] = ?;
	?;
	cVar23[0xb] = ?;
	android::icu::util::Calendar::GREGORIAN_MONTH_COUNT = cVar23;
	cVar24 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x16);
	cVar24[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ERA"));
	cVar24[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("YEAR"));
	cVar24[0x2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("MONTH"));
	cVar24[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("WEEK_OF_YEAR"));
	cVar24[0x4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("WEEK_OF_MONTH"));
	cVar24[0x5] = std::make_shared<java::lang::String>(std::make_shared<char[]>("DAY_OF_MONTH"));
	cVar24[0x6] = std::make_shared<java::lang::String>(std::make_shared<char[]>("DAY_OF_YEAR"));
	cVar24[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("DAY_OF_WEEK"));
	cVar24[0x8] = std::make_shared<java::lang::String>(std::make_shared<char[]>("DAY_OF_WEEK_IN_MONTH"));
	cVar24[0x9] = std::make_shared<java::lang::String>(std::make_shared<char[]>("AM_PM"));
	cVar24[0xa] = std::make_shared<java::lang::String>(std::make_shared<char[]>("HOUR"));
	cVar24[0xb] = std::make_shared<java::lang::String>(std::make_shared<char[]>("HOUR_OF_DAY"));
	cVar24[0xc] = std::make_shared<java::lang::String>(std::make_shared<char[]>("MINUTE"));
	cVar24[0xd] = std::make_shared<java::lang::String>(std::make_shared<char[]>("SECOND"));
	cVar24[0xe] = std::make_shared<java::lang::String>(std::make_shared<char[]>("MILLISECOND"));
	cVar24[0xf] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ZONE_OFFSET"));
	cVar24[0x10] = std::make_shared<java::lang::String>(std::make_shared<char[]>("DST_OFFSET"));
	cVar24[0x11] = std::make_shared<java::lang::String>(std::make_shared<char[]>("YEAR_WOY"));
	cVar24[0x12] = std::make_shared<java::lang::String>(std::make_shared<char[]>("DOW_LOCAL"));
	cVar24[0x13] = std::make_shared<java::lang::String>(std::make_shared<char[]>("EXTENDED_YEAR"));
	cVar24[0x14] = std::make_shared<java::lang::String>(std::make_shared<char[]>("JULIAN_DAY"));
	cVar24[0x15] = std::make_shared<java::lang::String>(std::make_shared<char[]>("MILLISECONDS_IN_DAY"));
	android::icu::util::Calendar::FIELD_NAME = cVar24;
	return;

}
// .method protected constructor <init>()V
android::icu::util::Calendar::Calendar()
{
	
	android::icu::util::Calendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));
	return;

}
// .method protected constructor <init>(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V
android::icu::util::Calendar::Calendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	int cVar0;
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	cVar0 = 0x0;
	// 1681    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->lenient = 0x1;
	this->repeatedWallTime = cVar0;
	this->skippedWallTime = cVar0;
	this->nextStamp = 0x2;
	this->zone = zone;
	this->setWeekData(android::icu::util::Calendar::getRegionForCalendar(locale));
	this->setCalendarLocale(locale);
	this->initInternal();
	return;

}
// .method protected constructor <init>(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V
android::icu::util::Calendar::Calendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<java::util::Locale> aLocale)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	//    .param p2, "aLocale"    # Ljava/util/Locale;
	android::icu::util::Calendar::(zone, android::icu::util::ULocale::forLocale(aLocale));
	return;

}
// .method private compare(Ljava/lang/Object;)J
long long android::icu::util::Calendar::compare(std::shared_ptr<java::lang::Object> that)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "that"    # Ljava/lang/Object;
	if ( !(that->instanceOf("android::icu::util::Calendar")) )  
		goto label_cond_10;
	that->checkCast("android::icu::util::Calendar");
	//    .end local p1    # "that":Ljava/lang/Object;
	//    .local v0, "thatMs":J
label_goto_a:
	return (this->getTimeInMillis() -  thatMs);
	// 1765    .line 2341
	// 1766    .end local v0    # "thatMs":J
	// 1767    .restart local p1    # "that":Ljava/lang/Object;
label_cond_10:
	if ( !(that->instanceOf("java::util::Date")) )  
		goto label_cond_1b;
	that->checkCast("java::util::Date");
	//    .end local p1    # "that":Ljava/lang/Object;
	//    .restart local v0    # "thatMs":J
	goto label_goto_a;
	// 1784    .line 2344
	// 1785    .end local v0    # "thatMs":J
	// 1786    .restart local p1    # "that":Ljava/lang/Object;
label_cond_1b:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(that)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("is not a Calendar or Date")))->toString());
	// throw
	throw cVar0;

}
// .method private final computeGregorianAndDOWFields(I)V
void android::icu::util::Calendar::computeGregorianAndDOWFields(int julianDay)
{
	
	int dow;
	int dowLocal;
	
	//    .param p1, "julianDay"    # I
	this->computeGregorianFields(julianDay);
	dow = android::icu::util::Calendar::julianDayToDayOfWeek(julianDay);
	this->fields[0x7] = dow;
	//    .local v0, "dow":I
	dowLocal = ( (dow - this->getFirstDayOfWeek()) + 0x1);
	//    .local v1, "dowLocal":I
	if ( dowLocal >= 0x1 )
		goto label_cond_19;
label_cond_19:
	this->fields[0x12] = dowLocal;
	return;

}
// .method private final computeWeekFields()V
void android::icu::util::Calendar::computeWeekFields()
{
	
	int eyear;
	int dayOfWeek;
	int dayOfYear;
	int yearOfWeekOfYear;
	int relDow;
	int relDowJan1;
	int woy;
	int dayOfMonth;
	int lastDoy;
	int lastRelDow;
	
	eyear = this->fields[0x13];
	//    .local v3, "eyear":I
	dayOfWeek = this->fields[0x7];
	//    .local v1, "dayOfWeek":I
	dayOfYear = this->fields[0x6];
	//    .local v2, "dayOfYear":I
	yearOfWeekOfYear = eyear;
	//    .local v10, "yearOfWeekOfYear":I
	relDow = ( (( dayOfWeek + 0x7) -  this->getFirstDayOfWeek()) % 0x7);
	//    .local v7, "relDow":I
	relDowJan1 = ( (( (dayOfWeek - dayOfYear) + 0x1b59) -  this->getFirstDayOfWeek()) % 0x7);
	//    .local v8, "relDowJan1":I
	woy = ( (( dayOfYear + -0x1) +  relDowJan1) / 0x7);
	//    .local v9, "woy":I
	if ( ( relDowJan1 - 0x7) <  this->getMinimalDaysInFirstWeek() )
		goto label_cond_34;
	woy = ( woy + 0x1);
label_cond_34:
	if ( woy )     
		goto label_cond_6a;
	//    .local v6, "prevDoy":I
	woy = this->weekNumber((dayOfYear + this->handleGetYearLength(( eyear + -0x1))), dayOfWeek);
	yearOfWeekOfYear = ( eyear + -0x1);
	//    .end local v6    # "prevDoy":I
label_cond_44:
label_goto_44:
	this->fields[0x3] = woy;
	this->fields[0x11] = yearOfWeekOfYear;
	dayOfMonth = this->fields[0x5];
	//    .local v0, "dayOfMonth":I
	this->fields[0x4] = this->weekNumber(dayOfMonth, dayOfWeek);
	this->fields[0x8] = ( ( ( dayOfMonth + -0x1) / 0x7) + 0x1);
	return;
	// 2015    .line 5032
	// 2016    .end local v0    # "dayOfMonth":I
label_cond_6a:
	lastDoy = this->handleGetYearLength(eyear);
	//    .local v4, "lastDoy":I
	if ( dayOfYear <  ( lastDoy + -0x5) )
		goto label_cond_44;
	lastRelDow = ( ((relDow + lastDoy) -  dayOfYear) % 0x7);
	//    .local v5, "lastRelDow":I
	if ( lastRelDow >= 0 )
		goto label_cond_7b;
label_cond_7b:
	if ( ( lastRelDow - 0x6) <  this->getMinimalDaysInFirstWeek() )
		goto label_cond_44;
	if ( (( dayOfYear + 0x7) -  relDow) <= lastDoy )
		goto label_cond_44;
	woy = 0x1;
	yearOfWeekOfYear = ( eyear + 0x1);
	goto label_goto_44;

}
// .method private static createInstance(Landroid/icu/util/ULocale;)Landroid/icu/util/Calendar;
std::shared_ptr<android::icu::util::Calendar> android::icu::util::Calendar::createInstance(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<android::icu::util::TimeZone> zone;
	std::shared_ptr<android::icu::util::Calendar_S_CalType> calType;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<android::icu::util::BuddhistCalendar> cal;
	std::shared_ptr<android::icu::util::ChineseCalendar> cal;
	std::shared_ptr<android::icu::util::CopticCalendar> cal;
	std::shared_ptr<android::icu::util::DangiCalendar> cal;
	std::shared_ptr<android::icu::util::EthiopicCalendar> cal;
	std::shared_ptr<android::icu::util::EthiopicCalendar> cVar1;
	std::shared_ptr<android::icu::util::GregorianCalendar> cal;
	std::shared_ptr<android::icu::util::HebrewCalendar> cal;
	std::shared_ptr<android::icu::util::IndianCalendar> cal;
	std::shared_ptr<android::icu::util::IslamicCalendar> cal;
	std::shared_ptr<android::icu::util::JapaneseCalendar> cal;
	std::shared_ptr<android::icu::util::PersianCalendar> cal;
	std::shared_ptr<android::icu::util::TaiwanCalendar> cal;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	0x0;
	//    .local v0, "cal":Landroid/icu/util/Calendar;
	zone = android::icu::util::TimeZone::getDefault({const[class].FS-Param});
	//    .local v2, "zone":Landroid/icu/util/TimeZone;
	calType = android::icu::util::Calendar::getCalendarTypeForLocale(locale);
	//    .local v1, "calType":Landroid/icu/util/Calendar$CalType;
	if ( calType != android::icu::util::Calendar_S_CalType::UNKNOWN )
		goto label_cond_f;
label_cond_f:
	// switch
	{
	auto item = ( android::icu::util::Calendar::-getandroid-icu-util-Calendar$CalTypeSwitchesValues({const[class].FS-Param})[calType->ordinal()] );
	if (item == 1) goto label_pswitch_39;
	if (item == 2) goto label_pswitch_3f;
	if (item == 3) goto label_pswitch_45;
	if (item == 4) goto label_pswitch_4b;
	if (item == 5) goto label_pswitch_51;
	if (item == 6) goto label_pswitch_57;
	if (item == 7) goto label_pswitch_25;
	if (item == 8) goto label_pswitch_64;
	if (item == 9) goto label_pswitch_6a;
	if (item == 10) goto label_pswitch_70;
	if (item == 11) goto label_pswitch_70;
	if (item == 12) goto label_pswitch_70;
	if (item == 13) goto label_pswitch_70;
	if (item == 14) goto label_pswitch_70;
	if (item == 15) goto label_pswitch_2b;
	if (item == 16) goto label_pswitch_76;
	if (item == 17) goto label_pswitch_7c;
	if (item == 18) goto label_pswitch_82;
	}
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unknown calendar type")));
	// throw
	throw cVar0;
	// 2120    .line 1761
label_pswitch_25:
	//    .end local v0    # "cal":Landroid/icu/util/Calendar;
	cal = std::make_shared<android::icu::util::GregorianCalendar>(zone, locale);
	//    .local v0, "cal":Landroid/icu/util/Calendar;
label_goto_2a:
	return cal;
	// 2132    .line 1765
	// 2133    .local v0, "cal":Landroid/icu/util/Calendar;
label_pswitch_2b:
	//    .end local v0    # "cal":Landroid/icu/util/Calendar;
	cal = std::make_shared<android::icu::util::GregorianCalendar>(zone, locale);
	//    .local v0, "cal":Landroid/icu/util/Calendar;
	cal->setFirstDayOfWeek(0x2);
	cal->setMinimalDaysInFirstWeek(0x4);
	goto label_goto_2a;
	// 2153    .line 1771
	// 2154    .local v0, "cal":Landroid/icu/util/Calendar;
label_pswitch_39:
	//    .end local v0    # "cal":Landroid/icu/util/Calendar;
	cal = std::make_shared<android::icu::util::BuddhistCalendar>(zone, locale);
	//    .local v0, "cal":Landroid/icu/util/Calendar;
	goto label_goto_2a;
	// 2165    .line 1774
	// 2166    .local v0, "cal":Landroid/icu/util/Calendar;
label_pswitch_3f:
	//    .end local v0    # "cal":Landroid/icu/util/Calendar;
	cal = std::make_shared<android::icu::util::ChineseCalendar>(zone, locale);
	//    .local v0, "cal":Landroid/icu/util/Calendar;
	goto label_goto_2a;
	// 2177    .line 1777
	// 2178    .local v0, "cal":Landroid/icu/util/Calendar;
label_pswitch_45:
	//    .end local v0    # "cal":Landroid/icu/util/Calendar;
	cal = std::make_shared<android::icu::util::CopticCalendar>(zone, locale);
	//    .local v0, "cal":Landroid/icu/util/Calendar;
	goto label_goto_2a;
	// 2189    .line 1780
	// 2190    .local v0, "cal":Landroid/icu/util/Calendar;
label_pswitch_4b:
	//    .end local v0    # "cal":Landroid/icu/util/Calendar;
	cal = std::make_shared<android::icu::util::DangiCalendar>(zone, locale);
	//    .local v0, "cal":Landroid/icu/util/Calendar;
	goto label_goto_2a;
	// 2201    .line 1783
	// 2202    .local v0, "cal":Landroid/icu/util/Calendar;
label_pswitch_51:
	//    .end local v0    # "cal":Landroid/icu/util/Calendar;
	cal = std::make_shared<android::icu::util::EthiopicCalendar>(zone, locale);
	//    .local v0, "cal":Landroid/icu/util/Calendar;
	goto label_goto_2a;
	// 2213    .line 1786
	// 2214    .local v0, "cal":Landroid/icu/util/Calendar;
label_pswitch_57:
	//    .end local v0    # "cal":Landroid/icu/util/Calendar;
	cal = std::make_shared<android::icu::util::EthiopicCalendar>(zone, locale);
	//    .local v0, "cal":Landroid/icu/util/Calendar;
	cVar1 = cal;
	cVar1->checkCast("android::icu::util::EthiopicCalendar");
	cVar1->setAmeteAlemEra(0x1);
	goto label_goto_2a;
	// 2233    .line 1790
	// 2234    .local v0, "cal":Landroid/icu/util/Calendar;
label_pswitch_64:
	//    .end local v0    # "cal":Landroid/icu/util/Calendar;
	cal = std::make_shared<android::icu::util::HebrewCalendar>(zone, locale);
	//    .local v0, "cal":Landroid/icu/util/Calendar;
	goto label_goto_2a;
	// 2245    .line 1793
	// 2246    .local v0, "cal":Landroid/icu/util/Calendar;
label_pswitch_6a:
	//    .end local v0    # "cal":Landroid/icu/util/Calendar;
	cal = std::make_shared<android::icu::util::IndianCalendar>(zone, locale);
	//    .local v0, "cal":Landroid/icu/util/Calendar;
	goto label_goto_2a;
	// 2257    .line 1800
	// 2258    .local v0, "cal":Landroid/icu/util/Calendar;
label_pswitch_70:
	//    .end local v0    # "cal":Landroid/icu/util/Calendar;
	cal = std::make_shared<android::icu::util::IslamicCalendar>(zone, locale);
	//    .local v0, "cal":Landroid/icu/util/Calendar;
	goto label_goto_2a;
	// 2269    .line 1803
	// 2270    .local v0, "cal":Landroid/icu/util/Calendar;
label_pswitch_76:
	//    .end local v0    # "cal":Landroid/icu/util/Calendar;
	cal = std::make_shared<android::icu::util::JapaneseCalendar>(zone, locale);
	//    .local v0, "cal":Landroid/icu/util/Calendar;
	goto label_goto_2a;
	// 2281    .line 1806
	// 2282    .local v0, "cal":Landroid/icu/util/Calendar;
label_pswitch_7c:
	//    .end local v0    # "cal":Landroid/icu/util/Calendar;
	cal = std::make_shared<android::icu::util::PersianCalendar>(zone, locale);
	//    .local v0, "cal":Landroid/icu/util/Calendar;
	goto label_goto_2a;
	// 2293    .line 1809
	// 2294    .local v0, "cal":Landroid/icu/util/Calendar;
label_pswitch_82:
	//    .end local v0    # "cal":Landroid/icu/util/Calendar;
	cal = std::make_shared<android::icu::util::TaiwanCalendar>(zone, locale);
	//    .local v0, "cal":Landroid/icu/util/Calendar;
	goto label_goto_2a;
	// 2305    .line 1759
	// 2306    :pswitch_data_88
	// 2307    .packed-switch 0x1
	// 2308        :pswitch_39
	// 2309        :pswitch_3f
	// 2310        :pswitch_45
	// 2311        :pswitch_4b
	// 2312        :pswitch_51
	// 2313        :pswitch_57
	// 2314        :pswitch_25
	// 2315        :pswitch_64
	// 2316        :pswitch_6a
	// 2317        :pswitch_70
	// 2318        :pswitch_70
	// 2319        :pswitch_70
	// 2320        :pswitch_70
	// 2321        :pswitch_70
	// 2322        :pswitch_2b
	// 2323        :pswitch_76
	// 2324        :pswitch_7c
	// 2325        :pswitch_82
	// 2326    .end packed-switch

}
// .method private static expandOverride(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Calendar::expandOverride(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::lang::String> override)
{
	
	int inQuotes;
	std::shared_ptr<java::lang::StringBuilder> result;
	std::shared_ptr<java::text::StringCharacterIterator> it;
	char c;
	
	//    .param p0, "pattern"    # Ljava/lang/String;
	//    .param p1, "override"    # Ljava/lang/String;
	if ( override->indexOf(0x3d) < 0 ) 
		goto label_cond_9;
	return override;
	// 2347    .line 3640
label_cond_9:
	inQuotes = 0x0;
	//    .local v1, "inQuotes":Z
	//    .local v3, "prevChar":C
	result = std::make_shared<java::lang::StringBuilder>();
	//    .local v4, "result":Ljava/lang/StringBuilder;
	it = std::make_shared<java::text::StringCharacterIterator>(pattern);
	//    .local v2, "it":Ljava/text/StringCharacterIterator;
	c = it->first();
	//    .end local v1    # "inQuotes":Z
	//    .end local v3    # "prevChar":C
	//    .local v0, "c":C
label_goto_1a:
	if ( c == 0xffff )
		goto label_cond_49;
	if ( c != 0x27 )
		goto label_cond_2b;
	//    .local v1, "inQuotes":Z
	c;
	//    .end local v1    # "inQuotes":Z
	//    .local v3, "prevChar":C
label_goto_26:
	c = it->next();
	goto label_goto_1a;
	// 2403    .line 3652
	// 2404    .end local v3    # "prevChar":C
label_cond_2b:
	if ( inQuotes )     
		goto label_cond_47;
	if ( c == prevChar )
		goto label_cond_47;
	if ( result->length() <= 0 )
		goto label_cond_3b;
	result->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(";")));
label_cond_3b:
	result->append(c);
	result->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("=")));
	result->append(override);
label_cond_47:
	//    .restart local v3    # "prevChar":C
	goto label_goto_26;
	// 2441    .line 3662
	// 2442    .end local v3    # "prevChar":C
label_cond_49:
	return result->toString();

}
// .method private static findPreviousZoneTransitionTime(Landroid/icu/util/TimeZone;IJJ)Ljava/lang/Long;
std::shared_ptr<java::lang::Long> android::icu::util::Calendar::findPreviousZoneTransitionTime(std::shared_ptr<android::icu::util::TimeZone> tz,int upperOffset,long long upper,long long lower)
{
	
	int onUnitTime;
	auto mid;
	std::shared_ptr<int[]> cVar0;
	int cVar1;
	int unit;
	long long lunits;
	long long uunits;
	long long mid;
	long long cVar3;
	
	//    .param p0, "tz"    # Landroid/icu/util/TimeZone;
	//    .param p1, "upperOffset"    # I
	//    .param p2, "upper"    # J
	//    .param p4, "lower"    # J
	onUnitTime = 0x0;
	//    .local v13, "onUnitTime":Z
	mid = 0x0;
	//    .local v6, "mid":J
	cVar0 = android::icu::util::Calendar::FIND_ZONE_TRANSITION_TIME_UNITS;
	cVar1 = 0x0;
label_goto_7:
	if ( cVar1 >= cVar0->size() )
		goto label_cond_20;
	unit = cVar0[cVar1];
	//    .local v14, "unit":I
	lunits = (lower / (long long)(unit));
	//    .local v10, "lunits":J
	uunits = (upper / (long long)(unit));
	//    .local v16, "uunits":J
	if ( (uunits > lunits) <= 0 )
		goto label_cond_42;
	(_ushrll(((lunits + uunits) +  0x1),0x1) * (long long)(unit));
	onUnitTime = 0x1;
	//    .end local v10    # "lunits":J
	//    .end local v14    # "unit":I
	//    .end local v16    # "uunits":J
label_cond_20:
	if ( onUnitTime )     
		goto label_cond_27;
	mid = _ushrll((upper + lower),0x1);
label_cond_27:
	if ( !(onUnitTime) )  
		goto label_cond_53;
	if ( !((mid > upper)) )  
		goto label_cond_47;
	//    .local v12, "midOffset":I
	if ( tz->getOffset(mid) == upperOffset )
		goto label_cond_45;
	return android::icu::util::Calendar::findPreviousZoneTransitionTime(tz, upperOffset, upper, mid);
	// 2564    .line 5427
	// 2565    .end local v12    # "midOffset":I
	// 2566    .restart local v10    # "lunits":J
	// 2567    .restart local v14    # "unit":I
	// 2568    .restart local v16    # "uunits":J
label_cond_42:
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_7;
	// 2574    .line 5448
	// 2575    .end local v10    # "lunits":J
	// 2576    .end local v14    # "unit":I
	// 2577    .end local v16    # "uunits":J
	// 2578    .restart local v12    # "midOffset":I
label_cond_45:
	cVar3 = mid;
	//    .end local v12    # "midOffset":I
label_cond_47:
	mid = (mid -  0x1);
label_goto_4a:
	if ( (mid > lower) )     
		goto label_cond_59;
	return java::lang::Long::valueOf(cVar3);
	// 2602    .line 5453
label_cond_53:
	mid = _ushrll((upper + lower),0x1);
	goto label_goto_4a;
	// 2612    .line 5459
label_cond_59:
	//    .restart local v12    # "midOffset":I
	if ( tz->getOffset(mid) == upperOffset )
		goto label_cond_75;
	if ( !(onUnitTime) )  
		goto label_cond_6a;
	return java::lang::Long::valueOf(cVar3);
label_cond_6a:
	return android::icu::util::Calendar::findPreviousZoneTransitionTime(tz, upperOffset, cVar3, mid);
label_cond_75:
	return android::icu::util::Calendar::findPreviousZoneTransitionTime(tz, upperOffset, mid, lower);

}
// .method private static firstIslamicStartYearFromGrego(I)I
int android::icu::util::Calendar::firstIslamicStartYearFromGrego(int year)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int shift;
	
	//    .param p0, "year"    # I
	cVar0 = 0x20;
	cVar1 = 0x1;
	cVar2 = 0x0;
	shift = 0x0;
	//    .local v2, "shift":I
	if ( year <  0x7b9 )
		goto label_cond_1d;
	//    .local v0, "cycle":I
	//    .local v1, "offset":I
	if ( ( ( year + -0x7b9) % 0x41) <  cVar0 )
		goto label_cond_1b;
label_goto_15:
	shift = (( ( ( year + -0x7b9) / 0x41) * 0x2) + cVar1);
label_goto_17:
	return (( year + -0x243) +  shift);
label_cond_1b:
	cVar1 = cVar2;
	goto label_goto_15;
	// 2719    .line 2163
	// 2720    .end local v0    # "cycle":I
	// 2721    .end local v1    # "offset":I
label_cond_1d:
	//    .restart local v0    # "cycle":I
	//    .restart local v1    # "offset":I
	if ( ( (0 - ( year + -0x7b8)) % 0x41) >  cVar0 )
		goto label_cond_2f;
label_goto_2c:
	shift = (( ( ( ( year + -0x7b8) / 0x41) + -0x1) * 0x2) + cVar1);
	goto label_goto_17;
label_cond_2f:
	cVar1 = cVar2;
	goto label_goto_2c;

}
// .method protected static final floorDivide(II)I
int android::icu::util::Calendar::floorDivide(int numerator,int denominator)
{
	
	int cVar0;
	
	//    .param p0, "numerator"    # I
	//    .param p1, "denominator"    # I
	if ( numerator < 0 ) 
		goto label_cond_5;
	cVar0 = (numerator / denominator);
label_goto_4:
	return cVar0;
	// 2770    .line 6057
label_cond_5:
	cVar0 = ( (( numerator + 0x1) /  denominator) + -0x1);
	goto label_goto_4;

}
// .method protected static final floorDivide(II[I)I
int android::icu::util::Calendar::floorDivide(int numerator,int denominator,std::shared_ptr<int[]> remainder)
{
	
	int cVar0;
	int quotient;
	
	//    .param p0, "numerator"    # I
	//    .param p1, "denominator"    # I
	//    .param p2, "remainder"    # [I
	cVar0 = 0x0;
	if ( numerator < 0 ) 
		goto label_cond_a;
	remainder[cVar0] = (numerator % denominator);
	return (numerator / denominator);
	// 2803    .line 6079
label_cond_a:
	quotient = ( (( numerator + 0x1) /  denominator) + -0x1);
	//    .local v0, "quotient":I
	remainder[cVar0] = (numerator - (quotient * denominator));
	return quotient;

}
// .method protected static final floorDivide(JI[I)I
int android::icu::util::Calendar::floorDivide(long long numerator,int denominator,std::shared_ptr<int[]> remainder)
{
	
	long long cVar0;
	int cVar1;
	int quotient;
	
	//    .param p0, "numerator"    # J
	//    .param p2, "denominator"    # I
	//    .param p3, "remainder"    # [I
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( (numerator > 0x0) < 0 ) 
		goto label_cond_14;
	remainder[cVar1] = (int)((numerator % (long long)(denominator)));
	return (int)((numerator / (long long)(denominator)));
	// 2859    .line 6103
label_cond_14:
	quotient = (int)((((numerator + cVar0) /  (long long)(denominator)) -  cVar0));
	//    .local v0, "quotient":I
	remainder[cVar1] = (int)((numerator - ((long long)(quotient) *  (long long)(denominator))));
	return quotient;

}
// .method protected static final floorDivide(JJ)J
long long android::icu::util::Calendar::floorDivide(long long numerator,long long denominator)
{
	
	long long cVar0;
	long long cVar1;
	
	//    .param p0, "numerator"    # J
	//    .param p2, "denominator"    # J
	cVar0 = 0x1;
	if ( (numerator > 0x0) < 0 ) 
		goto label_cond_b;
	cVar1 = (numerator / denominator);
label_goto_a:
	return cVar1;
	// 2911    .line 6039
label_cond_b:
	cVar1 = (((numerator + cVar0) /  denominator) -  cVar0);
	goto label_goto_a;

}
// .method private static formatHelper(Landroid/icu/util/Calendar;Landroid/icu/util/ULocale;II)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::util::Calendar::formatHelper(std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<android::icu::util::ULocale> loc,int dateStyle,int timeStyle)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	std::shared_ptr<android::icu::util::Calendar_S_PatternData> patternData;
	std::shared<std::vector<std::vector<java::lang::CharSequence>>> cVar7;
	std::shared_ptr<android::icu::text::DateFormat> result;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar8;
	
	//    .param p0, "cal"    # Landroid/icu/util/Calendar;
	//    .param p1, "loc"    # Landroid/icu/util/ULocale;
	//    .param p2, "dateStyle"    # I
	//    .param p3, "timeStyle"    # I
	cVar0 = 0x3;
	cVar1 = -0x1;
	cVar2 = 0x2;
	if ( timeStyle <  cVar1 )
		goto label_cond_8;
	if ( timeStyle <= cVar0 )
		goto label_cond_22;
label_cond_8:
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal time style ")))->append(timeStyle)->toString());
	// throw
	throw cVar3;
	// 2969    .line 3440
label_cond_22:
	if ( dateStyle <  cVar1 )
		goto label_cond_26;
	if ( dateStyle <= cVar0 )
		goto label_cond_40;
label_cond_26:
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	cVar5 = std::make_shared<java::lang::IllegalArgumentException>(cVar6->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal date style ")))->append(dateStyle)->toString());
	// throw
	throw cVar5;
	// 3001    .line 3444
label_cond_40:
	patternData = android::icu::util::Calendar_S_PatternData::-wrap0(cal, loc);
	//    .local v3, "patternData":Landroid/icu/util/Calendar$PatternData;
	//    .local v1, "override":Ljava/lang/String;
	0x0;
	//    .local v2, "pattern":Ljava/lang/String;
	if ( timeStyle < 0 ) 
		goto label_cond_95;
	if ( dateStyle < 0 ) 
		goto label_cond_95;
	cVar7 = std::make_shared<std::vector<std::vector<java::lang::CharSequence>>>(cVar2);
	cVar7[0x0] = android::icu::util::Calendar_S_PatternData::-get1(patternData)[timeStyle];
	cVar7[0x1] = android::icu::util::Calendar_S_PatternData::-get1(patternData)[( dateStyle + 0x4)];
	//    .local v2, "pattern":Ljava/lang/String;
	if ( !(android::icu::util::Calendar_S_PatternData::-get0(patternData)) )  
		goto label_cond_8d;
	//    .local v0, "dateOverride":Ljava/lang/String;
	//    .local v5, "timeOverride":Ljava/lang/String;
	//    .end local v0    # "dateOverride":Ljava/lang/String;
	//    .end local v1    # "override":Ljava/lang/String;
	//    .end local v5    # "timeOverride":Ljava/lang/String;
label_cond_8d:
label_goto_8d:
	result = cal->handleGetDateFormat(pattern, override, loc);
	//    .local v4, "result":Landroid/icu/text/DateFormat;
	result->setCalendar(cal);
	return result;
	// 3120    .line 3465
	// 3121    .end local v4    # "result":Landroid/icu/text/DateFormat;
	// 3122    .restart local v1    # "override":Ljava/lang/String;
	// 3123    .local v2, "pattern":Ljava/lang/String;
label_cond_95:
	if ( timeStyle < 0 ) 
		goto label_cond_aa;
	//    .local v2, "pattern":Ljava/lang/String;
	if ( !(android::icu::util::Calendar_S_PatternData::-get0(patternData)) )  
		goto label_cond_8d;
	//    .local v1, "override":Ljava/lang/String;
	goto label_goto_8d;
	// 3152    .line 3470
	// 3153    .local v1, "override":Ljava/lang/String;
	// 3154    .local v2, "pattern":Ljava/lang/String;
label_cond_aa:
	if ( dateStyle < 0 ) 
		goto label_cond_c3;
	//    .local v2, "pattern":Ljava/lang/String;
	if ( !(android::icu::util::Calendar_S_PatternData::-get0(patternData)) )  
		goto label_cond_8d;
	//    .local v1, "override":Ljava/lang/String;
	goto label_goto_8d;
	// 3187    .line 3476
	// 3188    .local v1, "override":Ljava/lang/String;
	// 3189    .local v2, "pattern":Ljava/lang/String;
label_cond_c3:
	cVar8 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("No date or time style specified")));
	// throw
	throw cVar8;

}
// .method private getActualHelper(III)I
int android::icu::util::Calendar::getActualHelper(int field,int startValue,int endValue)
{
	
	bool cVar0;
	int delta;
	std::shared_ptr<android::icu::util::Calendar> work;
	int result;
	int startValue;
	
	//    .param p1, "field"    # I
	//    .param p2, "startValue"    # I
	//    .param p3, "endValue"    # I
	cVar0 = 0x1;
	if ( startValue != endValue )
		goto label_cond_5;
	return startValue;
	// 3217    .line 2563
label_cond_5:
	if ( endValue <= startValue )
		goto label_cond_28;
	delta = 0x1;
	//    .local v0, "delta":I
label_goto_8:
	work = this->clone();
	work->checkCast("android::icu::util::Calendar");
	//    .local v2, "work":Landroid/icu/util/Calendar;
	work->complete();
	work->setLenient(cVar0);
	if ( delta >= 0 )
		goto label_cond_2a;
label_goto_16:
	work->prepareGetActual(field, cVar0);
	work->set(field, startValue);
	if ( work->get(field) == startValue )
		goto label_cond_2c;
	if ( field == 0x4 )
		goto label_cond_2c;
	if ( delta <= 0 )
		goto label_cond_2c;
	return startValue;
	// 3265    .line 2563
	// 3266    .end local v0    # "delta":I
	// 3267    .end local v2    # "work":Landroid/icu/util/Calendar;
label_cond_28:
	delta = -0x1;
	//    .restart local v0    # "delta":I
	goto label_goto_8;
	// 3274    .restart local v2    # "work":Landroid/icu/util/Calendar;
label_cond_2a:
	cVar0 = 0x0;
	goto label_goto_16;
	// 3281    .line 2590
label_cond_2c:
	result = startValue;
	//    .local v1, "result":I
label_goto_2d:
	startValue = (startValue +  delta);
	work->add(field, delta);
	if ( work->get(field) == startValue )
		goto label_cond_38;
label_cond_37:
	return result;
	// 3304    .line 2597
label_cond_38:
	result = startValue;
	if ( startValue == endValue )
		goto label_cond_37;
	goto label_goto_2d;

}
// .method public static getAvailableLocales()[Ljava/util/Locale;
std::shared_ptr<java::util::Locale> android::icu::util::Calendar::getAvailableLocales()
{
	
	return android::icu::impl::ICUResourceBundle::getAvailableLocales({const[class].FS-Param});

}
// .method public static getAvailableULocales()[Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::util::Calendar::getAvailableULocales()
{
	
	return android::icu::impl::ICUResourceBundle::getAvailableULocales({const[class].FS-Param});

}
// .method private static getCalendarTypeForLocale(Landroid/icu/util/ULocale;)Landroid/icu/util/Calendar$CalType;
std::shared_ptr<android::icu::util::Calendar_S_CalType> android::icu::util::Calendar::getCalendarTypeForLocale(std::shared_ptr<android::icu::util::ULocale> l)
{
	
	std::shared_ptr<java::lang::String> s;
	std::shared_ptr<java::lang::Object> cVar0;
	int cVar1;
	std::shared_ptr<java::lang::String> type;
	
	//    .param p0, "l"    # Landroid/icu/util/ULocale;
	s = android::icu::impl::CalendarUtil::getCalendarType(l);
	//    .local v0, "s":Ljava/lang/String;
	if ( !(s) )  
		goto label_cond_22;
	cVar0 = android::icu::util::Calendar_S_CalType::values({const[class].FS-Param});
	cVar1 = 0x0;
label_goto_12:
	if ( cVar1 >= cVar0->size() )
		goto label_cond_22;
	type = cVar0[cVar1];
	//    .local v1, "type":Landroid/icu/util/Calendar$CalType;
	if ( !(s->toLowerCase(java::util::Locale::ENGLISH)->equals(type->id)) )  
		goto label_cond_1f;
	return type;
	// 3386    .line 1741
label_cond_1f:
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_12;
	// 3392    .line 1747
	// 3393    .end local v1    # "type":Landroid/icu/util/Calendar$CalType;
label_cond_22:
	return android::icu::util::Calendar_S_CalType::UNKNOWN;

}
// .method public static getDateTimeFormatString(Landroid/icu/util/ULocale;Ljava/lang/String;II)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Calendar::getDateTimeFormatString(std::shared_ptr<android::icu::util::ULocale> loc,std::shared_ptr<java::lang::String> calType,int dateStyle,int timeStyle)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	std::shared_ptr<android::icu::util::Calendar_S_PatternData> patternData;
	std::shared<std::vector<std::vector<java::lang::CharSequence>>> cVar7;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar8;
	
	//    .param p0, "loc"    # Landroid/icu/util/ULocale;
	//    .param p1, "calType"    # Ljava/lang/String;
	//    .param p2, "dateStyle"    # I
	//    .param p3, "timeStyle"    # I
	cVar0 = 0x3;
	cVar1 = -0x1;
	cVar2 = 0x2;
	if ( timeStyle <  cVar1 )
		goto label_cond_8;
	if ( timeStyle <= cVar0 )
		goto label_cond_22;
label_cond_8:
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal time style ")))->append(timeStyle)->toString());
	// throw
	throw cVar3;
	// 3447    .line 3504
label_cond_22:
	if ( dateStyle <  cVar1 )
		goto label_cond_26;
	if ( dateStyle <= cVar0 )
		goto label_cond_40;
label_cond_26:
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	cVar5 = std::make_shared<java::lang::IllegalArgumentException>(cVar6->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal date style ")))->append(dateStyle)->toString());
	// throw
	throw cVar5;
	// 3479    .line 3508
label_cond_40:
	patternData = android::icu::util::Calendar_S_PatternData::-wrap1(loc, calType);
	//    .local v1, "patternData":Landroid/icu/util/Calendar$PatternData;
	0x0;
	//    .local v0, "pattern":Ljava/lang/String;
	if ( timeStyle < 0 ) 
		goto label_cond_67;
	if ( dateStyle < 0 ) 
		goto label_cond_67;
	cVar7 = std::make_shared<std::vector<std::vector<java::lang::CharSequence>>>(cVar2);
	cVar7[0x0] = android::icu::util::Calendar_S_PatternData::-get1(patternData)[timeStyle];
	cVar7[0x1] = android::icu::util::Calendar_S_PatternData::-get1(patternData)[( dateStyle + 0x4)];
	//    .local v0, "pattern":Ljava/lang/String;
label_goto_66:
	return pattern;
	// 3535    .line 3517
	// 3536    .local v0, "pattern":Ljava/lang/String;
label_cond_67:
	if ( timeStyle < 0 ) 
		goto label_cond_70;
	//    .local v0, "pattern":Ljava/lang/String;
	goto label_goto_66;
	// 3550    .line 3519
	// 3551    .local v0, "pattern":Ljava/lang/String;
label_cond_70:
	if ( dateStyle < 0 ) 
		goto label_cond_7b;
	//    .local v0, "pattern":Ljava/lang/String;
	goto label_goto_66;
	// 3567    .line 3522
	// 3568    .local v0, "pattern":Ljava/lang/String;
label_cond_7b:
	cVar8 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("No date or time style specified")));
	// throw
	throw cVar8;

}
// .method public static getDateTimePattern(Landroid/icu/util/Calendar;Landroid/icu/util/ULocale;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Calendar::getDateTimePattern(std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<android::icu::util::ULocale> uLocale,int dateStyle)
{
	
	//    .param p0, "cal"    # Landroid/icu/util/Calendar;
	//    .param p1, "uLocale"    # Landroid/icu/util/ULocale;
	//    .param p2, "dateStyle"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3585    .end annotation
	//    .local v0, "patternData":Landroid/icu/util/Calendar$PatternData;
	return android::icu::util::Calendar_S_PatternData::-wrap2(android::icu::util::Calendar_S_PatternData::-wrap0(cal, uLocale), dateStyle);

}
// .method private getImmediatePreviousZoneTransition(J)Ljava/lang/Long;
std::shared_ptr<java::lang::Long> android::icu::util::Calendar::getImmediatePreviousZoneTransition(long long base)
{
	
	std::shared_ptr<java::lang::Long> transitionTime;
	std::shared_ptr<android::icu::util::TimeZone> cVar0;
	std::shared_ptr<android::icu::util::TimeZoneTransition> transition;
	
	//    .param p1, "base"    # J
	transitionTime = 0x0;
	//    .local v1, "transitionTime":Ljava/lang/Long;
	if ( !(this->zone->instanceOf("android::icu::util::BasicTimeZone")) )  
		goto label_cond_1b;
	cVar0 = this->zone;
	cVar0->checkCast("android::icu::util::BasicTimeZone");
	transition = cVar0->getPreviousTransition(base, 0x1);
	//    .local v0, "transition":Landroid/icu/util/TimeZoneTransition;
	if ( !(transition) )  
		goto label_cond_1a;
	transitionTime = java::lang::Long::valueOf(transition->getTime());
	//    .end local v0    # "transition":Landroid/icu/util/TimeZoneTransition;
	//    .end local v1    # "transitionTime":Ljava/lang/Long;
label_cond_1a:
label_goto_1a:
	return transitionTime;
	// 3649    .line 5375
	// 3650    .restart local v1    # "transitionTime":Ljava/lang/Long;
label_cond_1b:
	transitionTime = android::icu::util::Calendar::getPreviousZoneTransitionTime(this->zone, base, 0x6ddd00);
	//    .local v1, "transitionTime":Ljava/lang/Long;
	if ( transitionTime )     
		goto label_cond_1a;
	transitionTime = android::icu::util::Calendar::getPreviousZoneTransitionTime(this->zone, base, 0x66ff300);
	goto label_goto_1a;

}
// .method public static getInstance()Landroid/icu/util/Calendar;
std::shared_ptr<android::icu::util::Calendar> android::icu::util::Calendar::getInstance()
{
	
	std::shared_ptr<android::icu::util::TimeZone> cVar0;
	
	cVar0 = 0x0;
	return android::icu::util::Calendar::getInstanceInternal(cVar0, cVar0);

}
// .method public static getInstance(Landroid/icu/util/TimeZone;)Landroid/icu/util/Calendar;
std::shared_ptr<android::icu::util::Calendar> android::icu::util::Calendar::getInstance(std::shared_ptr<android::icu::util::TimeZone> zone)
{
	
	//    .param p0, "zone"    # Landroid/icu/util/TimeZone;
	return android::icu::util::Calendar::getInstanceInternal(zone, 0x0);

}
// .method public static getInstance(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)Landroid/icu/util/Calendar;
std::shared_ptr<android::icu::util::Calendar> android::icu::util::Calendar::getInstance(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p0, "zone"    # Landroid/icu/util/TimeZone;
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	return android::icu::util::Calendar::getInstanceInternal(zone, locale);

}
// .method public static getInstance(Landroid/icu/util/TimeZone;Ljava/util/Locale;)Landroid/icu/util/Calendar;
std::shared_ptr<android::icu::util::Calendar> android::icu::util::Calendar::getInstance(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<java::util::Locale> aLocale)
{
	
	//    .param p0, "zone"    # Landroid/icu/util/TimeZone;
	//    .param p1, "aLocale"    # Ljava/util/Locale;
	return android::icu::util::Calendar::getInstanceInternal(zone, android::icu::util::ULocale::forLocale(aLocale));

}
// .method public static getInstance(Landroid/icu/util/ULocale;)Landroid/icu/util/Calendar;
std::shared_ptr<android::icu::util::Calendar> android::icu::util::Calendar::getInstance(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	return android::icu::util::Calendar::getInstanceInternal(0x0, locale);

}
// .method public static getInstance(Ljava/util/Locale;)Landroid/icu/util/Calendar;
std::shared_ptr<android::icu::util::Calendar> android::icu::util::Calendar::getInstance(std::shared_ptr<java::util::Locale> aLocale)
{
	
	//    .param p0, "aLocale"    # Ljava/util/Locale;
	return android::icu::util::Calendar::getInstanceInternal(0x0, android::icu::util::ULocale::forLocale(aLocale));

}
// .method private static getInstanceInternal(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)Landroid/icu/util/Calendar;
std::shared_ptr<android::icu::util::Calendar> android::icu::util::Calendar::getInstanceInternal(std::shared_ptr<android::icu::util::TimeZone> cVar1,std::shared_ptr<android::icu::util::ULocale> cVar0)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	std::shared_ptr<android::icu::util::TimeZone> cVar1;
	std::shared_ptr<android::icu::util::Calendar> cal;
	
	//    .param p0, "tz"    # Landroid/icu/util/TimeZone;
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	if ( cVar0 )     
		goto label_cond_8;
	cVar0 = android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT);
label_cond_8:
	if ( cVar1 )     
		goto label_cond_e;
	cVar1 = android::icu::util::TimeZone::getDefault({const[class].FS-Param});
label_cond_e:
	cal = android::icu::util::Calendar::createInstance(cVar0);
	//    .local v0, "cal":Landroid/icu/util/Calendar;
	cal->setTimeZone(cVar1);
	cal->setTimeInMillis(java::lang::System::currentTimeMillis({const[class].FS-Param}));
	return cal;

}
// .method public static final getKeywordValuesForLocale(Ljava/lang/String;Landroid/icu/util/ULocale;Z)[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Calendar::getKeywordValuesForLocale(std::shared_ptr<java::lang::String> key,std::shared_ptr<android::icu::util::ULocale> locale,bool commonlyUsed)
{
	
	std::shared_ptr<java::util::ArrayList> values;
	std::shared_ptr<android::icu::util::UResourceBundle> calPref;
	std::shared_ptr<std::vector<java::lang::String>> caltypes;
	int i;
	std::shared_ptr<java::lang::Object> cVar0;
	int cVar1;
	std::shared_ptr<java::lang::String> t;
	std::shared_ptr<std::vector<java::lang::String>> cVar3;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "key"    # Ljava/lang/String;
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "commonlyUsed"    # Z
	//    .local v5, "prefRegion":Ljava/lang/String;
	values = std::make_shared<java::util::ArrayList>();
	//    .local v8, "values":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
	//    .local v6, "rb":Landroid/icu/util/UResourceBundle;
	calPref = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), std::make_shared<java::lang::String>(std::make_shared<char[]>("supplementalData")), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER)->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("calendarPreferenceData")));
	//    .local v0, "calPref":Landroid/icu/util/UResourceBundle;
	0x0;
	//    .local v4, "order":Landroid/icu/util/UResourceBundle;
	try {
	//label_try_start_1e:
	//label_try_end_21:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_29;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_1e .. :try_end_21} :catch_29
	//    .local v4, "order":Landroid/icu/util/UResourceBundle;
label_goto_22:
	caltypes = order->getStringArray();
	//    .local v1, "caltypes":[Ljava/lang/String;
	if ( !(commonlyUsed) )  
		goto label_cond_32;
	return caltypes;
	// 3887    .line 1872
	// 3888    .end local v1    # "caltypes":[Ljava/lang/String;
	// 3889    .local v4, "order":Landroid/icu/util/UResourceBundle;
label_catch_29:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v3, "mre":Ljava/util/MissingResourceException;
	//    .local v4, "order":Landroid/icu/util/UResourceBundle;
	goto label_goto_22;
	// 3904    .line 1884
	// 3905    .end local v3    # "mre":Ljava/util/MissingResourceException;
	// 3906    .restart local v1    # "caltypes":[Ljava/lang/String;
label_cond_32:
	i = 0x0;
	//    .local v2, "i":I
label_goto_33:
	if ( i >= caltypes->size() )
		goto label_cond_3e;
	values->add(caltypes[i]);
	i = ( i + 0x1);
	goto label_goto_33;
	// 3926    .line 1888
label_cond_3e:
	cVar0 = android::icu::util::Calendar_S_CalType::values({const[class].FS-Param});
	cVar1 = 0x0;
label_goto_44:
	if ( cVar1 >= cVar0->size() )
		goto label_cond_58;
	t = cVar0[cVar1];
	//    .local v7, "t":Landroid/icu/util/Calendar$CalType;
	if ( values->contains(t->id) )     
		goto label_cond_55;
	values->add(t->id);
label_cond_55:
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_44;
	// 3962    .line 1893
	// 3963    .end local v7    # "t":Landroid/icu/util/Calendar$CalType;
label_cond_58:
	cVar3 = values->toArray(std::make_shared<std::vector<std::vector<java::lang::String>>>(values->size()));
	cVar3->checkCast("std::vector<java::lang::String>");
	return cVar3;

}
// .method private static getPatternData(Landroid/icu/util/ULocale;Ljava/lang/String;)Landroid/icu/util/Calendar$PatternData;
std::shared_ptr<android::icu::util::Calendar_S_PatternData> android::icu::util::Calendar::getPatternData(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> calType)
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundle> rb;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> dtPatternsRb;
	int patternsSize;
	std::shared<std::vector<std::vector<java::lang::String>>> dateTimePatterns;
	std::shared<std::vector<std::vector<java::lang::String>>> dateTimePatternsOverrides;
	int i;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> concatenationPatternRb;
	std::shared_ptr<android::icu::util::Calendar_S_PatternData> cVar1;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "calType"    # Ljava/lang/String;
	rb = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), locale);
	rb->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v6, "rb":Landroid/icu/impl/ICUResourceBundle;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	dtPatternsRb = rb->findWithFallback(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("calendar/")))->append(calType)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("/DateTimePatterns")))->toString());
	//    .local v3, "dtPatternsRb":Landroid/icu/impl/ICUResourceBundle;
	if ( dtPatternsRb )     
		goto label_cond_31;
	dtPatternsRb = rb->getWithFallback(std::make_shared<java::lang::String>(std::make_shared<char[]>("calendar/gregorian/DateTimePatterns")));
label_cond_31:
	patternsSize = dtPatternsRb->getSize();
	//    .local v5, "patternsSize":I
	dateTimePatterns = std::make_shared<std::vector<std::vector<java::lang::String>>>(patternsSize);
	//    .local v1, "dateTimePatterns":[Ljava/lang/String;
	dateTimePatternsOverrides = std::make_shared<std::vector<std::vector<java::lang::String>>>(patternsSize);
	//    .local v2, "dateTimePatternsOverrides":[Ljava/lang/String;
	i = 0x0;
	//    .local v4, "i":I
label_goto_3a:
	if ( i >= patternsSize )
		goto label_cond_62;
	concatenationPatternRb = dtPatternsRb->get(i);
	concatenationPatternRb->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v0, "concatenationPatternRb":Landroid/icu/impl/ICUResourceBundle;
	// switch
	{
	auto item = ( concatenationPatternRb->getType() );
	if (item == 0x0) goto label_sswitch_4c;
	if (item == 0x8) goto label_sswitch_53;
	}
label_goto_49:
	i = ( i + 0x1);
	goto label_goto_3a;
	// 4079    .line 3588
label_sswitch_4c:
	dateTimePatterns[i] = concatenationPatternRb->getString();
	goto label_goto_49;
	// 4089    .line 3591
label_sswitch_53:
	dateTimePatterns[i] = concatenationPatternRb->getString(0x0);
	dateTimePatternsOverrides[i] = concatenationPatternRb->getString(0x1);
	goto label_goto_49;
	// 4110    .line 3596
	// 4111    .end local v0    # "concatenationPatternRb":Landroid/icu/impl/ICUResourceBundle;
label_cond_62:
	cVar1 = std::make_shared<android::icu::util::Calendar_S_PatternData>(dateTimePatterns, dateTimePatternsOverrides);
	return cVar1;
	// 4119    .line 3586
	// 4120    :sswitch_data_68
	// 4121    .sparse-switch
	// 4122        0x0 -> :sswitch_4c
	// 4123        0x8 -> :sswitch_53
	// 4124    .end sparse-switch

}
// .method private static getPreviousZoneTransitionTime(Landroid/icu/util/TimeZone;JJ)Ljava/lang/Long;
std::shared_ptr<java::lang::Long> android::icu::util::Calendar::getPreviousZoneTransitionTime(std::shared_ptr<android::icu::util::TimeZone> tz,long long base,long long duration)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	long long lower;
	int offsetU;
	
	//    .param p0, "tz"    # Landroid/icu/util/TimeZone;
	//    .param p1, "base"    # J
	//    .param p3, "duration"    # J
	if ( android::icu::util::Calendar::_assertionsDisabled )     
		goto label_cond_10;
	if ( (duration > 0x0) > 0 ) 
		goto label_cond_10;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 4151    .line 5394
label_cond_10:
	base;
	//    .local v8, "upper":J
	lower = ((base - duration) - 0x1);
	//    .local v4, "lower":J
	offsetU = tz->getOffset(base);
	//    .local v1, "offsetU":I
	//    .local v6, "offsetL":I
	if ( offsetU != tz->getOffset(lower) )
		goto label_cond_23;
	return 0x0;
label_cond_23:
	return android::icu::util::Calendar::findPreviousZoneTransitionTime(tz, offsetU, base, lower);

}
// .method private static getRegionForCalendar(Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Calendar::getRegionForCalendar(std::shared_ptr<android::icu::util::ULocale> loc)
{
	
	std::shared_ptr<java::lang::String> region;
	
	//    .param p0, "loc"    # Landroid/icu/util/ULocale;
	region = android::icu::util::ULocale::getRegionForSupplementalData(loc, 0x1);
	//    .local v0, "region":Ljava/lang/String;
	if ( region->length() )     
		goto label_cond_e;
label_cond_e:
	return region;

}
// .method public static getWeekDataForRegion(Ljava/lang/String;)Landroid/icu/util/Calendar$WeekData;
std::shared_ptr<android::icu::util::Calendar_S_WeekData> android::icu::util::Calendar::getWeekDataForRegion(std::shared_ptr<java::lang::String> region)
{
	
	//    .param p0, "region"    # Ljava/lang/String;
	return android::icu::util::Calendar::WEEK_DATA_CACHE->createInstance(region, region);

}
// .method private static getWeekDataForRegionInternal(Ljava/lang/String;)Landroid/icu/util/Calendar$WeekData;
std::shared_ptr<android::icu::util::Calendar_S_WeekData> android::icu::util::Calendar::getWeekDataForRegionInternal(std::shared_ptr<java::lang::String> cVar0)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<android::icu::util::UResourceBundle> weekDataInfo;
	auto wdi;
	std::shared_ptr<android::icu::util::Calendar_S_WeekData> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "region"    # Ljava/lang/String;
	if ( cVar0 )     
		goto label_cond_5;
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("001"));
label_cond_5:
	//    .local v8, "rb":Landroid/icu/util/UResourceBundle;
	weekDataInfo = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), std::make_shared<java::lang::String>(std::make_shared<char[]>("supplementalData")), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER)->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("weekData")));
	//    .local v11, "weekDataInfo":Landroid/icu/util/UResourceBundle;
	0x0;
	//    .local v10, "weekDataBundle":Landroid/icu/util/UResourceBundle;
	try {
	//label_try_start_19:
	//label_try_end_1c:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_39;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_19 .. :try_end_1c} :catch_39
	//    .local v10, "weekDataBundle":Landroid/icu/util/UResourceBundle;
label_goto_1d:
	wdi = weekDataBundle->getIntVector();
	//    .local v9, "wdi":[I
	cVar1 = std::make_shared<android::icu::util::Calendar_S_WeekData>(wdi[0x0], wdi[0x1], wdi[0x2], wdi[0x3], wdi[0x4], wdi[0x5]);
	return cVar1;
	// 4326    .line 4747
	// 4327    .end local v9    # "wdi":[I
	// 4328    .local v10, "weekDataBundle":Landroid/icu/util/UResourceBundle;
label_catch_39:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v7, "mre":Ljava/util/MissingResourceException;
	if ( cVar0->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("001"))) )     
		goto label_cond_4b;
	//    .local v10, "weekDataBundle":Landroid/icu/util/UResourceBundle;
	goto label_goto_1d;
	// 4352    .line 4752
	// 4353    .local v10, "weekDataBundle":Landroid/icu/util/UResourceBundle;
label_cond_4b:
	// throw
	throw;

}
// .method private static gregoYearFromIslamicStart(I)I
int android::icu::util::Calendar::gregoYearFromIslamicStart(int year)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int shift;
	
	//    .param p0, "year"    # I
	cVar0 = 0x21;
	cVar1 = 0x1;
	cVar2 = 0x0;
	shift = 0x0;
	//    .local v2, "shift":I
	if ( year <  0x575 )
		goto label_cond_1d;
	//    .local v0, "cycle":I
	//    .local v1, "offset":I
	if ( ( ( year + -0x575) % 0x43) <  cVar0 )
		goto label_cond_1b;
label_goto_15:
	shift = (( ( ( year + -0x575) / 0x43) * 0x2) + cVar1);
label_goto_17:
	return (( year + 0x243) -  shift);
label_cond_1b:
	cVar1 = cVar2;
	goto label_goto_15;
	// 4412    .line 2087
	// 4413    .end local v0    # "cycle":I
	// 4414    .end local v1    # "offset":I
label_cond_1d:
	//    .restart local v0    # "cycle":I
	//    .restart local v1    # "offset":I
	if ( ( (0 - ( year + -0x574)) % 0x43) >  cVar0 )
		goto label_cond_2f;
label_goto_2c:
	shift = (( ( ( ( year + -0x574) / 0x43) + -0x1) * 0x2) + cVar1);
	goto label_goto_17;
label_cond_2f:
	cVar1 = cVar2;
	goto label_goto_2c;

}
// .method protected static final gregorianMonthLength(II)I
int android::icu::util::Calendar::gregorianMonthLength(int y,int m)
{
	
	int cVar0;
	
	//    .param p0, "y"    # I
	//    .param p1, "m"    # I
	if ( !(android::icu::util::Calendar::isGregorianLeapYear(y)) )  
		goto label_cond_e;
	cVar0 = 0x1;
label_goto_b:
	return android::icu::util::Calendar::GREGORIAN_MONTH_COUNT[m][cVar0];
label_cond_e:
	cVar0 = 0x0;
	goto label_goto_b;

}
// .method protected static final gregorianPreviousMonthLength(II)I
int android::icu::util::Calendar::gregorianPreviousMonthLength(int y,int m)
{
	
	int cVar0;
	
	//    .param p0, "y"    # I
	//    .param p1, "m"    # I
	if ( m <= 0 )
		goto label_cond_9;
	cVar0 = android::icu::util::Calendar::gregorianMonthLength(y, ( m + -0x1));
label_goto_8:
	return cVar0;
label_cond_9:
	cVar0 = 0x1f;
	goto label_goto_8;

}
// .method private initInternal()V
void android::icu::util::Calendar::initInternal()
{
	
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	int mask;
	int i;
	
	this->fields = this->handleCreateFields();
	if ( !(this->fields) )  
		goto label_cond_11;
	if ( this->fields->size() >= 0x17 )
		goto label_cond_1a;
label_cond_11:
	cVar0 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid fields[]")));
	// throw
	throw cVar0;
	// 4535    .line 1604
label_cond_1a:
	if ( this->fields->size() >  0x20 )
		goto label_cond_11;
	this->stamp = std::make_shared<std::vector<int[]>>(this->fields->size());
	mask = 0x480067;
	//    .local v1, "mask":I
	i = 0x17;
	//    .local v0, "i":I
label_goto_2d:
	if ( i >= this->fields->size() )
		goto label_cond_38;
	mask = (mask |  (0x1 << i));
	i = ( i + 0x1);
	goto label_goto_2d;
	// 4581    .line 1619
label_cond_38:
	this->internalSetMask = mask;
	return;

}
// .method protected static final isGregorianLeapYear(I)Z
bool android::icu::util::Calendar::isGregorianLeapYear(int year)
{
	
	bool cVar0;
	
	//    .param p0, "year"    # I
	cVar0 = 0x1;
	if ( ( year % 0x4) )     
		goto label_cond_f;
	if ( ( year % 0x64) )     
		goto label_cond_e;
	if ( ( year % 0x190) )     
		goto label_cond_f;
label_cond_e:
label_goto_e:
	return cVar0;
label_cond_f:
	cVar0 = 0x0;
	goto label_goto_e;

}
// .method protected static final julianDayToDayOfWeek(I)I
int android::icu::util::Calendar::julianDayToDayOfWeek(int julian)
{
	
	int dayOfWeek;
	
	//    .param p0, "julian"    # I
	dayOfWeek = ( ( julian + 0x2) % 0x7);
	//    .local v0, "dayOfWeek":I
	if ( dayOfWeek >= 0x1 )
		goto label_cond_9;
label_cond_9:
	return dayOfWeek;

}
// .method protected static final julianDayToMillis(I)J
long long android::icu::util::Calendar::julianDayToMillis(int julian)
{
	
	//    .param p0, "julian"    # I
	return ((long long)((julian - 0x253d8c)) *  0x5265c00);

}
// .method private static mergeOverrideStrings(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Calendar::mergeOverrideStrings(std::shared_ptr<java::lang::String> datePattern,std::shared_ptr<java::lang::String> timePattern,std::shared_ptr<java::lang::String> dateOverride,std::shared_ptr<java::lang::String> timeOverride)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p0, "datePattern"    # Ljava/lang/String;
	//    .param p1, "timePattern"    # Ljava/lang/String;
	//    .param p2, "dateOverride"    # Ljava/lang/String;
	//    .param p3, "timeOverride"    # Ljava/lang/String;
	if ( dateOverride )     
		goto label_cond_6;
	if ( timeOverride )     
		goto label_cond_6;
	return 0x0;
	// 4682    .line 3617
label_cond_6:
	if ( dateOverride )     
		goto label_cond_d;
	return android::icu::util::Calendar::expandOverride(timePattern, timeOverride);
	// 4693    .line 3621
label_cond_d:
	if ( timeOverride )     
		goto label_cond_14;
	return android::icu::util::Calendar::expandOverride(datePattern, dateOverride);
	// 4704    .line 3625
label_cond_14:
	if ( !(dateOverride->equals(timeOverride)) )  
		goto label_cond_1b;
	return dateOverride;
	// 4715    .line 3629
label_cond_1b:
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(android::icu::util::Calendar::expandOverride(datePattern, dateOverride))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(";")))->append(android::icu::util::Calendar::expandOverride(timePattern, timeOverride))->toString();

}
// .method protected static final millisToJulianDay(J)I
int android::icu::util::Calendar::millisToJulianDay(long long millis)
{
	
	//    .param p0, "millis"    # J
	return (int)((android::icu::util::Calendar::floorDivide(millis, 0x5265c00) +  0x253d8c));

}
// .method private readObject(Ljava/io/ObjectInputStream;)V
void android::icu::util::Calendar::readObject(std::shared_ptr<java::io::ObjectInputStream> stream)
{
	
	bool cVar0;
	bool cVar1;
	
	//    .param p1, "stream"    # Ljava/io/ObjectInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 4777        value = {
	// 4778            Ljava/io/IOException;,
	// 4779            Ljava/lang/ClassNotFoundException;
	// 4780        }
	// 4781    .end annotation
	cVar0 = 0x1;
	cVar1 = 0x0;
	stream->defaultReadObject();
	this->initInternal();
	this->isTimeSet = cVar0;
	this->areAllFieldsSet = cVar1;
	this->areFieldsSet = cVar1;
	this->areFieldsVirtuallySet = cVar0;
	this->nextStamp = 0x2;
	return;

}
// .method private recalculateStamp()V
void android::icu::util::Calendar::recalculateStamp()
{
	
	int j;
	int currentValue;
	int index;
	int i;
	int cVar0;
	
	this->nextStamp = 0x1;
	j = 0x0;
	//    .local v3, "j":I
label_goto_4:
	if ( j >= this->stamp->size() )
		goto label_cond_37;
	currentValue = android::icu::util::Calendar::STAMP_MAX;
	//    .local v0, "currentValue":I
	index = -0x1;
	//    .local v2, "index":I
	i = 0x0;
	//    .local v1, "i":I
label_goto_d:
	if ( i >= this->stamp->size() )
		goto label_cond_28;
	if ( this->stamp[i] <= this->nextStamp )
		goto label_cond_25;
	if ( this->stamp[i] >= currentValue )
		goto label_cond_25;
	currentValue = this->stamp[i];
	i;
label_cond_25:
	i = ( i + 0x1);
	goto label_goto_d;
	// 4882    .line 1587
label_cond_28:
	if ( index < 0 ) 
		goto label_cond_37;
	cVar0 = ( this->nextStamp + 0x1);
	this->nextStamp = cVar0;
	this->stamp[index] = cVar0;
	j = ( j + 0x1);
	goto label_goto_4;
	// 4902    .line 1593
	// 4903    .end local v0    # "currentValue":I
	// 4904    .end local v1    # "i":I
	// 4905    .end local v2    # "index":I
label_cond_37:
	this->nextStamp = ( this->nextStamp + 0x1);
	return;

}
// .method private setCalendarLocale(Landroid/icu/util/ULocale;)V
void android::icu::util::Calendar::setCalendarLocale(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<android::icu::util::ULocale> calLocale;
	std::shared_ptr<java::lang::StringBuilder> buf;
	std::shared_ptr<java::lang::String> script;
	std::shared_ptr<java::lang::String> region;
	std::shared_ptr<java::lang::String> calType;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	calLocale = locale;
	//    .local v1, "calLocale":Landroid/icu/util/ULocale;
	if ( locale->getVariant()->length() )     
		goto label_cond_11;
	if ( !(locale->getKeywords()) )  
		goto label_cond_61;
label_cond_11:
	buf = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "buf":Ljava/lang/StringBuilder;
	buf->append(locale->getLanguage());
	script = locale->getScript();
	//    .local v4, "script":Ljava/lang/String;
	if ( script->length() <= 0 )
		goto label_cond_31;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("_")))->append(script);
label_cond_31:
	region = locale->getCountry();
	//    .local v3, "region":Ljava/lang/String;
	if ( region->length() <= 0 )
		goto label_cond_45;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("_")))->append(region);
label_cond_45:
	calType = locale->getKeywordValue(std::make_shared<java::lang::String>(std::make_shared<char[]>("calendar")));
	//    .local v2, "calType":Ljava/lang/String;
	if ( !(calType) )  
		goto label_cond_58;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("@calendar=")))->append(calType);
label_cond_58:
	//    .end local v1    # "calLocale":Landroid/icu/util/ULocale;
	calLocale = std::make_shared<android::icu::util::ULocale>(buf->toString());
	//    .end local v0    # "buf":Ljava/lang/StringBuilder;
	//    .end local v2    # "calType":Ljava/lang/String;
	//    .end local v3    # "region":Ljava/lang/String;
	//    .end local v4    # "script":Ljava/lang/String;
	//    .restart local v1    # "calLocale":Landroid/icu/util/ULocale;
label_cond_61:
	this->setLocale(calLocale, calLocale);
	return;

}
// .method private setWeekData(Ljava/lang/String;)V
void android::icu::util::Calendar::setWeekData(std::shared_ptr<java::lang::String> cVar0)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<android::icu::util::Calendar_S_WeekData> wdata;
	
	//    .param p1, "region"    # Ljava/lang/String;
	if ( cVar0 )     
		goto label_cond_5;
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("001"));
label_cond_5:
	wdata = android::icu::util::Calendar::WEEK_DATA_CACHE->getInstance(cVar0, cVar0);
	wdata->checkCast("android::icu::util::Calendar_S_WeekData");
	//    .local v0, "wdata":Landroid/icu/util/Calendar$WeekData;
	this->setWeekData(wdata);
	return;

}
// .method private updateTime()V
void android::icu::util::Calendar::updateTime()
{
	
	bool cVar0;
	
	cVar0 = 0x0;
	this->computeTime();
	if ( this->isLenient() )     
		goto label_cond_10;
	if ( !(( this->areAllFieldsSet ^ 0x1)) )  
		goto label_cond_12;
label_cond_10:
	this->areFieldsSet = cVar0;
label_cond_12:
	this->isTimeSet = 0x1;
	this->areFieldsVirtuallySet = cVar0;
	return;

}
// .method private writeObject(Ljava/io/ObjectOutputStream;)V
void android::icu::util::Calendar::writeObject(std::shared_ptr<java::io::ObjectOutputStream> stream)
{
	
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "stream"    # Ljava/io/ObjectOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 5118        value = {
	// 5119            Ljava/io/IOException;
	// 5120        }
	// 5121    .end annotation
	if ( this->isTimeSet )     
		goto label_cond_7;
	try {
	//label_try_start_4:
	this->updateTime();
	//label_try_end_7:
	}
	catch (java::lang::IllegalArgumentException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_b;
	}
	//    .catch Ljava/lang/IllegalArgumentException; {:try_start_4 .. :try_end_7} :catch_b
label_cond_7:
label_goto_7:
	stream->defaultWriteObject();
	return;
	// 5143    .line 4814
label_catch_b:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/IllegalArgumentException;
	goto label_goto_7;

}
// .method public add(II)V
void android::icu::util::Calendar::add(int field,int cVar2)
{
	
	long long delta;
	int keepWallTimeInvariant;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::String> calType;
	int cVar2;
	bool oldLenient;
	int prevOffset;
	int prevWallTime;
	int newWallTime;
	auto t;
	int newOffset;
	long long adjAmount;
	auto tmpT;
	std::shared_ptr<java::lang::Long> immediatePrevTrans;
	std::shared_ptr<java::lang::RuntimeException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	
	//    .param p1, "field"    # I
	//    .param p2, "amount"    # I
	if ( cVar2 )     
		goto label_cond_3;
	return;
	// 5165    .line 3137
label_cond_3:
	delta = (long long)(cVar2);
	//    .local v8, "delta":J
	keepWallTimeInvariant = 0x1;
	//    .local v11, "keepWallTimeInvariant":Z
	// switch
	{
	auto item = ( field );
	if (item == 0) goto label_pswitch_33;
	if (item == 1) goto label_pswitch_4c;
	if (item == 2) goto label_pswitch_82;
	if (item == 3) goto label_pswitch_b2;
	if (item == 4) goto label_pswitch_b2;
	if (item == 5) goto label_pswitch_14f;
	if (item == 6) goto label_pswitch_14f;
	if (item == 7) goto label_pswitch_14f;
	if (item == 8) goto label_pswitch_b2;
	if (item == 9) goto label_pswitch_148;
	if (item == 10) goto label_pswitch_156;
	if (item == 11) goto label_pswitch_156;
	if (item == 12) goto label_pswitch_15e;
	if (item == 13) goto label_pswitch_166;
	if (item == 14) goto label_pswitch_16d;
	if (item == 15) goto label_pswitch_a;
	if (item == 16) goto label_pswitch_a;
	if (item == 17) goto label_pswitch_4c;
	if (item == 18) goto label_pswitch_14f;
	if (item == 19) goto label_pswitch_82;
	if (item == 20) goto label_pswitch_14f;
	if (item == 21) goto label_pswitch_16d;
	}
label_pswitch_a:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	var20 = cVar0(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Calendar.add(")))->append(this->fieldName(field))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(") not supported")))->toString());
	// throw
	throw cVar0;
	// 5221    .line 3142
label_pswitch_33:
	this->set(field, (this->get(field) + cVar2));
	this->pinField(0x0);
	return;
	// 5249    .line 3156
label_pswitch_4c:
	//    .local v7, "era":I
	if ( this->get(0x0) )     
		goto label_cond_82;
	calType = this->getType();
	//    .local v6, "calType":Ljava/lang/String;
	if ( calType->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("gregorian"))) )     
		goto label_cond_7d;
	if ( calType->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("roc"))) )     
		goto label_cond_7d;
	if ( !(calType->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("coptic")))) )  
		goto label_cond_82;
label_cond_7d:
	cVar2 = (0 - cVar2);
	//    .end local v6    # "calType":Ljava/lang/String;
	//    .end local v7    # "era":I
label_cond_82:
label_pswitch_82:
	oldLenient = this->isLenient();
	//    .local v14, "oldLenient":Z
	this->setLenient(0x1);
	this->set(field, (this->get(field) + cVar2));
	this->pinField(0x5);
	if ( oldLenient )     
		goto label_cond_b1;
	this->complete();
	this->setLenient(oldLenient);
label_cond_b1:
	return;
	// 5368    .line 3182
	// 5369    .end local v14    # "oldLenient":Z
label_pswitch_b2:
	delta = (delta * 0x240c8400);
label_goto_b7:
	0x0;
	//    .local v15, "prevOffset":I
	0x0;
	//    .local v16, "prevWallTime":I
	if ( !(keepWallTimeInvariant) )  
		goto label_cond_dc;
	prevOffset = (this->get(0x10) + this->get(0xf));
	prevWallTime = this->get(0x15);
label_cond_dc:
	this->setTimeInMillis((this->getTimeInMillis() + delta));
	if ( !(keepWallTimeInvariant) )  
		goto label_cond_147;
	newWallTime = this->get(0x15);
	//    .local v13, "newWallTime":I
	if ( newWallTime == prevWallTime )
		goto label_cond_147;
	t = this->internalGetTimeInMillis();
	//    .local v18, "t":J
	newOffset = (this->get(0x10) + this->get(0xf));
	//    .local v12, "newOffset":I
	if ( newOffset == prevOffset )
		goto label_cond_147;
	adjAmount = ((long long)((prevOffset - newOffset)) % 0x5265c00);
	//    .local v4, "adjAmount":J
	if ( !((adjAmount > 0x0)) )  
		goto label_cond_13a;
	this->setTimeInMillis((t + adjAmount));
label_cond_13a:
	if ( newWallTime == prevWallTime )
		goto label_cond_147;
	// switch
	{
	auto item = ( this->skippedWallTime );
	if (item == 0) goto label_pswitch_17e;
	if (item == 1) goto label_pswitch_170;
	if (item == 2) goto label_pswitch_18c;
	}
	//    .end local v4    # "adjAmount":J
	//    .end local v12    # "newOffset":I
	//    .end local v13    # "newWallTime":I
	//    .end local v18    # "t":J
label_cond_147:
label_goto_147:
	return;
	// 5553    .line 3186
	// 5554    .end local v15    # "prevOffset":I
	// 5555    .end local v16    # "prevWallTime":I
label_pswitch_148:
	delta = (delta * 0x2932e00);
	goto label_goto_b7;
	// 5564    .line 3194
label_pswitch_14f:
	delta = (delta * 0x5265c00);
	goto label_goto_b7;
	// 5573    .line 3199
label_pswitch_156:
	delta = (delta * 0x36ee80);
	keepWallTimeInvariant = 0x0;
	goto label_goto_b7;
	// 5585    .line 3204
label_pswitch_15e:
	delta = (delta * 0xea60);
	keepWallTimeInvariant = 0x0;
	goto label_goto_b7;
	// 5597    .line 3209
label_pswitch_166:
	delta = (delta * 0x3e8);
	keepWallTimeInvariant = 0x0;
	goto label_goto_b7;
	// 5609    .line 3215
label_pswitch_16d:
	keepWallTimeInvariant = 0x0;
	goto label_goto_b7;
	// 5616    .line 3259
	// 5617    .restart local v4    # "adjAmount":J
	// 5618    .restart local v12    # "newOffset":I
	// 5619    .restart local v13    # "newWallTime":I
	// 5620    .restart local v15    # "prevOffset":I
	// 5621    .restart local v16    # "prevWallTime":I
	// 5622    .restart local v18    # "t":J
label_pswitch_170:
	if ( (adjAmount > 0x0) <= 0 )
		goto label_cond_147;
	this->setTimeInMillis(t);
	goto label_goto_147;
	// 5639    .line 3264
label_pswitch_17e:
	if ( (adjAmount > 0x0) >= 0 )
		goto label_cond_147;
	this->setTimeInMillis(t);
	goto label_goto_147;
	// 5656    .line 3269
label_pswitch_18c:
	if ( (adjAmount > 0x0) <= 0 )
		goto label_cond_1ac;
	tmpT = this->internalGetTimeInMillis();
	//    .local v20, "tmpT":J
label_goto_196:
	immediatePrevTrans = this->getImmediatePreviousZoneTransition(tmpT);
	//    .local v10, "immediatePrevTrans":Ljava/lang/Long;
	if ( !(immediatePrevTrans) )  
		goto label_cond_1af;
	this->setTimeInMillis(immediatePrevTrans->longValue());
	goto label_goto_147;
	// 5696    .line 3269
	// 5697    .end local v10    # "immediatePrevTrans":Ljava/lang/Long;
	// 5698    .end local v20    # "tmpT":J
label_cond_1ac:
	tmpT = t;
	//    .restart local v20    # "tmpT":J
	goto label_goto_196;
	// 5705    .line 3274
	// 5706    .restart local v10    # "immediatePrevTrans":Ljava/lang/Long;
label_cond_1af:
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	var192 = cVar3(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Could not locate a time zone transition before ")))->append(tmpT)->toString());
	// throw
	throw cVar3;
	// 5740    .line 3140
	// 5741    nop
	// 5743    :pswitch_data_1d2
	// 5744    .packed-switch 0x0
	// 5745        :pswitch_33
	// 5746        :pswitch_4c
	// 5747        :pswitch_82
	// 5748        :pswitch_b2
	// 5749        :pswitch_b2
	// 5750        :pswitch_14f
	// 5751        :pswitch_14f
	// 5752        :pswitch_14f
	// 5753        :pswitch_b2
	// 5754        :pswitch_148
	// 5755        :pswitch_156
	// 5756        :pswitch_156
	// 5757        :pswitch_15e
	// 5758        :pswitch_166
	// 5759        :pswitch_16d
	// 5760        :pswitch_a
	// 5761        :pswitch_a
	// 5762        :pswitch_4c
	// 5763        :pswitch_14f
	// 5764        :pswitch_82
	// 5765        :pswitch_14f
	// 5766        :pswitch_16d
	// 5767    .end packed-switch
	// 5769    .line 3257
	// 5770    :pswitch_data_202
	// 5771    .packed-switch 0x0
	// 5772        :pswitch_17e
	// 5773        :pswitch_170
	// 5774        :pswitch_18c
	// 5775    .end packed-switch

}
// .method public after(Ljava/lang/Object;)Z
bool android::icu::util::Calendar::after(std::shared_ptr<java::lang::Object> when)
{
	
	bool cVar0;
	
	//    .param p1, "when"    # Ljava/lang/Object;
	if ( (this->compare(when) > 0x0) <= 0 )
		goto label_cond_c;
	cVar0 = 0x1;
label_goto_b:
	return cVar0;
label_cond_c:
	cVar0 = 0x0;
	goto label_goto_b;

}
// .method public before(Ljava/lang/Object;)Z
bool android::icu::util::Calendar::before(std::shared_ptr<java::lang::Object> when)
{
	
	bool cVar0;
	
	//    .param p1, "when"    # Ljava/lang/Object;
	if ( (this->compare(when) > 0x0) >= 0 )
		goto label_cond_c;
	cVar0 = 0x1;
label_goto_b:
	return cVar0;
label_cond_c:
	cVar0 = 0x0;
	goto label_goto_b;

}
// .method public final clear()V
void android::icu::util::Calendar::clear()
{
	
	bool cVar0;
	int i;
	
	cVar0 = 0x0;
	i = 0x0;
	//    .local v0, "i":I
label_goto_2:
	if ( i >= this->fields->size() )
		goto label_cond_12;
	this->stamp[i] = cVar0;
	this->fields[i] = cVar0;
	i = ( i + 0x1);
	goto label_goto_2;
	// 5863    .line 2228
label_cond_12:
	this->areFieldsVirtuallySet = cVar0;
	this->areAllFieldsSet = cVar0;
	this->areFieldsSet = cVar0;
	this->isTimeSet = cVar0;
	return;

}
// .method public final clear(I)V
void android::icu::util::Calendar::clear(int field)
{
	
	bool cVar0;
	
	//    .param p1, "field"    # I
	cVar0 = 0x0;
	if ( !(this->areFieldsVirtuallySet) )  
		goto label_cond_8;
	this->computeFields();
label_cond_8:
	this->fields[field] = cVar0;
	this->stamp[field] = cVar0;
	this->areFieldsVirtuallySet = cVar0;
	this->areAllFieldsSet = cVar0;
	this->areFieldsSet = cVar0;
	this->isTimeSet = cVar0;
	return;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::util::Calendar::clone()
{
	
	std::shared_ptr<android::icu::util::ICUCloneNotSupportedException> cVar1;
	std::shared_ptr<android::icu::util::Calendar> other;
	std::shared_ptr<android::icu::util::TimeZone> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	try {
	//label_try_start_0:
	other = this->clone();
	other->checkCast("android::icu::util::Calendar");
	//    .local v1, "other":Landroid/icu/util/Calendar;
	other->fields = std::make_shared<std::vector<int[]>>(this->fields->size());
	other->stamp = std::make_shared<std::vector<int[]>>(this->fields->size());
	java::lang::System::arraycopy(this->fields, 0x0, other->fields, 0x0, this->fields->size());
	java::lang::System::arraycopy(this->stamp, 0x0, other->stamp, 0x0, this->fields->size());
	cVar0 = this->zone->clone();
	cVar0->checkCast("android::icu::util::TimeZone");
	other->zone = cVar0;
	//label_try_end_36:
	}
	catch (java::lang::CloneNotSupportedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_37;
	}
	//    .catch Ljava/lang/CloneNotSupportedException; {:try_start_0 .. :try_end_36} :catch_37
	return other;
	// 5993    .line 4561
	// 5994    .end local v1    # "other":Landroid/icu/util/Calendar;
label_catch_37:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/CloneNotSupportedException;
	cVar1 = std::make_shared<android::icu::util::ICUCloneNotSupportedException>(getCatchExcetionFromList);
	// throw
	throw cVar1;

}
// .method public compareTo(Landroid/icu/util/Calendar;)I
int android::icu::util::Calendar::compareTo(std::shared_ptr<android::icu::util::Calendar> that)
{
	
	long long cVar0;
	long long v;
	int cVar1;
	
	//    .param p1, "that"    # Landroid/icu/util/Calendar;
	cVar0 = 0x0;
	v = (this->getTimeInMillis() - that->getTimeInMillis());
	//    .local v0, "v":J
	if ( (v > cVar0) >= 0 )
		goto label_cond_12;
	cVar1 = -0x1;
label_goto_11:
	return cVar1;
label_cond_12:
	if ( (v > cVar0) <= 0 )
		goto label_cond_18;
	cVar1 = 0x1;
	goto label_goto_11;
label_cond_18:
	cVar1 = 0x0;
	goto label_goto_11;

}
// .method protected complete()V
void android::icu::util::Calendar::complete()
{
	
	bool cVar0;
	
	cVar0 = 0x1;
	if ( this->isTimeSet )     
		goto label_cond_8;
	this->updateTime();
label_cond_8:
	if ( this->areFieldsSet )     
		goto label_cond_13;
	this->computeFields();
	this->areFieldsSet = cVar0;
	this->areAllFieldsSet = cVar0;
label_cond_13:
	return;

}
// .method protected computeFields()V
void android::icu::util::Calendar::computeFields()
{
	
	std::shared<std::vector<int[]>> offsets;
	long long localMillis;
	int mask;
	int i;
	auto days;
	int millisInDay;
	
	offsets = std::make_shared<std::vector<int[]>>(0x2);
	//    .local v7, "offsets":[I
	this->getTimeZone()->getOffset(this->time, 0x0, offsets);
	localMillis = ((this->time +  (long long)(offsets[0x0])) + (long long)(offsets[0x1]));
	//    .local v4, "localMillis":J
	mask = this->internalSetMask;
	//    .local v3, "mask":I
	i = 0x0;
	//    .local v2, "i":I
label_goto_1d:
	if ( i >= this->fields->size() )
		goto label_cond_36;
	if ( ( mask & 0x1) )     
		goto label_cond_30;
	this->stamp[i] = 0x1;
label_goto_2b:
	mask = _shri(mask,0x1);
	i = ( i + 0x1);
	goto label_goto_1d;
	// 6175    .line 4861
label_cond_30:
	this->stamp[i] = 0x0;
	goto label_goto_2b;
	// 6185    .line 4875
label_cond_36:
	days = android::icu::util::Calendar::floorDivide(localMillis, 0x5265c00);
	//    .local v0, "days":J
	this->fields[0x14] = ((int)(days) +  0x253d8c);
	this->computeGregorianAndDOWFields(this->fields[0x14]);
	this->handleComputeFields(this->fields[0x14]);
	this->computeWeekFields();
	millisInDay = (int)((localMillis - (0x5265c00 *  days)));
	//    .local v6, "millisInDay":I
	this->fields[0x15] = millisInDay;
	this->fields[0xe] = ( millisInDay % 0x3e8);
	millisInDay = ( millisInDay / 0x3e8);
	this->fields[0xd] = ( millisInDay % 0x3c);
	millisInDay = ( millisInDay / 0x3c);
	this->fields[0xc] = ( millisInDay % 0x3c);
	millisInDay = ( millisInDay / 0x3c);
	this->fields[0xb] = millisInDay;
	this->fields[0x9] = ( millisInDay / 0xc);
	this->fields[0xa] = ( millisInDay % 0xc);
	this->fields[0xf] = offsets[0x0];
	this->fields[0x10] = offsets[0x1];
	return;

}
// .method protected final computeGregorianFields(I)V
void android::icu::util::Calendar::computeGregorianFields(int julianDay)
{
	
	std::shared<std::vector<int[]>> rem;
	int n100;
	int n1;
	int year;
	int dayOfYear;
	int isLeap;
	int correction;
	int month;
	int cVar0;
	
	//    .param p1, "julianDay"    # I
	//    .local v6, "gregorianEpochDay":J
	rem = std::make_shared<std::vector<int[]>>(0x1);
	//    .local v14, "rem":[I
	//    .local v13, "n400":I
	n100 = android::icu::util::Calendar::floorDivide(rem[0x0], 0x8eac, rem);
	//    .local v11, "n100":I
	//    .local v12, "n4":I
	n1 = android::icu::util::Calendar::floorDivide(rem[0x0], 0x16d, rem);
	//    .local v10, "n1":I
	year = (((( android::icu::util::Calendar::floorDivide((long long)((julianDay - 0x1a4452)), 0x23ab1, rem) * 0x190) + ( n100 * 0x64)) + ( android::icu::util::Calendar::floorDivide(rem[0x0], 0x5b5, rem) * 0x4)) + n1);
	//    .local v15, "year":I
	dayOfYear = rem[0x0];
	//    .local v4, "dayOfYear":I
	if ( n100 == 0x4 )
		goto label_cond_60;
	if ( n1 != 0x4 )
		goto label_cond_a8;
label_cond_60:
	dayOfYear = 0x16d;
label_goto_62:
	if ( ( year & 0x3) )     
		goto label_cond_ad;
	if ( ( year % 0x64) )     
		goto label_cond_70;
	if ( ( year % 0x190) )     
		goto label_cond_ab;
label_cond_70:
	isLeap = 0x1;
	//    .local v5, "isLeap":Z
label_goto_71:
	correction = 0x0;
	//    .local v2, "correction":I
	if ( !(isLeap) )  
		goto label_cond_af;
	//    .local v8, "march1":I
label_goto_76:
	if ( dayOfYear <  march1 )
		goto label_cond_7b;
	if ( !(isLeap) )  
		goto label_cond_b2;
	correction = 0x1;
label_cond_7b:
label_goto_7b:
	month = ( ( ( (dayOfYear + correction) * 0xc) + 0x6) / 0x16f);
	//    .local v9, "month":I
	if ( !(isLeap) )  
		goto label_cond_b4;
	cVar0 = 0x3;
label_goto_8d:
	//    .local v3, "dayOfMonth":I
	this->gregorianYear = year;
	this->gregorianMonth = month;
	this->gregorianDayOfMonth = ( (dayOfYear - android::icu::util::Calendar::GREGORIAN_MONTH_COUNT[month][cVar0]) + 0x1);
	this->gregorianDayOfYear = ( dayOfYear + 0x1);
	return;
	// 6551    .line 4959
	// 6552    .end local v2    # "correction":I
	// 6553    .end local v3    # "dayOfMonth":I
	// 6554    .end local v5    # "isLeap":Z
	// 6555    .end local v8    # "march1":I
	// 6556    .end local v9    # "month":I
label_cond_a8:
	year = ( year + 0x1);
	goto label_goto_62;
	// 6562    .line 4963
label_cond_ab:
	isLeap = 0x0;
	//    .restart local v5    # "isLeap":Z
	goto label_goto_71;
	// 6569    .line 4962
	// 6570    .end local v5    # "isLeap":Z
label_cond_ad:
	isLeap = 0x0;
	//    .restart local v5    # "isLeap":Z
	goto label_goto_71;
	// 6577    .line 4966
	// 6578    .restart local v2    # "correction":I
label_cond_af:
	//    .restart local v8    # "march1":I
	goto label_goto_76;
	// 6585    .line 4967
label_cond_b2:
	correction = 0x2;
	goto label_goto_7b;
	// 6591    .line 4970
	// 6592    .restart local v9    # "month":I
label_cond_b4:
	cVar0 = 0x2;
	goto label_goto_8d;

}
// .method protected computeGregorianMonthStart(II)I
int android::icu::util::Calendar::computeGregorianMonthStart(int cVar0,int cVar1)
{
	
	std::shared<std::vector<int[]>> rem;
	int cVar0;
	int cVar1;
	int y;
	int julianDay;
	int cVar2;
	
	//    .param p1, "year"    # I
	//    .param p2, "month"    # I
	if ( cVar1 < 0 ) 
		goto label_cond_7;
	if ( cVar1 <= 0xb )
		goto label_cond_13;
label_cond_7:
	rem = std::make_shared<std::vector<int[]>>(0x1);
	//    .local v2, "rem":[I
	cVar0 = (cVar0 +  android::icu::util::Calendar::floorDivide(cVar1, 0xc, rem));
	cVar1 = rem[0x0];
	//    .end local v2    # "rem":[I
label_cond_13:
	if ( ( cVar0 % 0x4) )     
		goto label_cond_4b;
	if ( ( cVar0 % 0x64) )     
		goto label_cond_1f;
	if ( ( cVar0 % 0x190) )     
		goto label_cond_4b;
label_cond_1f:
	//    .local v0, "isLeap":Z
label_goto_20:
	y = ( cVar0 + -0x1);
	//    .local v3, "y":I
	julianDay = ( ((((( y * 0x16d) +  android::icu::util::Calendar::floorDivide(y, 0x4)) -  android::icu::util::Calendar::floorDivide(y, 0x64)) +  android::icu::util::Calendar::floorDivide(y, 0x190)) +  0x1a4452) + -0x1);
	//    .local v1, "julianDay":I
	if ( !(cVar1) )  
		goto label_cond_4a;
	if ( !(0x1) )  
		goto label_cond_4d;
	cVar2 = 0x3;
label_goto_47:
label_cond_4a:
	return julianDay;
	// 6716    .line 5842
	// 6717    .end local v0    # "isLeap":Z
	// 6718    .end local v1    # "julianDay":I
	// 6719    .end local v3    # "y":I
label_cond_4b:
	0x0;
	//    .restart local v0    # "isLeap":Z
	goto label_goto_20;
	// 6726    .line 5853
	// 6727    .restart local v1    # "julianDay":I
	// 6728    .restart local v3    # "y":I
label_cond_4d:
	cVar2 = 0x2;
	goto label_goto_47;

}
// .method protected computeJulianDay()I
int android::icu::util::Calendar::computeJulianDay()
{
	
	int cVar0;
	int cVar1;
	int bestField;
	
	cVar0 = 0x14;
	cVar1 = 0x0;
	if ( this->stamp[cVar0] <  0x2 )
		goto label_cond_23;
	//    .local v1, "bestStamp":I
	if ( this->newestStamp(0x11, 0x13, this->newestStamp(cVar1, 0x8, cVar1)) >  this->stamp[cVar0] )
		goto label_cond_23;
	return this->internalGet(cVar0);
	// 6783    .line 5591
	// 6784    .end local v1    # "bestStamp":I
label_cond_23:
	bestField = this->resolveFields(this->getFieldResolutionTable());
	//    .local v0, "bestField":I
	if ( bestField >= 0 )
		goto label_cond_2e;
label_cond_2e:
	return this->handleComputeJulianDay(bestField);

}
// .method protected computeMillisInDay()I
int android::icu::util::Calendar::computeMillisInDay()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int millisInDay;
	int hourOfDayStamp;
	int hourStamp;
	int bestStamp;
	
	cVar0 = 0xb;
	cVar1 = 0xa;
	cVar2 = 0x9;
	millisInDay = 0x0;
	//    .local v3, "millisInDay":I
	hourOfDayStamp = this->stamp[cVar0];
	//    .local v1, "hourOfDayStamp":I
	hourStamp = java::lang::Math::max(this->stamp[cVar1], this->stamp[cVar2]);
	//    .local v2, "hourStamp":I
	if ( hourStamp <= hourOfDayStamp )
		goto label_cond_40;
	bestStamp = hourStamp;
	//    .local v0, "bestStamp":I
label_goto_1c:
	if ( !(bestStamp) )  
		goto label_cond_26;
	if ( bestStamp != hourOfDayStamp )
		goto label_cond_42;
	millisInDay = ( this->internalGet(cVar0) + 0x0);
label_cond_26:
label_goto_26:
	millisInDay = ( millisInDay * 0x3c);
	millisInDay = (millisInDay +  this->internalGet(0xc));
	millisInDay = ( millisInDay * 0x3c);
	millisInDay = (millisInDay +  this->internalGet(0xd));
	millisInDay = ( millisInDay * 0x3e8);
	millisInDay = (millisInDay +  this->internalGet(0xe));
	return millisInDay;
	// 6905    .line 5488
	// 6906    .end local v0    # "bestStamp":I
label_cond_40:
	//    .restart local v0    # "bestStamp":I
	goto label_goto_1c;
	// 6913    .line 5499
label_cond_42:
	millisInDay = ( this->internalGet(cVar1) + 0x0);
	millisInDay = (millisInDay +  ( this->internalGet(cVar2) * 0xc));
	goto label_goto_26;

}
// .method protected computeTime()V
void android::icu::util::Calendar::computeTime()
{
	
	long long millis;
	int millisInDay;
	int zoneOffset;
	long long tmpTime;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	std::shared_ptr<java::lang::Long> immediatePrevTransition;
	std::shared_ptr<java::lang::RuntimeException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	if ( this->isLenient() )     
		goto label_cond_9;
	this->validateFields();
label_cond_9:
	//    .local v1, "julianDay":I
	millis = android::icu::util::Calendar::julianDayToMillis(this->computeJulianDay());
	//    .local v2, "millis":J
	if ( this->stamp[0x15] <  0x2 )
		goto label_cond_57;
	if ( this->newestStamp(0x9, 0xe, 0x0) >  this->stamp[0x15] )
		goto label_cond_57;
	millisInDay = this->internalGet(0x15);
	//    .local v4, "millisInDay":I
label_goto_31:
	if ( this->stamp[0xf] >= 0x2 )
		goto label_cond_43;
	if ( this->stamp[0x10] <  0x2 )
		goto label_cond_5c;
label_cond_43:
	this->time = (((long long)(millisInDay) +  millis) -  (long long)((this->internalGet(0xf) +  this->internalGet(0x10))));
label_goto_56:
	return;
	// 7051    .line 5286
	// 7052    .end local v4    # "millisInDay":I
label_cond_57:
	//    .restart local v4    # "millisInDay":I
	goto label_goto_31;
	// 7061    .line 5324
label_cond_5c:
	if ( !(this->lenient) )  
		goto label_cond_65;
	if ( this->skippedWallTime != 0x2 )
		goto label_cond_c2;
label_cond_65:
	zoneOffset = this->computeZoneOffset(millis, millisInDay);
	//    .local v5, "zoneOffset":I
	tmpTime = (((long long)(millisInDay) +  millis) - (long long)(zoneOffset));
	//    .local v6, "tmpTime":J
	//    .local v8, "zoneOffset1":I
	if ( zoneOffset == this->zone->getOffset(tmpTime) )
		goto label_cond_bf;
	if ( this->lenient )     
		goto label_cond_83;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("The specified wall time does not exist due to time zone offset transition.")));
	// throw
	throw cVar0;
	// 7115    .line 5340
label_cond_83:
	if ( android::icu::util::Calendar::_assertionsDisabled )     
		goto label_cond_98;
	if ( this->skippedWallTime == 0x2 )
		goto label_cond_98;
	cVar1 = std::make_shared<java::lang::AssertionError>(java::lang::Integer::valueOf(this->skippedWallTime));
	// throw
	throw cVar1;
	// 7139    .line 5344
label_cond_98:
	immediatePrevTransition = this->getImmediatePreviousZoneTransition(tmpTime);
	//    .local v0, "immediatePrevTransition":Ljava/lang/Long;
	if ( immediatePrevTransition )     
		goto label_cond_b8;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::RuntimeException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Could not locate a time zone transition before ")))->append(tmpTime)->toString());
	// throw
	throw cVar2;
	// 7174    .line 5348
label_cond_b8:
	this->time = immediatePrevTransition->longValue();
	goto label_goto_56;
	// 7184    .line 5350
	// 7185    .end local v0    # "immediatePrevTransition":Ljava/lang/Long;
label_cond_bf:
	this->time = tmpTime;
	goto label_goto_56;
	// 7191    .line 5353
	// 7192    .end local v5    # "zoneOffset":I
	// 7193    .end local v6    # "tmpTime":J
	// 7194    .end local v8    # "zoneOffset1":I
label_cond_c2:
	this->time = (((long long)(millisInDay) +  millis) -  (long long)(this->computeZoneOffset(millis, millisInDay)));
	goto label_goto_56;

}
// .method protected computeZoneOffset(JI)I
int android::icu::util::Calendar::computeZoneOffset(long long millis,int millisInDay)
{
	
	std::shared<std::vector<int[]>> offsets;
	long long wall;
	std::shared_ptr<android::icu::util::TimeZone> cVar0;
	int offsetDelta;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	
	//    .param p1, "millis"    # J
	//    .param p3, "millisInDay"    # I
	offsets = std::make_shared<std::vector<int[]>>(0x2);
	//    .local v8, "offsets":[I
	wall = (millis + (long long)(millisInDay));
	//    .local v4, "wall":J
	if ( !(this->zone->instanceOf("android::icu::util::BasicTimeZone")) )  
		goto label_cond_37;
	if ( this->repeatedWallTime != 0x1 )
		goto label_cond_32;
	//    .local v7, "duplicatedTimeOpt":I
label_goto_18:
	if ( this->skippedWallTime != 0x1 )
		goto label_cond_35;
	//    .local v6, "nonExistingTimeOpt":I
label_goto_21:
	cVar0 = this->zone;
	cVar0->checkCast("android::icu::util::BasicTimeZone");
	cVar0->getOffsetFromLocal(wall, nonExistingTimeOpt, duplicatedTimeOpt, offsets);
	//    .end local v6    # "nonExistingTimeOpt":I
	//    .end local v7    # "duplicatedTimeOpt":I
label_cond_2a:
label_goto_2a:
	return (offsets[0x0] +  offsets[0x1]);
	// 7294    .line 5530
label_cond_32:
	//    .restart local v7    # "duplicatedTimeOpt":I
	goto label_goto_18;
	// 7301    .line 5531
label_cond_35:
	//    .restart local v6    # "nonExistingTimeOpt":I
	goto label_goto_21;
	// 7308    .line 5535
	// 7309    .end local v6    # "nonExistingTimeOpt":I
	// 7310    .end local v7    # "duplicatedTimeOpt":I
label_cond_37:
	this->zone->getOffset(wall, 0x1, offsets);
	//    .local v10, "sawRecentNegativeShift":Z
	if ( this->repeatedWallTime != 0x1 )
		goto label_cond_87;
	//    .local v12, "tgmt":J
	//    .local v2, "offsetBefore6":I
	offsetDelta = ((offsets[0x0] +  offsets[0x1]) - this->zone->getOffset(((wall - (long long)((offsets[0x0] +  offsets[0x1]))) - 0x1499700)));
	//    .local v9, "offsetDelta":I
	if ( android::icu::util::Calendar::_assertionsDisabled )     
		goto label_cond_7a;
	if ( offsetDelta >  -0x1499700 )
		goto label_cond_7a;
	cVar1 = std::make_shared<java::lang::AssertionError>(java::lang::Integer::valueOf(offsetDelta));
	// throw
	throw cVar1;
	// 7396    .line 5549
label_cond_7a:
	if ( offsetDelta >= 0 )
		goto label_cond_87;
	this->zone->getOffset(((long long)(offsetDelta) +  wall), 0x1, offsets);
	//    .end local v2    # "offsetBefore6":I
	//    .end local v9    # "offsetDelta":I
	//    .end local v12    # "tgmt":J
label_cond_87:
	if ( 0x0 )     
		goto label_cond_2a;
	if ( this->skippedWallTime != 0x1 )
		goto label_cond_2a;
	//    .restart local v12    # "tgmt":J
	this->zone->getOffset((wall - (long long)((offsets[0x0] +  offsets[0x1]))), 0x0, offsets);
	goto label_goto_2a;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::util::Calendar::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<android::icu::util::Calendar> that;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( obj )     
		goto label_cond_5;
	return cVar1;
	// 7474    .line 2281
label_cond_5:
	if ( this != obj )
		goto label_cond_8;
	return cVar0;
	// 7481    .line 2284
label_cond_8:
	if ( this->getClass() == obj->getClass() )
		goto label_cond_13;
	return cVar1;
label_cond_13:
	that = obj;
	that->checkCast("android::icu::util::Calendar");
	//    .local v0, "that":Landroid/icu/util/Calendar;
	if ( !(this->isEquivalentTo(that)) )  
		goto label_cond_2f;
	if ( (this->getTimeInMillis() > that->getTime()->getTime()) )     
		goto label_cond_2d;
label_goto_2c:
	return cVar0;
label_cond_2d:
	cVar0 = cVar1;
	goto label_goto_2c;
label_cond_2f:
	cVar0 = cVar1;
	goto label_goto_2c;

}
// .method public fieldDifference(Ljava/util/Date;I)I
int android::icu::util::Calendar::fieldDifference(std::shared_ptr<java::util::Date> when,int field)
{
	
	int cVar0;
	int min;
	long long startMs;
	auto targetMs;
	int max;
	auto ms;
	int t;
	std::shared_ptr<java::lang::RuntimeException> cVar1;
	std::shared_ptr<java::lang::RuntimeException> cVar2;
	
	//    .param p1, "when"    # Ljava/util/Date;
	//    .param p2, "field"    # I
	cVar0 = 0x1;
	min = 0x0;
	//    .local v1, "min":I
	startMs = this->getTimeInMillis();
	//    .local v4, "startMs":J
	targetMs = when->getTime();
	//    .local v8, "targetMs":J
	if ( (startMs > targetMs) >= 0 )
		goto label_cond_57;
	max = 0x1;
	//    .local v0, "max":I
label_cond_f:
label_goto_f:
	this->setTimeInMillis(startMs);
	this->add(field, max);
	ms = this->getTimeInMillis();
	//    .local v2, "ms":J
	if ( (ms > targetMs) )     
		goto label_cond_1e;
	return max;
	// 7599    .line 3958
label_cond_1e:
	if ( (ms > targetMs) <= 0 )
		goto label_cond_3b;
label_goto_22:
	if ( (max - min) <= cVar0 )
		goto label_cond_9b;
	t = (min + ( (max - min) / 0x2));
	//    .local v6, "t":I
	this->setTimeInMillis(startMs);
	this->add(field, t);
	ms = this->getTimeInMillis();
	if ( (ms > targetMs) )     
		goto label_cond_4f;
	return t;
	// 7638    .line 3960
	// 7639    .end local v6    # "t":I
label_cond_3b:
	if ( max >= 0x7fffffff )
		goto label_cond_49;
	max;
	max = ( max << 0x1);
	if ( max >= 0 )
		goto label_cond_f;
	max = 0x7fffffff;
	goto label_goto_f;
	// 7659    .line 3968
label_cond_49:
	cVar1 = std::make_shared<java::lang::RuntimeException>();
	// throw
	throw cVar1;
	// 7667    .line 3979
	// 7668    .restart local v6    # "t":I
label_cond_4f:
	if ( (ms > targetMs) <= 0 )
		goto label_cond_55;
	max = t;
	goto label_goto_22;
	// 7679    .line 3982
label_cond_55:
	min = t;
	goto label_goto_22;
	// 7685    .line 3985
	// 7686    .end local v0    # "max":I
	// 7687    .end local v2    # "ms":J
	// 7688    .end local v6    # "t":I
label_cond_57:
	if ( (startMs > targetMs) <= 0 )
		goto label_cond_9b;
	max = -0x1;
	//    .restart local v0    # "max":I
label_cond_5c:
	this->setTimeInMillis(startMs);
	this->add(field, max);
	ms = this->getTimeInMillis();
	//    .restart local v2    # "ms":J
	if ( (ms > targetMs) )     
		goto label_cond_6b;
	return max;
	// 7719    .line 4002
label_cond_6b:
	if ( (ms > targetMs) >= 0 )
		goto label_cond_88;
label_goto_6f:
	if ( (min - max) <= cVar0 )
		goto label_cond_9b;
	t = (min + ( (max - min) / 0x2));
	//    .restart local v6    # "t":I
	this->setTimeInMillis(startMs);
	this->add(field, t);
	ms = this->getTimeInMillis();
	if ( (ms > targetMs) )     
		goto label_cond_93;
	return t;
	// 7758    .line 4005
	// 7759    .end local v6    # "t":I
label_cond_88:
	max;
	max = ( max << 0x1);
	if ( max )     
		goto label_cond_5c;
	cVar2 = std::make_shared<java::lang::RuntimeException>();
	// throw
	throw cVar2;
	// 7776    .line 4021
	// 7777    .restart local v6    # "t":I
label_cond_93:
	if ( (ms > targetMs) >= 0 )
		goto label_cond_99;
	max = t;
	goto label_goto_6f;
	// 7788    .line 4024
label_cond_99:
	min = t;
	goto label_goto_6f;
	// 7794    .line 4029
	// 7795    .end local v0    # "max":I
	// 7796    .end local v2    # "ms":J
	// 7797    .end local v6    # "t":I
label_cond_9b:
	this->setTimeInMillis(startMs);
	this->add(field, min);
	return min;

}
// .method protected fieldName(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Calendar::fieldName(int field)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "field"    # I
	try {
	//label_try_start_0:
	//label_try_end_4:
	}
	catch (java::lang::ArrayIndexOutOfBoundsException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5;
	}
	//    .catch Ljava/lang/ArrayIndexOutOfBoundsException; {:try_start_0 .. :try_end_4} :catch_5
	return android::icu::util::Calendar::FIELD_NAME[field];
	// 7823    .line 6123
label_catch_5:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/ArrayIndexOutOfBoundsException;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Field ")))->append(field)->toString();

}
// .method public final get(I)I
int android::icu::util::Calendar::get(int field)
{
	
	//    .param p1, "field"    # I
	this->complete();
	return this->fields[field];

}
// .method public getActualMaximum(I)I
int android::icu::util::Calendar::getActualMaximum(int field)
{
	
	int cVar0;
	bool cVar1;
	bool cVar2;
	std::shared_ptr<android::icu::util::Calendar> cal;
	
	//    .param p1, "field"    # I
	cVar0 = 0x13;
	cVar1 = 0x1;
	cVar2 = 0x0;
	// switch
	{
	auto item = ( field );
	if (item == 0) goto label_pswitch_43;
	if (item == 1) goto label_pswitch_7;
	if (item == 2) goto label_pswitch_7;
	if (item == 3) goto label_pswitch_7;
	if (item == 4) goto label_pswitch_7;
	if (item == 5) goto label_pswitch_14;
	if (item == 6) goto label_pswitch_2e;
	if (item == 7) goto label_pswitch_43;
	if (item == 8) goto label_pswitch_7;
	if (item == 9) goto label_pswitch_43;
	if (item == 10) goto label_pswitch_43;
	if (item == 11) goto label_pswitch_43;
	if (item == 12) goto label_pswitch_43;
	if (item == 13) goto label_pswitch_43;
	if (item == 14) goto label_pswitch_43;
	if (item == 15) goto label_pswitch_43;
	if (item == 16) goto label_pswitch_43;
	if (item == 17) goto label_pswitch_7;
	if (item == 18) goto label_pswitch_43;
	if (item == 19) goto label_pswitch_7;
	if (item == 20) goto label_pswitch_43;
	if (item == 21) goto label_pswitch_43;
	}
label_pswitch_7:
	//    .local v1, "result":I
label_goto_13:
	return result;
	// 7899    .line 2399
	// 7900    .end local v1    # "result":I
label_pswitch_14:
	cal = this->clone();
	cal->checkCast("android::icu::util::Calendar");
	//    .local v0, "cal":Landroid/icu/util/Calendar;
	cal->setLenient(cVar1);
	cal->prepareGetActual(field, cVar2);
	//    .restart local v1    # "result":I
	goto label_goto_13;
	// 7933    .line 2408
	// 7934    .end local v0    # "cal":Landroid/icu/util/Calendar;
	// 7935    .end local v1    # "result":I
label_pswitch_2e:
	cal = this->clone();
	cal->checkCast("android::icu::util::Calendar");
	//    .restart local v0    # "cal":Landroid/icu/util/Calendar;
	cal->setLenient(cVar1);
	cal->prepareGetActual(field, cVar2);
	//    .restart local v1    # "result":I
	goto label_goto_13;
	// 7962    .line 2429
	// 7963    .end local v0    # "cal":Landroid/icu/util/Calendar;
	// 7964    .end local v1    # "result":I
label_pswitch_43:
	//    .restart local v1    # "result":I
	goto label_goto_13;
	// 7973    .line 2396
	// 7974    :pswitch_data_48
	// 7975    .packed-switch 0x0
	// 7976        :pswitch_43
	// 7977        :pswitch_7
	// 7978        :pswitch_7
	// 7979        :pswitch_7
	// 7980        :pswitch_7
	// 7981        :pswitch_14
	// 7982        :pswitch_2e
	// 7983        :pswitch_43
	// 7984        :pswitch_7
	// 7985        :pswitch_43
	// 7986        :pswitch_43
	// 7987        :pswitch_43
	// 7988        :pswitch_43
	// 7989        :pswitch_43
	// 7990        :pswitch_43
	// 7991        :pswitch_43
	// 7992        :pswitch_43
	// 7993        :pswitch_7
	// 7994        :pswitch_43
	// 7995        :pswitch_7
	// 7996        :pswitch_43
	// 7997        :pswitch_43
	// 7998    .end packed-switch

}
// .method public getActualMinimum(I)I
int android::icu::util::Calendar::getActualMinimum(int field)
{
	
	//    .param p1, "field"    # I
	// switch
	{
	auto item = ( field );
	if (item == 7) goto label_pswitch_10;
	if (item == 8) goto label_pswitch_3;
	if (item == 9) goto label_pswitch_10;
	if (item == 10) goto label_pswitch_10;
	if (item == 11) goto label_pswitch_10;
	if (item == 12) goto label_pswitch_10;
	if (item == 13) goto label_pswitch_10;
	if (item == 14) goto label_pswitch_10;
	if (item == 15) goto label_pswitch_10;
	if (item == 16) goto label_pswitch_10;
	if (item == 17) goto label_pswitch_3;
	if (item == 18) goto label_pswitch_10;
	if (item == 19) goto label_pswitch_3;
	if (item == 20) goto label_pswitch_10;
	if (item == 21) goto label_pswitch_10;
	}
label_pswitch_3:
	//    .local v0, "result":I
label_goto_f:
	return result;
	// 8028    .line 2478
	// 8029    .end local v0    # "result":I
label_pswitch_10:
	//    .restart local v0    # "result":I
	goto label_goto_f;
	// 8038    .line 2464
	// 8039    nop
	// 8041    :pswitch_data_16
	// 8042    .packed-switch 0x7
	// 8043        :pswitch_10
	// 8044        :pswitch_3
	// 8045        :pswitch_10
	// 8046        :pswitch_10
	// 8047        :pswitch_10
	// 8048        :pswitch_10
	// 8049        :pswitch_10
	// 8050        :pswitch_10
	// 8051        :pswitch_10
	// 8052        :pswitch_10
	// 8053        :pswitch_3
	// 8054        :pswitch_10
	// 8055        :pswitch_3
	// 8056        :pswitch_10
	// 8057        :pswitch_10
	// 8058    .end packed-switch

}
// .method public getDateTimeFormat(IILandroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::util::Calendar::getDateTimeFormat(int dateStyle,int timeStyle,std::shared_ptr<android::icu::util::ULocale> loc)
{
	
	//    .param p1, "dateStyle"    # I
	//    .param p2, "timeStyle"    # I
	//    .param p3, "loc"    # Landroid/icu/util/ULocale;
	return android::icu::util::Calendar::formatHelper(this, loc, dateStyle, timeStyle);

}
// .method public getDateTimeFormat(IILjava/util/Locale;)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::util::Calendar::getDateTimeFormat(int dateStyle,int timeStyle,std::shared_ptr<java::util::Locale> loc)
{
	
	//    .param p1, "dateStyle"    # I
	//    .param p2, "timeStyle"    # I
	//    .param p3, "loc"    # Ljava/util/Locale;
	return android::icu::util::Calendar::formatHelper(this, android::icu::util::ULocale::forLocale(loc), dateStyle, timeStyle);

}
// .method public getDayOfWeekType(I)I
int android::icu::util::Calendar::getDayOfWeekType(int dayOfWeek)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	
	//    .param p1, "dayOfWeek"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 8099    .end annotation
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	if ( dayOfWeek <  cVar1 )
		goto label_cond_8;
	if ( dayOfWeek <= 0x7 )
		goto label_cond_11;
label_cond_8:
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid day of week")));
	// throw
	throw cVar3;
	// 8125    .line 4444
label_cond_11:
	if ( this->weekendOnset != this->weekendCease )
		goto label_cond_23;
	if ( dayOfWeek == this->weekendOnset )
		goto label_cond_1c;
	return cVar2;
	// 8141    .line 4447
label_cond_1c:
	if ( this->weekendOnsetMillis )     
		goto label_cond_21;
label_goto_20:
	return cVar1;
label_cond_21:
	cVar1 = cVar0;
	goto label_goto_20;
	// 8155    .line 4449
label_cond_23:
	if ( this->weekendOnset >= this->weekendCease )
		goto label_cond_32;
	if ( dayOfWeek <  this->weekendOnset )
		goto label_cond_31;
	if ( dayOfWeek <= this->weekendCease )
		goto label_cond_3b;
label_cond_31:
	return cVar2;
	// 8176    .line 4454
label_cond_32:
	if ( dayOfWeek <= this->weekendCease )
		goto label_cond_3b;
	if ( dayOfWeek >= this->weekendOnset )
		goto label_cond_3b;
	return cVar2;
	// 8189    .line 4458
label_cond_3b:
	if ( dayOfWeek != this->weekendOnset )
		goto label_cond_46;
	if ( this->weekendOnsetMillis )     
		goto label_cond_44;
label_goto_43:
	return cVar1;
label_cond_44:
	cVar1 = cVar0;
	goto label_goto_43;
	// 8208    .line 4461
label_cond_46:
	if ( dayOfWeek != this->weekendCease )
		goto label_cond_54;
	if ( this->weekendCeaseMillis <  0x5265c00 )
		goto label_cond_52;
label_goto_51:
	return cVar1;
label_cond_52:
	cVar1 = 0x3;
	goto label_goto_51;
	// 8229    .line 4464
label_cond_54:
	return cVar1;

}
// .method protected getDefaultDayInMonth(II)I
int android::icu::util::Calendar::getDefaultDayInMonth(int extendedYear,int month)
{
	
	//    .param p1, "extendedYear"    # I
	//    .param p2, "month"    # I
	return 0x1;

}
// .method protected getDefaultMonthInYear(I)I
int android::icu::util::Calendar::getDefaultMonthInYear(int extendedYear)
{
	
	//    .param p1, "extendedYear"    # I
	return 0x0;

}
// .method public getDisplayName(Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Calendar::getDisplayName(std::shared_ptr<android::icu::util::ULocale> loc)
{
	
	//    .param p1, "loc"    # Landroid/icu/util/ULocale;
	return this->getClass()->getName();

}
// .method public getDisplayName(Ljava/util/Locale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Calendar::getDisplayName(std::shared_ptr<java::util::Locale> loc)
{
	
	//    .param p1, "loc"    # Ljava/util/Locale;
	return this->getClass()->getName();

}
// .method public final getFieldCount()I
int android::icu::util::Calendar::getFieldCount()
{
	
	return this->fields->size();

}
// .method protected getFieldResolutionTable()[[[I
int android::icu::util::Calendar::getFieldResolutionTable()
{
	
	return android::icu::util::Calendar::DATE_PRECEDENCE;

}
// .method public getFirstDayOfWeek()I
int android::icu::util::Calendar::getFirstDayOfWeek()
{
	
	return this->firstDayOfWeek;

}
// .method public final getGreatestMinimum(I)I
int android::icu::util::Calendar::getGreatestMinimum(int field)
{
	
	//    .param p1, "field"    # I
	return this->getLimit(field, 0x1);

}
// .method protected final getGregorianDayOfMonth()I
int android::icu::util::Calendar::getGregorianDayOfMonth()
{
	
	return this->gregorianDayOfMonth;

}
// .method protected final getGregorianDayOfYear()I
int android::icu::util::Calendar::getGregorianDayOfYear()
{
	
	return this->gregorianDayOfYear;

}
// .method protected final getGregorianMonth()I
int android::icu::util::Calendar::getGregorianMonth()
{
	
	return this->gregorianMonth;

}
// .method protected final getGregorianYear()I
int android::icu::util::Calendar::getGregorianYear()
{
	
	return this->gregorianYear;

}
// .method public final getLeastMaximum(I)I
int android::icu::util::Calendar::getLeastMaximum(int field)
{
	
	//    .param p1, "field"    # I
	return this->getLimit(field, 0x2);

}
// .method protected getLimit(II)I
int android::icu::util::Calendar::getLimit(int field,int limitType)
{
	
	int cVar0;
	int minDaysInFirst;
	int daysInMonth;
	
	//    .param p1, "field"    # I
	//    .param p2, "limitType"    # I
	cVar0 = 0x1;
	// switch
	{
	auto item = ( field );
	if (item == 4) goto label_pswitch_10;
	if (item == 5) goto label_pswitch_4;
	if (item == 6) goto label_pswitch_4;
	if (item == 7) goto label_pswitch_9;
	if (item == 8) goto label_pswitch_4;
	if (item == 9) goto label_pswitch_9;
	if (item == 10) goto label_pswitch_9;
	if (item == 11) goto label_pswitch_9;
	if (item == 12) goto label_pswitch_9;
	if (item == 13) goto label_pswitch_9;
	if (item == 14) goto label_pswitch_9;
	if (item == 15) goto label_pswitch_9;
	if (item == 16) goto label_pswitch_9;
	if (item == 17) goto label_pswitch_4;
	if (item == 18) goto label_pswitch_9;
	if (item == 19) goto label_pswitch_4;
	if (item == 20) goto label_pswitch_9;
	if (item == 21) goto label_pswitch_9;
	if (item == 22) goto label_pswitch_9;
	}
label_pswitch_4:
	return this->handleGetLimit(field, limitType);
	// 8412    .line 4310
label_pswitch_9:
	return android::icu::util::Calendar::LIMITS[field][limitType];
	// 8422    .line 4315
label_pswitch_10:
	if ( limitType )     
		goto label_cond_1c;
	if ( this->getMinimalDaysInFirstWeek() != cVar0 )
		goto label_cond_1a;
	//    .local v1, "limit":I
label_goto_19:
	return limit;
	// 8440    .line 4316
	// 8441    .end local v1    # "limit":I
label_cond_1a:
	//    .restart local v1    # "limit":I
	goto label_goto_19;
	// 8448    .line 4317
	// 8449    .end local v1    # "limit":I
label_cond_1c:
	if ( limitType != cVar0 )
		goto label_cond_20;
	//    .restart local v1    # "limit":I
	goto label_goto_19;
	// 8459    .line 4320
	// 8460    .end local v1    # "limit":I
label_cond_20:
	minDaysInFirst = this->getMinimalDaysInFirstWeek();
	//    .local v2, "minDaysInFirst":I
	daysInMonth = this->handleGetLimit(0x5, limitType);
	//    .local v0, "daysInMonth":I
	if ( limitType != 0x2 )
		goto label_cond_32;
	//    .restart local v1    # "limit":I
	goto label_goto_19;
	// 8490    .line 4325
	// 8491    .end local v1    # "limit":I
label_cond_32:
	//    .restart local v1    # "limit":I
	goto label_goto_19;
	// 8504    .line 4296
	// 8505    :pswitch_data_3a
	// 8506    .packed-switch 0x4
	// 8507        :pswitch_10
	// 8508        :pswitch_4
	// 8509        :pswitch_4
	// 8510        :pswitch_9
	// 8511        :pswitch_4
	// 8512        :pswitch_9
	// 8513        :pswitch_9
	// 8514        :pswitch_9
	// 8515        :pswitch_9
	// 8516        :pswitch_9
	// 8517        :pswitch_9
	// 8518        :pswitch_9
	// 8519        :pswitch_9
	// 8520        :pswitch_4
	// 8521        :pswitch_9
	// 8522        :pswitch_4
	// 8523        :pswitch_9
	// 8524        :pswitch_9
	// 8525        :pswitch_9
	// 8526    .end packed-switch

}
// .method public final getLocale(Landroid/icu/util/ULocale$Type;)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::util::Calendar::getLocale(std::shared_ptr<android::icu::util::ULocale_S_Type> type)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	
	//    .param p1, "type"    # Landroid/icu/util/ULocale$Type;
	if ( type != android::icu::util::ULocale::ACTUAL_LOCALE )
		goto label_cond_7;
	cVar0 = this->actualLocale;
label_goto_6:
	return cVar0;
	// 8546    .line 6224
label_cond_7:
	cVar0 = this->validLocale;
	goto label_goto_6;

}
// .method public final getMaximum(I)I
int android::icu::util::Calendar::getMaximum(int field)
{
	
	//    .param p1, "field"    # I
	return this->getLimit(field, 0x3);

}
// .method public getMinimalDaysInFirstWeek()I
int android::icu::util::Calendar::getMinimalDaysInFirstWeek()
{
	
	return this->minimalDaysInFirstWeek;

}
// .method public final getMinimum(I)I
int android::icu::util::Calendar::getMinimum(int field)
{
	
	//    .param p1, "field"    # I
	return this->getLimit(field, 0x0);

}
// .method public final getRelatedYear()I
int android::icu::util::Calendar::getRelatedYear()
{
	
	int year;
	std::shared_ptr<java::lang::Object> cVar0;
	int cVar1;
	std::shared_ptr<java::lang::String> testType;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 8596    .end annotation
	year = this->get(0x13);
	//    .local v3, "year":I
	//    .local v1, "type":Landroid/icu/util/Calendar$CalType;
	//    .local v2, "typeString":Ljava/lang/String;
	cVar0 = android::icu::util::Calendar_S_CalType::values({const[class].FS-Param});
	cVar1 = 0x0;
label_goto_12:
	if ( cVar1 >= cVar0->size() )
		goto label_cond_1f;
	testType = cVar0[cVar1];
	//    .local v0, "testType":Landroid/icu/util/Calendar$CalType;
	if ( !(this->getType()->equals(testType->id)) )  
		goto label_cond_2d;
	//    .end local v0    # "testType":Landroid/icu/util/Calendar$CalType;
label_cond_1f:
	// switch
	{
	auto item = ( android::icu::util::Calendar::-getandroid-icu-util-Calendar$CalTypeSwitchesValues({const[class].FS-Param})[android::icu::util::Calendar_S_CalType::GREGORIAN->ordinal()] );
	if (item == 2) goto label_pswitch_36;
	if (item == 3) goto label_pswitch_3c;
	if (item == 4) goto label_pswitch_45;
	if (item == 5) goto label_pswitch_3f;
	if (item == 6) goto label_pswitch_42;
	if (item == 7) goto label_pswitch_2c;
	if (item == 8) goto label_pswitch_33;
	if (item == 9) goto label_pswitch_39;
	if (item == 10) goto label_pswitch_48;
	if (item == 11) goto label_pswitch_48;
	if (item == 12) goto label_pswitch_48;
	if (item == 13) goto label_pswitch_48;
	if (item == 14) goto label_pswitch_48;
	if (item == 15) goto label_pswitch_2c;
	if (item == 16) goto label_pswitch_2c;
	if (item == 17) goto label_pswitch_30;
	}
label_goto_2c:
label_pswitch_2c:
	return year;
	// 8664    .line 2104
	// 8665    .restart local v0    # "testType":Landroid/icu/util/Calendar$CalType;
label_cond_2d:
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_12;
	// 8671    .line 2112
	// 8672    .end local v0    # "testType":Landroid/icu/util/Calendar$CalType;
label_pswitch_30:
	year = ( year + 0x26e);
	goto label_goto_2c;
	// 8678    .line 2114
label_pswitch_33:
	year = ( year + -0xeb0);
	goto label_goto_2c;
	// 8684    .line 2116
label_pswitch_36:
	year = ( year + -0xa4d);
	goto label_goto_2c;
	// 8690    .line 2118
label_pswitch_39:
	year = ( year + 0x4f);
	goto label_goto_2c;
	// 8696    .line 2120
label_pswitch_3c:
	year = ( year + 0x11c);
	goto label_goto_2c;
	// 8702    .line 2122
label_pswitch_3f:
	year = ( year + 0x8);
	goto label_goto_2c;
	// 8708    .line 2124
label_pswitch_42:
	year = ( year + -0x1574);
	goto label_goto_2c;
	// 8714    .line 2126
label_pswitch_45:
	year = ( year + -0x91d);
	goto label_goto_2c;
	// 8720    .line 2132
label_pswitch_48:
	year = android::icu::util::Calendar::gregoYearFromIslamicStart(year);
	goto label_goto_2c;
	// 8728    .line 2110
	// 8729    nop
	// 8731    :pswitch_data_4e
	// 8732    .packed-switch 0x2
	// 8733        :pswitch_36
	// 8734        :pswitch_3c
	// 8735        :pswitch_45
	// 8736        :pswitch_3f
	// 8737        :pswitch_42
	// 8738        :pswitch_2c
	// 8739        :pswitch_33
	// 8740        :pswitch_39
	// 8741        :pswitch_48
	// 8742        :pswitch_48
	// 8743        :pswitch_48
	// 8744        :pswitch_48
	// 8745        :pswitch_48
	// 8746        :pswitch_2c
	// 8747        :pswitch_2c
	// 8748        :pswitch_30
	// 8749    .end packed-switch

}
// .method public getRepeatedWallTimeOption()I
int android::icu::util::Calendar::getRepeatedWallTimeOption()
{
	
	return this->repeatedWallTime;

}
// .method public getSkippedWallTimeOption()I
int android::icu::util::Calendar::getSkippedWallTimeOption()
{
	
	return this->skippedWallTime;

}
// .method protected final getStamp(I)I
int android::icu::util::Calendar::getStamp(int field)
{
	
	//    .param p1, "field"    # I
	return this->stamp[field];

}
// .method public final getTime()Ljava/util/Date;
std::shared_ptr<java::util::Date> android::icu::util::Calendar::getTime()
{
	
	std::shared_ptr<java::util::Date> cVar0;
	
	cVar0 = std::make_shared<java::util::Date>(this->getTimeInMillis());
	return cVar0;

}
// .method public getTimeInMillis()J
long long android::icu::util::Calendar::getTimeInMillis()
{
	
	if ( this->isTimeSet )     
		goto label_cond_7;
	this->updateTime();
label_cond_7:
	return this->time;

}
// .method public getTimeZone()Landroid/icu/util/TimeZone;
std::shared_ptr<android::icu::util::TimeZone> android::icu::util::Calendar::getTimeZone()
{
	
	return this->zone;

}
// .method public getType()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Calendar::getType()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("unknown"));

}
// .method public getWeekData()Landroid/icu/util/Calendar$WeekData;
std::shared_ptr<android::icu::util::Calendar_S_WeekData> android::icu::util::Calendar::getWeekData()
{
	
	std::shared_ptr<android::icu::util::Calendar_S_WeekData> cVar0;
	
	cVar0 = std::make_shared<android::icu::util::Calendar_S_WeekData>(this->firstDayOfWeek, this->minimalDaysInFirstWeek, this->weekendOnset, this->weekendOnsetMillis, this->weekendCease, this->weekendCeaseMillis);
	return cVar0;

}
// .method public getWeekendTransition(I)I
int android::icu::util::Calendar::getWeekendTransition(int dayOfWeek)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "dayOfWeek"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 8867    .end annotation
	if ( dayOfWeek != this->weekendOnset )
		goto label_cond_7;
	return this->weekendOnsetMillis;
	// 8880    .line 4489
label_cond_7:
	if ( dayOfWeek != this->weekendCease )
		goto label_cond_e;
	return this->weekendCeaseMillis;
	// 8891    .line 4492
label_cond_e:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Not weekend transition day")));
	// throw
	throw cVar0;

}
// .method protected handleComputeFields(I)V
void android::icu::util::Calendar::handleComputeFields(int julianDay)
{
	
	int cVar0;
	int eyear;
	
	//    .param p1, "julianDay"    # I
	cVar0 = 0x1;
	this->internalSet(0x2, this->getGregorianMonth());
	this->internalSet(0x5, this->getGregorianDayOfMonth());
	this->internalSet(0x6, this->getGregorianDayOfYear());
	eyear = this->getGregorianYear();
	//    .local v1, "eyear":I
	this->internalSet(0x13, eyear);
	//    .local v0, "era":I
	if ( eyear >= cVar0 )
		goto label_cond_28;
label_cond_28:
	this->internalSet(0x0, 0x1);
	this->internalSet(cVar0, eyear);
	return;

}
// .method protected handleComputeJulianDay(I)I
int android::icu::util::Calendar::handleComputeJulianDay(int bestField)
{
	
	bool useMonth;
	int year;
	int month;
	int julianDay;
	int firstDOW;
	int first;
	int dowLocal;
	int date;
	int dim;
	
	//    .param p1, "bestField"    # I
	if ( bestField == 0x5 )
		goto label_cond_6;
	if ( bestField != 0x4 )
		goto label_cond_3d;
label_cond_6:
	useMonth = 0x1;
	//    .local v9, "useMonth":Z
label_goto_7:
	if ( bestField != 0x3 )
		goto label_cond_45;
	year = this->internalGet(0x11, this->handleGetExtendedYear());
	//    .local v10, "year":I
label_goto_14:
	this->internalSet(0x13, year);
	if ( !(useMonth) )  
		goto label_cond_4a;
	month = this->internalGet(0x2, this->getDefaultMonthInYear(year));
	//    .local v7, "month":I
label_goto_24:
	julianDay = this->handleComputeMonthStart(year, month, useMonth);
	//    .local v5, "julianDay":I
	if ( bestField != 0x5 )
		goto label_cond_52;
	if ( !(this->isSet(0x5)) )  
		goto label_cond_4c;
	return (this->internalGet(0x5, this->getDefaultDayInMonth(year, month)) +  julianDay);
	// 9067    .line 5708
	// 9068    .end local v5    # "julianDay":I
	// 9069    .end local v7    # "month":I
	// 9070    .end local v9    # "useMonth":Z
	// 9071    .end local v10    # "year":I
label_cond_3d:
	if ( bestField != 0x8 )
		goto label_cond_43;
	useMonth = 0x1;
	//    .restart local v9    # "useMonth":Z
	goto label_goto_7;
	// 9082    .end local v9    # "useMonth":Z
label_cond_43:
	useMonth = 0x0;
	//    .restart local v9    # "useMonth":Z
	goto label_goto_7;
	// 9089    .line 5719
label_cond_45:
	year = this->handleGetExtendedYear();
	//    .restart local v10    # "year":I
	goto label_goto_14;
	// 9098    .line 5724
label_cond_4a:
	//    .restart local v7    # "month":I
	goto label_goto_24;
	// 9105    .line 5734
	// 9106    .restart local v5    # "julianDay":I
label_cond_4c:
	return (this->getDefaultDayInMonth(year, month) +  julianDay);
	// 9116    .line 5738
label_cond_52:
	if ( bestField != 0x6 )
		goto label_cond_5c;
	return (this->internalGet(0x6) +  julianDay);
	// 9133    .line 5742
label_cond_5c:
	firstDOW = this->getFirstDayOfWeek();
	//    .local v4, "firstDOW":I
	first = (android::icu::util::Calendar::julianDayToDayOfWeek(( julianDay + 0x1)) - firstDOW);
	//    .local v3, "first":I
	if ( first >= 0 )
		goto label_cond_6c;
	first = ( first + 0x7);
label_cond_6c:
	dowLocal = 0x0;
	//    .local v2, "dowLocal":I
	// switch
	{
	auto item = ( this->resolveFields(android::icu::util::Calendar::DOW_PRECEDENCE) );
	if (item == 0x7) goto label_sswitch_9a;
	if (item == 0x12) goto label_sswitch_a2;
	}
label_goto_76:
	dowLocal = ( dowLocal % 0x7);
	if ( dowLocal >= 0 )
		goto label_cond_7c;
	dowLocal = ( dowLocal + 0x7);
label_cond_7c:
	date = (( first - 0x1) + dowLocal);
	//    .local v0, "date":I
	if ( bestField != 0x8 )
		goto label_cond_c0;
	if ( date >= 0x1 )
		goto label_cond_89;
	date = ( date + 0x7);
label_cond_89:
	dim = this->internalGet(0x8, 0x1);
	//    .local v1, "dim":I
	if ( dim < 0 ) 
		goto label_cond_ab;
	date = (date +  ( ( dim + -0x1) * 0x7));
	//    .end local v1    # "dim":I
label_goto_97:
	return (julianDay + date);
	// 9228    .line 5766
	// 9229    .end local v0    # "date":I
label_sswitch_9a:
	dowLocal = (this->internalGet(0x7) - firstDOW);
	goto label_goto_76;
	// 9242    .line 5769
label_sswitch_a2:
	dowLocal = ( this->internalGet(0x12) + -0x1);
	goto label_goto_76;
	// 9255    .line 5802
	// 9256    .restart local v0    # "date":I
	// 9257    .restart local v1    # "dim":I
label_cond_ab:
	//    .local v6, "m":I
	//    .local v8, "monthLength":I
	date = (date +  ( ( (( (this->handleGetMonthLength(year, this->internalGet(0x2, 0x0)) - date) / 0x7) +  dim) + 0x1) * 0x7));
	goto label_goto_97;
	// 9289    .line 5810
	// 9290    .end local v1    # "dim":I
	// 9291    .end local v6    # "m":I
	// 9292    .end local v8    # "monthLength":I
label_cond_c0:
	if ( ( first - 0x7) >= this->getMinimalDaysInFirstWeek() )
		goto label_cond_ca;
	date = ( date + 0x7);
label_cond_ca:
	date = (date +  ( ( this->internalGet(bestField) + -0x1) * 0x7));
	goto label_goto_97;
	// 9319    .line 5764
	// 9320    :sswitch_data_d4
	// 9321    .sparse-switch
	// 9322        0x7 -> :sswitch_9a
	// 9323        0x12 -> :sswitch_a2
	// 9324    .end sparse-switch

}
// .method protected handleCreateFields()[I
int android::icu::util::Calendar::handleCreateFields()
{
	
	return std::make_shared<std::vector<int[]>>(0x17);

}
// .method protected handleGetDateFormat(Ljava/lang/String;Landroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::util::Calendar::handleGetDateFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	return this->handleGetDateFormat(pattern, 0x0, locale);

}
// .method protected handleGetDateFormat(Ljava/lang/String;Ljava/lang/String;Landroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::util::Calendar::handleGetDateFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::lang::String> override,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<android::icu::util::Calendar_S_FormatConfiguration> fmtConfig;
	std::shared_ptr<android::icu::text::DateFormatSymbols> cVar0;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "override"    # Ljava/lang/String;
	//    .param p3, "locale"    # Landroid/icu/util/ULocale;
	fmtConfig = std::make_shared<android::icu::util::Calendar_S_FormatConfiguration>(0x0);
	//    .local v0, "fmtConfig":Landroid/icu/util/Calendar$FormatConfiguration;
	android::icu::util::Calendar_S_FormatConfiguration::-set4(fmtConfig, pattern);
	android::icu::util::Calendar_S_FormatConfiguration::-set3(fmtConfig, override);
	cVar0 = std::make_shared<android::icu::text::DateFormatSymbols>(this, locale);
	android::icu::util::Calendar_S_FormatConfiguration::-set1(fmtConfig, cVar0);
	android::icu::util::Calendar_S_FormatConfiguration::-set2(fmtConfig, locale);
	android::icu::util::Calendar_S_FormatConfiguration::-set0(fmtConfig, this);
	return android::icu::text::SimpleDateFormat::getInstance(fmtConfig);

}
// .method protected handleGetDateFormat(Ljava/lang/String;Ljava/lang/String;Ljava/util/Locale;)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::util::Calendar::handleGetDateFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::lang::String> override,std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "override"    # Ljava/lang/String;
	//    .param p3, "locale"    # Ljava/util/Locale;
	return this->handleGetDateFormat(pattern, override, android::icu::util::ULocale::forLocale(locale));

}
// .method protected handleGetDateFormat(Ljava/lang/String;Ljava/util/Locale;)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::util::Calendar::handleGetDateFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "locale"    # Ljava/util/Locale;
	return this->handleGetDateFormat(pattern, 0x0, android::icu::util::ULocale::forLocale(locale));

}
// .method protected handleGetMonthLength(II)I
int android::icu::util::Calendar::handleGetMonthLength(int extendedYear,int month)
{
	
	bool cVar0;
	
	//    .param p1, "extendedYear"    # I
	//    .param p2, "month"    # I
	cVar0 = 0x1;
	return (this->handleComputeMonthStart(extendedYear, ( month + 0x1), cVar0) -  this->handleComputeMonthStart(extendedYear, month, cVar0));

}
// .method protected handleGetYearLength(I)I
int android::icu::util::Calendar::handleGetYearLength(int eyear)
{
	
	int cVar0;
	
	//    .param p1, "eyear"    # I
	cVar0 = 0x0;
	return (this->handleComputeMonthStart(( eyear + 0x1), cVar0, cVar0) -  this->handleComputeMonthStart(eyear, cVar0, cVar0));

}
// .method public hashCode()I
int android::icu::util::Calendar::hashCode()
{
	
	int cVar0;
	
	if ( !(this->lenient) )  
		goto label_cond_23;
	cVar0 = 0x1;
label_goto_5:
	return (((((cVar0 |  ( this->firstDayOfWeek << 0x1)) |  ( this->minimalDaysInFirstWeek << 0x4)) |  ( this->repeatedWallTime << 0x7)) |  ( this->skippedWallTime << 0x9)) |  ( this->zone->hashCode() << 0xb));
label_cond_23:
	cVar0 = 0x0;
	goto label_goto_5;

}
// .method public haveDefaultCentury()Z
bool android::icu::util::Calendar::haveDefaultCentury()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 9563    .end annotation
	return 0x1;

}
// .method protected final internalGet(I)I
int android::icu::util::Calendar::internalGet(int field)
{
	
	//    .param p1, "field"    # I
	return this->fields[field];

}
// .method protected final internalGet(II)I
int android::icu::util::Calendar::internalGet(int field,int cVar0)
{
	
	int cVar0;
	
	//    .param p1, "field"    # I
	//    .param p2, "defaultValue"    # I
	if ( this->stamp[field] <= 0 )
		goto label_cond_a;
	cVar0 = this->fields[field];
	//    .end local p2    # "defaultValue":I
label_cond_a:
	return cVar0;

}
// .method protected final internalGetTimeInMillis()J
long long android::icu::util::Calendar::internalGetTimeInMillis()
{
	
	return this->time;

}
// .method protected final internalSet(II)V
void android::icu::util::Calendar::internalSet(int field,int value)
{
	
	int cVar0;
	std::shared_ptr<java::lang::IllegalStateException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "field"    # I
	//    .param p2, "value"    # I
	cVar0 = 0x1;
	if ( ((cVar0 << field) &  this->internalSetMask) )     
		goto label_cond_26;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::IllegalStateException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Subclass cannot set ")))->append(this->fieldName(field))->toString());
	// throw
	throw cVar1;
	// 9665    .line 5970
label_cond_26:
	this->fields[field] = value;
	this->stamp[field] = cVar0;
	return;

}
// .method public isEquivalentTo(Landroid/icu/util/Calendar;)Z
bool android::icu::util::Calendar::isEquivalentTo(std::shared_ptr<android::icu::util::Calendar> other)
{
	
	bool cVar1;
	
	//    .param p1, "other"    # Landroid/icu/util/Calendar;
	cVar1 = 0x0;
	if ( this->getClass() != other->getClass() )
		goto label_cond_4c;
	if ( this->isLenient() != other->isLenient() )
		goto label_cond_4c;
	if ( this->getFirstDayOfWeek() != other->getFirstDayOfWeek() )
		goto label_cond_4c;
	if ( this->getMinimalDaysInFirstWeek() != other->getMinimalDaysInFirstWeek() )
		goto label_cond_4c;
	if ( !(this->getTimeZone()->equals(other->getTimeZone())) )  
		goto label_cond_4c;
	if ( this->getRepeatedWallTimeOption() != other->getRepeatedWallTimeOption() )
		goto label_cond_4c;
	if ( this->getSkippedWallTimeOption() != other->getSkippedWallTimeOption() )
		goto label_cond_4c;
	cVar1 = 0x1;
label_cond_4c:
	return cVar1;

}
// .method public isLenient()Z
bool android::icu::util::Calendar::isLenient()
{
	
	return this->lenient;

}
// .method public final isSet(I)Z
bool android::icu::util::Calendar::isSet(int field)
{
	
	bool cVar0;
	
	//    .param p1, "field"    # I
	cVar0 = 0x1;
	if ( this->areFieldsVirtuallySet )     
		goto label_cond_c;
	if ( !(this->stamp[field]) )  
		goto label_cond_d;
label_cond_c:
label_goto_c:
	return cVar0;
label_cond_d:
	cVar0 = 0x0;
	goto label_goto_c;

}
// .method public isWeekend()Z
bool android::icu::util::Calendar::isWeekend()
{
	
	bool cVar0;
	bool cVar1;
	int dow;
	int dowt;
	int millisInDay;
	int transition;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	dow = this->get(0x7);
	//    .local v0, "dow":I
	dowt = this->getDayOfWeekType(dow);
	//    .local v1, "dowt":I
	// switch
	{
	auto item = ( dowt );
	if (item == 0) goto label_pswitch_3a;
	if (item == 1) goto label_pswitch_3b;
	}
	millisInDay = (this->internalGet(0xe) + ( (this->internalGet(0xd) +  ( (this->internalGet(0xc) +  ( this->internalGet(0xb) * 0x3c)) * 0x3c)) * 0x3e8));
	//    .local v2, "millisInDay":I
	transition = this->getWeekendTransition(dow);
	//    .local v3, "transition":I
	if ( dowt != 0x2 )
		goto label_cond_3e;
	if ( millisInDay <  transition )
		goto label_cond_3c;
label_cond_39:
label_goto_39:
	return cVar0;
	// 9900    .line 4521
	// 9901    .end local v2    # "millisInDay":I
	// 9902    .end local v3    # "transition":I
label_pswitch_3a:
	return cVar1;
	// 9906    .line 4523
label_pswitch_3b:
	return cVar0;
	// 9910    .restart local v2    # "millisInDay":I
	// 9911    .restart local v3    # "transition":I
label_cond_3c:
	cVar0 = cVar1;
	goto label_goto_39;
	// 9918    .line 4535
label_cond_3e:
	if ( millisInDay <  transition )
		goto label_cond_39;
	cVar0 = cVar1;
	goto label_goto_39;
	// 9926    .line 4519
	// 9927    :pswitch_data_42
	// 9928    .packed-switch 0x0
	// 9929        :pswitch_3a
	// 9930        :pswitch_3b
	// 9931    .end packed-switch

}
// .method public isWeekend(Ljava/util/Date;)Z
bool android::icu::util::Calendar::isWeekend(std::shared_ptr<java::util::Date> date)
{
	
	//    .param p1, "date"    # Ljava/util/Date;
	this->setTime(date);
	return this->isWeekend();

}
// .method protected newerField(II)I
int android::icu::util::Calendar::newerField(int defaultField,int alternateField)
{
	
	//    .param p1, "defaultField"    # I
	//    .param p2, "alternateField"    # I
	if ( this->stamp[alternateField] <= this->stamp[defaultField] )
		goto label_cond_b;
	return alternateField;
	// 9970    .line 5197
label_cond_b:
	return defaultField;

}
// .method protected newestStamp(III)I
int android::icu::util::Calendar::newestStamp(int first,int last,int bestStampSoFar)
{
	
	int bestStamp;
	int i;
	
	//    .param p1, "first"    # I
	//    .param p2, "last"    # I
	//    .param p3, "bestStampSoFar"    # I
	bestStamp = bestStampSoFar;
	//    .local v0, "bestStamp":I
	i = first;
	//    .local v1, "i":I
label_goto_2:
	if ( i >  last )
		goto label_cond_11;
	if ( this->stamp[i] <= bestStamp )
		goto label_cond_e;
	bestStamp = this->stamp[i];
label_cond_e:
	i = ( i + 0x1);
	goto label_goto_2;
	// 10011    .line 5179
label_cond_11:
	return bestStamp;

}
// .method protected pinField(I)V
void android::icu::util::Calendar::pinField(int field)
{
	
	int max;
	int min;
	
	//    .param p1, "field"    # I
	max = this->getActualMaximum(field);
	//    .local v0, "max":I
	min = this->getActualMinimum(field);
	//    .local v1, "min":I
	if ( this->fields[field] <= max )
		goto label_cond_12;
	this->set(field, max);
label_cond_11:
label_goto_11:
	return;
	// 10048    .line 3781
label_cond_12:
	if ( this->fields[field] >= min )
		goto label_cond_11;
	this->set(field, min);
	goto label_goto_11;

}
// .method protected prepareGetActual(IZ)V
void android::icu::util::Calendar::prepareGetActual(int field,bool isMinimum)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	int dow;
	
	//    .param p1, "field"    # I
	//    .param p2, "isMinimum"    # Z
	cVar0 = 0x6;
	cVar1 = 0x3;
	cVar2 = 0x1;
	cVar3 = 0x7;
	cVar4 = 0x5;
	this->set(0x15, 0x0);
	// switch
	{
	auto item = ( field );
	if (item == 0x1) goto label_sswitch_16;
	if (item == 0x2) goto label_sswitch_26;
	if (item == 0x3) goto label_sswitch_39;
	if (item == 0x4) goto label_sswitch_39;
	if (item == 0x8) goto label_sswitch_2e;
	if (item == 0x11) goto label_sswitch_1e;
	if (item == 0x13) goto label_sswitch_16;
	}
label_goto_e:
	this->set(field, this->getGreatestMinimum(field));
	return;
	// 10099    .line 2515
label_sswitch_16:
	this->set(cVar0, this->getGreatestMinimum(cVar0));
	goto label_goto_e;
	// 10109    .line 2519
label_sswitch_1e:
	this->set(cVar1, this->getGreatestMinimum(cVar1));
	goto label_goto_e;
	// 10119    .line 2523
label_sswitch_26:
	this->set(cVar4, this->getGreatestMinimum(cVar4));
	goto label_goto_e;
	// 10129    .line 2529
label_sswitch_2e:
	this->set(cVar4, cVar2);
	this->set(cVar3, this->get(cVar3));
	goto label_goto_e;
	// 10142    .line 2540
label_sswitch_39:
	dow = this->firstDayOfWeek;
	//    .local v0, "dow":I
	if ( !(isMinimum) )  
		goto label_cond_45;
	dow = ( ( dow + 0x6) % 0x7);
	if ( dow >= cVar2 )
		goto label_cond_45;
label_cond_45:
	this->set(cVar3, dow);
	goto label_goto_e;
	// 10167    .line 2512
	// 10168    nop
	// 10170    :sswitch_data_4a
	// 10171    .sparse-switch
	// 10172        0x1 -> :sswitch_16
	// 10173        0x2 -> :sswitch_26
	// 10174        0x3 -> :sswitch_39
	// 10175        0x4 -> :sswitch_39
	// 10176        0x8 -> :sswitch_2e
	// 10177        0x11 -> :sswitch_1e
	// 10178        0x13 -> :sswitch_16
	// 10179    .end sparse-switch

}
// .method protected resolveFields([[[I)I
int android::icu::util::Calendar::resolveFields(std::shared_ptr<int[][][]> precedenceTable)
{
	
	int cVar0;
	int cVar1;
	int bestField;
	int g;
	auto group;
	int bestStamp;
	int l;
	auto line;
	int lineStamp;
	int i;
	int s;
	int tempBestField;
	
	//    .param p1, "precedenceTable"    # [[[I
	cVar0 = 0x20;
	cVar1 = 0x0;
	bestField = -0x1;
	//    .local v0, "bestField":I
	g = 0x0;
	//    .local v2, "g":I
label_goto_5:
	if ( g >= precedenceTable->size() )
		goto label_cond_50;
	if ( bestField >= 0 )
		goto label_cond_50;
	group = precedenceTable[g];
	//    .local v3, "group":[[I
	bestStamp = 0x0;
	//    .local v1, "bestStamp":I
	l = 0x0;
	//    .local v5, "l":I
label_goto_e:
	if ( l >= group->size() )
		goto label_cond_4d;
	line = group[l];
	//    .local v6, "line":[I
	lineStamp = 0x0;
	//    .local v7, "lineStamp":I
	if ( line[cVar1] <  cVar0 )
		goto label_cond_27;
	i = 0x1;
	//    .local v4, "i":I
label_goto_19:
	if ( i >= line->size() )
		goto label_cond_30;
	s = this->stamp[line[i]];
	//    .local v8, "s":I
	if ( s )     
		goto label_cond_29;
	//    .end local v8    # "s":I
label_cond_24:
label_goto_24:
	l = ( l + 0x1);
	goto label_goto_e;
	// 10263    .line 5138
	// 10264    .end local v4    # "i":I
label_cond_27:
	i = 0x0;
	//    .restart local v4    # "i":I
	goto label_goto_19;
	// 10271    .line 5144
	// 10272    .restart local v8    # "s":I
label_cond_29:
	lineStamp = java::lang::Math::max(lineStamp, s);
	i = ( i + 0x1);
	goto label_goto_19;
	// 10283    .line 5148
	// 10284    .end local v8    # "s":I
label_cond_30:
	if ( lineStamp <= bestStamp )
		goto label_cond_24;
	tempBestField = line[cVar1];
	//    .local v9, "tempBestField":I
	if ( tempBestField <  cVar0 )
		goto label_cond_4b;
	tempBestField = ( tempBestField & 0x1f);
	if ( tempBestField != 0x5 )
		goto label_cond_46;
	if ( this->stamp[0x4] >= this->stamp[tempBestField] )
		goto label_cond_47;
label_cond_46:
	bestField = tempBestField;
label_cond_47:
label_goto_47:
	if ( bestField != tempBestField )
		goto label_cond_24;
	bestStamp = lineStamp;
	goto label_goto_24;
	// 10329    .line 5157
label_cond_4b:
	bestField = tempBestField;
	goto label_goto_47;
	// 10335    .line 5130
	// 10336    .end local v4    # "i":I
	// 10337    .end local v6    # "line":[I
	// 10338    .end local v7    # "lineStamp":I
	// 10339    .end local v9    # "tempBestField":I
label_cond_4d:
	g = ( g + 0x1);
	goto label_goto_5;
	// 10345    .line 5166
	// 10346    .end local v1    # "bestStamp":I
	// 10347    .end local v3    # "group":[[I
	// 10348    .end local v5    # "l":I
label_cond_50:
	if ( bestField <  cVar0 )
		goto label_cond_54;
	bestField = ( bestField & 0x1f);
	//    .end local v0    # "bestField":I
label_cond_54:
	return bestField;

}
// .method public roll(II)V
void android::icu::util::Calendar::roll(int field,int cVar2)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	int min;
	int gap;
	int value;
	int era;
	std::shared_ptr<java::lang::String> calType;
	int cVar2;
	int newYear;
	int maxYear;
	int max;
	int mon;
	int dow;
	int fdy;
	int start;
	int yearLen;
	int day_of_year;
	int fdm;
	int monthLen;
	int day_of_month;
	long long min2;
	int yearLength;
	int cVar3;
	int leadDays;
	int preWeeks;
	long long gap2;
	int oldHour;
	int newHour;
	
	//    .param p1, "field"    # I
	//    .param p2, "amount"    # I
	if ( cVar2 )     
		goto label_cond_3;
	return;
	// 10371    .line 2738
label_cond_3:
	this->complete();
	// switch
	{
	auto item = ( field );
	if (item == 0) goto label_pswitch_2e;
	if (item == 1) goto label_pswitch_bc;
	if (item == 2) goto label_pswitch_87;
	if (item == 3) goto label_pswitch_204;
	if (item == 4) goto label_pswitch_17d;
	if (item == 5) goto label_pswitch_2e;
	if (item == 6) goto label_pswitch_294;
	if (item == 7) goto label_pswitch_316;
	if (item == 8) goto label_pswitch_38d;
	if (item == 9) goto label_pswitch_2e;
	if (item == 10) goto label_pswitch_54;
	if (item == 11) goto label_pswitch_54;
	if (item == 12) goto label_pswitch_2e;
	if (item == 13) goto label_pswitch_2e;
	if (item == 14) goto label_pswitch_2e;
	if (item == 15) goto label_pswitch_9;
	if (item == 16) goto label_pswitch_9;
	if (item == 17) goto label_pswitch_bc;
	if (item == 18) goto label_pswitch_316;
	if (item == 19) goto label_pswitch_15b;
	if (item == 20) goto label_pswitch_419;
	if (item == 21) goto label_pswitch_2e;
	}
label_pswitch_9:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Calendar.roll(")))->append(this->fieldName(field))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(") not supported")))->toString());
	// throw
	throw cVar0;
	// 10416    .line 2752
label_pswitch_2e:
	min = this->getActualMinimum(field);
	//    .local v23, "min":I
	//    .local v21, "max":I
	gap = ( (this->getActualMaximum(field) - min) + 0x1);
	//    .local v14, "gap":I
	//    .local v36, "value":I
	value = (((this->internalGet(field) + cVar2) - min) % gap);
	if ( value >= 0 )
		goto label_cond_48;
label_cond_48:
	this->set(field, (value + min));
	return;
	// 10470    .line 2778
	// 10471    .end local v14    # "gap":I
	// 10472    .end local v21    # "max":I
	// 10473    .end local v23    # "min":I
	// 10474    .end local v36    # "value":I
label_pswitch_54:
	//    .local v34, "start":J
	oldHour = this->internalGet(field);
	//    .local v30, "oldHour":I
	max = this->getMaximum(field);
	//    .restart local v21    # "max":I
	newHour = ((oldHour + cVar2) % ( max + 0x1));
	//    .local v28, "newHour":I
	if ( newHour >= 0 )
		goto label_cond_6c;
label_cond_6c:
	this->setTimeInMillis(((((long long)(newHour) - (long long)(oldHour)) * 0x36ee80) + this->getTimeInMillis()));
	return;
	// 10540    .line 2795
	// 10541    .end local v21    # "max":I
	// 10542    .end local v28    # "newHour":I
	// 10543    .end local v30    # "oldHour":I
	// 10544    .end local v34    # "start":J
label_pswitch_87:
	max = this->getActualMaximum(0x2);
	//    .restart local v21    # "max":I
	mon = ((this->internalGet(0x2) + cVar2) % ( max + 0x1));
	//    .local v26, "mon":I
	if ( mon >= 0 )
		goto label_cond_a7;
label_cond_a7:
	this->set(0x2, mon);
	this->pinField(0x5);
	return;
	// 10607    .line 2816
	// 10608    .end local v21    # "max":I
	// 10609    .end local v26    # "mon":I
label_pswitch_bc:
	0x0;
	//    .local v11, "era0WithYearsThatGoBackwards":Z
	era = this->get(0x0);
	//    .local v10, "era":I
	if ( era )     
		goto label_cond_f4;
	calType = this->getType();
	//    .local v4, "calType":Ljava/lang/String;
	if ( calType->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("gregorian"))) )     
		goto label_cond_ee;
	if ( calType->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("roc"))) )     
		goto label_cond_ee;
	if ( !(calType->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("coptic")))) )  
		goto label_cond_f4;
label_cond_ee:
	cVar2 = (0 - cVar2);
	//    .end local v4    # "calType":Ljava/lang/String;
label_cond_f4:
	newYear = (this->internalGet(field) + cVar2);
	//    .local v29, "newYear":I
	if ( era > 0 ) 
		goto label_cond_104;
	if ( newYear <  0x1 )
		goto label_cond_156;
label_cond_104:
	maxYear = this->getActualMaximum(field);
	//    .local v22, "maxYear":I
	if ( maxYear >= 0x8000 )
		goto label_cond_14b;
	if ( newYear >= 0x1 )
		goto label_cond_13e;
	newYear = (maxYear - ((0 - newYear) % maxYear));
	//    .end local v22    # "maxYear":I
label_cond_122:
label_goto_122:
	this->set(field, newYear);
	this->pinField(0x2);
	this->pinField(0x5);
	return;
	// 10767    .line 2832
	// 10768    .restart local v22    # "maxYear":I
label_cond_13e:
	if ( newYear <= maxYear )
		goto label_cond_122;
	newYear = ( (( newYear + -0x1) % maxYear) + 0x1);
	goto label_goto_122;
	// 10785    .line 2836
label_cond_14b:
	if ( newYear >= 0x1 )
		goto label_cond_122;
	newYear = 0x1;
	goto label_goto_122;
	// 10800    .line 2842
	// 10801    .end local v22    # "maxYear":I
label_cond_156:
	if ( !(0x1) )  
		goto label_cond_122;
	newYear = 0x1;
	goto label_goto_122;
	// 10810    .line 2852
	// 10811    .end local v10    # "era":I
	// 10812    .end local v11    # "era0WithYearsThatGoBackwards":Z
	// 10813    .end local v29    # "newYear":I
label_pswitch_15b:
	this->set(field, (this->internalGet(field) + cVar2));
	this->pinField(0x2);
	this->pinField(0x5);
	return;
	// 10850    .line 2888
label_pswitch_17d:
	dow = (this->internalGet(0x7) - this->getFirstDayOfWeek());
	//    .local v7, "dow":I
	if ( dow >= 0 )
		goto label_cond_191;
	dow = ( dow + 0x7);
label_cond_191:
	fdm = ( ( (dow - this->internalGet(0x5)) + 0x1) % 0x7);
	//    .local v12, "fdm":I
	if ( fdm >= 0 )
		goto label_cond_1a5;
	fdm = ( fdm + 0x7);
label_cond_1a5:
	if ( ( fdm - 0x7) >= this->getMinimalDaysInFirstWeek() )
		goto label_cond_201;
	start = ( fdm - 0x8);
	//    .local v33, "start":I
label_goto_1b3:
	monthLen = this->getActualMaximum(0x5);
	//    .local v27, "monthLen":I
	//    .local v15, "ldm":I
	//    .local v20, "limit":I
	gap = ((( monthLen + 0x7) - ( ((monthLen - this->internalGet(0x5)) + dow) % 0x7)) - start);
	//    .restart local v14    # "gap":I
	day_of_month = (((this->internalGet(0x5) + ( cVar2 * 0x7)) - start) % gap);
	//    .local v5, "day_of_month":I
	if ( day_of_month >= 0 )
		goto label_cond_1e8;
label_cond_1e8:
	day_of_month = (day_of_month + start);
	if ( day_of_month >= 0x1 )
		goto label_cond_1f1;
	day_of_month = 0x1;
label_cond_1f1:
	if ( day_of_month <= monthLen )
		goto label_cond_1f7;
label_cond_1f7:
	this->set(0x5, day_of_month);
	return;
	// 11016    .line 2904
	// 11017    .end local v5    # "day_of_month":I
	// 11018    .end local v14    # "gap":I
	// 11019    .end local v15    # "ldm":I
	// 11020    .end local v20    # "limit":I
	// 11021    .end local v27    # "monthLen":I
	// 11022    .end local v33    # "start":I
label_cond_201:
	start = ( fdm - 0x1);
	//    .restart local v33    # "start":I
	goto label_goto_1b3;
	// 11029    .line 2946
	// 11030    .end local v7    # "dow":I
	// 11031    .end local v12    # "fdm":I
	// 11032    .end local v33    # "start":I
label_pswitch_204:
	dow = (this->internalGet(0x7) - this->getFirstDayOfWeek());
	//    .restart local v7    # "dow":I
	if ( dow >= 0 )
		goto label_cond_218;
	dow = ( dow + 0x7);
label_cond_218:
	fdy = ( ( (dow - this->internalGet(0x6)) + 0x1) % 0x7);
	//    .local v13, "fdy":I
	if ( fdy >= 0 )
		goto label_cond_22c;
	fdy = ( fdy + 0x7);
label_cond_22c:
	if ( ( fdy - 0x7) >= this->getMinimalDaysInFirstWeek() )
		goto label_cond_291;
	start = ( fdy - 0x8);
	//    .restart local v33    # "start":I
label_goto_23a:
	yearLen = this->getActualMaximum(0x6);
	//    .local v37, "yearLen":I
	//    .local v18, "ldy":I
	//    .restart local v20    # "limit":I
	gap = ((( yearLen + 0x7) - ( ((yearLen - this->internalGet(0x6)) + dow) % 0x7)) - start);
	//    .restart local v14    # "gap":I
	day_of_year = (((this->internalGet(0x6) + ( cVar2 * 0x7)) - start) % gap);
	//    .local v6, "day_of_year":I
	if ( day_of_year >= 0 )
		goto label_cond_26f;
label_cond_26f:
	day_of_year = (day_of_year + start);
	if ( day_of_year >= 0x1 )
		goto label_cond_278;
	day_of_year = 0x1;
label_cond_278:
	if ( day_of_year <= yearLen )
		goto label_cond_27e;
label_cond_27e:
	this->set(0x6, day_of_year);
	this->clear(0x2);
	return;
	// 11207    .line 2962
	// 11208    .end local v6    # "day_of_year":I
	// 11209    .end local v14    # "gap":I
	// 11210    .end local v18    # "ldy":I
	// 11211    .end local v20    # "limit":I
	// 11212    .end local v33    # "start":I
	// 11213    .end local v37    # "yearLen":I
label_cond_291:
	start = ( fdy - 0x1);
	//    .restart local v33    # "start":I
	goto label_goto_23a;
	// 11220    .line 2999
	// 11221    .end local v7    # "dow":I
	// 11222    .end local v13    # "fdy":I
	// 11223    .end local v33    # "start":I
label_pswitch_294:
	//    .local v8, "delta":J
	min2 = (this->time - ((long long)(( this->internalGet(0x6) + -0x1)) * 0x5265c00));
	//    .local v24, "min2":J
	yearLength = this->getActualMaximum(0x6);
	//    .local v38, "yearLength":I
	this->time = (((this->time + ((long long)(cVar2) * 0x5265c00)) - min2) % ((long long)(yearLength) * 0x5265c00));
	if ( (this->time > 0x0) >= 0 )
		goto label_cond_306;
	this->time = (this->time + ((long long)(yearLength) * 0x5265c00));
label_cond_306:
	this->setTimeInMillis((this->time + min2));
	return;
	// 11365    .line 3013
	// 11366    .end local v8    # "delta":J
	// 11367    .end local v24    # "min2":J
	// 11368    .end local v38    # "yearLength":I
label_pswitch_316:
	//    .restart local v8    # "delta":J
	//    .local v19, "leadDays":I
	if ( field != 0x7 )
		goto label_cond_38a;
	cVar3 = this->getFirstDayOfWeek();
label_goto_330:
	leadDays = (this->internalGet(field) - cVar3);
	if ( leadDays >= 0 )
		goto label_cond_336;
label_cond_336:
	min2 = (this->time - ((long long)(leadDays) * 0x5265c00));
	//    .restart local v24    # "min2":J
	this->time = (((this->time + ((long long)(cVar2) * 0x5265c00)) - min2) % 0x240c8400);
	if ( (this->time > 0x0) >= 0 )
		goto label_cond_37a;
	this->time = (this->time + 0x240c8400);
label_cond_37a:
	this->setTimeInMillis((this->time + min2));
	return;
	// 11498    .line 3017
	// 11499    .end local v24    # "min2":J
label_cond_38a:
	cVar3 = 0x1;
	goto label_goto_330;
	// 11505    .line 3030
	// 11506    .end local v8    # "delta":J
	// 11507    .end local v19    # "leadDays":I
label_pswitch_38d:
	//    .restart local v8    # "delta":J
	preWeeks = ( ( this->internalGet(0x5) + -0x1) / 0x7);
	//    .local v32, "preWeeks":I
	//    .local v31, "postWeeks":I
	min2 = (this->time - ((long long)(preWeeks) * 0x240c8400));
	//    .restart local v24    # "min2":J
	gap2 = (0x240c8400 * (long long)(( (preWeeks + ( (this->getActualMaximum(0x5) - this->internalGet(0x5)) / 0x7)) + 0x1)));
	//    .local v16, "gap2":J
	this->time = (((this->time + ((long long)(cVar2) * 0x240c8400)) - min2) % gap2);
	if ( (this->time > 0x0) >= 0 )
		goto label_cond_409;
	this->time = (this->time + gap2);
label_cond_409:
	this->setTimeInMillis((this->time + min2));
	return;
	// 11665    .line 3048
	// 11666    .end local v8    # "delta":J
	// 11667    .end local v16    # "gap2":J
	// 11668    .end local v24    # "min2":J
	// 11669    .end local v31    # "postWeeks":I
	// 11670    .end local v32    # "preWeeks":I
label_pswitch_419:
	this->set(field, (this->internalGet(field) + cVar2));
	return;
	// 11689    .line 2740
	// 11690    nop
	// 11692    :pswitch_data_42a
	// 11693    .packed-switch 0x0
	// 11694        :pswitch_2e
	// 11695        :pswitch_bc
	// 11696        :pswitch_87
	// 11697        :pswitch_204
	// 11698        :pswitch_17d
	// 11699        :pswitch_2e
	// 11700        :pswitch_294
	// 11701        :pswitch_316
	// 11702        :pswitch_38d
	// 11703        :pswitch_2e
	// 11704        :pswitch_54
	// 11705        :pswitch_54
	// 11706        :pswitch_2e
	// 11707        :pswitch_2e
	// 11708        :pswitch_2e
	// 11709        :pswitch_9
	// 11710        :pswitch_9
	// 11711        :pswitch_bc
	// 11712        :pswitch_316
	// 11713        :pswitch_15b
	// 11714        :pswitch_419
	// 11715        :pswitch_2e
	// 11716    .end packed-switch

}
// .method public final roll(IZ)V
void android::icu::util::Calendar::roll(int field,bool up)
{
	
	int cVar0;
	
	//    .param p1, "field"    # I
	//    .param p2, "up"    # Z
	if ( !(up) )  
		goto label_cond_7;
	cVar0 = 0x1;
label_goto_3:
	this->roll(field, cVar0);
	return;
	// 11736    .line 2662
label_cond_7:
	cVar0 = -0x1;
	goto label_goto_3;

}
// .method public final set(II)V
void android::icu::util::Calendar::set(int field,int value)
{
	
	bool cVar0;
	int cVar1;
	
	//    .param p1, "field"    # I
	//    .param p2, "value"    # I
	cVar0 = 0x0;
	if ( !(this->areFieldsVirtuallySet) )  
		goto label_cond_8;
	this->computeFields();
label_cond_8:
	this->fields[field] = value;
	if ( this->nextStamp != android::icu::util::Calendar::STAMP_MAX )
		goto label_cond_15;
	this->recalculateStamp();
label_cond_15:
	cVar1 = this->nextStamp;
	this->nextStamp = ( cVar1 + 0x1);
	this->stamp[field] = cVar1;
	this->areFieldsVirtuallySet = cVar0;
	this->areFieldsSet = cVar0;
	this->isTimeSet = cVar0;
	return;

}
// .method public final set(III)V
void android::icu::util::Calendar::set(int year,int month,int date)
{
	
	//    .param p1, "year"    # I
	//    .param p2, "month"    # I
	//    .param p3, "date"    # I
	this->set(0x1, year);
	this->set(0x2, month);
	this->set(0x5, date);
	return;

}
// .method public final set(IIIII)V
void android::icu::util::Calendar::set(int year,int month,int date,int hour,int minute)
{
	
	//    .param p1, "year"    # I
	//    .param p2, "month"    # I
	//    .param p3, "date"    # I
	//    .param p4, "hour"    # I
	//    .param p5, "minute"    # I
	this->set(0x1, year);
	this->set(0x2, month);
	this->set(0x5, date);
	this->set(0xb, hour);
	this->set(0xc, minute);
	return;

}
// .method public final set(IIIIII)V
void android::icu::util::Calendar::set(int year,int month,int date,int hour,int minute,int second)
{
	
	//    .param p1, "year"    # I
	//    .param p2, "month"    # I
	//    .param p3, "date"    # I
	//    .param p4, "hour"    # I
	//    .param p5, "minute"    # I
	//    .param p6, "second"    # I
	this->set(0x1, year);
	this->set(0x2, month);
	this->set(0x5, date);
	this->set(0xb, hour);
	this->set(0xc, minute);
	this->set(0xd, second);
	return;

}
// .method public setFirstDayOfWeek(I)V
void android::icu::util::Calendar::setFirstDayOfWeek(int value)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "value"    # I
	if ( this->firstDayOfWeek == value )
		goto label_cond_18;
	if ( value <  0x1 )
		goto label_cond_a;
	if ( value <= 0x7 )
		goto label_cond_13;
label_cond_a:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid day of week")));
	// throw
	throw cVar0;
	// 11935    .line 4184
label_cond_13:
	this->firstDayOfWeek = value;
	this->areFieldsSet = 0x0;
label_cond_18:
	return;

}
// .method public setLenient(Z)V
void android::icu::util::Calendar::setLenient(bool lenient)
{
	
	//    .param p1, "lenient"    # Z
	this->lenient = lenient;
	return;

}
// .method final setLocale(Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;)V
void android::icu::util::Calendar::setLocale(std::shared_ptr<android::icu::util::ULocale> valid,std::shared_ptr<android::icu::util::ULocale> actual)
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
	// 12000    .line 6252
label_cond_13:
	this->validLocale = valid;
	this->actualLocale = actual;
	return;

}
// .method public setMinimalDaysInFirstWeek(I)V
void android::icu::util::Calendar::setMinimalDaysInFirstWeek(int cVar0)
{
	
	int cVar0;
	
	//    .param p1, "value"    # I
	if ( cVar0 >= 0x1 )
		goto label_cond_e;
	cVar0 = 0x1;
label_cond_4:
label_goto_4:
	if ( this->minimalDaysInFirstWeek == cVar0 )
		goto label_cond_d;
	this->minimalDaysInFirstWeek = cVar0;
	this->areFieldsSet = 0x0;
label_cond_d:
	return;
	// 12043    .line 4215
label_cond_e:
	if ( cVar0 <= 0x7 )
		goto label_cond_4;
	cVar0 = 0x7;
	goto label_goto_4;

}
// .method public final setRelatedYear(I)V
void android::icu::util::Calendar::setRelatedYear(int year)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	int cVar1;
	std::shared_ptr<java::lang::String> testType;
	int year;
	
	//    .param p1, "year"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 12059    .end annotation
	//    .local v1, "type":Landroid/icu/util/Calendar$CalType;
	//    .local v2, "typeString":Ljava/lang/String;
	cVar0 = android::icu::util::Calendar_S_CalType::values({const[class].FS-Param});
	cVar1 = 0x0;
label_goto_c:
	if ( cVar1 >= cVar0->size() )
		goto label_cond_19;
	testType = cVar0[cVar1];
	//    .local v0, "testType":Landroid/icu/util/Calendar$CalType;
	if ( !(this->getType()->equals(testType->id)) )  
		goto label_cond_2c;
	//    .end local v0    # "testType":Landroid/icu/util/Calendar$CalType;
label_cond_19:
	// switch
	{
	auto item = ( android::icu::util::Calendar::-getandroid-icu-util-Calendar$CalTypeSwitchesValues({const[class].FS-Param})[android::icu::util::Calendar_S_CalType::GREGORIAN->ordinal()] );
	if (item == 2) goto label_pswitch_35;
	if (item == 3) goto label_pswitch_3b;
	if (item == 4) goto label_pswitch_44;
	if (item == 5) goto label_pswitch_3e;
	if (item == 6) goto label_pswitch_41;
	if (item == 7) goto label_pswitch_26;
	if (item == 8) goto label_pswitch_32;
	if (item == 9) goto label_pswitch_38;
	if (item == 10) goto label_pswitch_47;
	if (item == 11) goto label_pswitch_47;
	if (item == 12) goto label_pswitch_47;
	if (item == 13) goto label_pswitch_47;
	if (item == 14) goto label_pswitch_47;
	if (item == 15) goto label_pswitch_26;
	if (item == 16) goto label_pswitch_26;
	if (item == 17) goto label_pswitch_2f;
	}
label_goto_26:
label_pswitch_26:
	this->set(0x13, year);
	return;
	// 12124    .line 2179
	// 12125    .restart local v0    # "testType":Landroid/icu/util/Calendar$CalType;
label_cond_2c:
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_c;
	// 12131    .line 2187
	// 12132    .end local v0    # "testType":Landroid/icu/util/Calendar$CalType;
label_pswitch_2f:
	year = ( year + -0x26e);
	goto label_goto_26;
	// 12138    .line 2189
label_pswitch_32:
	year = ( year + 0xeb0);
	goto label_goto_26;
	// 12144    .line 2191
label_pswitch_35:
	year = ( year + 0xa4d);
	goto label_goto_26;
	// 12150    .line 2193
label_pswitch_38:
	year = ( year + -0x4f);
	goto label_goto_26;
	// 12156    .line 2195
label_pswitch_3b:
	year = ( year + -0x11c);
	goto label_goto_26;
	// 12162    .line 2197
label_pswitch_3e:
	year = ( year + -0x8);
	goto label_goto_26;
	// 12168    .line 2199
label_pswitch_41:
	year = ( year + 0x1574);
	goto label_goto_26;
	// 12174    .line 2201
label_pswitch_44:
	year = ( year + 0x91d);
	goto label_goto_26;
	// 12180    .line 2207
label_pswitch_47:
	year = android::icu::util::Calendar::firstIslamicStartYearFromGrego(year);
	goto label_goto_26;
	// 12188    .line 2185
	// 12189    :pswitch_data_4c
	// 12190    .packed-switch 0x2
	// 12191        :pswitch_35
	// 12192        :pswitch_3b
	// 12193        :pswitch_44
	// 12194        :pswitch_3e
	// 12195        :pswitch_41
	// 12196        :pswitch_26
	// 12197        :pswitch_32
	// 12198        :pswitch_38
	// 12199        :pswitch_47
	// 12200        :pswitch_47
	// 12201        :pswitch_47
	// 12202        :pswitch_47
	// 12203        :pswitch_47
	// 12204        :pswitch_26
	// 12205        :pswitch_26
	// 12206        :pswitch_2f
	// 12207    .end packed-switch

}
// .method public setRepeatedWallTimeOption(I)V
void android::icu::util::Calendar::setRepeatedWallTimeOption(int option)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "option"    # I
	if ( !(option) )  
		goto label_cond_1f;
	if ( option == 0x1 )
		goto label_cond_1f;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal repeated wall time option - ")))->append(option)->toString());
	// throw
	throw cVar0;
	// 12247    .line 4107
label_cond_1f:
	this->repeatedWallTime = option;
	return;

}
// .method public setSkippedWallTimeOption(I)V
void android::icu::util::Calendar::setSkippedWallTimeOption(int option)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "option"    # I
	if ( !(option) )  
		goto label_cond_22;
	if ( option == 0x1 )
		goto label_cond_22;
	if ( option == 0x2 )
		goto label_cond_22;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal skipped wall time option - ")))->append(option)->toString());
	// throw
	throw cVar0;
	// 12296    .line 4154
label_cond_22:
	this->skippedWallTime = option;
	return;

}
// .method public final setTime(Ljava/util/Date;)V
void android::icu::util::Calendar::setTime(std::shared_ptr<java::util::Date> date)
{
	
	//    .param p1, "date"    # Ljava/util/Date;
	this->setTimeInMillis(date->getTime());
	return;

}
// .method public setTimeInMillis(J)V
void android::icu::util::Calendar::setTimeInMillis(long long cVar2)
{
	
	bool cVar0;
	bool cVar1;
	long long cVar2;
	int i;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	
	//    .param p1, "millis"    # J
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( (cVar2 > 0x28d47dbbf19b000L) <= 0 )
		goto label_cond_4b;
	if ( !(this->isLenient()) )  
		goto label_cond_31;
	cVar2 = 0x28d47dbbf19b000L;
label_cond_16:
label_goto_16:
	this->time = cVar2;
	this->areAllFieldsSet = cVar1;
	this->areFieldsSet = cVar1;
	this->areFieldsVirtuallySet = cVar0;
	this->isTimeSet = cVar0;
	i = 0x0;
	//    .local v0, "i":I
label_goto_21:
	if ( i >= this->fields->size() )
		goto label_cond_7a;
	this->stamp[i] = cVar1;
	this->fields[i] = cVar1;
	i = ( i + 0x1);
	goto label_goto_21;
	// 12386    .line 1937
	// 12387    .end local v0    # "i":I
label_cond_31:
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("millis value greater than upper bounds for a Calendar : ")))->append(cVar2)->toString());
	// throw
	throw cVar3;
	// 12413    .line 1939
label_cond_4b:
	if ( (cVar2 > -0x28ec76c40e65000L) >= 0 )
		goto label_cond_16;
	if ( !(this->isLenient()) )  
		goto label_cond_60;
	cVar2 = -0x28ec76c40e65000L;
	goto label_goto_16;
	// 12433    .line 1943
label_cond_60:
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	cVar6 = std::make_shared<java::lang::IllegalArgumentException>(cVar7->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("millis value less than lower bounds for a Calendar : ")))->append(cVar2)->toString());
	// throw
	throw cVar6;
	// 12459    .line 1954
	// 12460    .restart local v0    # "i":I
label_cond_7a:
	return;

}
// .method public setTimeZone(Landroid/icu/util/TimeZone;)V
void android::icu::util::Calendar::setTimeZone(std::shared_ptr<android::icu::util::TimeZone> value)
{
	
	//    .param p1, "value"    # Landroid/icu/util/TimeZone;
	this->zone = value;
	this->areFieldsSet = 0x0;
	return;

}
// .method public setWeekData(Landroid/icu/util/Calendar$WeekData;)Landroid/icu/util/Calendar;
std::shared_ptr<android::icu::util::Calendar> android::icu::util::Calendar::setWeekData(std::shared_ptr<android::icu::util::Calendar_S_WeekData> wdata)
{
	
	//    .param p1, "wdata"    # Landroid/icu/util/Calendar$WeekData;
	this->setFirstDayOfWeek(wdata->firstDayOfWeek);
	this->setMinimalDaysInFirstWeek(wdata->minimalDaysInFirstWeek);
	this->weekendOnset = wdata->weekendOnset;
	this->weekendOnsetMillis = wdata->weekendOnsetMillis;
	this->weekendCease = wdata->weekendCease;
	this->weekendCeaseMillis = wdata->weekendCeaseMillis;
	return this;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Calendar::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> buffer;
	std::shared_ptr<java::lang::String> cVar0;
	int i;
	std::shared_ptr<java::lang::String> cVar1;
	
	buffer = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "buffer":Ljava/lang/StringBuilder;
	buffer->append(this->getClass()->getName());
	buffer->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("[time=")));
	if ( !(this->isTimeSet) )  
		goto label_cond_a8;
	cVar0 = java::lang::String::valueOf(this->time);
label_goto_20:
	buffer->append(cVar0);
	buffer->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(",areFieldsSet=")));
	buffer->append(this->areFieldsSet);
	buffer->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(",areAllFieldsSet=")));
	buffer->append(this->areAllFieldsSet);
	buffer->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(",lenient=")));
	buffer->append(this->lenient);
	buffer->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(",zone=")));
	buffer->append(this->zone);
	buffer->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(",firstDayOfWeek=")));
	buffer->append(this->firstDayOfWeek);
	buffer->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(",minimalDaysInFirstWeek=")));
	buffer->append(this->minimalDaysInFirstWeek);
	buffer->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(",repeatedWallTime=")));
	buffer->append(this->repeatedWallTime);
	buffer->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(",skippedWallTime=")));
	buffer->append(this->skippedWallTime);
	i = 0x0;
	//    .local v1, "i":I
label_goto_7c:
	if ( i >= this->fields->size() )
		goto label_cond_b1;
	buffer->append(0x2c)->append(this->fieldName(i))->append(0x3d);
	if ( !(this->isSet(i)) )  
		goto label_cond_ad;
	cVar1 = java::lang::String::valueOf(this->fields[i]);
label_goto_a2:
	buffer->append(cVar1);
	i = ( i + 0x1);
	goto label_goto_7c;
	// 12694    .line 4580
	// 12695    .end local v1    # "i":I
label_cond_a8:
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("?"));
	goto label_goto_20;
	// 12701    .line 4599
	// 12702    .restart local v1    # "i":I
label_cond_ad:
	cVar1 = std::make_shared<java::lang::String>(std::make_shared<char[]>("?"));
	goto label_goto_a2;
	// 12708    .line 4601
label_cond_b1:
	buffer->append(0x5d);
	return buffer->toString();

}
// .method protected validateField(I)V
void android::icu::util::Calendar::validateField(int field)
{
	
	int cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	
	//    .param p1, "field"    # I
	cVar0 = 0x1;
	// switch
	{
	auto item = ( field );
	if (item == 5) goto label_pswitch_10;
	if (item == 6) goto label_pswitch_21;
	if (item == 7) goto label_pswitch_4;
	if (item == 8) goto label_pswitch_2d;
	}
label_pswitch_4:
	this->validateField(field, this->getMinimum(field), this->getMaximum(field));
label_goto_f:
	return;
	// 12748    .line 5226
label_pswitch_10:
	//    .local v0, "y":I
	this->validateField(field, cVar0, this->handleGetMonthLength(this->handleGetExtendedYear(), this->internalGet(0x2)));
	goto label_goto_f;
	// 12770    .line 5230
	// 12771    .end local v0    # "y":I
label_pswitch_21:
	//    .restart local v0    # "y":I
	this->validateField(field, cVar0, this->handleGetYearLength(this->handleGetExtendedYear()));
	goto label_goto_f;
	// 12787    .line 5234
	// 12788    .end local v0    # "y":I
label_pswitch_2d:
	if ( this->internalGet(field) )     
		goto label_cond_3c;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DAY_OF_WEEK_IN_MONTH cannot be zero")));
	// throw
	throw cVar1;
	// 12805    .line 5237
label_cond_3c:
	this->validateField(field, this->getMinimum(field), this->getMaximum(field));
	goto label_goto_f;
	// 12819    .line 5224
	// 12820    :pswitch_data_48
	// 12821    .packed-switch 0x5
	// 12822        :pswitch_10
	// 12823        :pswitch_21
	// 12824        :pswitch_4
	// 12825        :pswitch_2d
	// 12826    .end packed-switch

}
// .method protected final validateField(III)V
void android::icu::util::Calendar::validateField(int field,int min,int max)
{
	
	int value;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "field"    # I
	//    .param p2, "min"    # I
	//    .param p3, "max"    # I
	value = this->fields[field];
	//    .local v0, "value":I
	if ( value <  min )
		goto label_cond_8;
	if ( value <= max )
		goto label_cond_3f;
label_cond_8:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(this->fieldName(field))->append(0x3d)->append(value)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", valid range=")))->append(min)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("..")))->append(max)->toString());
	// throw
	throw cVar0;
	// 12907    .line 5259
label_cond_3f:
	return;

}
// .method protected validateFields()V
void android::icu::util::Calendar::validateFields()
{
	
	int field;
	
	field = 0x0;
	//    .local v0, "field":I
label_goto_1:
	if ( field >= this->fields->size() )
		goto label_cond_13;
	if ( this->stamp[field] <  0x2 )
		goto label_cond_10;
	this->validateField(field);
label_cond_10:
	field = ( field + 0x1);
	goto label_goto_1;
	// 12945    .line 5213
label_cond_13:
	return;

}
// .method protected final weekNumber(II)I
int android::icu::util::Calendar::weekNumber(int dayOfPeriod,int dayOfWeek)
{
	
	//    .param p1, "dayOfPeriod"    # I
	//    .param p2, "dayOfWeek"    # I
	return this->weekNumber(dayOfPeriod, dayOfPeriod, dayOfWeek);

}
// .method protected weekNumber(III)I
int android::icu::util::Calendar::weekNumber(int desiredDay,int dayOfPeriod,int dayOfWeek)
{
	
	int periodStartDayOfWeek;
	int weekNo;
	
	//    .param p1, "desiredDay"    # I
	//    .param p2, "dayOfPeriod"    # I
	//    .param p3, "dayOfWeek"    # I
	periodStartDayOfWeek = ( ( ((dayOfWeek - this->getFirstDayOfWeek()) -  dayOfPeriod) + 0x1) % 0x7);
	//    .local v0, "periodStartDayOfWeek":I
	if ( periodStartDayOfWeek >= 0 )
		goto label_cond_f;
	periodStartDayOfWeek = ( periodStartDayOfWeek + 0x7);
label_cond_f:
	weekNo = ( ( (desiredDay + periodStartDayOfWeek) + -0x1) / 0x7);
	//    .local v1, "weekNo":I
	if ( ( periodStartDayOfWeek - 0x7) <  this->getMinimalDaysInFirstWeek() )
		goto label_cond_1f;
label_cond_1f:
	return weekNo;

}


