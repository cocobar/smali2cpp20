#ifndef __java_lang_BootstrapMethodError__
#define __java_lang_BootstrapMethodError__
// H L:\smali2cpp20\x64\Release\out\java\lang\BootstrapMethodError.smali
#include "java2ctype.h"
#include "java.lang.LinkageError.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

namespace java::lang{
class BootstrapMethodError : public java::lang::LinkageError {
protected:
private:
	static long long serialVersionUID;
public:
	BootstrapMethodError();
	BootstrapMethodError(std::shared_ptr<java::lang::String> s);
	BootstrapMethodError(std::shared_ptr<java::lang::String> s,std::shared_ptr<java::lang::Throwable> cause);
	BootstrapMethodError(std::shared_ptr<java::lang::Throwable> cause);
public:
	virtual ~BootstrapMethodError(){
	}

}; // class BootstrapMethodError
}; // namespace java::lang

#endif //__java_lang_BootstrapMethodError__

