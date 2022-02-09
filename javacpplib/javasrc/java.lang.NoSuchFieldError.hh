#ifndef __java_lang_NoSuchFieldError__
#define __java_lang_NoSuchFieldError__
// H L:\smali2cpp20\x64\Release\out\java\lang\NoSuchFieldError.smali
#include "java2ctype.h"
#include "java.lang.IncompatibleClassChangeError.hh"

namespace java::lang{
class NoSuchFieldError : public java::lang::IncompatibleClassChangeError {
public:
	NoSuchFieldError();
	virtual ~NoSuchFieldError();

}; // class NoSuchFieldError
}; // namespace java::lang

#endif //__java_lang_NoSuchFieldError__

