#ifndef __android_icu_util_TimeZone__
#define __android_icu_util_TimeZone__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\TimeZone.smali
#include "java2ctype.h"
#include "android.icu.util.Freezable.hh"
#include "java.io.Serializable.hh"
#include "java.lang.Cloneable.hh"

namespace android::icu::util{
class TimeZone : public java::io::Serializable, public java::lang::Cloneable, public android::icu::util::Freezable<android::icu::util::TimeZone> {
public:
	TimeZone();
	virtual ~TimeZone();

}; // class TimeZone
}; // namespace android::icu::util

#endif //__android_icu_util_TimeZone__

