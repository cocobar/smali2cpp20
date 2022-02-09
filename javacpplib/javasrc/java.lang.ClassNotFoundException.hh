#ifndef __java_lang_ClassNotFoundException__
#define __java_lang_ClassNotFoundException__
// H L:\smali2cpp20\x64\Release\out\java\lang\ClassNotFoundException.smali
#include "java2ctype.h"
#include "java.lang.ReflectiveOperationException.hh"

namespace java::lang{
class ClassNotFoundException : public java::lang::ReflectiveOperationException {
public:
	ClassNotFoundException();
	virtual ~ClassNotFoundException();

}; // class ClassNotFoundException
}; // namespace java::lang

#endif //__java_lang_ClassNotFoundException__

