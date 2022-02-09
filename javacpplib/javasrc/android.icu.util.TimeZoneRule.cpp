// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\TimeZoneRule.smali
#include "java2ctype.h"
#include "android.icu.util.TimeZoneRule.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

static android::icu::util::TimeZoneRule::serialVersionUID = 0x5875820a58321ca4L;
// .method public constructor <init>(Ljava/lang/String;II)V
android::icu::util::TimeZoneRule::TimeZoneRule(std::shared_ptr<java::lang::String> name,int rawOffset,int dstSavings)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "rawOffset"    # I
	//    .param p3, "dstSavings"    # I
	// 030    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->name = name;
	this->rawOffset = rawOffset;
	this->dstSavings = dstSavings;
	return;

}
// .method public getDSTSavings()I
int android::icu::util::TimeZoneRule::getDSTSavings()
{
	
	return this->dstSavings;

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::TimeZoneRule::getName()
{
	
	return this->name;

}
// .method public getRawOffset()I
int android::icu::util::TimeZoneRule::getRawOffset()
{
	
	return this->rawOffset;

}
// .method public isEquivalentTo(Landroid/icu/util/TimeZoneRule;)Z
bool android::icu::util::TimeZoneRule::isEquivalentTo(std::shared_ptr<android::icu::util::TimeZoneRule> other)
{
	
	//    .param p1, "other"    # Landroid/icu/util/TimeZoneRule;
	if ( this->rawOffset != other->rawOffset )
		goto label_cond_e;
	if ( this->dstSavings != other->dstSavings )
		goto label_cond_e;
	return 0x1;
	// 112    .line 88
label_cond_e:
	return 0x0;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::TimeZoneRule::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> buf;
	
	buf = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "buf":Ljava/lang/StringBuilder;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("name=")))->append(this->name);
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", stdOffset=")))->append(this->rawOffset);
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", dstSaving=")))->append(this->dstSavings);
	return buf->toString();

}


