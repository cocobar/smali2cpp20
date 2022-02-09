// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\TimeZoneTransition.smali
#include "java2ctype.h"
#include "android.icu.util.TimeZoneRule.h"
#include "android.icu.util.TimeZoneTransition.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method public constructor <init>(JLandroid/icu/util/TimeZoneRule;Landroid/icu/util/TimeZoneRule;)V
android::icu::util::TimeZoneTransition::TimeZoneTransition(long long time,std::shared_ptr<android::icu::util::TimeZoneRule> from,std::shared_ptr<android::icu::util::TimeZoneRule> to)
{
	
	//    .param p1, "time"    # J
	//    .param p3, "from"    # Landroid/icu/util/TimeZoneRule;
	//    .param p4, "to"    # Landroid/icu/util/TimeZoneRule;
	// 023    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->time = time;
	this->from = from;
	this->to = to;
	return;

}
// .method public getFrom()Landroid/icu/util/TimeZoneRule;
std::shared_ptr<android::icu::util::TimeZoneRule> android::icu::util::TimeZoneTransition::getFrom()
{
	
	return this->from;

}
// .method public getTime()J
long long android::icu::util::TimeZoneTransition::getTime()
{
	
	return this->time;

}
// .method public getTo()Landroid/icu/util/TimeZoneRule;
std::shared_ptr<android::icu::util::TimeZoneRule> android::icu::util::TimeZoneTransition::getTo()
{
	
	return this->to;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::TimeZoneTransition::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> buf;
	
	buf = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "buf":Ljava/lang/StringBuilder;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("time=")))->append(this->time);
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", from={")))->append(this->from)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("}")));
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", to={")))->append(this->to)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("}")));
	return buf->toString();

}


