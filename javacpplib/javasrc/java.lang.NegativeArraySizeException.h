#ifndef __java_lang_NegativeArraySizeException__
#define __java_lang_NegativeArraySizeException__
// H L:\smali2cpp20\x64\Release\out\java\lang\NegativeArraySizeException.smali
#include "java2ctype.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"

namespace java::lang{
class NegativeArraySizeException : public java::lang::RuntimeException {
protected:
private:
	static long long serialVersionUID;
public:
	NegativeArraySizeException();
	NegativeArraySizeException(std::shared_ptr<java::lang::String> s);
public:
	virtual ~NegativeArraySizeException(){
	}

}; // class NegativeArraySizeException
}; // namespace java::lang

#endif //__java_lang_NegativeArraySizeException__

