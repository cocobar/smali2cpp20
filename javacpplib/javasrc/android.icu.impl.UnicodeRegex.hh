#ifndef __android_icu_impl_UnicodeRegex__
#define __android_icu_impl_UnicodeRegex__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\UnicodeRegex.smali
#include "java2ctype.h"
#include "android.icu.text.StringTransform.hh"
#include "android.icu.util.Freezable.hh"
#include "java.lang.Cloneable.hh"

namespace android::icu::impl{
class UnicodeRegex : public java::lang::Cloneable, public android::icu::util::Freezable<android::icu::impl::UnicodeRegex>, public android::icu::text::StringTransform {
public:
	UnicodeRegex();
	virtual ~UnicodeRegex();

}; // class UnicodeRegex
}; // namespace android::icu::impl

#endif //__android_icu_impl_UnicodeRegex__

