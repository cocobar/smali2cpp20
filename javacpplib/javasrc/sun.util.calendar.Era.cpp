// CPP L:\smali2cpp20\x64\Release\out\sun\util\calendar\Era.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Locale.h"
#include "java.util.TimeZone.h"
#include "sun.util.calendar.CalendarDate.h"
#include "sun.util.calendar.CalendarSystem.h"
#include "sun.util.calendar.Era.h"
#include "sun.util.calendar.Gregorian_S_Date.h"
#include "sun.util.calendar.Gregorian.h"
#include "sun.util.calendar.ImmutableGregorianDate.h"

// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;JZ)V
sun::util::calendar::Era::Era(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::String> abbr,long long since,bool localTime)
{
	
	std::shared_ptr<sun::util::calendar::Gregorian> gcal;
	std::shared_ptr<sun::util::calendar::CalendarDate> d;
	std::shared_ptr<sun::util::calendar::ImmutableGregorianDate> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "abbr"    # Ljava/lang/String;
	//    .param p3, "since"    # J
	//    .param p5, "localTime"    # Z
	// 030    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->hash = 0x0;
	this->name = name;
	this->abbr = abbr;
	this->since = since;
	this->localTime = localTime;
	gcal = sun::util::calendar::CalendarSystem::getGregorianCalendar({const[class].FS-Param});
	//    .local v1, "gcal":Lsun/util/calendar/Gregorian;
	d = gcal->newCalendarDate(0x0);
	//    .local v0, "d":Lsun/util/calendar/BaseCalendar$Date;
	gcal->getCalendarDate(since, d);
	cVar0 = std::make_shared<sun::util::calendar::ImmutableGregorianDate>(d);
	this->sinceDate = cVar0;
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::util::calendar::Era::equals(std::shared_ptr<java::lang::Object> o)
{
	
	bool cVar1;
	std::shared_ptr<sun::util::calendar::Era> that;
	
	//    .param p1, "o"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( o->instanceOf("sun::util::calendar::Era") )     
		goto label_cond_6;
	return cVar1;
label_cond_6:
	that = o;
	that->checkCast("sun::util::calendar::Era");
	//    .local v0, "that":Lsun/util/calendar/Era;
	if ( !(this->name->equals(that->name)) )  
		goto label_cond_2c;
	if ( !(this->abbr->equals(that->abbr)) )  
		goto label_cond_2c;
	if ( (this->since > that->since) )     
		goto label_cond_2c;
	if ( this->localTime != that->localTime )
		goto label_cond_2c;
	cVar1 = 0x1;
label_cond_2c:
	return cVar1;

}
// .method public getAbbreviation()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::calendar::Era::getAbbreviation()
{
	
	return this->abbr;

}
// .method public getDiaplayAbbreviation(Ljava/util/Locale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::calendar::Era::getDiaplayAbbreviation(std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p1, "locale"    # Ljava/util/Locale;
	return this->abbr;

}
// .method public getDisplayName(Ljava/util/Locale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::calendar::Era::getDisplayName(std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p1, "locale"    # Ljava/util/Locale;
	return this->name;

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::calendar::Era::getName()
{
	
	return this->name;

}
// .method public getSince(Ljava/util/TimeZone;)J
long long sun::util::calendar::Era::getSince(std::shared_ptr<java::util::TimeZone> zone)
{
	
	//    .param p1, "zone"    # Ljava/util/TimeZone;
	if ( !(zone) )  
		goto label_cond_8;
	if ( !(( this->localTime ^ 0x1)) )  
		goto label_cond_b;
label_cond_8:
	return this->since;
	// 209    .line 112
label_cond_b:
	//    .local v0, "offset":I
	return (this->since -  (long long)(zone->getOffset(this->since)));

}
// .method public getSinceDate()Lsun/util/calendar/CalendarDate;
std::shared_ptr<sun::util::calendar::CalendarDate> sun::util::calendar::Era::getSinceDate()
{
	
	return this->sinceDate;

}
// .method public hashCode()I
int sun::util::calendar::Era::hashCode()
{
	
	int cVar1;
	
	cVar1 = 0x0;
	if ( this->hash )     
		goto label_cond_25;
	if ( !(this->localTime) )  
		goto label_cond_22;
	cVar1 = 0x1;
label_cond_22:
	this->hash = (cVar1 ^  (((this->name->hashCode() ^  this->abbr->hashCode()) ^  (int)(this->since)) ^  (int)(_shrll(this->since,0x20))));
label_cond_25:
	return this->hash;

}
// .method public isLocalTime()Z
bool sun::util::calendar::Era::isLocalTime()
{
	
	return this->localTime;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::calendar::Era::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "sb":Ljava/lang/StringBuilder;
	sb->append(0x5b);
	sb->append(this->getName())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" (")));
	sb->append(this->getAbbreviation())->append(0x29);
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" since ")))->append(this->getSinceDate());
	if ( !(this->localTime) )  
		goto label_cond_46;
	sb->setLength(( sb->length() + -0x1));
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" local time")));
label_cond_46:
	sb->append(0x5d);
	return sb->toString();

}


