// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DateFormat.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.RelativeDateFormat.h"
#include "android.icu.text.DateFormat_S_BooleanAttribute.h"
#include "android.icu.text.DateFormat.h"
#include "android.icu.text.DateTimePatternGenerator.h"
#include "android.icu.text.DisplayContext_S_Type.h"
#include "android.icu.text.DisplayContext.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.text.SimpleDateFormat.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale_S_Category.h"
#include "android.icu.util.ULocale_S_Type.h"
#include "android.icu.util.ULocale.h"
#include "java.io.ObjectInputStream.h"
#include "java.lang.Class.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.text.FieldPosition.h"
#include "java.text.ParseException.h"
#include "java.text.ParsePosition.h"
#include "java.util.Arrays.h"
#include "java.util.Date.h"
#include "java.util.EnumSet.h"
#include "java.util.List.h"
#include "java.util.Locale.h"
#include "java.util.MissingResourceException.h"

static android::icu::text::DateFormat::ABBR_GENERIC_TZ = std::make_shared<java::lang::String>("v");
static android::icu::text::DateFormat::ABBR_MONTH = std::make_shared<java::lang::String>("MMM");
static android::icu::text::DateFormat::ABBR_MONTH_DAY = std::make_shared<java::lang::String>("MMMd");
static android::icu::text::DateFormat::ABBR_MONTH_WEEKDAY_DAY = std::make_shared<java::lang::String>("MMMEd");
static android::icu::text::DateFormat::ABBR_QUARTER = std::make_shared<java::lang::String>("QQQ");
static android::icu::text::DateFormat::ABBR_SPECIFIC_TZ = std::make_shared<java::lang::String>("z");
static android::icu::text::DateFormat::ABBR_STANDALONE_MONTH = std::make_shared<java::lang::String>("LLL");
static android::icu::text::DateFormat::ABBR_UTC_TZ = std::make_shared<java::lang::String>("ZZZZ");
static android::icu::text::DateFormat::ABBR_WEEKDAY = std::make_shared<java::lang::String>("E");
static android::icu::text::DateFormat::AM_PM_FIELD = 0xe;
static android::icu::text::DateFormat::AM_PM_MIDNIGHT_NOON_FIELD = 0x23;
static android::icu::text::DateFormat::DATE_FIELD = 0x3;
static android::icu::text::DateFormat::DATE_SKELETONS;
static android::icu::text::DateFormat::DAY = std::make_shared<java::lang::String>("d");
static android::icu::text::DateFormat::DAY_OF_WEEK_FIELD = 0x9;
static android::icu::text::DateFormat::DAY_OF_WEEK_IN_MONTH_FIELD = 0xb;
static android::icu::text::DateFormat::DAY_OF_YEAR_FIELD = 0xa;
static android::icu::text::DateFormat::DEFAULT = 0x2;
static android::icu::text::DateFormat::DOW_LOCAL_FIELD = 0x13;
static android::icu::text::DateFormat::ERA_FIELD = 0x0;
static android::icu::text::DateFormat::EXTENDED_YEAR_FIELD = 0x14;
static android::icu::text::DateFormat::FIELD_COUNT = 0x26;
static android::icu::text::DateFormat::FLEXIBLE_DAY_PERIOD_FIELD = 0x24;
static android::icu::text::DateFormat::FRACTIONAL_SECOND_FIELD = 0x8;
static android::icu::text::DateFormat::FULL = 0x0;
static android::icu::text::DateFormat::GENERIC_TZ = std::make_shared<java::lang::String>("vvvv");
static android::icu::text::DateFormat::HOUR = std::make_shared<java::lang::String>("j");
static android::icu::text::DateFormat::HOUR0_FIELD = 0x10;
static android::icu::text::DateFormat::HOUR1_FIELD = 0xf;
static android::icu::text::DateFormat::HOUR24 = std::make_shared<java::lang::String>("H");
static android::icu::text::DateFormat::HOUR24_MINUTE = std::make_shared<java::lang::String>("Hm");
static android::icu::text::DateFormat::HOUR24_MINUTE_SECOND = std::make_shared<java::lang::String>("Hms");
static android::icu::text::DateFormat::HOUR_GENERIC_TZ = std::make_shared<java::lang::String>("jv");
static android::icu::text::DateFormat::HOUR_MINUTE = std::make_shared<java::lang::String>("jm");
static android::icu::text::DateFormat::HOUR_MINUTE_GENERIC_TZ = std::make_shared<java::lang::String>("jmv");
static android::icu::text::DateFormat::HOUR_MINUTE_SECOND = std::make_shared<java::lang::String>("jms");
static android::icu::text::DateFormat::HOUR_MINUTE_TZ = std::make_shared<java::lang::String>("jmz");
static android::icu::text::DateFormat::HOUR_OF_DAY0_FIELD = 0x5;
static android::icu::text::DateFormat::HOUR_OF_DAY1_FIELD = 0x4;
static android::icu::text::DateFormat::HOUR_TZ = std::make_shared<java::lang::String>("jz");
static android::icu::text::DateFormat::JULIAN_DAY_FIELD = 0x15;
static android::icu::text::DateFormat::LOCATION_TZ = std::make_shared<java::lang::String>("VVVV");
static android::icu::text::DateFormat::LONG = 0x1;
static android::icu::text::DateFormat::MEDIUM = 0x2;
static android::icu::text::DateFormat::MILLISECONDS_IN_DAY_FIELD = 0x16;
static android::icu::text::DateFormat::MILLISECOND_FIELD = 0x8;
static android::icu::text::DateFormat::MINUTE = std::make_shared<java::lang::String>("m");
static android::icu::text::DateFormat::MINUTE_FIELD = 0x6;
static android::icu::text::DateFormat::MINUTE_SECOND = std::make_shared<java::lang::String>("ms");
static android::icu::text::DateFormat::MONTH = std::make_shared<java::lang::String>("MMMM");
static android::icu::text::DateFormat::MONTH_DAY = std::make_shared<java::lang::String>("MMMMd");
static android::icu::text::DateFormat::MONTH_FIELD = 0x2;
static android::icu::text::DateFormat::MONTH_WEEKDAY_DAY = std::make_shared<java::lang::String>("MMMMEEEEd");
static android::icu::text::DateFormat::NONE = -0x1;
static android::icu::text::DateFormat::NUM_MONTH = std::make_shared<java::lang::String>("M");
static android::icu::text::DateFormat::NUM_MONTH_DAY = std::make_shared<java::lang::String>("Md");
static android::icu::text::DateFormat::NUM_MONTH_WEEKDAY_DAY = std::make_shared<java::lang::String>("MEd");
static android::icu::text::DateFormat::QUARTER = std::make_shared<java::lang::String>("QQQQ");
static android::icu::text::DateFormat::QUARTER_FIELD = 0x1b;
static android::icu::text::DateFormat::RELATED_YEAR = 0x22;
static android::icu::text::DateFormat::RELATIVE = 0x80;
static android::icu::text::DateFormat::RELATIVE_DEFAULT = 0x82;
static android::icu::text::DateFormat::RELATIVE_FULL = 0x80;
static android::icu::text::DateFormat::RELATIVE_LONG = 0x81;
static android::icu::text::DateFormat::RELATIVE_MEDIUM = 0x82;
static android::icu::text::DateFormat::RELATIVE_SHORT = 0x83;
static android::icu::text::DateFormat::SECOND = std::make_shared<java::lang::String>("s");
static android::icu::text::DateFormat::SECOND_FIELD = 0x7;
static android::icu::text::DateFormat::SHORT = 0x3;
static android::icu::text::DateFormat::SPECIFIC_TZ = std::make_shared<java::lang::String>("zzzz");
static android::icu::text::DateFormat::STANDALONE_DAY_FIELD = 0x19;
static android::icu::text::DateFormat::STANDALONE_MONTH = std::make_shared<java::lang::String>("LLLL");
static android::icu::text::DateFormat::STANDALONE_MONTH_FIELD = 0x1a;
static android::icu::text::DateFormat::STANDALONE_QUARTER_FIELD = 0x1c;
static android::icu::text::DateFormat::TIMEZONE_FIELD = 0x11;
static android::icu::text::DateFormat::TIMEZONE_GENERIC_FIELD = 0x18;
static android::icu::text::DateFormat::TIMEZONE_ISO_FIELD = 0x20;
static android::icu::text::DateFormat::TIMEZONE_ISO_LOCAL_FIELD = 0x21;
static android::icu::text::DateFormat::TIMEZONE_LOCALIZED_GMT_OFFSET_FIELD = 0x1f;
static android::icu::text::DateFormat::TIMEZONE_RFC_FIELD = 0x17;
static android::icu::text::DateFormat::TIMEZONE_SPECIAL_FIELD = 0x1d;
static android::icu::text::DateFormat::TIME_SEPARATOR = 0x25;
static android::icu::text::DateFormat::TIME_SKELETONS;
static android::icu::text::DateFormat::WEEKDAY = std::make_shared<java::lang::String>("EEEE");
static android::icu::text::DateFormat::WEEK_OF_MONTH_FIELD = 0xd;
static android::icu::text::DateFormat::WEEK_OF_YEAR_FIELD = 0xc;
static android::icu::text::DateFormat::YEAR = std::make_shared<java::lang::String>("y");
static android::icu::text::DateFormat::YEAR_ABBR_MONTH = std::make_shared<java::lang::String>("yMMM");
static android::icu::text::DateFormat::YEAR_ABBR_MONTH_DAY = std::make_shared<java::lang::String>("yMMMd");
static android::icu::text::DateFormat::YEAR_ABBR_MONTH_WEEKDAY_DAY = std::make_shared<java::lang::String>("yMMMEd");
static android::icu::text::DateFormat::YEAR_ABBR_QUARTER = std::make_shared<java::lang::String>("yQQQ");
static android::icu::text::DateFormat::YEAR_FIELD = 0x1;
static android::icu::text::DateFormat::YEAR_MONTH = std::make_shared<java::lang::String>("yMMMM");
static android::icu::text::DateFormat::YEAR_MONTH_DAY = std::make_shared<java::lang::String>("yMMMMd");
static android::icu::text::DateFormat::YEAR_MONTH_WEEKDAY_DAY = std::make_shared<java::lang::String>("yMMMMEEEEd");
static android::icu::text::DateFormat::YEAR_NAME_FIELD = 0x1e;
static android::icu::text::DateFormat::YEAR_NUM_MONTH = std::make_shared<java::lang::String>("yM");
static android::icu::text::DateFormat::YEAR_NUM_MONTH_DAY = std::make_shared<java::lang::String>("yMd");
static android::icu::text::DateFormat::YEAR_NUM_MONTH_WEEKDAY_DAY = std::make_shared<java::lang::String>("yMEd");
static android::icu::text::DateFormat::YEAR_QUARTER = std::make_shared<java::lang::String>("yQQQQ");
static android::icu::text::DateFormat::YEAR_WOY_FIELD = 0x12;
static android::icu::text::DateFormat::ZONE_SKELETONS;
static android::icu::text::DateFormat::currentSerialVersion = 0x1;
static android::icu::text::DateFormat::serialVersionUID = 0x642ca1e4c22615fcL;
// .method static constructor <clinit>()V
void android::icu::text::DateFormat::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar5;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar6;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar7;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x1a);
	cVar5[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("y"));
	cVar5[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("QQQQ"));
	cVar5[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("QQQ"));
	cVar5[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("yQQQQ"));
	cVar5[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("yQQQ"));
	cVar5[0x5] = std::make_shared<java::lang::String>(std::make_shared<char[]>("MMMM"));
	cVar5[0x6] = std::make_shared<java::lang::String>(std::make_shared<char[]>("MMM"));
	cVar5[0x7] = std::make_shared<java::lang::String>(std::make_shared<char[]>("M"));
	cVar5[0x8] = std::make_shared<java::lang::String>(std::make_shared<char[]>("yMMMM"));
	cVar5[0x9] = std::make_shared<java::lang::String>(std::make_shared<char[]>("yMMM"));
	cVar5[0xa] = std::make_shared<java::lang::String>(std::make_shared<char[]>("yM"));
	cVar5[0xb] = std::make_shared<java::lang::String>(std::make_shared<char[]>("d"));
	cVar5[0xc] = std::make_shared<java::lang::String>(std::make_shared<char[]>("yMMMMd"));
	cVar5[0xd] = std::make_shared<java::lang::String>(std::make_shared<char[]>("yMMMd"));
	cVar5[0xe] = std::make_shared<java::lang::String>(std::make_shared<char[]>("yMd"));
	cVar5[0xf] = std::make_shared<java::lang::String>(std::make_shared<char[]>("EEEE"));
	cVar5[0x10] = std::make_shared<java::lang::String>(std::make_shared<char[]>("E"));
	cVar5[0x11] = std::make_shared<java::lang::String>(std::make_shared<char[]>("yMMMMEEEEd"));
	cVar5[0x12] = std::make_shared<java::lang::String>(std::make_shared<char[]>("yMMMEd"));
	cVar5[0x13] = std::make_shared<java::lang::String>(std::make_shared<char[]>("yMEd"));
	cVar5[0x14] = std::make_shared<java::lang::String>(std::make_shared<char[]>("MMMMd"));
	cVar5[0x15] = std::make_shared<java::lang::String>(std::make_shared<char[]>("MMMd"));
	cVar5[0x16] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Md"));
	cVar5[0x17] = std::make_shared<java::lang::String>(std::make_shared<char[]>("MMMMEEEEd"));
	cVar5[0x18] = std::make_shared<java::lang::String>(std::make_shared<char[]>("MMMEd"));
	cVar5[0x19] = std::make_shared<java::lang::String>(std::make_shared<char[]>("MEd"));
	android::icu::text::DateFormat::DATE_SKELETONS = java::util::Arrays::asList(cVar5);
	cVar6 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x9);
	cVar6[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("j"));
	cVar6[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("H"));
	cVar6[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("m"));
	cVar6[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("jm"));
	cVar6[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Hm"));
	cVar6[0x5] = std::make_shared<java::lang::String>(std::make_shared<char[]>("s"));
	cVar6[0x6] = std::make_shared<java::lang::String>(std::make_shared<char[]>("jms"));
	cVar6[0x7] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Hms"));
	cVar6[0x8] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ms"));
	android::icu::text::DateFormat::TIME_SKELETONS = java::util::Arrays::asList(cVar6);
	cVar7 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x6);
	cVar7[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("VVVV"));
	cVar7[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("vvvv"));
	cVar7[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("v"));
	cVar7[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zzzz"));
	cVar7[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("z"));
	cVar7[0x5] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ZZZZ"));
	android::icu::text::DateFormat::ZONE_SKELETONS = java::util::Arrays::asList(cVar7);
	return;

}
// .method protected constructor <init>()V
android::icu::text::DateFormat::DateFormat()
{
	
	// 626    invoke-direct {p0}, Landroid/icu/text/UFormat;-><init>()V
	this->booleanAttributes = java::util::EnumSet::allOf(android::icu::text::DateFormat_S_BooleanAttribute());
	this->capitalizationSetting = android::icu::text::DisplayContext::CAPITALIZATION_NONE;
	this->serialVersionOnStream = 0x1;
	return;

}
// .method private static get(IILandroid/icu/util/ULocale;Landroid/icu/util/Calendar;)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::DateFormat::get(int dateStyle,int timeStyle,std::shared_ptr<android::icu::util::ULocale> loc,std::shared_ptr<android::icu::util::Calendar> cVar6)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<android::icu::impl::RelativeDateFormat> r;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<android::icu::util::Calendar> cVar6;
	std::shared_ptr<android::icu::text::SimpleDateFormat> cVar7;
	std::shared_ptr<android::icu::text::DateFormat> result;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "dateStyle"    # I
	//    .param p1, "timeStyle"    # I
	//    .param p2, "loc"    # Landroid/icu/util/ULocale;
	//    .param p3, "cal"    # Landroid/icu/util/Calendar;
	cVar0 = 0x3;
	cVar1 = -0x1;
	if ( timeStyle == cVar1 )
		goto label_cond_e;
	if ( ( timeStyle & 0x80) <= 0 )
		goto label_cond_e;
