#ifndef __android_icu_text_UnicodeSet_S_GeneralCategoryMaskFilter__
#define __android_icu_text_UnicodeSet_S_GeneralCategoryMaskFilter__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeSet$GeneralCategoryMaskFilter.smali
#include "java2ctype.h"
#include "android.icu.text.UnicodeSet_S_Filter.h"

namespace android::icu::text{
class UnicodeSet_S_GeneralCategoryMaskFilter : public android::icu::text::UnicodeSet_S_Filter {
protected:
private:
public:
	int mask;
	UnicodeSet_S_GeneralCategoryMaskFilter(int mask);
	bool virtual contains(int ch);
public:
	virtual ~UnicodeSet_S_GeneralCategoryMaskFilter(){
	}

}; // class UnicodeSet_S_GeneralCategoryMaskFilter
}; // namespace android::icu::text

#endif //__android_icu_text_UnicodeSet_S_GeneralCategoryMaskFilter__
