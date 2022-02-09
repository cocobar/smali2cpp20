#ifndef __android_icu_util_IslamicCalendar_S_CalculationType__
#define __android_icu_util_IslamicCalendar_S_CalculationType__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\IslamicCalendar$CalculationType.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::util{
class IslamicCalendar_S_CalculationType : public java::lang::Enum<android::icu::util::IslamicCalendar_S_CalculationType> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::util::IslamicCalendar_S_CalculationType>> _S_VALUES;
	std::shared_ptr<java::lang::String> bcpType;
	IslamicCalendar_S_CalculationType(std::shared_ptr<java::lang::String> var0,int var1,std::shared_ptr<java::lang::String> bcpType);
public:
	static std::shared_ptr<android::icu::util::IslamicCalendar_S_CalculationType> ISLAMIC;
	static std::shared_ptr<android::icu::util::IslamicCalendar_S_CalculationType> ISLAMIC_CIVIL;
	static std::shared_ptr<android::icu::util::IslamicCalendar_S_CalculationType> ISLAMIC_TBLA;
	static std::shared_ptr<android::icu::util::IslamicCalendar_S_CalculationType> ISLAMIC_UMALQURA;
	static void static_cinit();
	static std::shared_ptr<android::icu::util::IslamicCalendar_S_CalculationType> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::util::IslamicCalendar_S_CalculationType> values();
	std::shared_ptr<java::lang::String> virtual bcpType();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::IslamicCalendar_S_CalculationType::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~IslamicCalendar_S_CalculationType(){
	}

}; // class IslamicCalendar_S_CalculationType
}; // namespace android::icu::util

#endif //__android_icu_util_IslamicCalendar_S_CalculationType__

