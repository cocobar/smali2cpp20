#ifndef __android_icu_impl_LocaleDisplayNamesImpl_S_Cache__
#define __android_icu_impl_LocaleDisplayNamesImpl_S_Cache__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\LocaleDisplayNamesImpl$Cache.smali
#include "java2ctype.h"
#include "android.icu.text.DisplayContext.h"
#include "android.icu.text.LocaleDisplayNames_S_DialectHandling.h"
#include "android.icu.text.LocaleDisplayNames.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
class LocaleDisplayNamesImpl_S_Cache : public java::lang::Object {
protected:
private:
	static std::shared_ptr<int[]> _android_icu_text_DisplayContext_S_TypeSwitchesValues;
	std::shared_ptr<android::icu::text::LocaleDisplayNames> cache;
	std::shared_ptr<android::icu::text::DisplayContext> capitalization;
	std::shared_ptr<android::icu::text::LocaleDisplayNames_S_DialectHandling> dialectHandling;
	std::shared_ptr<android::icu::util::ULocale> locale;
	std::shared_ptr<android::icu::text::DisplayContext> nameLength;
	std::shared_ptr<android::icu::text::DisplayContext> substituteHandling;
	static int _getandroid_icu_text_DisplayContext_S_TypeSwitchesValues();
	LocaleDisplayNamesImpl_S_Cache();
public:
	LocaleDisplayNamesImpl_S_Cache(std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_Cache> _this0);
	std::shared_ptr<android::icu::text::LocaleDisplayNames> virtual get(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::LocaleDisplayNames_S_DialectHandling> dialectHandling);
	std::shared_ptr<android::icu::text::LocaleDisplayNames> virtual get(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<std::vector<android::icu::text::DisplayContext>> contexts);
public:
	virtual ~LocaleDisplayNamesImpl_S_Cache(){
	}

}; // class LocaleDisplayNamesImpl_S_Cache
}; // namespace android::icu::impl

#endif //__android_icu_impl_LocaleDisplayNamesImpl_S_Cache__

