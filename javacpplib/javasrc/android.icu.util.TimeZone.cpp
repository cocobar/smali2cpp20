// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\TimeZone.smali
#include "java2ctype.h"
#include "android.icu.impl.Grego.h"
#include "android.icu.impl.ICUConfig.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.JavaTimeZone.h"
#include "android.icu.impl.OlsonTimeZone.h"
#include "android.icu.impl.TimeZoneAdapter.h"
#include "android.icu.impl.ZoneMeta.h"
#include "android.icu.text.TimeZoneFormat_S_Style.h"
#include "android.icu.text.TimeZoneFormat_S_TimeType.h"
#include "android.icu.text.TimeZoneFormat.h"
#include "android.icu.text.TimeZoneNames_S_NameType.h"
#include "android.icu.text.TimeZoneNames.h"
#include "android.icu.util.BasicTimeZone.h"
#include "android.icu.util.ICUCloneNotSupportedException.h"
#include "android.icu.util.Output.h"
#include "android.icu.util.SimpleTimeZone.h"
#include "android.icu.util.TimeZone_S_ConstantZone.h"
#include "android.icu.util.TimeZone_S_SystemTimeZoneType.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale_S_Category.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "android.icu.util.UResourceBundleIterator.h"
#include "android.icu.util.VersionInfo.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.CloneNotSupportedException.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Integer.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.Throwable.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.util.Date.h"
#include "java.util.Locale.h"
#include "java.util.MissingResourceException.h"
#include "java.util.Set.h"
#include "java.util.TimeZone.h"
#include "java.util.logging.Logger.h"

static android::icu::util::TimeZone::_assertionsDisabled;
static android::icu::util::TimeZone::GENERIC_LOCATION = 0x7;
static android::icu::util::TimeZone::GMT_ZONE;
static android::icu::util::TimeZone::GMT_ZONE_ID = std::make_shared<java::lang::String>("Etc/GMT");
static android::icu::util::TimeZone::LOGGER;
static android::icu::util::TimeZone::LONG = 0x1;
static android::icu::util::TimeZone::LONG_GENERIC = 0x3;
static android::icu::util::TimeZone::LONG_GMT = 0x5;
static android::icu::util::TimeZone::SHORT = 0x0;
static android::icu::util::TimeZone::SHORT_COMMONLY_USED = 0x6;
static android::icu::util::TimeZone::SHORT_GENERIC = 0x2;
static android::icu::util::TimeZone::SHORT_GMT = 0x4;
static android::icu::util::TimeZone::TIMEZONE_ICU = 0x0;
static android::icu::util::TimeZone::TIMEZONE_JDK = 0x1;
static android::icu::util::TimeZone::TZIMPL_CONFIG_ICU = std::make_shared<java::lang::String>("ICU");
static android::icu::util::TimeZone::TZIMPL_CONFIG_JDK = std::make_shared<java::lang::String>("JDK");
static android::icu::util::TimeZone::TZIMPL_CONFIG_KEY = std::make_shared<java::lang::String>("android.icu.util.TimeZone.DefaultTimeZoneType");
static android::icu::util::TimeZone::TZ_IMPL = 0x0;
static android::icu::util::TimeZone::UNKNOWN_ZONE;
static android::icu::util::TimeZone::UNKNOWN_ZONE_ID = std::make_shared<java::lang::String>("Etc/Unknown");
static android::icu::util::TimeZone::defaultZone = nullptr;
static android::icu::util::TimeZone::serialVersionUID = -0xa5690eb38a351bfL;
// .method static constructor <clinit>()V
void android::icu::util::TimeZone::static_cinit()
{
	
	std::shared_ptr<android::icu::util::TimeZone_S_ConstantZone> cVar0;
	int cVar1;
	std::shared_ptr<android::icu::util::TimeZone_S_ConstantZone> cVar2;
	std::shared_ptr<android::icu::util::TimeZone_S_ConstantZone> cVar3;
	
	cVar0 = 0x0;
	cVar1 = 0x0;
	android::icu::util::TimeZone::_assertionsDisabled = ( android::icu::util::TimeZone()->desiredAssertionStatus() ^ 0x1);
	android::icu::util::TimeZone::LOGGER = java::util::logging::Logger::getLogger(std::make_shared<java::lang::String>(std::make_shared<char[]>("android.icu.util.TimeZone")));
	cVar2 = std::make_shared<android::icu::util::TimeZone_S_ConstantZone>(cVar1, std::make_shared<java::lang::String>(std::make_shared<char[]>("Etc/Unknown")), cVar0);
	android::icu::util::TimeZone::UNKNOWN_ZONE = cVar2->freeze();
	cVar3 = std::make_shared<android::icu::util::TimeZone_S_ConstantZone>(cVar1, std::make_shared<java::lang::String>(std::make_shared<char[]>("Etc/GMT")), cVar0);
	android::icu::util::TimeZone::GMT_ZONE = cVar3->freeze();
	android::icu::util::TimeZone::defaultZone = cVar0;
	android::icu::util::TimeZone::TZ_IMPL = cVar1;
	//    .local v0, "type":Ljava/lang/String;
	if ( !(android::icu::impl::ICUConfig::get(std::make_shared<java::lang::String>(std::make_shared<char[]>("android.icu.util.TimeZone.DefaultTimeZoneType")), std::make_shared<java::lang::String>(std::make_shared<char[]>("ICU")))->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("JDK")))) )  
		goto label_cond_4b;
	android::icu::util::TimeZone::TZ_IMPL = 0x1;
label_cond_4b:
	return;

}
// .method public constructor <init>()V
android::icu::util::TimeZone::TimeZone()
{
	
	// 176    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method protected constructor <init>(Ljava/lang/String;)V
android::icu::util::TimeZone::TimeZone(std::shared_ptr<java::lang::String> ID)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p1, "ID"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 186    .end annotation
	// 190    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( ID )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 202    .line 119
label_cond_b:
	this->ID = ID;
	return;

}
// .method private _getDisplayName(IZLandroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::TimeZone::_getDisplayName(int style,bool daylight,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared_ptr<java::lang::String> result;
	std::shared_ptr<android::icu::text::TimeZoneFormat> tzfmt;
	long long date;
	std::shared_ptr<android::icu::util::Output> timeType;
	int offset;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	
	//    .param p1, "style"    # I
	//    .param p2, "daylight"    # Z
	//    .param p3, "locale"    # Landroid/icu/util/ULocale;
	if ( locale )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("locale is null")));
	// throw
	throw cVar0;
	// 229    .line 478
