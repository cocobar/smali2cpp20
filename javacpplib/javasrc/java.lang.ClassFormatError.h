#ifndef __java_lang_ClassFormatError__
#define __java_lang_ClassFormatError__
// H L:\smali2cpp20\x64\Release\out\java\lang\ClassFormatError.smali
#include "java2ctype.h"
#include "java.lang.LinkageError.h"
#include "java.lang.String.h"

namespace java::lang{
class ClassFormatError : public java::lang::LinkageError {
protected:
private:
	static long long serialVersionUID;
public:
	ClassFormatError();
	ClassFormatError(std::shared_ptr<java::lang::String> s);
public:
	virtual ~ClassFormatError(){
	}

}; // class ClassFormatError
}; // namespace java::lang

#endif //__java_lang_ClassFormatError__

