// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\InitialTimeZoneRule.smali
#include "java2ctype.h"
#include "android.icu.util.InitialTimeZoneRule.h"
#include "android.icu.util.TimeZoneRule.h"
#include "java.lang.String.h"
#include "java.util.Date.h"

static android::icu::util::InitialTimeZoneRule::serialVersionUID = 0x1a0b01341cdc0206L;
// .method public constructor <init>(Ljava/lang/String;II)V
android::icu::util::InitialTimeZoneRule::InitialTimeZoneRule(std::shared_ptr<java::lang::String> name,int rawOffset,int dstSavings)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "rawOffset"    # I
	//    .param p3, "dstSavings"    # I
	android::icu::util::TimeZoneRule::(name, rawOffset, dstSavings);
	return;

}
// .method public getFinalStart(II)Ljava/util/Date;
std::shared_ptr<java::util::Date> android::icu::util::InitialTimeZoneRule::getFinalStart(int prevRawOffset,int prevDSTSavings)
{
	
	//    .param p1, "prevRawOffset"    # I
	//    .param p2, "prevDSTSavings"    # I
	return 0x0;

}
// .method public getFirstStart(II)Ljava/util/Date;
std::shared_ptr<java::util::Date> android::icu::util::InitialTimeZoneRule::getFirstStart(int prevRawOffset,int prevDSTSavings)
{
	
	//    .param p1, "prevRawOffset"    # I
	//    .param p2, "prevDSTSavings"    # I
	return 0x0;

}
// .method public getNextStart(JIIZ)Ljava/util/Date;
std::shared_ptr<java::util::Date> android::icu::util::InitialTimeZoneRule::getNextStart(long long base,int prevRawOffset,int prevDSTSavings,bool inclusive)
{
	
	//    .param p1, "base"    # J
	//    .param p3, "prevRawOffset"    # I
	//    .param p4, "prevDSTSavings"    # I
	//    .param p5, "inclusive"    # Z
	return 0x0;

}
// .method public getPreviousStart(JIIZ)Ljava/util/Date;
std::shared_ptr<java::util::Date> android::icu::util::InitialTimeZoneRule::getPreviousStart(long long base,int prevRawOffset,int prevDSTSavings,bool inclusive)
{
	
	//    .param p1, "base"    # J
	//    .param p3, "prevRawOffset"    # I
	//    .param p4, "prevDSTSavings"    # I
	//    .param p5, "inclusive"    # Z
	return 0x0;

}
// .method public isEquivalentTo(Landroid/icu/util/TimeZoneRule;)Z
bool android::icu::util::InitialTimeZoneRule::isEquivalentTo(std::shared_ptr<android::icu::util::TimeZoneRule> other)
{
	
	//    .param p1, "other"    # Landroid/icu/util/TimeZoneRule;
	if ( !(other->instanceOf("android::icu::util::InitialTimeZoneRule")) )  
		goto label_cond_9;
	return this->isEquivalentTo(other);
	// 096    .line 46
label_cond_9:
	return 0x0;

}
// .method public isTransitionRule()Z
bool android::icu::util::InitialTimeZoneRule::isTransitionRule()
{
	
	return 0x0;

}


