// CPP L:\smali2cpp20\x64\Release\out\java\io\FileSystem.smali
#include "java2ctype.h"
#include "java.io.FileSystem.h"
#include "java.lang.String.h"
#include "java.lang.System.h"

static java::io::FileSystem::ACCESS_EXECUTE = 0x1;
static java::io::FileSystem::ACCESS_OK = 0x8;
static java::io::FileSystem::ACCESS_READ = 0x4;
static java::io::FileSystem::ACCESS_WRITE = 0x2;
static java::io::FileSystem::BA_DIRECTORY = 0x4;
static java::io::FileSystem::BA_EXISTS = 0x1;
static java::io::FileSystem::BA_HIDDEN = 0x8;
static java::io::FileSystem::BA_REGULAR = 0x2;
static java::io::FileSystem::SPACE_FREE = 0x1;
static java::io::FileSystem::SPACE_TOTAL = 0x0;
static java::io::FileSystem::SPACE_USABLE = 0x2;
static java::io::FileSystem::useCanonCaches;
static java::io::FileSystem::useCanonPrefixCache;
// .method static constructor <clinit>()V
void java::io::FileSystem::static_cinit()
{
	
	bool cVar0;
	
	cVar0 = 0x0;
	java::io::FileSystem::useCanonCaches = cVar0;
	java::io::FileSystem::useCanonPrefixCache = cVar0;
	java::io::FileSystem::useCanonCaches = java::io::FileSystem::getBooleanProperty(std::make_shared<java::lang::String>(std::make_shared<char[]>("sun.io.useCanonCaches")), java::io::FileSystem::useCanonCaches);
	java::io::FileSystem::useCanonPrefixCache = java::io::FileSystem::getBooleanProperty(std::make_shared<java::lang::String>(std::make_shared<char[]>("sun.io.useCanonPrefixCache")), java::io::FileSystem::useCanonPrefixCache);
	return;

}
// .method constructor <init>()V
java::io::FileSystem::FileSystem()
{
	
	// 082    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method private static getBooleanProperty(Ljava/lang/String;Z)Z
bool java::io::FileSystem::getBooleanProperty(std::shared_ptr<java::lang::String> prop,bool defaultVal)
{
	
	std::shared_ptr<java::lang::String> val;
	
	//    .param p0, "prop"    # Ljava/lang/String;
	//    .param p1, "defaultVal"    # Z
	val = java::lang::System::getProperty(prop);
	//    .local v0, "val":Ljava/lang/String;
	if ( val )     
		goto label_cond_7;
	return defaultVal;
	// 104    .line 238
label_cond_7:
	if ( !(val->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("true")))) )  
		goto label_cond_12;
	return 0x1;
	// 119    .line 241
label_cond_12:
	return 0x0;

}
// .method public abstract canonicalize(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::FileSystem::canonicalize(std::shared_ptr<java::lang::String> var0)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 130        value = {
	// 131            Ljava/io/IOException;
	// 132        }
	// 133    .end annotation

}
// .method public abstract createFileExclusively(Ljava/lang/String;)Z
bool java::io::FileSystem::createFileExclusively(std::shared_ptr<java::lang::String> var0)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 147        value = {
	// 148            Ljava/io/IOException;
	// 149        }
	// 150    .end annotation

}


