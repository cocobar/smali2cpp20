#ifndef __android_icu_text_DecimalFormat_S_Unit__
#define __android_icu_text_DecimalFormat_S_Unit__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DecimalFormat$Unit.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"

namespace android::icu::text{
class DecimalFormat_S_Unit : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::lang::String> prefix;
	std::shared_ptr<java::lang::String> suffix;
public:
	DecimalFormat_S_Unit(std::shared_ptr<java::lang::String> prefix,std::shared_ptr<java::lang::String> suffix);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual toString();
	void virtual writePrefix(std::shared_ptr<java::lang::StringBuffer> toAppendTo);
	void virtual writeSuffix(std::shared_ptr<java::lang::StringBuffer> toAppendTo);
public:
	virtual ~DecimalFormat_S_Unit(){
	}

}; // class DecimalFormat_S_Unit
}; // namespace android::icu::text

#endif //__android_icu_text_DecimalFormat_S_Unit__

