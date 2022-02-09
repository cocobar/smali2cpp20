#ifndef __android_icu_util_GenderInfo_S_Gender__
#define __android_icu_util_GenderInfo_S_Gender__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\GenderInfo$Gender.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::util{
class GenderInfo_S_Gender : public java::lang::Enum<android::icu::util::GenderInfo_S_Gender> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::util::GenderInfo_S_Gender>> _S_VALUES;
	GenderInfo_S_Gender(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::util::GenderInfo_S_Gender> FEMALE;
	static std::shared_ptr<android::icu::util::GenderInfo_S_Gender> MALE;
	static std::shared_ptr<android::icu::util::GenderInfo_S_Gender> OTHER;
	static void static_cinit();
	static std::shared_ptr<android::icu::util::GenderInfo_S_Gender> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::util::GenderInfo_S_Gender> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::GenderInfo_S_Gender::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~GenderInfo_S_Gender(){
	}

}; // class GenderInfo_S_Gender
}; // namespace android::icu::util

#endif //__android_icu_util_GenderInfo_S_Gender__

