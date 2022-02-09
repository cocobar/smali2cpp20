#ifndef __android_icu_text_DateTimePatternGenerator_S_AvailableFormatsSink__
#define __android_icu_text_DateTimePatternGenerator_S_AvailableFormatsSink__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DateTimePatternGenerator$AvailableFormatsSink.smali
#include "java2ctype.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Sink.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "android.icu.text.DateTimePatternGenerator_S_PatternInfo.h"
#include "android.icu.text.DateTimePatternGenerator.h"

namespace android::icu::text{
class DateTimePatternGenerator_S_AvailableFormatsSink : public android::icu::impl::UResource_S_Sink {
protected:
private:
public:
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_PatternInfo> returnInfo;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator> this_S_0;
	DateTimePatternGenerator_S_AvailableFormatsSink(std::shared_ptr<android::icu::text::DateTimePatternGenerator> this_S_0,std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_PatternInfo> returnInfo);
	void virtual put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool isRoot);
public:
	virtual ~DateTimePatternGenerator_S_AvailableFormatsSink(){
	}

}; // class DateTimePatternGenerator_S_AvailableFormatsSink
}; // namespace android::icu::text

#endif //__android_icu_text_DateTimePatternGenerator_S_AvailableFormatsSink__

