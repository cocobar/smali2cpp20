#ifndef __java_lang_IllegalMonitorStateException__
#define __java_lang_IllegalMonitorStateException__
// H L:\smali2cpp20\x64\Release\out\java\lang\IllegalMonitorStateException.smali
#include "java2ctype.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"

namespace java::lang{
class IllegalMonitorStateException : public java::lang::RuntimeException {
protected:
private:
	static long long serialVersionUID;
public:
	IllegalMonitorStateException();
	IllegalMonitorStateException(std::shared_ptr<java::lang::String> s);
public:
	virtual ~IllegalMonitorStateException(){
	}

}; // class IllegalMonitorStateException
}; // namespace java::lang

#endif //__java_lang_IllegalMonitorStateException__

