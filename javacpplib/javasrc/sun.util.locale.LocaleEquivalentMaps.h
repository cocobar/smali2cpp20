#ifndef __sun_util_locale_LocaleEquivalentMaps__
#define __sun_util_locale_LocaleEquivalentMaps__
// H L:\smali2cpp20\x64\Release\out\sun\util\locale\LocaleEquivalentMaps.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Map.h"

namespace sun::util::locale{
class LocaleEquivalentMaps : public java::lang::Object {
protected:
private:
public:
	static std::shared_ptr<java::util::Map<java::lang::String,std::vector<java::lang::String>>> multiEquivsMap;
	static std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> regionVariantEquivMap;
	static std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> singleEquivMap;
	static void static_cinit();
	LocaleEquivalentMaps();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::util::locale::LocaleEquivalentMaps::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~LocaleEquivalentMaps(){
	}

}; // class LocaleEquivalentMaps
}; // namespace sun::util::locale

#endif //__sun_util_locale_LocaleEquivalentMaps__

