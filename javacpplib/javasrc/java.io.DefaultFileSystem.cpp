// CPP L:\smali2cpp20\x64\Release\out\java\io\DefaultFileSystem.smali
#include "java2ctype.h"
#include "java.io.DefaultFileSystem.h"
#include "java.io.FileSystem.h"
#include "java.io.UnixFileSystem.h"

// .method constructor <init>()V
java::io::DefaultFileSystem::DefaultFileSystem()
{
	
	// 012    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static getFileSystem()Ljava/io/FileSystem;
std::shared_ptr<java::io::FileSystem> java::io::DefaultFileSystem::getFileSystem()
{
	
	std::shared_ptr<java::io::UnixFileSystem> cVar0;
	
	cVar0 = std::make_shared<java::io::UnixFileSystem>();
	return cVar0;

}


