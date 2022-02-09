#ifndef __java_lang_IllegalArgumentException__
#define __java_lang_IllegalArgumentException__
// H L:\smali2cpp20\x64\Release\out\java\lang\IllegalArgumentException.smali
#include "java2ctype.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

namespace java::lang{
class IllegalArgumentException : public java::lang::RuntimeException {
protected:
private:
	static long long serialVersionUID;
public:
	IllegalArgumentException();
	IllegalArgumentException(std::shared_ptr<java::lang::String> s);
	IllegalArgumentException(std::shared_ptr<java::lang::String> message,std::shared_ptr<java::lang::Throwable> cause);
	IllegalArgumentException(std::shared_ptr<java::lang::Throwable> cause);
public:
	virtual ~IllegalArgumentException(){
	}

}; // class IllegalArgumentException
}; // namespace java::lang

#endif //__java_lang_IllegalArgumentException__

