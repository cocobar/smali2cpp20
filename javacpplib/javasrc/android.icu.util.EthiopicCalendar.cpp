// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\EthiopicCalendar.smali
#include "java2ctype.h"
#include "android.icu.impl.CalendarUtil.h"
#include "android.icu.util.CECalendar.h"
#include "android.icu.util.EthiopicCalendar.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale_S_Category.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Date.h"
#include "java.util.Locale.h"

static android::icu::util::EthiopicCalendar::AMETE_ALEM = 0x0;
static android::icu::util::EthiopicCalendar::AMETE_ALEM_ERA = 0x1;
static android::icu::util::EthiopicCalendar::AMETE_MIHRET = 0x1;
static android::icu::util::EthiopicCalendar::AMETE_MIHRET_DELTA = 0x157c;
static android::icu::util::EthiopicCalendar::AMETE_MIHRET_ERA = 0x0;
static android::icu::util::EthiopicCalendar::GENBOT = 0x8;
static android::icu::util::EthiopicCalendar::HAMLE = 0xa;
static android::icu::util::EthiopicCalendar::HEDAR = 0x2;
static android::icu::util::EthiopicCalendar::JD_EPOCH_OFFSET_AMETE_MIHRET = 0x1a4dd0;
static android::icu::util::EthiopicCalendar::MEGABIT = 0x6;
static android::icu::util::EthiopicCalendar::MESKEREM = 0x0;
static android::icu::util::EthiopicCalendar::MIAZIA = 0x7;
static android::icu::util::EthiopicCalendar::NEHASSE = 0xb;
static android::icu::util::EthiopicCalendar::PAGUMEN = 0xc;
static android::icu::util::EthiopicCalendar::SENE = 0x9;
static android::icu::util::EthiopicCalendar::TAHSAS = 0x3;
static android::icu::util::EthiopicCalendar::TEKEMT = 0x1;
static android::icu::util::EthiopicCalendar::TER = 0x4;
static android::icu::util::EthiopicCalendar::YEKATIT = 0x5;
static android::icu::util::EthiopicCalendar::serialVersionUID = -0x21d746fbfcf8d998L;
// .method public constructor <init>()V
android::icu::util::EthiopicCalendar::EthiopicCalendar()
{
	
	android::icu::util::EthiopicCalendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));
	return;

}
// .method public constructor <init>(III)V
android::icu::util::EthiopicCalendar::EthiopicCalendar(int year,int month,int date)
{
	
	//    .param p1, "year"    # I
	//    .param p2, "month"    # I
	//    .param p3, "date"    # I
	android::icu::util::CECalendar::(year, month, date);
	this->eraType = 0x0;
	return;

}
// .method public constructor <init>(IIIIII)V
android::icu::util::EthiopicCalendar::EthiopicCalendar(int year,int month,int date,int hour,int minute,int second)
{
	
	//    .param p1, "year"    # I
	//    .param p2, "month"    # I
	//    .param p3, "date"    # I
	//    .param p4, "hour"    # I
	//    .param p5, "minute"    # I
	//    .param p6, "second"    # I
	android::icu::util::CECalendar::(year, month, date, hour, minute, second);
	this->eraType = 0x0;
	return;

}
// .method public constructor <init>(Landroid/icu/util/TimeZone;)V
android::icu::util::EthiopicCalendar::EthiopicCalendar(std::shared_ptr<android::icu::util::TimeZone> zone)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	android::icu::util::EthiopicCalendar::(zone, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));
	return;

}
// .method public constructor <init>(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V
android::icu::util::EthiopicCalendar::EthiopicCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	android::icu::util::CECalendar::(zone, locale);
	this->eraType = 0x0;
	this->setCalcTypeForLocale(locale);
	return;

}
// .method public constructor <init>(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V
android::icu::util::EthiopicCalendar::EthiopicCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<java::util::Locale> aLocale)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	//    .param p2, "aLocale"    # Ljava/util/Locale;
	android::icu::util::EthiopicCalendar::(zone, android::icu::util::ULocale::forLocale(aLocale));
	return;

}
// .method public constructor <init>(Landroid/icu/util/ULocale;)V
android::icu::util::EthiopicCalendar::EthiopicCalendar(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	android::icu::util::EthiopicCalendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), locale);
	return;

}
// .method public constructor <init>(Ljava/util/Date;)V
android::icu::util::EthiopicCalendar::EthiopicCalendar(std::shared_ptr<java::util::Date> date)
{
	
	//    .param p1, "date"    # Ljava/util/Date;
	android::icu::util::CECalendar::(date);
	this->eraType = 0x0;
	return;

}
// .method public constructor <init>(Ljava/util/Locale;)V
android::icu::util::EthiopicCalendar::EthiopicCalendar(std::shared_ptr<java::util::Locale> aLocale)
{
	
	//    .param p1, "aLocale"    # Ljava/util/Locale;
	android::icu::util::EthiopicCalendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), aLocale);
	return;

}
// .method public static EthiopicToJD(JII)I
int android::icu::util::EthiopicCalendar::EthiopicToJD(long long year,int month,int date)
{
	
	//    .param p0, "year"    # J
	//    .param p2, "month"    # I
	//    .param p3, "date"    # I
	return android::icu::util::EthiopicCalendar::ceToJD(year, month, date, 0x1a4dd0);

}
// .method private setCalcTypeForLocale(Landroid/icu/util/ULocale;)V
void android::icu::util::EthiopicCalendar::setCalcTypeForLocale(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .local v0, "localeCalType":Ljava/lang/String;
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("ethiopic-amete-alem"))->equals(android::icu::impl::CalendarUtil::getCalendarType(locale))) )  
		goto label_cond_12;
	this->setAmeteAlemEra(0x1);
