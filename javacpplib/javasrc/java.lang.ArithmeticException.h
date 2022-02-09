#ifndef __java_lang_ArithmeticException__
#define __java_lang_ArithmeticException__
// H L:\smali2cpp20\x64\Release\out\java\lang\ArithmeticException.smali
#include "java2ctype.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"

namespace java::lang{
class ArithmeticException : public java::lang::RuntimeException {
protected:
private:
	static long long serialVersionUID;
public:
	ArithmeticException();
	ArithmeticException(std::shared_ptr<java::lang::String> s);
public:
	virtual ~ArithmeticException(){
	}

}; // class ArithmeticException
}; // namespace java::lang

#endif //__java_lang_ArithmeticException__

