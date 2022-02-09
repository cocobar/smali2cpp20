// CPP L:\smali2cpp20\x64\Release\out\sun\util\calendar\JulianCalendar$Date.smali
#include "java2ctype.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.util.TimeZone.h"
#include "sun.util.calendar.BaseCalendar_S_Date.h"
#include "sun.util.calendar.CalendarDate.h"
#include "sun.util.calendar.CalendarUtils.h"
#include "sun.util.calendar.Era.h"
#include "sun.util.calendar.JulianCalendar_S_Date.h"
#include "sun.util.calendar.JulianCalendar.h"

// .method protected constructor <init>()V
sun::util::calendar::JulianCalendar_S_Date::JulianCalendar_S_Date()
{
	
	// 023    invoke-direct {p0}, Lsun/util/calendar/BaseCalendar$Date;-><init>()V
	this->setCache(0x1, -0x1, 0x16d);
	return;

}
// .method protected constructor <init>(Ljava/util/TimeZone;)V
sun::util::calendar::JulianCalendar_S_Date::JulianCalendar_S_Date(std::shared_ptr<java::util::TimeZone> zone)
{
	
	//    .param p1, "zone"    # Ljava/util/TimeZone;
	sun::util::calendar::BaseCalendar_S_Date::(zone);
	this->setCache(0x1, -0x1, 0x16d);
	return;

}
// .method public getNormalizedYear()I
int sun::util::calendar::JulianCalendar_S_Date::getNormalizedYear()
{
	
	if ( this->getEra() != sun::util::calendar::JulianCalendar::-get0({const[class].FS-Param})[0x0] )
		goto label_cond_14;
	return ( this->getYear() - 0x1);
	// 089    .line 77
label_cond_14:
	return this->getYear();

}
// .method public setEra(Lsun/util/calendar/Era;)Lsun/util/calendar/JulianCalendar$Date;
std::shared_ptr<sun::util::calendar::JulianCalendar_S_Date> sun::util::calendar::JulianCalendar_S_Date::setEra(std::shared_ptr<sun::util::calendar::Era> era)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "era"    # Lsun/util/calendar/Era;
	if ( era )     
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 125    .line 62
label_cond_8:
	if ( era != sun::util::calendar::JulianCalendar::-get0({const[class].FS-Param})[0x0] )
		goto label_cond_1a;
	if ( era == sun::util::calendar::JulianCalendar::-get0({const[class].FS-Param})[0x1] )
		goto label_cond_34;
label_cond_1a:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("unknown era: ")))->append(era)->toString());
	// throw
	throw cVar1;
	// 173    .line 65
label_cond_34:
	this->setEra(era);
	return this;

}
// .method protected setKnownEra(Lsun/util/calendar/Era;)V
void sun::util::calendar::JulianCalendar_S_Date::setKnownEra(std::shared_ptr<sun::util::calendar::Era> era)
{
	
	//    .param p1, "era"    # Lsun/util/calendar/Era;
	this->setEra(era);
	return;

}
// .method public setNormalizedYear(I)V
void sun::util::calendar::JulianCalendar_S_Date::setNormalizedYear(int year)
{
	
	//    .param p1, "year"    # I
	if ( year > 0 ) 
		goto label_cond_12;
	this->setYear(( year - 0x1));
	this->setKnownEra(sun::util::calendar::JulianCalendar::-get0({const[class].FS-Param})[0x0]);
label_goto_11:
	return;
	// 221    .line 89
label_cond_12:
	this->setYear(year);
	this->setKnownEra(sun::util::calendar::JulianCalendar::-get0({const[class].FS-Param})[0x1]);
	goto label_goto_11;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::calendar::JulianCalendar_S_Date::toString()
{
	
	char cVar0;
	int cVar1;
	std::shared_ptr<java::lang::String> time;
	std::shared_ptr<java::lang::StringBuffer> sb;
	std::shared_ptr<sun::util::calendar::Era> era;
	std::shared_ptr<java::lang::String> n;
	
	cVar0 = 0x2d;
	cVar1 = 0x2;
	time = this->toString();
	//    .local v3, "time":Ljava/lang/String;
	sb = std::make_shared<java::lang::StringBuffer>();
	//    .local v2, "sb":Ljava/lang/StringBuffer;
	era = this->getEra();
	//    .local v0, "era":Lsun/util/calendar/Era;
	if ( !(era) )  
		goto label_cond_2b;
	n = era->getAbbreviation();
	//    .local v1, "n":Ljava/lang/String;
	if ( !(n) )  
		goto label_cond_2b;
	sb->append(n)->append(0x20);
	//    .end local v1    # "n":Ljava/lang/String;
label_cond_2b:
	sb->append(this->getYear())->append(cVar0);
	sun::util::calendar::CalendarUtils::sprintf0d(sb, this->getMonth(), cVar1)->append(cVar0);
	sun::util::calendar::CalendarUtils::sprintf0d(sb, this->getDayOfMonth(), cVar1);
	sb->append(time->substring(time->indexOf(0x54)));
	return sb->toString();

}


