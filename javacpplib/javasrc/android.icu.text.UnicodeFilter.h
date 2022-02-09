#ifndef __android_icu_text_UnicodeFilter__
#define __android_icu_text_UnicodeFilter__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeFilter.smali
#include "java2ctype.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.UnicodeMatcher.h"

namespace android::icu::text{
class UnicodeFilter : public android::icu::text::UnicodeMatcher {
protected:
	UnicodeFilter();
private:
public:
	bool contains(int var0) = 0;
	int virtual matches(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<int[]> offset,int limit,bool incremental);
public:
	virtual ~UnicodeFilter(){
	}

}; // class UnicodeFilter
}; // namespace android::icu::text

#endif //__android_icu_text_UnicodeFilter__

