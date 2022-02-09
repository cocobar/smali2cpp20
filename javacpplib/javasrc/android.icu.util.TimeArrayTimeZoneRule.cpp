// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\TimeArrayTimeZoneRule.smali
#include "java2ctype.h"
#include "android.icu.util.TimeArrayTimeZoneRule.h"
#include "android.icu.util.TimeZoneRule.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Long.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Arrays.h"
#include "java.util.Date.h"

static android::icu::util::TimeArrayTimeZoneRule::serialVersionUID = -0xf80c4d5c99c274dL;
// .method public constructor <init>(Ljava/lang/String;II[JI)V
android::icu::util::TimeArrayTimeZoneRule::TimeArrayTimeZoneRule(std::shared_ptr<java::lang::String> name,int rawOffset,int dstSavings,std::shared_ptr<long long[]> startTimes,int timeType)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<long long[]> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "rawOffset"    # I
	//    .param p3, "dstSavings"    # I
	//    .param p4, "startTimes"    # [J
	//    .param p5, "timeType"    # I
	android::icu::util::TimeZoneRule::(name, rawOffset, dstSavings);
	if ( !(startTimes) )  
		goto label_cond_8;
	if ( startTimes->size() )     
		goto label_cond_11;
label_cond_8:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("No start times are specified.")));
	// throw
	throw cVar0;
	// 046    .line 48
