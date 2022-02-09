// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DateTimePatternGenerator$DistanceInfo.smali
#include "java2ctype.h"
#include "android.icu.text.DateTimePatternGenerator_S_DistanceInfo.h"
#include "android.icu.text.DateTimePatternGenerator.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method private constructor <init>()V
android::icu::text::DateTimePatternGenerator_S_DistanceInfo::DateTimePatternGenerator_S_DistanceInfo()
{
	
	// 029    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/text/DateTimePatternGenerator$DistanceInfo;)V
android::icu::text::DateTimePatternGenerator_S_DistanceInfo::DateTimePatternGenerator_S_DistanceInfo(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DistanceInfo> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/text/DateTimePatternGenerator$DistanceInfo;
	// 039    invoke-direct {p0}, Landroid/icu/text/DateTimePatternGenerator$DistanceInfo;-><init>()V
	return;

}
// .method addExtra(I)V
void android::icu::text::DateTimePatternGenerator_S_DistanceInfo::addExtra(int field)
{
	
	//    .param p1, "field"    # I
	this->extraFieldMask = (this->extraFieldMask |  (0x1 << field));
	return;

}
// .method addMissing(I)V
void android::icu::text::DateTimePatternGenerator_S_DistanceInfo::addMissing(int field)
{
	
	//    .param p1, "field"    # I
	this->missingFieldMask = (this->missingFieldMask |  (0x1 << field));
	return;

}
// .method clear()V
void android::icu::text::DateTimePatternGenerator_S_DistanceInfo::clear()
{
	
	int cVar0;
	
	cVar0 = 0x0;
	this->extraFieldMask = cVar0;
	this->missingFieldMask = cVar0;
	return;

}
// .method setTo(Landroid/icu/text/DateTimePatternGenerator$DistanceInfo;)V
void android::icu::text::DateTimePatternGenerator_S_DistanceInfo::setTo(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DistanceInfo> other)
{
	
	//    .param p1, "other"    # Landroid/icu/text/DateTimePatternGenerator$DistanceInfo;
	this->missingFieldMask = other->missingFieldMask;
	this->extraFieldMask = other->extraFieldMask;
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateTimePatternGenerator_S_DistanceInfo::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("missingFieldMask: ")))->append(android::icu::text::DateTimePatternGenerator::-wrap4(this->missingFieldMask))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", extraFieldMask: ")))->append(android::icu::text::DateTimePatternGenerator::-wrap4(this->extraFieldMask))->toString();

}


