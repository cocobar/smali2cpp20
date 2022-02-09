#ifndef __android_icu_impl_Norm2AllModes_S_ComposeNormalizer2__
#define __android_icu_impl_Norm2AllModes_S_ComposeNormalizer2__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\Norm2AllModes$ComposeNormalizer2.smali
#include "java2ctype.h"
#include "android.icu.impl.Norm2AllModes_S_Normalizer2WithImpl.h"
#include "android.icu.impl.Normalizer2Impl_S_ReorderingBuffer.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "android.icu.text.Normalizer_S_QuickCheckResult.h"
#include "java.lang.CharSequence.h"

namespace android::icu::impl{
class Norm2AllModes_S_ComposeNormalizer2 : public android::icu::impl::Norm2AllModes_S_Normalizer2WithImpl {
protected:
	void virtual normalize(std::shared_ptr<java::lang::CharSequence> src,std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> buffer);
	void virtual normalizeAndAppend(std::shared_ptr<java::lang::CharSequence> src,bool doNormalize,std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> buffer);
private:
	bool onlyContiguous;
public:
	Norm2AllModes_S_ComposeNormalizer2(std::shared_ptr<android::icu::impl::Normalizer2Impl> ni,bool fcc);
	int virtual getQuickCheck(int c);
	bool virtual hasBoundaryAfter(int c);
	bool virtual hasBoundaryBefore(int c);
	bool virtual isInert(int c);
	bool virtual isNormalized(std::shared_ptr<java::lang::CharSequence> s);
	std::shared_ptr<android::icu::text::Normalizer_S_QuickCheckResult> virtual quickCheck(std::shared_ptr<java::lang::CharSequence> s);
	int virtual spanQuickCheckYes(std::shared_ptr<java::lang::CharSequence> s);
public:
	virtual ~Norm2AllModes_S_ComposeNormalizer2(){
	}

}; // class Norm2AllModes_S_ComposeNormalizer2
}; // namespace android::icu::impl

#endif //__android_icu_impl_Norm2AllModes_S_ComposeNormalizer2__
