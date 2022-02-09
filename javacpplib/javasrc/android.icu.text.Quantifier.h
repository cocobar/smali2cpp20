#ifndef __android_icu_text_Quantifier__
#define __android_icu_text_Quantifier__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\Quantifier.smali
#include "java2ctype.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.UnicodeMatcher.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.String.h"

namespace android::icu::text{
class Quantifier : public android::icu::text::UnicodeMatcher {
protected:
private:
	std::shared_ptr<android::icu::text::UnicodeMatcher> matcher;
	int maxCount;
	int minCount;
public:
	static int MAX;
	Quantifier(std::shared_ptr<android::icu::text::UnicodeMatcher> theMatcher,int theMinCount,int theMaxCount);
	void virtual addMatchSetTo(std::shared_ptr<android::icu::text::UnicodeSet> toUnionTo);
	int virtual matches(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<int[]> offset,int limit,bool incremental);
	bool virtual matchesIndexValue(int v);
	std::shared_ptr<java::lang::String> virtual toPattern(bool escapeUnprintable);
public:
	virtual ~Quantifier(){
	}

}; // class Quantifier
}; // namespace android::icu::text

#endif //__android_icu_text_Quantifier__

