#ifndef __android_icu_text_RelativeDateTimeFormatter_S_Cache_S_1__
#define __android_icu_text_RelativeDateTimeFormatter_S_Cache_S_1__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RelativeDateTimeFormatter$Cache$1.smali
#include "java2ctype.h"
#include "android.icu.impl.SoftCache.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_Cache.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_RelativeDateTimeFormatterData.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"

namespace android::icu::text{
class RelativeDateTimeFormatter_S_Cache_S_1 : public android::icu::impl::SoftCache<java::lang::String,android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeFormatterData,android::icu::util::ULocale> {
protected:
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeFormatterData> virtual createInstance(std::shared_ptr<java::lang::String> key,std::shared_ptr<android::icu::util::ULocale> locale);
private:
public:
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Cache> this_S_1;
	RelativeDateTimeFormatter_S_Cache_S_1(std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Cache> this_S_1);
public:
	virtual ~RelativeDateTimeFormatter_S_Cache_S_1(){
	}

}; // class RelativeDateTimeFormatter_S_Cache_S_1
}; // namespace android::icu::text

#endif //__android_icu_text_RelativeDateTimeFormatter_S_Cache_S_1__

