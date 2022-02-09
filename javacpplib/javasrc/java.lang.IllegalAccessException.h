#ifndef __java_lang_IllegalAccessException__
#define __java_lang_IllegalAccessException__
// H L:\smali2cpp20\x64\Release\out\java\lang\IllegalAccessException.smali
#include "java2ctype.h"
#include "java.lang.ReflectiveOperationException.h"
#include "java.lang.String.h"

namespace java::lang{
class IllegalAccessException : public java::lang::ReflectiveOperationException {
protected:
private:
	static long long serialVersionUID;
public:
	IllegalAccessException();
	IllegalAccessException(std::shared_ptr<java::lang::String> s);
public:
	virtual ~IllegalAccessException(){
	}

}; // class IllegalAccessException
}; // namespace java::lang

#endif //__java_lang_IllegalAccessException__

