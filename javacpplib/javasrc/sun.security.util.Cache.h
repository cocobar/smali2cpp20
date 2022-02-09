#ifndef __sun_security_util_Cache__
#define __sun_security_util_Cache__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\Cache.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "sun.security.util.Cache_S_CacheVisitor.h"
#include "sun.security.util.MemoryCache.h"
#include "sun.security.util.NullCache.h"

namespace sun::security::util{
template <typename K,typename V>
class Cache : public java::lang::Object {
protected:
	Cache();
private:
public:
	static std::shared_ptr<sun::security::util::Cache<K,V>> newHardMemoryCache(int size);
	static std::shared_ptr<sun::security::util::Cache<K,V>> newHardMemoryCache(int size,int timeout);
	static std::shared_ptr<sun::security::util::Cache<K,V>> newNullCache();
	static std::shared_ptr<sun::security::util::Cache<K,V>> newSoftMemoryCache(int size);
	static std::shared_ptr<sun::security::util::Cache<K,V>> newSoftMemoryCache(int size,int timeout);
	void accept(std::shared_ptr<sun::security::util::Cache_S_CacheVisitor<K,V>> var0);
	void clear() = 0;
	std::shared_ptr<V> get(std::shared_ptr<java::lang::Object> var0);
	void put(std::shared_ptr<K> var0,std::shared_ptr<V> var1);
	void remove(std::shared_ptr<java::lang::Object> var0) = 0;
	void setCapacity(int var0) = 0;
	void setTimeout(int var0) = 0;
	int size() = 0;
public:
	virtual ~Cache(){
	}

}; // class Cache
}; // namespace sun::security::util
// .method protected constructor <init>()V
template <typename K,typename V>
sun::security::util::Cache<K,V>::Cache()
{
	
	//    .local p0, "this":Lsun/security/util/Cache;, "Lsun/security/util/Cache<TK;TV;>;"
	// 033    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static newHardMemoryCache(I)Lsun/security/util/Cache;
template <typename K,typename V>
std::shared_ptr<sun::security::util::Cache<K,V>> sun::security::util::Cache<K,V>::newHardMemoryCache(int size)
{
	
	std::shared_ptr<sun::security::util::MemoryCache> cVar0;
	
	//    .param p0, "size"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 043        value = {
	// 044            "<K:",
	// 045            "Ljava/lang/Object;",
	// 046            "V:",
	// 047            "Ljava/lang/Object;",
	// 048            ">(I)",
	// 049            "Lsun/security/util/Cache",
	// 050            "<TK;TV;>;"
	// 051        }
	// 052    .end annotation
	cVar0 = std::make_shared<sun::security::util::MemoryCache>(0x0, size);
	return cVar0;

}
// .method public static newHardMemoryCache(II)Lsun/security/util/Cache;
template <typename K,typename V>
std::shared_ptr<sun::security::util::Cache<K,V>> sun::security::util::Cache<K,V>::newHardMemoryCache(int size,int timeout)
{
	
	std::shared_ptr<sun::security::util::MemoryCache> cVar0;
	
	//    .param p0, "size"    # I
	//    .param p1, "timeout"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 070        value = {
	// 071            "<K:",
	// 072            "Ljava/lang/Object;",
	// 073            "V:",
	// 074            "Ljava/lang/Object;",
	// 075            ">(II)",
	// 076            "Lsun/security/util/Cache",
	// 077            "<TK;TV;>;"
	// 078        }
	// 079    .end annotation
	cVar0 = std::make_shared<sun::security::util::MemoryCache>(0x0, size, timeout);
	return cVar0;

}
// .method public static newNullCache()Lsun/security/util/Cache;
template <typename K,typename V>
std::shared_ptr<sun::security::util::Cache<K,V>> sun::security::util::Cache<K,V>::newNullCache()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 095        value = {
	// 096            "<K:",
	// 097            "Ljava/lang/Object;",
	// 098            "V:",
	// 099            "Ljava/lang/Object;",
	// 100            ">()",
	// 101            "Lsun/security/util/Cache",
	// 102            "<TK;TV;>;"
	// 103        }
	// 104    .end annotation
	return sun::security::util::NullCache::INSTANCE;

}
// .method public static newSoftMemoryCache(I)Lsun/security/util/Cache;
template <typename K,typename V>
std::shared_ptr<sun::security::util::Cache<K,V>> sun::security::util::Cache<K,V>::newSoftMemoryCache(int size)
{
	
	std::shared_ptr<sun::security::util::MemoryCache> cVar0;
	
	//    .param p0, "size"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 117        value = {
	// 118            "<K:",
	// 119            "Ljava/lang/Object;",
	// 120            "V:",
	// 121            "Ljava/lang/Object;",
	// 122            ">(I)",
	// 123            "Lsun/security/util/Cache",
	// 124            "<TK;TV;>;"
	// 125        }
	// 126    .end annotation
	cVar0 = std::make_shared<sun::security::util::MemoryCache>(0x1, size);
	return cVar0;

}
// .method public static newSoftMemoryCache(II)Lsun/security/util/Cache;
template <typename K,typename V>
std::shared_ptr<sun::security::util::Cache<K,V>> sun::security::util::Cache<K,V>::newSoftMemoryCache(int size,int timeout)
{
	
	std::shared_ptr<sun::security::util::MemoryCache> cVar0;
	
	//    .param p0, "size"    # I
	//    .param p1, "timeout"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 144        value = {
	// 145            "<K:",
	// 146            "Ljava/lang/Object;",
	// 147            "V:",
	// 148            "Ljava/lang/Object;",
	// 149            ">(II)",
	// 150            "Lsun/security/util/Cache",
	// 151            "<TK;TV;>;"
	// 152        }
	// 153    .end annotation
	cVar0 = std::make_shared<sun::security::util::MemoryCache>(0x1, size, timeout);
	return cVar0;

}
// .method public abstract accept(Lsun/security/util/Cache$CacheVisitor;)V
template <typename K,typename V>
void sun::security::util::Cache<K,V>::accept(std::shared_ptr<sun::security::util::Cache_S_CacheVisitor<K,V>> var0)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 170        value = {
	// 171            "(",
	// 172            "Lsun/security/util/Cache$CacheVisitor",
	// 173            "<TK;TV;>;)V"
	// 174        }
	// 175    .end annotation

}
// .method public abstract get(Ljava/lang/Object;)Ljava/lang/Object;
template <typename K,typename V>
std::shared_ptr<V> sun::security::util::Cache<K,V>::get(std::shared_ptr<java::lang::Object> var0)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 183        value = {
	// 184            "(",
	// 185            "Ljava/lang/Object;",
	// 186            ")TV;"
	// 187        }
	// 188    .end annotation

}
// .method public abstract put(Ljava/lang/Object;Ljava/lang/Object;)V
template <typename K,typename V>
void sun::security::util::Cache<K,V>::put(std::shared_ptr<K> var0,std::shared_ptr<V> var1)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 193        value = {
	// 194            "(TK;TV;)V"
	// 195        }
	// 196    .end annotation

}

#endif //__sun_security_util_Cache__

