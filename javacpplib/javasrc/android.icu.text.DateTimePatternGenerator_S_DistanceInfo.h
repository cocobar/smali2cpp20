#ifndef __android_icu_text_DateTimePatternGenerator_S_DistanceInfo__
#define __android_icu_text_DateTimePatternGenerator_S_DistanceInfo__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DateTimePatternGenerator$DistanceInfo.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class DateTimePatternGenerator_S_DistanceInfo : public java::lang::Object {
protected:
private:
	DateTimePatternGenerator_S_DistanceInfo();
public:
	int extraFieldMask;
	int missingFieldMask;
	DateTimePatternGenerator_S_DistanceInfo(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DistanceInfo> _this0);
	void virtual addExtra(int field);
	void virtual addMissing(int field);
	void virtual clear();
	void virtual setTo(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DistanceInfo> other);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~DateTimePatternGenerator_S_DistanceInfo(){
	}

}; // class DateTimePatternGenerator_S_DistanceInfo
}; // namespace android::icu::text

#endif //__android_icu_text_DateTimePatternGenerator_S_DistanceInfo__

