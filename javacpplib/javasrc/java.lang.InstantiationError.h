#ifndef __java_lang_InstantiationError__
#define __java_lang_InstantiationError__
// H L:\smali2cpp20\x64\Release\out\java\lang\InstantiationError.smali
#include "java2ctype.h"
#include "java.lang.IncompatibleClassChangeError.h"
#include "java.lang.String.h"

namespace java::lang{
class InstantiationError : public java::lang::IncompatibleClassChangeError {
protected:
private:
	static long long serialVersionUID;
public:
	InstantiationError();
	InstantiationError(std::shared_ptr<java::lang::String> s);
public:
	virtual ~InstantiationError(){
	}

}; // class InstantiationError
}; // namespace java::lang

#endif //__java_lang_InstantiationError__