label_cond_8:
	r = std::make_shared<android::icu::impl::RelativeDateFormat>(timeStyle, dateStyle, loc, cVar6);
	//    .local v1, "r":Landroid/icu/impl/RelativeDateFormat;
	return r;
	// 680    .line 1674
	// 681    .end local v1    # "r":Landroid/icu/impl/RelativeDateFormat;
label_cond_e:
	if ( dateStyle == cVar1 )
		goto label_cond_14;
	if ( ( dateStyle & 0x80) > 0 ) 
		goto label_cond_8;
label_cond_14:
	if ( timeStyle <  cVar1 )
		goto label_cond_18;
	if ( timeStyle <= cVar0 )
		goto label_cond_32;
label_cond_18:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal time style ")))->append(timeStyle)->toString());
	// throw
	throw cVar2;
	// 721    .line 1682
label_cond_32:
	if ( dateStyle <  cVar1 )
		goto label_cond_36;
	if ( dateStyle <= cVar0 )
		goto label_cond_50;
label_cond_36:
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = std::make_shared<java::lang::IllegalArgumentException>(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal date style ")))->append(dateStyle)->toString());
	// throw
	throw cVar4;
	// 753    .line 1686
label_cond_50:
	if ( cVar6 )     
		goto label_cond_56;
	cVar6 = android::icu::util::Calendar::getInstance(loc);
label_cond_56:
	try {
	//label_try_start_56:
	result = cVar6->getDateTimeFormat(dateStyle, timeStyle, loc);
	//    .local v2, "result":Landroid/icu/text/DateFormat;
	result->setLocale(cVar6->getLocale(android::icu::util::ULocale::VALID_LOCALE), cVar6->getLocale(android::icu::util::ULocale::ACTUAL_LOCALE));
	//label_try_end_69:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_6a;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_56 .. :try_end_69} :catch_6a
	return result;
	// 792    .line 1695
	// 793    .end local v2    # "result":Landroid/icu/text/DateFormat;
label_catch_6a:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/util/MissingResourceException;
	cVar7 = std::make_shared<android::icu::text::SimpleDateFormat>(std::make_shared<java::lang::String>(std::make_shared<char[]>("M/d/yy h:mm a")));
	return cVar7;

}
// .method public static getAvailableLocales()[Ljava/util/Locale;
std::shared_ptr<java::util::Locale> android::icu::text::DateFormat::getAvailableLocales()
{
	
	return android::icu::impl::ICUResourceBundle::getAvailableLocales({const[class].FS-Param});

}
// .method public static getAvailableULocales()[Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::text::DateFormat::getAvailableULocales()
{
	
	return android::icu::impl::ICUResourceBundle::getAvailableULocales({const[class].FS-Param});

}
// .method public static final getDateInstance()Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::DateFormat::getDateInstance()
{
	
	return android::icu::text::DateFormat::get(0x2, -0x1, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT), 0x0);

}
// .method public static final getDateInstance(I)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::DateFormat::getDateInstance(int style)
{
	
	//    .param p0, "style"    # I
	return android::icu::text::DateFormat::get(style, -0x1, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT), 0x0);

}
// .method public static final getDateInstance(ILandroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::DateFormat::getDateInstance(int style,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p0, "style"    # I
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	return android::icu::text::DateFormat::get(style, -0x1, locale, 0x0);

}
// .method public static final getDateInstance(ILjava/util/Locale;)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::DateFormat::getDateInstance(int style,std::shared_ptr<java::util::Locale> aLocale)
{
	
	//    .param p0, "style"    # I
	//    .param p1, "aLocale"    # Ljava/util/Locale;
	return android::icu::text::DateFormat::get(style, -0x1, android::icu::util::ULocale::forLocale(aLocale), 0x0);

}
// .method public static final getDateInstance(Landroid/icu/util/Calendar;I)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::DateFormat::getDateInstance(std::shared_ptr<android::icu::util::Calendar> cal,int dateStyle)
{
	
	//    .param p0, "cal"    # Landroid/icu/util/Calendar;
	//    .param p1, "dateStyle"    # I
	return android::icu::text::DateFormat::getDateInstance(cal, dateStyle, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));

}
// .method public static final getDateInstance(Landroid/icu/util/Calendar;ILandroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::DateFormat::getDateInstance(std::shared_ptr<android::icu::util::Calendar> cal,int dateStyle,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p0, "cal"    # Landroid/icu/util/Calendar;
	//    .param p1, "dateStyle"    # I
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	return android::icu::text::DateFormat::getDateTimeInstance(cal, dateStyle, -0x1, locale);

}
// .method public static final getDateInstance(Landroid/icu/util/Calendar;ILjava/util/Locale;)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::DateFormat::getDateInstance(std::shared_ptr<android::icu::util::Calendar> cal,int dateStyle,std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p0, "cal"    # Landroid/icu/util/Calendar;
	//    .param p1, "dateStyle"    # I
	//    .param p2, "locale"    # Ljava/util/Locale;
	return android::icu::text::DateFormat::getDateTimeInstance(cal, dateStyle, -0x1, android::icu::util::ULocale::forLocale(locale));

}
// .method public static final getDateTimeInstance()Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::DateFormat::getDateTimeInstance()
{
	
	int cVar0;
	
	cVar0 = 0x2;
	return android::icu::text::DateFormat::get(cVar0, cVar0, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT), 0x0);

}
// .method public static final getDateTimeInstance(II)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::DateFormat::getDateTimeInstance(int dateStyle,int timeStyle)
{
	
	//    .param p0, "dateStyle"    # I
	//    .param p1, "timeStyle"    # I
	return android::icu::text::DateFormat::get(dateStyle, timeStyle, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT), 0x0);

}
// .method public static final getDateTimeInstance(IILandroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::DateFormat::getDateTimeInstance(int dateStyle,int timeStyle,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p0, "dateStyle"    # I
	//    .param p1, "timeStyle"    # I
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	return android::icu::text::DateFormat::get(dateStyle, timeStyle, locale, 0x0);

}
// .method public static final getDateTimeInstance(IILjava/util/Locale;)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::DateFormat::getDateTimeInstance(int dateStyle,int timeStyle,std::shared_ptr<java::util::Locale> aLocale)
{
	
	//    .param p0, "dateStyle"    # I
	//    .param p1, "timeStyle"    # I
	//    .param p2, "aLocale"    # Ljava/util/Locale;
	return android::icu::text::DateFormat::get(dateStyle, timeStyle, android::icu::util::ULocale::forLocale(aLocale), 0x0);

}
// .method public static final getDateTimeInstance(Landroid/icu/util/Calendar;II)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::DateFormat::getDateTimeInstance(std::shared_ptr<android::icu::util::Calendar> cal,int dateStyle,int timeStyle)
{
	
	//    .param p0, "cal"    # Landroid/icu/util/Calendar;
	//    .param p1, "dateStyle"    # I
	//    .param p2, "timeStyle"    # I
	return android::icu::text::DateFormat::getDateTimeInstance(cal, dateStyle, timeStyle, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));

}
// .method public static final getDateTimeInstance(Landroid/icu/util/Calendar;IILandroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::DateFormat::getDateTimeInstance(std::shared_ptr<android::icu::util::Calendar> cal,int dateStyle,int timeStyle,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p0, "cal"    # Landroid/icu/util/Calendar;
	//    .param p1, "dateStyle"    # I
	//    .param p2, "timeStyle"    # I
	//    .param p3, "locale"    # Landroid/icu/util/ULocale;
	if ( cal )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Calendar must be supplied")));
	// throw
	throw cVar0;
	// 1100    .line 1857
