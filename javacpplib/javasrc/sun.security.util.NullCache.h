#ifndef __sun_security_util_NullCache__
#define __sun_security_util_NullCache__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\NullCache.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "sun.security.util.Cache_S_CacheVisitor.h"
#include "sun.security.util.Cache.h"

namespace sun::security::util{
template <typename K,typename V>
class NullCache : public sun::security::util::Cache<K,V> {
protected:
private:
	NullCache();
public:
	static std::shared_ptr<sun::security::util::Cache<java::lang::Object,java::lang::Object>> INSTANCE;
	static void static_cinit();
	void accept(std::shared_ptr<sun::security::util::Cache_S_CacheVisitor<K,V>> visitor);
	void clear();
	std::shared_ptr<V> get(std::shared_ptr<java::lang::Object> key);
	void put(std::shared_ptr<K> key,std::shared_ptr<V> value);
	void remove(std::shared_ptr<java::lang::Object> key);
	void setCapacity(int size);
	void setTimeout(int timeout);
	int size();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::util::NullCache<K,V>::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~NullCache(){
	}

}; // class NullCache
}; // namespace sun::security::util
// .method static constructor <clinit>()V
template <typename K,typename V>
static void static_cinit()
{
	
	std::shared_ptr<sun::security::util::NullCache<K,V>> cVar0;
	
	cVar0 = std::make_shared<sun::security::util::NullCache<K,V>>();
	sun::security::util::NullCache<K,V>::INSTANCE = cVar0;
	return;

}
// .method private constructor <init>()V
template <typename K,typename V>
sun::security::util::NullCache<K,V>::NullCache()
{
	
	//    .local p0, "this":Lsun/security/util/NullCache;, "Lsun/security/util/NullCache<TK;TV;>;"
	// 056    invoke-direct {p0}, Lsun/security/util/Cache;-><init>()V
	return;

}
// .method public accept(Lsun/security/util/Cache$CacheVisitor;)V
template <typename K,typename V>
void sun::security::util::NullCache<K,V>::accept(std::shared_ptr<sun::security::util::Cache_S_CacheVisitor<K,V>> visitor)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 067        value = {
	// 068            "(",
	// 069            "Lsun/security/util/Cache$CacheVisitor",
	// 070            "<TK;TV;>;)V"
	// 071        }
	// 072    .end annotation
	//    .local p0, "this":Lsun/security/util/NullCache;, "Lsun/security/util/NullCache<TK;TV;>;"
	//    .local p1, "visitor":Lsun/security/util/Cache$CacheVisitor;, "Lsun/security/util/Cache$CacheVisitor<TK;TV;>;"
	return;

}
// .method public clear()V
template <typename K,typename V>
void sun::security::util::NullCache<K,V>::clear()
{
	
	//    .local p0, "this":Lsun/security/util/NullCache;, "Lsun/security/util/NullCache<TK;TV;>;"
	return;

}
// .method public get(Ljava/lang/Object;)Ljava/lang/Object;
template <typename K,typename V>
std::shared_ptr<V> sun::security::util::NullCache<K,V>::get(std::shared_ptr<java::lang::Object> key)
{
	
	//    .param p1, "key"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Signature;
	// 094        value = {
	// 095            "(",
	// 096            "Ljava/lang/Object;",
	// 097            ")TV;"
	// 098        }
	// 099    .end annotation
	//    .local p0, "this":Lsun/security/util/NullCache;, "Lsun/security/util/NullCache<TK;TV;>;"
	return 0x0;

}
// .method public put(Ljava/lang/Object;Ljava/lang/Object;)V
template <typename K,typename V>
void sun::security::util::NullCache<K,V>::put(std::shared_ptr<K> key,std::shared_ptr<V> value)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 112        value = {
	// 113            "(TK;TV;)V"
	// 114        }
	// 115    .end annotation
	//    .local p0, "this":Lsun/security/util/NullCache;, "Lsun/security/util/NullCache<TK;TV;>;"
	//    .local p1, "key":Ljava/lang/Object;, "TK;"
	//    .local p2, "value":Ljava/lang/Object;, "TV;"
	return;

}
// .method public remove(Ljava/lang/Object;)V
template <typename K,typename V>
void sun::security::util::NullCache<K,V>::remove(std::shared_ptr<java::lang::Object> key)
{
	
	//    .param p1, "key"    # Ljava/lang/Object;
	//    .local p0, "this":Lsun/security/util/NullCache;, "Lsun/security/util/NullCache<TK;TV;>;"
	return;

}
// .method public setCapacity(I)V
template <typename K,typename V>
void sun::security::util::NullCache<K,V>::setCapacity(int size)
{
	
	//    .param p1, "size"    # I
	//    .local p0, "this":Lsun/security/util/NullCache;, "Lsun/security/util/NullCache<TK;TV;>;"
	return;

}
// .method public setTimeout(I)V
template <typename K,typename V>
void sun::security::util::NullCache<K,V>::setTimeout(int timeout)
{
	
	//    .param p1, "timeout"    # I
	//    .local p0, "this":Lsun/security/util/NullCache;, "Lsun/security/util/NullCache<TK;TV;>;"
	return;

}
// .method public size()I
template <typename K,typename V>
int sun::security::util::NullCache<K,V>::size()
{
	
	//    .local p0, "this":Lsun/security/util/NullCache;, "Lsun/security/util/NullCache<TK;TV;>;"
	return 0x0;

}

#endif //__sun_security_util_NullCache__

