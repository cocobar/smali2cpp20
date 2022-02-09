#ifndef __java_lang_AbstractMethodError__
#define __java_lang_AbstractMethodError__
// H L:\smali2cpp20\x64\Release\out\java\lang\AbstractMethodError.smali
#include "java2ctype.h"
#include "java.lang.IncompatibleClassChangeError.hh"

namespace java::lang{
class AbstractMethodError : public java::lang::IncompatibleClassChangeError {
public:
	AbstractMethodError();
	virtual ~AbstractMethodError();

}; // class AbstractMethodError
}; // namespace java::lang

#endif //__java_lang_AbstractMethodError__

