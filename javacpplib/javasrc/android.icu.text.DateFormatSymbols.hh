#ifndef __android_icu_text_DateFormatSymbols__
#define __android_icu_text_DateFormatSymbols__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DateFormatSymbols.smali
#include "java2ctype.h"
#include "java.io.Serializable.hh"
#include "java.lang.Cloneable.hh"

namespace android::icu::text{
class DateFormatSymbols : public java::io::Serializable, public java::lang::Cloneable {
public:
	DateFormatSymbols();
	virtual ~DateFormatSymbols();

}; // class DateFormatSymbols
}; // namespace android::icu::text

#endif //__android_icu_text_DateFormatSymbols__

