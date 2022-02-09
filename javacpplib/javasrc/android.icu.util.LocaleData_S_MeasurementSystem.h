#ifndef __android_icu_util_LocaleData_S_MeasurementSystem__
#define __android_icu_util_LocaleData_S_MeasurementSystem__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\LocaleData$MeasurementSystem.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::util{
class LocaleData_S_MeasurementSystem : public java::lang::Object {
protected:
private:
	LocaleData_S_MeasurementSystem();
public:
	static std::shared_ptr<android::icu::util::LocaleData_S_MeasurementSystem> SI;
	static std::shared_ptr<android::icu::util::LocaleData_S_MeasurementSystem> UK;
	static std::shared_ptr<android::icu::util::LocaleData_S_MeasurementSystem> US;
	static void static_cinit();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::LocaleData_S_MeasurementSystem::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~LocaleData_S_MeasurementSystem(){
	}

}; // class LocaleData_S_MeasurementSystem
}; // namespace android::icu::util

#endif //__android_icu_util_LocaleData_S_MeasurementSystem__

