// CPP L:\smali2cpp20\x64\Release\out\sun\util\calendar\ImmutableGregorianDate.smali
#include "java2ctype.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.util.Locale.h"
#include "java.util.TimeZone.h"
#include "sun.util.calendar.BaseCalendar_S_Date.h"
#include "sun.util.calendar.CalendarDate.h"
#include "sun.util.calendar.Era.h"
#include "sun.util.calendar.ImmutableGregorianDate.h"

// .method constructor <init>(Lsun/util/calendar/BaseCalendar$Date;)V
sun::util::calendar::ImmutableGregorianDate::ImmutableGregorianDate(std::shared_ptr<sun::util::calendar::BaseCalendar_S_Date> date)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p1, "date"    # Lsun/util/calendar/BaseCalendar$Date;
	// 017    invoke-direct {p0}, Lsun/util/calendar/BaseCalendar$Date;-><init>()V
	if ( date )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 029    .line 38
label_cond_b:
	this->date = date;
	return;

}
// .method private unsupported()V
void sun::util::calendar::ImmutableGregorianDate::unsupported()
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>();
	// throw
	throw cVar0;

}
// .method public addDate(III)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::ImmutableGregorianDate::addDate(int year,int month,int dayOfMonth)
{
	
	//    .param p1, "year"    # I
	//    .param p2, "month"    # I
	//    .param p3, "dayOfMonth"    # I
	this->unsupported();
	return this;

}
// .method public addDayOfMonth(I)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::ImmutableGregorianDate::addDayOfMonth(int n)
{
	
	//    .param p1, "n"    # I
	this->unsupported();
	return this;

}
// .method public addHours(I)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::ImmutableGregorianDate::addHours(int n)
{
	
	//    .param p1, "n"    # I
	this->unsupported();
	return this;

}
// .method public addMillis(I)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::ImmutableGregorianDate::addMillis(int n)
{
	
	//    .param p1, "n"    # I
	this->unsupported();
	return this;

}
// .method public addMinutes(I)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::ImmutableGregorianDate::addMinutes(int n)
{
	
	//    .param p1, "n"    # I
	this->unsupported();
	return this;

}
// .method public addMonth(I)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::ImmutableGregorianDate::addMonth(int n)
{
	
	//    .param p1, "n"    # I
	this->unsupported();
	return this;

}
// .method public addSeconds(I)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::ImmutableGregorianDate::addSeconds(int n)
{
	
	//    .param p1, "n"    # I
	this->unsupported();
	return this;

}
// .method public addTimeOfDay(IIII)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::ImmutableGregorianDate::addTimeOfDay(int hours,int minutes,int seconds,int millis)
{
	
	//    .param p1, "hours"    # I
	//    .param p2, "minutes"    # I
	//    .param p3, "seconds"    # I
	//    .param p4, "millis"    # I
	this->unsupported();
	return this;

}
// .method public addYear(I)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::ImmutableGregorianDate::addYear(int n)
{
	
	//    .param p1, "n"    # I
	this->unsupported();
	return this;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> sun::util::calendar::ImmutableGregorianDate::clone()
{
	
	return this->clone();

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::util::calendar::ImmutableGregorianDate::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	if ( this != obj )
		goto label_cond_4;
	return 0x1;
	// 180    .line 205
label_cond_4:
	if ( obj->instanceOf("sun::util::calendar::ImmutableGregorianDate") )     
		goto label_cond_a;
	return 0x0;
	// 191    .line 208
label_cond_a:
	obj->checkCast("sun::util::calendar::ImmutableGregorianDate");
	//    .end local p1    # "obj":Ljava/lang/Object;
	return this->date->equals(obj->date);

}
// .method public getDayOfMonth()I
int sun::util::calendar::ImmutableGregorianDate::getDayOfMonth()
{
	
	return this->date->getDayOfMonth();

}
// .method public getDayOfWeek()I
int sun::util::calendar::ImmutableGregorianDate::getDayOfWeek()
{
	
	return this->date->getDayOfWeek();

}
// .method public getDaylightSaving()I
int sun::util::calendar::ImmutableGregorianDate::getDaylightSaving()
{
	
	return this->date->getDaylightSaving();

}
// .method public getEra()Lsun/util/calendar/Era;
std::shared_ptr<sun::util::calendar::Era> sun::util::calendar::ImmutableGregorianDate::getEra()
{
	
	return this->date->getEra();

}
// .method public getHours()I
int sun::util::calendar::ImmutableGregorianDate::getHours()
{
	
	return this->date->getHours();

}
// .method public getMillis()I
int sun::util::calendar::ImmutableGregorianDate::getMillis()
{
	
	return this->date->getMillis();

}
// .method public getMinutes()I
int sun::util::calendar::ImmutableGregorianDate::getMinutes()
{
	
	return this->date->getMinutes();

}
// .method public getMonth()I
int sun::util::calendar::ImmutableGregorianDate::getMonth()
{
	
	return this->date->getMonth();

}
// .method public getNormalizedYear()I
int sun::util::calendar::ImmutableGregorianDate::getNormalizedYear()
{
	
	return this->date->getNormalizedYear();

}
// .method public getSeconds()I
int sun::util::calendar::ImmutableGregorianDate::getSeconds()
{
	
	return this->date->getSeconds();

}
// .method public getTimeOfDay()J
long long sun::util::calendar::ImmutableGregorianDate::getTimeOfDay()
{
	
	return this->date->getTimeOfDay();

}
// .method public getYear()I
int sun::util::calendar::ImmutableGregorianDate::getYear()
{
	
	return this->date->getYear();

}
// .method public getZone()Ljava/util/TimeZone;
std::shared_ptr<java::util::TimeZone> sun::util::calendar::ImmutableGregorianDate::getZone()
{
	
	return this->date->getZone();

}
// .method public getZoneOffset()I
int sun::util::calendar::ImmutableGregorianDate::getZoneOffset()
{
	
	return this->date->getZoneOffset();

}
// .method public hashCode()I
int sun::util::calendar::ImmutableGregorianDate::hashCode()
{
	
	return this->date->hashCode();

}
// .method public isDaylightTime()Z
bool sun::util::calendar::ImmutableGregorianDate::isDaylightTime()
{
	
	return this->date->isDaylightTime();

}
// .method public isLeapYear()Z
bool sun::util::calendar::ImmutableGregorianDate::isLeapYear()
{
	
	return this->date->isLeapYear();

}
// .method public isNormalized()Z
bool sun::util::calendar::ImmutableGregorianDate::isNormalized()
{
	
	return this->date->isNormalized();

}
// .method public isSameDate(Lsun/util/calendar/CalendarDate;)Z
bool sun::util::calendar::ImmutableGregorianDate::isSameDate(std::shared_ptr<sun::util::calendar::CalendarDate> date)
{
	
	//    .param p1, "date"    # Lsun/util/calendar/CalendarDate;
	return date->isSameDate(date);

}
// .method public isStandardTime()Z
bool sun::util::calendar::ImmutableGregorianDate::isStandardTime()
{
	
	return this->date->isStandardTime();

}
// .method public setDate(III)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::ImmutableGregorianDate::setDate(int year,int month,int dayOfMonth)
{
	
	//    .param p1, "year"    # I
	//    .param p2, "month"    # I
	//    .param p3, "dayOfMonth"    # I
	this->unsupported();
	return this;

}
// .method public setDayOfMonth(I)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::ImmutableGregorianDate::setDayOfMonth(int date)
{
	
	//    .param p1, "date"    # I
	this->unsupported();
	return this;

}
// .method protected setDayOfWeek(I)V
void sun::util::calendar::ImmutableGregorianDate::setDayOfWeek(int dayOfWeek)
{
	
	//    .param p1, "dayOfWeek"    # I
	this->unsupported();
	return;

}
// .method protected setDaylightSaving(I)V
void sun::util::calendar::ImmutableGregorianDate::setDaylightSaving(int daylightSaving)
{
	
	//    .param p1, "daylightSaving"    # I
	this->unsupported();
	return;

}
// .method public setEra(Lsun/util/calendar/Era;)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::ImmutableGregorianDate::setEra(std::shared_ptr<sun::util::calendar::Era> era)
{
	
	//    .param p1, "era"    # Lsun/util/calendar/Era;
	this->unsupported();
	return this;

}
// .method public setHours(I)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::ImmutableGregorianDate::setHours(int hours)
{
	
	//    .param p1, "hours"    # I
	this->unsupported();
	return this;

}
// .method setLeapYear(Z)V
void sun::util::calendar::ImmutableGregorianDate::setLeapYear(bool leapYear)
{
	
	//    .param p1, "leapYear"    # Z
	this->unsupported();
	return;

}
// .method protected setLocale(Ljava/util/Locale;)V
void sun::util::calendar::ImmutableGregorianDate::setLocale(std::shared_ptr<java::util::Locale> loc)
{
	
	//    .param p1, "loc"    # Ljava/util/Locale;
	this->unsupported();
	return;

}
// .method public setMillis(I)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::ImmutableGregorianDate::setMillis(int millis)
{
	
	//    .param p1, "millis"    # I
	this->unsupported();
	return this;

}
// .method public setMinutes(I)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::ImmutableGregorianDate::setMinutes(int minutes)
{
	
	//    .param p1, "minutes"    # I
	this->unsupported();
	return this;

}
// .method public setMonth(I)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::ImmutableGregorianDate::setMonth(int month)
{
	
	//    .param p1, "month"    # I
	this->unsupported();
	return this;

}
// .method protected setNormalized(Z)V
void sun::util::calendar::ImmutableGregorianDate::setNormalized(bool normalized)
{
	
	//    .param p1, "normalized"    # Z
	this->unsupported();
	return;

}
// .method public setNormalizedYear(I)V
void sun::util::calendar::ImmutableGregorianDate::setNormalizedYear(int normalizedYear)
{
	
	//    .param p1, "normalizedYear"    # I
	this->unsupported();
	return;

}
// .method public setSeconds(I)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::ImmutableGregorianDate::setSeconds(int seconds)
{
	
	//    .param p1, "seconds"    # I
	this->unsupported();
	return this;

}
// .method public setStandardTime(Z)V
void sun::util::calendar::ImmutableGregorianDate::setStandardTime(bool standardTime)
{
	
	//    .param p1, "standardTime"    # Z
	this->unsupported();
	return;

}
// .method public setTimeOfDay(IIII)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::ImmutableGregorianDate::setTimeOfDay(int hours,int minutes,int seconds,int millis)
{
	
	//    .param p1, "hours"    # I
	//    .param p2, "minutes"    # I
	//    .param p3, "seconds"    # I
	//    .param p4, "millis"    # I
	this->unsupported();
	return this;

}
// .method protected setTimeOfDay(J)V
void sun::util::calendar::ImmutableGregorianDate::setTimeOfDay(long long fraction)
{
	
	//    .param p1, "fraction"    # J
	this->unsupported();
	return;

}
// .method public setYear(I)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::ImmutableGregorianDate::setYear(int year)
{
	
	//    .param p1, "year"    # I
	this->unsupported();
	return this;

}
// .method public setZone(Ljava/util/TimeZone;)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::ImmutableGregorianDate::setZone(std::shared_ptr<java::util::TimeZone> zoneinfo)
{
	
	//    .param p1, "zoneinfo"    # Ljava/util/TimeZone;
	this->unsupported();
	return this;

}
// .method protected setZoneOffset(I)V
void sun::util::calendar::ImmutableGregorianDate::setZoneOffset(int offset)
{
	
	//    .param p1, "offset"    # I
	this->unsupported();
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::calendar::ImmutableGregorianDate::toString()
{
	
	return this->date->toString();

}


