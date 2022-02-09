#ifndef __android_icu_impl_ICUResourceBundle_S_OpenType__
#define __android_icu_impl_ICUResourceBundle_S_OpenType__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundle$OpenType.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class ICUResourceBundle_S_OpenType : public java::lang::Enum<android::icu::impl::ICUResourceBundle_S_OpenType> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::impl::ICUResourceBundle_S_OpenType>> _S_VALUES;
	ICUResourceBundle_S_OpenType(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::impl::ICUResourceBundle_S_OpenType> DIRECT;
	static std::shared_ptr<android::icu::impl::ICUResourceBundle_S_OpenType> LOCALE_DEFAULT_ROOT;
	static std::shared_ptr<android::icu::impl::ICUResourceBundle_S_OpenType> LOCALE_ONLY;
	static std::shared_ptr<android::icu::impl::ICUResourceBundle_S_OpenType> LOCALE_ROOT;
	static void static_cinit();
	static std::shared_ptr<android::icu::impl::ICUResourceBundle_S_OpenType> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::impl::ICUResourceBundle_S_OpenType> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::ICUResourceBundle_S_OpenType::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ICUResourceBundle_S_OpenType(){
	}

}; // class ICUResourceBundle_S_OpenType
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUResourceBundle_S_OpenType__

