#ifndef __android_icu_text_DateFormat_S_Field__
#define __android_icu_text_DateFormat_S_Field__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DateFormat$Field.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.text.Format_S_Field.h"
#include "java.util.Map.h"

namespace android::icu::text{
class DateFormat_S_Field : public java::text::Format_S_Field {
protected:
	DateFormat_S_Field(std::shared_ptr<java::lang::String> name,int calendarField);
	std::shared_ptr<java::lang::Object> virtual readResolve();
private:
	static std::shared_ptr<std::vector<android::icu::text::DateFormat_S_Field>> CAL_FIELDS;
	static int CAL_FIELD_COUNT;
	static std::shared_ptr<java::util::Map<java::lang::String,android::icu::text::DateFormat_S_Field>> FIELD_NAME_MAP;
	static long long serialVersionUID;
	int calendarField;
public:
	static std::shared_ptr<android::icu::text::DateFormat_S_Field> AM_PM;
	static std::shared_ptr<android::icu::text::DateFormat_S_Field> AM_PM_MIDNIGHT_NOON;
	static std::shared_ptr<android::icu::text::DateFormat_S_Field> DAY_OF_MONTH;
	static std::shared_ptr<android::icu::text::DateFormat_S_Field> DAY_OF_WEEK;
	static std::shared_ptr<android::icu::text::DateFormat_S_Field> DAY_OF_WEEK_IN_MONTH;
	static std::shared_ptr<android::icu::text::DateFormat_S_Field> DAY_OF_YEAR;
	static std::shared_ptr<android::icu::text::DateFormat_S_Field> DOW_LOCAL;
	static std::shared_ptr<android::icu::text::DateFormat_S_Field> ERA;
	static std::shared_ptr<android::icu::text::DateFormat_S_Field> EXTENDED_YEAR;
	static std::shared_ptr<android::icu::text::DateFormat_S_Field> FLEXIBLE_DAY_PERIOD;
	static std::shared_ptr<android::icu::text::DateFormat_S_Field> HOUR0;
	static std::shared_ptr<android::icu::text::DateFormat_S_Field> HOUR1;
	static std::shared_ptr<android::icu::text::DateFormat_S_Field> HOUR_OF_DAY0;
	static std::shared_ptr<android::icu::text::DateFormat_S_Field> HOUR_OF_DAY1;
	static std::shared_ptr<android::icu::text::DateFormat_S_Field> JULIAN_DAY;
	static std::shared_ptr<android::icu::text::DateFormat_S_Field> MILLISECOND;
	static std::shared_ptr<android::icu::text::DateFormat_S_Field> MILLISECONDS_IN_DAY;
	static std::shared_ptr<android::icu::text::DateFormat_S_Field> MINUTE;
	static std::shared_ptr<android::icu::text::DateFormat_S_Field> MONTH;
	static std::shared_ptr<android::icu::text::DateFormat_S_Field> QUARTER;
	static std::shared_ptr<android::icu::text::DateFormat_S_Field> RELATED_YEAR;
	static std::shared_ptr<android::icu::text::DateFormat_S_Field> SECOND;
	static std::shared_ptr<android::icu::text::DateFormat_S_Field> TIME_SEPARATOR;
	static std::shared_ptr<android::icu::text::DateFormat_S_Field> TIME_ZONE;
	static std::shared_ptr<android::icu::text::DateFormat_S_Field> WEEK_OF_MONTH;
	static std::shared_ptr<android::icu::text::DateFormat_S_Field> WEEK_OF_YEAR;
	static std::shared_ptr<android::icu::text::DateFormat_S_Field> YEAR;
	static std::shared_ptr<android::icu::text::DateFormat_S_Field> YEAR_WOY;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::DateFormat_S_Field> ofCalendarField(int calendarField);
	int virtual getCalendarField();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::DateFormat_S_Field::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~DateFormat_S_Field(){
	}

}; // class DateFormat_S_Field
}; // namespace android::icu::text

#endif //__android_icu_text_DateFormat_S_Field__

