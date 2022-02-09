#ifndef __sun_util_locale_LocaleObjectCache__
#define __sun_util_locale_LocaleObjectCache__
// H L:\smali2cpp20\x64\Release\out\sun\util\locale\LocaleObjectCache.smali
#include "java2ctype.h"
#include "java.lang.Object.hh"

namespace sun::util::locale{
template <typename K,typename V>
class LocaleObjectCache : public java::lang::Object {
public:
	LocaleObjectCache();
	virtual ~LocaleObjectCache();

}; // class LocaleObjectCache
}; // namespace sun::util::locale

#endif //__sun_util_locale_LocaleObjectCache__

