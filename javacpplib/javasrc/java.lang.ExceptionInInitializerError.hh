#ifndef __java_lang_ExceptionInInitializerError__
#define __java_lang_ExceptionInInitializerError__
// H L:\smali2cpp20\x64\Release\out\java\lang\ExceptionInInitializerError.smali
#include "java2ctype.h"
#include "java.lang.LinkageError.hh"

namespace java::lang{
class ExceptionInInitializerError : public java::lang::LinkageError {
public:
	ExceptionInInitializerError();
	virtual ~ExceptionInInitializerError();

}; // class ExceptionInInitializerError
}; // namespace java::lang

#endif //__java_lang_ExceptionInInitializerError__

