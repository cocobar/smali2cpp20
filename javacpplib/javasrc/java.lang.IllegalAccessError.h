#ifndef __java_lang_IllegalAccessError__
#define __java_lang_IllegalAccessError__
// H L:\smali2cpp20\x64\Release\out\java\lang\IllegalAccessError.smali
#include "java2ctype.h"
#include "java.lang.IncompatibleClassChangeError.h"
#include "java.lang.String.h"

namespace java::lang{
class IllegalAccessError : public java::lang::IncompatibleClassChangeError {
protected:
private:
	static long long serialVersionUID;
public:
	IllegalAccessError();
	IllegalAccessError(std::shared_ptr<java::lang::String> s);
public:
	virtual ~IllegalAccessError(){
	}

}; // class IllegalAccessError
}; // namespace java::lang

#endif //__java_lang_IllegalAccessError__

