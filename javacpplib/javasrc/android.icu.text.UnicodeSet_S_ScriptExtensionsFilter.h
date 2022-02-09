#ifndef __android_icu_text_UnicodeSet_S_ScriptExtensionsFilter__
#define __android_icu_text_UnicodeSet_S_ScriptExtensionsFilter__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeSet$ScriptExtensionsFilter.smali
#include "java2ctype.h"
#include "android.icu.text.UnicodeSet_S_Filter.h"

namespace android::icu::text{
class UnicodeSet_S_ScriptExtensionsFilter : public android::icu::text::UnicodeSet_S_Filter {
protected:
private:
public:
	int script;
	UnicodeSet_S_ScriptExtensionsFilter(int script);
	bool virtual contains(int c);
public:
	virtual ~UnicodeSet_S_ScriptExtensionsFilter(){
	}

}; // class UnicodeSet_S_ScriptExtensionsFilter
}; // namespace android::icu::text

#endif //__android_icu_text_UnicodeSet_S_ScriptExtensionsFilter__

