#ifndef __java_lang_ClassCircularityError__
#define __java_lang_ClassCircularityError__
// H L:\smali2cpp20\x64\Release\out\java\lang\ClassCircularityError.smali
#include "java2ctype.h"
#include "java.lang.LinkageError.hh"

namespace java::lang{
class ClassCircularityError : public java::lang::LinkageError {
public:
	ClassCircularityError();
	virtual ~ClassCircularityError();

}; // class ClassCircularityError
}; // namespace java::lang

#endif //__java_lang_ClassCircularityError__

