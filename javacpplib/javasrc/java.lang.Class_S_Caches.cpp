// CPP L:\smali2cpp20\x64\Release\out\java\lang\Class$Caches.smali
#include "java2ctype.h"
#include "java.lang.Class_S_Caches.h"
#include "libcore.util.BasicLruCache.h"

static java::lang::Class_S_Caches::genericInterfaces;
// .method static synthetic -get0()Llibcore/util/BasicLruCache;
std::shared_ptr<libcore::util::BasicLruCache> java::lang::Class_S_Caches::_get0()
{
	
	return java::lang::Class_S_Caches::genericInterfaces;

}
// .method static constructor <clinit>()V
void java::lang::Class_S_Caches::static_cinit()
{
	
	std::shared_ptr<libcore::util::BasicLruCache> cVar0;
	
	cVar0 = std::make_shared<libcore::util::BasicLruCache>(0x8);
	java::lang::Class_S_Caches::genericInterfaces = cVar0;
	return;

}
// .method private constructor <init>()V
java::lang::Class_S_Caches::Class_S_Caches()
{
	
	// 064    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}


