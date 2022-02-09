#ifndef __java_lang_BootClassLoader__
#define __java_lang_BootClassLoader__
// H L:\smali2cpp20\x64\Release\out\java\lang\BootClassLoader.smali
#include "java2ctype.h"
#include "java.lang.ClassLoader.hh"

namespace java::lang{
class BootClassLoader : public java::lang::ClassLoader {
public:
	BootClassLoader();
	virtual ~BootClassLoader();

}; // class BootClassLoader
}; // namespace java::lang

#endif //__java_lang_BootClassLoader__

