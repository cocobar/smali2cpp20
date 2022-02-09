#ifndef __java_lang_ArrayIndexOutOfBoundsException__
#define __java_lang_ArrayIndexOutOfBoundsException__
// H L:\smali2cpp20\x64\Release\out\java\lang\ArrayIndexOutOfBoundsException.smali
#include "java2ctype.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.String.h"

namespace java::lang{
class ArrayIndexOutOfBoundsException : public java::lang::IndexOutOfBoundsException {
protected:
private:
	static long long serialVersionUID;
public:
	ArrayIndexOutOfBoundsException();
	ArrayIndexOutOfBoundsException(int index);
	ArrayIndexOutOfBoundsException(int sourceLength,int index);
	ArrayIndexOutOfBoundsException(int sourceLength,int offset,int count);
	ArrayIndexOutOfBoundsException(std::shared_ptr<java::lang::String> s);
public:
	virtual ~ArrayIndexOutOfBoundsException(){
	}

}; // class ArrayIndexOutOfBoundsException
}; // namespace java::lang

#endif //__java_lang_ArrayIndexOutOfBoundsException__

