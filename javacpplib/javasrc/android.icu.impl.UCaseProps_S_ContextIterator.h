#ifndef __android_icu_impl_UCaseProps_S_ContextIterator__
#define __android_icu_impl_UCaseProps_S_ContextIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\UCaseProps$ContextIterator.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
class UCaseProps_S_ContextIterator : public java::lang::Object {
protected:
private:
public:
	int next() = 0;
	void reset(int var0) = 0;
	UCaseProps_S_ContextIterator(){ };
	virtual ~UCaseProps_S_ContextIterator(){ };

}; // class UCaseProps_S_ContextIterator
}; // namespace android::icu::impl

#endif //__android_icu_impl_UCaseProps_S_ContextIterator__

