#ifndef __android_icu_text_DateFormatSymbols_S_CalendarDataSink_S_AliasType__
#define __android_icu_text_DateFormatSymbols_S_CalendarDataSink_S_AliasType__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DateFormatSymbols$CalendarDataSink$AliasType.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class DateFormatSymbols_S_CalendarDataSink_S_AliasType : public java::lang::Enum<android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType>> _S_VALUES;
	DateFormatSymbols_S_CalendarDataSink_S_AliasType(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType> DIFFERENT_CALENDAR;
	static std::shared_ptr<android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType> GREGORIAN;
	static std::shared_ptr<android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType> NONE;
	static std::shared_ptr<android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType> SAME_CALENDAR;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~DateFormatSymbols_S_CalendarDataSink_S_AliasType(){
	}

}; // class DateFormatSymbols_S_CalendarDataSink_S_AliasType
}; // namespace android::icu::text

#endif //__android_icu_text_DateFormatSymbols_S_CalendarDataSink_S_AliasType__

