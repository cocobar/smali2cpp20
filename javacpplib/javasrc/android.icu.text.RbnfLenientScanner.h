#ifndef __android_icu_text_RbnfLenientScanner__
#define __android_icu_text_RbnfLenientScanner__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RbnfLenientScanner.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class RbnfLenientScanner : public java::lang::Object {
protected:
private:
public:
	bool allIgnorable(std::shared_ptr<java::lang::String> var0);
	int findText(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::lang::String> var1,int var2);
	int prefixLength(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::lang::String> var1);
	RbnfLenientScanner(){ };
	virtual ~RbnfLenientScanner(){ };

}; // class RbnfLenientScanner
}; // namespace android::icu::text

#endif //__android_icu_text_RbnfLenientScanner__

