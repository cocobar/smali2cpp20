#ifndef __android_icu_text_DateIntervalInfo_S_DateIntervalSink__
#define __android_icu_text_DateIntervalInfo_S_DateIntervalSink__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DateIntervalInfo$DateIntervalSink.smali
#include "java2ctype.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Sink.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "android.icu.text.DateIntervalInfo.h"
#include "java.lang.CharSequence.h"
#include "java.lang.String.h"

namespace android::icu::text{
class DateIntervalInfo_S_DateIntervalSink : public android::icu::impl::UResource_S_Sink {
protected:
private:
	static std::shared_ptr<java::lang::String> ACCEPTED_PATTERN_LETTERS;
	static std::shared_ptr<java::lang::String> DATE_INTERVAL_PATH_PREFIX;
	static std::shared_ptr<java::lang::String> DATE_INTERVAL_PATH_SUFFIX;
	std::shared_ptr<java::lang::String> virtual getCalendarTypeFromPath(std::shared_ptr<java::lang::String> path);
	void virtual setIntervalPatternIfAbsent(std::shared_ptr<java::lang::String> currentSkeleton,std::shared_ptr<java::lang::String> lrgDiffCalUnit,std::shared_ptr<android::icu::impl::UResource_S_Value> intervalPattern);
	std::shared_ptr<java::lang::CharSequence> virtual validateAndProcessPatternLetter(std::shared_ptr<java::lang::CharSequence> cVar2);
public:
	std::shared_ptr<android::icu::text::DateIntervalInfo> dateIntervalInfo;
	std::shared_ptr<java::lang::String> nextCalendarType;
	static void static_cinit();
	DateIntervalInfo_S_DateIntervalSink(std::shared_ptr<android::icu::text::DateIntervalInfo> dateIntervalInfo);
	std::shared_ptr<java::lang::String> virtual getAndResetNextCalendarType();
	void virtual processSkeletonTable(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value);
	void virtual put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::DateIntervalInfo_S_DateIntervalSink::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~DateIntervalInfo_S_DateIntervalSink(){
	}

}; // class DateIntervalInfo_S_DateIntervalSink
}; // namespace android::icu::text

#endif //__android_icu_text_DateIntervalInfo_S_DateIntervalSink__

