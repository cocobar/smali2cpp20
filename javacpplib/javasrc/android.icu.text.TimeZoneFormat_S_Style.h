#ifndef __android_icu_text_TimeZoneFormat_S_Style__
#define __android_icu_text_TimeZoneFormat_S_Style__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\TimeZoneFormat$Style.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class TimeZoneFormat_S_Style : public java::lang::Enum<android::icu::text::TimeZoneFormat_S_Style> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::TimeZoneFormat_S_Style>> _S_VALUES;
	TimeZoneFormat_S_Style(std::shared_ptr<java::lang::String> var0,int var1,int flag);
public:
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> EXEMPLAR_LOCATION;
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> GENERIC_LOCATION;
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> GENERIC_LONG;
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> GENERIC_SHORT;
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> ISO_BASIC_FIXED;
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> ISO_BASIC_FULL;
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> ISO_BASIC_LOCAL_FIXED;
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> ISO_BASIC_LOCAL_FULL;
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> ISO_BASIC_LOCAL_SHORT;
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> ISO_BASIC_SHORT;
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> ISO_EXTENDED_FIXED;
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> ISO_EXTENDED_FULL;
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> ISO_EXTENDED_LOCAL_FIXED;
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> ISO_EXTENDED_LOCAL_FULL;
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> LOCALIZED_GMT;
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> LOCALIZED_GMT_SHORT;
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> SPECIFIC_LONG;
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> SPECIFIC_SHORT;
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> ZONE_ID;
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> ZONE_ID_SHORT;
	int flag;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::TimeZoneFormat_S_Style::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~TimeZoneFormat_S_Style(){
	}

}; // class TimeZoneFormat_S_Style
}; // namespace android::icu::text

#endif //__android_icu_text_TimeZoneFormat_S_Style__

