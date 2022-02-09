#ifndef __android_icu_text_FilteredNormalizer2__
#define __android_icu_text_FilteredNormalizer2__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\FilteredNormalizer2.smali
#include "java2ctype.h"
#include "android.icu.text.Normalizer_S_QuickCheckResult.h"
#include "android.icu.text.Normalizer2.h"
#include "android.icu.text.UnicodeSet_S_SpanCondition.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Appendable.h"
#include "java.lang.CharSequence.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

namespace android::icu::text{
class FilteredNormalizer2 : public android::icu::text::Normalizer2 {
protected:
private:
	std::shared_ptr<android::icu::text::Normalizer2> norm2;
	std::shared_ptr<android::icu::text::UnicodeSet> set;
	std::shared_ptr<java::lang::Appendable> virtual normalize(std::shared_ptr<java::lang::CharSequence> src,std::shared_ptr<java::lang::Appendable> dest,std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> spanCondition);
	std::shared_ptr<java::lang::StringBuilder> virtual normalizeSecondAndAppend(std::shared_ptr<java::lang::StringBuilder> first,std::shared_ptr<java::lang::CharSequence> second,bool doNormalize);
public:
	FilteredNormalizer2(std::shared_ptr<android::icu::text::Normalizer2> n2,std::shared_ptr<android::icu::text::UnicodeSet> filterSet);
	std::shared_ptr<java::lang::StringBuilder> virtual append(std::shared_ptr<java::lang::StringBuilder> first,std::shared_ptr<java::lang::CharSequence> second);
	int virtual composePair(int a,int b);
	int virtual getCombiningClass(int c);
	std::shared_ptr<java::lang::String> virtual getDecomposition(int c);
	std::shared_ptr<java::lang::String> virtual getRawDecomposition(int c);
	bool virtual hasBoundaryAfter(int c);
	bool virtual hasBoundaryBefore(int c);
	bool virtual isInert(int c);
	bool virtual isNormalized(std::shared_ptr<java::lang::CharSequence> s);
	std::shared_ptr<java::lang::Appendable> virtual normalize(std::shared_ptr<java::lang::CharSequence> src,std::shared_ptr<java::lang::Appendable> dest);
	std::shared_ptr<java::lang::StringBuilder> virtual normalize(std::shared_ptr<java::lang::CharSequence> src,std::shared_ptr<java::lang::StringBuilder> dest);
	std::shared_ptr<java::lang::StringBuilder> virtual normalizeSecondAndAppend(std::shared_ptr<java::lang::StringBuilder> first,std::shared_ptr<java::lang::CharSequence> second);
	std::shared_ptr<android::icu::text::Normalizer_S_QuickCheckResult> virtual quickCheck(std::shared_ptr<java::lang::CharSequence> s);
	int virtual spanQuickCheckYes(std::shared_ptr<java::lang::CharSequence> s);
public:
	virtual ~FilteredNormalizer2(){
	}

}; // class FilteredNormalizer2
}; // namespace android::icu::text

#endif //__android_icu_text_FilteredNormalizer2__

