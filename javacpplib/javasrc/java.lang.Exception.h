#ifndef __java_lang_Exception__
#define __java_lang_Exception__
// H L:\smali2cpp20\x64\Release\out\java\lang\Exception.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

namespace java::lang{
class Exception : public java::lang::Throwable {
protected:
	Exception(std::shared_ptr<java::lang::String> message,std::shared_ptr<java::lang::Throwable> cause,bool enableSuppression,bool writableStackTrace);
private:
public:
	static long long serialVersionUID;
	Exception();
	Exception(std::shared_ptr<java::lang::String> message);
	Exception(std::shared_ptr<java::lang::String> message,std::shared_ptr<java::lang::Throwable> cause);
	Exception(std::shared_ptr<java::lang::Throwable> cause);
public:
	virtual ~Exception(){
	}

}; // class Exception
}; // namespace java::lang

#endif //__java_lang_Exception__

