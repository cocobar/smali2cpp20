#ifndef __sun_util_locale_BaseLocale_S_Cache__
#define __sun_util_locale_BaseLocale_S_Cache__
// H L:\smali2cpp20\x64\Release\out\sun\util\locale\BaseLocale$Cache.smali
#include "java2ctype.h"
#include "sun.util.locale.BaseLocale_S_Key.hhh"
#include "sun.util.locale.BaseLocale.hhh"
#include "sun.util.locale.LocaleObjectCache.hhh"

namespace sun::util::locale{
class BaseLocale_S_Cache : public sun::util::locale::LocaleObjectCache<sun::util::locale::BaseLocale_S_Key,sun::util::locale::BaseLocale> {
public:
	BaseLocale_S_Cache();
	virtual ~BaseLocale_S_Cache();

}; // class BaseLocale_S_Cache
}; // namespace sun::util::locale

#endif //__sun_util_locale_BaseLocale_S_Cache__