label_cond_b:
	result = 0x0;
	//    .local v8, "result":Ljava/lang/String;
	if ( style == 0x7 )
		goto label_cond_12;
	if ( style != 0x3 )
		goto label_cond_4b;
label_cond_12:
	tzfmt = android::icu::text::TimeZoneFormat::getInstance(locale);
	//    .local v1, "tzfmt":Landroid/icu/text/TimeZoneFormat;
	date = java::lang::System::currentTimeMillis({const[class].FS-Param});
	//    .local v4, "date":J
	timeType = std::make_shared<android::icu::util::Output>(android::icu::text::TimeZoneFormat_S_TimeType::UNKNOWN);
	//    .local v6, "timeType":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Landroid/icu/text/TimeZoneFormat$TimeType;>;"
	// switch
	{
	auto item = ( style );
	if (item == 2) goto label_pswitch_86;
	if (item == 3) goto label_pswitch_7e;
	if (item == 4) goto label_pswitch_24;
	if (item == 5) goto label_pswitch_24;
	if (item == 6) goto label_pswitch_24;
	if (item == 7) goto label_pswitch_76;
	}
	//    .end local v8    # "result":Ljava/lang/String;
label_goto_24:
label_pswitch_24:
	if ( !(daylight) )  
		goto label_cond_8e;
	if ( timeType->value != android::icu::text::TimeZoneFormat_S_TimeType::STANDARD )
		goto label_cond_8e;
label_goto_2c:
	if ( !(daylight) )  
		goto label_cond_97;
	offset = (this->getRawOffset() + this->getDSTSavings());
	//    .local v7, "offset":I
label_goto_38:
	if ( style != 0x2 )
		goto label_cond_9c;
	result = tzfmt->formatOffsetShortLocalizedGMT(offset);
	//    .end local v1    # "tzfmt":Landroid/icu/text/TimeZoneFormat;
	//    .end local v4    # "date":J
	//    .end local v6    # "timeType":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Landroid/icu/text/TimeZoneFormat$TimeType;>;"
	//    .end local v7    # "offset":I
label_cond_3f:
label_goto_3f:
	if ( android::icu::util::TimeZone::_assertionsDisabled )     
		goto label_cond_10d;
	if ( result )     
		goto label_cond_10d;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 324    .line 480
	// 325    .restart local v8    # "result":Ljava/lang/String;
label_cond_4b:
	if ( style == 0x2 )
		goto label_cond_12;
	if ( style == 0x5 )
		goto label_cond_54;
	if ( style != 0x4 )
		goto label_cond_ab;
label_cond_54:
	tzfmt = android::icu::text::TimeZoneFormat::getInstance(locale);
	//    .restart local v1    # "tzfmt":Landroid/icu/text/TimeZoneFormat;
	if ( !(daylight) )  
		goto label_cond_a1;
	if ( !(this->useDaylightTime()) )  
		goto label_cond_a1;
	offset = (this->getRawOffset() + this->getDSTSavings());
	//    .restart local v7    # "offset":I
label_goto_6a:
	// switch
	{
	auto item = ( style );
	if (item == 4) goto label_pswitch_6e;
	if (item == 5) goto label_pswitch_a6;
	}
	goto label_goto_3f;
	// 373    .line 517
label_pswitch_6e:
	result = tzfmt->formatOffsetISO8601Basic(offset, 0x0, 0x0, 0x0);
	//    .local v8, "result":Ljava/lang/String;
	goto label_goto_3f;
	// 388    .line 488
	// 389    .end local v7    # "offset":I
	// 390    .restart local v4    # "date":J
	// 391    .restart local v6    # "timeType":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Landroid/icu/text/TimeZoneFormat$TimeType;>;"
	// 392    .local v8, "result":Ljava/lang/String;
label_pswitch_76:
	result = tzfmt->format(android::icu::text::TimeZoneFormat_S_Style::GENERIC_LOCATION, this, date, timeType);
	//    .local v8, "result":Ljava/lang/String;
	goto label_goto_24;
	// 405    .line 491
	// 406    .local v8, "result":Ljava/lang/String;
label_pswitch_7e:
	result = tzfmt->format(android::icu::text::TimeZoneFormat_S_Style::GENERIC_LONG, this, date, timeType);
	//    .local v8, "result":Ljava/lang/String;
	goto label_goto_24;
	// 419    .line 494
	// 420    .local v8, "result":Ljava/lang/String;
label_pswitch_86:
	result = tzfmt->format(android::icu::text::TimeZoneFormat_S_Style::GENERIC_SHORT, this, date, timeType);
	//    .local v8, "result":Ljava/lang/String;
	goto label_goto_24;
	// 433    .line 502
	// 434    .end local v8    # "result":Ljava/lang/String;
label_cond_8e:
	if ( daylight )     
		goto label_cond_3f;
	if ( timeType->value != android::icu::text::TimeZoneFormat_S_TimeType::DAYLIGHT )
		goto label_cond_3f;
	goto label_goto_2c;
	// 446    .line 503
label_cond_97:
	//    .restart local v7    # "offset":I
	goto label_goto_38;
	// 455    .line 505
label_cond_9c:
	result = tzfmt->formatOffsetLocalizedGMT(offset);
	//    .restart local v8    # "result":Ljava/lang/String;
	goto label_goto_3f;
	// 464    .line 511
	// 465    .end local v4    # "date":J
	// 466    .end local v6    # "timeType":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Landroid/icu/text/TimeZoneFormat$TimeType;>;"
	// 467    .end local v7    # "offset":I
	// 468    .local v8, "result":Ljava/lang/String;
label_cond_a1:
	this->getRawOffset();
	//    .restart local v7    # "offset":I
	goto label_goto_6a;
	// 477    .line 514
label_pswitch_a6:
	result = tzfmt->formatOffsetLocalizedGMT(offset);
	//    .local v8, "result":Ljava/lang/String;
	goto label_goto_3f;
	// 486    .line 522
	// 487    .end local v1    # "tzfmt":Landroid/icu/text/TimeZoneFormat;
	// 488    .end local v7    # "offset":I
	// 489    .local v8, "result":Ljava/lang/String;
