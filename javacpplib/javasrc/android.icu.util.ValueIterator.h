#ifndef __android_icu_util_ValueIterator__
#define __android_icu_util_ValueIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\ValueIterator.smali
#include "java2ctype.h"
#include "android.icu.util.ValueIterator_S_Element.h"
#include "java.lang.Object.h"

namespace android::icu::util{
class ValueIterator : public java::lang::Object {
protected:
private:
public:
	bool next(std::shared_ptr<android::icu::util::ValueIterator_S_Element> var0) = 0;
	void reset() = 0;
	void setRange(int var0,int var1) = 0;
	ValueIterator(){ };
	virtual ~ValueIterator(){ };

}; // class ValueIterator
}; // namespace android::icu::util

#endif //__android_icu_util_ValueIterator__

