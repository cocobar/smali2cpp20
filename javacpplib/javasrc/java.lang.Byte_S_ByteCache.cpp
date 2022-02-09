// CPP L:\smali2cpp20\x64\Release\out\java\lang\Byte$ByteCache.smali
#include "java2ctype.h"
#include "java.lang.Byte_S_ByteCache.h"
#include "java.lang.Byte.h"

static java::lang::Byte_S_ByteCache::cache;
// .method static constructor <clinit>()V
void java::lang::Byte_S_ByteCache::static_cinit()
{
	
	int i;
	std::shared_ptr<java::lang::Byte> cVar0;
	
	java::lang::Byte_S_ByteCache::cache = std::make_shared<std::vector<std::vector<java::lang::Byte>>>(0x100);
	i = 0x0;
	//    .local v0, "i":I
label_goto_7:
	if ( i >= java::lang::Byte_S_ByteCache::cache->size() )
		goto label_cond_1b;
	cVar0 = std::make_shared<java::lang::Byte>((unsigned char)(( i + -0x80)));
	java::lang::Byte_S_ByteCache::cache[i] = cVar0;
	i = ( i + 0x1);
	goto label_goto_7;
	// 062    .line 77
label_cond_1b:
	return;

}
// .method private constructor <init>()V
java::lang::Byte_S_ByteCache::Byte_S_ByteCache()
{
	
	// 072    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}


