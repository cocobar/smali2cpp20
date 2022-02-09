#ifndef __java_lang_NoSuchFieldError__
#define __java_lang_NoSuchFieldError__
// H L:\smali2cpp20\x64\Release\out\java\lang\NoSuchFieldError.smali
#include "java2ctype.h"
#include "java.lang.IncompatibleClassChangeError.h"
#include "java.lang.String.h"

namespace java::lang{
class NoSuchFieldError : public java::lang::IncompatibleClassChangeError {
protected:
private:
	static long long serialVersionUID;
public:
	NoSuchFieldError();
	NoSuchFieldError(std::shared_ptr<java::lang::String> s);
public:
	virtual ~NoSuchFieldError(){
	}

}; // class NoSuchFieldError
}; // namespace java::lang

#endif //__java_lang_NoSuchFieldError__

