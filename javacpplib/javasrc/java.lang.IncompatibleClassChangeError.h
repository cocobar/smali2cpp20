#ifndef __java_lang_IncompatibleClassChangeError__
#define __java_lang_IncompatibleClassChangeError__
// H L:\smali2cpp20\x64\Release\out\java\lang\IncompatibleClassChangeError.smali
#include "java2ctype.h"
#include "java.lang.LinkageError.h"
#include "java.lang.String.h"

namespace java::lang{
class IncompatibleClassChangeError : public java::lang::LinkageError {
protected:
private:
	static long long serialVersionUID;
public:
	IncompatibleClassChangeError();
	IncompatibleClassChangeError(std::shared_ptr<java::lang::String> s);
public:
	virtual ~IncompatibleClassChangeError(){
	}

}; // class IncompatibleClassChangeError
}; // namespace java::lang

#endif //__java_lang_IncompatibleClassChangeError__

