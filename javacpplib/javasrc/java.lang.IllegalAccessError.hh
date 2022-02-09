#ifndef __java_lang_IllegalAccessError__
#define __java_lang_IllegalAccessError__
// H L:\smali2cpp20\x64\Release\out\java\lang\IllegalAccessError.smali
#include "java2ctype.h"
#include "java.lang.IncompatibleClassChangeError.hh"

namespace java::lang{
class IllegalAccessError : public java::lang::IncompatibleClassChangeError {
public:
	IllegalAccessError();
	virtual ~IllegalAccessError();

}; // class IllegalAccessError
}; // namespace java::lang

#endif //__java_lang_IllegalAccessError__

