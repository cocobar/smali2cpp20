#ifndef __android_icu_text_DateTimePatternGenerator_S_DateTimeMatcher__
#define __android_icu_text_DateTimePatternGenerator_S_DateTimeMatcher__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DateTimePatternGenerator$DateTimeMatcher.smali
#include "java2ctype.h"
#include "android.icu.text.DateTimePatternGenerator_S_DistanceInfo.h"
#include "android.icu.text.DateTimePatternGenerator_S_FormatParser.h"
#include "android.icu.text.DateTimePatternGenerator_S_SkeletonFields.h"
#include "java.lang.Comparable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class DateTimePatternGenerator_S_DateTimeMatcher : public java::lang::Comparable<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> {
protected:
private:
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_SkeletonFields> baseOriginal;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_SkeletonFields> original;
	std::shared_ptr<int[]> type;
	DateTimePatternGenerator_S_DateTimeMatcher();
public:
	static std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_SkeletonFields> _get0(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> _this);
	static int _get1(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> _this);
	DateTimePatternGenerator_S_DateTimeMatcher(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> _this0);
	int virtual compareTo(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> that);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	void virtual extractFrom(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> source,int fieldMask);
	bool virtual fieldIsNumeric(int field);
	std::shared_ptr<java::lang::String> virtual getBasePattern();
	int virtual getDistance(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> other,int includeMask,std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DistanceInfo> distanceInfo);
	int virtual getFieldMask();
	int virtual hashCode();
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> virtual set(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_FormatParser> fp,bool allowDuplicateFields);
	std::shared_ptr<java::lang::String> virtual toCanonicalString();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~DateTimePatternGenerator_S_DateTimeMatcher(){
	}

}; // class DateTimePatternGenerator_S_DateTimeMatcher
}; // namespace android::icu::text

#endif //__android_icu_text_DateTimePatternGenerator_S_DateTimeMatcher__

