#ifndef __dalvik_system_DelegateLastClassLoader__
#define __dalvik_system_DelegateLastClassLoader__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\DelegateLastClassLoader.smali
#include "java2ctype.h"
#include "dalvik.system.PathClassLoader.hh"

namespace dalvik::system{
class DelegateLastClassLoader : public dalvik::system::PathClassLoader {
public:
	DelegateLastClassLoader();
	virtual ~DelegateLastClassLoader();

}; // class DelegateLastClassLoader
}; // namespace dalvik::system

#endif //__dalvik_system_DelegateLastClassLoader__

