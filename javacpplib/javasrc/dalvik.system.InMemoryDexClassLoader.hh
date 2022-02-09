#ifndef __dalvik_system_InMemoryDexClassLoader__
#define __dalvik_system_InMemoryDexClassLoader__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\InMemoryDexClassLoader.smali
#include "java2ctype.h"
#include "dalvik.system.BaseDexClassLoader.hh"

namespace dalvik::system{
class InMemoryDexClassLoader : public dalvik::system::BaseDexClassLoader {
public:
	InMemoryDexClassLoader();
	virtual ~InMemoryDexClassLoader();

}; // class InMemoryDexClassLoader
}; // namespace dalvik::system

#endif //__dalvik_system_InMemoryDexClassLoader__

