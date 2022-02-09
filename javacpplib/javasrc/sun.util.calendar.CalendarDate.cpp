// CPP L:\smali2cpp20\x64\Release\out\sun\util\calendar\CalendarDate.smali
#include "java2ctype.h"
#include "java.lang.CloneNotSupportedException.h"
#include "java.lang.InternalError.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.util.Locale.h"
#include "java.util.TimeZone.h"
#include "sun.util.calendar.CalendarDate.h"
#include "sun.util.calendar.CalendarUtils.h"
#include "sun.util.calendar.Era.h"

static sun::util::calendar::CalendarDate::FIELD_UNDEFINED = -0x80000000;
static sun::util::calendar::CalendarDate::TIME_UNDEFINED = -0x8000000000000000L;
// .method protected constructor <init>()V
sun::util::calendar::CalendarDate::CalendarDate()
{
	
	sun::util::calendar::CalendarDate::(java::util::TimeZone::getDefault({const[class].FS-Param}));
	return;

}
// .method protected constructor <init>(Ljava/util/TimeZone;)V
sun::util::calendar::CalendarDate::CalendarDate(std::shared_ptr<java::util::TimeZone> zone)
{
	
	//    .param p1, "zone"    # Ljava/util/TimeZone;
	// 073    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->dayOfWeek = -0x80000000;
	this->zoneinfo = zone;
	return;

}
// .method public addDate(III)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::CalendarDate::addDate(int year,int month,int dayOfMonth)
{
	
	//    .param p1, "year"    # I
	//    .param p2, "month"    # I
	//    .param p3, "dayOfMonth"    # I
	this->addYear(year);
	this->addMonth(month);
	this->addDayOfMonth(dayOfMonth);
	return this;

}
// .method public addDayOfMonth(I)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::CalendarDate::addDayOfMonth(int n)
{
	
	//    .param p1, "n"    # I
	if ( !(n) )  
		goto label_cond_a;
	this->dayOfMonth = (this->dayOfMonth +  n);
	this->normalized = 0x0;
label_cond_a:
	return this;

}
// .method public addHours(I)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::CalendarDate::addHours(int n)
{
	
	//    .param p1, "n"    # I
	if ( !(n) )  
		goto label_cond_a;
	this->hours = (this->hours +  n);
	this->normalized = 0x0;
label_cond_a:
	return this;

}
// .method public addMillis(I)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::CalendarDate::addMillis(int n)
{
	
	//    .param p1, "n"    # I
	if ( !(n) )  
		goto label_cond_a;
	this->millis = (this->millis +  n);
	this->normalized = 0x0;
label_cond_a:
	return this;

}
// .method public addMinutes(I)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::CalendarDate::addMinutes(int n)
{
	
	//    .param p1, "n"    # I
	if ( !(n) )  
		goto label_cond_a;
	this->minutes = (this->minutes +  n);
	this->normalized = 0x0;
label_cond_a:
	return this;

}
// .method public addMonth(I)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::CalendarDate::addMonth(int n)
{
	
	//    .param p1, "n"    # I
	if ( !(n) )  
		goto label_cond_a;
	this->month = (this->month +  n);
	this->normalized = 0x0;
label_cond_a:
	return this;

}
// .method public addSeconds(I)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::CalendarDate::addSeconds(int n)
{
	
	//    .param p1, "n"    # I
	if ( !(n) )  
		goto label_cond_a;
	this->seconds = (this->seconds +  n);
	this->normalized = 0x0;
label_cond_a:
	return this;

}
// .method public addTimeOfDay(IIII)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::CalendarDate::addTimeOfDay(int hours,int minutes,int seconds,int millis)
{
	
	//    .param p1, "hours"    # I
	//    .param p2, "minutes"    # I
	//    .param p3, "seconds"    # I
	//    .param p4, "millis"    # I
	this->addHours(hours);
	this->addMinutes(minutes);
	this->addSeconds(seconds);
	this->addMillis(millis);
	return this;

}
// .method public addYear(I)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::CalendarDate::addYear(int n)
{
	
	//    .param p1, "n"    # I
	if ( !(n) )  
		goto label_cond_a;
	this->year = (this->year +  n);
	this->normalized = 0x0;
label_cond_a:
	return this;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> sun::util::calendar::CalendarDate::clone()
{
	
	std::shared_ptr<java::lang::InternalError> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	try {
	//label_try_start_0:
	//label_try_end_3:
	}
	catch (java::lang::CloneNotSupportedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5;
	}
	//    .catch Ljava/lang/CloneNotSupportedException; {:try_start_0 .. :try_end_3} :catch_5
	return this->clone();
	// 322    .line 436
label_catch_5:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/CloneNotSupportedException;
	cVar0 = std::make_shared<java::lang::InternalError>(getCatchExcetionFromList);
	// throw
	throw cVar0;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::util::calendar::CalendarDate::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar1;
	std::shared_ptr<sun::util::calendar::CalendarDate> that;
	int hasZone;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( obj->instanceOf("sun::util::calendar::CalendarDate") )     
		goto label_cond_6;
	return cVar1;
label_cond_6:
	that = obj;
	that->checkCast("sun::util::calendar::CalendarDate");
	//    .local v1, "that":Lsun/util/calendar/CalendarDate;
	if ( this->isNormalized() == that->isNormalized() )
		goto label_cond_14;
	return cVar1;
	// 371    .line 392
label_cond_14:
	if ( !(this->zoneinfo) )  
		goto label_cond_21;
	hasZone = 0x1;
	//    .local v0, "hasZone":Z
label_goto_19:
	if ( !(that->zoneinfo) )  
		goto label_cond_23;
	//    .local v2, "thatHasZone":Z
label_goto_1e:
	if ( hasZone == thatHasZone )
		goto label_cond_25;
	return cVar1;
	// 396    .line 392
	// 397    .end local v0    # "hasZone":Z
	// 398    .end local v2    # "thatHasZone":Z
label_cond_21:
	hasZone = 0x0;
	//    .restart local v0    # "hasZone":Z
	goto label_goto_19;
	// 405    .line 393
label_cond_23:
	//    .restart local v2    # "thatHasZone":Z
	goto label_goto_1e;
	// 412    .line 397
label_cond_25:
	if ( !(hasZone) )  
		goto label_cond_34;
	if ( !(( this->zoneinfo->equals(that->zoneinfo) ^ 0x1)) )  
		goto label_cond_34;
	return cVar1;
	// 431    .line 400
label_cond_34:
	if ( this->getEra() != that->getEra() )
		goto label_cond_6f;
	if ( this->year != that->year )
		goto label_cond_6f;
	if ( this->month != that->month )
		goto label_cond_6f;
	if ( this->dayOfMonth != that->dayOfMonth )
		goto label_cond_6f;
	if ( this->hours != that->hours )
		goto label_cond_6f;
	if ( this->minutes != that->minutes )
		goto label_cond_6f;
	if ( this->seconds != that->seconds )
		goto label_cond_6f;
	if ( this->millis != that->millis )
		goto label_cond_6f;
	if ( this->zoneOffset != that->zoneOffset )
		goto label_cond_6f;
	cVar1 = 0x1;
label_cond_6f:
	return cVar1;

}
// .method public getDayOfMonth()I
int sun::util::calendar::CalendarDate::getDayOfMonth()
{
	
	return this->dayOfMonth;

}
// .method public getDayOfWeek()I
int sun::util::calendar::CalendarDate::getDayOfWeek()
{
	
	if ( this->isNormalized() )     
		goto label_cond_a;
	this->dayOfWeek = -0x80000000;
label_cond_a:
	return this->dayOfWeek;

}
// .method public getDaylightSaving()I
int sun::util::calendar::CalendarDate::getDaylightSaving()
{
	
	return this->daylightSaving;

}
// .method public getEra()Lsun/util/calendar/Era;
std::shared_ptr<sun::util::calendar::Era> sun::util::calendar::CalendarDate::getEra()
{
	
	return this->era;

}
// .method public getHours()I
int sun::util::calendar::CalendarDate::getHours()
{
	
	return this->hours;

}
// .method public getMillis()I
int sun::util::calendar::CalendarDate::getMillis()
{
	
	return this->millis;

}
// .method public getMinutes()I
int sun::util::calendar::CalendarDate::getMinutes()
{
	
	return this->minutes;

}
// .method public getMonth()I
int sun::util::calendar::CalendarDate::getMonth()
{
	
	return this->month;

}
// .method public getSeconds()I
int sun::util::calendar::CalendarDate::getSeconds()
{
	
	return this->seconds;

}
// .method public getTimeOfDay()J
long long sun::util::calendar::CalendarDate::getTimeOfDay()
{
	
	long long cVar0;
	
	cVar0 = -0x8000000000000000L;
	if ( this->isNormalized() )     
		goto label_cond_b;
	this->fraction = cVar0;
	return cVar0;
	// 627    .line 302
label_cond_b:
	return this->fraction;

}
// .method public getYear()I
int sun::util::calendar::CalendarDate::getYear()
{
	
	return this->year;

}
// .method public getZone()Ljava/util/TimeZone;
std::shared_ptr<java::util::TimeZone> sun::util::calendar::CalendarDate::getZone()
{
	
	return this->zoneinfo;

}
// .method public getZoneOffset()I
int sun::util::calendar::CalendarDate::getZoneOffset()
{
	
	return this->zoneOffset;

}
// .method public hashCode()I
int sun::util::calendar::CalendarDate::hashCode()
{
	
	long long cVar0;
	long long hash;
	std::shared_ptr<sun::util::calendar::Era> e;
	
	cVar0 = 0x3c;
	//    .local v2, "hash":J
	hash = (((((((((long long)(this->hours) +  (((((((long long)(this->year) -  0x7b2) *  0xc) +  (long long)(( this->month + -0x1))) *  0x1e) +  (long long)(this->dayOfMonth)) * 0x18)) *  cVar0) +  (long long)(this->minutes)) *  cVar0) +  (long long)(this->seconds)) *  0x3e8) + (long long)(this->millis)) -  (long long)(this->zoneOffset));
	if ( !(this->isNormalized()) )  
		goto label_cond_5d;
	//    .local v4, "normalized":I
label_goto_3d:
	//    .local v1, "era":I
	e = this->getEra();
	//    .local v0, "e":Lsun/util/calendar/Era;
	if ( !(e) )  
		goto label_cond_48;
label_cond_48:
	if ( !(this->zoneinfo) )  
		goto label_cond_5f;
	//    .local v5, "zone":I
label_goto_52:
	return (((((int)(hash) *  (int)(_shrll(hash,0x20))) ^  0x0) ^  normalized) ^  zone);
	// 808    .line 417
	// 809    .end local v0    # "e":Lsun/util/calendar/Era;
	// 810    .end local v1    # "era":I
	// 811    .end local v4    # "normalized":I
	// 812    .end local v5    # "zone":I
label_cond_5d:
	//    .restart local v4    # "normalized":I
	goto label_goto_3d;
	// 819    .line 423
	// 820    .restart local v0    # "e":Lsun/util/calendar/Era;
	// 821    .restart local v1    # "era":I
label_cond_5f:
	//    .restart local v5    # "zone":I
	goto label_goto_52;

}
// .method public isDaylightTime()Z
bool sun::util::calendar::CalendarDate::isDaylightTime()
{
	
	bool cVar1;
	
	cVar1 = 0x0;
	if ( !(this->isStandardTime()) )  
		goto label_cond_8;
	return cVar1;
	// 845    .line 356
label_cond_8:
	if ( !(this->daylightSaving) )  
		goto label_cond_d;
	cVar1 = 0x1;
label_cond_d:
	return cVar1;

}
// .method public isLeapYear()Z
bool sun::util::calendar::CalendarDate::isLeapYear()
{
	
	return this->leapYear;

}
// .method public isNormalized()Z
bool sun::util::calendar::CalendarDate::isNormalized()
{
	
	return this->normalized;

}
// .method public isSameDate(Lsun/util/calendar/CalendarDate;)Z
bool sun::util::calendar::CalendarDate::isSameDate(std::shared_ptr<sun::util::calendar::CalendarDate> date)
{
	
	bool cVar1;
	
	//    .param p1, "date"    # Lsun/util/calendar/CalendarDate;
	cVar1 = 0x0;
	if ( this->getDayOfWeek() != date->getDayOfWeek() )
		goto label_cond_2a;
	if ( this->getMonth() != date->getMonth() )
		goto label_cond_2a;
	if ( this->getYear() != date->getYear() )
		goto label_cond_2a;
	if ( this->getEra() != date->getEra() )
		goto label_cond_2a;
	cVar1 = 0x1;
label_cond_2a:
	return cVar1;

}
// .method public isStandardTime()Z
bool sun::util::calendar::CalendarDate::isStandardTime()
{
	
	return this->forceStandardTime;

}
// .method public setDate(III)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::CalendarDate::setDate(int year,int month,int dayOfMonth)
{
	
	//    .param p1, "year"    # I
	//    .param p2, "month"    # I
	//    .param p3, "dayOfMonth"    # I
	this->setYear(year);
	this->setMonth(month);
	this->setDayOfMonth(dayOfMonth);
	return this;

}
// .method public setDayOfMonth(I)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::CalendarDate::setDayOfMonth(int date)
{
	
	//    .param p1, "date"    # I
	if ( this->dayOfMonth == date )
		goto label_cond_9;
	this->dayOfMonth = date;
	this->normalized = 0x0;
label_cond_9:
	return this;

}
// .method protected setDayOfWeek(I)V
void sun::util::calendar::CalendarDate::setDayOfWeek(int dayOfWeek)
{
	
	//    .param p1, "dayOfWeek"    # I
	this->dayOfWeek = dayOfWeek;
	return;

}
// .method protected setDaylightSaving(I)V
void sun::util::calendar::CalendarDate::setDaylightSaving(int daylightSaving)
{
	
	//    .param p1, "daylightSaving"    # I
	this->daylightSaving = daylightSaving;
	return;

}
// .method public setEra(Lsun/util/calendar/Era;)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::CalendarDate::setEra(std::shared_ptr<sun::util::calendar::Era> era)
{
	
	//    .param p1, "era"    # Lsun/util/calendar/Era;
	if ( this->era != era )
		goto label_cond_5;
	return this;
	// 1025    .line 117
label_cond_5:
	this->era = era;
	this->normalized = 0x0;
	return this;

}
// .method public setHours(I)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::CalendarDate::setHours(int hours)
{
	
	//    .param p1, "hours"    # I
	if ( this->hours == hours )
		goto label_cond_9;
	this->hours = hours;
	this->normalized = 0x0;
label_cond_9:
	return this;

}
// .method setLeapYear(Z)V
void sun::util::calendar::CalendarDate::setLeapYear(bool leapYear)
{
	
	//    .param p1, "leapYear"    # Z
	this->leapYear = leapYear;
	return;

}
// .method protected setLocale(Ljava/util/Locale;)V
void sun::util::calendar::CalendarDate::setLocale(std::shared_ptr<java::util::Locale> loc)
{
	
	//    .param p1, "loc"    # Ljava/util/Locale;
	this->locale = loc;
	return;

}
// .method public setMillis(I)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::CalendarDate::setMillis(int millis)
{
	
	//    .param p1, "millis"    # I
	if ( this->millis == millis )
		goto label_cond_9;
	this->millis = millis;
	this->normalized = 0x0;
label_cond_9:
	return this;

}
// .method public setMinutes(I)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::CalendarDate::setMinutes(int minutes)
{
	
	//    .param p1, "minutes"    # I
	if ( this->minutes == minutes )
		goto label_cond_9;
	this->minutes = minutes;
	this->normalized = 0x0;
label_cond_9:
	return this;

}
// .method public setMonth(I)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::CalendarDate::setMonth(int month)
{
	
	//    .param p1, "month"    # I
	if ( this->month == month )
		goto label_cond_9;
	this->month = month;
	this->normalized = 0x0;
label_cond_9:
	return this;

}
// .method protected setNormalized(Z)V
void sun::util::calendar::CalendarDate::setNormalized(bool normalized)
{
	
	//    .param p1, "normalized"    # Z
	this->normalized = normalized;
	return;

}
// .method public setSeconds(I)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::CalendarDate::setSeconds(int seconds)
{
	
	//    .param p1, "seconds"    # I
	if ( this->seconds == seconds )
		goto label_cond_9;
	this->seconds = seconds;
	this->normalized = 0x0;
label_cond_9:
	return this;

}
// .method public setStandardTime(Z)V
void sun::util::calendar::CalendarDate::setStandardTime(bool standardTime)
{
	
	//    .param p1, "standardTime"    # Z
	this->forceStandardTime = standardTime;
	return;

}
// .method public setTimeOfDay(IIII)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::CalendarDate::setTimeOfDay(int hours,int minutes,int seconds,int millis)
{
	
	//    .param p1, "hours"    # I
	//    .param p2, "minutes"    # I
	//    .param p3, "seconds"    # I
	//    .param p4, "millis"    # I
	this->setHours(hours);
	this->setMinutes(minutes);
	this->setSeconds(seconds);
	this->setMillis(millis);
	return this;

}
// .method protected setTimeOfDay(J)V
void sun::util::calendar::CalendarDate::setTimeOfDay(long long fraction)
{
	
	//    .param p1, "fraction"    # J
	this->fraction = fraction;
	return;

}
// .method public setYear(I)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::CalendarDate::setYear(int year)
{
	
	//    .param p1, "year"    # I
	if ( this->year == year )
		goto label_cond_9;
	this->year = year;
	this->normalized = 0x0;
label_cond_9:
	return this;

}
// .method public setZone(Ljava/util/TimeZone;)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::CalendarDate::setZone(std::shared_ptr<java::util::TimeZone> zoneinfo)
{
	
	//    .param p1, "zoneinfo"    # Ljava/util/TimeZone;
	this->zoneinfo = zoneinfo;
	return this;

}
// .method protected setZoneOffset(I)V
void sun::util::calendar::CalendarDate::setZoneOffset(int offset)
{
	
	//    .param p1, "offset"    # I
	this->zoneOffset = offset;
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::calendar::CalendarDate::toString()
{
	
	char cVar0;
	char cVar1;
	int cVar2;
	std::shared_ptr<java::lang::StringBuilder> sb;
	int offset;
	
	cVar0 = 0x3a;
	cVar1 = 0x2d;
	cVar2 = 0x2;
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v1, "sb":Ljava/lang/StringBuilder;
	sun::util::calendar::CalendarUtils::sprintf0d(sb, this->year, 0x4)->append(cVar1);
	sun::util::calendar::CalendarUtils::sprintf0d(sb, this->month, cVar2)->append(cVar1);
	sun::util::calendar::CalendarUtils::sprintf0d(sb, this->dayOfMonth, cVar2)->append(0x54);
	sun::util::calendar::CalendarUtils::sprintf0d(sb, this->hours, cVar2)->append(cVar0);
	sun::util::calendar::CalendarUtils::sprintf0d(sb, this->minutes, cVar2)->append(cVar0);
	sun::util::calendar::CalendarUtils::sprintf0d(sb, this->seconds, cVar2)->append(0x2e);
	sun::util::calendar::CalendarUtils::sprintf0d(sb, this->millis, 0x3);
	if ( this->zoneOffset )     
		goto label_cond_59;
	sb->append(0x5a);
label_goto_54:
	return sb->toString();
	// 1385    .line 462
label_cond_59:
	if ( this->zoneOffset == -0x80000000 )
		goto label_cond_7f;
	if ( this->zoneOffset <= 0 )
		goto label_cond_79;
	//    .local v0, "offset":I
	//    .local v2, "sign":C
label_goto_67:
	offset = (offset /  0xea60);
	sb->append(sign);
	sun::util::calendar::CalendarUtils::sprintf0d(sb, ( offset / 0x3c), cVar2);
	sun::util::calendar::CalendarUtils::sprintf0d(sb, ( offset % 0x3c), cVar2);
	goto label_goto_54;
	// 1427    .line 469
	// 1428    .end local v0    # "offset":I
	// 1429    .end local v2    # "sign":C
label_cond_79:
	//    .restart local v0    # "offset":I
	//    .restart local v2    # "sign":C
	goto label_goto_67;
	// 1442    .line 477
	// 1443    .end local v0    # "offset":I
	// 1444    .end local v2    # "sign":C
label_cond_7f:
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" local time")));
	goto label_goto_54;

}


