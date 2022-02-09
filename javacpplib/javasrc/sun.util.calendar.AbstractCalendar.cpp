// CPP L:\smali2cpp20\x64\Release\out\sun\util\calendar\AbstractCalendar.smali
#include "java2ctype.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.util.TimeZone.h"
#include "sun.util.calendar.AbstractCalendar.h"
#include "sun.util.calendar.CalendarDate.h"
#include "sun.util.calendar.CalendarUtils.h"
#include "sun.util.calendar.Era.h"

static sun::util::calendar::AbstractCalendar::DAY_IN_MILLIS = 0x5265c00;
static sun::util::calendar::AbstractCalendar::EPOCH_OFFSET = 0xaf93b;
static sun::util::calendar::AbstractCalendar::HOUR_IN_MILLIS = 0x36ee80;
static sun::util::calendar::AbstractCalendar::MINUTE_IN_MILLIS = 0xea60;
static sun::util::calendar::AbstractCalendar::SECOND_IN_MILLIS = 0x3e8;
// .method protected constructor <init>()V
sun::util::calendar::AbstractCalendar::AbstractCalendar()
{
	
	// 028    invoke-direct {p0}, Lsun/util/calendar/CalendarSystem;-><init>()V
	return;

}
// .method static getDayOfWeekDateAfter(JI)J
long long sun::util::calendar::AbstractCalendar::getDayOfWeekDateAfter(long long fixedDate,int dayOfWeek)
{
	
	//    .param p0, "fixedDate"    # J
	//    .param p2, "dayOfWeek"    # I
	return sun::util::calendar::AbstractCalendar::getDayOfWeekDateOnOrBefore((0x7 +  fixedDate), dayOfWeek);

}
// .method static getDayOfWeekDateBefore(JI)J
long long sun::util::calendar::AbstractCalendar::getDayOfWeekDateBefore(long long fixedDate,int dayOfWeek)
{
	
	//    .param p0, "fixedDate"    # J
	//    .param p2, "dayOfWeek"    # I
	return sun::util::calendar::AbstractCalendar::getDayOfWeekDateOnOrBefore((fixedDate - 0x1), dayOfWeek);

}
// .method public static getDayOfWeekDateOnOrBefore(JI)J
long long sun::util::calendar::AbstractCalendar::getDayOfWeekDateOnOrBefore(long long fixedDate,int dayOfWeek)
{
	
	long long cVar0;
	long long fd;
	
	//    .param p0, "fixedDate"    # J
	//    .param p2, "dayOfWeek"    # I
	cVar0 = 0x7;
	fd = (fixedDate - (long long)(( dayOfWeek + -0x1)));
	//    .local v0, "fd":J
	if ( (fd > 0x0) < 0 ) 
		goto label_cond_12;
	return (fixedDate - (fd % cVar0));
	// 100    .line 329
label_cond_12:
	return (fixedDate - sun::util::calendar::CalendarUtils::mod(fd, cVar0));

}
// .method public getCalendarDate()Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::AbstractCalendar::getCalendarDate()
{
	
	return this->getCalendarDate(java::lang::System::currentTimeMillis({const[class].FS-Param}), this->newCalendarDate());

}
// .method public getCalendarDate(J)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::AbstractCalendar::getCalendarDate(long long millis)
{
	
	//    .param p1, "millis"    # J
	return this->getCalendarDate(millis, this->newCalendarDate());

}
// .method public getCalendarDate(JLjava/util/TimeZone;)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::AbstractCalendar::getCalendarDate(long long millis,std::shared_ptr<java::util::TimeZone> zone)
{
	
	//    .param p1, "millis"    # J
	//    .param p3, "zone"    # Ljava/util/TimeZone;
	//    .local v0, "date":Lsun/util/calendar/CalendarDate;
	return this->getCalendarDate(millis, this->newCalendarDate(zone));

}
// .method public getCalendarDate(JLsun/util/calendar/CalendarDate;)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::AbstractCalendar::getCalendarDate(long long millis,std::shared_ptr<sun::util::calendar::CalendarDate> date)
{
	
	int ms;
	auto days;
	std::shared_ptr<java::util::TimeZone> zi;
	std::shared<std::vector<int[]>> offsets;
	int zoneOffset;
	long long days;
	
	//    .param p1, "millis"    # J
	//    .param p3, "date"    # Lsun/util/calendar/CalendarDate;
	ms = 0x0;
	//    .local v2, "ms":I
	//    .local v6, "zoneOffset":I
	//    .local v4, "saving":I
	days = 0x0;
	//    .local v0, "days":J
	zi = date->getZone();
	//    .local v5, "zi":Ljava/util/TimeZone;
	if ( !(zi) )  
		goto label_cond_2f;
	offsets = std::make_shared<std::vector<int[]>>(0x2);
	//    .local v3, "offsets":[I
	zoneOffset = zi->getOffset(millis);
	offsets[0x0] = zi->getRawOffset();
	offsets[0x1] = (zoneOffset - offsets[0x0]);
	days = (long long)((zoneOffset / 0x5265c00));
	ms = (zoneOffset % 0x5265c00);
	//    .end local v3    # "offsets":[I
label_cond_2f:
	date->setZoneOffset(0x0);
	date->setDaylightSaving(0x0);
	days = (days +  (millis / 0x5265c00));
	ms = (ms +  (int)((millis % 0x5265c00)));
	if ( ms <  0x5265c00 )
		goto label_cond_64;
	ms = (ms -  0x5265c00);
	days = (days +  0x1);
label_cond_4e:
	days = (days +  0xaf93b);
	this->getCalendarDateFromFixedDate(date, days);
	this->setTimeOfDay(date, ms);
	date->setLeapYear(this->isLeapYear(date));
	date->setNormalized(0x1);
	return date;
	// 315    .line 158
label_cond_64:
label_goto_64:
	if ( ms >= 0 )
		goto label_cond_4e;
	ms = (ms +  0x5265c00);
	days = (days -  0x1);
	goto label_goto_64;

}
// .method public getEra(Ljava/lang/String;)Lsun/util/calendar/Era;
std::shared_ptr<sun::util::calendar::Era> sun::util::calendar::AbstractCalendar::getEra(std::shared_ptr<java::lang::String> eraName)
{
	
	int i;
	
	//    .param p1, "eraName"    # Ljava/lang/String;
	if ( !(this->eras) )  
		goto label_cond_1d;
	i = 0x0;
	//    .local v0, "i":I
label_goto_6:
	if ( i >= this->eras->size() )
		goto label_cond_1d;
	if ( !(this->eras[i]->equals(eraName)) )  
		goto label_cond_1a;
	return this->eras[i];
	// 377    .line 67
label_cond_1a:
	i = ( i + 0x1);
	goto label_goto_6;
	// 383    .line 73
	// 384    .end local v0    # "i":I
label_cond_1d:
	return 0x0;

}
// .method public getEras()[Lsun/util/calendar/Era;
std::shared_ptr<sun::util::calendar::Era> sun::util::calendar::AbstractCalendar::getEras()
{
	
	int cVar0;
	std::shared<std::vector<std::vector<sun::util::calendar::Era>>> e;
	
	cVar0 = 0x0;
	//    .local v0, "e":[Lsun/util/calendar/Era;
	if ( !(this->eras) )  
		goto label_cond_13;
	e = std::make_shared<std::vector<std::vector<sun::util::calendar::Era>>>(this->eras->size());
	//    .local v0, "e":[Lsun/util/calendar/Era;
	java::lang::System::arraycopy(this->eras, cVar0, e, cVar0, this->eras->size());
	//    .end local v0    # "e":[Lsun/util/calendar/Era;
label_cond_13:
	return 0x0;

}
// .method public getNthDayOfWeek(IILsun/util/calendar/CalendarDate;)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::AbstractCalendar::getNthDayOfWeek(int nth,int dayOfWeek,std::shared_ptr<sun::util::calendar::CalendarDate> date)
{
	
	std::shared_ptr<sun::util::calendar::CalendarDate> ndate;
	long long fd;
	
	//    .param p1, "nth"    # I
	//    .param p2, "dayOfWeek"    # I
	//    .param p3, "date"    # Lsun/util/calendar/CalendarDate;
	ndate = date->clone();
	ndate->checkCast("sun::util::calendar::CalendarDate");
	//    .local v2, "ndate":Lsun/util/calendar/CalendarDate;
	this->normalize(ndate);
	fd = this->getFixedDate(ndate);
	//    .local v0, "fd":J
	if ( nth <= 0 )
		goto label_cond_1c;
	//    .local v4, "nfd":J
label_goto_18:
	this->getCalendarDateFromFixedDate(ndate, nfd);
	return ndate;
	// 476    .line 285
	// 477    .end local v4    # "nfd":J
label_cond_1c:
	//    .restart local v4    # "nfd":J
	goto label_goto_18;

}
// .method public getTime(Lsun/util/calendar/CalendarDate;)J
long long sun::util::calendar::AbstractCalendar::getTime(std::shared_ptr<sun::util::calendar::CalendarDate> date)
{
	
	long long ms;
	int zoneOffset;
	std::shared_ptr<java::util::TimeZone> zi;
	
	//    .param p1, "date"    # Lsun/util/calendar/CalendarDate;
	//    .local v0, "gd":J
	ms = (((this->getFixedDate(date) - 0xaf93b) *  0x5265c00) + this->getTimeOfDay(date));
	//    .local v2, "ms":J
	zoneOffset = 0x0;
	//    .local v6, "zoneOffset":I
	zi = date->getZone();
	//    .local v5, "zi":Ljava/util/TimeZone;
	if ( !(zi) )  
		goto label_cond_3c;
	if ( !(date->isNormalized()) )  
		goto label_cond_28;
	return (ms - (long long)(date->getZoneOffset()));
	// 551    .line 187
label_cond_28:
	std::make_shared<std::vector<int[]>>(0x2);
	//    .local v4, "offsets":[I
	if ( !(date->isStandardTime()) )  
		goto label_cond_42;
	zoneOffset = zi->getOffset((ms - (long long)(zi->getRawOffset())));
	//    .end local v4    # "offsets":[I
label_cond_3c:
label_goto_3c:
	ms = (ms -  (long long)(zoneOffset));
	this->getCalendarDate(ms, date);
	return ms;
	// 592    .line 211
	// 593    .restart local v4    # "offsets":[I
label_cond_42:
	zoneOffset = zi->getOffset((ms - (long long)(zi->getRawOffset())));
	goto label_goto_3c;

}
// .method protected getTimeOfDay(Lsun/util/calendar/CalendarDate;)J
long long sun::util::calendar::AbstractCalendar::getTimeOfDay(std::shared_ptr<sun::util::calendar::CalendarDate> date)
{
	
	long long fraction;
	
	//    .param p1, "date"    # Lsun/util/calendar/CalendarDate;
	fraction = date->getTimeOfDay();
	//    .local v0, "fraction":J
	if ( !((fraction > -0x8000000000000000L)) )  
		goto label_cond_b;
	return fraction;
	// 631    .line 225
label_cond_b:
	fraction = this->getTimeOfDayValue(date);
	date->setTimeOfDay(fraction);
	return fraction;

}
// .method public getTimeOfDayValue(Lsun/util/calendar/CalendarDate;)J
long long sun::util::calendar::AbstractCalendar::getTimeOfDayValue(std::shared_ptr<sun::util::calendar::CalendarDate> date)
{
	
	long long cVar0;
	
	//    .param p1, "date"    # Lsun/util/calendar/CalendarDate;
	cVar0 = 0x3c;
	//    .local v0, "fraction":J
	return (((((((long long)(date->getHours()) *  cVar0) +  (long long)(date->getMinutes())) *  cVar0) +  (long long)(date->getSeconds())) *  0x3e8) +  (long long)(date->getMillis()));

}
// .method public getWeekLength()I
int sun::util::calendar::AbstractCalendar::getWeekLength()
{
	
	return 0x7;

}
// .method normalizeTime(Lsun/util/calendar/CalendarDate;)I
int sun::util::calendar::AbstractCalendar::normalizeTime(std::shared_ptr<sun::util::calendar::CalendarDate> date)
{
	
	long long cVar0;
	long long cVar1;
	long long cVar2;
	long long cVar3;
	long long fraction;
	auto days;
	long long days;
	
	//    .param p1, "date"    # Lsun/util/calendar/CalendarDate;
	cVar0 = 0x3e8;
	cVar1 = 0x0;
	cVar2 = 0x3c;
	cVar3 = 0x5265c00;
	fraction = this->getTimeOfDay(date);
	//    .local v2, "fraction":J
	days = 0x0;
	//    .local v0, "days":J
	if ( (fraction > cVar3) < 0 ) 
		goto label_cond_39;
	days = (fraction / cVar3);
	fraction = (fraction %  cVar3);
label_cond_16:
label_goto_16:
	if ( !((days > cVar1)) )  
		goto label_cond_1d;
	date->setTimeOfDay(fraction);
label_cond_1d:
	date->setMillis((int)((fraction % cVar0)));
	fraction = (fraction /  cVar0);
	date->setSeconds((int)((fraction % cVar2)));
	fraction = (fraction /  cVar2);
	date->setMinutes((int)((fraction % cVar2)));
	date->setHours((int)((fraction / cVar2)));
	return (int)(days);
	// 798    .line 386
label_cond_39:
	if ( (fraction > cVar1) >= 0 )
		goto label_cond_16;
	days = sun::util::calendar::CalendarUtils::floorDivide(fraction, cVar3);
	if ( !((days > cVar1)) )  
		goto label_cond_16;
	fraction = (fraction -  (cVar3 * days));
	goto label_goto_16;

}
// .method public setEra(Lsun/util/calendar/CalendarDate;Ljava/lang/String;)V
void sun::util::calendar::AbstractCalendar::setEra(std::shared_ptr<sun::util::calendar::CalendarDate> date,std::shared_ptr<java::lang::String> eraName)
{
	
	int i;
	std::shared_ptr<sun::util::calendar::Era> e;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "date"    # Lsun/util/calendar/CalendarDate;
	//    .param p2, "eraName"    # Ljava/lang/String;
	if ( this->eras )     
		goto label_cond_5;
	return;
	// 836    .line 89
label_cond_5:
	i = 0x0;
	//    .local v1, "i":I
label_goto_6:
	if ( i >= this->eras->size() )
		goto label_cond_22;
	e = this->eras[i];
	//    .local v0, "e":Lsun/util/calendar/Era;
	if ( !(e) )  
		goto label_cond_1f;
	if ( !(e->getName()->equals(eraName)) )  
		goto label_cond_1f;
	date->setEra(e);
	return;
	// 873    .line 89
label_cond_1f:
	i = ( i + 0x1);
	goto label_goto_6;
	// 879    .line 96
	// 880    .end local v0    # "e":Lsun/util/calendar/Era;
label_cond_22:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("unknown era name: ")))->append(eraName)->toString());
	// throw
	throw cVar0;

}
// .method protected setEras([Lsun/util/calendar/Era;)V
void sun::util::calendar::AbstractCalendar::setEras(std::shared_ptr<std::vector<sun::util::calendar::Era>> eras)
{
	
	//    .param p1, "eras"    # [Lsun/util/calendar/Era;
	this->eras = eras;
	return;

}
// .method public setTimeOfDay(Lsun/util/calendar/CalendarDate;I)Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::AbstractCalendar::setTimeOfDay(std::shared_ptr<sun::util::calendar::CalendarDate> cdate,int fraction)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	bool normalizedState;
	int hours;
	int time;
	
	//    .param p1, "cdate"    # Lsun/util/calendar/CalendarDate;
	//    .param p2, "fraction"    # I
	cVar0 = 0x36ee80;
	cVar1 = 0xea60;
	if ( fraction >= 0 )
		goto label_cond_e;
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar2;
	// 939    .line 245
