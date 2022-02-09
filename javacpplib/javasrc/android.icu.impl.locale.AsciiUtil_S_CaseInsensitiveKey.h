#ifndef __android_icu_impl_locale_AsciiUtil_S_CaseInsensitiveKey__
#define __android_icu_impl_locale_AsciiUtil_S_CaseInsensitiveKey__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\AsciiUtil$CaseInsensitiveKey.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl::locale{
class AsciiUtil_S_CaseInsensitiveKey : public java::lang::Object {
protected:
private:
	int _hash;
	std::shared_ptr<java::lang::String> _key;
public:
	AsciiUtil_S_CaseInsensitiveKey(std::shared_ptr<java::lang::String> key);
	bool virtual equals(std::shared_ptr<java::lang::Object> o);
	int virtual hashCode();
public:
	virtual ~AsciiUtil_S_CaseInsensitiveKey(){
	}

}; // class AsciiUtil_S_CaseInsensitiveKey
}; // namespace android::icu::impl::locale

#endif //__android_icu_impl_locale_AsciiUtil_S_CaseInsensitiveKey__