label_goto_11:
	return;
	// 266    .line 380
label_cond_12:
	this->setAmeteAlemEra(0x0);
	goto label_goto_11;

}
// .method protected getJDEpochOffset()I
int android::icu::util::EthiopicCalendar::getJDEpochOffset()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 280    .end annotation
	return 0x1a4dd0;

}
// .method public getType()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::EthiopicCalendar::getType()
{
	
	if ( !(this->isAmeteAlemEra()) )  
		goto label_cond_a;
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("ethiopic-amete-alem"));
	// 305    .line 248
label_cond_a:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("ethiopic"));

}
// .method protected handleComputeFields(I)V
void android::icu::util::EthiopicCalendar::handleComputeFields(int julianDay)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared<std::vector<int[]>> fields;
	
	//    .param p1, "julianDay"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 316    .end annotation
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	fields = std::make_shared<std::vector<int[]>>(0x3);
	//    .local v1, "fields":[I
	android::icu::util::EthiopicCalendar::jdToCE(julianDay, this->getJDEpochOffset(), fields);
	if ( !(this->isAmeteAlemEra()) )  
		goto label_cond_3c;
	//    .local v0, "era":I
	//    .local v2, "year":I
label_goto_18:
	this->internalSet(0x13, fields[cVar2]);
	this->internalSet(cVar2, era);
	this->internalSet(cVar1, year);
	this->internalSet(cVar0, fields[cVar1]);
	this->internalSet(0x5, fields[cVar0]);
	this->internalSet(0x6, (( fields[cVar1] * 0x1e) +  fields[cVar0]));
	return;
	// 397    .line 315
	// 398    .end local v0    # "era":I
	// 399    .end local v2    # "year":I
label_cond_3c:
	if ( fields[cVar2] <= 0 )
		goto label_cond_44;
	//    .restart local v0    # "era":I
	//    .restart local v2    # "year":I
	goto label_goto_18;
	// 415    .line 319
	// 416    .end local v0    # "era":I
	// 417    .end local v2    # "year":I
label_cond_44:
	//    .restart local v0    # "era":I
	//    .restart local v2    # "year":I
	goto label_goto_18;

}
// .method protected handleGetExtendedYear()I
int android::icu::util::EthiopicCalendar::handleGetExtendedYear()
{
	
	int cVar0;
	int cVar1;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 434    .end annotation
	cVar0 = 0x13;
	cVar1 = 0x1;
	if ( this->newerField(cVar0, cVar1) != cVar0 )
		goto label_cond_e;
	//    .local v1, "eyear":I
label_goto_d:
	return eyear;
	// 458    .line 281
	// 459    .end local v1    # "eyear":I
label_cond_e:
	if ( !(this->isAmeteAlemEra()) )  
		goto label_cond_1d;
	//    .restart local v1    # "eyear":I
	goto label_goto_d;
	// 479    .line 286
	// 480    .end local v1    # "eyear":I
label_cond_1d:
	//    .local v0, "era":I
	if ( this->internalGet(0x0, cVar1) != cVar1 )
		goto label_cond_29;
	//    .restart local v1    # "eyear":I
	goto label_goto_d;
	// 500    .line 290
	// 501    .end local v1    # "eyear":I
label_cond_29:
	//    .restart local v1    # "eyear":I
	goto label_goto_d;

}
// .method protected handleGetLimit(II)I
int android::icu::util::EthiopicCalendar::handleGetLimit(int field,int limitType)
{
	
	//    .param p1, "field"    # I
	//    .param p2, "limitType"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 518    .end annotation
	if ( !(this->isAmeteAlemEra()) )  
		goto label_cond_a;
	if ( field )     
		goto label_cond_a;
	return 0x0;
	// 535    .line 342
label_cond_a:
	return this->handleGetLimit(field, limitType);

}
// .method public isAmeteAlemEra()Z
bool android::icu::util::EthiopicCalendar::isAmeteAlemEra()
{
	
	bool cVar0;
	
	cVar0 = 0x1;
	if ( this->eraType != cVar0 )
		goto label_cond_6;
label_goto_5:
	return cVar0;
label_cond_6:
	cVar0 = 0x0;
	goto label_goto_5;

}
// .method public setAmeteAlemEra(Z)V
void android::icu::util::EthiopicCalendar::setAmeteAlemEra(bool onOff)
{
	
	int cVar0;
	
	//    .param p1, "onOff"    # Z
	if ( !(onOff) )  
		goto label_cond_6;
	cVar0 = 0x1;
label_goto_3:
	this->eraType = cVar0;
	return;
	// 580    .line 257
label_cond_6:
	cVar0 = 0x0;
	goto label_goto_3;

}


