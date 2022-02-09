#ifndef __android_icu_text_RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit__
#define __android_icu_text_RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RelativeDateTimeFormatter$RelDateTimeDataSink$DateTimeUnit.smali
#include "java2ctype.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_AbsoluteUnit.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_RelativeUnit.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit : public java::lang::Enum<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit>> _S_VALUES;
	RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit(std::shared_ptr<java::lang::String> var0,int var1,std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit> relUnit,std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> absUnit);
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> orNullFromString(std::shared_ptr<java::lang::CharSequence> keyword);
public:
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> DAY;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> FRIDAY;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> HOUR;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> MINUTE;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> MONDAY;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> MONTH;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> QUARTER;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> SATURDAY;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> SECOND;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> SUNDAY;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> THURSDAY;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> TUESDAY;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> WEDNESDAY;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> WEEK;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> YEAR;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> absUnit;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit> relUnit;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> _wrap0(std::shared_ptr<java::lang::CharSequence> keyword);
	static void static_cinit();
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit(){
	}

}; // class RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit
}; // namespace android::icu::text

#endif //__android_icu_text_RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit__

