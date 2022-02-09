// CPP L:\smali2cpp20\x64\Release\out\java\io\ExpiringCache$1.smali
#include "java2ctype.h"
#include "java.io.ExpiringCache_S_1.h"
#include "java.io.ExpiringCache_S_Entry.h"
#include "java.io.ExpiringCache.h"
#include "java.lang.String.h"
#include "java.util.Map_S_Entry.h"

// .method constructor <init>(Ljava/io/ExpiringCache;)V
java::io::ExpiringCache_S_1::ExpiringCache_S_1(std::shared_ptr<java::io::ExpiringCache> this_S_0)
{
	
	//    .param p1, "this$0"    # Ljava/io/ExpiringCache;
	this->this_S_0 = this_S_0;
	// 041    invoke-direct {p0}, Ljava/util/LinkedHashMap;-><init>()V
	return;

}
// .method protected removeEldestEntry(Ljava/util/Map$Entry;)Z
bool java::io::ExpiringCache_S_1::removeEldestEntry(std::shared_ptr<java::util::Map_S_Entry<java::lang::String,java::io::ExpiringCache_S_Entry>> eldest)
{
	
	bool cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 052        value = {
	// 053            "(",
	// 054            "Ljava/util/Map$Entry",
	// 055            "<",
	// 056            "Ljava/lang/String;",
	// 057            "Ljava/io/ExpiringCache$Entry;",
	// 058            ">;)Z"
	// 059        }
	// 060    .end annotation
	//    .local p1, "eldest":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/io/ExpiringCache$Entry;>;"
	if ( this->size() <= java::io::ExpiringCache::-get0(this->this_S_0) )
		goto label_cond_e;
	cVar0 = 0x1;
label_goto_d:
	return cVar0;
label_cond_e:
	cVar0 = 0x0;
	goto label_goto_d;

}


