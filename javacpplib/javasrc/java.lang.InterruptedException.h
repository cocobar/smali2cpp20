#ifndef __java_lang_InterruptedException__
#define __java_lang_InterruptedException__
// H L:\smali2cpp20\x64\Release\out\java\lang\InterruptedException.smali
#include "java2ctype.h"
#include "java.lang.Exception.h"
#include "java.lang.String.h"

namespace java::lang{
class InterruptedException : public java::lang::Exception {
protected:
private:
	static long long serialVersionUID;
public:
	InterruptedException();
	InterruptedException(std::shared_ptr<java::lang::String> s);
public:
	virtual ~InterruptedException(){
	}

}; // class InterruptedException
}; // namespace java::lang

#endif //__java_lang_InterruptedException__

