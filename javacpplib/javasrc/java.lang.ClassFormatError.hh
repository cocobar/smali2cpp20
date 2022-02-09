#ifndef __java_lang_ClassFormatError__
#define __java_lang_ClassFormatError__
// H L:\smali2cpp20\x64\Release\out\java\lang\ClassFormatError.smali
#include "java2ctype.h"
#include "java.lang.LinkageError.hh"

namespace java::lang{
class ClassFormatError : public java::lang::LinkageError {
public:
	ClassFormatError();
	virtual ~ClassFormatError();

}; // class ClassFormatError
}; // namespace java::lang

#endif //__java_lang_ClassFormatError__

