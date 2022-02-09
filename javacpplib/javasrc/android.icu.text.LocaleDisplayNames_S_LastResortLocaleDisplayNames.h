#ifndef __android_icu_text_LocaleDisplayNames_S_LastResortLocaleDisplayNames__
#define __android_icu_text_LocaleDisplayNames_S_LastResortLocaleDisplayNames__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\LocaleDisplayNames$LastResortLocaleDisplayNames.smali
#include "java2ctype.h"
#include "android.icu.text.DisplayContext_S_Type.h"
#include "android.icu.text.DisplayContext.h"
#include "android.icu.text.LocaleDisplayNames_S_DialectHandling.h"
#include "android.icu.text.LocaleDisplayNames_S_UiListItem.h"
#include "android.icu.text.LocaleDisplayNames.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"
#include "java.util.Comparator.h"
#include "java.util.List.h"
#include "java.util.Locale.h"
#include "java.util.Set.h"

namespace android::icu::text{
class LocaleDisplayNames_S_LastResortLocaleDisplayNames : public android::icu::text::LocaleDisplayNames {
protected:
private:
	std::shared_ptr<std::vector<android::icu::text::DisplayContext>> contexts;
	std::shared_ptr<android::icu::util::ULocale> locale;
	LocaleDisplayNames_S_LastResortLocaleDisplayNames(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::LocaleDisplayNames_S_DialectHandling> dialectHandling);
	LocaleDisplayNames_S_LastResortLocaleDisplayNames(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<std::vector<android::icu::text::DisplayContext>> contexts);
public:
	LocaleDisplayNames_S_LastResortLocaleDisplayNames(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::LocaleDisplayNames_S_DialectHandling> dialectHandling,std::shared_ptr<android::icu::text::LocaleDisplayNames_S_LastResortLocaleDisplayNames> _this2);
	LocaleDisplayNames_S_LastResortLocaleDisplayNames(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<std::vector<android::icu::text::DisplayContext>> contexts,std::shared_ptr<android::icu::text::LocaleDisplayNames_S_LastResortLocaleDisplayNames> _this2);
	std::shared_ptr<android::icu::text::DisplayContext> virtual getContext(std::shared_ptr<android::icu::text::DisplayContext_S_Type> type);
	std::shared_ptr<android::icu::text::LocaleDisplayNames_S_DialectHandling> virtual getDialectHandling();
	std::shared_ptr<android::icu::util::ULocale> virtual getLocale();
	std::shared_ptr<java::util::List<android::icu::text::LocaleDisplayNames_S_UiListItem>> virtual getUiListCompareWholeItems(std::shared_ptr<java::util::Set<android::icu::util::ULocale>> localeSet,std::shared_ptr<java::util::Comparator<android::icu::text::LocaleDisplayNames_S_UiListItem>> comparator);
	std::shared_ptr<java::lang::String> virtual keyDisplayName(std::shared_ptr<java::lang::String> key);
	std::shared_ptr<java::lang::String> virtual keyValueDisplayName(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::String> value);
	std::shared_ptr<java::lang::String> virtual languageDisplayName(std::shared_ptr<java::lang::String> lang);
	std::shared_ptr<java::lang::String> virtual localeDisplayName(std::shared_ptr<android::icu::util::ULocale> locale);
	std::shared_ptr<java::lang::String> virtual localeDisplayName(std::shared_ptr<java::lang::String> localeId);
	std::shared_ptr<java::lang::String> virtual localeDisplayName(std::shared_ptr<java::util::Locale> locale);
	std::shared_ptr<java::lang::String> virtual regionDisplayName(std::shared_ptr<java::lang::String> region);
	std::shared_ptr<java::lang::String> virtual scriptDisplayName(int scriptCode);
	std::shared_ptr<java::lang::String> virtual scriptDisplayName(std::shared_ptr<java::lang::String> script);
	std::shared_ptr<java::lang::String> virtual variantDisplayName(std::shared_ptr<java::lang::String> variant);
public:
	virtual ~LocaleDisplayNames_S_LastResortLocaleDisplayNames(){
	}

}; // class LocaleDisplayNames_S_LastResortLocaleDisplayNames
}; // namespace android::icu::text

#endif //__android_icu_text_LocaleDisplayNames_S_LastResortLocaleDisplayNames__

