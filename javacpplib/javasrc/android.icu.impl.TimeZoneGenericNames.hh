#ifndef __android_icu_impl_TimeZoneGenericNames__
#define __android_icu_impl_TimeZoneGenericNames__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneGenericNames.smali
#include "java2ctype.h"
#include "android.icu.util.Freezable.hh"
#include "java.io.Serializable.hh"

namespace android::icu::impl{
class TimeZoneGenericNames : public java::io::Serializable, public android::icu::util::Freezable<android::icu::impl::TimeZoneGenericNames> {
public:
	TimeZoneGenericNames();
	virtual ~TimeZoneGenericNames();

}; // class TimeZoneGenericNames
}; // namespace android::icu::impl

#endif //__android_icu_impl_TimeZoneGenericNames__

