// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\TimeZone$ConstantZone.smali
#include "java2ctype.h"
#include "android.icu.util.TimeZone_S_ConstantZone.h"
#include "android.icu.util.TimeZone.h"
#include "java.lang.String.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.util.Date.h"

static android::icu::util::TimeZone_S_ConstantZone::serialVersionUID = 0x1L;
// .method private constructor <init>(ILjava/lang/String;)V
android::icu::util::TimeZone_S_ConstantZone::TimeZone_S_ConstantZone(int rawOffset,std::shared_ptr<java::lang::String> ID)
{
	
	//    .param p1, "rawOffset"    # I
	//    .param p2, "ID"    # Ljava/lang/String;
	android::icu::util::TimeZone::(ID);
	this->isFrozen = 0x0;
	this->rawOffset = rawOffset;
	return;

}
// .method synthetic constructor <init>(ILjava/lang/String;Landroid/icu/util/TimeZone$ConstantZone;)V
android::icu::util::TimeZone_S_ConstantZone::TimeZone_S_ConstantZone(int rawOffset,std::shared_ptr<java::lang::String> ID,std::shared_ptr<android::icu::util::TimeZone_S_ConstantZone> _this2)
{
	
	//    .param p1, "rawOffset"    # I
	//    .param p2, "ID"    # Ljava/lang/String;
	//    .param p3, "-this2"    # Landroid/icu/util/TimeZone$ConstantZone;
	android::icu::util::TimeZone_S_ConstantZone::(rawOffset, ID);
	return;

}
// .method public cloneAsThawed()Landroid/icu/util/TimeZone;
std::shared_ptr<android::icu::util::TimeZone> android::icu::util::TimeZone_S_ConstantZone::cloneAsThawed()
{
	
	std::shared_ptr<android::icu::util::TimeZone_S_ConstantZone> tz;
	
	tz = this->cloneAsThawed();
	tz->checkCast("android::icu::util::TimeZone_S_ConstantZone");
	//    .local v0, "tz":Landroid/icu/util/TimeZone$ConstantZone;
	tz->isFrozen = 0x0;
	return tz;

}
// .method public freeze()Landroid/icu/util/TimeZone;
std::shared_ptr<android::icu::util::TimeZone> android::icu::util::TimeZone_S_ConstantZone::freeze()
{
	
	this->isFrozen = 0x1;
	return this;

}
// .method public getOffset(IIIIII)I
int android::icu::util::TimeZone_S_ConstantZone::getOffset(int era,int year,int month,int day,int dayOfWeek,int milliseconds)
{
	
	//    .param p1, "era"    # I
	//    .param p2, "year"    # I
	//    .param p3, "month"    # I
	//    .param p4, "day"    # I
	//    .param p5, "dayOfWeek"    # I
	//    .param p6, "milliseconds"    # I
	return this->rawOffset;

}
// .method public getRawOffset()I
int android::icu::util::TimeZone_S_ConstantZone::getRawOffset()
{
	
	return this->rawOffset;

}
// .method public inDaylightTime(Ljava/util/Date;)Z
bool android::icu::util::TimeZone_S_ConstantZone::inDaylightTime(std::shared_ptr<java::util::Date> date)
{
	
	//    .param p1, "date"    # Ljava/util/Date;
	return 0x0;

}
// .method public isFrozen()Z
bool android::icu::util::TimeZone_S_ConstantZone::isFrozen()
{
	
	return this->isFrozen;

}
// .method public setRawOffset(I)V
void android::icu::util::TimeZone_S_ConstantZone::setRawOffset(int offsetMillis)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "offsetMillis"    # I
	if ( !(this->isFrozen()) )  
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify a frozen TimeZone instance.")));
	// throw
	throw cVar0;
	// 165    .line 1280
label_cond_f:
	this->rawOffset = offsetMillis;
	return;

}
// .method public useDaylightTime()Z
bool android::icu::util::TimeZone_S_ConstantZone::useDaylightTime()
{
	
	return 0x0;

}


