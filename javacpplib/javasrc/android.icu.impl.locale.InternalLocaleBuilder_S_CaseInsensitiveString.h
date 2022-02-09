#ifndef __android_icu_impl_locale_InternalLocaleBuilder_S_CaseInsensitiveString__
#define __android_icu_impl_locale_InternalLocaleBuilder_S_CaseInsensitiveString__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\InternalLocaleBuilder$CaseInsensitiveString.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl::locale{
class InternalLocaleBuilder_S_CaseInsensitiveString : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::lang::String> _s;
public:
	InternalLocaleBuilder_S_CaseInsensitiveString(std::shared_ptr<java::lang::String> s);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	int virtual hashCode();
	std::shared_ptr<java::lang::String> virtual value();
public:
	virtual ~InternalLocaleBuilder_S_CaseInsensitiveString(){
	}

}; // class InternalLocaleBuilder_S_CaseInsensitiveString
}; // namespace android::icu::impl::locale

#endif //__android_icu_impl_locale_InternalLocaleBuilder_S_CaseInsensitiveString__

