// CPP L:\smali2cpp20\x64\Release\out\dalvik\system\TemporaryDirectory.smali
#include "java2ctype.h"
#include "dalvik.system.TemporaryDirectory.h"
#include "java.io.File.h"
#include "java.lang.String.h"

// .method public constructor <init>()V
dalvik::system::TemporaryDirectory::TemporaryDirectory()
{
	
	// 012    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static declared-synchronized setUpDirectory(Ljava/io/File;)V
void dalvik::system::TemporaryDirectory::setUpDirectory(std::shared_ptr<java::io::File> baseDir)
{
	
	std::shared_ptr<dalvik::system::TemporaryDirectory> cVar0;
	
	//    .param p0, "baseDir"    # Ljava/io/File;
	cVar0 = dalvik::system::TemporaryDirectory();
	cVar0->monitor_enter();
	cVar0->monitor_exit();
	return;

}
// .method public static setUpDirectory(Ljava/lang/String;)V
void dalvik::system::TemporaryDirectory::setUpDirectory(std::shared_ptr<java::lang::String> baseDir)
{
	
	//    .param p0, "baseDir"    # Ljava/lang/String;
	return;

}


