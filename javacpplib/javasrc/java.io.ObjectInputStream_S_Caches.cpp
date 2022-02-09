// CPP L:\smali2cpp20\x64\Release\out\java\io\ObjectInputStream$Caches.smali
#include "java2ctype.h"
#include "java.io.ObjectInputStream_S_Caches.h"
#include "java.lang.ref.ReferenceQueue.h"
#include "java.util.concurrent.ConcurrentHashMap.h"

static java::io::ObjectInputStream_S_Caches::subclassAudits;
static java::io::ObjectInputStream_S_Caches::subclassAuditsQueue;
// .method static constructor <clinit>()V
void java::io::ObjectInputStream_S_Caches::static_cinit()
{
	
	std::shared_ptr<java::util::concurrent::ConcurrentHashMap> cVar0;
	std::shared_ptr<java::lang::ref::ReferenceQueue> cVar1;
	
	cVar0 = std::make_shared<java::util::concurrent::ConcurrentHashMap>();
	java::io::ObjectInputStream_S_Caches::subclassAudits = cVar0;
	cVar1 = std::make_shared<java::lang::ref::ReferenceQueue>();
	java::io::ObjectInputStream_S_Caches::subclassAuditsQueue = cVar1;
	return;

}
// .method private constructor <init>()V
java::io::ObjectInputStream_S_Caches::ObjectInputStream_S_Caches()
{
	
	// 072    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}


