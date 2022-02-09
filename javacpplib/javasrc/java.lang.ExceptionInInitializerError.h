#ifndef __java_lang_ExceptionInInitializerError__
#define __java_lang_ExceptionInInitializerError__
// H L:\smali2cpp20\x64\Release\out\java\lang\ExceptionInInitializerError.smali
#include "java2ctype.h"
#include "java.lang.LinkageError.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

namespace java::lang{
class ExceptionInInitializerError : public java::lang::LinkageError {
protected:
private:
	static long long serialVersionUID;
	std::shared_ptr<java::lang::Throwable> exception;
public:
	ExceptionInInitializerError();
	ExceptionInInitializerError(std::shared_ptr<java::lang::String> s);
	ExceptionInInitializerError(std::shared_ptr<java::lang::Throwable> thrown);
	std::shared_ptr<java::lang::Throwable> virtual getCause();
	std::shared_ptr<java::lang::Throwable> virtual getException();
public:
	virtual ~ExceptionInInitializerError(){
	}

}; // class ExceptionInInitializerError
}; // namespace java::lang

#endif //__java_lang_ExceptionInInitializerError__

