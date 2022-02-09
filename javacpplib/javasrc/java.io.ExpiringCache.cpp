// CPP L:\smali2cpp20\x64\Release\out\java\io\ExpiringCache.smali
#include "java2ctype.h"
#include "java.io.ExpiringCache_S_1.h"
#include "java.io.ExpiringCache_S_Entry.h"
#include "java.io.ExpiringCache.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.util.Iterator.h"
#include "java.util.Map.h"
#include "java.util.Set.h"

// .method static synthetic -get0(Ljava/io/ExpiringCache;)I
int java::io::ExpiringCache::_get0(std::shared_ptr<java::io::ExpiringCache> _this)
{
	
	//    .param p0, "-this"    # Ljava/io/ExpiringCache;
	return _this->MAX_ENTRIES;

}
// .method constructor <init>()V
java::io::ExpiringCache::ExpiringCache()
{
	
	java::io::ExpiringCache::(0x7530);
	return;

}
// .method constructor <init>(J)V
java::io::ExpiringCache::ExpiringCache(long long millisUntilExpiration)
{
	
	std::shared_ptr<java::io::ExpiringCache_S_1> cVar0;
	
	//    .param p1, "millisUntilExpiration"    # J
	// 066    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->queryOverflow = 0x12c;
	this->MAX_ENTRIES = 0xc8;
	this->millisUntilExpiration = millisUntilExpiration;
	cVar0 = std::make_shared<java::io::ExpiringCache_S_1>(this);
	this->map = cVar0;
	return;

}
// .method private cleanup()V
void java::io::ExpiringCache::cleanup()
{
	
	std::shared_ptr<java::util::Set> keySet;
	std::shared<std::vector<std::vector<java::lang::String>>> keys;
	int i;
	std::shared_ptr<java::util::Iterator> key_S_iterator;
	std::shared_ptr<java::lang::String> key;
	int j;
	
	keySet = this->map->keySet();
	//    .local v5, "keySet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	keys = std::make_shared<std::vector<std::vector<java::lang::String>>>(keySet->size());
	//    .local v6, "keys":[Ljava/lang/String;
	i = 0x0;
	//    .local v0, "i":I
	key_S_iterator = keySet->iterator();
	//    .local v4, "key$iterator":Ljava/util/Iterator;
label_goto_11:
	if ( !(key_S_iterator->hasNext()) )  
		goto label_cond_23;
	key = key_S_iterator->next();
	key->checkCast("java::lang::String");
	//    .local v3, "key":Ljava/lang/String;
	//    .end local v0    # "i":I
	//    .local v1, "i":I
	keys[i] = key;
	i = ( i + 0x1);
	//    .end local v1    # "i":I
	//    .restart local v0    # "i":I
	goto label_goto_11;
	// 149    .line 127
	// 150    .end local v3    # "key":Ljava/lang/String;
label_cond_23:
	j = 0x0;
	//    .local v2, "j":I
label_goto_24:
	if ( j >= keys->size() )
		goto label_cond_2f;
	this->entryFor(keys[j]);
	j = ( j + 0x1);
	goto label_goto_24;
	// 170    .line 130
label_cond_2f:
	this->queryCount = 0x0;
	return;

}
// .method private entryFor(Ljava/lang/String;)Ljava/io/ExpiringCache$Entry;
std::shared_ptr<java::io::ExpiringCache_S_Entry> java::io::ExpiringCache::entryFor(std::shared_ptr<java::lang::String> key)
{
	
	std::shared_ptr<java::io::ExpiringCache_S_Entry> entry;
	long long delta;
	
	//    .param p1, "key"    # Ljava/lang/String;
	entry = this->map->get(key);
	entry->checkCast("java::io::ExpiringCache_S_Entry");
	//    .local v2, "entry":Ljava/io/ExpiringCache$Entry;
	if ( !(entry) )  
		goto label_cond_26;
	delta = (java::lang::System::currentTimeMillis({const[class].FS-Param}) - entry->timestamp());
	//    .local v0, "delta":J
	if ( (delta > 0x0) < 0 ) 
		goto label_cond_20;
	if ( (delta > this->millisUntilExpiration) < 0 ) 
		goto label_cond_26;
label_cond_20:
	this->map->remove(key);
	//    .end local v0    # "delta":J
	//    .end local v2    # "entry":Ljava/io/ExpiringCache$Entry;
label_cond_26:
	return entry;

}
// .method declared-synchronized clear()V
void java::io::ExpiringCache::clear()
{
	
	this->monitor_enter();
	try {
	//label_try_start_1:
	this->map->clear();
	//label_try_end_6:
	}
	catch (...){
		goto label_catchall_8;
	}
	//    .catchall {:try_start_1 .. :try_end_6} :catchall_8
	this->monitor_exit();
	return;
label_catchall_8:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method declared-synchronized get(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::ExpiringCache::get(std::shared_ptr<java::lang::String> key)
{
	
	int cVar0;
	std::shared_ptr<java::io::ExpiringCache_S_Entry> entry;
	
	//    .param p1, "key"    # Ljava/lang/String;
	this->monitor_enter();
	try {
	//label_try_start_2:
	cVar0 = ( this->queryCount + 0x1);
	this->queryCount = cVar0;
	if ( cVar0 <  this->queryOverflow )
		goto label_cond_f;
	this->cleanup();
label_cond_f:
	entry = this->entryFor(key);
	//    .local v0, "entry":Ljava/io/ExpiringCache$Entry;
	if ( !(entry) )  
		goto label_cond_1b;
	//label_try_end_18:
	}
	catch (...){
		goto label_catchall_1d;
	}
	//    .catchall {:try_start_2 .. :try_end_18} :catchall_1d
	this->monitor_exit();
	return entry->val();
label_cond_1b:
	this->monitor_exit();
	return 0x0;
	// 319    .end local v0    # "entry":Ljava/io/ExpiringCache$Entry;
label_catchall_1d:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method declared-synchronized put(Ljava/lang/String;Ljava/lang/String;)V
void java::io::ExpiringCache::put(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::String> val)
{
	
	int cVar0;
	std::shared_ptr<java::io::ExpiringCache_S_Entry> entry;
	std::shared_ptr<java::io::ExpiringCache_S_Entry> cVar1;
	
	//    .param p1, "key"    # Ljava/lang/String;
	//    .param p2, "val"    # Ljava/lang/String;
	this->monitor_enter();
	try {
	//label_try_start_1:
	cVar0 = ( this->queryCount + 0x1);
	this->queryCount = cVar0;
	if ( cVar0 <  this->queryOverflow )
		goto label_cond_e;
	this->cleanup();
label_cond_e:
	entry = this->entryFor(key);
	//    .local v0, "entry":Ljava/io/ExpiringCache$Entry;
	if ( !(entry) )  
		goto label_cond_20;
	entry->setTimestamp(java::lang::System::currentTimeMillis({const[class].FS-Param}));
	entry->setVal(val);
	//label_try_end_1e:
	}
	catch (...){
		goto label_catchall_2f;
	}
	//    .catchall {:try_start_1 .. :try_end_1e} :catchall_2f
label_goto_1e:
	this->monitor_exit();
	return;
	// 379    .line 99
label_cond_20:
	try {
	//label_try_start_20:
	cVar1 = std::make_shared<java::io::ExpiringCache_S_Entry>(java::lang::System::currentTimeMillis({const[class].FS-Param}), val);
	this->map->put(key, cVar1);
	//label_try_end_2e:
	}
	catch (...){
		goto label_catchall_2f;
	}
	//    .catchall {:try_start_20 .. :try_end_2e} :catchall_2f
	goto label_goto_1e;
	// 398    .end local v0    # "entry":Ljava/io/ExpiringCache$Entry;
label_catchall_2f:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}