label_cond_ab:
	if ( android::icu::util::TimeZone::_assertionsDisabled )     
		goto label_cond_bd;
	if ( style == 0x1 )
		goto label_cond_bd;
	if ( !(style) )  
		goto label_cond_bd;
	if ( style == 0x6 )
		goto label_cond_bd;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 511    .line 525
label_cond_bd:
	//    .restart local v4    # "date":J
	//    .local v9, "tznames":Landroid/icu/text/TimeZoneNames;
	//    .local v0, "nameType":Landroid/icu/text/TimeZoneNames$NameType;
	// switch
	{
	auto item = ( style );
	if (item == 0x0) goto label_sswitch_fa;
	if (item == 0x1) goto label_sswitch_f2;
	if (item == 0x6) goto label_sswitch_fa;
	}
	//    .end local v0    # "nameType":Landroid/icu/text/TimeZoneNames$NameType;
label_goto_c9:
	result = android::icu::text::TimeZoneNames::getInstance(locale)->getDisplayName(android::icu::impl::ZoneMeta::getCanonicalCLDRID(this), nameType, java::lang::System::currentTimeMillis({const[class].FS-Param}));
	//    .local v8, "result":Ljava/lang/String;
	if ( result )     
		goto label_cond_3f;
	tzfmt = android::icu::text::TimeZoneFormat::getInstance(locale);
	//    .restart local v1    # "tzfmt":Landroid/icu/text/TimeZoneFormat;
	if ( !(daylight) )  
		goto label_cond_102;
	if ( !(this->useDaylightTime()) )  
		goto label_cond_102;
	offset = (this->getRawOffset() + this->getDSTSavings());
	//    .restart local v7    # "offset":I
label_goto_e9:
	if ( style != 0x1 )
		goto label_cond_107;
	result = tzfmt->formatOffsetLocalizedGMT(offset);
	goto label_goto_3f;
	// 585    .line 530
	// 586    .end local v1    # "tzfmt":Landroid/icu/text/TimeZoneFormat;
	// 587    .end local v7    # "offset":I
	// 588    .restart local v0    # "nameType":Landroid/icu/text/TimeZoneNames$NameType;
	// 589    .local v8, "result":Ljava/lang/String;
label_sswitch_f2:
	if ( !(daylight) )  
		goto label_cond_f7;
	//    .local v0, "nameType":Landroid/icu/text/TimeZoneNames$NameType;
	goto label_goto_c9;
	// 598    .local v0, "nameType":Landroid/icu/text/TimeZoneNames$NameType;
label_cond_f7:
	//    .local v0, "nameType":Landroid/icu/text/TimeZoneNames$NameType;
	goto label_goto_c9;
	// 605    .line 534
	// 606    .local v0, "nameType":Landroid/icu/text/TimeZoneNames$NameType;
label_sswitch_fa:
	if ( !(daylight) )  
		goto label_cond_ff;
	//    .local v0, "nameType":Landroid/icu/text/TimeZoneNames$NameType;
	goto label_goto_c9;
	// 615    .local v0, "nameType":Landroid/icu/text/TimeZoneNames$NameType;
label_cond_ff:
	//    .local v0, "nameType":Landroid/icu/text/TimeZoneNames$NameType;
	goto label_goto_c9;
	// 622    .line 541
	// 623    .end local v0    # "nameType":Landroid/icu/text/TimeZoneNames$NameType;
	// 624    .restart local v1    # "tzfmt":Landroid/icu/text/TimeZoneFormat;
	// 625    .local v8, "result":Ljava/lang/String;
label_cond_102:
	//    .restart local v7    # "offset":I
	goto label_goto_e9;
	// 634    .line 543
label_cond_107:
	result = tzfmt->formatOffsetShortLocalizedGMT(offset);
	goto label_goto_3f;
	// 642    .line 548
	// 643    .end local v1    # "tzfmt":Landroid/icu/text/TimeZoneFormat;
	// 644    .end local v4    # "date":J
	// 645    .end local v7    # "offset":I
	// 646    .end local v8    # "result":Ljava/lang/String;
	// 647    .end local v9    # "tznames":Landroid/icu/text/TimeZoneNames;
