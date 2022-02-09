// CPP L:\smali2cpp20\x64\Release\out\java\lang\Character$CharacterCache.smali
#include "java2ctype.h"
#include "java.lang.Character_S_CharacterCache.h"
#include "java.lang.Character.h"

static java::lang::Character_S_CharacterCache::cache;
// .method static constructor <clinit>()V
void java::lang::Character_S_CharacterCache::static_cinit()
{
	
	int i;
	std::shared_ptr<java::lang::Character> cVar0;
	
	java::lang::Character_S_CharacterCache::cache = std::make_shared<std::vector<std::vector<java::lang::Character>>>(0x80);
	i = 0x0;
	//    .local v0, "i":I
label_goto_7:
	if ( i >= java::lang::Character_S_CharacterCache::cache->size() )
		goto label_cond_19;
	cVar0 = std::make_shared<java::lang::Character>((char)(i));
	java::lang::Character_S_CharacterCache::cache[i] = cVar0;
	i = ( i + 0x1);
	goto label_goto_7;
	// 060    .line 4565
label_cond_19:
	return;

}
// .method private constructor <init>()V
java::lang::Character_S_CharacterCache::Character_S_CharacterCache()
{
	
	// 070    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}


