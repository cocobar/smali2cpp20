#ifndef __android_icu_impl_Norm2AllModes_S_FCDNormalizer2__
#define __android_icu_impl_Norm2AllModes_S_FCDNormalizer2__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\Norm2AllModes$FCDNormalizer2.smali
#include "java2ctype.h"
#include "android.icu.impl.Norm2AllModes_S_Normalizer2WithImpl.h"
#include "android.icu.impl.Normalizer2Impl_S_ReorderingBuffer.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "java.lang.CharSequence.h"

namespace android::icu::impl{
class Norm2AllModes_S_FCDNormalizer2 : public android::icu::impl::Norm2AllModes_S_Normalizer2WithImpl {
protected:
	void virtual normalize(std::shared_ptr<java::lang::CharSequence> src,std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> buffer);
	void virtual normalizeAndAppend(std::shared_ptr<java::lang::CharSequence> src,bool doNormalize,std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> buffer);
private:
public:
	Norm2AllModes_S_FCDNormalizer2(std::shared_ptr<android::icu::impl::Normalizer2Impl> ni);
	int virtual getQuickCheck(int c);
	bool virtual hasBoundaryAfter(int c);
	bool virtual hasBoundaryBefore(int c);
	bool virtual isInert(int c);
	int virtual spanQuickCheckYes(std::shared_ptr<java::lang::CharSequence> s);
public:
	virtual ~Norm2AllModes_S_FCDNormalizer2(){
	}

}; // class Norm2AllModes_S_FCDNormalizer2
}; // namespace android::icu::impl

#endif //__android_icu_impl_Norm2AllModes_S_FCDNormalizer2__

