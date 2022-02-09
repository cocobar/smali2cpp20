#ifndef __android_icu_util_GenderInfo_S_Cache__
#define __android_icu_util_GenderInfo_S_Cache__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\GenderInfo$Cache.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUCache.h"
#include "android.icu.util.GenderInfo.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"

namespace android::icu::util{
class GenderInfo_S_Cache : public java::lang::Object {
protected:
private:
	std::shared_ptr<android::icu::impl::ICUCache<android::icu::util::ULocale,android::icu::util::GenderInfo>> cache;
	GenderInfo_S_Cache();
	static std::shared_ptr<android::icu::util::GenderInfo> load(std::shared_ptr<android::icu::util::ULocale> ulocale);
public:
	GenderInfo_S_Cache(std::shared_ptr<android::icu::util::GenderInfo_S_Cache> _this0);
	std::shared_ptr<android::icu::util::GenderInfo> virtual get(std::shared_ptr<android::icu::util::ULocale> locale);
public:
	virtual ~GenderInfo_S_Cache(){
	}

}; // class GenderInfo_S_Cache
}; // namespace android::icu::util

#endif //__android_icu_util_GenderInfo_S_Cache__

