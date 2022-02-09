#ifndef __android_icu_impl_locale_BaseLocale_S_Key__
#define __android_icu_impl_locale_BaseLocale_S_Key__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\BaseLocale$Key.smali
#include "java2ctype.h"
#include "java.lang.Comparable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl::locale{
class BaseLocale_S_Key : public java::lang::Comparable<android::icu::impl::locale::BaseLocale_S_Key> {
protected:
private:
	int _hash;
	std::shared_ptr<java::lang::String> _lang;
	std::shared_ptr<java::lang::String> _regn;
	std::shared_ptr<java::lang::String> _scrt;
	std::shared_ptr<java::lang::String> _vart;
public:
	static std::shared_ptr<java::lang::String> _get0(std::shared_ptr<android::icu::impl::locale::BaseLocale_S_Key> _this);
	static std::shared_ptr<java::lang::String> _get1(std::shared_ptr<android::icu::impl::locale::BaseLocale_S_Key> _this);
	static std::shared_ptr<java::lang::String> _get2(std::shared_ptr<android::icu::impl::locale::BaseLocale_S_Key> _this);
	static std::shared_ptr<java::lang::String> _get3(std::shared_ptr<android::icu::impl::locale::BaseLocale_S_Key> _this);
	BaseLocale_S_Key(std::shared_ptr<java::lang::String> language,std::shared_ptr<java::lang::String> script,std::shared_ptr<java::lang::String> region,std::shared_ptr<java::lang::String> variant);
	static std::shared_ptr<android::icu::impl::locale::BaseLocale_S_Key> normalize(std::shared_ptr<android::icu::impl::locale::BaseLocale_S_Key> key);
	int virtual compareTo(std::shared_ptr<android::icu::impl::locale::BaseLocale_S_Key> other);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	int virtual hashCode();
public:
	virtual ~BaseLocale_S_Key(){
	}

}; // class BaseLocale_S_Key
}; // namespace android::icu::impl::locale

#endif //__android_icu_impl_locale_BaseLocale_S_Key__

