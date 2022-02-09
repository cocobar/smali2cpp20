#ifndef __android_icu_text_LocaleDisplayNames_S_UiListItem__
#define __android_icu_text_LocaleDisplayNames_S_UiListItem__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\LocaleDisplayNames$UiListItem.smali
#include "java2ctype.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Comparator.h"

namespace android::icu::text{
class LocaleDisplayNames_S_UiListItem : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<android::icu::util::ULocale> minimized;
	std::shared_ptr<android::icu::util::ULocale> modified;
	std::shared_ptr<java::lang::String> nameInDisplayLocale;
	std::shared_ptr<java::lang::String> nameInSelf;
	LocaleDisplayNames_S_UiListItem(std::shared_ptr<android::icu::util::ULocale> minimized,std::shared_ptr<android::icu::util::ULocale> modified,std::shared_ptr<java::lang::String> nameInDisplayLocale,std::shared_ptr<java::lang::String> nameInSelf);
	static std::shared_ptr<java::util::Comparator<android::icu::text::LocaleDisplayNames_S_UiListItem>> getComparator(std::shared_ptr<java::util::Comparator<java::lang::Object>> comparator,bool inSelf);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	int virtual hashCode();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~LocaleDisplayNames_S_UiListItem(){
	}

}; // class LocaleDisplayNames_S_UiListItem
}; // namespace android::icu::text

#endif //__android_icu_text_LocaleDisplayNames_S_UiListItem__

