#ifndef __sun_util_locale_LocaleSyntaxException__
#define __sun_util_locale_LocaleSyntaxException__
// H L:\smali2cpp20\x64\Release\out\sun\util\locale\LocaleSyntaxException.smali
#include "java2ctype.h"
#include "java.lang.Exception.h"
#include "java.lang.String.h"

namespace sun::util::locale{
class LocaleSyntaxException : public java::lang::Exception {
protected:
private:
	static long long serialVersionUID;
	int index;
public:
	LocaleSyntaxException(std::shared_ptr<java::lang::String> msg);
	LocaleSyntaxException(std::shared_ptr<java::lang::String> msg,int errorIndex);
	int virtual getErrorIndex();
public:
	virtual ~LocaleSyntaxException(){
	}

}; // class LocaleSyntaxException
}; // namespace sun::util::locale

#endif //__sun_util_locale_LocaleSyntaxException__

