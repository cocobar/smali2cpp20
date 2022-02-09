#ifndef __android_icu_text_PluralRulesSerialProxy__
#define __android_icu_text_PluralRulesSerialProxy__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRulesSerialProxy.smali
#include "java2ctype.h"
#include "java.io.Serializable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class PluralRulesSerialProxy : public java::io::Serializable {
protected:
private:
	static long long serialVersionUID;
	std::shared_ptr<java::lang::String> data;
	std::shared_ptr<java::lang::Object> virtual readResolve();
public:
	PluralRulesSerialProxy(std::shared_ptr<java::lang::String> rules);
public:
	virtual ~PluralRulesSerialProxy(){
	}

}; // class PluralRulesSerialProxy
}; // namespace android::icu::text

#endif //__android_icu_text_PluralRulesSerialProxy__

