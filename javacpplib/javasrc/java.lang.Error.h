#ifndef __java_lang_Error__
#define __java_lang_Error__
// H L:\smali2cpp20\x64\Release\out\java\lang\Error.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

namespace java::lang{
class Error : public java::lang::Throwable {
protected:
	Error(std::shared_ptr<java::lang::String> message,std::shared_ptr<java::lang::Throwable> cause,bool enableSuppression,bool writableStackTrace);
private:
public:
	static long long serialVersionUID;
	Error();
	Error(std::shared_ptr<java::lang::String> message);
	Error(std::shared_ptr<java::lang::String> message,std::shared_ptr<java::lang::Throwable> cause);
	Error(std::shared_ptr<java::lang::Throwable> cause);
public:
	virtual ~Error(){
	}

}; // class Error
}; // namespace java::lang

#endif //__java_lang_Error__

