#ifndef __java_lang_ClassNotFoundException__
#define __java_lang_ClassNotFoundException__
// H L:\smali2cpp20\x64\Release\out\java\lang\ClassNotFoundException.smali
#include "java2ctype.h"
#include "java.lang.ReflectiveOperationException.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

namespace java::lang{
class ClassNotFoundException : public java::lang::ReflectiveOperationException {
protected:
private:
	static long long serialVersionUID;
	std::shared_ptr<java::lang::Throwable> ex;
public:
	ClassNotFoundException();
	ClassNotFoundException(std::shared_ptr<java::lang::String> s);
	ClassNotFoundException(std::shared_ptr<java::lang::String> s,std::shared_ptr<java::lang::Throwable> ex);
	std::shared_ptr<java::lang::Throwable> virtual getCause();
	std::shared_ptr<java::lang::Throwable> virtual getException();
public:
	virtual ~ClassNotFoundException(){
	}

}; // class ClassNotFoundException
}; // namespace java::lang

#endif //__java_lang_ClassNotFoundException__

