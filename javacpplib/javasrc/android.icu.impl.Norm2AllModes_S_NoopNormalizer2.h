#ifndef __android_icu_impl_Norm2AllModes_S_NoopNormalizer2__
#define __android_icu_impl_Norm2AllModes_S_NoopNormalizer2__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\Norm2AllModes$NoopNormalizer2.smali
#include "java2ctype.h"
#include "android.icu.text.Normalizer_S_QuickCheckResult.h"
#include "android.icu.text.Normalizer2.h"
#include "java.lang.Appendable.h"
#include "java.lang.CharSequence.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

namespace android::icu::impl{
class Norm2AllModes_S_NoopNormalizer2 : public android::icu::text::Normalizer2 {
protected:
private:
public:
	Norm2AllModes_S_NoopNormalizer2();
	std::shared_ptr<java::lang::StringBuilder> virtual append(std::shared_ptr<java::lang::StringBuilder> first,std::shared_ptr<java::lang::CharSequence> second);
	std::shared_ptr<java::lang::String> virtual getDecomposition(int c);
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
	virtual ~Norm2AllModes_S_NoopNormalizer2(){
	}

}; // class Norm2AllModes_S_NoopNormalizer2
}; // namespace android::icu::impl

#endif //__android_icu_impl_Norm2AllModes_S_NoopNormalizer2__

