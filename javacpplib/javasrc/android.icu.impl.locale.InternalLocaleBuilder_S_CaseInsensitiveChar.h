#ifndef __android_icu_impl_locale_InternalLocaleBuilder_S_CaseInsensitiveChar__
#define __android_icu_impl_locale_InternalLocaleBuilder_S_CaseInsensitiveChar__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\InternalLocaleBuilder$CaseInsensitiveChar.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::impl::locale{
class InternalLocaleBuilder_S_CaseInsensitiveChar : public java::lang::Object {
protected:
private:
	char _c;
public:
	InternalLocaleBuilder_S_CaseInsensitiveChar(char c);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	int virtual hashCode();
	char virtual value();
public:
	virtual ~InternalLocaleBuilder_S_CaseInsensitiveChar(){
	}

}; // class InternalLocaleBuilder_S_CaseInsensitiveChar
}; // namespace android::icu::impl::locale

#endif //__android_icu_impl_locale_InternalLocaleBuilder_S_CaseInsensitiveChar__

