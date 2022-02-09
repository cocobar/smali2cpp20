#ifndef __android_icu_impl_TimeZoneAdapter__
#define __android_icu_impl_TimeZoneAdapter__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneAdapter.smali
#include "java2ctype.h"
#include "java.util.TimeZone.hh"

namespace android::icu::impl{
class TimeZoneAdapter : public java::util::TimeZone {
public:
	TimeZoneAdapter();
	virtual ~TimeZoneAdapter();

}; // class TimeZoneAdapter
}; // namespace android::icu::impl

#endif //__android_icu_impl_TimeZoneAdapter__

