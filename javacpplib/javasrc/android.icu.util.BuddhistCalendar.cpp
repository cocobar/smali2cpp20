// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\BuddhistCalendar.smali
#include "java2ctype.h"
#include "android.icu.util.BuddhistCalendar.h"
#include "android.icu.util.GregorianCalendar.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"
#include "java.util.Date.h"
#include "java.util.Locale.h"

static android::icu::util::BuddhistCalendar::BE = 0x0;
static android::icu::util::BuddhistCalendar::BUDDHIST_ERA_START = -0x21f;
static android::icu::util::BuddhistCalendar::GREGORIAN_EPOCH = 0x7b2;
static android::icu::util::BuddhistCalendar::serialVersionUID = 0x23d8ad9d780a23d7L;
// .method public constructor <init>()V
android::icu::util::BuddhistCalendar::BuddhistCalendar()
{
	
	// 022    invoke-direct {p0}, Landroid/icu/util/GregorianCalendar;-><init>()V
	return;

}
// .method public constructor <init>(III)V
android::icu::util::BuddhistCalendar::BuddhistCalendar(int year,int month,int date)
{
	
	//    .param p1, "year"    # I
	//    .param p2, "month"    # I
	//    .param p3, "date"    # I
	android::icu::util::GregorianCalendar::(year, month, date);
	return;

}
// .method public constructor <init>(IIIIII)V
android::icu::util::BuddhistCalendar::BuddhistCalendar(int year,int month,int date,int hour,int minute,int second)
{
	
	//    .param p1, "year"    # I
	//    .param p2, "month"    # I
	//    .param p3, "date"    # I
	//    .param p4, "hour"    # I
	//    .param p5, "minute"    # I
	//    .param p6, "second"    # I
	android::icu::util::GregorianCalendar::(year, month, date, hour, minute, second);
	return;

}
// .method public constructor <init>(Landroid/icu/util/TimeZone;)V
android::icu::util::BuddhistCalendar::BuddhistCalendar(std::shared_ptr<android::icu::util::TimeZone> zone)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	android::icu::util::GregorianCalendar::(zone);
	return;

}
// .method public constructor <init>(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V
android::icu::util::BuddhistCalendar::BuddhistCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	android::icu::util::GregorianCalendar::(zone, locale);
	return;

}
// .method public constructor <init>(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V
android::icu::util::BuddhistCalendar::BuddhistCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<java::util::Locale> aLocale)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	//    .param p2, "aLocale"    # Ljava/util/Locale;
	android::icu::util::GregorianCalendar::(zone, aLocale);
	return;

}
// .method public constructor <init>(Landroid/icu/util/ULocale;)V
android::icu::util::BuddhistCalendar::BuddhistCalendar(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	android::icu::util::GregorianCalendar::(locale);
	return;

}
// .method public constructor <init>(Ljava/util/Date;)V
android::icu::util::BuddhistCalendar::BuddhistCalendar(std::shared_ptr<java::util::Date> date)
{
	
	//    .param p1, "date"    # Ljava/util/Date;
	// 115    invoke-direct {p0}, Landroid/icu/util/BuddhistCalendar;-><init>()V
	this->setTime(date);
	return;

}
// .method public constructor <init>(Ljava/util/Locale;)V
android::icu::util::BuddhistCalendar::BuddhistCalendar(std::shared_ptr<java::util::Locale> aLocale)
{
	
	//    .param p1, "aLocale"    # Ljava/util/Locale;
	android::icu::util::GregorianCalendar::(aLocale);
	return;

}
// .method public getType()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::BuddhistCalendar::getType()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("buddhist"));

}
// .method protected handleComputeFields(I)V
void android::icu::util::BuddhistCalendar::handleComputeFields(int julianDay)
{
	
	int cVar0;
	
	//    .param p1, "julianDay"    # I
	cVar0 = 0x0;
	this->handleComputeFields(julianDay);
	//    .local v0, "y":I
	this->internalSet(cVar0, cVar0);
	this->internalSet(0x1, ( this->internalGet(0x13) + 0x21f));
	return;

}
// .method protected handleComputeMonthStart(IIZ)I
int android::icu::util::BuddhistCalendar::handleComputeMonthStart(int eyear,int month,bool useMonth)
{
	
	//    .param p1, "eyear"    # I
	//    .param p2, "month"    # I
	//    .param p3, "useMonth"    # Z
	return this->handleComputeMonthStart(eyear, month, useMonth);

}
// .method protected handleGetExtendedYear()I
int android::icu::util::BuddhistCalendar::handleGetExtendedYear()
{
	
	int cVar0;
	int cVar1;
	
	cVar0 = 0x1;
	cVar1 = 0x13;
	if ( this->newerField(cVar1, cVar0) != cVar1 )
		goto label_cond_10;
	//    .local v0, "year":I
label_goto_f:
	return year;
	// 222    .line 192
	// 223    .end local v0    # "year":I
label_cond_10:
	//    .restart local v0    # "year":I
	goto label_goto_f;

}
// .method protected handleGetLimit(II)I
int android::icu::util::BuddhistCalendar::handleGetLimit(int field,int limitType)
{
	
	//    .param p1, "field"    # I
	//    .param p2, "limitType"    # I
	if ( field )     
		goto label_cond_4;
	return 0x0;
	// 251    .line 223
label_cond_4:
	return this->handleGetLimit(field, limitType);

}


