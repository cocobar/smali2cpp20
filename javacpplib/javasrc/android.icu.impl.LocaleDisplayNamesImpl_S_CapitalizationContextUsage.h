#ifndef __android_icu_impl_LocaleDisplayNamesImpl_S_CapitalizationContextUsage__
#define __android_icu_impl_LocaleDisplayNamesImpl_S_CapitalizationContextUsage__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\LocaleDisplayNamesImpl$CapitalizationContextUsage.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class LocaleDisplayNamesImpl_S_CapitalizationContextUsage : public java::lang::Enum<android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage>> _S_VALUES;
	LocaleDisplayNamesImpl_S_CapitalizationContextUsage(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage> KEY;
	static std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage> KEYVALUE;
	static std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage> LANGUAGE;
	static std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage> SCRIPT;
	static std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage> TERRITORY;
	static std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage> VARIANT;
	static void static_cinit();
	static std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~LocaleDisplayNamesImpl_S_CapitalizationContextUsage(){
	}

}; // class LocaleDisplayNamesImpl_S_CapitalizationContextUsage
}; // namespace android::icu::impl

#endif //__android_icu_impl_LocaleDisplayNamesImpl_S_CapitalizationContextUsage__

