#ifndef __android_icu_util_Calendar__
#define __android_icu_util_Calendar__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\Calendar.smali
#include "java2ctype.h"
#include "java.io.Serializable.hh"
#include "java.lang.Cloneable.hh"
#include "java.lang.Comparable.hh"

namespace android::icu::util{
class Calendar : public java::io::Serializable, public java::lang::Cloneable, public java::lang::Comparable<android::icu::util::Calendar> {
public:
	Calendar();
	virtual ~Calendar();

}; // class Calendar
}; // namespace android::icu::util

#endif //__android_icu_util_Calendar__

