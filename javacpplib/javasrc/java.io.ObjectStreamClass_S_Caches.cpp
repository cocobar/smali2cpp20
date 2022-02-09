// CPP L:\smali2cpp20\x64\Release\out\java\io\ObjectStreamClass$Caches.smali
#include "java2ctype.h"
#include "java.io.ObjectStreamClass_S_Caches.h"
#include "java.lang.ref.ReferenceQueue.h"
#include "java.util.concurrent.ConcurrentHashMap.h"

static java::io::ObjectStreamClass_S_Caches::localDescs;
static java::io::ObjectStreamClass_S_Caches::localDescsQueue;
static java::io::ObjectStreamClass_S_Caches::reflectors;
static java::io::ObjectStreamClass_S_Caches::reflectorsQueue;
// .method static synthetic -get0()Ljava/lang/ref/ReferenceQueue;
std::shared_ptr<java::lang::ref::ReferenceQueue> java::io::ObjectStreamClass_S_Caches::_get0()
{
	
	return java::io::ObjectStreamClass_S_Caches::localDescsQueue;

}
// .method static synthetic -get1()Ljava/lang/ref/ReferenceQueue;
std::shared_ptr<java::lang::ref::ReferenceQueue> java::io::ObjectStreamClass_S_Caches::_get1()
{
	
	return java::io::ObjectStreamClass_S_Caches::reflectorsQueue;

}
// .method static constructor <clinit>()V
void java::io::ObjectStreamClass_S_Caches::static_cinit()
{
	
	std::shared_ptr<java::util::concurrent::ConcurrentHashMap> cVar0;
	std::shared_ptr<java::util::concurrent::ConcurrentHashMap> cVar1;
	std::shared_ptr<java::lang::ref::ReferenceQueue> cVar2;
	std::shared_ptr<java::lang::ref::ReferenceQueue> cVar3;
	
	cVar0 = std::make_shared<java::util::concurrent::ConcurrentHashMap>();
	java::io::ObjectStreamClass_S_Caches::localDescs = cVar0;
	cVar1 = std::make_shared<java::util::concurrent::ConcurrentHashMap>();
	java::io::ObjectStreamClass_S_Caches::reflectors = cVar1;
	cVar2 = std::make_shared<java::lang::ref::ReferenceQueue>();
	java::io::ObjectStreamClass_S_Caches::localDescsQueue = cVar2;
	cVar3 = std::make_shared<java::lang::ref::ReferenceQueue>();
	java::io::ObjectStreamClass_S_Caches::reflectorsQueue = cVar3;
	return;

}
// .method private constructor <init>()V
java::io::ObjectStreamClass_S_Caches::ObjectStreamClass_S_Caches()
{
	
	// 127    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}