label_cond_10d:
	return result;
	// 651    .line 486
	// 652    :pswitch_data_10e
	// 653    .packed-switch 0x2
	// 654        :pswitch_86
	// 655        :pswitch_7e
	// 656        :pswitch_24
	// 657        :pswitch_24
	// 658        :pswitch_24
	// 659        :pswitch_76
	// 660    .end packed-switch
	// 662    .line 512
	// 663    :pswitch_data_11e
	// 664    .packed-switch 0x4
	// 665        :pswitch_6e
	// 666        :pswitch_a6
	// 667    .end packed-switch
	// 669    .line 528
	// 670    :sswitch_data_126
	// 671    .sparse-switch
	// 672        0x0 -> :sswitch_fa
	// 673        0x1 -> :sswitch_f2
	// 674        0x6 -> :sswitch_fa
	// 675    .end sparse-switch

}
// .method public static declared-synchronized clearCachedDefault()V
void android::icu::util::TimeZone::clearCachedDefault()
{
	
	std::shared_ptr<android::icu::util::TimeZone> cVar0;
	
	cVar0 = android::icu::util::TimeZone();
	cVar0->monitor_enter();
	try {
	//label_try_start_4:
	android::icu::util::TimeZone::defaultZone = 0x0;
	//label_try_end_6:
	}
	catch (...){
		goto label_catchall_8;
	}
	//    .catchall {:try_start_4 .. :try_end_6} :catchall_8
	cVar0->monitor_exit();
	return;
label_catchall_8:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public static countEquivalentIDs(Ljava/lang/String;)I
int android::icu::util::TimeZone::countEquivalentIDs(std::shared_ptr<java::lang::String> id)
{
	
	//    .param p0, "id"    # Ljava/lang/String;
	return android::icu::impl::ZoneMeta::countEquivalentIDs(id);

}
// .method public static getAvailableIDs(Landroid/icu/util/TimeZone$SystemTimeZoneType;Ljava/lang/String;Ljava/lang/Integer;)Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::util::TimeZone::getAvailableIDs(std::shared_ptr<android::icu::util::TimeZone_S_SystemTimeZoneType> zoneType,std::shared_ptr<java::lang::String> region,std::shared_ptr<java::lang::Integer> rawOffset)
{
	
	//    .param p0, "zoneType"    # Landroid/icu/util/TimeZone$SystemTimeZoneType;
	//    .param p1, "region"    # Ljava/lang/String;
	//    .param p2, "rawOffset"    # Ljava/lang/Integer;
	//    .annotation system Ldalvik/annotation/Signature;
	// 726        value = {
	// 727            "(",
	// 728            "Landroid/icu/util/TimeZone$SystemTimeZoneType;",
	// 729            "Ljava/lang/String;",
	// 730            "Ljava/lang/Integer;",
	// 731            ")",
	// 732            "Ljava/util/Set",
	// 733            "<",
	// 734            "Ljava/lang/String;",
	// 735            ">;"
	// 736        }
	// 737    .end annotation
	return android::icu::impl::ZoneMeta::getAvailableIDs(zoneType, region, rawOffset);

}
// .method public static getAvailableIDs()[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::TimeZone::getAvailableIDs()
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<std::vector<java::lang::String>> cVar1;
	
	cVar0 = 0x0;
	//    .local v0, "ids":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	cVar1 = android::icu::util::TimeZone::getAvailableIDs(android::icu::util::TimeZone_S_SystemTimeZoneType::ANY, cVar0, cVar0)->toArray(std::make_shared<std::vector<std::vector<java::lang::String>>>(0x0));
	cVar1->checkCast("std::vector<java::lang::String>");
	return cVar1;

}
// .method public static getAvailableIDs(I)[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::TimeZone::getAvailableIDs(int rawOffset)
{
	
	std::shared_ptr<std::vector<java::lang::String>> cVar0;
	
	//    .param p0, "rawOffset"    # I
	//    .local v0, "ids":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	cVar0 = android::icu::util::TimeZone::getAvailableIDs(android::icu::util::TimeZone_S_SystemTimeZoneType::ANY, 0x0, java::lang::Integer::valueOf(rawOffset))->toArray(std::make_shared<std::vector<std::vector<java::lang::String>>>(0x0));
	cVar0->checkCast("std::vector<java::lang::String>");
	return cVar0;

}
// .method public static getAvailableIDs(Ljava/lang/String;)[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::TimeZone::getAvailableIDs(std::shared_ptr<java::lang::String> country)
{
	
	std::shared_ptr<std::vector<java::lang::String>> cVar0;
	
	//    .param p0, "country"    # Ljava/lang/String;
	//    .local v0, "ids":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	cVar0 = android::icu::util::TimeZone::getAvailableIDs(android::icu::util::TimeZone_S_SystemTimeZoneType::ANY, country, 0x0)->toArray(std::make_shared<std::vector<std::vector<java::lang::String>>>(0x0));
	cVar0->checkCast("std::vector<java::lang::String>");
	return cVar0;

}
// .method public static getCanonicalID(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::TimeZone::getCanonicalID(std::shared_ptr<java::lang::String> id)
{
	
	//    .param p0, "id"    # Ljava/lang/String;
	return android::icu::util::TimeZone::getCanonicalID(id, 0x0);

}
// .method public static getCanonicalID(Ljava/lang/String;[Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::TimeZone::getCanonicalID(std::shared_ptr<java::lang::String> id,std::shared_ptr<bool[]> isSystemID)
{
	
	std::shared_ptr<java::lang::String> canonicalID;
	
	//    .param p0, "id"    # Ljava/lang/String;
	//    .param p1, "isSystemID"    # [Z
	canonicalID = 0x0;
	//    .local v0, "canonicalID":Ljava/lang/String;
	0x0;
	//    .local v1, "systemTzid":Z
	if ( !(id) )  
		goto label_cond_18;
	if ( !(id->length()) )  
		goto label_cond_18;
	if ( !(id->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("Etc/Unknown")))) )  
		goto label_cond_1d;
	canonicalID = std::make_shared<java::lang::String>(std::make_shared<char[]>("Etc/Unknown"));
	//    .local v0, "canonicalID":Ljava/lang/String;
	//    .end local v0    # "canonicalID":Ljava/lang/String;
label_cond_18:
label_goto_18:
	if ( !(isSystemID) )  
		goto label_cond_1c;
	isSystemID[0x0] = 0x0;
label_cond_1c:
	return canonicalID;
	// 907    .line 1032
	// 908    .local v0, "canonicalID":Ljava/lang/String;
label_cond_1d:
	canonicalID = android::icu::impl::ZoneMeta::getCanonicalCLDRID(id);
	//    .local v0, "canonicalID":Ljava/lang/String;
	if ( !(canonicalID) )  
		goto label_cond_25;
	0x1;
	goto label_goto_18;
	// 923    .line 1036
