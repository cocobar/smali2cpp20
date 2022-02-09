#ifndef __java_lang_ArrayStoreException__
#define __java_lang_ArrayStoreException__
// H L:\smali2cpp20\x64\Release\out\java\lang\ArrayStoreException.smali
#include "java2ctype.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"

namespace java::lang{
class ArrayStoreException : public java::lang::RuntimeException {
protected:
private:
	static long long serialVersionUID;
public:
	ArrayStoreException();
	ArrayStoreException(std::shared_ptr<java::lang::String> s);
public:
	virtual ~ArrayStoreException(){
	}

}; // class ArrayStoreException
}; // namespace java::lang

#endif //__java_lang_ArrayStoreException__

