#ifndef __android_icu_text_UnicodeSet_S_NumericValueFilter__
#define __android_icu_text_UnicodeSet_S_NumericValueFilter__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeSet$NumericValueFilter.smali
#include "java2ctype.h"
#include "android.icu.text.UnicodeSet_S_Filter.h"

namespace android::icu::text{
class UnicodeSet_S_NumericValueFilter : public android::icu::text::UnicodeSet_S_Filter {
protected:
private:
public:
	double value;
	UnicodeSet_S_NumericValueFilter(double value);
	bool virtual contains(int ch);
public:
	virtual ~UnicodeSet_S_NumericValueFilter(){
	}

}; // class UnicodeSet_S_NumericValueFilter
}; // namespace android::icu::text

#endif //__android_icu_text_UnicodeSet_S_NumericValueFilter__
