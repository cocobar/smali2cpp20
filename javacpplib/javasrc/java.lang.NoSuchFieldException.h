#ifndef __java_lang_NoSuchFieldException__
#define __java_lang_NoSuchFieldException__
// H L:\smali2cpp20\x64\Release\out\java\lang\NoSuchFieldException.smali
#include "java2ctype.h"
#include "java.lang.ReflectiveOperationException.h"
#include "java.lang.String.h"

namespace java::lang{
class NoSuchFieldException : public java::lang::ReflectiveOperationException {
protected:
private:
	static long long serialVersionUID;
public:
	NoSuchFieldException();
	NoSuchFieldException(std::shared_ptr<java::lang::String> s);
public:
	virtual ~NoSuchFieldException(){
	}

}; // class NoSuchFieldException
}; // namespace java::lang

#endif //__java_lang_NoSuchFieldException__

