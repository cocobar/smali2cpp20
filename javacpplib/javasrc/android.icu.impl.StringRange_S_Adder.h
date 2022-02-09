#ifndef __android_icu_impl_StringRange_S_Adder__
#define __android_icu_impl_StringRange_S_Adder__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\StringRange$Adder.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class StringRange_S_Adder : public java::lang::Object {
protected:
private:
public:
	void add(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::lang::String> var1) = 0;
	StringRange_S_Adder(){ };
	virtual ~StringRange_S_Adder(){ };

}; // class StringRange_S_Adder
}; // namespace android::icu::impl

#endif //__android_icu_impl_StringRange_S_Adder__

