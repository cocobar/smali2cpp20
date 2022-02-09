#ifndef __android_icu_text_UnicodeMatcher__
#define __android_icu_text_UnicodeMatcher__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeMatcher.smali
#include "java2ctype.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class UnicodeMatcher : public java::lang::Object {
protected:
private:
public:
	static char ETHER;
	static int U_MATCH;
	static int U_MISMATCH;
	static int U_PARTIAL_MATCH;
	void addMatchSetTo(std::shared_ptr<android::icu::text::UnicodeSet> var0) = 0;
	int matches(std::shared_ptr<android::icu::text::Replaceable> var0,std::shared_ptr<int[]> var1,int var2,bool var3) = 0;
	bool matchesIndexValue(int var0) = 0;
	std::shared_ptr<java::lang::String> toPattern(bool var0) = 0;
	UnicodeMatcher(){ };
	virtual ~UnicodeMatcher(){ };

}; // class UnicodeMatcher
}; // namespace android::icu::text

#endif //__android_icu_text_UnicodeMatcher__

