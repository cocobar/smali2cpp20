#ifndef __android_icu_impl_ResourceBundleWrapper__
#define __android_icu_impl_ResourceBundleWrapper__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ResourceBundleWrapper.smali
#include "java2ctype.h"
#include "android.icu.impl.CacheBase.h"
#include "android.icu.impl.ResourceBundleWrapper_S_Loader.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Enumeration.h"
#include "java.util.List.h"
#include "java.util.ResourceBundle.h"

namespace android::icu::impl{
class ResourceBundleWrapper : public android::icu::util::UResourceBundle {
protected:
	std::shared_ptr<java::lang::String> virtual getBaseName();
	std::shared_ptr<java::lang::String> virtual getLocaleID();
	std::shared_ptr<java::lang::Object> virtual handleGetObject(std::shared_ptr<java::lang::String> aKey);
private:
	static std::shared_ptr<android::icu::impl::CacheBase<java::lang::String,android::icu::impl::ResourceBundleWrapper,android::icu::impl::ResourceBundleWrapper_S_Loader>> BUNDLE_CACHE;
	static bool DEBUG;
	std::shared_ptr<java::lang::String> baseName;
	std::shared_ptr<java::util::ResourceBundle> bundle;
	std::shared_ptr<java::util::List<java::lang::String>> keys;
	std::shared_ptr<java::lang::String> localeID;
	ResourceBundleWrapper(std::shared_ptr<java::util::ResourceBundle> bundle);
	void virtual initKeysVector();
	static std::shared_ptr<android::icu::impl::ResourceBundleWrapper> instantiateBundle(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> defaultID,std::shared_ptr<java::lang::ClassLoader> root,bool disableFallback);
	static bool localeIDStartsWithLangSubtag(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> lang);
public:
	static bool _get0();
	static std::shared_ptr<java::lang::String> _set0(std::shared_ptr<android::icu::impl::ResourceBundleWrapper> _this,std::shared_ptr<java::lang::String> _value);
	static std::shared_ptr<java::lang::String> _set1(std::shared_ptr<android::icu::impl::ResourceBundleWrapper> _this,std::shared_ptr<java::lang::String> _value);
	static std::shared_ptr<android::icu::impl::ResourceBundleWrapper> _wrap0(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> defaultID,std::shared_ptr<java::lang::ClassLoader> root,bool disableFallback);
	static bool _wrap1(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> lang);
	static void _wrap2(std::shared_ptr<android::icu::impl::ResourceBundleWrapper> _this);
	static void _wrap3(std::shared_ptr<android::icu::impl::ResourceBundleWrapper> _this,std::shared_ptr<java::util::ResourceBundle> parent);
	static void static_cinit();
	ResourceBundleWrapper(std::shared_ptr<java::util::ResourceBundle> bundle,std::shared_ptr<android::icu::impl::ResourceBundleWrapper> _this1);
	static std::shared_ptr<android::icu::impl::ResourceBundleWrapper> getBundleInstance(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::ClassLoader> cVar0,bool disableFallback);
	std::shared_ptr<java::util::Enumeration<java::lang::String>> virtual getKeys();
	std::shared_ptr<android::icu::util::UResourceBundle> virtual getParent();
	std::shared_ptr<android::icu::util::ULocale> virtual getULocale();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::ResourceBundleWrapper::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ResourceBundleWrapper(){
	}

}; // class ResourceBundleWrapper
}; // namespace android::icu::impl

#endif //__android_icu_impl_ResourceBundleWrapper__

