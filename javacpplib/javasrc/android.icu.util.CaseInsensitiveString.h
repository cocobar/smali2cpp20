#ifndef __android_icu_util_CaseInsensitiveString__
#define __android_icu_util_CaseInsensitiveString__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\CaseInsensitiveString.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::util{
class CaseInsensitiveString : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::lang::String> folded;
	int hash;
	std::shared_ptr<java::lang::String> string;
	static std::shared_ptr<java::lang::String> foldCase(std::shared_ptr<java::lang::String> foldee);
	void virtual getFolded();
public:
	CaseInsensitiveString(std::shared_ptr<java::lang::String> s);
	bool virtual equals(std::shared_ptr<java::lang::Object> o);
	std::shared_ptr<java::lang::String> virtual getString();
	int virtual hashCode();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~CaseInsensitiveString(){
	}

}; // class CaseInsensitiveString
}; // namespace android::icu::util

#endif //__android_icu_util_CaseInsensitiveString__

