// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\Calendar$PatternData.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUCache.h"
#include "android.icu.util.Calendar_S_PatternData.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.MissingResourceException.h"

// .method static synthetic -get0(Landroid/icu/util/Calendar$PatternData;)[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Calendar_S_PatternData::_get0(std::shared_ptr<android::icu::util::Calendar_S_PatternData> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/util/Calendar$PatternData;
	return _this->overrides;

}
// .method static synthetic -get1(Landroid/icu/util/Calendar$PatternData;)[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Calendar_S_PatternData::_get1(std::shared_ptr<android::icu::util::Calendar_S_PatternData> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/util/Calendar$PatternData;
	return _this->patterns;

}
// .method static synthetic -wrap0(Landroid/icu/util/Calendar;Landroid/icu/util/ULocale;)Landroid/icu/util/Calendar$PatternData;
std::shared_ptr<android::icu::util::Calendar_S_PatternData> android::icu::util::Calendar_S_PatternData::_wrap0(std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<android::icu::util::ULocale> loc)
{
	
	//    .param p0, "cal"    # Landroid/icu/util/Calendar;
	//    .param p1, "loc"    # Landroid/icu/util/ULocale;
	return android::icu::util::Calendar_S_PatternData::make(cal, loc);

}
// .method static synthetic -wrap1(Landroid/icu/util/ULocale;Ljava/lang/String;)Landroid/icu/util/Calendar$PatternData;
std::shared_ptr<android::icu::util::Calendar_S_PatternData> android::icu::util::Calendar_S_PatternData::_wrap1(std::shared_ptr<android::icu::util::ULocale> loc,std::shared_ptr<java::lang::String> calType)
{
	
	//    .param p0, "loc"    # Landroid/icu/util/ULocale;
	//    .param p1, "calType"    # Ljava/lang/String;
	return android::icu::util::Calendar_S_PatternData::make(loc, calType);

}
// .method static synthetic -wrap2(Landroid/icu/util/Calendar$PatternData;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Calendar_S_PatternData::_wrap2(std::shared_ptr<android::icu::util::Calendar_S_PatternData> _this,int dateStyle)
{
	
	//    .param p0, "-this"    # Landroid/icu/util/Calendar$PatternData;
	//    .param p1, "dateStyle"    # I
	return _this->getDateTimePattern(dateStyle);

}
// .method public constructor <init>([Ljava/lang/String;[Ljava/lang/String;)V
android::icu::util::Calendar_S_PatternData::Calendar_S_PatternData(std::shared_ptr<std::vector<java::lang::String>> patterns,std::shared_ptr<std::vector<java::lang::String>> overrides)
{
	
	//    .param p1, "patterns"    # [Ljava/lang/String;
	//    .param p2, "overrides"    # [Ljava/lang/String;
	// 090    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->patterns = patterns;
	this->overrides = overrides;
	return;

}
// .method private getDateTimePattern(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Calendar_S_PatternData::getDateTimePattern(int dateStyle)
{
	
	//    .param p1, "dateStyle"    # I
	//    .local v1, "glueIndex":I
	if ( this->patterns->size() <  0xd )
		goto label_cond_d;
label_cond_d:
	//    .local v0, "dateTimePattern":Ljava/lang/String;
	return this->patterns[0x8];

}
// .method private static make(Landroid/icu/util/Calendar;Landroid/icu/util/ULocale;)Landroid/icu/util/Calendar$PatternData;
std::shared_ptr<android::icu::util::Calendar_S_PatternData> android::icu::util::Calendar_S_PatternData::make(std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<android::icu::util::ULocale> loc)
{
	
	//    .param p0, "cal"    # Landroid/icu/util/Calendar;
	//    .param p1, "loc"    # Landroid/icu/util/ULocale;
	return android::icu::util::Calendar_S_PatternData::make(loc, cal->getType());

}
// .method private static make(Landroid/icu/util/ULocale;Ljava/lang/String;)Landroid/icu/util/Calendar$PatternData;
std::shared_ptr<android::icu::util::Calendar_S_PatternData> android::icu::util::Calendar_S_PatternData::make(std::shared_ptr<android::icu::util::ULocale> loc,std::shared_ptr<java::lang::String> calType)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::Object> key;
	std::shared_ptr<android::icu::util::Calendar_S_PatternData> patternData;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::Object> patternData;
	
	//    .param p0, "loc"    # Landroid/icu/util/ULocale;
	//    .param p1, "calType"    # Ljava/lang/String;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	key = cVar0->append(loc->getBaseName())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("+")))->append(calType)->toString();
	//    .local v1, "key":Ljava/lang/String;
	patternData = android::icu::util::Calendar::-get1({const[class].FS-Param})->get(key);
	patternData->checkCast("android::icu::util::Calendar_S_PatternData");
	//    .local v2, "patternData":Landroid/icu/util/Calendar$PatternData;
	if ( patternData )     
		goto label_cond_34;
	try {
	//label_try_start_29:
	//label_try_end_2c:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_35;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_29 .. :try_end_2c} :catch_35
	patternData = android::icu::util::Calendar::-wrap0(loc, calType);
label_goto_2d:
	android::icu::util::Calendar::-get1({const[class].FS-Param})->put(key, patternData);
label_cond_34:
	return patternData;
	// 225    .line 3557
label_catch_35:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/util/MissingResourceException;
	//    .end local v2    # "patternData":Landroid/icu/util/Calendar$PatternData;
	patternData = std::make_shared<android::icu::util::Calendar_S_PatternData>(android::icu::util::Calendar::-get0({const[class].FS-Param}), 0x0);
	//    .restart local v2    # "patternData":Landroid/icu/util/Calendar$PatternData;
	goto label_goto_2d;

}


