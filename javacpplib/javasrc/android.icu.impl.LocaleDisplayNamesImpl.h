#ifndef __android_icu_impl_LocaleDisplayNamesImpl__
#define __android_icu_impl_LocaleDisplayNamesImpl__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\LocaleDisplayNamesImpl.smali
#include "java2ctype.h"
#include "android.icu.impl.CurrencyData_S_CurrencyDisplayInfo.h"
#include "android.icu.impl.LocaleDisplayNamesImpl_S_Cache.h"
#include "android.icu.impl.LocaleDisplayNamesImpl_S_CapitalizationContextUsage.h"
#include "android.icu.impl.LocaleDisplayNamesImpl_S_DataTable.h"
#include "android.icu.impl.LocaleDisplayNamesImpl_S_DataTableType.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.text.DisplayContext_S_Type.h"
#include "android.icu.text.DisplayContext.h"
#include "android.icu.text.LocaleDisplayNames_S_DialectHandling.h"
#include "android.icu.text.LocaleDisplayNames_S_UiListItem.h"
#include "android.icu.text.LocaleDisplayNames.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Comparator.h"
#include "java.util.List.h"
#include "java.util.Locale.h"
#include "java.util.Map.h"
#include "java.util.Set.h"

namespace android::icu::impl{
class LocaleDisplayNamesImpl : public android::icu::text::LocaleDisplayNames {
protected:
private:
	static std::shared_ptr<int[]> _android_icu_impl_LocaleDisplayNamesImpl_S_DataTableTypeSwitchesValues;
	static std::shared_ptr<int[]> _android_icu_text_DisplayContext_S_TypeSwitchesValues;
	static std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_Cache> cache;
	static std::shared_ptr<java::util::Map<java::lang::String,android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage>> contextUsageTypeMap;
	std::shared_ptr<android::icu::text::DisplayContext> capitalization;
	std::shared_ptr<android::icu::text::BreakIterator> capitalizationBrkIter;
	std::shared_ptr<bool[]> capitalizationUsage;
	std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencyDisplayInfo> currencyDisplayInfo;
	std::shared_ptr<android::icu::text::LocaleDisplayNames_S_DialectHandling> dialectHandling;
	std::shared_ptr<java::lang::String> format;
	char formatCloseParen;
	char formatOpenParen;
	char formatReplaceCloseParen;
	char formatReplaceOpenParen;
	std::shared_ptr<java::lang::String> keyTypeFormat;
	std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_DataTable> langData;
	std::shared_ptr<android::icu::util::ULocale> locale;
	std::shared_ptr<android::icu::text::DisplayContext> nameLength;
	std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_DataTable> regionData;
	std::shared_ptr<java::lang::String> separatorFormat;
	std::shared_ptr<android::icu::text::DisplayContext> substituteHandling;
	static int _getandroid_icu_impl_LocaleDisplayNamesImpl_S_DataTableTypeSwitchesValues();
	static int _getandroid_icu_text_DisplayContext_S_TypeSwitchesValues();
	std::shared_ptr<java::lang::String> virtual adjustForUsageAndContext(std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage> usage,std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::lang::StringBuilder> virtual appendWithSep(std::shared_ptr<java::lang::String> s,std::shared_ptr<java::lang::StringBuilder> b);
	std::shared_ptr<java::lang::String> virtual keyDisplayName(std::shared_ptr<java::lang::String> key,bool skipAdjust);
	std::shared_ptr<java::lang::String> virtual keyValueDisplayName(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::String> value,bool skipAdjust);
	std::shared_ptr<java::lang::String> virtual localeDisplayNameInternal(std::shared_ptr<android::icu::util::ULocale> locale);
	std::shared_ptr<java::lang::String> virtual localeIdName(std::shared_ptr<java::lang::String> localeId);
	std::shared_ptr<android::icu::text::LocaleDisplayNames_S_UiListItem> virtual newRow(std::shared_ptr<android::icu::util::ULocale> modified,std::shared_ptr<android::icu::text::DisplayContext> capContext);
	std::shared_ptr<java::lang::String> virtual regionDisplayName(std::shared_ptr<java::lang::String> region,bool skipAdjust);
	std::shared_ptr<java::lang::String> virtual scriptDisplayNameInContext(std::shared_ptr<java::lang::String> script,bool skipAdjust);
	std::shared_ptr<java::lang::String> virtual variantDisplayName(std::shared_ptr<java::lang::String> variant,bool skipAdjust);
public:
	static std::shared_ptr<android::icu::text::DisplayContext> _get0(std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl> _this);
	static bool _get1(std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl> _this);
	static std::shared_ptr<java::util::Map> _get2();
	static void static_cinit();
	LocaleDisplayNamesImpl(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::LocaleDisplayNames_S_DialectHandling> dialectHandling);
	LocaleDisplayNamesImpl(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<std::vector<android::icu::text::DisplayContext>> contexts);
	static std::shared_ptr<android::icu::text::LocaleDisplayNames> getInstance(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::LocaleDisplayNames_S_DialectHandling> dialectHandling);
	static std::shared_ptr<android::icu::text::LocaleDisplayNames> getInstance(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<std::vector<android::icu::text::DisplayContext>> contexts);
	static bool haveData(std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_DataTableType> type);
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
	std::shared_ptr<java::lang::String> virtual scriptDisplayNameInContext(std::shared_ptr<java::lang::String> script);
	std::shared_ptr<java::lang::String> virtual variantDisplayName(std::shared_ptr<java::lang::String> variant);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::LocaleDisplayNamesImpl::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~LocaleDisplayNamesImpl(){
	}

}; // class LocaleDisplayNamesImpl
}; // namespace android::icu::impl

#endif //__android_icu_impl_LocaleDisplayNamesImpl__

