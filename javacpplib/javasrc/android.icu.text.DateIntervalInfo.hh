#ifndef __android_icu_text_DateIntervalInfo__
#define __android_icu_text_DateIntervalInfo__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DateIntervalInfo.smali
#include "java2ctype.h"
#include "android.icu.util.Freezable.hh"
#include "java.io.Serializable.hh"
#include "java.lang.Cloneable.hh"

namespace android::icu::text{
class DateIntervalInfo : public java::lang::Cloneable, public android::icu::util::Freezable<android::icu::text::DateIntervalInfo>, public java::io::Serializable {
public:
	DateIntervalInfo();
	virtual ~DateIntervalInfo();

}; // class DateIntervalInfo
}; // namespace android::icu::text

#endif //__android_icu_text_DateIntervalInfo__

