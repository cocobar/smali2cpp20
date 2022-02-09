#ifndef __sun_util_locale_InternalLocaleBuilder_S_CaseInsensitiveChar__
#define __sun_util_locale_InternalLocaleBuilder_S_CaseInsensitiveChar__
// H L:\smali2cpp20\x64\Release\out\sun\util\locale\InternalLocaleBuilder$CaseInsensitiveChar.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace sun::util::locale{
class InternalLocaleBuilder_S_CaseInsensitiveChar : public java::lang::Object {
protected:
private:
	char ch;
	char lowerCh;
	InternalLocaleBuilder_S_CaseInsensitiveChar(std::shared_ptr<java::lang::String> s);
public:
	InternalLocaleBuilder_S_CaseInsensitiveChar(char c);
	InternalLocaleBuilder_S_CaseInsensitiveChar(std::shared_ptr<java::lang::String> s,std::shared_ptr<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveChar> _this1);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	int virtual hashCode();
	char virtual value();
public:
	virtual ~InternalLocaleBuilder_S_CaseInsensitiveChar(){
	}

}; // class InternalLocaleBuilder_S_CaseInsensitiveChar
}; // namespace sun::util::locale

#endif //__sun_util_locale_InternalLocaleBuilder_S_CaseInsensitiveChar__

