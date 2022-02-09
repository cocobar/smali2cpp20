// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneAdapter.smali
#include "java2ctype.h"
#include "android.icu.impl.TimeZoneAdapter.h"
#include "android.icu.util.TimeZone.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Date.h"
#include "java.util.TimeZone.h"

static android::icu::impl::TimeZoneAdapter::serialVersionUID = -0x1c4fcadfcee9017dL;
// .method public constructor <init>(Landroid/icu/util/TimeZone;)V
android::icu::impl::TimeZoneAdapter::TimeZoneAdapter(std::shared_ptr<android::icu::util::TimeZone> zone)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	// 021    invoke-direct {p0}, Ljava/util/TimeZone;-><init>()V
	this->zone = zone;
	this->setID(zone->getID());
	return;

}
// .method public static wrap(Landroid/icu/util/TimeZone;)Ljava/util/TimeZone;
std::shared_ptr<java::util::TimeZone> android::icu::impl::TimeZoneAdapter::wrap(std::shared_ptr<android::icu::util::TimeZone> tz)
{
	
	std::shared_ptr<android::icu::impl::TimeZoneAdapter> cVar0;
	
	//    .param p0, "tz"    # Landroid/icu/util/TimeZone;
	cVar0 = std::make_shared<android::icu::impl::TimeZoneAdapter>(tz);
	return cVar0;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::TimeZoneAdapter::clone()
{
	
	std::shared_ptr<android::icu::impl::TimeZoneAdapter> cVar0;
	std::shared_ptr<android::icu::util::TimeZone> cVar1;
	
	cVar1 = this->zone->clone();
	cVar1->checkCast("android::icu::util::TimeZone");
	cVar0 = std::make_shared<android::icu::impl::TimeZoneAdapter>(cVar1);
	return cVar0;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::impl::TimeZoneAdapter::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	if ( !(obj->instanceOf("android::icu::impl::TimeZoneAdapter")) )  
		goto label_cond_8;
	obj->checkCast("android::icu::impl::TimeZoneAdapter");
	//    .end local p1    # "obj":Ljava/lang/Object;
	//    .restart local p1    # "obj":Ljava/lang/Object;
label_cond_8:
	return this->zone->equals(obj);

}
// .method public getOffset(IIIIII)I
int android::icu::impl::TimeZoneAdapter::getOffset(int era,int year,int month,int day,int dayOfWeek,int millis)
{
	
	//    .param p1, "era"    # I
	//    .param p2, "year"    # I
	//    .param p3, "month"    # I
	//    .param p4, "day"    # I
	//    .param p5, "dayOfWeek"    # I
	//    .param p6, "millis"    # I
	return this->zone->getOffset(era, year, month, day, dayOfWeek, millis);

}
// .method public getRawOffset()I
int android::icu::impl::TimeZoneAdapter::getRawOffset()
{
	
	return this->zone->getRawOffset();

}
// .method public hasSameRules(Ljava/util/TimeZone;)Z
bool android::icu::impl::TimeZoneAdapter::hasSameRules(std::shared_ptr<java::util::TimeZone> other)
{
	
	bool cVar0;
	
	//    .param p1, "other"    # Ljava/util/TimeZone;
	if ( !(other->instanceOf("android::icu::impl::TimeZoneAdapter")) )  
		goto label_cond_f;
	other->checkCast("android::icu::impl::TimeZoneAdapter");
	//    .end local p1    # "other":Ljava/util/TimeZone;
	cVar0 = this->zone->hasSameRules(other->zone);
label_goto_e:
	return cVar0;
	// 172    .restart local p1    # "other":Ljava/util/TimeZone;
label_cond_f:
	cVar0 = 0x0;
	goto label_goto_e;

}
// .method public declared-synchronized hashCode()I
int android::icu::impl::TimeZoneAdapter::hashCode()
{
	
	this->monitor_enter();
	try {
	//label_try_start_1:
	//label_try_end_6:
	}
	catch (...){
		goto label_catchall_9;
	}
	//    .catchall {:try_start_1 .. :try_end_6} :catchall_9
	this->monitor_exit();
	return this->zone->hashCode();
label_catchall_9:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public inDaylightTime(Ljava/util/Date;)Z
bool android::icu::impl::TimeZoneAdapter::inDaylightTime(std::shared_ptr<java::util::Date> date)
{
	
	//    .param p1, "date"    # Ljava/util/Date;
	return this->zone->inDaylightTime(date);

}
// .method public setID(Ljava/lang/String;)V
void android::icu::impl::TimeZoneAdapter::setID(std::shared_ptr<java::lang::String> ID)
{
	
	//    .param p1, "ID"    # Ljava/lang/String;
	this->setID(ID);
	this->zone->setID(ID);
	return;

}
// .method public setRawOffset(I)V
void android::icu::impl::TimeZoneAdapter::setRawOffset(int offsetMillis)
{
	
	//    .param p1, "offsetMillis"    # I
	this->zone->setRawOffset(offsetMillis);
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::TimeZoneAdapter::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("TimeZoneAdapter: ")))->append(this->zone->toString())->toString();

}
// .method public unwrap()Landroid/icu/util/TimeZone;
std::shared_ptr<android::icu::util::TimeZone> android::icu::impl::TimeZoneAdapter::unwrap()
{
	
	return this->zone;

}
// .method public useDaylightTime()Z
bool android::icu::impl::TimeZoneAdapter::useDaylightTime()
{
	
	return this->zone->useDaylightTime();

}


