#ifndef __android_icu_math_BigDecimal__
#define __android_icu_math_BigDecimal__
// H L:\smali2cpp20\x64\Release\out\android\icu\math\BigDecimal.smali
#include "java2ctype.h"
#include "java.io.Serializable.hh"
#include "java.lang.Comparable.hh"
#include "java.lang.Number.hh"

namespace android::icu::math{
class BigDecimal : public java::lang::Number, public java::io::Serializable, public java::lang::Comparable<android::icu::math::BigDecimal> {
public:
	BigDecimal();
	virtual ~BigDecimal();

}; // class BigDecimal
}; // namespace android::icu::math

#endif //__android_icu_math_BigDecimal__

