#ifndef __android_icu_util_ULocale__
#define __android_icu_util_ULocale__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\ULocale.smali
#include "java2ctype.h"
#include "java.io.Serializable.hh"
#include "java.lang.Comparable.hh"

namespace android::icu::util{
class ULocale : public java::io::Serializable, public java::lang::Comparable<android::icu::util::ULocale> {
public:
	ULocale();
	virtual ~ULocale();

}; // class ULocale
}; // namespace android::icu::util

#endif //__android_icu_util_ULocale__

