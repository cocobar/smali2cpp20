// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\DangiCalendar.smali
#include "java2ctype.h"
#include "android.icu.util.ChineseCalendar.h"
#include "android.icu.util.DangiCalendar.h"
#include "android.icu.util.InitialTimeZoneRule.h"
#include "android.icu.util.RuleBasedTimeZone.h"
#include "android.icu.util.TimeArrayTimeZoneRule.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale_S_Category.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"
#include "java.util.Date.h"

static android::icu::util::DangiCalendar::DANGI_EPOCH_YEAR = -0x91c;
static android::icu::util::DangiCalendar::KOREA_ZONE;
static android::icu::util::DangiCalendar::serialVersionUID = 0x7130fd50087bac21L;
// .method static constructor <clinit>()V
void android::icu::util::DangiCalendar::static_cinit()
{
	
	std::shared_ptr<android::icu::util::InitialTimeZoneRule> initialTimeZone;
	std::shared<std::vector<long long[]>> millis1897;
	std::shared<std::vector<long long[]>> millis1898;
	std::shared_ptr<long long[]> millis1912;
	std::shared_ptr<android::icu::util::TimeArrayTimeZoneRule> rule1897;
	std::shared_ptr<android::icu::util::TimeArrayTimeZoneRule> rule1898to1911;
	std::shared_ptr<android::icu::util::TimeArrayTimeZoneRule> ruleFrom1912;
	std::shared_ptr<android::icu::util::RuleBasedTimeZone> tz;
	
	var4 = initialTimeZone(std::make_shared<java::lang::String>(std::make_shared<char[]>("GMT+8")), 0x1b77400, 0x0);
	//    .local v18, "initialTimeZone":Landroid/icu/util/InitialTimeZoneRule;
	millis1897 = std::make_shared<std::vector<long long[]>>(0x1);
	millis1897[0x0] = -0x21801858c00L;
	//    .local v6, "millis1897":[J
	millis1898 = std::make_shared<std::vector<long long[]>>(0x1);
	millis1898[0x0] = -0x210a9d46000L;
	//    .local v11, "millis1898":[J
	millis1912 = std::make_shared<std::vector<long long[]>>(0x1);
	millis1912[0x0] = -0x1a9de23f800L;
	//    .local v16, "millis1912":[J
	rule1897 = std::make_shared<android::icu::util::TimeArrayTimeZoneRule>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Korean 1897")), 0x1808580, 0x0, millis1897, 0x1);
	//    .local v2, "rule1897":Landroid/icu/util/TimeZoneRule;
	rule1898to1911 = std::make_shared<android::icu::util::TimeArrayTimeZoneRule>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Korean 1898-1911")), 0x1b77400, 0x0, millis1898, 0x1);
	//    .local v7, "rule1898to1911":Landroid/icu/util/TimeZoneRule;
	ruleFrom1912 = std::make_shared<android::icu::util::TimeArrayTimeZoneRule>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Korean 1912-")), 0x1ee6280, 0x0, millis1912, 0x1);
	//    .local v12, "ruleFrom1912":Landroid/icu/util/TimeZoneRule;
	var39 = tz(std::make_shared<java::lang::String>(std::make_shared<char[]>("KOREA_ZONE")), initialTimeZone);
	//    .local v19, "tz":Landroid/icu/util/RuleBasedTimeZone;
	tz->addTransitionRule(rule1897);
	tz->addTransitionRule(rule1898to1911);
	tz->addTransitionRule(ruleFrom1912);
	tz->freeze();
	android::icu::util::DangiCalendar::KOREA_ZONE = tz;
	return;

}
// .method public constructor <init>()V
android::icu::util::DangiCalendar::DangiCalendar()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 164    .end annotation
	android::icu::util::DangiCalendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));
	return;

}
// .method public constructor <init>(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V
android::icu::util::DangiCalendar::DangiCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 189    .end annotation
	android::icu::util::ChineseCalendar::(zone, locale, -0x91c, android::icu::util::DangiCalendar::KOREA_ZONE);
	return;

}
// .method public constructor <init>(Ljava/util/Date;)V
android::icu::util::DangiCalendar::DangiCalendar(std::shared_ptr<java::util::Date> date)
{
	
	//    .param p1, "date"    # Ljava/util/Date;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 207    .end annotation
	android::icu::util::DangiCalendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));
	this->setTime(date);
	return;

}
// .method public getType()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::DangiCalendar::getType()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 235    .end annotation
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("dangi"));

}


