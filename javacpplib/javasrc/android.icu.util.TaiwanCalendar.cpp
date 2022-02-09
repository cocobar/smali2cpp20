// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\TaiwanCalendar.smali
#include "java2ctype.h"
#include "android.icu.util.GregorianCalendar.h"
#include "android.icu.util.TaiwanCalendar.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"
#include "java.util.Date.h"
#include "java.util.Locale.h"

static android::icu::util::TaiwanCalendar::BEFORE_MINGUO = 0x0;
static android::icu::util::TaiwanCalendar::GREGORIAN_EPOCH = 0x7b2;
static android::icu::util::TaiwanCalendar::MINGUO = 0x1;
static android::icu::util::TaiwanCalendar::Taiwan_ERA_START = 0x777;
static android::icu::util::TaiwanCalendar::serialVersionUID = 0x23d8ad9d780a23d7L;
// .method public constructor <init>()V
android::icu::util::TaiwanCalendar::TaiwanCalendar()
{
	
	// 024    invoke-direct {p0}, Landroid/icu/util/GregorianCalendar;-><init>()V
	return;

}
// .method public constructor <init>(III)V
android::icu::util::TaiwanCalendar::TaiwanCalendar(int year,int month,int date)
{
	
	//    .param p1, "year"    # I
	//    .param p2, "month"    # I
	//    .param p3, "date"    # I
	android::icu::util::GregorianCalendar::(year, month, date);
	return;

}
// .method public constructor <init>(IIIIII)V
android::icu::util::TaiwanCalendar::TaiwanCalendar(int year,int month,int date,int hour,int minute,int second)
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
android::icu::util::TaiwanCalendar::TaiwanCalendar(std::shared_ptr<android::icu::util::TimeZone> zone)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	android::icu::util::GregorianCalendar::(zone);
	return;

}
// .method public constructor <init>(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V
android::icu::util::TaiwanCalendar::TaiwanCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	android::icu::util::GregorianCalendar::(zone, locale);
	return;

}
// .method public constructor <init>(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V
android::icu::util::TaiwanCalendar::TaiwanCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<java::util::Locale> aLocale)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	//    .param p2, "aLocale"    # Ljava/util/Locale;
	android::icu::util::GregorianCalendar::(zone, aLocale);
	return;

}
// .method public constructor <init>(Landroid/icu/util/ULocale;)V
android::icu::util::TaiwanCalendar::TaiwanCalendar(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	android::icu::util::GregorianCalendar::(locale);
	return;

}
// .method public constructor <init>(Ljava/util/Date;)V
android::icu::util::TaiwanCalendar::TaiwanCalendar(std::shared_ptr<java::util::Date> date)
{
	
	//    .param p1, "date"    # Ljava/util/Date;
	// 117    invoke-direct {p0}, Landroid/icu/util/TaiwanCalendar;-><init>()V
	this->setTime(date);
	return;

}
// .method public constructor <init>(Ljava/util/Locale;)V
android::icu::util::TaiwanCalendar::TaiwanCalendar(std::shared_ptr<java::util::Locale> aLocale)
{
	
	//    .param p1, "aLocale"    # Ljava/util/Locale;
	android::icu::util::GregorianCalendar::(aLocale);
	return;

}
// .method public getType()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::TaiwanCalendar::getType()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("roc"));

}
// .method protected handleComputeFields(I)V
void android::icu::util::TaiwanCalendar::handleComputeFields(int julianDay)
{
	
	int cVar0;
	int cVar1;
	int y;
	
	//    .param p1, "julianDay"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	this->handleComputeFields(julianDay);
	y = ( this->internalGet(0x13) + -0x777);
	//    .local v0, "y":I
	if ( y <= 0 )
		goto label_cond_16;
	this->internalSet(cVar1, cVar0);
	this->internalSet(cVar0, y);
label_goto_15:
	return;
	// 185    .line 211
label_cond_16:
	this->internalSet(cVar1, cVar1);
	this->internalSet(cVar0, ( y - 0x1));
	goto label_goto_15;

}
// .method protected handleGetExtendedYear()I
int android::icu::util::TaiwanCalendar::handleGetExtendedYear()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int year;
	
	cVar0 = 0x0;
	cVar1 = 0x13;
	cVar2 = 0x1;
	year = 0x7b2;
	//    .local v1, "year":I
	if ( this->newerField(cVar1, cVar2) != cVar1 )
		goto label_cond_19;
	if ( this->newerField(cVar1, cVar0) != cVar1 )
		goto label_cond_19;
	year = this->internalGet(cVar1, 0x7b2);
label_goto_18:
	return year;
	// 236    .line 191
label_cond_19:
	//    .local v0, "era":I
	if ( this->internalGet(cVar0, cVar2) != cVar2 )
		goto label_cond_26;
	year = ( this->internalGet(cVar2, cVar2) + 0x777);
	goto label_goto_18;
	// 255    .line 195
label_cond_26:
	year = ( ( this->internalGet(cVar2, cVar2) - 0x1) + 0x777);
	goto label_goto_18;

}
// .method protected handleGetLimit(II)I
int android::icu::util::TaiwanCalendar::handleGetLimit(int field,int limitType)
{
	
	int cVar0;
	
	//    .param p1, "field"    # I
	//    .param p2, "limitType"    # I
	cVar0 = 0x1;
	if ( field )     
		goto label_cond_a;
	if ( !(limitType) )  
		goto label_cond_8;
	if ( limitType != cVar0 )
		goto label_cond_9;
label_cond_8:
	return 0x0;
	// 290    .line 226
label_cond_9:
	return cVar0;
	// 294    .line 229
label_cond_a:
	return this->handleGetLimit(field, limitType);

}


