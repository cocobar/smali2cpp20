// CPP L:\smali2cpp20\x64\Release\out\sun\util\calendar\LocalGregorianCalendar$Date.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.util.TimeZone.h"
#include "sun.util.calendar.BaseCalendar_S_Date.h"
#include "sun.util.calendar.CalendarDate.h"
#include "sun.util.calendar.CalendarUtils.h"
#include "sun.util.calendar.Era.h"
#include "sun.util.calendar.LocalGregorianCalendar_S_Date.h"

// .method protected constructor <init>()V
sun::util::calendar::LocalGregorianCalendar_S_Date::LocalGregorianCalendar_S_Date()
{
	
	// 027    invoke-direct {p0}, Lsun/util/calendar/BaseCalendar$Date;-><init>()V
	this->gregorianYear = -0x80000000;
	return;

}
// .method protected constructor <init>(Ljava/util/TimeZone;)V
sun::util::calendar::LocalGregorianCalendar_S_Date::LocalGregorianCalendar_S_Date(std::shared_ptr<java::util::TimeZone> zone)
{
	
	//    .param p1, "zone"    # Ljava/util/TimeZone;
	sun::util::calendar::BaseCalendar_S_Date::(zone);
	this->gregorianYear = -0x80000000;
	return;

}
// .method public addYear(I)Lsun/util/calendar/LocalGregorianCalendar$Date;
std::shared_ptr<sun::util::calendar::LocalGregorianCalendar_S_Date> sun::util::calendar::LocalGregorianCalendar_S_Date::addYear(int localYear)
{
	
	//    .param p1, "localYear"    # I
	this->addYear(localYear);
	this->gregorianYear = (this->gregorianYear +  localYear);
	return this;

}
// .method public getNormalizedYear()I
int sun::util::calendar::LocalGregorianCalendar_S_Date::getNormalizedYear()
{
	
	return this->gregorianYear;

}
// .method public setEra(Lsun/util/calendar/Era;)Lsun/util/calendar/LocalGregorianCalendar$Date;
std::shared_ptr<sun::util::calendar::LocalGregorianCalendar_S_Date> sun::util::calendar::LocalGregorianCalendar_S_Date::setEra(std::shared_ptr<sun::util::calendar::Era> era)
{
	
	//    .param p1, "era"    # Lsun/util/calendar/Era;
	if ( this->getEra() == era )
		goto label_cond_d;
	this->setEra(era);
	this->gregorianYear = -0x80000000;
label_cond_d:
	return this;

}
// .method setLocalEra(Lsun/util/calendar/Era;)V
void sun::util::calendar::LocalGregorianCalendar_S_Date::setLocalEra(std::shared_ptr<sun::util::calendar::Era> era)
{
	
	//    .param p1, "era"    # Lsun/util/calendar/Era;
	this->setEra(era);
	return;

}
// .method setLocalYear(I)V
void sun::util::calendar::LocalGregorianCalendar_S_Date::setLocalYear(int year)
{
	
	//    .param p1, "year"    # I
	this->setYear(year);
	return;

}
// .method public setNormalizedYear(I)V
void sun::util::calendar::LocalGregorianCalendar_S_Date::setNormalizedYear(int normalizedYear)
{
	
	//    .param p1, "normalizedYear"    # I
	this->gregorianYear = normalizedYear;
	return;

}
// .method public setYear(I)Lsun/util/calendar/LocalGregorianCalendar$Date;
std::shared_ptr<sun::util::calendar::LocalGregorianCalendar_S_Date> sun::util::calendar::LocalGregorianCalendar_S_Date::setYear(int localYear)
{
	
	//    .param p1, "localYear"    # I
	if ( this->getYear() == localYear )
		goto label_cond_d;
	this->setYear(localYear);
	this->gregorianYear = -0x80000000;
label_cond_d:
	return this;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::calendar::LocalGregorianCalendar_S_Date::toString()
{
	
	char cVar0;
	int cVar1;
	std::shared_ptr<java::lang::String> time;
	std::shared_ptr<java::lang::StringBuffer> sb;
	std::shared_ptr<sun::util::calendar::Era> era;
	std::shared_ptr<java::lang::String> abbr;
	
	cVar0 = 0x2e;
	cVar1 = 0x2;
	time = this->toString();
	//    .local v3, "time":Ljava/lang/String;
	sb = std::make_shared<java::lang::StringBuffer>();
	//    .local v2, "sb":Ljava/lang/StringBuffer;
	era = this->getEra();
	//    .local v1, "era":Lsun/util/calendar/Era;
	if ( !(era) )  
		goto label_cond_25;
	abbr = era->getAbbreviation();
	//    .local v0, "abbr":Ljava/lang/String;
	if ( !(abbr) )  
		goto label_cond_25;
	sb->append(abbr);
	//    .end local v0    # "abbr":Ljava/lang/String;
label_cond_25:
	sb->append(this->getYear())->append(cVar0);
	sun::util::calendar::CalendarUtils::sprintf0d(sb, this->getMonth(), cVar1)->append(cVar0);
	sun::util::calendar::CalendarUtils::sprintf0d(sb, this->getDayOfMonth(), cVar1);
	sb->append(time->substring(time->indexOf(0x54)));
	return sb->toString();

}