label_cond_e:
	normalizedState = cdate->isNormalized();
	//    .local v2, "normalizedState":Z
	fraction;
	//    .local v4, "time":I
	hours = (fraction / cVar0);
	//    .local v0, "hours":I
	time = (fraction % cVar0);
	//    .local v1, "minutes":I
	time = (time %  cVar1);
	//    .local v3, "seconds":I
	cdate->setHours(hours);
	cdate->setMinutes((time / cVar1));
	cdate->setSeconds(( time / 0x3e8));
	cdate->setMillis(( time % 0x3e8));
	cdate->setTimeOfDay((long long)(fraction));
	if ( hours >= 0x18 )
		goto label_cond_37;
	if ( !(normalizedState) )  
		goto label_cond_37;
	cdate->setNormalized(normalizedState);
label_cond_37:
	return cdate;

}
// .method public validateTime(Lsun/util/calendar/CalendarDate;)Z
bool sun::util::calendar::AbstractCalendar::validateTime(std::shared_ptr<sun::util::calendar::CalendarDate> date)
{
	
	int cVar0;
	bool cVar1;
	int t;
	
	//    .param p1, "date"    # Lsun/util/calendar/CalendarDate;
	cVar0 = 0x3c;
	cVar1 = 0x0;
	t = date->getHours();
	//    .local v0, "t":I
	if ( t < 0 ) 
		goto label_cond_d;
	if ( t <  0x18 )
		goto label_cond_e;
label_cond_d:
	return cVar1;
	// 1029    .line 362
label_cond_e:
	t = date->getMinutes();
	if ( t < 0 ) 
		goto label_cond_16;
	if ( t <  cVar0 )
		goto label_cond_17;
label_cond_16:
	return cVar1;
	// 1044    .line 366
label_cond_17:
	t = date->getSeconds();
	if ( t < 0 ) 
		goto label_cond_1f;
	if ( t <  cVar0 )
		goto label_cond_20;
label_cond_1f:
	return cVar1;
	// 1059    .line 371
label_cond_20:
	t = date->getMillis();
	if ( t < 0 ) 
		goto label_cond_2a;
	if ( t <  0x3e8 )
		goto label_cond_2b;
label_cond_2a:
	return cVar1;
	// 1076    .line 375
label_cond_2b:
	return 0x1;

}


