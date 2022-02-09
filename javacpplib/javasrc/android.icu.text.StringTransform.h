#ifndef __android_icu_text_StringTransform__
#define __android_icu_text_StringTransform__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\StringTransform.smali
#include "java2ctype.h"
#include "android.icu.text.Transform.h"
#include "java.lang.String.h"

namespace android::icu::text{
class StringTransform : public android::icu::text::Transform<java::lang::String,java::lang::String> {
protected:
private:
public:
	std::shared_ptr<java::lang::String> transform(std::shared_ptr<java::lang::String> var0) = 0;
	StringTransform(){ };
	virtual ~StringTransform(){ };

}; // class StringTransform
}; // namespace android::icu::text

#endif //__android_icu_text_StringTransform__

