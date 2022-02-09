// CPP L:\smali2cpp20\x64\Release\out\sun\nio\fs\UnixFileSystem$2.smali
#include "java2ctype.h"
#include "java.nio.file.FileStore.h"
#include "java.util.Iterator.h"
#include "sun.nio.fs.UnixFileSystem_S_2.h"
#include "sun.nio.fs.UnixFileSystem_S_FileStoreIterator.h"
#include "sun.nio.fs.UnixFileSystem.h"

// .method constructor <init>(Lsun/nio/fs/UnixFileSystem;)V
sun::nio::fs::UnixFileSystem_S_2::UnixFileSystem_S_2(std::shared_ptr<sun::nio::fs::UnixFileSystem> this_S_0)
{
	
	//    .param p1, "this$0"    # Lsun/nio/fs/UnixFileSystem;
	this->this_S_0 = this_S_0;
	// 044    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public iterator()Ljava/util/Iterator;
std::shared_ptr<java::util::Iterator<java::nio::file::FileStore>> sun::nio::fs::UnixFileSystem_S_2::iterator()
{
	
	std::shared_ptr<sun::nio::fs::UnixFileSystem_S_FileStoreIterator> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 055        value = {
	// 056            "()",
	// 057            "Ljava/util/Iterator",
	// 058            "<",
	// 059            "Ljava/nio/file/FileStore;",
	// 060            ">;"
	// 061        }
	// 062    .end annotation
	cVar0 = std::make_shared<sun::nio::fs::UnixFileSystem_S_FileStoreIterator>(this->this_S_0);
	return cVar0;

}


