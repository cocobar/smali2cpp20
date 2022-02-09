#ifndef __android_icu_text_ChineseDateFormat_S_Field__
#define __android_icu_text_ChineseDateFormat_S_Field__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\ChineseDateFormat$Field.smali
#include "java2ctype.h"
#include "android.icu.text.DateFormat_S_Field.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class ChineseDateFormat_S_Field : public android::icu::text::DateFormat_S_Field {
protected:
	ChineseDateFormat_S_Field(std::shared_ptr<java::lang::String> name,int calendarField);
	std::shared_ptr<java::lang::Object> virtual readResolve();
private:
	static long long serialVersionUID;
public:
	static std::shared_ptr<android::icu::text::ChineseDateFormat_S_Field> IS_LEAP_MONTH;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::DateFormat_S_Field> ofCalendarField(int calendarField);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::ChineseDateFormat_S_Field::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ChineseDateFormat_S_Field(){
	}

}; // class ChineseDateFormat_S_Field
}; // namespace android::icu::text

#endif //__android_icu_text_ChineseDateFormat_S_Field__

