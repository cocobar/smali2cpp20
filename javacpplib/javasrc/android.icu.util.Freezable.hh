#ifndef __android_icu_util_Freezable__
#define __android_icu_util_Freezable__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\Freezable.smali
#include "java2ctype.h"
#include "java.lang.Cloneable.hh"

namespace android::icu::util{
template <typename T>
class Freezable : public java::lang::Cloneable {
public:
	Freezable();
	virtual ~Freezable();

}; // class Freezable
}; // namespace android::icu::util

#endif //__android_icu_util_Freezable__

