#ifndef __android_icu_text_Collator__
#define __android_icu_text_Collator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\Collator.smali
#include "java2ctype.h"
#include "android.icu.util.Freezable.h"
#include "java.lang.Cloneable.h"
#include "java.lang.Object.hh"
#include "java.util.Comparator.h"

namespace android::icu::text{
class Collator : public java::util::Comparator<java::lang::Object>, public android::icu::util::Freezable<android::icu::text::Collator>, public java::lang::Cloneable {
public:
	Collator();
	virtual ~Collator();

}; // class Collator
}; // namespace android::icu::text

#endif //__android_icu_text_Collator__

