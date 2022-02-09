// CPP L:\smali2cpp20\x64\Release\out\java\lang\Long$LongCache.smali
#include "java2ctype.h"
#include "java.lang.Long_S_LongCache.h"
#include "java.lang.Long.h"

static java::lang::Long_S_LongCache::cache;
// .method static constructor <clinit>()V
void java::lang::Long_S_LongCache::static_cinit()
{
	
	int i;
	std::shared_ptr<java::lang::Long> cVar0;
	
	java::lang::Long_S_LongCache::cache = std::make_shared<std::vector<std::vector<java::lang::Long>>>(0x100);
	i = 0x0;
	//    .local v0, "i":I
label_goto_7:
	if ( i >= java::lang::Long_S_LongCache::cache->size() )
		goto label_cond_1b;
	cVar0 = std::make_shared<java::lang::Long>((long long)(( i + -0x80)));
	java::lang::Long_S_LongCache::cache[i] = cVar0;
	i = ( i + 0x1);
	goto label_goto_7;
	// 062    .line 807
label_cond_1b:
	return;

}
// .method private constructor <init>()V
java::lang::Long_S_LongCache::Long_S_LongCache()
{
	
	// 072    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}


