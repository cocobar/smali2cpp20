#ifndef __android_icu_util_ULocale_S_Category__
#define __android_icu_util_ULocale_S_Category__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\ULocale$Category.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::util{
class ULocale_S_Category : public java::lang::Enum<android::icu::util::ULocale_S_Category> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::util::ULocale_S_Category>> _S_VALUES;
	ULocale_S_Category(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::util::ULocale_S_Category> DISPLAY;
	static std::shared_ptr<android::icu::util::ULocale_S_Category> FORMAT;
	static void static_cinit();
	static std::shared_ptr<android::icu::util::ULocale_S_Category> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::util::ULocale_S_Category> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::ULocale_S_Category::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ULocale_S_Category(){
	}

}; // class ULocale_S_Category
}; // namespace android::icu::util

#endif //__android_icu_util_ULocale_S_Category__

