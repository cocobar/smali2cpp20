#ifndef __android_icu_util_ByteArrayWrapper__
#define __android_icu_util_ByteArrayWrapper__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\ByteArrayWrapper.smali
#include "java2ctype.h"
#include "java.lang.Comparable.h"

namespace android::icu::util{
class ByteArrayWrapper : public java::lang::Comparable<android::icu::util::ByteArrayWrapper> {
public:
	ByteArrayWrapper();
	virtual ~ByteArrayWrapper();

}; // class ByteArrayWrapper
}; // namespace android::icu::util

#endif //__android_icu_util_ByteArrayWrapper__

