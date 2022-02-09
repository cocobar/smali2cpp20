#ifndef __sun_util_locale_BaseLocale__
#define __sun_util_locale_BaseLocale__
// H L:\smali2cpp20\x64\Release\out\sun\util\locale\BaseLocale.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "sun.util.locale.BaseLocale_S_Cache.h"

namespace sun::util::locale{
class BaseLocale : public java::lang::Object {
protected:
private:
	static std::shared_ptr<sun::util::locale::BaseLocale_S_Cache> CACHE;
	int hash;
	std::shared_ptr<java::lang::String> language;
	std::shared_ptr<java::lang::String> region;
	std::shared_ptr<java::lang::String> script;
	std::shared_ptr<java::lang::String> variant;
	BaseLocale(std::shared_ptr<java::lang::String> language,std::shared_ptr<java::lang::String> region);
	BaseLocale(std::shared_ptr<java::lang::String> language,std::shared_ptr<java::lang::String> script,std::shared_ptr<java::lang::String> region,std::shared_ptr<java::lang::String> variant);
public:
	static std::shared_ptr<java::lang::String> SEP;
	static void static_cinit();
	BaseLocale(std::shared_ptr<java::lang::String> language,std::shared_ptr<java::lang::String> script,std::shared_ptr<java::lang::String> region,std::shared_ptr<java::lang::String> variant,std::shared_ptr<sun::util::locale::BaseLocale> _this4);
	static std::shared_ptr<sun::util::locale::BaseLocale> createInstance(std::shared_ptr<java::lang::String> language,std::shared_ptr<java::lang::String> region);
	static std::shared_ptr<sun::util::locale::BaseLocale> getInstance(std::shared_ptr<java::lang::String> cVar0,std::shared_ptr<java::lang::String> script,std::shared_ptr<java::lang::String> region,std::shared_ptr<java::lang::String> variant);
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
			sun::util::locale::BaseLocale::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~BaseLocale(){
	}

}; // class BaseLocale
}; // namespace sun::util::locale

#endif //__sun_util_locale_BaseLocale__