label_cond_b:
	return android::icu::text::DateFormat::get(dateStyle, timeStyle, locale, cal);

}
// .method public static final getDateTimeInstance(Landroid/icu/util/Calendar;IILjava/util/Locale;)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::DateFormat::getDateTimeInstance(std::shared_ptr<android::icu::util::Calendar> cal,int dateStyle,int timeStyle,std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p0, "cal"    # Landroid/icu/util/Calendar;
	//    .param p1, "dateStyle"    # I
	//    .param p2, "timeStyle"    # I
	//    .param p3, "locale"    # Ljava/util/Locale;
	return android::icu::text::DateFormat::getDateTimeInstance(dateStyle, timeStyle, android::icu::util::ULocale::forLocale(locale));

}
// .method public static final getInstance()Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::DateFormat::getInstance()
{
	
	int cVar0;
	
	cVar0 = 0x3;
	return android::icu::text::DateFormat::getDateTimeInstance(cVar0, cVar0);

}
// .method public static final getInstance(Landroid/icu/util/Calendar;)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::DateFormat::getInstance(std::shared_ptr<android::icu::util::Calendar> cal)
{
	
	//    .param p0, "cal"    # Landroid/icu/util/Calendar;
	return android::icu::text::DateFormat::getInstance(cal, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));

}
// .method public static final getInstance(Landroid/icu/util/Calendar;Landroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::DateFormat::getInstance(std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	int cVar0;
	
	//    .param p0, "cal"    # Landroid/icu/util/Calendar;
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	cVar0 = 0x3;
	return android::icu::text::DateFormat::getDateTimeInstance(cal, cVar0, cVar0, locale);

}
// .method public static final getInstance(Landroid/icu/util/Calendar;Ljava/util/Locale;)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::DateFormat::getInstance(std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<java::util::Locale> locale)
{
	
	int cVar0;
	
	//    .param p0, "cal"    # Landroid/icu/util/Calendar;
	//    .param p1, "locale"    # Ljava/util/Locale;
	cVar0 = 0x3;
	return android::icu::text::DateFormat::getDateTimeInstance(cal, cVar0, cVar0, android::icu::util::ULocale::forLocale(locale));

}
// .method public static final getInstanceForSkeleton(Landroid/icu/util/Calendar;Ljava/lang/String;Landroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::DateFormat::getInstanceForSkeleton(std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<android::icu::text::SimpleDateFormat> format;
	
	//    .param p0, "cal"    # Landroid/icu/util/Calendar;
	//    .param p1, "skeleton"    # Ljava/lang/String;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	//    .local v2, "generator":Landroid/icu/text/DateTimePatternGenerator;
	//    .local v0, "bestPattern":Ljava/lang/String;
	format = std::make_shared<android::icu::text::SimpleDateFormat>(android::icu::text::DateTimePatternGenerator::getInstance(locale)->getBestPattern(skeleton), locale);
	//    .local v1, "format":Landroid/icu/text/SimpleDateFormat;
	format->setCalendar(cal);
	return format;

}
// .method public static final getInstanceForSkeleton(Landroid/icu/util/Calendar;Ljava/lang/String;Ljava/util/Locale;)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::DateFormat::getInstanceForSkeleton(std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p0, "cal"    # Landroid/icu/util/Calendar;
	//    .param p1, "skeleton"    # Ljava/lang/String;
	//    .param p2, "locale"    # Ljava/util/Locale;
	return android::icu::text::DateFormat::getPatternInstance(cal, skeleton, android::icu::util::ULocale::forLocale(locale));

}
// .method public static final getInstanceForSkeleton(Ljava/lang/String;)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::DateFormat::getInstanceForSkeleton(std::shared_ptr<java::lang::String> skeleton)
{
	
	//    .param p0, "skeleton"    # Ljava/lang/String;
	return android::icu::text::DateFormat::getPatternInstance(skeleton, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));

}
// .method public static final getInstanceForSkeleton(Ljava/lang/String;Landroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::DateFormat::getInstanceForSkeleton(std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<android::icu::text::SimpleDateFormat> cVar0;
	
	//    .param p0, "skeleton"    # Ljava/lang/String;
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .local v1, "generator":Landroid/icu/text/DateTimePatternGenerator;
	//    .local v0, "bestPattern":Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::text::SimpleDateFormat>(android::icu::text::DateTimePatternGenerator::getInstance(locale)->getBestPattern(skeleton), locale);
	return cVar0;

}
// .method public static final getInstanceForSkeleton(Ljava/lang/String;Ljava/util/Locale;)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::DateFormat::getInstanceForSkeleton(std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p0, "skeleton"    # Ljava/lang/String;
	//    .param p1, "locale"    # Ljava/util/Locale;
	return android::icu::text::DateFormat::getPatternInstance(skeleton, android::icu::util::ULocale::forLocale(locale));

}
// .method public static final getPatternInstance(Landroid/icu/util/Calendar;Ljava/lang/String;Landroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::DateFormat::getPatternInstance(std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p0, "cal"    # Landroid/icu/util/Calendar;
	//    .param p1, "skeleton"    # Ljava/lang/String;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	return android::icu::text::DateFormat::getInstanceForSkeleton(cal, skeleton, locale);

}
// .method public static final getPatternInstance(Landroid/icu/util/Calendar;Ljava/lang/String;Ljava/util/Locale;)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::DateFormat::getPatternInstance(std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p0, "cal"    # Landroid/icu/util/Calendar;
	//    .param p1, "skeleton"    # Ljava/lang/String;
	//    .param p2, "locale"    # Ljava/util/Locale;
	return android::icu::text::DateFormat::getInstanceForSkeleton(cal, skeleton, locale);

}
// .method public static final getPatternInstance(Ljava/lang/String;)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::DateFormat::getPatternInstance(std::shared_ptr<java::lang::String> skeleton)
{
	
	//    .param p0, "skeleton"    # Ljava/lang/String;
	return android::icu::text::DateFormat::getInstanceForSkeleton(skeleton);

}
// .method public static final getPatternInstance(Ljava/lang/String;Landroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::DateFormat::getPatternInstance(std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p0, "skeleton"    # Ljava/lang/String;
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	return android::icu::text::DateFormat::getInstanceForSkeleton(skeleton, locale);

}
// .method public static final getPatternInstance(Ljava/lang/String;Ljava/util/Locale;)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::DateFormat::getPatternInstance(std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p0, "skeleton"    # Ljava/lang/String;
	//    .param p1, "locale"    # Ljava/util/Locale;
	return android::icu::text::DateFormat::getInstanceForSkeleton(skeleton, locale);

}
// .method public static final getTimeInstance()Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::DateFormat::getTimeInstance()
{
	
	return android::icu::text::DateFormat::get(-0x1, 0x2, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT), 0x0);

}
// .method public static final getTimeInstance(I)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::DateFormat::getTimeInstance(int style)
{
	
	//    .param p0, "style"    # I
	return android::icu::text::DateFormat::get(-0x1, style, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT), 0x0);

}
// .method public static final getTimeInstance(ILandroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::DateFormat::getTimeInstance(int style,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p0, "style"    # I
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	return android::icu::text::DateFormat::get(-0x1, style, locale, 0x0);

}
// .method public static final getTimeInstance(ILjava/util/Locale;)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::DateFormat::getTimeInstance(int style,std::shared_ptr<java::util::Locale> aLocale)
{
	
	//    .param p0, "style"    # I
	//    .param p1, "aLocale"    # Ljava/util/Locale;
	return android::icu::text::DateFormat::get(-0x1, style, android::icu::util::ULocale::forLocale(aLocale), 0x0);

}
// .method public static final getTimeInstance(Landroid/icu/util/Calendar;I)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::DateFormat::getTimeInstance(std::shared_ptr<android::icu::util::Calendar> cal,int timeStyle)
{
	
	//    .param p0, "cal"    # Landroid/icu/util/Calendar;
	//    .param p1, "timeStyle"    # I
	return android::icu::text::DateFormat::getTimeInstance(cal, timeStyle, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));

}
// .method public static final getTimeInstance(Landroid/icu/util/Calendar;ILandroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::DateFormat::getTimeInstance(std::shared_ptr<android::icu::util::Calendar> cal,int timeStyle,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p0, "cal"    # Landroid/icu/util/Calendar;
	//    .param p1, "timeStyle"    # I
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	return android::icu::text::DateFormat::getDateTimeInstance(cal, -0x1, timeStyle, locale);

}
// .method public static final getTimeInstance(Landroid/icu/util/Calendar;ILjava/util/Locale;)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::DateFormat::getTimeInstance(std::shared_ptr<android::icu::util::Calendar> cal,int timeStyle,std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p0, "cal"    # Landroid/icu/util/Calendar;
	//    .param p1, "timeStyle"    # I
	//    .param p2, "locale"    # Ljava/util/Locale;
	return android::icu::text::DateFormat::getDateTimeInstance(cal, -0x1, timeStyle, android::icu::util::ULocale::forLocale(locale));

}
// .method private readObject(Ljava/io/ObjectInputStream;)V
void android::icu::text::DateFormat::readObject(std::shared_ptr<java::io::ObjectInputStream> stream)
{
	
	int cVar0;
	
	//    .param p1, "stream"    # Ljava/io/ObjectInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1532        value = {
	// 1533            Ljava/io/IOException;,
	// 1534            Ljava/lang/ClassNotFoundException;
	// 1535        }
	// 1536    .end annotation
	cVar0 = 0x1;
	stream->defaultReadObject();
	if ( this->serialVersionOnStream >= cVar0 )
		goto label_cond_c;
	this->capitalizationSetting = android::icu::text::DisplayContext::CAPITALIZATION_NONE;
label_cond_c:
	if ( this->booleanAttributes )     
		goto label_cond_18;
	this->booleanAttributes = java::util::EnumSet::allOf(android::icu::text::DateFormat_S_BooleanAttribute());
label_cond_18:
	this->serialVersionOnStream = cVar0;
	return;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::DateFormat::clone()
{
	
	std::shared_ptr<android::icu::text::DateFormat> other;
	std::shared_ptr<android::icu::util::Calendar> cVar0;
	std::shared_ptr<android::icu::text::NumberFormat> cVar1;
	
	other = this->clone();
	other->checkCast("android::icu::text::DateFormat");
	//    .local v0, "other":Landroid/icu/text/DateFormat;
	cVar0 = this->calendar->clone();
	cVar0->checkCast("android::icu::util::Calendar");
	other->calendar = cVar0;
	if ( !(this->numberFormat) )  
		goto label_cond_1e;
	cVar1 = this->numberFormat->clone();
	cVar1->checkCast("android::icu::text::NumberFormat");
	other->numberFormat = cVar1;
label_cond_1e:
	return other;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::DateFormat::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<android::icu::text::DateFormat> other;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this != obj )
		goto label_cond_5;
	return cVar0;
	// 1637    .line 1639
label_cond_5:
	if ( !(obj) )  
		goto label_cond_11;
	if ( this->getClass() == obj->getClass() )
		goto label_cond_12;
label_cond_11:
	return cVar1;
label_cond_12:
	other = obj;
	other->checkCast("android::icu::text::DateFormat");
	//    .local v0, "other":Landroid/icu/text/DateFormat;
	if ( this->calendar )     
		goto label_cond_2c;
	if ( other->calendar )     
		goto label_cond_2c;
label_cond_1d:
	if ( this->numberFormat )     
		goto label_cond_40;
	if ( other->numberFormat )     
		goto label_cond_40;
label_goto_25:
	if ( this->capitalizationSetting != other->capitalizationSetting )
		goto label_cond_53;
label_goto_2b:
	return cVar0;
	// 1692    .line 1642
label_cond_2c:
	if ( !(this->calendar) )  
		goto label_cond_3e;
	if ( !(other->calendar) )  
		goto label_cond_3e;
	if ( this->calendar->isEquivalentTo(other->calendar) )     
		goto label_cond_1d;
label_cond_3e:
	cVar0 = cVar1;
	goto label_goto_2b;
	// 1718    .line 1644
label_cond_40:
	if ( !(this->numberFormat) )  
		goto label_cond_3e;
	if ( !(other->numberFormat) )  
		goto label_cond_3e;
	if ( !(this->numberFormat->equals(other->numberFormat)) )  
		goto label_cond_3e;
	goto label_goto_25;
label_cond_53:
	cVar0 = cVar1;
	goto label_goto_2b;

}
// .method public final format(Ljava/util/Date;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateFormat::format(std::shared_ptr<java::util::Date> date)
{
	
	std::shared_ptr<java::lang::StringBuffer> cVar0;
	std::shared_ptr<java::text::FieldPosition> cVar1;
	
	//    .param p1, "date"    # Ljava/util/Date;
	cVar0 = std::make_shared<java::lang::StringBuffer>(0x40);
	cVar1 = std::make_shared<java::text::FieldPosition>(0x0);
	return this->format(date, cVar0, cVar1)->toString();

}
// .method public final format(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::DateFormat::format(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> fieldPosition)
{
	
	std::shared_ptr<java::util::Date> cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .param p2, "toAppendTo"    # Ljava/lang/StringBuffer;
	//    .param p3, "fieldPosition"    # Ljava/text/FieldPosition;
	if ( !(obj->instanceOf("android::icu::util::Calendar")) )  
		goto label_cond_b;
	obj->checkCast("android::icu::util::Calendar");
	//    .end local p1    # "obj":Ljava/lang/Object;
	return this->format(obj, toAppendTo, fieldPosition);
	// 1802    .line 555
	// 1803    .restart local p1    # "obj":Ljava/lang/Object;
label_cond_b:
	if ( !(obj->instanceOf("java::util::Date")) )  
		goto label_cond_16;
	obj->checkCast("java::util::Date");
	//    .end local p1    # "obj":Ljava/lang/Object;
	return this->format(obj, toAppendTo, fieldPosition);
	// 1819    .line 557
	// 1820    .restart local p1    # "obj":Ljava/lang/Object;
label_cond_16:
	if ( !(obj->instanceOf("java::lang::Number")) )  
		goto label_cond_2a;
	obj->checkCast("java::lang::Number");
	//    .end local p1    # "obj":Ljava/lang/Object;
	cVar0 = std::make_shared<java::util::Date>(obj->longValue());
	return this->format(cVar0, toAppendTo, fieldPosition);
	// 1844    .line 561
	// 1845    .restart local p1    # "obj":Ljava/lang/Object;
label_cond_2a:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Cannot format given Object (")))->append(obj->getClass()->getName())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(") as a Date")))->toString());
	// throw
	throw cVar1;

}
// .method public format(Ljava/util/Date;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::DateFormat::format(std::shared_ptr<java::util::Date> date,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> fieldPosition)
{
	
	//    .param p1, "date"    # Ljava/util/Date;
	//    .param p2, "toAppendTo"    # Ljava/lang/StringBuffer;
	//    .param p3, "fieldPosition"    # Ljava/text/FieldPosition;
	this->calendar->setTime(date);
	return this->format(this->calendar, toAppendTo, fieldPosition);

}
// .method public getBooleanAttribute(Landroid/icu/text/DateFormat$BooleanAttribute;)Z
bool android::icu::text::DateFormat::getBooleanAttribute(std::shared_ptr<android::icu::text::DateFormat_S_BooleanAttribute> cVar0)
{
	
	std::shared_ptr<android::icu::text::DateFormat_S_BooleanAttribute> cVar0;
	
	//    .param p1, "key"    # Landroid/icu/text/DateFormat$BooleanAttribute;
	if ( cVar0 != android::icu::text::DateFormat_S_BooleanAttribute::PARSE_PARTIAL_MATCH )
		goto label_cond_6;
	cVar0 = android::icu::text::DateFormat_S_BooleanAttribute::PARSE_PARTIAL_LITERAL_MATCH;
label_cond_6:
	return this->booleanAttributes->contains(cVar0);

}
// .method public getCalendar()Landroid/icu/util/Calendar;
std::shared_ptr<android::icu::util::Calendar> android::icu::text::DateFormat::getCalendar()
{
	
	return this->calendar;

}
// .method public getContext(Landroid/icu/text/DisplayContext$Type;)Landroid/icu/text/DisplayContext;
std::shared_ptr<android::icu::text::DisplayContext> android::icu::text::DateFormat::getContext(std::shared_ptr<android::icu::text::DisplayContext_S_Type> type)
{
	
	std::shared_ptr<android::icu::text::DisplayContext> cVar0;
	
	//    .param p1, "type"    # Landroid/icu/text/DisplayContext$Type;
	if ( type != android::icu::text::DisplayContext_S_Type::CAPITALIZATION )
		goto label_cond_b;
	if ( !(this->capitalizationSetting) )  
		goto label_cond_b;
	cVar0 = this->capitalizationSetting;
label_goto_a:
	return cVar0;
	// 1967    .line 1618
label_cond_b:
	cVar0 = android::icu::text::DisplayContext::CAPITALIZATION_NONE;
	goto label_goto_a;

}
// .method public getNumberFormat()Landroid/icu/text/NumberFormat;
std::shared_ptr<android::icu::text::NumberFormat> android::icu::text::DateFormat::getNumberFormat()
{
	
	return this->numberFormat;

}
// .method public getTimeZone()Landroid/icu/util/TimeZone;
std::shared_ptr<android::icu::util::TimeZone> android::icu::text::DateFormat::getTimeZone()
{
	
	return this->calendar->getTimeZone();

}
// .method public hashCode()I
int android::icu::text::DateFormat::hashCode()
{
	
	return this->numberFormat->hashCode();

}
// .method public isCalendarLenient()Z
bool android::icu::text::DateFormat::isCalendarLenient()
{
	
	return this->calendar->isLenient();

}
// .method public isLenient()Z
bool android::icu::text::DateFormat::isLenient()
{
	
	bool cVar0;
	
	if ( !(this->calendar->isLenient()) )  
		goto label_cond_17;
	if ( !(this->getBooleanAttribute(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_ALLOW_NUMERIC)) )  
		goto label_cond_17;
	cVar0 = this->getBooleanAttribute(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_ALLOW_WHITESPACE);
label_goto_16:
	return cVar0;
label_cond_17:
	cVar0 = 0x0;
	goto label_goto_16;

}
// .method public parse(Ljava/lang/String;)Ljava/util/Date;
std::shared_ptr<java::util::Date> android::icu::text::DateFormat::parse(std::shared_ptr<java::lang::String> text)
{
	
	std::shared_ptr<java::text::ParsePosition> pos;
	std::shared_ptr<java::text::ParseException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2070        value = {
	// 2071            Ljava/text/ParseException;
	// 2072        }
	// 2073    .end annotation
	pos = std::make_shared<java::text::ParsePosition>(0x0);
	//    .local v0, "pos":Ljava/text/ParsePosition;
	//    .local v1, "result":Ljava/util/Date;
	if ( pos->getIndex() )     
		goto label_cond_35;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::text::ParseException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unparseable date: \")))->append(text)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")))->toString(), pos->getErrorIndex());
	// throw
	throw cVar0;
	// 2134    .line 673