label_cond_25:
	canonicalID = android::icu::impl::ZoneMeta::getCustomID(id);
	goto label_goto_18;

}
// .method public static getDefault()Landroid/icu/util/TimeZone;
std::shared_ptr<android::icu::util::TimeZone> android::icu::util::TimeZone::getDefault()
{
	
	std::shared_ptr<android::icu::util::TimeZone> result;
	std::shared_ptr<java::util::TimeZone> cVar0;
	std::shared_ptr<android::icu::util::TimeZone> cVar1;
	std::shared_ptr<android::icu::impl::JavaTimeZone> result;
	
	result = android::icu::util::TimeZone::defaultZone;
	//    .local v0, "result":Landroid/icu/util/TimeZone;
	if ( result )     
		goto label_cond_1d;
	cVar0 = java::util::TimeZone();
	cVar0->monitor_enter();
	try {
	//label_try_start_7:
	cVar1 = android::icu::util::TimeZone();
	cVar1->monitor_enter();
	//label_try_end_a:
	}
	catch (...){
		goto label_catchall_32;
	}
	//    .catchall {:try_start_7 .. :try_end_a} :catchall_32
	try {
	//label_try_start_a:
	result = android::icu::util::TimeZone::defaultZone;
	if ( result )     
		goto label_cond_1b;
	if ( android::icu::util::TimeZone::TZ_IMPL != 0x1 )
		goto label_cond_22;
	result = std::make_shared<android::icu::impl::JavaTimeZone>();
	//    .end local v0    # "result":Landroid/icu/util/TimeZone;
	//    .local v1, "result":Landroid/icu/util/TimeZone;
	result = result;
	//    .end local v1    # "result":Landroid/icu/util/TimeZone;
	//    .restart local v0    # "result":Landroid/icu/util/TimeZone;
label_goto_19:
	android::icu::util::TimeZone::defaultZone = result;
	//label_try_end_1b:
	}
	catch (...){
		goto label_catchall_2f;
	}
	//    .catchall {:try_start_a .. :try_end_1b} :catchall_2f
label_cond_1b:
	try {
	//label_try_start_1b:
	cVar1->monitor_exit();
	//label_try_end_1c:
	}
	catch (...){
		goto label_catchall_32;
	}
	//    .catchall {:try_start_1b .. :try_end_1c} :catchall_32
	cVar0->monitor_exit();
label_cond_1d:
	return result->cloneAsThawed();
	// 1003    .line 867
label_cond_22:
	try {
	//label_try_start_22:
	//    .local v2, "temp":Ljava/util/TimeZone;
	//label_try_end_2d:
	}
	catch (...){
		goto label_catchall_2f;
	}
	//    .catchall {:try_start_22 .. :try_end_2d} :catchall_2f
	result = android::icu::util::TimeZone::getFrozenTimeZone(java::util::TimeZone::getDefault({const[class].FS-Param})->getID());
	goto label_goto_19;
	// 1024    .line 861
	// 1025    .end local v2    # "temp":Ljava/util/TimeZone;
label_catchall_2f:
	// move-exception
	
	try {
	//label_try_start_30:
	cVar1->monitor_exit();
	// throw
	throw;
	// 1033    :try_end_32
	// 1034    .catchall {:try_start_30 .. :try_end_32} :catchall_32
	// 1036    .line 860
label_catchall_32:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public static getDefaultTimeZoneType()I
int android::icu::util::TimeZone::getDefaultTimeZoneType()
{
	
	return android::icu::util::TimeZone::TZ_IMPL;

}
// .method public static getEquivalentID(Ljava/lang/String;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::TimeZone::getEquivalentID(std::shared_ptr<java::lang::String> id,int index)
{
	
	//    .param p0, "id"    # Ljava/lang/String;
	//    .param p1, "index"    # I
	return android::icu::impl::ZoneMeta::getEquivalentID(id, index);

}
// .method static getFrozenICUTimeZone(Ljava/lang/String;Z)Landroid/icu/util/BasicTimeZone;
std::shared_ptr<android::icu::util::BasicTimeZone> android::icu::util::TimeZone::getFrozenICUTimeZone(std::shared_ptr<java::lang::String> id,bool trySystem)
{
	
	std::shared_ptr<android::icu::util::BasicTimeZone> result;
	
	//    .param p0, "id"    # Ljava/lang/String;
	//    .param p1, "trySystem"    # Z
	result = 0x0;
	//    .local v0, "result":Landroid/icu/util/BasicTimeZone;
	if ( !(trySystem) )  
		goto label_cond_7;
	result = android::icu::impl::ZoneMeta::getSystemTimeZone(id);
	//    .end local v0    # "result":Landroid/icu/util/BasicTimeZone;
label_cond_7:
	if ( result )     
		goto label_cond_d;
label_cond_d:
	return result;

}
// .method public static getFrozenTimeZone(Ljava/lang/String;)Landroid/icu/util/TimeZone;
std::shared_ptr<android::icu::util::TimeZone> android::icu::util::TimeZone::getFrozenTimeZone(std::shared_ptr<java::lang::String> ID)
{
	
	//    .param p0, "ID"    # Ljava/lang/String;
	return android::icu::util::TimeZone::getTimeZone(ID, android::icu::util::TimeZone::TZ_IMPL, 0x1);

}
// .method public static getIDForWindowsID(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::TimeZone::getIDForWindowsID(std::shared_ptr<java::lang::String> winid,std::shared_ptr<java::lang::String> region)
{
	
	std::shared_ptr<java::lang::String> id;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<android::icu::util::UResourceBundle> zones;
	int endIdx;
	
	//    .param p0, "winid"    # Ljava/lang/String;
	//    .param p1, "region"    # Ljava/lang/String;
	id = 0x0;
	//    .local v2, "id":Ljava/lang/String;
	//    .local v4, "top":Landroid/icu/util/UResourceBundle;
	//    .local v3, "mapTimezones":Landroid/icu/util/UResourceBundle;
	try {
	//label_try_start_14:
	//label_try_end_17:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_37;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_14 .. :try_end_17} :catch_37
	zones = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), std::make_shared<java::lang::String>(std::make_shared<char[]>("windowsZones")), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER)->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("mapTimezones")))->get(winid);
	//    .local v5, "zones":Landroid/icu/util/UResourceBundle;
	if ( !(region) )  
		goto label_cond_2d;
	try {
	//label_try_start_1a:
	id = zones->getString(region);
	//    .local v2, "id":Ljava/lang/String;
	if ( !(id) )  
		goto label_cond_2d;
	endIdx = id->indexOf(0x20);
	//    .local v1, "endIdx":I
	if ( endIdx <= 0 )
		goto label_cond_2d;
	//label_try_end_2c:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_39;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_1a .. :try_end_2c} :catch_39
	id = id->substring(0x0, endIdx);
	//    .end local v1    # "endIdx":I
	//    .end local v2    # "id":Ljava/lang/String;
label_cond_2d:
label_goto_2d:
	if ( id )     
		goto label_cond_36;
	try {
	//label_try_start_2f:
	//label_try_end_35:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_37;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_2f .. :try_end_35} :catch_37
	id = zones->getString(std::make_shared<java::lang::String>(std::make_shared<char[]>("001")));
	//    .end local v5    # "zones":Landroid/icu/util/UResourceBundle;
label_cond_36:
label_goto_36:
	return id;
	// 1215    .line 1176
label_catch_37:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/util/MissingResourceException;
	goto label_goto_36;
	// 1222    .line 1169
	// 1223    .end local v0    # "e":Ljava/util/MissingResourceException;
	// 1224    .restart local v5    # "zones":Landroid/icu/util/UResourceBundle;
label_catch_39:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v0    # "e":Ljava/util/MissingResourceException;
	goto label_goto_2d;

}
// .method public static getRegion(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::TimeZone::getRegion(std::shared_ptr<java::lang::String> id)
{
	
	std::shared_ptr<java::lang::String> region;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "id"    # Ljava/lang/String;
	region = 0x0;
	//    .local v0, "region":Ljava/lang/String;
	if ( id->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("Etc/Unknown"))) )     
		goto label_cond_e;
	region = android::icu::impl::ZoneMeta::getRegion(id);
	//    .end local v0    # "region":Ljava/lang/String;
