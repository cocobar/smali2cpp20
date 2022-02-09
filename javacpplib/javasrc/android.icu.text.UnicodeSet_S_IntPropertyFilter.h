#ifndef __android_icu_text_UnicodeSet_S_IntPropertyFilter__
#define __android_icu_text_UnicodeSet_S_IntPropertyFilter__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeSet$IntPropertyFilter.smali
#include "java2ctype.h"
#include "android.icu.text.UnicodeSet_S_Filter.h"

namespace android::icu::text{
class UnicodeSet_S_IntPropertyFilter : public android::icu::text::UnicodeSet_S_Filter {
protected:
private:
public:
	int prop;
	int value;
	UnicodeSet_S_IntPropertyFilter(int prop,int value);
	bool virtual contains(int ch);
public:
	virtual ~UnicodeSet_S_IntPropertyFilter(){
	}

}; // class UnicodeSet_S_IntPropertyFilter
}; // namespace android::icu::text

#endif //__android_icu_text_UnicodeSet_S_IntPropertyFilter__

