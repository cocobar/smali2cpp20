#ifndef __java_lang_BootstrapMethodError__
#define __java_lang_BootstrapMethodError__
// H L:\smali2cpp20\x64\Release\out\java\lang\BootstrapMethodError.smali
#include "java2ctype.h"
#include "java.lang.LinkageError.hh"

namespace java::lang{
class BootstrapMethodError : public java::lang::LinkageError {
public:
	BootstrapMethodError();
	virtual ~BootstrapMethodError();

}; // class BootstrapMethodError
}; // namespace java::lang

#endif //__java_lang_BootstrapMethodError__

