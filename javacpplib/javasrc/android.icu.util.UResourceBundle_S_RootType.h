#ifndef __android_icu_util_UResourceBundle_S_RootType__
#define __android_icu_util_UResourceBundle_S_RootType__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\UResourceBundle$RootType.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::util{
class UResourceBundle_S_RootType : public java::lang::Enum<android::icu::util::UResourceBundle_S_RootType> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::util::UResourceBundle_S_RootType>> _S_VALUES;
	UResourceBundle_S_RootType(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::util::UResourceBundle_S_RootType> ICU;
	static std::shared_ptr<android::icu::util::UResourceBundle_S_RootType> JAVA;
	static std::shared_ptr<android::icu::util::UResourceBundle_S_RootType> MISSING;
	static void static_cinit();
	static std::shared_ptr<android::icu::util::UResourceBundle_S_RootType> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::util::UResourceBundle_S_RootType> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::UResourceBundle_S_RootType::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~UResourceBundle_S_RootType(){
	}

}; // class UResourceBundle_S_RootType
}; // namespace android::icu::util

#endif //__android_icu_util_UResourceBundle_S_RootType__

