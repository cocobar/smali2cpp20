#ifndef __android_icu_text_TimeZoneFormat_S_OffsetFields__
#define __android_icu_text_TimeZoneFormat_S_OffsetFields__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\TimeZoneFormat$OffsetFields.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class TimeZoneFormat_S_OffsetFields : public java::lang::Enum<android::icu::text::TimeZoneFormat_S_OffsetFields> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::TimeZoneFormat_S_OffsetFields>> _S_VALUES;
	TimeZoneFormat_S_OffsetFields(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_OffsetFields> H;
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_OffsetFields> HM;
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_OffsetFields> HMS;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_OffsetFields> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_OffsetFields> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::TimeZoneFormat_S_OffsetFields::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~TimeZoneFormat_S_OffsetFields(){
	}

}; // class TimeZoneFormat_S_OffsetFields
}; // namespace android::icu::text

#endif //__android_icu_text_TimeZoneFormat_S_OffsetFields__

