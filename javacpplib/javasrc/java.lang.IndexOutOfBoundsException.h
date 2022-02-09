#ifndef __java_lang_IndexOutOfBoundsException__
#define __java_lang_IndexOutOfBoundsException__
// H L:\smali2cpp20\x64\Release\out\java\lang\IndexOutOfBoundsException.smali
#include "java2ctype.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"

namespace java::lang{
class IndexOutOfBoundsException : public java::lang::RuntimeException {
protected:
private:
	static long long serialVersionUID;
public:
	IndexOutOfBoundsException();
	IndexOutOfBoundsException(std::shared_ptr<java::lang::String> s);
public:
	virtual ~IndexOutOfBoundsException(){
	}

}; // class IndexOutOfBoundsException
}; // namespace java::lang

#endif //__java_lang_IndexOutOfBoundsException__

