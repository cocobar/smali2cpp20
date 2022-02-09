#ifndef __java_lang_InstantiationError__
#define __java_lang_InstantiationError__
// H L:\smali2cpp20\x64\Release\out\java\lang\InstantiationError.smali
#include "java2ctype.h"
#include "java.lang.IncompatibleClassChangeError.hh"

namespace java::lang{
class InstantiationError : public java::lang::IncompatibleClassChangeError {
public:
	InstantiationError();
	virtual ~InstantiationError();

}; // class InstantiationError
}; // namespace java::lang

#endif //__java_lang_InstantiationError__

