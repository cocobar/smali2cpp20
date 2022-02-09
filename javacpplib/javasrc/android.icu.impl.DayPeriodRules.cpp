// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\DayPeriodRules.smali
#include "java2ctype.h"
#include "android.icu.impl.DayPeriodRules_S_DayPeriod.h"
#include "android.icu.impl.DayPeriodRules_S_DayPeriodRulesCountSink.h"
#include "android.icu.impl.DayPeriodRules_S_DayPeriodRulesData.h"
#include "android.icu.impl.DayPeriodRules_S_DayPeriodRulesDataSink.h"
#include "android.icu.impl.DayPeriodRules.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.util.ICUException.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Map.h"

static android::icu::impl::DayPeriodRules::DATA;
// .method static synthetic -get0(Landroid/icu/impl/DayPeriodRules;)[Landroid/icu/impl/DayPeriodRules$DayPeriod;
std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> android::icu::impl::DayPeriodRules::_get0(std::shared_ptr<android::icu::impl::DayPeriodRules> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/DayPeriodRules;
	return _this->dayPeriodForHour;

}
// .method static synthetic -set0(Landroid/icu/impl/DayPeriodRules;Z)Z
bool android::icu::impl::DayPeriodRules::_set0(std::shared_ptr<android::icu::impl::DayPeriodRules> _this,bool _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/DayPeriodRules;
	//    .param p1, "-value"    # Z
	_this->hasMidnight = _value;
	return _value;

}
// .method static synthetic -set1(Landroid/icu/impl/DayPeriodRules;Z)Z
bool android::icu::impl::DayPeriodRules::_set1(std::shared_ptr<android::icu::impl::DayPeriodRules> _this,bool _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/DayPeriodRules;
	//    .param p1, "-value"    # Z
	_this->hasNoon = _value;
	return _value;

}
// .method static synthetic -wrap0(Ljava/lang/String;)I
int android::icu::impl::DayPeriodRules::_wrap0(std::shared_ptr<java::lang::String> setNumStr)
{
	
	//    .param p0, "setNumStr"    # Ljava/lang/String;
	return android::icu::impl::DayPeriodRules::parseSetNum(setNumStr);

}
// .method static synthetic -wrap1(Landroid/icu/impl/DayPeriodRules;IILandroid/icu/impl/DayPeriodRules$DayPeriod;)V
void android::icu::impl::DayPeriodRules::_wrap1(std::shared_ptr<android::icu::impl::DayPeriodRules> _this,int startHour,int limitHour,std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> period)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/DayPeriodRules;
	//    .param p1, "startHour"    # I
	//    .param p2, "limitHour"    # I
	//    .param p3, "period"    # Landroid/icu/impl/DayPeriodRules$DayPeriod;
	_this->add(startHour, limitHour, period);
	return;

}
// .method static constructor <clinit>()V
void android::icu::impl::DayPeriodRules::static_cinit()
{
	
	android::icu::impl::DayPeriodRules::DATA = android::icu::impl::DayPeriodRules::loadData({const[class].FS-Param});
	return;

}
// .method private constructor <init>()V
android::icu::impl::DayPeriodRules::DayPeriodRules()
{
	
	bool cVar0;
	
	cVar0 = 0x0;
	// 110    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->hasMidnight = cVar0;
	this->hasNoon = cVar0;
	this->dayPeriodForHour = std::make_shared<std::vector<std::vector<android::icu::impl::DayPeriodRules_S_DayPeriod>>>(0x18);
	return;

}
// .method synthetic constructor <init>(Landroid/icu/impl/DayPeriodRules;)V
android::icu::impl::DayPeriodRules::DayPeriodRules(std::shared_ptr<android::icu::impl::DayPeriodRules> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/impl/DayPeriodRules;
	// 134    invoke-direct {p0}, Landroid/icu/impl/DayPeriodRules;-><init>()V
	return;

}
// .method private add(IILandroid/icu/impl/DayPeriodRules$DayPeriod;)V
void android::icu::impl::DayPeriodRules::add(int startHour,int limitHour,std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> period)
{
	
	int i;
	
	//    .param p1, "startHour"    # I
	//    .param p2, "limitHour"    # I
	//    .param p3, "period"    # Landroid/icu/impl/DayPeriodRules$DayPeriod;
	i = startHour;
	//    .local v0, "i":I
label_goto_1:
	if ( i == limitHour )
		goto label_cond_f;
	if ( i != 0x18 )
		goto label_cond_8;
	i = 0x0;
label_cond_8:
	this->dayPeriodForHour[i] = period;
	i = ( i + 0x1);
	goto label_goto_1;
	// 171    .line 368
label_cond_f:
	return;

}
// .method private getEndHourForDayPeriod(Landroid/icu/impl/DayPeriodRules$DayPeriod;)I
int android::icu::impl::DayPeriodRules::getEndHourForDayPeriod(std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> dayPeriod)
{
	
	int cVar0;
	int i;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	
	//    .param p1, "dayPeriod"    # Landroid/icu/impl/DayPeriodRules$DayPeriod;
	cVar0 = 0x0;
	if ( dayPeriod != android::icu::impl::DayPeriodRules_S_DayPeriod::MIDNIGHT )
		goto label_cond_6;
	return cVar0;
	// 190    .line 335
label_cond_6:
	if ( dayPeriod != android::icu::impl::DayPeriodRules_S_DayPeriod::NOON )
		goto label_cond_d;
	return 0xc;
	// 200    .line 337
label_cond_d:
	if ( this->dayPeriodForHour[cVar0] != dayPeriod )
		goto label_cond_2a;
	if ( this->dayPeriodForHour[0x17] != dayPeriod )
		goto label_cond_2a;
	i = 0x1;
	//    .local v0, "i":I
label_goto_1c:
	if ( i >  0x16 )
		goto label_cond_3a;
	if ( this->dayPeriodForHour[i] == dayPeriod )
		goto label_cond_27;
	return i;
	// 235    .line 339
label_cond_27:
	i = ( i + 0x1);
	goto label_goto_1c;
	// 241    .line 346
	// 242    .end local v0    # "i":I
label_cond_2a:
	i = 0x17;
	//    .restart local v0    # "i":I
label_goto_2c:
	if ( i < 0 ) 
		goto label_cond_3a;
	if ( this->dayPeriodForHour[i] != dayPeriod )
		goto label_cond_37;
	return ( i + 0x1);
	// 262    .line 346
label_cond_37:
	i = ( i + -0x1);
	goto label_goto_2c;
	// 268    .line 354
label_cond_3a:
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar1;

}
// .method public static getInstance(Landroid/icu/util/ULocale;)Landroid/icu/impl/DayPeriodRules;
std::shared_ptr<android::icu::impl::DayPeriodRules> android::icu::impl::DayPeriodRules::getInstance(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<java::lang::String> localeCode;
	int cVar0;
	std::shared_ptr<java::lang::Object> localeCode;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .local v0, "localeCode":Ljava/lang/String;
	if ( !(locale->getName()->isEmpty()) )  
		goto label_cond_e;
	localeCode = std::make_shared<java::lang::String>(std::make_shared<char[]>("root"));
label_cond_e:
	cVar0 = 0x0;
label_cond_f:
	if ( cVar0 )     
		goto label_cond_27;
	cVar0 = android::icu::impl::DayPeriodRules::DATA->localesToRuleSetNumMap->get(localeCode);
	cVar0->checkCast("java::lang::Integer");
	//    .local v1, "ruleSetNum":Ljava/lang/Integer;
	if ( cVar0 )     
		goto label_cond_27;
	localeCode = android::icu::util::ULocale::getFallback(localeCode);
	if ( !(localeCode->isEmpty()) )  
		goto label_cond_f;
	//    .end local v1    # "ruleSetNum":Ljava/lang/Integer;
label_cond_27:
	if ( !(cVar0) )  
		goto label_cond_35;
	if ( android::icu::impl::DayPeriodRules::DATA->rules[cVar0->intValue()] )     
		goto label_cond_36;
label_cond_35:
	return 0x0;
	// 355    .line 271
label_cond_36:
	return android::icu::impl::DayPeriodRules::DATA->rules[cVar0->intValue()];

}
// .method private getStartHourForDayPeriod(Landroid/icu/impl/DayPeriodRules$DayPeriod;)I
int android::icu::impl::DayPeriodRules::getStartHourForDayPeriod(std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> dayPeriod)
{
	
	int cVar0;
	int cVar1;
	int i;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	
	//    .param p1, "dayPeriod"    # Landroid/icu/impl/DayPeriodRules$DayPeriod;
	//    .annotation system Ldalvik/annotation/Throws;
	// 374        value = {
	// 375            Ljava/lang/IllegalArgumentException;
	// 376        }
	// 377    .end annotation
	cVar0 = 0x17;
	cVar1 = 0x0;
	if ( dayPeriod != android::icu::impl::DayPeriodRules_S_DayPeriod::MIDNIGHT )
		goto label_cond_8;
	return cVar1;
	// 391    .line 312
label_cond_8:
	if ( dayPeriod != android::icu::impl::DayPeriodRules_S_DayPeriod::NOON )
		goto label_cond_f;
	return 0xc;
	// 401    .line 314
label_cond_f:
	if ( this->dayPeriodForHour[cVar1] != dayPeriod )
		goto label_cond_2c;
	if ( this->dayPeriodForHour[cVar0] != dayPeriod )
		goto label_cond_2c;
	i = 0x16;
	//    .local v0, "i":I
label_goto_1d:
	if ( i <  0x1 )
		goto label_cond_39;
	if ( this->dayPeriodForHour[i] == dayPeriod )
		goto label_cond_29;
	return ( i + 0x1);
	// 436    .line 316
label_cond_29:
	i = ( i + -0x1);
	goto label_goto_1d;
	// 442    .line 322
	// 443    .end local v0    # "i":I
label_cond_2c:
	i = 0x0;
	//    .restart local v0    # "i":I
label_goto_2d:
	if ( i >  cVar0 )
		goto label_cond_39;
	if ( this->dayPeriodForHour[i] != dayPeriod )
		goto label_cond_36;
	return i;
	// 461    .line 322
label_cond_36:
	i = ( i + 0x1);
	goto label_goto_2d;
	// 467    .line 330
label_cond_39:
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar2;

}
// .method private static loadData()Landroid/icu/impl/DayPeriodRules$DayPeriodRulesData;
std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriodRulesData> android::icu::impl::DayPeriodRules::loadData()
{
	
	std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriodRulesData> cVar0;
	std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriodRulesData> data;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> rb;
	std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriodRulesCountSink> countSink;
	std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriodRulesDataSink> sink;
	
	cVar0 = 0x0;
	data = std::make_shared<android::icu::impl::DayPeriodRules_S_DayPeriodRulesData>(cVar0);
	//    .local v1, "data":Landroid/icu/impl/DayPeriodRules$DayPeriodRulesData;
	rb = android::icu::impl::ICUResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), std::make_shared<java::lang::String>(std::make_shared<char[]>("dayPeriods")), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER, 0x1);
	//    .local v2, "rb":Landroid/icu/impl/ICUResourceBundle;
	countSink = std::make_shared<android::icu::impl::DayPeriodRules_S_DayPeriodRulesCountSink>(data, cVar0);
	//    .local v0, "countSink":Landroid/icu/impl/DayPeriodRules$DayPeriodRulesCountSink;
	rb->getAllItemsWithFallback(std::make_shared<java::lang::String>(std::make_shared<char[]>("rules")), countSink);
	data->rules = std::make_shared<std::vector<std::vector<android::icu::impl::DayPeriodRules>>>(( data->maxRuleSetNum + 0x1));
	sink = std::make_shared<android::icu::impl::DayPeriodRules_S_DayPeriodRulesDataSink>(data, cVar0);
	//    .local v3, "sink":Landroid/icu/impl/DayPeriodRules$DayPeriodRulesDataSink;
	rb->getAllItemsWithFallback(std::make_shared<java::lang::String>(std::make_shared<char[]>("")), sink);
	return data;

}
// .method private static parseSetNum(Ljava/lang/String;)I
int android::icu::impl::DayPeriodRules::parseSetNum(std::shared_ptr<java::lang::String> setNumStr)
{
	
	std::shared_ptr<android::icu::util::ICUException> cVar0;
	
	//    .param p0, "setNumStr"    # Ljava/lang/String;
	if ( setNumStr->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("set"))) )     
		goto label_cond_12;
	cVar0 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Set number should start with \")));
	// throw
	throw cVar0;
	// 564    .line 375
