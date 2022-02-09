// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\CopticCalendar.smali
#include "java2ctype.h"
#include "android.icu.util.CECalendar.h"
#include "android.icu.util.CopticCalendar.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"
#include "java.util.Date.h"
#include "java.util.Locale.h"

static android::icu::util::CopticCalendar::AMSHIR = 0x5;
static android::icu::util::CopticCalendar::BABA = 0x1;
static android::icu::util::CopticCalendar::BARAMHAT = 0x6;
static android::icu::util::CopticCalendar::BARAMOUDA = 0x7;
static android::icu::util::CopticCalendar::BASHANS = 0x8;
static android::icu::util::CopticCalendar::BCE = 0x0;
static android::icu::util::CopticCalendar::CE = 0x1;
static android::icu::util::CopticCalendar::EPEP = 0xa;
static android::icu::util::CopticCalendar::HATOR = 0x2;
static android::icu::util::CopticCalendar::JD_EPOCH_OFFSET = 0x1bd799;
static android::icu::util::CopticCalendar::KIAHK = 0x3;
static android::icu::util::CopticCalendar::MESRA = 0xb;
static android::icu::util::CopticCalendar::NASIE = 0xc;
static android::icu::util::CopticCalendar::PAONA = 0x9;
static android::icu::util::CopticCalendar::TOBA = 0x4;
static android::icu::util::CopticCalendar::TOUT = 0x0;
static android::icu::util::CopticCalendar::serialVersionUID = 0x51ee93e0021d7b7fL;
// .method public constructor <init>()V
android::icu::util::CopticCalendar::CopticCalendar()
{
	
	// 048    invoke-direct {p0}, Landroid/icu/util/CECalendar;-><init>()V
	return;

}
// .method public constructor <init>(III)V
android::icu::util::CopticCalendar::CopticCalendar(int year,int month,int date)
{
	
	//    .param p1, "year"    # I
	//    .param p2, "month"    # I
	//    .param p3, "date"    # I
	android::icu::util::CECalendar::(year, month, date);
	return;

}
// .method public constructor <init>(IIIIII)V
android::icu::util::CopticCalendar::CopticCalendar(int year,int month,int date,int hour,int minute,int second)
{
	
	//    .param p1, "year"    # I
	//    .param p2, "month"    # I
	//    .param p3, "date"    # I
	//    .param p4, "hour"    # I
	//    .param p5, "minute"    # I
	//    .param p6, "second"    # I
	android::icu::util::CECalendar::(year, month, date, hour, minute, second);
	return;

}
// .method public constructor <init>(Landroid/icu/util/TimeZone;)V
android::icu::util::CopticCalendar::CopticCalendar(std::shared_ptr<android::icu::util::TimeZone> zone)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	android::icu::util::CECalendar::(zone);
	return;

}
// .method public constructor <init>(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V
android::icu::util::CopticCalendar::CopticCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	android::icu::util::CECalendar::(zone, locale);
	return;

}
// .method public constructor <init>(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V
android::icu::util::CopticCalendar::CopticCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<java::util::Locale> aLocale)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	//    .param p2, "aLocale"    # Ljava/util/Locale;
	android::icu::util::CECalendar::(zone, aLocale);
	return;

}
// .method public constructor <init>(Landroid/icu/util/ULocale;)V
android::icu::util::CopticCalendar::CopticCalendar(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	android::icu::util::CECalendar::(locale);
	return;

}
// .method public constructor <init>(Ljava/util/Date;)V
android::icu::util::CopticCalendar::CopticCalendar(std::shared_ptr<java::util::Date> date)
{
	
	//    .param p1, "date"    # Ljava/util/Date;
	android::icu::util::CECalendar::(date);
	return;

}
// .method public constructor <init>(Ljava/util/Locale;)V
android::icu::util::CopticCalendar::CopticCalendar(std::shared_ptr<java::util::Locale> aLocale)
{
	
	//    .param p1, "aLocale"    # Ljava/util/Locale;
	android::icu::util::CECalendar::(aLocale);
	return;

}
// .method public static copticToJD(JII)I
int android::icu::util::CopticCalendar::copticToJD(long long year,int month,int date)
{
	
	//    .param p0, "year"    # J
	//    .param p2, "month"    # I
	//    .param p3, "date"    # I
	return android::icu::util::CopticCalendar::ceToJD(year, month, date, 0x1bd799);

}
// .method protected getJDEpochOffset()I
int android::icu::util::CopticCalendar::getJDEpochOffset()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 181    .end annotation
	return 0x1bd799;

}
// .method public getType()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::CopticCalendar::getType()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("coptic"));

}
// .method protected handleComputeFields(I)V
void android::icu::util::CopticCalendar::handleComputeFields(int julianDay)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared<std::vector<int[]>> fields;
	
	//    .param p1, "julianDay"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 204    .end annotation
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	fields = std::make_shared<std::vector<int[]>>(0x3);
	//    .local v1, "fields":[I
	android::icu::util::CopticCalendar::jdToCE(julianDay, this->getJDEpochOffset(), fields);
	if ( fields[cVar2] > 0 ) 
		goto label_cond_3a;
	//    .local v0, "era":I
	//    .local v2, "year":I
label_goto_16:
	this->internalSet(0x13, fields[cVar2]);
	this->internalSet(cVar2, era);
	this->internalSet(cVar1, year);
	this->internalSet(cVar0, fields[cVar1]);
	this->internalSet(0x5, fields[cVar0]);
	this->internalSet(0x6, (( fields[cVar1] * 0x1e) +  fields[cVar0]));
	return;
	// 283    .line 264
	// 284    .end local v0    # "era":I
	// 285    .end local v2    # "year":I
label_cond_3a:
	//    .restart local v0    # "era":I
	//    .restart local v2    # "year":I
	goto label_goto_16;

}
// .method protected handleGetExtendedYear()I
int android::icu::util::CopticCalendar::handleGetExtendedYear()
{
	
	int cVar0;
	int cVar1;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 300    .end annotation
	cVar0 = 0x13;
	cVar1 = 0x1;
	if ( this->newerField(cVar0, cVar1) != cVar0 )
		goto label_cond_f;
	//    .local v1, "eyear":I
label_goto_e:
	return eyear;
	// 326    .line 234
	// 327    .end local v1    # "eyear":I
label_cond_f:
	//    .local v0, "era":I
	if ( this->internalGet(0x0, cVar1) )     
		goto label_cond_1c;
	//    .restart local v1    # "eyear":I
	goto label_goto_e;
	// 347    .line 238
	// 348    .end local v1    # "eyear":I
label_cond_1c:
	//    .restart local v1    # "eyear":I
	goto label_goto_e;

}


