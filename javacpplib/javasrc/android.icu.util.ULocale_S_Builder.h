#ifndef __android_icu_util_ULocale_S_Builder__
#define __android_icu_util_ULocale_S_Builder__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\ULocale$Builder.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.InternalLocaleBuilder.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::util{
class ULocale_S_Builder : public java::lang::Object {
protected:
private:
	std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder> _locbld;
public:
	ULocale_S_Builder();
	std::shared_ptr<android::icu::util::ULocale_S_Builder> virtual addUnicodeLocaleAttribute(std::shared_ptr<java::lang::String> attribute);
	std::shared_ptr<android::icu::util::ULocale> virtual build();
	std::shared_ptr<android::icu::util::ULocale_S_Builder> virtual clear();
	std::shared_ptr<android::icu::util::ULocale_S_Builder> virtual clearExtensions();
	std::shared_ptr<android::icu::util::ULocale_S_Builder> virtual removeUnicodeLocaleAttribute(std::shared_ptr<java::lang::String> attribute);
	std::shared_ptr<android::icu::util::ULocale_S_Builder> virtual setExtension(char key,std::shared_ptr<java::lang::String> value);
	std::shared_ptr<android::icu::util::ULocale_S_Builder> virtual setLanguage(std::shared_ptr<java::lang::String> language);
	std::shared_ptr<android::icu::util::ULocale_S_Builder> virtual setLanguageTag(std::shared_ptr<java::lang::String> languageTag);
	std::shared_ptr<android::icu::util::ULocale_S_Builder> virtual setLocale(std::shared_ptr<android::icu::util::ULocale> locale);
	std::shared_ptr<android::icu::util::ULocale_S_Builder> virtual setRegion(std::shared_ptr<java::lang::String> region);
	std::shared_ptr<android::icu::util::ULocale_S_Builder> virtual setScript(std::shared_ptr<java::lang::String> script);
	std::shared_ptr<android::icu::util::ULocale_S_Builder> virtual setUnicodeLocaleKeyword(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::String> type);
	std::shared_ptr<android::icu::util::ULocale_S_Builder> virtual setVariant(std::shared_ptr<java::lang::String> variant);
public:
	virtual ~ULocale_S_Builder(){
	}

}; // class ULocale_S_Builder
}; // namespace android::icu::util

#endif //__android_icu_util_ULocale_S_Builder__

