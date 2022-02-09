#ifndef __java_lang_NoClassDefFoundError__
#define __java_lang_NoClassDefFoundError__
// H L:\smali2cpp20\x64\Release\out\java\lang\NoClassDefFoundError.smali
#include "java2ctype.h"
#include "java.lang.LinkageError.hh"

namespace java::lang{
class NoClassDefFoundError : public java::lang::LinkageError {
public:
	NoClassDefFoundError();
	virtual ~NoClassDefFoundError();

}; // class NoClassDefFoundError
}; // namespace java::lang

#endif //__java_lang_NoClassDefFoundError__

