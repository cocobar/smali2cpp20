#ifndef __sun_security_util_Cache_S_CacheVisitor__
#define __sun_security_util_Cache_S_CacheVisitor__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\Cache$CacheVisitor.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.util.Map.h"

namespace sun::security::util{
template <typename K,typename V>
class Cache_S_CacheVisitor : public java::lang::Object {
protected:
private:
public:
	void visit(std::shared_ptr<java::util::Map<K,V>> var0);
	Cache_S_CacheVisitor(){ };
	virtual ~Cache_S_CacheVisitor(){ };

}; // class Cache_S_CacheVisitor
}; // namespace sun::security::util
// .method public abstract visit(Ljava/util/Map;)V
template <typename K,typename V>
void sun::security::util::Cache_S_CacheVisitor<K,V>::visit(std::shared_ptr<java::util::Map<K,V>> var0)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 031        value = {
	// 032            "(",
	// 033            "Ljava/util/Map",
	// 034            "<TK;TV;>;)V"
	// 035        }
	// 036    .end annotation

}

#endif //__sun_security_util_Cache_S_CacheVisitor__

