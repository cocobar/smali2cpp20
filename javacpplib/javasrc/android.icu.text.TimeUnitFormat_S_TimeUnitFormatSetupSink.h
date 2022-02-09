#ifndef __android_icu_text_TimeUnitFormat_S_TimeUnitFormatSetupSink__
#define __android_icu_text_TimeUnitFormat_S_TimeUnitFormatSetupSink__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\TimeUnitFormat$TimeUnitFormatSetupSink.smali
#include "java2ctype.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Sink.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "android.icu.util.TimeUnit.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Map.h"
#include "java.util.Set.h"

namespace android::icu::text{
class TimeUnitFormat_S_TimeUnitFormatSetupSink : public android::icu::impl::UResource_S_Sink {
protected:
private:
public:
	bool beenHere;
	std::shared_ptr<android::icu::util::ULocale> locale;
	std::shared_ptr<java::util::Set<java::lang::String>> pluralKeywords;
	int style;
	std::shared_ptr<java::util::Map<android::icu::util::TimeUnit,java::util::Map<java::lang::String,std::vector<java::lang::Object>>>> timeUnitToCountToPatterns;
	TimeUnitFormat_S_TimeUnitFormatSetupSink(std::shared_ptr<java::util::Map<android::icu::util::TimeUnit,java::util::Map<java::lang::String,std::vector<java::lang::Object>>>> timeUnitToCountToPatterns,int style,std::shared_ptr<java::util::Set<java::lang::String>> pluralKeywords,std::shared_ptr<android::icu::util::ULocale> locale);
	void virtual put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback);
public:
	virtual ~TimeUnitFormat_S_TimeUnitFormatSetupSink(){
	}

}; // class TimeUnitFormat_S_TimeUnitFormatSetupSink
}; // namespace android::icu::text

#endif //__android_icu_text_TimeUnitFormat_S_TimeUnitFormatSetupSink__

