#ifndef __dalvik_system_BaseDexClassLoader__
#define __dalvik_system_BaseDexClassLoader__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\BaseDexClassLoader.smali
#include "java2ctype.h"
#include "java.lang.ClassLoader.hh"

namespace dalvik::system{
class BaseDexClassLoader : public java::lang::ClassLoader {
public:
	BaseDexClassLoader();
	virtual ~BaseDexClassLoader();

}; // class BaseDexClassLoader
}; // namespace dalvik::system

#endif //__dalvik_system_BaseDexClassLoader__

