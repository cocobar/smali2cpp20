#ifndef __android_icu_text_StringSearch_S_Pattern__
#define __android_icu_text_StringSearch_S_Pattern__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\StringSearch$Pattern.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class StringSearch_S_Pattern : public java::lang::Object {
protected:
	StringSearch_S_Pattern(std::shared_ptr<java::lang::String> pattern);
private:
public:
	int CELength_;
	std::shared_ptr<int[]> CE_;
	int PCELength_;
	std::shared_ptr<long long[]> PCE_;
	std::shared_ptr<java::lang::String> text_;
public:
	virtual ~StringSearch_S_Pattern(){
	}

}; // class StringSearch_S_Pattern
}; // namespace android::icu::text

#endif //__android_icu_text_StringSearch_S_Pattern__

