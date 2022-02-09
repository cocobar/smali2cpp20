#ifndef __android_icu_util_StringTokenizer__
#define __android_icu_util_StringTokenizer__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\StringTokenizer.smali
#include "java2ctype.h"
#include "java.lang.Object.hh"
#include "java.util.Enumeration.h"

namespace android::icu::util{
class StringTokenizer : public java::util::Enumeration<java::lang::Object> {
public:
	StringTokenizer();
	virtual ~StringTokenizer();

}; // class StringTokenizer
}; // namespace android::icu::util

#endif //__android_icu_util_StringTokenizer__

