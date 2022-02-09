#ifndef __android_icu_text_ListFormatter_S_Cache__
#define __android_icu_text_ListFormatter_S_Cache__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\ListFormatter$Cache.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUCache.h"
#include "android.icu.text.ListFormatter.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class ListFormatter_S_Cache : public java::lang::Object {
protected:
private:
	std::shared_ptr<android::icu::impl::ICUCache<java::lang::String,android::icu::text::ListFormatter>> cache;
	ListFormatter_S_Cache();
	static std::shared_ptr<android::icu::text::ListFormatter> load(std::shared_ptr<android::icu::util::ULocale> ulocale,std::shared_ptr<java::lang::String> style);
public:
	ListFormatter_S_Cache(std::shared_ptr<android::icu::text::ListFormatter_S_Cache> _this0);
	std::shared_ptr<android::icu::text::ListFormatter> virtual get(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> style);
public:
	virtual ~ListFormatter_S_Cache(){
	}

}; // class ListFormatter_S_Cache
}; // namespace android::icu::text

#endif //__android_icu_text_ListFormatter_S_Cache__

