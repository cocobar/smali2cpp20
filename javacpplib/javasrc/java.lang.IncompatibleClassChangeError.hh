#ifndef __java_lang_IncompatibleClassChangeError__
#define __java_lang_IncompatibleClassChangeError__
// H L:\smali2cpp20\x64\Release\out\java\lang\IncompatibleClassChangeError.smali
#include "java2ctype.h"
#include "java.lang.LinkageError.hh"

namespace java::lang{
class IncompatibleClassChangeError : public java::lang::LinkageError {
public:
	IncompatibleClassChangeError();
	virtual ~IncompatibleClassChangeError();

}; // class IncompatibleClassChangeError
}; // namespace java::lang

#endif //__java_lang_IncompatibleClassChangeError__

