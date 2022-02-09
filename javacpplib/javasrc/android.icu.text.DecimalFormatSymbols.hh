#ifndef __android_icu_text_DecimalFormatSymbols__
#define __android_icu_text_DecimalFormatSymbols__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DecimalFormatSymbols.smali
#include "java2ctype.h"
#include "java.io.Serializable.hh"
#include "java.lang.Cloneable.hh"

namespace android::icu::text{
class DecimalFormatSymbols : public java::lang::Cloneable, public java::io::Serializable {
public:
	DecimalFormatSymbols();
	virtual ~DecimalFormatSymbols();

}; // class DecimalFormatSymbols
}; // namespace android::icu::text

#endif //__android_icu_text_DecimalFormatSymbols__