label_cond_e:
	if ( region )     
		goto label_cond_2a;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unknown system zone id: ")))->append(id)->toString());
	// throw
	throw cVar0;
	// 1285    .line 1070
label_cond_2a:
	return region;

}
// .method public static getTZDataVersion()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::TimeZone::getTZDataVersion()
{
	
	return android::icu::util::VersionInfo::getTZDataVersion({const[class].FS-Param});

}
// .method public static getTimeZone(Ljava/lang/String;)Landroid/icu/util/TimeZone;
std::shared_ptr<android::icu::util::TimeZone> android::icu::util::TimeZone::getTimeZone(std::shared_ptr<java::lang::String> ID)
{
	
	//    .param p0, "ID"    # Ljava/lang/String;
	return android::icu::util::TimeZone::getTimeZone(ID, android::icu::util::TimeZone::TZ_IMPL, 0x0);

}
// .method public static getTimeZone(Ljava/lang/String;I)Landroid/icu/util/TimeZone;
std::shared_ptr<android::icu::util::TimeZone> android::icu::util::TimeZone::getTimeZone(std::shared_ptr<java::lang::String> ID,int type)
{
	
	//    .param p0, "ID"    # Ljava/lang/String;
	//    .param p1, "type"    # I
	return android::icu::util::TimeZone::getTimeZone(ID, type, 0x0);

}
// .method private static getTimeZone(Ljava/lang/String;IZ)Landroid/icu/util/TimeZone;
std::shared_ptr<android::icu::util::TimeZone> android::icu::util::TimeZone::getTimeZone(std::shared_ptr<java::lang::String> id,int type,bool frozen)
{
	
	bool cVar0;
	std::shared_ptr<android::icu::util::TimeZone> result;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "id"    # Ljava/lang/String;
	//    .param p1, "type"    # I
	//    .param p2, "frozen"    # Z
	cVar0 = 0x1;
	if ( type != cVar0 )
		goto label_cond_3c;
	result = android::icu::impl::JavaTimeZone::createTimeZone(id);
	//    .local v0, "result":Landroid/icu/util/TimeZone;
	if ( !(result) )  
		goto label_cond_10;
	if ( !(frozen) )  
		goto label_cond_f;
	result = result->freeze();
	//    .end local v0    # "result":Landroid/icu/util/TimeZone;
label_cond_f:
	return result;
	// 1367    .line 690
	// 1368    .restart local v0    # "result":Landroid/icu/util/TimeZone;
label_cond_10:
	result = android::icu::util::TimeZone::getFrozenICUTimeZone(id, 0x0);
label_goto_15:
	if ( result )     
		goto label_cond_39;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	android::icu::util::TimeZone::LOGGER->fine(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")))->append(id)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")))->toString());
	result = android::icu::util::TimeZone::UNKNOWN_ZONE;
label_cond_39:
	if ( !(frozen) )  
		goto label_cond_41;
	//    .end local v0    # "result":Landroid/icu/util/TimeZone;
label_goto_3b:
	return result;
	// 1420    .line 692
label_cond_3c:
	result = android::icu::util::TimeZone::getFrozenICUTimeZone(id, cVar0);
	//    .restart local v0    # "result":Landroid/icu/util/TimeZone;
	goto label_goto_15;
	// 1429    .line 698
label_cond_41:
	result = result->cloneAsThawed();
	goto label_goto_3b;

}
// .method public static getWindowsID(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::TimeZone::getWindowsID(std::shared_ptr<java::lang::String> id)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	bool cVar1;
	std::shared<std::vector<bool[]>> isSystemID;
	std::shared_ptr<android::icu::util::UResourceBundleIterator> resitr;
	std::shared_ptr<android::icu::util::UResourceBundle> winzone;
	std::shared_ptr<android::icu::util::UResourceBundleIterator> rgitr;
	std::shared_ptr<android::icu::util::UResourceBundle> regionalData;
	auto tzids;
	int cVar2;
	
	//    .param p0, "id"    # Ljava/lang/String;
	cVar0 = 0x0;
	cVar1 = 0x0;
	isSystemID = std::make_shared<std::vector<bool[]>>(0x1);
	isSystemID[cVar1] = cVar1;
	//    .local v0, "isSystemID":[Z
	if ( isSystemID[cVar1] )     
		goto label_cond_10;
	return cVar0;
	// 1468    .line 1101
label_cond_10:
	//    .local v5, "top":Landroid/icu/util/UResourceBundle;
	//    .local v1, "mapTimezones":Landroid/icu/util/UResourceBundle;
	resitr = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), std::make_shared<java::lang::String>(std::make_shared<char[]>("windowsZones")), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER)->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("mapTimezones")))->getIterator();
	//    .local v3, "resitr":Landroid/icu/util/UResourceBundleIterator;
label_cond_27:
	if ( !(resitr->hasNext()) )  
		goto label_cond_6b;
	winzone = resitr->next();
	//    .local v8, "winzone":Landroid/icu/util/UResourceBundle;
	if ( winzone->getType() != 0x2 )
		goto label_cond_27;
	rgitr = winzone->getIterator();
	//    .local v4, "rgitr":Landroid/icu/util/UResourceBundleIterator;
