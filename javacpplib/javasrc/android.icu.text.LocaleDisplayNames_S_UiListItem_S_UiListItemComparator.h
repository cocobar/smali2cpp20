#ifndef __android_icu_text_LocaleDisplayNames_S_UiListItem_S_UiListItemComparator__
#define __android_icu_text_LocaleDisplayNames_S_UiListItem_S_UiListItemComparator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\LocaleDisplayNames$UiListItem$UiListItemComparator.smali
#include "java2ctype.h"
#include "android.icu.text.LocaleDisplayNames_S_UiListItem.h"
#include "java.lang.Object.h"
#include "java.util.Comparator.h"

namespace android::icu::text{
class LocaleDisplayNames_S_UiListItem_S_UiListItemComparator : public java::util::Comparator<android::icu::text::LocaleDisplayNames_S_UiListItem> {
protected:
private:
	std::shared_ptr<java::util::Comparator<java::lang::Object>> collator;
	bool useSelf;
public:
	LocaleDisplayNames_S_UiListItem_S_UiListItemComparator(std::shared_ptr<java::util::Comparator<java::lang::Object>> collator,bool useSelf);
	int virtual compare(std::shared_ptr<android::icu::text::LocaleDisplayNames_S_UiListItem> o1,std::shared_ptr<android::icu::text::LocaleDisplayNames_S_UiListItem> o2);
public:
	virtual ~LocaleDisplayNames_S_UiListItem_S_UiListItemComparator(){
	}

}; // class LocaleDisplayNames_S_UiListItem_S_UiListItemComparator
}; // namespace android::icu::text

#endif //__android_icu_text_LocaleDisplayNames_S_UiListItem_S_UiListItemComparator__

