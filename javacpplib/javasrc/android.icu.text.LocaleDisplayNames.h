#ifndef __android_icu_text_LocaleDisplayNames__
#define __android_icu_text_LocaleDisplayNames__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\LocaleDisplayNames.smali
#include "java2ctype.h"
#include "android.icu.text.DisplayContext_S_Type.h"
#include "android.icu.text.DisplayContext.h"
#include "android.icu.text.LocaleDisplayNames_S_DialectHandling.h"
#include "android.icu.text.LocaleDisplayNames_S_UiListItem.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.reflect.Method.h"
#include "java.util.Comparator.h"
#include "java.util.List.h"
#include "java.util.Locale.h"
#include "java.util.Set.h"

namespace android::icu::text{
class LocaleDisplayNames : public java::lang::Object {
protected:
	LocaleDisplayNames();
private:
	static std::shared_ptr<java::lang::reflect::Method> FACTORY_DIALECTHANDLING;
	static std::shared_ptr<java::lang::reflect::Method> FACTORY_DISPLAYCONTEXT;
public:
	static void static_cinit();
	static std::shared_ptr<android::icu::text::LocaleDisplayNames> getInstance(std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<android::icu::text::LocaleDisplayNames> getInstance(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::LocaleDisplayNames_S_DialectHandling> dialectHandling);
	static std::shared_ptr<android::icu::text::LocaleDisplayNames> getInstance(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<std::vector<android::icu::text::DisplayContext>> contexts);
	static std::shared_ptr<android::icu::text::LocaleDisplayNames> getInstance(std::shared_ptr<java::util::Locale> locale);
	static std::shared_ptr<android::icu::text::LocaleDisplayNames> getInstance(std::shared_ptr<java::util::Locale> locale,std::shared_ptr<std::vector<android::icu::text::DisplayContext>> contexts);
	std::shared_ptr<android::icu::text::DisplayContext> getContext(std::shared_ptr<android::icu::text::DisplayContext_S_Type> var0) = 0;
	std::shared_ptr<android::icu::text::LocaleDisplayNames_S_DialectHandling> getDialectHandling() = 0;
	std::shared_ptr<android::icu::util::ULocale> getLocale() = 0;
	std::shared_ptr<java::util::List<android::icu::text::LocaleDisplayNames_S_UiListItem>> virtual getUiList(std::shared_ptr<java::util::Set<android::icu::util::ULocale>> localeSet,bool inSelf,std::shared_ptr<java::util::Comparator<java::lang::Object>> collator);
	std::shared_ptr<java::util::List<android::icu::text::LocaleDisplayNames_S_UiListItem>> getUiListCompareWholeItems(std::shared_ptr<java::util::Set<android::icu::util::ULocale>> var0,std::shared_ptr<java::util::Comparator<android::icu::text::LocaleDisplayNames_S_UiListItem>> var1);
	std::shared_ptr<java::lang::String> keyDisplayName(std::shared_ptr<java::lang::String> var0) = 0;
	std::shared_ptr<java::lang::String> keyValueDisplayName(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::lang::String> var1) = 0;
	std::shared_ptr<java::lang::String> languageDisplayName(std::shared_ptr<java::lang::String> var0) = 0;
	std::shared_ptr<java::lang::String> localeDisplayName(std::shared_ptr<android::icu::util::ULocale> var0) = 0;
	std::shared_ptr<java::lang::String> localeDisplayName(std::shared_ptr<java::lang::String> var0) = 0;
	std::shared_ptr<java::lang::String> localeDisplayName(std::shared_ptr<java::util::Locale> var0) = 0;
	std::shared_ptr<java::lang::String> regionDisplayName(std::shared_ptr<java::lang::String> var0) = 0;
	std::shared_ptr<java::lang::String> scriptDisplayName(int var0) = 0;
	std::shared_ptr<java::lang::String> scriptDisplayName(std::shared_ptr<java::lang::String> var0) = 0;
	std::shared_ptr<java::lang::String> virtual scriptDisplayNameInContext(std::shared_ptr<java::lang::String> script);
	std::shared_ptr<java::lang::String> variantDisplayName(std::shared_ptr<java::lang::String> var0) = 0;
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::LocaleDisplayNames::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~LocaleDisplayNames(){
	}

}; // class LocaleDisplayNames
}; // namespace android::icu::text

#endif //__android_icu_text_LocaleDisplayNames__

