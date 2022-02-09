#ifndef __android_icu_impl_Norm2AllModes_S_Normalizer2WithImpl__
#define __android_icu_impl_Norm2AllModes_S_Normalizer2WithImpl__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\Norm2AllModes$Normalizer2WithImpl.smali
#include "java2ctype.h"
#include "android.icu.impl.Normalizer2Impl_S_ReorderingBuffer.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "android.icu.text.Normalizer_S_QuickCheckResult.h"
#include "android.icu.text.Normalizer2.h"
#include "java.lang.Appendable.h"
#include "java.lang.CharSequence.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

namespace android::icu::impl{
class Norm2AllModes_S_Normalizer2WithImpl : public android::icu::text::Normalizer2 {
protected:
	void normalize(std::shared_ptr<java::lang::CharSequence> var0,std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> var1) = 0;
	void normalizeAndAppend(std::shared_ptr<java::lang::CharSequence> var0,bool var1,std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> var2) = 0;
private:
public:
	std::shared_ptr<android::icu::impl::Normalizer2Impl> impl;
	Norm2AllModes_S_Normalizer2WithImpl(std::shared_ptr<android::icu::impl::Normalizer2Impl> ni);
	std::shared_ptr<java::lang::StringBuilder> virtual append(std::shared_ptr<java::lang::StringBuilder> first,std::shared_ptr<java::lang::CharSequence> second);
	int virtual composePair(int a,int b);
	int virtual getCombiningClass(int c);
	std::shared_ptr<java::lang::String> virtual getDecomposition(int c);
	int getQuickCheck(int var0) = 0;
	std::shared_ptr<java::lang::String> virtual getRawDecomposition(int c);
	bool virtual isNormalized(std::shared_ptr<java::lang::CharSequence> s);
	std::shared_ptr<java::lang::Appendable> virtual normalize(std::shared_ptr<java::lang::CharSequence> src,std::shared_ptr<java::lang::Appendable> dest);
	std::shared_ptr<java::lang::StringBuilder> virtual normalize(std::shared_ptr<java::lang::CharSequence> src,std::shared_ptr<java::lang::StringBuilder> dest);
	std::shared_ptr<java::lang::StringBuilder> virtual normalizeSecondAndAppend(std::shared_ptr<java::lang::StringBuilder> first,std::shared_ptr<java::lang::CharSequence> second);
	std::shared_ptr<java::lang::StringBuilder> virtual normalizeSecondAndAppend(std::shared_ptr<java::lang::StringBuilder> first,std::shared_ptr<java::lang::CharSequence> second,bool doNormalize);
	std::shared_ptr<android::icu::text::Normalizer_S_QuickCheckResult> virtual quickCheck(std::shared_ptr<java::lang::CharSequence> s);
public:
	virtual ~Norm2AllModes_S_Normalizer2WithImpl(){
	}

}; // class Norm2AllModes_S_Normalizer2WithImpl
}; // namespace android::icu::impl

#endif //__android_icu_impl_Norm2AllModes_S_Normalizer2WithImpl__

