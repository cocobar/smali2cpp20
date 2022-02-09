#ifndef __android_icu_text_MessagePattern__
#define __android_icu_text_MessagePattern__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\MessagePattern.smali
#include "java2ctype.h"
#include "android.icu.util.Freezable.hh"
#include "java.lang.Cloneable.hh"

namespace android::icu::text{
class MessagePattern : public java::lang::Cloneable, public android::icu::util::Freezable<android::icu::text::MessagePattern> {
public:
	MessagePattern();
	virtual ~MessagePattern();

}; // class MessagePattern
}; // namespace android::icu::text

#endif //__android_icu_text_MessagePattern__

