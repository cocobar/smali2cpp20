#ifndef __android_icu_text_TimeZoneFormat__
#define __android_icu_text_TimeZoneFormat__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\TimeZoneFormat.smali
#include "java2ctype.h"
#include "android.icu.text.UFormat.hh"
#include "android.icu.util.Freezable.h"
#include "java.io.Serializable.h"

namespace android::icu::text{
class TimeZoneFormat : public android::icu::text::UFormat, public android::icu::util::Freezable<android::icu::text::TimeZoneFormat>, public java::io::Serializable {
public:
	TimeZoneFormat();
	virtual ~TimeZoneFormat();

}; // class TimeZoneFormat
}; // namespace android::icu::text

#endif //__android_icu_text_TimeZoneFormat__

