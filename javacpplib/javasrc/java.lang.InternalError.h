#ifndef __java_lang_InternalError__
#define __java_lang_InternalError__
// H L:\smali2cpp20\x64\Release\out\java\lang\InternalError.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"
#include "java.lang.VirtualMachineError.h"

namespace java::lang{
class InternalError : public java::lang::VirtualMachineError {
protected:
private:
	static long long serialVersionUID;
public:
	InternalError();
	InternalError(std::shared_ptr<java::lang::String> message);
	InternalError(std::shared_ptr<java::lang::String> message,std::shared_ptr<java::lang::Throwable> cause);
	InternalError(std::shared_ptr<java::lang::Throwable> cause);
public:
	virtual ~InternalError(){
	}

}; // class InternalError
}; // namespace java::lang

#endif //__java_lang_InternalError__

