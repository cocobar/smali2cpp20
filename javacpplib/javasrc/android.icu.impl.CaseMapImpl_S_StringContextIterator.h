#ifndef __android_icu_impl_CaseMapImpl_S_StringContextIterator__
#define __android_icu_impl_CaseMapImpl_S_StringContextIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\CaseMapImpl$StringContextIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.UCaseProps_S_ContextIterator.h"
#include "java.lang.CharSequence.h"

namespace android::icu::impl{
class CaseMapImpl_S_StringContextIterator : public android::icu::impl::UCaseProps_S_ContextIterator {
protected:
	int cpLimit;
	int cpStart;
	int dir;
	int index;
	int limit;
	std::shared_ptr<java::lang::CharSequence> s;
private:
public:
	CaseMapImpl_S_StringContextIterator(std::shared_ptr<java::lang::CharSequence> src);
	int virtual getCPLength();
	int virtual getCPLimit();
	int virtual getCPStart();
	void virtual moveToLimit();
	int virtual next();
	int virtual nextCaseMapCP();
	void virtual reset(int direction);
	void virtual setLimit(int lim);
public:
	virtual ~CaseMapImpl_S_StringContextIterator(){
	}

}; // class CaseMapImpl_S_StringContextIterator
}; // namespace android::icu::impl

#endif //__android_icu_impl_CaseMapImpl_S_StringContextIterator__

