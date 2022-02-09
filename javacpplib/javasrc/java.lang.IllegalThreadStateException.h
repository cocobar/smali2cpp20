#ifndef __java_lang_IllegalThreadStateException__
#define __java_lang_IllegalThreadStateException__
// H L:\smali2cpp20\x64\Release\out\java\lang\IllegalThreadStateException.smali
#include "java2ctype.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.String.h"

namespace java::lang{
class IllegalThreadStateException : public java::lang::IllegalArgumentException {
protected:
private:
	static long long serialVersionUID;
public:
	IllegalThreadStateException();
	IllegalThreadStateException(std::shared_ptr<java::lang::String> s);
public:
	virtual ~IllegalThreadStateException(){
	}

}; // class IllegalThreadStateException
}; // namespace java::lang

#endif //__java_lang_IllegalThreadStateException__

