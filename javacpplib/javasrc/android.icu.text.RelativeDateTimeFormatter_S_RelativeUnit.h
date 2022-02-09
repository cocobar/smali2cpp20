#ifndef __android_icu_text_RelativeDateTimeFormatter_S_RelativeUnit__
#define __android_icu_text_RelativeDateTimeFormatter_S_RelativeUnit__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RelativeDateTimeFormatter$RelativeUnit.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class RelativeDateTimeFormatter_S_RelativeUnit : public java::lang::Enum<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit>> _S_VALUES;
	RelativeDateTimeFormatter_S_RelativeUnit(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit> DAYS;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit> HOURS;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit> MINUTES;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit> MONTHS;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit> QUARTERS;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit> SECONDS;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit> WEEKS;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit> YEARS;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~RelativeDateTimeFormatter_S_RelativeUnit(){
	}

}; // class RelativeDateTimeFormatter_S_RelativeUnit
}; // namespace android::icu::text

#endif //__android_icu_text_RelativeDateTimeFormatter_S_RelativeUnit__

