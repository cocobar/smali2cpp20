#ifndef __android_icu_text_RelativeDateTimeFormatter_S_Loader__
#define __android_icu_text_RelativeDateTimeFormatter_S_Loader__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RelativeDateTimeFormatter$Loader.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_RelativeDateTimeFormatterData.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class RelativeDateTimeFormatter_S_Loader : public java::lang::Object {
protected:
private:
	std::shared_ptr<android::icu::util::ULocale> ulocale;
	std::shared_ptr<java::lang::String> virtual getDateTimePattern(std::shared_ptr<android::icu::impl::ICUResourceBundle> r);
public:
	RelativeDateTimeFormatter_S_Loader(std::shared_ptr<android::icu::util::ULocale> ulocale);
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeFormatterData> virtual load();
public:
	virtual ~RelativeDateTimeFormatter_S_Loader(){
	}

}; // class RelativeDateTimeFormatter_S_Loader
}; // namespace android::icu::text

#endif //__android_icu_text_RelativeDateTimeFormatter_S_Loader__

