#ifndef __android_icu_text_RelativeDateTimeFormatter_S_RelativeDateTimeUnit__
#define __android_icu_text_RelativeDateTimeFormatter_S_RelativeDateTimeUnit__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RelativeDateTimeFormatter$RelativeDateTimeUnit.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class RelativeDateTimeFormatter_S_RelativeDateTimeUnit : public java::lang::Enum<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit>> _S_VALUES;
	RelativeDateTimeFormatter_S_RelativeDateTimeUnit(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> DAY;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> FRIDAY;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> HOUR;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> MINUTE;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> MONDAY;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> MONTH;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> QUARTER;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> SATURDAY;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> SECOND;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> SUNDAY;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> THURSDAY;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> TUESDAY;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> WEDNESDAY;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> WEEK;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> YEAR;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~RelativeDateTimeFormatter_S_RelativeDateTimeUnit(){
	}

}; // class RelativeDateTimeFormatter_S_RelativeDateTimeUnit
}; // namespace android::icu::text

#endif //__android_icu_text_RelativeDateTimeFormatter_S_RelativeDateTimeUnit__

