#ifndef __java_lang_InstantiationException__
#define __java_lang_InstantiationException__
// H L:\smali2cpp20\x64\Release\out\java\lang\InstantiationException.smali
#include "java2ctype.h"
#include "java.lang.ReflectiveOperationException.h"
#include "java.lang.String.h"

namespace java::lang{
class InstantiationException : public java::lang::ReflectiveOperationException {
protected:
private:
	static long long serialVersionUID;
public:
	InstantiationException();
	InstantiationException(std::shared_ptr<java::lang::String> s);
public:
	virtual ~InstantiationException(){
	}

}; // class InstantiationException
}; // namespace java::lang

#endif //__java_lang_InstantiationException__

