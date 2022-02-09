#ifndef __sun_util_locale_BaseLocale_S_Cache__
#define __sun_util_locale_BaseLocale_S_Cache__
// H L:\smali2cpp20\x64\Release\out\sun\util\locale\BaseLocale$Cache.smali
#include "java2ctype.h"
#include "sun.util.locale.BaseLocale_S_Key.h"
#include "sun.util.locale.BaseLocale.h"
#include "sun.util.locale.LocaleObjectCache.h"

namespace sun::util::locale{
class BaseLocale_S_Cache : public sun::util::locale::LocaleObjectCache<sun::util::locale::BaseLocale_S_Key,sun::util::locale::BaseLocale> {
protected:
	std::shared_ptr<sun::util::locale::BaseLocale> virtual createObject(std::shared_ptr<sun::util::locale::BaseLocale_S_Key> key);
	std::shared_ptr<sun::util::locale::BaseLocale_S_Key> virtual normalizeKey(std::shared_ptr<sun::util::locale::BaseLocale_S_Key> key);
private:
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	BaseLocale_S_Cache();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::util::locale::BaseLocale_S_Cache::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~BaseLocale_S_Cache(){
	}

}; // class BaseLocale_S_Cache
}; // namespace sun::util::locale

#endif //__sun_util_locale_BaseLocale_S_Cache__