label_cond_3c:
	if ( !(rgitr->hasNext()) )  
		goto label_cond_27;
	regionalData = rgitr->next();
	//    .local v2, "regionalData":Landroid/icu/util/UResourceBundle;
	if ( regionalData->getType() )     
		goto label_cond_3c;
	tzids = regionalData->getString()->split(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")));
	//    .local v7, "tzids":[Ljava/lang/String;
	cVar2 = cVar1;
label_goto_59:
	if ( cVar2 >= tzids->size() )
		goto label_cond_3c;
	//    .local v6, "tzid":Ljava/lang/String;
	if ( !(tzids[cVar2]->equals(android::icu::util::TimeZone::getCanonicalID(id, isSystemID))) )  
		goto label_cond_68;
	return winzone->getKey();
	// 1583    .line 1117
label_cond_68:
	cVar2 = ( cVar2 + 0x1);
	goto label_goto_59;
	// 1589    .line 1125
	// 1590    .end local v2    # "regionalData":Landroid/icu/util/UResourceBundle;
	// 1591    .end local v4    # "rgitr":Landroid/icu/util/UResourceBundleIterator;
	// 1592    .end local v6    # "tzid":Ljava/lang/String;
	// 1593    .end local v7    # "tzids":[Ljava/lang/String;
	// 1594    .end local v8    # "winzone":Landroid/icu/util/UResourceBundle;
label_cond_6b:
	return cVar0;

}
// .method public static declared-synchronized setDefault(Landroid/icu/util/TimeZone;)V
void android::icu::util::TimeZone::setDefault(std::shared_ptr<android::icu::util::TimeZone> tz)
{
	
	std::shared_ptr<android::icu::util::TimeZone> cVar0;
	std::shared_ptr<java::util::TimeZone> jdkZone;
	std::shared_ptr<android::icu::util::TimeZone> cVar1;
	std::shared_ptr<java::lang::String> icuID;
	
	//    .param p0, "tz"    # Landroid/icu/util/TimeZone;
	cVar0 = android::icu::util::TimeZone();
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	android::icu::util::TimeZone::defaultZone = tz;
	jdkZone = 0x0;
	//    .local v1, "jdkZone":Ljava/util/TimeZone;
	if ( !(android::icu::util::TimeZone::defaultZone->instanceOf("android::icu::impl::JavaTimeZone")) )  
		goto label_cond_19;
	cVar1 = android::icu::util::TimeZone::defaultZone;
	cVar1->checkCast("android::icu::impl::JavaTimeZone");
	//    .end local v1    # "jdkZone":Ljava/util/TimeZone;
label_cond_14:
label_goto_14:
	java::util::TimeZone::setDefault(jdkZone);
	//label_try_end_17:
	}
	catch (...){
		goto label_catchall_4b;
	}
	//    .catchall {:try_start_3 .. :try_end_17} :catchall_4b
	cVar0->monitor_exit();
	return;
	// 1645    .line 910
	// 1646    .restart local v1    # "jdkZone":Ljava/util/TimeZone;
label_cond_19:
	if ( !(tz) )  
		goto label_cond_14;
	try {
	//label_try_start_1b:
	if ( !(tz->instanceOf("android::icu::impl::OlsonTimeZone")) )  
		goto label_cond_44;
	icuID = tz->getID();
	//    .local v0, "icuID":Ljava/lang/String;
	jdkZone = java::util::TimeZone::getTimeZone(icuID);
	//    .local v1, "jdkZone":Ljava/util/TimeZone;
	if ( icuID->equals(jdkZone->getID()) )     
		goto label_cond_44;
	icuID = android::icu::util::TimeZone::getCanonicalID(icuID);
	jdkZone = java::util::TimeZone::getTimeZone(icuID);
	if ( icuID->equals(jdkZone->getID()) )     
		goto label_cond_44;
	jdkZone = 0x0;
	//    .end local v0    # "icuID":Ljava/lang/String;
	//    .end local v1    # "jdkZone":Ljava/util/TimeZone;
label_cond_44:
	if ( jdkZone )     
		goto label_cond_14;
	//label_try_end_49:
	}
	catch (...){
		goto label_catchall_4b;
	}
	//    .catchall {:try_start_1b .. :try_end_49} :catchall_4b
	//    .restart local v1    # "jdkZone":Ljava/util/TimeZone;
	goto label_goto_14;
	// 1719    .end local v1    # "jdkZone":Ljava/util/TimeZone;
label_catchall_4b:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public static declared-synchronized setDefaultTimeZoneType(I)V
void android::icu::util::TimeZone::setDefaultTimeZoneType(int type)
{
	
	std::shared_ptr<android::icu::util::TimeZone> cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	
	//    .param p0, "type"    # I
	cVar0 = android::icu::util::TimeZone();
	cVar0->monitor_enter();
	if ( !(type) )  
		goto label_cond_14;
	if ( type == 0x1 )
		goto label_cond_14;
	try {
	//label_try_start_8:
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid timezone type")));
	// throw
	throw cVar1;
	// 1753    :try_end_11
	// 1754    .catchall {:try_start_8 .. :try_end_11} :catchall_11
label_catchall_11:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 1763    .line 729
label_cond_14:
	try {
	//label_try_start_14:
	android::icu::util::TimeZone::TZ_IMPL = type;
	//label_try_end_16:
	}
	catch (...){
		goto label_catchall_11;
	}
	//    .catchall {:try_start_14 .. :try_end_16} :catchall_11
	cVar0->monitor_exit();
	return;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::util::TimeZone::clone()
{
	
	if ( !(this->isFrozen()) )  
		goto label_cond_7;
	return this;
	// 1792    .line 966
label_cond_7:
	return this->cloneAsThawed();

}
// .method public cloneAsThawed()Landroid/icu/util/TimeZone;
std::shared_ptr<android::icu::util::TimeZone> android::icu::util::TimeZone::cloneAsThawed()
{
	
	std::shared_ptr<android::icu::util::ICUCloneNotSupportedException> cVar0;
	std::shared_ptr<android::icu::util::TimeZone> other;
	std::vector<std::any> tryCatchExcetionList;
	
	try {
	//label_try_start_0:
	other = this->clone();
	other->checkCast("android::icu::util::TimeZone");
	//label_try_end_6:
	}
	catch (java::lang::CloneNotSupportedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_7;
	}
	//    .catch Ljava/lang/CloneNotSupportedException; {:try_start_0 .. :try_end_6} :catch_7
	//    .local v1, "other":Landroid/icu/util/TimeZone;
	return other;
	// 1819    .line 1209
	// 1820    .end local v1    # "other":Landroid/icu/util/TimeZone;
label_catch_7:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/CloneNotSupportedException;
	cVar0 = std::make_shared<android::icu::util::ICUCloneNotSupportedException>(getCatchExcetionFromList);
	// throw
	throw cVar0;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::util::TimeZone::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	if ( this != obj )
		goto label_cond_4;
	return 0x1;
	// 1857    .line 975
label_cond_4:
	if ( !(obj) )  
		goto label_cond_10;
	if ( this->getClass() == obj->getClass() )
		goto label_cond_12;
label_cond_10:
	return 0x0;
	// 1876    .line 976
label_cond_12:
	obj->checkCast("android::icu::util::TimeZone");
	//    .end local p1    # "obj":Ljava/lang/Object;
	return this->ID->equals(obj->ID);

}
// .method public freeze()Landroid/icu/util/TimeZone;
std::shared_ptr<android::icu::util::TimeZone> android::icu::util::TimeZone::freeze()
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Needs to be implemented by the subclass.")));
	// throw
	throw cVar0;

}
// .method public getDSTSavings()I
int android::icu::util::TimeZone::getDSTSavings()
{
	
	if ( !(this->useDaylightTime()) )  
		goto label_cond_a;
	return 0x36ee80;
	// 1934    .line 569
label_cond_a:
	return 0x0;

}
// .method public final getDisplayName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::TimeZone::getDisplayName()
{
	
	return this->_getDisplayName(0x3, 0x0, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::DISPLAY));

}
// .method public final getDisplayName(Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::TimeZone::getDisplayName(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	return this->_getDisplayName(0x3, 0x0, locale);

}
// .method public final getDisplayName(Ljava/util/Locale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::TimeZone::getDisplayName(std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p1, "locale"    # Ljava/util/Locale;
	return this->_getDisplayName(0x3, 0x0, android::icu::util::ULocale::forLocale(locale));

}
// .method public final getDisplayName(ZI)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::TimeZone::getDisplayName(bool daylight,int style)
{
	
	//    .param p1, "daylight"    # Z
	//    .param p2, "style"    # I
	return this->getDisplayName(daylight, style, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::DISPLAY));

}
// .method public getDisplayName(ZILandroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::TimeZone::getDisplayName(bool daylight,int style,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "daylight"    # Z
	//    .param p2, "style"    # I
	//    .param p3, "locale"    # Landroid/icu/util/ULocale;
	if ( style < 0 ) 
		goto label_cond_5;
	if ( style <= 0x7 )
		goto label_cond_1f;
