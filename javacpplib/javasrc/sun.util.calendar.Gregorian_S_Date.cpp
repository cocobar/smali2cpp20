// CPP L:\smali2cpp20\x64\Release\out\sun\util\calendar\Gregorian$Date.smali
#include "java2ctype.h"
#include "java.util.TimeZone.h"
#include "sun.util.calendar.BaseCalendar_S_Date.h"
#include "sun.util.calendar.CalendarDate.h"
#include "sun.util.calendar.Gregorian_S_Date.h"

// .method protected constructor <init>()V
sun::util::calendar::Gregorian_S_Date::Gregorian_S_Date()
{
	
	// 023    invoke-direct {p0}, Lsun/util/calendar/BaseCalendar$Date;-><init>()V
	return;

}
// .method protected constructor <init>(Ljava/util/TimeZone;)V
sun::util::calendar::Gregorian_S_Date::Gregorian_S_Date(std::shared_ptr<java::util::TimeZone> zone)
{
	
	//    .param p1, "zone"    # Ljava/util/TimeZone;
	sun::util::calendar::BaseCalendar_S_Date::(zone);
	return;

}
// .method public getNormalizedYear()I
int sun::util::calendar::Gregorian_S_Date::getNormalizedYear()
{
	
	return this->getYear();

}
// .method public setNormalizedYear(I)V
void sun::util::calendar::Gregorian_S_Date::setNormalizedYear(int normalizedYear)
{
	
	//    .param p1, "normalizedYear"    # I
	this->setYear(normalizedYear);
	return;

}


