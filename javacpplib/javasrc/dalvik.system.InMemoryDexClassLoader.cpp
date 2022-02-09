// CPP L:\smali2cpp20\x64\Release\out\dalvik\system\InMemoryDexClassLoader.smali
#include "java2ctype.h"
#include "dalvik.system.BaseDexClassLoader.h"
#include "dalvik.system.InMemoryDexClassLoader.h"
#include "java.lang.ClassLoader.h"
#include "java.nio.ByteBuffer.h"

// .method public constructor <init>(Ljava/nio/ByteBuffer;Ljava/lang/ClassLoader;)V
dalvik::system::InMemoryDexClassLoader::InMemoryDexClassLoader(std::shared_ptr<java::nio::ByteBuffer> dexBuffer,std::shared_ptr<java::lang::ClassLoader> parent)
{
	
	std::shared<std::vector<std::vector<java::nio::ByteBuffer>>> cVar0;
	
	//    .param p1, "dexBuffer"    # Ljava/nio/ByteBuffer;
	//    .param p2, "parent"    # Ljava/lang/ClassLoader;
	cVar0 = std::make_shared<std::vector<std::vector<java::nio::ByteBuffer>>>(0x1);
	cVar0[0x0] = dexBuffer;
	dalvik::system::InMemoryDexClassLoader::(cVar0, parent);
	return;

}
// .method public constructor <init>([Ljava/nio/ByteBuffer;Ljava/lang/ClassLoader;)V
dalvik::system::InMemoryDexClassLoader::InMemoryDexClassLoader(std::shared_ptr<std::vector<java::nio::ByteBuffer>> dexBuffers,std::shared_ptr<java::lang::ClassLoader> parent)
{
	
	//    .param p1, "dexBuffers"    # [Ljava/nio/ByteBuffer;
	//    .param p2, "parent"    # Ljava/lang/ClassLoader;
	dalvik::system::BaseDexClassLoader::(dexBuffers, parent);
	return;

}


