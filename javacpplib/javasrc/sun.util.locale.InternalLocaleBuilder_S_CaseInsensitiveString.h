#ifndef __sun_util_locale_InternalLocaleBuilder_S_CaseInsensitiveString__
#define __sun_util_locale_InternalLocaleBuilder_S_CaseInsensitiveString__
// H L:\smali2cpp20\x64\Release\out\sun\util\locale\InternalLocaleBuilder$CaseInsensitiveString.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace sun::util::locale{
class InternalLocaleBuilder_S_CaseInsensitiveString : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::lang::String> lowerStr;
	std::shared_ptr<java::lang::String> str;
public:
	InternalLocaleBuilder_S_CaseInsensitiveString(std::shared_ptr<java::lang::String> s);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	int virtual hashCode();
	std::shared_ptr<java::lang::String> virtual value();
public:
	virtual ~InternalLocaleBuilder_S_CaseInsensitiveString(){
	}

}; // class InternalLocaleBuilder_S_CaseInsensitiveString
}; // namespace sun::util::locale

#endif //__sun_util_locale_InternalLocaleBuilder_S_CaseInsensitiveString__

