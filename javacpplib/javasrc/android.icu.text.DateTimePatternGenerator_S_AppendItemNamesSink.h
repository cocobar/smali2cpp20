#ifndef __android_icu_text_DateTimePatternGenerator_S_AppendItemNamesSink__
#define __android_icu_text_DateTimePatternGenerator_S_AppendItemNamesSink__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DateTimePatternGenerator$AppendItemNamesSink.smali
#include "java2ctype.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Sink.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "android.icu.text.DateTimePatternGenerator.h"

namespace android::icu::text{
class DateTimePatternGenerator_S_AppendItemNamesSink : public android::icu::impl::UResource_S_Sink {
protected:
private:
	DateTimePatternGenerator_S_AppendItemNamesSink(std::shared_ptr<android::icu::text::DateTimePatternGenerator> this_S_0);
public:
	std::shared_ptr<android::icu::text::DateTimePatternGenerator> this_S_0;
	DateTimePatternGenerator_S_AppendItemNamesSink(std::shared_ptr<android::icu::text::DateTimePatternGenerator> this_S_0,std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_AppendItemNamesSink> _this1);
	void virtual put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback);
public:
	virtual ~DateTimePatternGenerator_S_AppendItemNamesSink(){
	}

}; // class DateTimePatternGenerator_S_AppendItemNamesSink
}; // namespace android::icu::text

#endif //__android_icu_text_DateTimePatternGenerator_S_AppendItemNamesSink__

