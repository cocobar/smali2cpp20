#ifndef __android_icu_impl_locale_BaseLocale__
#define __android_icu_impl_locale_BaseLocale__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\BaseLocale.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.BaseLocale_S_Cache.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl::locale{
class BaseLocale : public java::lang::Object {
protected:
private:
	static std::shared_ptr<android::icu::impl::locale::BaseLocale_S_Cache> CACHE;
	static bool JDKIMPL;
	int _hash;
	std::shared_ptr<java::lang::String> _language;
	std::shared_ptr<java::lang::String> _region;
	std::shared_ptr<java::lang::String> _script;
	std::shared_ptr<java::lang::String> _variant;
	BaseLocale(std::shared_ptr<java::lang::String> language,std::shared_ptr<java::lang::String> script,std::shared_ptr<java::lang::String> region,std::shared_ptr<java::lang::String> variant);
public:
	static std::shared_ptr<android::icu::impl::locale::BaseLocale> ROOT;
	static std::shared_ptr<java::lang::String> SEP;
	static void static_cinit();
	BaseLocale(std::shared_ptr<java::lang::String> language,std::shared_ptr<java::lang::String> script,std::shared_ptr<java::lang::String> region,std::shared_ptr<java::lang::String> variant,std::shared_ptr<android::icu::impl::locale::BaseLocale> _this4);
	static std::shared_ptr<android::icu::impl::locale::BaseLocale> getInstance(std::shared_ptr<java::lang::String> language,std::shared_ptr<java::lang::String> script,std::shared_ptr<java::lang::String> region,std::shared_ptr<java::lang::String> variant);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual getLanguage();
	std::shared_ptr<java::lang::String> virtual getRegion();
	std::shared_ptr<java::lang::String> virtual getScript();
	std::shared_ptr<java::lang::String> virtual getVariant();
	int virtual hashCode();
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::locale::BaseLocale::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~BaseLocale(){
	}

}; // class BaseLocale
}; // namespace android::icu::impl::locale

#endif //__android_icu_impl_locale_BaseLocale__

