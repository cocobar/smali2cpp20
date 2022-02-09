// CPP L:\smali2cpp20\x64\Release\out\sun\nio\fs\UnixFileSystemProvider$1.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.nio.file.Path.h"
#include "sun.nio.fs.UnixFileSystemProvider_S_1.h"
#include "sun.nio.fs.UnixFileSystemProvider.h"

// .method constructor <init>(Lsun/nio/fs/UnixFileSystemProvider;)V
sun::nio::fs::UnixFileSystemProvider_S_1::UnixFileSystemProvider_S_1(std::shared_ptr<sun::nio::fs::UnixFileSystemProvider> this_S_0)
{
	
	//    .param p1, "this$0"    # Lsun/nio/fs/UnixFileSystemProvider;
	this->this_S_0 = this_S_0;
	// 031    invoke-direct {p0}, Lsun/nio/fs/AbstractFileTypeDetector;-><init>()V
	return;

}
// .method public implProbeContentType(Ljava/nio/file/Path;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::nio::fs::UnixFileSystemProvider_S_1::implProbeContentType(std::shared_ptr<java::nio::file::Path> file)
{
	
	//    .param p1, "file"    # Ljava/nio/file/Path;
	return 0x0;

}