label_cond_35:
	return this->parse(text, pos);

}
// .method public parse(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/util/Date;
std::shared_ptr<java::util::Date> android::icu::text::DateFormat::parse(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> pos)
{
	
	std::shared_ptr<java::util::Date> result;
	int start;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "pos"    # Ljava/text/ParsePosition;
	result = 0x0;
	//    .local v1, "result":Ljava/util/Date;
	start = pos->getIndex();
	//    .local v2, "start":I
	//    .local v3, "tzsav":Landroid/icu/util/TimeZone;
	this->calendar->clear();
	this->parse(text, this->calendar, pos);
	if ( pos->getIndex() == start )
		goto label_cond_21;
	try {
	//label_try_start_1b:
	//label_try_end_20:
	}
	catch (java::lang::IllegalArgumentException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_27;
	}
	//    .catch Ljava/lang/IllegalArgumentException; {:try_start_1b .. :try_end_20} :catch_27
	result = this->calendar->getTime();
	//    .end local v1    # "result":Ljava/util/Date;
label_cond_21:
label_goto_21:
	this->calendar->setTimeZone(this->calendar->getTimeZone());
	return result;
	// 2201    .line 758
	// 2202    .restart local v1    # "result":Ljava/util/Date;
label_catch_27:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/IllegalArgumentException;
	pos->setIndex(start);
	pos->setErrorIndex(start);
	goto label_goto_21;

}
// .method public parseObject(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::DateFormat::parseObject(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::text::ParsePosition> pos)
{
	
	//    .param p1, "source"    # Ljava/lang/String;
	//    .param p2, "pos"    # Ljava/text/ParsePosition;
	return this->parse(source, pos);

}
// .method public setBooleanAttribute(Landroid/icu/text/DateFormat$BooleanAttribute;Z)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::DateFormat::setBooleanAttribute(std::shared_ptr<android::icu::text::DateFormat_S_BooleanAttribute> cVar0,bool value)
{
	
	std::shared_ptr<android::icu::text::DateFormat_S_BooleanAttribute> cVar0;
	
	//    .param p1, "key"    # Landroid/icu/text/DateFormat$BooleanAttribute;
	//    .param p2, "value"    # Z
	if ( !(cVar0->equals(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_PARTIAL_MATCH)) )  
		goto label_cond_a;
	cVar0 = android::icu::text::DateFormat_S_BooleanAttribute::PARSE_PARTIAL_LITERAL_MATCH;
label_cond_a:
	if ( !(value) )  
		goto label_cond_12;
	this->booleanAttributes->add(cVar0);
label_goto_11:
	return this;
	// 2264    .line 1575
label_cond_12:
	this->booleanAttributes->remove(cVar0);
	goto label_goto_11;

}
// .method public setCalendar(Landroid/icu/util/Calendar;)V
void android::icu::text::DateFormat::setCalendar(std::shared_ptr<android::icu::util::Calendar> newCalendar)
{
	
	//    .param p1, "newCalendar"    # Landroid/icu/util/Calendar;
	this->calendar = newCalendar;
	return;

}
// .method public setCalendarLenient(Z)V
void android::icu::text::DateFormat::setCalendarLenient(bool lenient)
{
	
	//    .param p1, "lenient"    # Z
	this->calendar->setLenient(lenient);
	return;

}
// .method public setContext(Landroid/icu/text/DisplayContext;)V
void android::icu::text::DateFormat::setContext(std::shared_ptr<android::icu::text::DisplayContext> context)
{
	
	//    .param p1, "context"    # Landroid/icu/text/DisplayContext;
	if ( context->type() != android::icu::text::DisplayContext_S_Type::CAPITALIZATION )
		goto label_cond_a;
	this->capitalizationSetting = context;
label_cond_a:
	return;

}
// .method public setLenient(Z)V
void android::icu::text::DateFormat::setLenient(bool lenient)
{
	
	//    .param p1, "lenient"    # Z
	this->calendar->setLenient(lenient);
	this->setBooleanAttribute(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_ALLOW_NUMERIC, lenient);
	this->setBooleanAttribute(android::icu::text::DateFormat_S_BooleanAttribute::PARSE_ALLOW_WHITESPACE, lenient);
	return;

}
// .method public setNumberFormat(Landroid/icu/text/NumberFormat;)V
void android::icu::text::DateFormat::setNumberFormat(std::shared_ptr<android::icu::text::NumberFormat> newNumberFormat)
{
	
	//    .param p1, "newNumberFormat"    # Landroid/icu/text/NumberFormat;
	this->numberFormat = newNumberFormat;
	this->numberFormat->setParseIntegerOnly(0x1);
	return;

}
// .method public setTimeZone(Landroid/icu/util/TimeZone;)V
void android::icu::text::DateFormat::setTimeZone(std::shared_ptr<android::icu::util::TimeZone> zone)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	this->calendar->setTimeZone(zone);
	return;

}


