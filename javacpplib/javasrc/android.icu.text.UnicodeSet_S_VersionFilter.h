#ifndef __android_icu_text_UnicodeSet_S_VersionFilter__
#define __android_icu_text_UnicodeSet_S_VersionFilter__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeSet$VersionFilter.smali
#include "java2ctype.h"
#include "android.icu.text.UnicodeSet_S_Filter.h"
#include "android.icu.util.VersionInfo.h"

namespace android::icu::text{
class UnicodeSet_S_VersionFilter : public android::icu::text::UnicodeSet_S_Filter {
protected:
private:
public:
	std::shared_ptr<android::icu::util::VersionInfo> version;
	UnicodeSet_S_VersionFilter(std::shared_ptr<android::icu::util::VersionInfo> version);
	bool virtual contains(int ch);
public:
	virtual ~UnicodeSet_S_VersionFilter(){
	}

}; // class UnicodeSet_S_VersionFilter
}; // namespace android::icu::text

#endif //__android_icu_text_UnicodeSet_S_VersionFilter__