label_cond_12:
	//    .local v0, "numStr":Ljava/lang/String;
	return java::lang::Integer::parseInt(setNumStr->substring(0x3));

}
// .method public getDayPeriodForHour(I)Landroid/icu/impl/DayPeriodRules$DayPeriod;
std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> android::icu::impl::DayPeriodRules::getDayPeriodForHour(int hour)
{
	
	//    .param p1, "hour"    # I
	return this->dayPeriodForHour[hour];

}
// .method public getMidPointForDayPeriod(Landroid/icu/impl/DayPeriodRules$DayPeriod;)D
double android::icu::impl::DayPeriodRules::getMidPointForDayPeriod(std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriod> dayPeriod)
{
	
	double cVar0;
	int startHour;
	int endHour;
	double midPoint;
	
	//    .param p1, "dayPeriod"    # Landroid/icu/impl/DayPeriodRules$DayPeriod;
	cVar0 = 0x4038000000000000L;
	startHour = this->getStartHourForDayPeriod(dayPeriod);
	//    .local v1, "startHour":I
	endHour = this->getEndHourForDayPeriod(dayPeriod);
	//    .local v0, "endHour":I
	midPoint = ((double)((startHour + endHour)) /  0x4000000000000000L);
	//    .local v2, "midPoint":D
	if ( startHour <= endHour )
		goto label_cond_1b;
	midPoint = ( midPoint + 0x4028000000000000L);
	if ( (midPoint < cVar0) < 0 ) 
		goto label_cond_1b;
label_cond_1b:
	return midPoint;

}
// .method public hasMidnight()Z
bool android::icu::impl::DayPeriodRules::hasMidnight()
{
	
	return this->hasMidnight;

}
// .method public hasNoon()Z
bool android::icu::impl::DayPeriodRules::hasNoon()
{
	
	return this->hasNoon;

}


