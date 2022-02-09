#ifndef __android_icu_text_DateFormatSymbols_S_CalendarDataSink__
#define __android_icu_text_DateFormatSymbols_S_CalendarDataSink__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DateFormatSymbols$CalendarDataSink.smali
#include "java2ctype.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Sink.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "android.icu.text.DateFormatSymbols_S_CalendarDataSink_S_AliasType.h"
#include "java.lang.String.h"
#include "java.util.List.h"
#include "java.util.Map.h"
#include "java.util.Set.h"

namespace android::icu::text{
class DateFormatSymbols_S_CalendarDataSink : public android::icu::impl::UResource_S_Sink {
protected:
	void virtual processResource(std::shared_ptr<java::lang::String> path,std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value);
private:
	static std::shared_ptr<java::lang::String> CALENDAR_ALIAS_PREFIX;
	std::shared_ptr<java::lang::String> aliasRelativePath;
	std::shared_ptr<java::util::Set<java::lang::String>> resourcesToVisit;
	std::shared_ptr<android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType> virtual processAliasFromValue(std::shared_ptr<java::lang::String> currentRelativePath,std::shared_ptr<android::icu::impl::UResource_S_Value> value);
public:
	static bool _assertionsDisabled;
	std::shared_ptr<java::util::List<java::lang::String>> aliasPathPairs;
	std::shared_ptr<java::util::Map<java::lang::String,std::vector<java::lang::String>>> arrays;
	std::shared_ptr<java::lang::String> currentCalendarType;
	std::shared_ptr<java::util::Map<java::lang::String,java::util::Map<java::lang::String,java::lang::String>>> maps;
	std::shared_ptr<java::lang::String> nextCalendarType;
	static void static_cinit();
	DateFormatSymbols_S_CalendarDataSink();
	void virtual preEnumerate(std::shared_ptr<java::lang::String> calendarType);
	void virtual put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback);
	void virtual visitAllResources();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::DateFormatSymbols_S_CalendarDataSink::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~DateFormatSymbols_S_CalendarDataSink(){
	}

}; // class DateFormatSymbols_S_CalendarDataSink
}; // namespace android::icu::text

#endif //__android_icu_text_DateFormatSymbols_S_CalendarDataSink__

