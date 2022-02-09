#ifndef __android_icu_text_RelativeDateTimeFormatter_S_Cache__
#define __android_icu_text_RelativeDateTimeFormatter_S_Cache__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RelativeDateTimeFormatter$Cache.smali
#include "java2ctype.h"
#include "android.icu.impl.CacheBase.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_RelativeDateTimeFormatterData.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class RelativeDateTimeFormatter_S_Cache : public java::lang::Object {
protected:
private:
	std::shared_ptr<android::icu::impl::CacheBase<java::lang::String,android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeFormatterData,android::icu::util::ULocale>> cache;
	RelativeDateTimeFormatter_S_Cache();
public:
	RelativeDateTimeFormatter_S_Cache(std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Cache> _this0);
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeFormatterData> virtual get(std::shared_ptr<android::icu::util::ULocale> locale);
public:
	virtual ~RelativeDateTimeFormatter_S_Cache(){
	}

}; // class RelativeDateTimeFormatter_S_Cache
}; // namespace android::icu::text

#endif //__android_icu_text_RelativeDateTimeFormatter_S_Cache__

