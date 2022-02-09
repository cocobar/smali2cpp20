// CPP L:\smali2cpp20\x64\Release\out\sun\nio\fs\UnixFileStore$1.smali
#include "java2ctype.h"
#include "java.util.Properties.h"
#include "sun.nio.fs.UnixFileStore_S_1.h"
#include "sun.nio.fs.UnixFileStore.h"

// .method constructor <init>(Lsun/nio/fs/UnixFileStore;)V
sun::nio::fs::UnixFileStore_S_1::UnixFileStore_S_1(std::shared_ptr<sun::nio::fs::UnixFileStore> this_S_0)
{
	
	//    .param p1, "this$0"    # Lsun/nio/fs/UnixFileStore;
	this->this_S_0 = this_S_0;
	// 044    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public run()Ljava/util/Properties;
std::shared_ptr<java::util::Properties> sun::nio::fs::UnixFileStore_S_1::run()
{
	
	return sun::nio::fs::UnixFileStore::-wrap0({const[class].FS-Param});

}


