#ifndef __java_lang_AssertionError__
#define __java_lang_AssertionError__
// H L:\smali2cpp20\x64\Release\out\java\lang\AssertionError.smali
#include "java2ctype.h"
#include "java.lang.Error.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

namespace java::lang{
class AssertionError : public java::lang::Error {
protected:
private:
	static long long serialVersionUID;
	AssertionError(std::shared_ptr<java::lang::String> detailMessage);
public:
	AssertionError();
	AssertionError(char detailMessage);
	AssertionError(double detailMessage);
	AssertionError(float detailMessage);
	AssertionError(int detailMessage);
	AssertionError(long long detailMessage);
	AssertionError(std::shared_ptr<java::lang::Object> detailMessage);
	AssertionError(std::shared_ptr<java::lang::String> message,std::shared_ptr<java::lang::Throwable> cause);
	AssertionError(bool detailMessage);
public:
	virtual ~AssertionError(){
	}

}; // class AssertionError
}; // namespace java::lang

#endif //__java_lang_AssertionError__

