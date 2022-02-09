#ifndef __android_icu_text_RelativeDateTimeFormatter_S_AbsoluteUnit__
#define __android_icu_text_RelativeDateTimeFormatter_S_AbsoluteUnit__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RelativeDateTimeFormatter$AbsoluteUnit.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class RelativeDateTimeFormatter_S_AbsoluteUnit : public java::lang::Enum<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit>> _S_VALUES;
	RelativeDateTimeFormatter_S_AbsoluteUnit(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> DAY;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> FRIDAY;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> MONDAY;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> MONTH;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> NOW;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> QUARTER;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> SATURDAY;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> SUNDAY;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> THURSDAY;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> TUESDAY;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> WEDNESDAY;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> WEEK;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> YEAR;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~RelativeDateTimeFormatter_S_AbsoluteUnit(){
	}

}; // class RelativeDateTimeFormatter_S_AbsoluteUnit
}; // namespace android::icu::text

#endif //__android_icu_text_RelativeDateTimeFormatter_S_AbsoluteUnit__

