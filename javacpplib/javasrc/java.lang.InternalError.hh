#ifndef __java_lang_InternalError__
#define __java_lang_InternalError__
// H L:\smali2cpp20\x64\Release\out\java\lang\InternalError.smali
#include "java2ctype.h"
#include "java.lang.VirtualMachineError.hh"

namespace java::lang{
class InternalError : public java::lang::VirtualMachineError {
public:
	InternalError();
	virtual ~InternalError();

}; // class InternalError
}; // namespace java::lang

#endif //__java_lang_InternalError__

