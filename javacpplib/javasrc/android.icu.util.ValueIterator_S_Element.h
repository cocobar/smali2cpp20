#ifndef __android_icu_util_ValueIterator_S_Element__
#define __android_icu_util_ValueIterator_S_Element__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\ValueIterator$Element.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::util{
class ValueIterator_S_Element : public java::lang::Object {
protected:
private:
public:
	int integer;
	std::shared_ptr<java::lang::Object> value;
	ValueIterator_S_Element();
public:
	virtual ~ValueIterator_S_Element(){
	}

}; // class ValueIterator_S_Element
}; // namespace android::icu::util

#endif //__android_icu_util_ValueIterator_S_Element__

