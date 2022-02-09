#ifndef __dalvik_system_PathClassLoader__
#define __dalvik_system_PathClassLoader__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\PathClassLoader.smali
#include "java2ctype.h"
#include "dalvik.system.BaseDexClassLoader.hh"

namespace dalvik::system{
class PathClassLoader : public dalvik::system::BaseDexClassLoader {
public:
	PathClassLoader();
	virtual ~PathClassLoader();

}; // class PathClassLoader
}; // namespace dalvik::system

#endif //__dalvik_system_PathClassLoader__

