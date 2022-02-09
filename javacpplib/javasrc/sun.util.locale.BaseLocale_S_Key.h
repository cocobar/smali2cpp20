#ifndef __sun_util_locale_BaseLocale_S_Key__
#define __sun_util_locale_BaseLocale_S_Key__
// H L:\smali2cpp20\x64\Release\out\sun\util\locale\BaseLocale$Key.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.ref.SoftReference.h"

namespace sun::util::locale{
class BaseLocale_S_Key : public java::lang::Object {
protected:
private:
	int hash;
	std::shared_ptr<java::lang::ref::SoftReference<java::lang::String>> lang;
	bool normalized;
	std::shared_ptr<java::lang::ref::SoftReference<java::lang::String>> regn;
	std::shared_ptr<java::lang::ref::SoftReference<java::lang::String>> scrt;
	std::shared_ptr<java::lang::ref::SoftReference<java::lang::String>> vart;
	BaseLocale_S_Key(std::shared_ptr<java::lang::String> language,std::shared_ptr<java::lang::String> region);
	BaseLocale_S_Key(std::shared_ptr<java::lang::String> language,std::shared_ptr<java::lang::String> script,std::shared_ptr<java::lang::String> region,std::shared_ptr<java::lang::String> variant,bool normalized);
public:
	static bool _assertionsDisabled;
	static std::shared_ptr<java::lang::ref::SoftReference> _get0(std::shared_ptr<sun::util::locale::BaseLocale_S_Key> _this);
	static std::shared_ptr<java::lang::ref::SoftReference> _get1(std::shared_ptr<sun::util::locale::BaseLocale_S_Key> _this);
	static std::shared_ptr<java::lang::ref::SoftReference> _get2(std::shared_ptr<sun::util::locale::BaseLocale_S_Key> _this);
	static std::shared_ptr<java::lang::ref::SoftReference> _get3(std::shared_ptr<sun::util::locale::BaseLocale_S_Key> _this);
	static void static_cinit();
	BaseLocale_S_Key(std::shared_ptr<java::lang::String> language,std::shared_ptr<java::lang::String> script,std::shared_ptr<java::lang::String> region,std::shared_ptr<java::lang::String> variant);
	BaseLocale_S_Key(std::shared_ptr<java::lang::String> language,std::shared_ptr<java::lang::String> region,std::shared_ptr<sun::util::locale::BaseLocale_S_Key> _this2);
	static std::shared_ptr<sun::util::locale::BaseLocale_S_Key> normalize(std::shared_ptr<sun::util::locale::BaseLocale_S_Key> key);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	int virtual hashCode();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::util::locale::BaseLocale_S_Key::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~BaseLocale_S_Key(){
	}

}; // class BaseLocale_S_Key
}; // namespace sun::util::locale

#endif //__sun_util_locale_BaseLocale_S_Key__

