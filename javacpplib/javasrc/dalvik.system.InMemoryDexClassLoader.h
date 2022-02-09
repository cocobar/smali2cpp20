#ifndef __dalvik_system_InMemoryDexClassLoader__
#define __dalvik_system_InMemoryDexClassLoader__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\InMemoryDexClassLoader.smali
#include "java2ctype.h"
#include "dalvik.system.BaseDexClassLoader.h"
#include "java.lang.ClassLoader.h"
#include "java.nio.ByteBuffer.h"

namespace dalvik::system{
class InMemoryDexClassLoader : public dalvik::system::BaseDexClassLoader {
protected:
private:
public:
	InMemoryDexClassLoader(std::shared_ptr<java::nio::ByteBuffer> dexBuffer,std::shared_ptr<java::lang::ClassLoader> parent);
	InMemoryDexClassLoader(std::shared_ptr<std::vector<java::nio::ByteBuffer>> dexBuffers,std::shared_ptr<java::lang::ClassLoader> parent);
public:
	virtual ~InMemoryDexClassLoader(){
	}

}; // class InMemoryDexClassLoader
}; // namespace dalvik::system

#endif //__dalvik_system_InMemoryDexClassLoader__

