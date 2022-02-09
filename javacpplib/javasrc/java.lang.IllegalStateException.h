#ifndef __java_lang_IllegalStateException__
#define __java_lang_IllegalStateException__
// H L:\smali2cpp20\x64\Release\out\java\lang\IllegalStateException.smali
#include "java2ctype.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

namespace java::lang{
class IllegalStateException : public java::lang::RuntimeException {
protected:
private:
public:
	static long long serialVersionUID;
	IllegalStateException();
	IllegalStateException(std::shared_ptr<java::lang::String> s);
	IllegalStateException(std::shared_ptr<java::lang::String> message,std::shared_ptr<java::lang::Throwable> cause);
	IllegalStateException(std::shared_ptr<java::lang::Throwable> cause);
public:
	virtual ~IllegalStateException(){
	}

}; // class IllegalStateException
}; // namespace java::lang

#endif //__java_lang_IllegalStateException__