label_cond_11:
	cVar1 = startTimes->clone();
	cVar1->checkCast("long long[]");
	this->startTimes = cVar1;
	java::util::Arrays::sort(this->startTimes);
	this->timeType = timeType;
	return;

}
// .method private getUTC(JII)J
long long android::icu::util::TimeArrayTimeZoneRule::getUTC(long long cVar1,int raw,int dst)
{
	
	long long cVar1;
	
	//    .param p1, "time"    # J
	//    .param p3, "raw"    # I
	//    .param p4, "dst"    # I
	if ( this->timeType == 0x2 )
		goto label_cond_7;
	cVar1 = (cVar1 -  (long long)(raw));
label_cond_7:
	if ( this->timeType )     
		goto label_cond_d;
	cVar1 = (cVar1 -  (long long)(dst));
label_cond_d:
	return cVar1;

}
// .method public getFinalStart(II)Ljava/util/Date;
std::shared_ptr<java::util::Date> android::icu::util::TimeArrayTimeZoneRule::getFinalStart(int prevRawOffset,int prevDSTSavings)
{
	
	std::shared_ptr<java::util::Date> cVar0;
	
	//    .param p1, "prevRawOffset"    # I
	//    .param p2, "prevDSTSavings"    # I
	cVar0 = std::make_shared<java::util::Date>(this->getUTC(this->startTimes[( this->startTimes->size() + -0x1)], prevRawOffset, prevDSTSavings));
	return cVar0;

}
// .method public getFirstStart(II)Ljava/util/Date;
std::shared_ptr<java::util::Date> android::icu::util::TimeArrayTimeZoneRule::getFirstStart(int prevRawOffset,int prevDSTSavings)
{
	
	std::shared_ptr<java::util::Date> cVar0;
	
	//    .param p1, "prevRawOffset"    # I
	//    .param p2, "prevDSTSavings"    # I
	cVar0 = std::make_shared<java::util::Date>(this->getUTC(this->startTimes[0x0], prevRawOffset, prevDSTSavings));
	return cVar0;

}
// .method public getNextStart(JIIZ)Ljava/util/Date;
std::shared_ptr<java::util::Date> android::icu::util::TimeArrayTimeZoneRule::getNextStart(long long base,int prevOffset,int prevDSTSavings,bool inclusive)
{
	
	int i;
	auto time;
	std::shared_ptr<java::util::Date> cVar0;
	
	//    .param p1, "base"    # J
	//    .param p3, "prevOffset"    # I
	//    .param p4, "prevDSTSavings"    # I
	//    .param p5, "inclusive"    # Z
	i = ( this->startTimes->size() + -0x1);
	//    .local v0, "i":I
label_goto_5:
	if ( i < 0 ) 
		goto label_cond_19;
	time = this->getUTC(this->startTimes[i], prevOffset, prevDSTSavings);
	//    .local v2, "time":J
	if ( (time > base) < 0 ) 
		goto label_cond_19;
	if ( inclusive )     
		goto label_cond_22;
	if ( (time > base) )     
		goto label_cond_22;
	//    .end local v2    # "time":J
label_cond_19:
	if ( i != ( this->startTimes->size() + -0x1) )
		goto label_cond_25;
	return 0x0;
	// 214    .line 97
	// 215    .restart local v2    # "time":J
label_cond_22:
	i = ( i + -0x1);
	goto label_goto_5;
	// 221    .line 106
	// 222    .end local v2    # "time":J
label_cond_25:
	cVar0 = std::make_shared<java::util::Date>(this->getUTC(this->startTimes[( i + 0x1)], prevOffset, prevDSTSavings));
	return cVar0;

}
// .method public getPreviousStart(JIIZ)Ljava/util/Date;
std::shared_ptr<java::util::Date> android::icu::util::TimeArrayTimeZoneRule::getPreviousStart(long long base,int prevOffset,int prevDSTSavings,bool inclusive)
{
	
	int i;
	long long time;
	std::shared_ptr<java::util::Date> cVar0;
	
	//    .param p1, "base"    # J
	//    .param p3, "prevOffset"    # I
	//    .param p4, "prevDSTSavings"    # I
	//    .param p5, "inclusive"    # Z
	i = ( this->startTimes->size() + -0x1);
	//    .local v0, "i":I
label_goto_5:
	if ( i < 0 ) 
		goto label_cond_22;
	time = this->getUTC(this->startTimes[i], prevOffset, prevDSTSavings);
	//    .local v2, "time":J
	if ( (time > base) < 0 ) 
		goto label_cond_19;
	if ( !(inclusive) )  
		goto label_cond_1f;
	if ( (time > base) )     
		goto label_cond_1f;
label_cond_19:
	cVar0 = std::make_shared<java::util::Date>(time);
	return cVar0;
	// 290    .line 115
label_cond_1f:
	i = ( i + -0x1);
	goto label_goto_5;
	// 296    .line 121
	// 297    .end local v2    # "time":J
label_cond_22:
	return 0x0;

}
// .method public getStartTimes()[J
long long android::icu::util::TimeArrayTimeZoneRule::getStartTimes()
{
	
	std::shared_ptr<long long[]> cVar0;
	
	cVar0 = this->startTimes->clone();
	cVar0->checkCast("long long[]");
	return cVar0;

}
// .method public getTimeType()I
int android::icu::util::TimeArrayTimeZoneRule::getTimeType()
{
	
	return this->timeType;

}
// .method public isEquivalentTo(Landroid/icu/util/TimeZoneRule;)Z
bool android::icu::util::TimeArrayTimeZoneRule::isEquivalentTo(std::shared_ptr<android::icu::util::TimeZoneRule> other)
{
	
	bool cVar0;
	std::shared_ptr<android::icu::util::TimeArrayTimeZoneRule> cVar1;
	std::shared_ptr<android::icu::util::TimeArrayTimeZoneRule> cVar2;
	
	//    .param p1, "other"    # Landroid/icu/util/TimeZoneRule;
	cVar0 = 0x0;
	if ( other->instanceOf("android::icu::util::TimeArrayTimeZoneRule") )     
		goto label_cond_6;
	return cVar0;
	// 345    .line 132
label_cond_6:
	cVar1 = other;
	cVar1->checkCast("android::icu::util::TimeArrayTimeZoneRule");
	if ( this->timeType != cVar1->timeType )
		goto label_cond_21;
	cVar2 = other;
	cVar2->checkCast("android::icu::util::TimeArrayTimeZoneRule");
	if ( !(java::util::Arrays::equals(this->startTimes, cVar2->startTimes)) )  
		goto label_cond_21;
	return this->isEquivalentTo(other);
	// 380    .line 136
label_cond_21:
	return cVar0;

}
// .method public isTransitionRule()Z
bool android::icu::util::TimeArrayTimeZoneRule::isTransitionRule()
{
	
	return 0x1;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::TimeArrayTimeZoneRule::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> buf;
	int i;
	
	buf = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "buf":Ljava/lang/StringBuilder;
	buf->append(this->toString());
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", timeType=")));
	buf->append(this->timeType);
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", startTimes=[")));
	i = 0x0;
	//    .local v1, "i":I
label_goto_1e:
	if ( i >= this->startTimes->size() )
		goto label_cond_39;
	if ( !(i) )  
		goto label_cond_2b;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")));
label_cond_2b:
	buf->append(java::lang::Long::toString(this->startTimes[i]));
	i = ( i + 0x1);
	goto label_goto_1e;
	// 463    .line 177
label_cond_39:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]")));
	return buf->toString();

}


