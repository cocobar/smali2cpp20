// CPP L:\smali2cpp20\x64\Release\out\sun\nio\fs\UnixFileStoreAttributes.smali
#include "java2ctype.h"
#include "sun.nio.fs.UnixFileStoreAttributes.h"
#include "sun.nio.fs.UnixNativeDispatcher.h"
#include "sun.nio.fs.UnixPath.h"

// .method private constructor <init>()V
sun::nio::fs::UnixFileStoreAttributes::UnixFileStoreAttributes()
{
	
	// 022    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method static get(Lsun/nio/fs/UnixPath;)Lsun/nio/fs/UnixFileStoreAttributes;
std::shared_ptr<sun::nio::fs::UnixFileStoreAttributes> sun::nio::fs::UnixFileStoreAttributes::get(std::shared_ptr<sun::nio::fs::UnixPath> path)
{
	
	std::shared_ptr<sun::nio::fs::UnixFileStoreAttributes> attrs;
	
	//    .param p0, "path"    # Lsun/nio/fs/UnixPath;
	//    .annotation system Ldalvik/annotation/Throws;
	// 032        value = {
	// 033            Lsun/nio/fs/UnixException;
	// 034        }
	// 035    .end annotation
	attrs = std::make_shared<sun::nio::fs::UnixFileStoreAttributes>();
	//    .local v0, "attrs":Lsun/nio/fs/UnixFileStoreAttributes;
	sun::nio::fs::UnixNativeDispatcher::statvfs(path, attrs);
	return attrs;

}
// .method availableBlocks()J
long long sun::nio::fs::UnixFileStoreAttributes::availableBlocks()
{
	
	return this->f_bavail;

}
// .method blockSize()J
long long sun::nio::fs::UnixFileStoreAttributes::blockSize()
{
	
	return this->f_frsize;

}
// .method freeBlocks()J
long long sun::nio::fs::UnixFileStoreAttributes::freeBlocks()
{
	
	return this->f_bfree;

}
// .method totalBlocks()J
long long sun::nio::fs::UnixFileStoreAttributes::totalBlocks()
{
	
	return this->f_blocks;

}


