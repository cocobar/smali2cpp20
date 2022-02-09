#ifndef __android_icu_text_Collator_S_ASCII__
#define __android_icu_text_Collator_S_ASCII__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\Collator$ASCII.smali
#include "java2ctype.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class Collator_S_ASCII : public java::lang::Object {
protected:
private:
	Collator_S_ASCII();
public:
	static bool equalIgnoreCase(std::shared_ptr<java::lang::CharSequence> left,std::shared_ptr<java::lang::CharSequence> right);
public:
	virtual ~Collator_S_ASCII(){
	}

}; // class Collator_S_ASCII
}; // namespace android::icu::text

#endif //__android_icu_text_Collator_S_ASCII__