label_cond_5:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal style: ")))->append(style)->toString());
	// throw
	throw cVar0;
	// 2061    .line 465
label_cond_1f:
	return this->_getDisplayName(style, daylight, locale);

}
// .method public getDisplayName(ZILjava/util/Locale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::TimeZone::getDisplayName(bool daylight,int style,std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p1, "daylight"    # Z
	//    .param p2, "style"    # I
	//    .param p3, "locale"    # Ljava/util/Locale;
	return this->getDisplayName(daylight, style, android::icu::util::ULocale::forLocale(locale));

}
// .method public getID()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::TimeZone::getID()
{
	
	return this->ID;

}
// .method public getOffset(J)I
int android::icu::util::TimeZone::getOffset(long long date)
{
	
	bool cVar0;
	std::shared<std::vector<int[]>> result;
	
	//    .param p1, "date"    # J
	cVar0 = 0x0;
	result = std::make_shared<std::vector<int[]>>(0x2);
	//    .local v0, "result":[I
	this->getOffset(date, cVar0, result);
	return (result[cVar0] +  result[0x1]);

}
// .method public getOffset(JZ[I)V
void android::icu::util::TimeZone::getOffset(long long cVar2,bool local,std::shared_ptr<int[]> offsets)
{
	
	int cVar0;
	int cVar1;
	long long cVar2;
	std::shared<std::vector<int[]>> fields;
	int pass;
	
	//    .param p1, "date"    # J
	//    .param p3, "local"    # Z
	//    .param p4, "offsets"    # [I
	cVar0 = 0x1;
	cVar1 = 0x0;
	offsets[cVar1] = this->getRawOffset();
	if ( local )     
		goto label_cond_e;
	cVar2 = (cVar2 +  (long long)(offsets[cVar1]));
label_cond_e:
	fields = std::make_shared<std::vector<int[]>>(0x6);
	//    .local v7, "fields":[I
	pass = 0x0;
	//    .local v8, "pass":I
label_goto_12:
	android::icu::impl::Grego::timeToFields(cVar2, fields);
	offsets[cVar0] = (this->getOffset(cVar0, fields[cVar1], fields[cVar0], fields[0x2], fields[0x3], fields[0x5]) -  offsets[cVar1]);
	if ( pass )     
		goto label_cond_36;
	if ( ( local ^ 0x1) )     
		goto label_cond_36;
	if ( offsets[cVar0] )     
		goto label_cond_37;
label_cond_36:
	return;
	// 2221    .line 324
label_cond_37:
	cVar2 = (cVar2 -  (long long)(offsets[cVar0]));
	pass = ( pass + 0x1);
	goto label_goto_12;

}
// .method public hasSameRules(Landroid/icu/util/TimeZone;)Z
bool android::icu::util::TimeZone::hasSameRules(std::shared_ptr<android::icu::util::TimeZone> other)
{
	
	bool cVar1;
	
	//    .param p1, "other"    # Landroid/icu/util/TimeZone;
	cVar1 = 0x0;
	if ( !(other) )  
		goto label_cond_18;
	if ( this->getRawOffset() != other->getRawOffset() )
		goto label_cond_18;
	if ( this->useDaylightTime() != other->useDaylightTime() )
		goto label_cond_18;
	cVar1 = 0x1;
label_cond_18:
	return cVar1;

}
// .method public hashCode()I
int android::icu::util::TimeZone::hashCode()
{
	
	return this->ID->hashCode();

}
// .method public isFrozen()Z
bool android::icu::util::TimeZone::isFrozen()
{
	
	return 0x0;

}
// .method public observesDaylightTime()Z
bool android::icu::util::TimeZone::observesDaylightTime()
{
	
	std::shared_ptr<java::util::Date> cVar0;
	bool cVar1;
	
	if ( this->useDaylightTime() )     
		goto label_cond_10;
	cVar0 = std::make_shared<java::util::Date>();
	cVar1 = this->inDaylightTime(cVar0);
label_goto_f:
	return cVar1;
label_cond_10:
	cVar1 = 0x1;
	goto label_goto_f;

}
// .method public setID(Ljava/lang/String;)V
void android::icu::util::TimeZone::setID(std::shared_ptr<java::lang::String> ID)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar1;
	
	//    .param p1, "ID"    # Ljava/lang/String;
	if ( ID )     
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 2347    .line 359
label_cond_8:
	if ( !(this->isFrozen()) )  
		goto label_cond_17;
	cVar1 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify a frozen TimeZone instance.")));
	// throw
	throw cVar1;
	// 2364    .line 362
label_cond_17:
	this->ID = ID;
	return;

}


