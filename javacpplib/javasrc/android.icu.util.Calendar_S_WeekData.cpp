// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\Calendar$WeekData.smali
#include "java2ctype.h"
#include "android.icu.util.Calendar_S_WeekData.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method public constructor <init>(IIIIII)V
android::icu::util::Calendar_S_WeekData::Calendar_S_WeekData(int fdow,int mdifw,int weekendOnset,int weekendOnsetMillis,int weekendCease,int weekendCeaseMillis)
{
	
	//    .param p1, "fdow"    # I
	//    .param p2, "mdifw"    # I
	//    .param p3, "weekendOnset"    # I
	//    .param p4, "weekendOnsetMillis"    # I
	//    .param p5, "weekendCease"    # I
	//    .param p6, "weekendCeaseMillis"    # I
	// 043    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->firstDayOfWeek = fdow;
	this->minimalDaysInFirstWeek = mdifw;
	this->weekendOnset = weekendOnset;
	this->weekendOnsetMillis = weekendOnsetMillis;
	this->weekendCease = weekendCease;
	this->weekendCeaseMillis = weekendCeaseMillis;
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::util::Calendar_S_WeekData::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<android::icu::util::Calendar_S_WeekData> that;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this != other )
		goto label_cond_5;
	return cVar0;
	// 084    .line 4673
label_cond_5:
	if ( other->instanceOf("android::icu::util::Calendar_S_WeekData") )     
		goto label_cond_a;
	return cVar1;
label_cond_a:
	that = other;
	that->checkCast("android::icu::util::Calendar_S_WeekData");
	//    .local v0, "that":Landroid/icu/util/Calendar$WeekData;
	if ( this->firstDayOfWeek != that->firstDayOfWeek )
		goto label_cond_34;
	if ( this->minimalDaysInFirstWeek != that->minimalDaysInFirstWeek )
		goto label_cond_34;
	if ( this->weekendOnset != that->weekendOnset )
		goto label_cond_34;
	if ( this->weekendOnsetMillis != that->weekendOnsetMillis )
		goto label_cond_34;
	if ( this->weekendCease != that->weekendCease )
		goto label_cond_34;
	if ( this->weekendCeaseMillis != that->weekendCeaseMillis )
		goto label_cond_32;
label_goto_31:
	return cVar0;
label_cond_32:
	cVar0 = cVar1;
	goto label_goto_31;
label_cond_34:
	cVar0 = cVar1;
	goto label_goto_31;

}
// .method public hashCode()I
int android::icu::util::Calendar_S_WeekData::hashCode()
{
	
	return (( (( (( (( (( this->firstDayOfWeek * 0x25) +  this->minimalDaysInFirstWeek) * 0x25) +  this->weekendOnset) * 0x25) +  this->weekendOnsetMillis) * 0x25) +  this->weekendCease) * 0x25) +  this->weekendCeaseMillis);

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Calendar_S_WeekData::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("{")))->append(this->firstDayOfWeek)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")))->append(this->minimalDaysInFirstWeek)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")))->append(this->weekendOnset)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")))->append(this->weekendOnsetMillis)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")))->append(this->weekendCease)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")))->append(this->weekendCeaseMillis)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("}")))->toString();

}


