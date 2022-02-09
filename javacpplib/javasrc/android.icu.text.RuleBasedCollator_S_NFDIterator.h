#ifndef __android_icu_text_RuleBasedCollator_S_NFDIterator__
#define __android_icu_text_RuleBasedCollator_S_NFDIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RuleBasedCollator$NFDIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class RuleBasedCollator_S_NFDIterator : public java::lang::Object {
protected:
	int nextRawCodePoint() = 0;
private:
	std::shared_ptr<java::lang::String> decomp;
	int index;
public:
	RuleBasedCollator_S_NFDIterator();
	int virtual nextCodePoint();
	int virtual nextDecomposedCodePoint(std::shared_ptr<android::icu::impl::Normalizer2Impl> nfcImpl,int c);
	void virtual reset();
public:
	virtual ~RuleBasedCollator_S_NFDIterator(){
	}

}; // class RuleBasedCollator_S_NFDIterator
}; // namespace android::icu::text

#endif //__android_icu_text_RuleBasedCollator_S_NFDIterator__

