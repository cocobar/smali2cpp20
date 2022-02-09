#ifndef __java_lang_LinkageError__
#define __java_lang_LinkageError__
// H L:\smali2cpp20\x64\Release\out\java\lang\LinkageError.smali
#include "java2ctype.h"
#include "java.lang.Error.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

namespace java::lang{
class LinkageError : public java::lang::Error {
protected:
private:
	static long long serialVersionUID;
public:
	LinkageError();
	LinkageError(std::shared_ptr<java::lang::String> s);
	LinkageError(std::shared_ptr<java::lang::String> s,std::shared_ptr<java::lang::Throwable> cause);
public:
	virtual ~LinkageError(){
	}

}; // class LinkageError
}; // namespace java::lang

#endif //__java_lang_LinkageError__

