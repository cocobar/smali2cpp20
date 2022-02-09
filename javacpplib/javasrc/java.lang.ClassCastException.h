#ifndef __java_lang_ClassCastException__
#define __java_lang_ClassCastException__
// H L:\smali2cpp20\x64\Release\out\java\lang\ClassCastException.smali
#include "java2ctype.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"

namespace java::lang{
class ClassCastException : public java::lang::RuntimeException {
protected:
private:
	static long long serialVersionUID;
public:
	ClassCastException();
	ClassCastException(std::shared_ptr<java::lang::String> s);
public:
	virtual ~ClassCastException(){
	}

}; // class ClassCastException
}; // namespace java::lang

#endif //__java_lang_ClassCastException__
