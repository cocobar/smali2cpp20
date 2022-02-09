#ifndef __android_icu_util_RangeValueIterator__
#define __android_icu_util_RangeValueIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\RangeValueIterator.smali
#include "java2ctype.h"
#include "android.icu.util.RangeValueIterator_S_Element.h"
#include "java.lang.Object.h"

namespace android::icu::util{
class RangeValueIterator : public java::lang::Object {
protected:
private:
public:
	bool next(std::shared_ptr<android::icu::util::RangeValueIterator_S_Element> var0) = 0;
	void reset() = 0;
	RangeValueIterator(){ };
	virtual ~RangeValueIterator(){ };

}; // class RangeValueIterator
}; // namespace android::icu::util

#endif //__android_icu_util_RangeValueIterator__

