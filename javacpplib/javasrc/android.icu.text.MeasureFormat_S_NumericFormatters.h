#ifndef __android_icu_text_MeasureFormat_S_NumericFormatters__
#define __android_icu_text_MeasureFormat_S_NumericFormatters__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\MeasureFormat$NumericFormatters.smali
#include "java2ctype.h"
#include "android.icu.text.DateFormat.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class MeasureFormat_S_NumericFormatters : public java::lang::Object {
protected:
private:
	std::shared_ptr<android::icu::text::DateFormat> hourMinute;
	std::shared_ptr<android::icu::text::DateFormat> hourMinuteSecond;
	std::shared_ptr<android::icu::text::DateFormat> minuteSecond;
public:
	MeasureFormat_S_NumericFormatters(std::shared_ptr<android::icu::text::DateFormat> hourMinute,std::shared_ptr<android::icu::text::DateFormat> minuteSecond,std::shared_ptr<android::icu::text::DateFormat> hourMinuteSecond);
	std::shared_ptr<android::icu::text::DateFormat> virtual getHourMinute();
	std::shared_ptr<android::icu::text::DateFormat> virtual getHourMinuteSecond();
	std::shared_ptr<android::icu::text::DateFormat> virtual getMinuteSecond();
public:
	virtual ~MeasureFormat_S_NumericFormatters(){
	}

}; // class MeasureFormat_S_NumericFormatters
}; // namespace android::icu::text

#endif //__android_icu_text_MeasureFormat_S_NumericFormatters__

