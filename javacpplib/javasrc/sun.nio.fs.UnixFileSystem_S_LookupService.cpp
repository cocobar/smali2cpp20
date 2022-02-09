// CPP L:\smali2cpp20\x64\Release\out\sun\nio\fs\UnixFileSystem$LookupService.smali
#include "java2ctype.h"
#include "sun.nio.fs.UnixFileSystem_S_LookupService_S_1.h"
#include "sun.nio.fs.UnixFileSystem_S_LookupService.h"

static sun::nio::fs::UnixFileSystem_S_LookupService::instance;
// .method static constructor <clinit>()V
void sun::nio::fs::UnixFileSystem_S_LookupService::static_cinit()
{
	
	std::shared_ptr<sun::nio::fs::UnixFileSystem_S_LookupService_S_1> cVar0;
	
	cVar0 = std::make_shared<sun::nio::fs::UnixFileSystem_S_LookupService_S_1>();
	sun::nio::fs::UnixFileSystem_S_LookupService::instance = cVar0;
	return;

}
// .method private constructor <init>()V
sun::nio::fs::UnixFileSystem_S_LookupService::UnixFileSystem_S_LookupService()
{
	
	// 049    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}


