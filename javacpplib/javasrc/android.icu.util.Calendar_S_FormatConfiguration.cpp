// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\Calendar$FormatConfiguration.smali
#include "java2ctype.h"
#include "android.icu.text.DateFormatSymbols.h"
#include "android.icu.util.Calendar_S_FormatConfiguration.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"

// .method static synthetic -set0(Landroid/icu/util/Calendar$FormatConfiguration;Landroid/icu/util/Calendar;)Landroid/icu/util/Calendar;
std::shared_ptr<android::icu::util::Calendar> android::icu::util::Calendar_S_FormatConfiguration::_set0(std::shared_ptr<android::icu::util::Calendar_S_FormatConfiguration> _this,std::shared_ptr<android::icu::util::Calendar> _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/util/Calendar$FormatConfiguration;
	//    .param p1, "-value"    # Landroid/icu/util/Calendar;
	_this->cal = _value;
	return _value;

}
// .method static synthetic -set1(Landroid/icu/util/Calendar$FormatConfiguration;Landroid/icu/text/DateFormatSymbols;)Landroid/icu/text/DateFormatSymbols;
std::shared_ptr<android::icu::text::DateFormatSymbols> android::icu::util::Calendar_S_FormatConfiguration::_set1(std::shared_ptr<android::icu::util::Calendar_S_FormatConfiguration> _this,std::shared_ptr<android::icu::text::DateFormatSymbols> _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/util/Calendar$FormatConfiguration;
	//    .param p1, "-value"    # Landroid/icu/text/DateFormatSymbols;
	_this->formatData = _value;
	return _value;

}
// .method static synthetic -set2(Landroid/icu/util/Calendar$FormatConfiguration;Landroid/icu/util/ULocale;)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::util::Calendar_S_FormatConfiguration::_set2(std::shared_ptr<android::icu::util::Calendar_S_FormatConfiguration> _this,std::shared_ptr<android::icu::util::ULocale> _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/util/Calendar$FormatConfiguration;
	//    .param p1, "-value"    # Landroid/icu/util/ULocale;
	_this->loc = _value;
	return _value;

}
// .method static synthetic -set3(Landroid/icu/util/Calendar$FormatConfiguration;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Calendar_S_FormatConfiguration::_set3(std::shared_ptr<android::icu::util::Calendar_S_FormatConfiguration> _this,std::shared_ptr<java::lang::String> _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/util/Calendar$FormatConfiguration;
	//    .param p1, "-value"    # Ljava/lang/String;
	_this->override = _value;
	return _value;

}
// .method static synthetic -set4(Landroid/icu/util/Calendar$FormatConfiguration;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Calendar_S_FormatConfiguration::_set4(std::shared_ptr<android::icu::util::Calendar_S_FormatConfiguration> _this,std::shared_ptr<java::lang::String> _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/util/Calendar$FormatConfiguration;
	//    .param p1, "-value"    # Ljava/lang/String;
	_this->pattern = _value;
	return _value;

}
// .method private constructor <init>()V
android::icu::util::Calendar_S_FormatConfiguration::Calendar_S_FormatConfiguration()
{
	
	// 093    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/util/Calendar$FormatConfiguration;)V
android::icu::util::Calendar_S_FormatConfiguration::Calendar_S_FormatConfiguration(std::shared_ptr<android::icu::util::Calendar_S_FormatConfiguration> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/util/Calendar$FormatConfiguration;
	// 104    invoke-direct {p0}, Landroid/icu/util/Calendar$FormatConfiguration;-><init>()V
	return;

}
// .method public getCalendar()Landroid/icu/util/Calendar;
std::shared_ptr<android::icu::util::Calendar> android::icu::util::Calendar_S_FormatConfiguration::getCalendar()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 114    .end annotation
	return this->cal;

}
// .method public getDateFormatSymbols()Landroid/icu/text/DateFormatSymbols;
std::shared_ptr<android::icu::text::DateFormatSymbols> android::icu::util::Calendar_S_FormatConfiguration::getDateFormatSymbols()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 126    .end annotation
	return this->formatData;

}
// .method public getLocale()Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::util::Calendar_S_FormatConfiguration::getLocale()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 138    .end annotation
	return this->loc;

}
// .method public getOverrideString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Calendar_S_FormatConfiguration::getOverrideString()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 150    .end annotation
	return this->override;

}
// .method public getPatternString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Calendar_S_FormatConfiguration::getPatternString()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 162    .end annotation
	return this->pattern;

}


