#ifndef __android_icu_util_Calendar_S_CalType__
#define __android_icu_util_Calendar_S_CalType__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\Calendar$CalType.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::util{
class Calendar_S_CalType : public java::lang::Enum<android::icu::util::Calendar_S_CalType> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::util::Calendar_S_CalType>> _S_VALUES;
	Calendar_S_CalType(std::shared_ptr<java::lang::String> var0,int var1,std::shared_ptr<java::lang::String> id);
public:
	static std::shared_ptr<android::icu::util::Calendar_S_CalType> BUDDHIST;
	static std::shared_ptr<android::icu::util::Calendar_S_CalType> CHINESE;
	static std::shared_ptr<android::icu::util::Calendar_S_CalType> COPTIC;
	static std::shared_ptr<android::icu::util::Calendar_S_CalType> DANGI;
	static std::shared_ptr<android::icu::util::Calendar_S_CalType> ETHIOPIC;
	static std::shared_ptr<android::icu::util::Calendar_S_CalType> ETHIOPIC_AMETE_ALEM;
	static std::shared_ptr<android::icu::util::Calendar_S_CalType> GREGORIAN;
	static std::shared_ptr<android::icu::util::Calendar_S_CalType> HEBREW;
	static std::shared_ptr<android::icu::util::Calendar_S_CalType> INDIAN;
	static std::shared_ptr<android::icu::util::Calendar_S_CalType> ISLAMIC;
	static std::shared_ptr<android::icu::util::Calendar_S_CalType> ISLAMIC_CIVIL;
	static std::shared_ptr<android::icu::util::Calendar_S_CalType> ISLAMIC_RGSA;
	static std::shared_ptr<android::icu::util::Calendar_S_CalType> ISLAMIC_TBLA;
	static std::shared_ptr<android::icu::util::Calendar_S_CalType> ISLAMIC_UMALQURA;
	static std::shared_ptr<android::icu::util::Calendar_S_CalType> ISO8601;
	static std::shared_ptr<android::icu::util::Calendar_S_CalType> JAPANESE;
	static std::shared_ptr<android::icu::util::Calendar_S_CalType> PERSIAN;
	static std::shared_ptr<android::icu::util::Calendar_S_CalType> ROC;
	static std::shared_ptr<android::icu::util::Calendar_S_CalType> UNKNOWN;
	std::shared_ptr<java::lang::String> id;
	static void static_cinit();
	static std::shared_ptr<android::icu::util::Calendar_S_CalType> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::util::Calendar_S_CalType> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::Calendar_S_CalType::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Calendar_S_CalType(){
	}

}; // class Calendar_S_CalType
}; // namespace android::icu::util

#endif //__android_icu_util_Calendar_S_CalType__

